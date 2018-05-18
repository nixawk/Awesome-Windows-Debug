
## threads commands

```
0:001> ~
   0  Id: 7a0.5ac Suspend: 1 Teb: 7ffdf000 Unfrozen
.  1  Id: 7a0.82c Suspend: 1 Teb: 7ffde000 Unfrozen

0:001> ~*
   0  Id: 7a0.5ac Suspend: 1 Teb: 7ffdf000 Unfrozen
      Start: notepad!WinMainCRTStartup (00e131c9) 
      Priority: 0  Priority class: 32  Affinity: 1
.  1  Id: 7a0.82c Suspend: 1 Teb: 7ffde000 Unfrozen
      Start: ntdll!DbgUiRemoteBreakin (76fcec3b) 
      Priority: 0  Priority class: 32  Affinity: 1

0:001> ~.
.  1  Id: 7a0.82c Suspend: 1 Teb: 7ffde000 Unfrozen
      Start: ntdll!DbgUiRemoteBreakin (76fcec3b) 
      Priority: 0  Priority class: 32  Affinity: 1
```

```
0:001> ~f
0:001> ~
   0  Id: 7a0.5ac Suspend: 1 Teb: 7ffdf000 Unfrozen
.  1  Id: 7a0.82c Suspend: 1 Teb: 7ffde000 Frozen  
0:001> ~u
0:001> ~
   0  Id: 7a0.5ac Suspend: 1 Teb: 7ffdf000 Unfrozen
.  1  Id: 7a0.82c Suspend: 1 Teb: 7ffde000 Unfrozen
```

```
0:001> ~0s
eax=000011b9 ebx=00cc02f5 ecx=000df8dc edx=000dfae8 esi=000dfb20 edi=770bcdb8
eip=76f76bb4 esp=000dfae0 ebp=000dfafc iopl=0         nv up ei pl zr na pe nc
cs=001b  ss=0023  ds=0023  es=0023  fs=003b  gs=0000             efl=00000246
ntdll!KiFastSystemCallRet:
76f76bb4 c3              ret
0:000> ~
.  0  Id: 7a0.5ac Suspend: 1 Teb: 7ffdf000 Unfrozen
#  1  Id: 7a0.82c Suspend: 1 Teb: 7ffde000 Unfrozen
```

```
0:001> !tls
Usage:
tls <slot> [teb]
  slot:  -1 to dump all allocated slots
         {0-0n1088} to dump specific slot
  teb:   <empty> for current thread
         0 for all threads in this process
         <teb address> (not threadid) to dump for specific thread.
0:001> !tls -1
TLS slots on thread: 7a0.82c
0x0000 : 00000000
0x0001 : 00000000
0x0002 : 00000000
0x0003 : 00000000
0x0004 : 00000000
0x0005 : 00000000
0x0006 : 00000000
0x0007 : 00000000
0x0008 : 00000000
0x0009 : 00000000
0x000a : 00000000
0x000b : 00000000
0x000c : 00000000
0x000d : 00000000
0x000e : 00000000
0x000f : 00000000
0x0010 : 00000000
0x0011 : 00000000
0x0012 : 00000000
0x0013 : 00000000
0x0014 : 00000000
0x0015 : 00000000
0x0016 : 00000000
0x0017 : 00000000
0x0018 : 00000000
0x0040 : 000007b4
```

```
0:001> .ttime
Created: Thu May 17 20:59:47.245 2018 (UTC - 7:00)
Kernel:  0 days 0:00:00.000
User:    0 days 0:00:00.000
```

<table class="CmdGroup CmdGroup_ExampleAttached">
<tbody>
	<tr><th class="CmdGroup" colspan="3">12) Thread related information</th></tr>
	<tr>
	<th class="thCmdGroup" scope="col" abbr="Cmd">Cmd</th>
    <th class="thCmdGroup" scope="col" abbr="Variants / Params">Variants / Params</th>
    <th class="thCmdGroup" scope="col" abbr="Description">Description</th>
	</tr>
	<tr>
		<td class="TdCmd"><p>~</p></td>
		<td class="TdCmdParam"><p>~ 
								<br>~* <span class="txtCmdParamAligned">[Command]</span>
								<br>~. <span class="txtCmdParamAligned">[Command]</span>
								<br>~# <span class="txtCmdParamAligned">[Command]</span>
								<br>~Number <span class="txtCmdParamAligned">[Command]</span>
								<br>~~[TID] <span class="txtCmdParamAligned">[Command]</span>
								<br>~Ns
		</p></td>
		<td class="TdCmdDesc"><p>list threads
								<br>all threads 
								<br>current thread
								<br>thread that caused the current event or exception
								<br>thread whose ordinal is Number
								<br>thread whose thread ID is TID (the brackets are required)
								<br>switch to thread N (new current thread)
								<br><br><span class="txtCmdParam">[Command]: works for a few regular commands such as k, r</span>
		</p></td>
	</tr>
	<tr>
		<td class="TdCmd"><p>~e</p></td>
		<td class="TdCmdParam"><p>
								<br>~* <span class="txtCmdParamAligned">e CommandString</span>
								<br>~. <span class="txtCmdParamAligned">e CommandString</span>
								<br>~# <span class="txtCmdParamAligned">e CommandString</span>
								<br>~Number <span class="txtCmdParamAligned">e CommandString</span>
		</p></td>
		<td class="TdCmdDesc"><p>Execute thread-specific commands (CommandString = one or more commands to be executed) for:
				<br>all threads
				<br>current thread
				<br>thread which caused the current event
				<br>thread with ordinal
		</p></td>
	</tr>
	<tr>
		<td class="TdCmd"><p>~f</p></td>
		<td class="TdCmdParam"><p>~Thread f</p></td>
		<td class="TdCmdDesc"><p>Freeze thread (see ~ for Thread syntax)</p></td>
	</tr><tr>
		<td class="TdCmd"><p>~u</p></td>
		<td class="TdCmdParam"><p>~Thread u</p></td>
		<td class="TdCmdDesc"><p>Unfreeze thread (see ~ for Thread syntax)</p></td>
	</tr>
	<tr>
		<td class="TdCmd"><p>~n</p></td>
		<td class="TdCmdParam"><p>~Thread n</p></td>
		<td class="TdCmdDesc"><p>Suspend thread = increment thread's suspend count</p></td>
	</tr>
	<tr>
		<td class="TdCmd"><p>~m</p></td>
		<td class="TdCmdParam"><p>~Thread m</p></td>
		<td class="TdCmdDesc"><p>Resume thread = decrement thread's suspend count</p></td>
	</tr>
	<tr>
		<td class="TdCmd"><p>!teb</p></td>
		<td class="TdCmdParam"><p></p></td>
		<td class="TdCmdDesc"><p>display formatted view of the thread's environment block (TEB)</p></td>
	</tr>
	<tr>
		<td class="TdCmd"><p>!tls</p></td>
		<td class="TdCmdParam"><p>!tls -1
		                             <br>!tls SlotIdx
		                            <br>!tls [-1 | SlotIdx] TebAddr
		</p></td>
		<td class="TdCmdDesc"><p>-1 = dump all slots for current thread
		                        <br>SlotIdx = dump only specified slot
		                        <br>TebAddr = specify thread; if omitted, the current thread is used
        </p></td>
	</tr>
	<tr>
		<td class="TdCmd"><p>.ttime</p></td>
		<td class="TdCmdParam"><p></p></td>
		<td class="TdCmdDesc"><p>display thread times (user + kernel mode)</p></td>
	</tr>
	<tr>
		<td class="TdCmd"><p>!runaway</p></td>
		<td class="TdCmdParam"><p>[Flags: 0 | 1 | 2]</p></td>
		<td class="TdCmdDesc"><p>display information about time consumed by each thread (0-user time, 1-kernel time, 2-time elapsed since thread creation). quick way to find out which threads are spinning out of control or consuming too much CPU time</p></td>
	</tr>
	<tr>
		<td class="TdCmd"><p>!gle</p></td>
		<td class="TdCmdParam"><p>!gle
								<br>!gle -all
		</p></td>
		<td class="TdCmdDesc"><p>Dump last error for current thread
								<br>Dump last error for all threads 
								<br>
								<br>Point of interest:
								<br><b>SetLastError( dwErrCode )</b> checks the value of kernel32!g_dwLastErrorToBreakOn and possibly executes a DbgBreakPoint.
								<br>
								<br><b>if</b> ((g_dwLastErrorToBreakOn != 0 ) &amp;&amp; (<b>dwErrCode == g_dwLastErrorToBreakOn</b>))
								<br>     <b>DbgBreakPoint();</b>
								<br>
								<br>The downside is that SetLastError is only called from within KERNEL32.DLL. 
								<br>Other calls to SetLastError are redirected to a function located in NTDLL.DLL, RtlSetLastWin32Error.
		</p></td>
	</tr>
	<tr>
		<td class="TdCmd"><p>!error</p></td>
		<td class="TdCmdParam"><p>!error ErrValue
								<br>!error ErrValue 1
		</p></td>
		<td class="TdCmdDesc"><p>Decode and display information about an error value
								<br>Treat ErrValue value as an NTSTATUS code
		</p></td>
	</tr>
</tbody></table>

## References

- https://docs.microsoft.com/en-us/windows-hardware/drivers/debugger/-thread--set-register-context-
- http://windbg.info/doc/1-common-cmds.html#12_thread