/*

A device driver is different from a normal user level program, so its installation and execution
are more complex, because we are in the kernel space. We have to do two main operations

1. Register the driver as a Windows service.
2. Start the driver as a service.

*/

#include <windows.h>


#define BUFSIZE 4096


BOOL LoadDriver(LPCTSTR lpszDriverName,LPCTSTR lpszDriverPath);
BOOL UnloadDriver(LPCTSTR szSvrName );


BOOL LoadDriver(LPCTSTR lpszDriverName, LPCTSTR lpszDriverPath)
{
    SC_HANDLE hSCManager = NULL;
    SC_HANDLE hService = NULL;

    TCHAR lpBuffer[BUFSIZE] = {0};
    DWORD dwRtn = 0;
    BOOL bRet = FALSE;

    GetFullPathName(lpszDriverPath, BUFSIZE, lpBuffer, NULL);

    hSCManager = OpenSCManager(NULL, NULL, SC_MANAGER_ALL_ACCESS);
    if( hSCManager == NULL )  
    {
        printf( "OpenSCManager failed (%d)\n", GetLastError() );
        bRet = FALSE;
        goto CloseClean;
    }

    hService = CreateService(hSCManager,
        lpszDriverName,
        lpszDriverName,
        SERVICE_ALL_ACCESS,
        SERVICE_KERNEL_DRIVER,
        SERVICE_DEMAND_START,
        SERVICE_ERROR_IGNORE,
        lpBuffer,
        NULL,
        NULL,  
        NULL,  
        NULL,  
        NULL);  
    if( hService == NULL )  
    {  
        dwRtn = GetLastError();
        if( dwRtn != ERROR_IO_PENDING && dwRtn != ERROR_SERVICE_EXISTS )
        {  
            printf( "CrateService failed (%d)\n", dwRtn );  
            bRet = FALSE;
            goto CloseClean;
        }  
        else  
        {
            printf( "CrateService() Failed Service is ERROR_IO_PENDING or ERROR_SERVICE_EXISTS! \n" );  
        }

        hService = OpenService( hSCManager, lpszDriverName, SERVICE_ALL_ACCESS );  
        if( hService == NULL )  
        {
            printf( "OpenService failed (%d)\n", GetLastError()); 
            bRet = FALSE;
            goto CloseClean;
        }  
        else 
        {
            printf( "OpenService() ok ! \n" );
        }
    }  
    else  
    {
        printf( "CrateService() ok ! \n" );
    }

    bRet= StartService( hService, NULL, NULL );  
    if( !bRet )  
    {  
        DWORD dwRtn = GetLastError();  
        if( dwRtn != ERROR_IO_PENDING && dwRtn != ERROR_SERVICE_ALREADY_RUNNING )  
        {  
            printf( "StartService failed (%d)\n", dwRtn);  
            bRet = FALSE;
            goto CloseClean;
        }  
        else  
        {  
            if( dwRtn == ERROR_IO_PENDING )  
            {  
                printf( "StartService failed (%d)\n", dwRtn);
                bRet = FALSE;
                goto CloseClean;
            }  
            else  
            {  
                printf( "StartService failed (%d)\n", dwRtn);
                bRet = TRUE;
                goto CloseClean;
            }  
        }  
    }
    bRet = TRUE;

CloseClean:
    if(hService)
    {
        CloseServiceHandle(hService);
    }
    if(hSCManager)
    {
        CloseServiceHandle(hSCManager);
    }
    return bRet;
}

 
BOOL UnloadDriver(LPCTSTR szSvrName)  
{

    SC_HANDLE hSCManager = NULL;
    SC_HANDLE hService = NULL;

    SERVICE_STATUS ss;
    BOOL bRet = FALSE;

    hSCManager = OpenSCManager( NULL, NULL, SC_MANAGER_ALL_ACCESS );  
    if( hSCManager == NULL )  
    {
        printf( "OpenSCManager failed (%d)\n", GetLastError() );  
        bRet = FALSE;
        goto CloseClean;
    }  

    hService = OpenService( hSCManager, szSvrName, SERVICE_ALL_ACCESS );  
    if( hService == NULL )  
    {
        printf( "OpenService failed (%d)\n", GetLastError() );  
        bRet = FALSE;
        goto CloseClean;
    }  

    if( !ControlService( hService, SERVICE_CONTROL_STOP , &ss ) )  
    {  
        printf( "ControlService failed (%d)\n", GetLastError() );  
    }  

    if( !DeleteService( hService ) )  
    {
        printf( "DeleteSrevice failed (%d)\n", GetLastError() );  
    }  

    bRet = TRUE;
CloseClean:
    if(hService)
    {
        CloseServiceHandle(hService);
    }
    if(hSCManager)
    {
        CloseServiceHandle(hSCManager);
    }
    return bRet;    
}


int main(int argc,  const char *argv[])
{
    if (argc == 4) {
        if (strcmp(argv[1], "LoadDriver") == 0)
        {
            LoadDriver((LPCTSTR)argv[2], (LPCTSTR)argv[3]);
        } 
    } else if (argc == 3) {

        if (strcmp(argv[1], "UnloadDriver") == 0) {
            UnloadDriver((LPCTSTR)argv[2]);
        }

    } else {
        printf("%s LoadDriver <ServiceName> </path/to/driverfile>\n", argv[0]);
        printf("%s UnloadDriver <ServiceName>\n", argv[0]);
    }

    return 0;
}

// https://www.codeproject.com/Articles/31905/A-C-class-wrapper-to-load-unload-device-drivers