## sx, sxd, sxe, sxi, sxn, sxr, sx- (Set Exceptions)

The sx* commands control the action that the debugger takes when an exception occurs in the application that is being debugged, or when certain events occur.

```
sx 

sx{e|d|i|n} [-c "Cmd1"] [-c2 "Cmd2"] [-h] {Exception|Event|*} 

sx- [-c "Cmd1"] [-c2 "Cmd2"] {Exception|Event|*} 

sxr
```

The **sx** command displays the list of exceptions for the current process and the list of all nonexception events and displays the default behavior of the debugger for each exception and event.

```
0:000> sx
  ct - Create thread - ignore
  et - Exit thread - ignore
 cpr - Create process - ignore
 epr - Exit process - break
  ld - Load module - break
       (only break for kernel32)
  ud - Unload module - ignore
 ser - System error - ignore
 ibp - Initial breakpoint - break
 iml - Initial module load - ignore
 out - Debuggee output - output

  av - Access violation - break - not handled
asrt - Assertion failure - break - not handled
 aph - Application hang - break - not handled
 bpe - Break instruction exception - break
bpec - Break instruction exception continue - handled
  eh - C++ EH exception - second-chance break - not handled
 clr - CLR exception - second-chance break - not handled
clrn - CLR notification exception - second-chance break - handled
 cce - Control-Break exception - break
  cc - Control-Break exception continue - handled
 cce - Control-C exception - break
  cc - Control-C exception continue - handled
  dm - Data misaligned - break - not handled
dbce - Debugger command exception - ignore - handled
  gp - Guard page violation - break - not handled
  ii - Illegal instruction - second-chance break - not handled
  ip - In-page I/O error - break - not handled
  dz - Integer divide-by-zero - break - not handled
 iov - Integer overflow - break - not handled
  ch - Invalid handle - break
  hc - Invalid handle continue - not handled
 lsq - Invalid lock sequence - break - not handled
 isc - Invalid system call - break - not handled
  3c - Port disconnected - second-chance break - not handled
 svh - Service hang - break - not handled
 sse - Single step exception - break
ssec - Single step exception continue - handled
 sbo - Security check failure or stack buffer overrun - break - not handled
 sov - Stack overflow - break - not handled
  vs - Verifier stop - break - not handled
vcpp - Visual C++ exception - ignore - handled
 wkd - Wake debugger - break - not handled
 rto - Windows Runtime Originate Error - second-chance break - not handled
 rtt - Windows Runtime Transform Error - second-chance break - not handled
 wob - WOW64 breakpoint - break - handled
 wos - WOW64 single step exception - break - handled

   * - Other exception - second-chance break - not handled

```

The **sxe**, **sxd**, **sxn**, and **sxi** commands control the debugger settings for each exception and event.

The **sxr** command resets all of the exception and event filter states to the default settings. Commands are cleared, break and continue options are reset to their default settings, and so on.

The **sx-** command does not change the handling status or the break status of the specified exception or event. This command can be used if you wish to change the first-chance command or second-chance command associated with a specific event, but do not wish to change anything else.

If you include the **-h** option (or if the **cc**, **hc**, **bpec**, or **ssec** events are specified), the **sxe**, **sxd**, **sxn**, and **sxi** commands control the handling status of the exception or event. In all other cases, these commands control the break status of the exception or event.


- **sxe** (Break (Enabled))

When this exception occurs, the target immediately breaks into the debugger before any other error handlers are activated. This kind of handling is called first chance handling.

- **sxd** Second chance break (Disabled)

The debugger does not break for a first-chance exception of this type (although a message is displayed). If other error handlers do not address this exception, execution stops and the target breaks into the debugger. This kind of handling is called second chance handling.

- **sxn** Output (Notify)

When this exception occurs, the target application does not break into the debugger at all. However, a message is displayed that notifies the user of this exception.

- **sxi** Ignore

When this exception occurs, the target application does not break into the debugger at all, and no message is displayed.

----

## Examples

**Breaking on Module load**. There may be some occasions when you’d like to set a breakpoint when a module is being loaded. Unfortunately, there doesn’t appear to be an obvious way within the standard breakpoint commands to do this (let know if you know of a way in the comments). Instead a sort of “hacky” way to do this is by defining that an exception be raised when a particular module is loaded using the sxe command:

```
0:000> sxe ld kernel32.dll
```

Here we’ve set up a first chance exception (sxe) when a module is loaded (ld) and defined kernel32.DLL as the specific module which triggers the exception.

We can use sx (Set Exceptions) to view the configured exceptions. If we look under the Load Module list, we’ll see that we have a break on kernel32.dll.


```
0:000> .restart
CommandLine: C:\Windows\System32\cmd.exe

************* Symbol Path validation summary **************
Response                         Time (ms)     Location
Deferred                                       symsrv*symsrv.dll*C:\Windows\Symbols*http://msdl.microsoft.com/download/symbols
Symbol search path is: symsrv*symsrv.dll*C:\Windows\Symbols*http://msdl.microsoft.com/download/symbols
Executable search path is: 
ModLoad: 00000000`770b0000 00000000`771cf000   C:\Windows\system32\kernel32.dll
ntdll!NtMapViewOfSection+0xa:
00000000`7732159a c3              ret
```

To clear it we can use the sxi (Set Exception Ignore) command:

```
0:000> sxi ld kernel32.dll
```
