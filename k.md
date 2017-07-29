
## k, kb, kc, kd, kp, kP, kv (Display Stack Backtrace)


The k* commands display the stack frame of the given thread, together with related information..

**User-Mode, x86 Processor**

```
[~Thread] k[b|p|P|v] [c] [n] [f] [L] [M] [FrameCount]
[~Thread] k[b|p|P|v] [c] [n] [f] [L] [M] = BasePtr [FrameCount]
[~Thread] k[b|p|P|v] [c] [n] [f] [L] [M] = BasePtr StackPtr InstructionPtr
[~Thread] kd [WordCount]
```

**Kernel-Mode, x86 Processor**

```
[Processor] k[b|p|P|v] [c] [n] [f] [L] [M] [FrameCount]
[Processor] k[b|p|P|v] [c] [n] [f] [L] [M] = StackPtr FrameCount
[Processor] k[b|p|P|v] [c] [n] [f] [L] [M] = BasePtr StackPtr InstructionPtr
[Processor] kd [WordCount]
```

**User-Mode, x64 Processor**

```
[~Thread] k[b|p|P|v] [c] [n] [f] [L] [M] [FrameCount]
[~Thread] k[b|p|P|v] [c] [n] [f] [L] [M] = StackPtr FrameCount
[~Thread] k[b|p|P|v] [c] [n] [f] [L] [M] = StackPtr InstructionPtr FrameCount
[~Thread] kd [WordCount]
```

**Kernel-Mode, x64 Processor**

```
[Processor] k[b|p|P|v] [c] [n] [f] [L] [M] [FrameCount]
[Processor] k[b|p|P|v] [c] [n] [f] [L] [M] = StackPtr FrameCount
[Processor] k[b|p|P|v] [c] [n] [f] [L] [M] = StackPtr InstructionPtr FrameCount
[Processor] kd [WordCount]
```

**User-Mode, ARM Processor**

```
[~Thread] k[b|p|P|v] [c] [n] [f] [L] [M] [FrameCount]
[~Thread] k[b|p|P|v] [c] [n] [f] [L] [M] = StackPtr FrameCount
[~Thread] k[b|p|P|v] [c] [n] [f] [L] [M] = StackPtr InstructionPtr FrameCount
[~Thread] kd [WordCount]
```

**Kernel-Mode, ARM Processor**

```
[Processor] k[b|p|P|v] [c] [n] [f] [L] [M] [FrameCount]
[Processor] k[b|p|P|v] [c] [n] [f] [L] [M] = StackPtr FrameCount
[Processor] k[b|p|P|v] [c] [n] [f] [L] [M] = StackPtr InstructionPtr FrameCount
[Processor] kd [WordCount]
```

```
Parameters

Thread 
  Specifies the thread whose stack is to be displayed. If you omit this parameter, the stack of the current thread is displayed. For more information about thread syntax, see Thread Syntax. You can specify threads only in user mode.

Processor 
  Specifies the processor whose stack is to be displayed. For more information about processor syntax, see Multiprocessor Syntax.

b 
  Displays the first three parameters that are passed to each function in the stack trace.

c 
  Displays a clean stack trace. Each display line includes only the module name and the function name.

p 
  Displays all of the parameters for each function that is called in the stack trace. The parameter list includes each parameter's data type, name, and value. The p option is case sensitive. This parameter requires full symbol information.

P 
  Displays all of the parameters for each function that is called in the stack trace, like the p parameter. However, for P, the function parameters are printed on a second line of the display, instead of on the same line as the rest of the data.

v 
  Displays frame pointer omission (FPO) information. On x86-based processors, the display also includes calling convention information.

n 
  Displays frame numbers.

f 
  Displays the distance between adjacent frames. This distance is the number of bytes that separate the frames on the actual stack.

L 
  Hides source lines in the display. L is case sensitive.

M 
  Displays output using Debugger Markup Language. Each frame number in the display is a link that you can click to set the local context and display local variables. For information about the local context, see .frame.

FrameCount 
  Specifies the number of stack frames to display. You should specify this number in hexadecimal format, unless you have changed the radix by using the n (Set Number Base) command. The default value is 20 (0x14), unless you have changed the default value by using the .kframes (Set Stack Length) command.

BasePtr 
  Specifies the base pointer for the stack trace. The BasePtr parameter is available only if there is an equal sign (=) after the command.

StackPtr 
  Specifies the stack pointer for the stack trace. If you omit StackPtr and InstructionPtr, the command uses the stack pointer that the rsp (or esp) register specifies and the instruction pointer that the rip (or eip) register specifies.

InstructionPtr 
  Specifies the instruction pointer for the stack trace. If you omit StackPtr and InstructionPtr, the command uses the stack pointer that the rsp (or esp) register specifies and the instruction pointer that the rip (or eip) register specifies.

WordCount 
  Specifies the number of DWORD_PTR values in the stack to dump. The default value is 20 (0x14), unless you changed the default value by using the .kframes (Set Stack Length) command.
```

---- 

## examples

```
0:000> kb
 # RetAddr           : Args to Child                                                           : Call Site
00 00000000`77732ef5 : 00000000`00000000 00000000`777d5468 00000000`00000000 00000000`00000004 : ntdll!LdrpDoDebuggerBreak+0x30
01 00000000`77711a17 : 00000000`00000000 00000000`77714061 00000000`0015f4c0 00000000`00000000 : ntdll!LdrpInitializeProcess+0x1b4f
02 00000000`776fc32e : 00000000`0015f4c0 00000000`00000000 000007ff`fffde000 00000000`00000000 : ntdll! ?? ::FNODOBFM::`string'+0x29220
03 00000000`00000000 : 00000000`00000000 00000000`00000000 00000000`00000000 00000000`00000000 : ntdll!LdrInitializeThunk+0xe
```

```
0:000> kc
 # Call Site
00 ntdll!LdrpDoDebuggerBreak
01 ntdll!LdrpInitializeProcess
02 ntdll! ?? ::FNODOBFM::`string'
03 ntdll!LdrInitializeThunk
```

```
0:000> kp
 # Child-SP          RetAddr           Call Site
00 00000000`0015eed0 00000000`77732ef5 ntdll!LdrpDoDebuggerBreak+0x30
01 00000000`0015ef10 00000000`77711a17 ntdll!LdrpInitializeProcess+0x1b4f
02 00000000`0015f400 00000000`776fc32e ntdll! ?? ::FNODOBFM::`string'+0x29220
03 00000000`0015f470 00000000`00000000 ntdll!LdrInitializeThunk+0xe
```

```
0:000> kv
 # Child-SP          RetAddr           : Args to Child                                                           : Call Site
00 00000000`0015eed0 00000000`77732ef5 : 00000000`00000000 00000000`777d5468 00000000`00000000 00000000`00000004 : ntdll!LdrpDoDebuggerBreak+0x30
01 00000000`0015ef10 00000000`77711a17 : 00000000`00000000 00000000`77714061 00000000`0015f4c0 00000000`00000000 : ntdll!LdrpInitializeProcess+0x1b4f
02 00000000`0015f400 00000000`776fc32e : 00000000`0015f4c0 00000000`00000000 000007ff`fffde000 00000000`00000000 : ntdll! ?? ::FNODOBFM::`string'+0x29220
03 00000000`0015f470 00000000`00000000 : 00000000`00000000 00000000`00000000 00000000`00000000 00000000`00000000 : ntdll!LdrInitializeThunk+0xe
```

```
0:000> kn
 # Child-SP          RetAddr           Call Site
00 00000000`0015eed0 00000000`77732ef5 ntdll!LdrpDoDebuggerBreak+0x30
01 00000000`0015ef10 00000000`77711a17 ntdll!LdrpInitializeProcess+0x1b4f
02 00000000`0015f400 00000000`776fc32e ntdll! ?? ::FNODOBFM::`string'+0x29220
03 00000000`0015f470 00000000`00000000 ntdll!LdrInitializeThunk+0xe
```

```
0:000> kf
 #   Memory  Child-SP          RetAddr           Call Site
00           00000000`0015eed0 00000000`77732ef5 ntdll!LdrpDoDebuggerBreak+0x30
01        40 00000000`0015ef10 00000000`77711a17 ntdll!LdrpInitializeProcess+0x1b4f
02       4f0 00000000`0015f400 00000000`776fc32e ntdll! ?? ::FNODOBFM::`string'+0x29220
03        70 00000000`0015f470 00000000`00000000 ntdll!LdrInitializeThunk+0xe
```

```
0:000> kL
 # Child-SP          RetAddr           Call Site
00 00000000`0015eed0 00000000`77732ef5 ntdll!LdrpDoDebuggerBreak+0x30
01 00000000`0015ef10 00000000`77711a17 ntdll!LdrpInitializeProcess+0x1b4f
02 00000000`0015f400 00000000`776fc32e ntdll! ?? ::FNODOBFM::`string'+0x29220
03 00000000`0015f470 00000000`00000000 ntdll!LdrInitializeThunk+0xe
```

```
0:000> kM
 # Child-SP          RetAddr           Call Site
00 00000000`0015eed0 00000000`77732ef5 ntdll!LdrpDoDebuggerBreak+0x30
01 00000000`0015ef10 00000000`77711a17 ntdll!LdrpInitializeProcess+0x1b4f
02 00000000`0015f400 00000000`776fc32e ntdll! ?? ::FNODOBFM::`string'+0x29220
03 00000000`0015f470 00000000`00000000 ntdll!LdrInitializeThunk+0xe
```