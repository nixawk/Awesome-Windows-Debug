/**********************************************************************
 * 
 *  Nixawk
 *
 *  Driver Example
 *
 *  This example is for educational purposes only.  I license this source
 *  out for use in learning how to write a device driver.
 *
 *     Driver Entry Point
 **********************************************************************/

#include <ntddk.h>


VOID DriverUnload(PDRIVER_OBJECT pDriverObject);
NTSTATUS DriverEntry(PDRIVER_OBJECT pDriverObject, PUNICODE_STRING pRegPath);


typedef PIO_STACK_LOCATION PSTACK;

/**********************************************************************
 * 
 *  IoControlCode
 *
 *    Custom Io Control Code for (DeviceIoControl) Hook
 *
 **********************************************************************/
#define IOCONTROL_BASE 0x800
#define IOCONTROL_CODE(x) CTL_CODE(FILE_DEVICE_UNKNOWN, IOCONTROL_BASE + x, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_HEL IOCONTROL_CODE(0)
#define IOCTL_PRT IOCONTROL_CODE(1)
#define IOCTL_BYE IOCONTROL_CODE(2)


/**********************************************************************
 * 
 *  DispatchUnSupportedFunction
 *
 *    This is called when a major function is issued that isn't supported.
 *
 **********************************************************************/
NTSTATUS DispatchUnSupportedFunction(PDEVICE_OBJECT pDeviceObject, PIRP pIrp)
{
    // pIrp->IoStatus.Status = STATUS_SUCCESS;
    // pIrp->IoStatus.Information = 0;

    // IoCompleteRequest(pIrp, IO_NO_INCREMENT);

    NTSTATUS NtStatus = STATUS_SUCCESS;
    DbgPrint("UnSupportedFunction Called  \r\n");

    return NtStatus;
}


/**********************************************************************
 * 
 *  DispatchCreate
 *
 *    This is called when an instance of this driver is created (CreateFile)
 *
 **********************************************************************/
NTSTATUS DispatchCreate(PDEVICE_OBJECT pDeviceObject, PIRP pIrp)
{
    // pIrp->IoStatus.Status = STATUS_SUCCESS;
    // pIrp->IoStatus.Information = 0;

    // IoCompleteRequest(pIrp, IO_NO_INCREMENT);

    NTSTATUS NtStatus = STATUS_SUCCESS;
    DbgPrint("DispatchCreate Called  \r\n");

    return NtStatus;
}


/**********************************************************************
 * 
 *  DispatchRead
 *
 *    This is called when a read is issued on the device handle (ReadFile/ReadFileEx)
 *
 **********************************************************************/
NTSTATUS DispatchRead(PDEVICE_OBJECT pDeviceObject, PIRP pIrp)
{
    NTSTATUS NtStatus = STATUS_SUCCESS;
    PSTACK pStack = NULL;
    ULONG rLength = 0;
    UNICODE_STRING src = RTL_CONSTANT_STRING(L"HELLO DispatchRead");

    DbgPrint("DispatchRead Called \r\n");

    pStack = IoGetCurrentIrpStackLocation(pIrp);
    rLength = (pStack->Parameters.Read.Length > src.Length) ? src.Length : pStack->Parameters.Read.Length;

    RtlCopyMemory(pIrp->AssociatedIrp.SystemBuffer, src.Buffer, rLength);

    // pIrp->IoStatus.Status = STATUS_SUCCESS;
    // pIrp->IoStatus.Information = 0;

    // IoCompleteRequest(pIrp, IO_NO_INCREMENT);

    return NtStatus;
}


/**********************************************************************
 * 
 *  DispatchWriteBufferedIO
 *
 *    This is called when a write is issued on the device handle (WriteFile/WriteFileEx)
 *
 *    This version uses Buffered I/O
 *
 **********************************************************************/
NTSTATUS DispatchWriteBufferedIO(PDEVICE_OBJECT pDeviceObject, PIRP pIrp)
{
    NTSTATUS NtStatus = STATUS_SUCCESS;
    PSTACK pStack = IoGetCurrentIrpStackLocation(pIrp);
    PVOID pBuffer = NULL;

    DbgPrint("DispatchWriteBufferedIO Called \r\n");

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

    // pIrp->IoStatus.Status = STATUS_SUCCESS;
    // pIrp->IoStatus.Information = 0;
    // IoCompleteRequest(pIrp, IO_NO_INCREMENT);

    return NtStatus;
}


/**********************************************************************
 * 
 *  DispatchIoControl
 *
 *    This is called when an IOCTL is issued on the device handle (DeviceIoControl)
 *
 **********************************************************************/
NTSTATUS DispatchIoControl(PDEVICE_OBJECT pDeviceObject, PIRP pIrp)
{
    NTSTATUS NtStatus = STATUS_SUCCESS;
    PSTACK pStack = NULL;

    DbgPrint("DispatchIoControl Called \r\n");

    pStack = IoGetCurrentIrpStackLocation(pIrp);
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

    // pIrp->IoStatus.Status = STATUS_SUCCESS;
    // pIrp->IoStatus.Information = 0;
    // IoCompleteRequest(pIrp, IO_NO_INCREMENT);

    return NtStatus;
}


/**********************************************************************
 * 
 *  DispatchClose
 *
 *    This is called when an instance of this driver is closed (CloseHandle)
 *
 **********************************************************************/
NTSTATUS DispatchClose(PDEVICE_OBJECT pDeviceObject, PIRP pIrp)
{
    NTSTATUS NtStatus = STATUS_SUCCESS;

    DbgPrint("DispatchClose called \r\n");

    // pIrp->IoStatus.Status = STATUS_SUCCESS;
    // pIrp->IoStatus.Information = 0;
    // IoCompleteRequest(pIrp, IO_NO_INCREMENT);

    return NtStatus;
}


/**********************************************************************
 * 
 *  DispatchClean
 *
 *    This is called when you need to perform process related clean up.
 *
 **********************************************************************/
NTSTATUS DispatchClean(PDEVICE_OBJECT pDeviceObject, PIRP pIrp)
{
    NTSTATUS NtStatus = STATUS_SUCCESS;

    DbgPrint("DispatchClean called \r\n");

    // pIrp->IoStatus.Status = STATUS_SUCCESS;
    // pIrp->IoStatus.Information = 0;
    // IoCompleteRequest(pIrp, IO_NO_INCREMENT);

    return NtStatus;
}


/**********************************************************************
 * 
 *  DriverUnload
 *
 *    This is an optional unload function which is called when the
 *    driver is unloaded.
 *
 **********************************************************************/

VOID DriverUnload(PDRIVER_OBJECT pDriverObject)
{
    UNICODE_STRING SymLinkName = RTL_CONSTANT_STRING(L"\\dosdevices\\ntdm");

    DbgPrint("DriverUnload Called \r\n");

    IoDeleteSymbolicLink(&SymLinkName);
    IoDeleteDevice(pDriverObject->DeviceObject);
}


/**********************************************************************
 * 
 *  DriverEntry
 *
 *    This is the default entry point for drivers.  The parameters
 *    are a driver object and the registry path.
 *
 **********************************************************************/

NTSTATUS DriverEntry(PDRIVER_OBJECT pDriverObject, PUNICODE_STRING pRegPath)
{
    NTSTATUS NtStatus = STATUS_SUCCESS;
    UNICODE_STRING DeviceName = RTL_CONSTANT_STRING(L"\\device\\ntdm");
    UNICODE_STRING SymLinkName = RTL_CONSTANT_STRING(L"\\dosdevices\\ntdm");
    ULONG uiIndex = 0;
    PDEVICE_OBJECT pDeviceObject = NULL;

    DbgPrint("DriverEntry Called \r\n");

    NtStatus = IoCreateDevice(pDriverObject, 0, &DeviceName, FILE_DEVICE_UNKNOWN, FILE_DEVICE_SECURE_OPEN, FALSE, &pDeviceObject);
    if(!NT_SUCCESS(NtStatus))
    {
        DbgPrint("IoCreateDevice failed: %x\r\n", NtStatus);
        return NtStatus;
    }

    /* 
     * Setting the flags on the device driver object determine what type of I/O
     * you wish to use.
     *   
     *  Direct I/O - MdlAddress describes the Virtual Address list.  This is then
     *                 used to lock the pages in memory.
     *
     *                 PROS: Fast, Pages are not copied.
     *                 CONS: Uses resources, needs to lock pages into memory.
     *
     *  Buffered I/o - SystemBuffer is then used by the driver to access the data.  The I/O
     *                   manager will copy the data given by the user mode driver into this buffer
     *                   on behalf of the driver.
     *
     *                   CONS: Slower operation (Use on smaller data sets)
     *                         Uses resources, allocates Non-paged memory
     *                         Large allocations may not work since it would
     *                         require allocating large sequential non-paged memory.
     *                   PROS: Easier to use, driver simply accesses the buffer
     *                         Usermode buffer is not locked in memory
     *
     *
     *  Neither Buffered or Direct - This is when you simply read the buffer directly using the user-mode address.
     *                     Simply omit DO_DIRECT_IO and DO_BUFFERED_IO to perform this action.
     *
     *                     PROS: No copying or locking pages occurs.
     *
     *                     CONS: You *MUST* be in the context of the user-mode thread that made the request.
     *                           being in another process space you the page tables would not point to
     *                           the same location.
     *                           You have to perform some checking and probeing in order to verify
     *                           when you can read/write from the pages.
     *                           You cannot access a user mode address unless it's locked into memory
     *                           at >= DPC level.
     *                           The usermode process could also change the access rights of the
     *                           buffer while the driver is trying to read it!
     *
     *
     *  If your driver services lower level drivers you will need to set this field to the same type of
     *  I/O.
     *
     *  The flags for Read/Write is:
     *      DO_BUFFERED_IO, DO_DIRECT_IO, Specify neither flag for "Neither".
     *
     *  The flags (defined in the IOCTL itself) for Control I/O is:
     *     METHOD_NEITHER, METHOD_BUFFERED, METHOD_IN_DIRECT or METHOD_OUT_DIRECT 
     *
     *  From MSDN:
     *    For IRP_MJ_READ and IRP_MJ_WRITE requests, drivers specify the I/O method by using flags in each 
     *    DEVICE_OBJECT structure. For more information, see Initializing a Device Object.
     *
     *    For IRP_MJ_DEVICE_CONTROL and IRP_MJ_INTERNAL_DEVICE_CONTROL requests, the I/O method is determined 
     *    by the TransferType value that is contained in each IOCTL value. For more information, see Defining
     *    I/O Control Codes.
     */
    
    pDeviceObject->Flags |= DO_BUFFERED_IO;

    /*
     * We are not required to clear this flag in the DriverEntry as the I/O Manager will
     * clear it for us, but we will anyway.  Creating a device in any other location we
     * would need to clear it.
     */
    
    pDeviceObject->Flags &= (~DO_DEVICE_INITIALIZING);
    
    /*
     * IoCreateSymbolicLink, Create a Symbolic Link to the device
     * Enable R3 Access
     */

    NtStatus = IoCreateSymbolicLink(&SymLinkName, &DeviceName);
    if(!NT_SUCCESS(NtStatus))
    {
        DbgPrint("IoCreateSymbolicLink failed: %x\r\n", NtStatus);
        IoDeleteDevice(pDeviceObject);
        return NtStatus;
    }

    /*
     * The "MajorFunction" is a list of function pointers for entry points into the driver.
     * You can set them all to point to 1 function, then have a switch statement for all
     * IRP_MJ_*** functions or you can set specific function pointers for each entry
     * into the driver.
     *
     */

    for(uiIndex =0 ; uiIndex < IRP_MJ_MAXIMUM_FUNCTION; uiIndex++)
        pDriverObject->MajorFunction[uiIndex] = DispatchUnSupportedFunction;

    pDriverObject->MajorFunction[IRP_MJ_CREATE] = DispatchCreate;
    pDriverObject->MajorFunction[IRP_MJ_READ] = DispatchRead;
    pDriverObject->MajorFunction[IRP_MJ_WRITE] = DispatchWriteBufferedIO;
    pDriverObject->MajorFunction[IRP_MJ_DEVICE_CONTROL] = DispatchIoControl;
    pDriverObject->MajorFunction[IRP_MJ_CLEANUP] = DispatchClean;
    pDriverObject->MajorFunction[IRP_MJ_CLOSE] = DispatchClose;

    /* 
     * Required to unload the driver dynamically.  If this function is missing
     * the driver cannot be dynamically unloaded.
     */
    pDriverObject->DriverUnload = DriverUnload;

    return NtStatus;
}

/*

UNICODE_STRING  - https://msdn.microsoft.com/en-us/library/windows/hardware/ff564879(v=vs.85).aspx
IoCreateDevice  - https://msdn.microsoft.com/en-us/library/windows/hardware/ff548397(v=vs.85).aspx
Defining I/O Control Codes - https://docs.microsoft.com/en-us/windows-hardware/drivers/kernel/defining-i-o-control-codes
Driver Development Part 1: Introduction to Drivers - https://www.codeproject.com/Articles/9504/Driver-Development-Part-Introduction-to-Drivers

*/