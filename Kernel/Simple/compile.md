## Compile Kernel Driver

```
C:\Windows\System32\cmd.exe /k C:\WinDDK\7600.16385.1\bin\setenv.bat C:\WinDDK\7600.16385.1\ chk x64 WIN7
```

```
C:\Users\exploit\Desktop\Windows_Kernel>bld
BUILD: Compile and Link for AMD64
BUILD: Computing Include file dependencies:
BUILD: Start time: Sun Sep 03 18:10:35 2017
BUILD: Examining c:\users\exploit\desktop\windows_kernel directory for files to
compile.
BUILD: Saving c:\winddk\7600.16385.1\build.dat...
BUILD: Compiling and Linking c:\users\exploit\desktop\windows_kernel directory
Configuring OACR for 'root:amd64fre' - <OACR on>
Sep 03 18:10:36 oacr.dll  OACR version change (from build '0' to '30122')
Compiling - hellodriver.c
Linking Executable - objfre_win7_amd64\amd64\hellodriver.sys
BUILD: Finish time: Sun Sep 03 18:10:36 2017
BUILD: Done

    3 files compiled
    1 executable built
```


## References

1. https://docs.microsoft.com/en-us/windows-hardware/drivers/devtest/checked-and-free-build-differences
2. https://stackoverflow.com/questions/7175203/how-to-sign-my-driver-so-it-will-install-on-windows-7-64-bit