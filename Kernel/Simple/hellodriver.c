#include <ntddk.h>


VOID DriverUnload(PDRIVER_OBJECT DriverObject)
{
    // https://msdn.microsoft.com/en-us/library/windows/hardware/ff564886(v=vs.85).aspx

    // Unload routine, The Unload routine performs any operations
    // that are necessary before the system unloads the driver.

    // UNICODE_STRING str = RTL_CONSTANT_STRING(L"[*] DriverUnload");
    // DbgPrint("%wZ\r\n", str);
    
    DbgPrint("[*] DriverUnload\r\n");
}

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
    // https://msdn.microsoft.com/en-us/library/windows/hardware/ff544113(v=vs.85).aspx

    // DriverEntry, is the first routine called after a driver is loaded, and is responsible
    // for initializing the driver.

    // UNICODE_STRING str = RTL_CONSTANT_STRING(L"[*] DriverEntry");
    // DbgPrint("%wZ\r\n", str);
    
    DbgPrint("[*] DriverEntry\r\n");
    DriverObject->DriverUnload = DriverUnload;

    return STATUS_SUCCESS;
}

// Makefile
// https://github.com/Microsoft/Windows-driver-samples/blob/master/usb/UcmTcpciCxClientSample/makefile