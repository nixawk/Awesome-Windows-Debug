## !exchain

The !exchain extension displays the current exception handler chain.

### Syntax

!exchain [Options]

### Parameters

Options 
One of the following values:

**/c** 
Displays information that is relevant for debugging a C++ try/catch exception, if such an exception is detected. 

**/C**
Displays information that is relevant for debugging a C++ try/catch exception, even when such an exception has not been detected. 

**/f**
Displays information that is obtained by walking the CRT function tables, even if a CRT exception handler was not detected. 


### DLL 

The !exchain extension is available only for an x86-based target computer.

----

```
0:002> !exchain
0218ffe4: ntdll!strchr+113 (7c92e900)
Invalid exception stack at ffffffff

0:002> dd fs:[0]
0038:00000000  0218ffe4 02190000 0218f000 00000000
0038:00000010  00001e00 00000000 7ffdc000 00000000
0038:00000020  00000fec 00000094 00000000 00162b50
0038:00000030  7ffdf000 00000000 00000000 00000000
0038:00000040  00000000 00000000 00000000 00000000
0038:00000050  00000000 00000000 00000000 00000000
0038:00000060  00000000 00000000 00000000 00000000
0038:00000070  00000000 00000000 00000000 00000000
0:002> dd 0218ffe4 
0218ffe4  ffffffff 7c92e900 7c970030 00000000
0218fff4  00000000 00000000 00000000 06060606
02190004  06060606 06060606 06060606 00000606
02190014  f6f6f606 f6f6f6f6 f6f6f6f6 f6f6f6f6
02190024  000006f6 06f6f606 f6f6f6f6 f6f6f6f6
02190034  f606f6f6 000006f6 06f6f606 06f6f6f6
02190044  f606f6f6 f606f6f6 000006f6 06f6f606
02190054  06f6f6f6 f606f6f6 f606f6f6 000006f6
```