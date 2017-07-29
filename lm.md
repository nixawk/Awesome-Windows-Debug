
## lm (List Loaded Modules)

The lm command displays the specified loaded modules. The output includes the status and the path of the module.

```
lmOptions [a Address] [m Pattern | M Pattern]
```

```
Parameters

Options 
  Any combination of the following options:


D 
  Displays output using Debugger Markup Language.

o 
  Displays only loaded modules.

l 
  Displays only modules whose symbol information has been loaded.

v 
  Causes the display to be verbose. The display includes the symbol file name, the image file name, checksum information, version information, date stamps, time stamps, and information about whether the module is managed code (CLR). This information is not displayed if the relevant headers are missing or paged out.

u 
  (Kernel mode only) Displays only user-mode symbol information.

k 
  (Kernel mode only) Displays only kernel-mode symbol information.

e 
  Displays only modules that have a symbol problem. These symbols include modules that have no symbols and modules whose symbol status is C, T, #, M, or Export. For more information about these notations, see Symbol Status Abbreviations.

c 
  Displays checksum data.

1m 
  Reduces the output so that nothing is included except the names of the modules. This option is useful if you are using the .foreach token to pipe the command output into another command's input.

sm 
  Sorts the display by module name instead of by the start address.

In addition, you can include only one of the following options. If you do not include any of these options, the display includes the symbol file name. 


i 
  Displays the image file name. 

f 
  Displays the full image path. (This path always matches the path that is displayed in the initial load notification, unless you issued a .reload -s command.) When you use f, symbol type information is not displayed.

n 
  Displays the image name. When you use n, symbol type information is not displayed.

p 
  Displays the mapped image name. When you use p, symbol type information is not displayed.

t 
  Displays the file time stamps. When you use t, symbol type information is not displayed. 

a Address 
  Specifies an address that is contained in this module. Only the module that contains this address is displayed. If Address contains an expression, it must be enclosed in parentheses.

m Pattern 
  Specifies a pattern that the module name must match. Pattern can contain a variety of wildcard characters and specifiers. For more information about the syntax of this information, see String Wildcard Syntax.

Note   In most cases, the module name is the file name without the file name extension. For example, if you want to display information about the Flpydisk.sys driver, use the lm mflpydisk command, not lm mflpydisk.sys. In some cases, the module name differs significantly from the file name.

M Pattern 
  Specifies a pattern that the image path must match. Pattern can contain a variety of wildcard characters and specifiers. For more information about the syntax of this information, see String Wildcard Syntax.
```

----

```
0:000> lmi
start             end                 module name
00000000`4a560000 00000000`4a5b9000   cmd        (deferred)             
00000000`77370000 00000000`7748f000   kernel32   (deferred)             
00000000`77490000 00000000`7758a000   USER32     (deferred)             
00000000`77590000 00000000`77739000   ntdll      (pdb symbols)          C:\Windows\SYSTEM32\ntdll.dll
000007fe`f27f0000 000007fe`f27f8000   WINBRAND   (deferred)             
000007fe`fd840000 000007fe`fd8ab000   KERNELBASE   (deferred)             
000007fe`feb20000 000007fe`feb2e000   LPK        (deferred)             
000007fe`feb30000 000007fe`febf9000   USP10      (deferred)             
000007fe`fec00000 000007fe`fec9f000   msvcrt     (deferred)             
000007fe`ff830000 000007fe`ff897000   GDI32      (deferred) 
```

```            
0:000> lmf
start             end                 module name
00000000`4a560000 00000000`4a5b9000   cmd      cmd.exe     
00000000`77370000 00000000`7748f000   kernel32 C:\Windows\system32\kernel32.dll
00000000`77490000 00000000`7758a000   USER32   C:\Windows\system32\USER32.dll
00000000`77590000 00000000`77739000   ntdll    ntdll.dll   
000007fe`f27f0000 000007fe`f27f8000   WINBRAND C:\Windows\System32\WINBRAND.dll
000007fe`fd840000 000007fe`fd8ab000   KERNELBASE C:\Windows\system32\KERNELBASE.dll
000007fe`feb20000 000007fe`feb2e000   LPK      C:\Windows\system32\LPK.dll
000007fe`feb30000 000007fe`febf9000   USP10    C:\Windows\system32\USP10.dll
000007fe`fec00000 000007fe`fec9f000   msvcrt   C:\Windows\system32\msvcrt.dll
000007fe`ff830000 000007fe`ff897000   GDI32    C:\Windows\system32\GDI32.dll
```

```
0:000> lm m k*
Browse full module list
start             end                 module name
00000000`77370000 00000000`7748f000   kernel32   (deferred)             
000007fe`fd840000 000007fe`fd8ab000   KERNELBASE   (deferred)             
```

```
0:000> lmf m k*
Browse full module list
start             end                 module name
00000000`77370000 00000000`7748f000   kernel32 C:\Windows\system32\kernel32.dll
000007fe`fd840000 000007fe`fd8ab000   KERNELBASE C:\Windows\system32\KERNELBASE.dll
```

```
0:000> lmfc
start             end                 module name
00000000`4a560000 00000000`4a5b9000   cmd      cmd.exe      0005BDEC
00000000`77370000 00000000`7748f000   kernel32 C:\Windows\system32\kernel32.dll 00127A43
00000000`77490000 00000000`7758a000   USER32   C:\Windows\system32\USER32.dll 00105BD9
00000000`77590000 00000000`77739000   ntdll    ntdll.dll    001B55EA
000007fe`f27f0000 000007fe`f27f8000   WINBRAND C:\Windows\System32\WINBRAND.dll 00006893
000007fe`fd840000 000007fe`fd8ab000   KERNELBASE C:\Windows\system32\KERNELBASE.dll 00069D95
000007fe`feb20000 000007fe`feb2e000   LPK      C:\Windows\system32\LPK.dll 00014997
000007fe`feb30000 000007fe`febf9000   USP10    C:\Windows\system32\USP10.dll 000C4B61
000007fe`fec00000 000007fe`fec9f000   msvcrt   C:\Windows\system32\msvcrt.dll 000A4632
000007fe`ff830000 000007fe`ff897000   GDI32    C:\Windows\system32\GDI32.dll 000711DD
```
