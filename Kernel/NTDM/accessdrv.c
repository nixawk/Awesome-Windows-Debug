#include <windows.h>
#include <conio.h>  
#include <stdio.h>
#include <winioctl.h>

#define CTL_HEL CTL_CODE(FILE_DEVICE_UNKNOWN,0x801, METHOD_BUFFERED,FILE_ANY_ACCESS)
#define CTL_PRT CTL_CODE(FILE_DEVICE_UNKNOWN,0x802, METHOD_BUFFERED,FILE_ANY_ACCESS)
#define CTL_BYE CTL_CODE(FILE_DEVICE_UNKNOWN,0x803, METHOD_BUFFERED,FILE_ANY_ACCESS)

#define BUFFSIZE  1024

BOOL Read(HANDLE hDevice)
{
    WCHAR bufRead[BUFFSIZE] = {0};
    DWORD dwRead = 0;

    if (NULL == hDevice)
    {
        printf("Failed to access driver\n");
        return FALSE;
    }

    if (FALSE == ReadFile(hDevice, bufRead, BUFFSIZE, &dwRead, NULL))
    {
        printf("ReadFile failed (%d)\n", GetLastError());
        return FALSE;
    }
    printf("ReadFile success (%ws)\n",bufRead);
    return TRUE;
}

BOOL Write(HANDLE hDevice)
{
    WCHAR bufWrite[BUFFSIZE] = L"Hello, world";
    DWORD dwWrite = 0;

    if (NULL == hDevice)
    {
        printf("Failed to access driver\n");
        return FALSE;
    }

    if (FALSE == WriteFile(hDevice, bufWrite, (wcslen(bufWrite)+1)*sizeof(WCHAR), &dwWrite, NULL))
    {
        printf("WriteFile failed (%d)\n", GetLastError());
        return FALSE;
    }
    printf("WriteFile success (%d)\n", dwWrite);
    return TRUE;
}

BOOL IoControl(HANDLE hDevice)
{
    DWORD dwRet = 0;

    WCHAR bufInput[BUFFSIZE] = L"Hello, world";
    WCHAR bufOutput[BUFFSIZE] = {0};
    WCHAR bufFileInput[1024] = L"DeviceIoControl";

    if (NULL == hDevice)
    {
        printf("Failed to access driver\n");
        return FALSE;
    }

    if (FALSE == DeviceIoControl(hDevice, CTL_PRT, bufFileInput, sizeof(bufFileInput), bufOutput, sizeof(bufOutput), &dwRet, NULL))
    {
        printf("DeviceIoControl failed (%d)\n", GetLastError());
        return FALSE;
    }

    printf("Please press any key to send HELLO\n");
    _getch();
    if (FALSE == DeviceIoControl(hDevice, CTL_HEL, NULL, 0, NULL, 0, &dwRet, NULL))
    {
        printf("DeviceIoControl failed (%d)\n", GetLastError());
        return FALSE;
    }

    printf("Please press any key to send BYE\n");
    _getch();
    if (FALSE == DeviceIoControl(hDevice, CTL_BYE, NULL, 0, NULL, 0, &dwRet, NULL))
    {
        printf("DeviceIoControl failed (%d)\n", GetLastError());
        return FALSE;
    }
    return TRUE;
}

BOOL AccessDriver(LPCTSTR lpSymboliclinkPath)
{
    printf("Access Driver Symboliclink: %ws\n", lpSymboliclinkPath);

    HANDLE hDevice = CreateFile(lpSymboliclinkPath, GENERIC_WRITE | GENERIC_READ,  0,  NULL,  OPEN_EXISTING,  0,  NULL);
    if( INVALID_HANDLE_VALUE == hDevice)  
    {
        printf( "CreateFile failed (%d)\n", GetLastError());  
        return FALSE;
    }

    printf("Please press any key to read\n");
    _getch();
    Read(hDevice);

    printf("Please press any key to write\n");
    _getch();
    Write(hDevice);

    printf("Please press any key to deviceiocontrol\n");
    _getch();
    IoControl(hDevice);

    CloseHandle( hDevice);

    return TRUE;
} 

int wmain( int argc, wchar_t *argv[ ], wchar_t *envp[ ] )
{
    if (argc == 2)
    {
        AccessDriver((LPCTSTR)argv[1]);  // L"\\\\.\\driver_debug"
    } else {
        printf("%s <\\driver\\driver_linkname>\n", argv[0]);
    }
    return 0;
}

/*

C:\Users\exploit\Desktop\driver>drvCommunicate.exe "\\.\driver_debug"
Access Driver Symboliclink: \\.\driver_debug
Please press any key to read
ReadFile success (hello world)
Please press any key to write
WriteFile success (26)
Please press any key to deviceiocontrol
Please press any key to send HELLO
Please press any key to send BYE

*/