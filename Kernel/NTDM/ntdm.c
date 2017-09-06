#include <ntddk.h>

typedef PIO_STACK_LOCATION PSTACK;

#define IOCONTROL_BASE 0x800
#define IOCONTROL_CODE(x) CTL_CODE(FILE_DEVICE_UNKNOWN, IOCONTROL_BASE + x, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_HEL IOCONTROL_CODE(0)
#define IOCTL_PRT IOCONTROL_CODE(1)
#define IOCTL_BYE IOCONTROL_CODE(2)

NTSTATUS DispatchCommon(PDEVICE_OBJECT pDeviceObject, PIRP pIrp)
{
    pIrp->IoStatus.Status = STATUS_SUCCESS;
    pIrp->IoStatus.Information = 0;

    IoCompleteRequest(pIrp, IO_NO_INCREMENT);
    return STATUS_SUCCESS;
}

NTSTATUS DispatchCreate(PDEVICE_OBJECT pDeviceObject, PIRP pIrp)
{
    DbgPrint("DispatchCreate\r\n");

    pIrp->IoStatus.Status = STATUS_SUCCESS;
    pIrp->IoStatus.Information = 0;

    IoCompleteRequest(pIrp, IO_NO_INCREMENT);
    return STATUS_SUCCESS;
}

NTSTATUS DispatchRead(PDEVICE_OBJECT pDeviceObject, PIRP pIrp)
{
    UNICODE_STRING src = RTL_CONSTANT_STRING(L"HELLO DispatchRead");

    PSTACK pStack = IoGetCurrentIrpStackLocation(pIrp);

    ULONG rLength = (pStack->Parameters.Read.Length) > src.Length ? src.Length : pStack->Parameters.Read.Length;

    RtlCopyMemory(pIrp->AssociatedIrp.SystemBuffer, src.Buffer, rLength);

    DbgPrint("DispatchRead\r\n");
    pIrp->IoStatus.Status = STATUS_SUCCESS;
    pIrp->IoStatus.Information = 0;

    IoCompleteRequest(pIrp, IO_NO_INCREMENT);
    return STATUS_SUCCESS;
}

NTSTATUS DispatchWrite(PDEVICE_OBJECT pDeviceObject, PIRP pIrp)
{
    PVOID pBuffer = NULL;
    PSTACK pStack = IoGetCurrentIrpStackLocation(pIrp);
    
    pBuffer = ExAllocatePoolWithTag(PagedPool, pStack->Parameters.Write.Length, 'WTAG');
    if (pBuffer == NULL)
    {
        pIrp->IoStatus.Status = STATUS_INSUFFICIENT_RESOURCES;
        pIrp->IoStatus.Information = 0;

        IoCompleteRequest(pIrp, IO_NO_INCREMENT);
        return STATUS_INSUFFICIENT_RESOURCES;
    }

    memset(pBuffer, 0, pStack->Parameters.Write.Length);

    RtlCopyMemory(pBuffer, pIrp->AssociatedIrp.SystemBuffer, pStack->Parameters.Write.Length);
    ExFreePool(pBuffer);
    pBuffer = NULL;

    DbgPrint("DispatchWrite\r\n");
    pIrp->IoStatus.Status = STATUS_SUCCESS;
    pIrp->IoStatus.Information = 0;

    IoCompleteRequest(pIrp, IO_NO_INCREMENT);
    return STATUS_SUCCESS;
}

NTSTATUS DispatchIoControl(PDEVICE_OBJECT pDeviceObject, PIRP pIrp)
{
    PSTACK pStack = IoGetCurrentIrpStackLocation(pIrp);

    switch(pStack->Parameters.DeviceIoControl.IoControlCode)
    {
        case IOCTL_HEL:
            DbgPrint("DispatchIoControl - IOCTL_HEL\r\n");
            break;

        case IOCTL_PRT:
            DbgPrint("DispatchIoControl - IOCTL_PRT\r\n");
            DbgPrint("%ws\r\n", pIrp->AssociatedIrp.SystemBuffer);
            break;

        case IOCTL_BYE:
            DbgPrint("DispatchIoControl - IOCTL_BYE\r\n");
            break;

        default:
            DbgPrint("DispatchIoControl\r\n");
    }

    pIrp->IoStatus.Status = STATUS_SUCCESS;
    pIrp->IoStatus.Information = 0;

    IoCompleteRequest(pIrp, IO_NO_INCREMENT);
    return STATUS_SUCCESS;
}

NTSTATUS DispatchClose(PDEVICE_OBJECT pDeviceObject, PIRP pIrp)
{
    DbgPrint("DispatchClose\r\n");

    pIrp->IoStatus.Status = STATUS_SUCCESS;
    pIrp->IoStatus.Information = 0;

    IoCompleteRequest(pIrp, IO_NO_INCREMENT);
    return STATUS_SUCCESS;
}

NTSTATUS DispatchClean(PDEVICE_OBJECT pDeviceObject, PIRP pIrp)
{
    DbgPrint("DispatchClean\r\n");

    pIrp->IoStatus.Status = STATUS_SUCCESS;
    pIrp->IoStatus.Information = 0;

    IoCompleteRequest(pIrp, IO_NO_INCREMENT);
    return STATUS_SUCCESS;
}

VOID DriverUnload(PDRIVER_OBJECT pDriverObject)
{
    UNICODE_STRING SymLinkName = RTL_CONSTANT_STRING(L"\\dosdevices\\ntdm");
    IoDeleteSymbolicLink(&SymLinkName);
    IoDeleteDevice(pDriverObject->DeviceObject);
    DbgPrint("Driver Unload\r\n");
}

NTSTATUS DriverEntry(PDRIVER_OBJECT pDriverObject, PUNICODE_STRING pRegPath)
{
    UNICODE_STRING DeviceName = RTL_CONSTANT_STRING(L"\\device\\ntdm");
    UNICODE_STRING SymLinkName = RTL_CONSTANT_STRING(L"\\dosdevices\\ntdm");
    ULONG i = 0;
    PDEVICE_OBJECT pDeviceObject = NULL;

    NTSTATUS ntstatus = 0;

    DbgPrint("Driver Entry\r\n");

    // IoCreateDevice
    ntstatus = IoCreateDevice(pDriverObject, 0, &DeviceName, FILE_DEVICE_UNKNOWN, 0, FALSE, &pDeviceObject);
    if(!NT_SUCCESS(ntstatus))
    {
        DbgPrint("IoCreateDevice failed: %x\r\n", ntstatus);
        return ntstatus;
    }

    // DO_BUFFER_IO
    pDeviceObject->Flags |= DO_BUFFERED_IO;

    // IoCreateSymbolicLink
    // Enable R3 Access
    ntstatus = IoCreateSymbolicLink(&SymLinkName, &DeviceName);
    if(!NT_SUCCESS(ntstatus))
    {
        DbgPrint("IoCreateSymbolicLink failed: %x\r\n", ntstatus);
        IoDeleteDevice(pDeviceObject);
        return ntstatus;
    }

    // Initialize
    for(i=0; i < IRP_MJ_MAXIMUM_FUNCTION+1; i++)
    {
        pDriverObject->MajorFunction[i] = DispatchCommon;
    }

    pDriverObject->MajorFunction[IRP_MJ_CREATE] = DispatchCreate;
    pDriverObject->MajorFunction[IRP_MJ_READ] = DispatchRead;
    pDriverObject->MajorFunction[IRP_MJ_WRITE] = DispatchWrite;
    pDriverObject->MajorFunction[IRP_MJ_DEVICE_CONTROL] = DispatchIoControl;
    pDriverObject->MajorFunction[IRP_MJ_CLEANUP] = DispatchClean;
    pDriverObject->MajorFunction[IRP_MJ_CLOSE] = DispatchClose;

    pDriverObject->DriverUnload = DriverUnload;
    return STATUS_SUCCESS;
}

/*

UNICODE_STRING  - https://msdn.microsoft.com/en-us/library/windows/hardware/ff564879(v=vs.85).aspx
IoCreateDevice  - https://msdn.microsoft.com/en-us/library/windows/hardware/ff548397(v=vs.85).aspx
Defining I/O Control Codes - https://docs.microsoft.com/en-us/windows-hardware/drivers/kernel/defining-i-o-control-codes
*/