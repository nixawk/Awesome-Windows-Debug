## WinDbg

```
0:000> version
Windows 7 Version 7601 (Service Pack 1) UP Free x64
Product: WinNt, suite: SingleUserTS
kernelbase.dll version: 6.1.7601.17514 (win7sp1_rtm.101119-1850)
Machine Name:
Debug session time: Fri Jul 28 08:43:10.193 2017 (UTC - 7:00)
System Uptime: 0 days 1:50:03.438
Process Uptime: 0 days 0:50:52.286
  Kernel time: 0 days 0:00:00.000
  User time: 0 days 0:00:00.015
Live user mode: <Local>

Microsoft (R) Windows Debugger Version 10.0.10586.567 AMD64
Copyright (c) Microsoft Corporation. All rights reserved.

command line: '"C:\Program Files (x86)\Windows Kits\10\Debuggers\x64\windbg.exe" '  Debugger Process 0x4F8 
dbgeng:  image 10.0.10586.15, built Thu Nov 19 20:56:41 2015
        [path: C:\Program Files (x86)\Windows Kits\10\Debuggers\x64\dbgeng.dll]
dbghelp: image 10.0.10586.15, built Thu Nov 19 20:55:01 2015
        [path: C:\Program Files (x86)\Windows Kits\10\Debuggers\x64\dbghelp.dll]
        DIA version: 40116
Extension DLL search Path:
    C:\Program Files (x86)\Windows Kits\10\Debuggers\x64\WINXP;C:\Program Files (x86)\Windows Kits\10\Debuggers\x64\winext;C:\Program Files (x86)\Windows Kits\10\Debuggers\x64\winext\arcade;C:\Program Files (x86)\Windows Kits\10\Debuggers\x64\pri;C:\Program Files (x86)\Windows Kits\10\Debuggers\x64;C:\Program Files (x86)\Windows Kits\10\Debuggers\x64\winext\arcade;C:\Program Files\Python27\;C:\Program Files\Python27\Scripts;C:\ProgramData\Oracle\Java\javapath;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\ProgramData\chocolatey\bin;C:\Program Files\010 Editor;C:\Program Files (x86)\vim\vim80;
Extension DLL chain:
    dbghelp: image 10.0.10586.15, API 10.0.6, built Thu Nov 19 20:55:01 2015
        [path: C:\Program Files (x86)\Windows Kits\10\Debuggers\x64\dbghelp.dll]
    ext: image 10.0.10586.15, API 1.0.0, built Thu Nov 19 20:55:08 2015
        [path: C:\Program Files (x86)\Windows Kits\10\Debuggers\x64\winext\ext.dll]
    exts: image 10.0.10586.15, API 1.0.0, built Thu Nov 19 20:54:07 2015
        [path: C:\Program Files (x86)\Windows Kits\10\Debuggers\x64\WINXP\exts.dll]
    uext: image 10.0.10586.15, API 1.0.0, built Thu Nov 19 20:54:02 2015
        [path: C:\Program Files (x86)\Windows Kits\10\Debuggers\x64\winext\uext.dll]
    ntsdexts: image 10.0.10586.15, API 1.0.0, built Thu Nov 19 21:28:14 2015
        [path: C:\Program Files (x86)\Windows Kits\10\Debuggers\x64\WINXP\ntsdexts.dll]

```

## References

1. https://docs.microsoft.com/en-us/windows-hardware/drivers/debugger/
2. http://windbg.org/
3. https://en.wikipedia.org/wiki/WinDbg