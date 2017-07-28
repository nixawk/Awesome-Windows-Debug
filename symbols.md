## Symbols

When applications, libraries, drivers, or operating systems are linked, the linker that creates the .exe and .dll files also creates a number of additional files known as symbol files.

Symbol files hold a variety of data which are not actually needed when running the binaries, but which could be very useful in the debugging process.

Typically, symbol files might contain:

- Global variables
- Local variables
- Function names and the addresses of their entry points
- Frame pointer omission (FPO) records
- Source-line numbers

Microsoft Windows 2000 keeps its symbols in files with the extensions .pdb and .dbg. Windows XP and later versions of Windows use .pdb files exclusively. Windows drivers can follow either model.

### Download and Install Symbols to Local

Symbols for the Windows debuggers (WinDbg, KD, CDB, and NTSD) are available from a public symbol server. You can also [download entire symbol packages](https://developer.microsoft.com/windows/hardware/download-symbols).

```
.sympath+ C:\Symbols
.reload
```

### Load and Cache Symbols from Remote Server

```
SRV*C:\Symbols*http://msdl.microsoft.com/download/symbols
``` 

WinDbg will use the first directory we specified above as a local cache for symbols.


### Symbols Command(s)

- **.symfix (Set Symbol Store Path)**

> .hh .symfix

The .symfix command automatically sets the symbol path to point to the Microsoft symbol store.

> .symfix[+] [LocalSymbolCache]

----

- **.symopt (Set Symbol Options)**

> .hh .symopt

The .symopt command sets or displays the symbol options.


```
0:000> .symopt
Symbol options are 0x30337:
  0x00000001 - SYMOPT_CASE_INSENSITIVE
  0x00000002 - SYMOPT_UNDNAME
  0x00000004 - SYMOPT_DEFERRED_LOADS
  0x00000010 - SYMOPT_LOAD_LINES
  0x00000020 - SYMOPT_OMAP_FIND_NEAREST
  0x00000100 - SYMOPT_NO_UNQUALIFIED_LOADS
  0x00000200 - SYMOPT_FAIL_CRITICAL_ERRORS
  0x00010000 - SYMOPT_AUTO_PUBLICS
  0x00020000 - SYMOPT_NO_IMAGE_SEARCH

```

----

- **.sympath (Set Symbol Path)**

> .hh sympath

The .sympath command sets or alters the symbol path. The symbol path specifies locations where the debugger looks for symbol files.

> .sympath[+] [Path [; ...]]


```
.sympath+ C:\Symbols
.sympath+ C:Windows\Symbols
```

----

### Example

```
0:000> .sympath
Symbol search path is: srv*
Expanded Symbol search path is: SRV*C:\Windows\Symbols*https://msdl.microsoft.com/download/symbols

************* Symbol Path validation summary **************
Response                         Time (ms)     Location
Deferred                                       srv*
0:000> .symfix C:\Symbols
0:000> .sympath
Symbol search path is: srv*
Expanded Symbol search path is: SRV*C:\Symbols*https://msdl.microsoft.com/download/symbols

************* Symbol Path validation summary **************
Response                         Time (ms)     Location
Deferred                                       srv*

```

## References

1. https://developer.microsoft.com/en-us/windows/hardware/download-symbols
2. http://expdev-kiuhnm.rhcloud.com/2015/05/17/windbg/