
## PEB (Process Environment Block)

In computing the Process Environment Block (abbreviated PEB) is a data structure in the Windows NT operating system family. The PEB is closely associated with the kernel mode EPROCESS data structure, as well as with per-process data structures managed within the address space of the Client-Server Runtime Sub-System process.

```
OS Name:                   Microsoft Windows 7 Ultimate
OS Version:                6.1.7601 Service Pack 1 Build 7601
System Type:               X86-based PC
```

```
0:001> !peb
PEB at 7ffdf000
    InheritedAddressSpace:    No
    ReadImageFileExecOptions: No
    BeingDebugged:            Yes
    ImageBaseAddress:         00f70000
    Ldr                       77c08880
    Ldr.Initialized:          Yes
    Ldr.InInitializationOrderModuleList: 00391d28 . 0039ee38
    Ldr.InLoadOrderModuleList:           00391c98 . 0039ee28
    Ldr.InMemoryOrderModuleList:         00391ca0 . 0039ee30
            Base TimeStamp                     Module
          f70000 559ea6ff Jul 09 09:53:19 2015 C:\Windows\system32\notepad.exe
        77b30000 5add1df9 Apr 22 16:42:49 2018 C:\Windows\SYSTEM32\ntdll.dll
        76ce0000 5add1e30 Apr 22 16:43:44 2018 C:\Windows\system32\kernel32.dll
        75ba0000 5add1e31 Apr 22 16:43:45 2018 C:\Windows\system32\KERNELBASE.dll
        775b0000 5add1d8f Apr 22 16:41:03 2018 C:\Windows\system32\ADVAPI32.dll
        75fe0000 4eeaf722 Dec 15 23:45:38 2011 C:\Windows\system32\msvcrt.dll
        77c80000 556362e4 May 25 10:59:00 2015 C:\Windows\SYSTEM32\sechost.dll
        76df0000 5add1d8e Apr 22 16:41:02 2018 C:\Windows\system32\RPCRT4.dll
        774c0000 59b2b2c3 Sep 08 08:09:55 2017 C:\Windows\system32\GDI32.dll
        77ca0000 58249e2b Nov 10 08:19:55 2016 C:\Windows\system32\USER32.dll
        772b0000 5aa2ce8e Mar 09 10:12:30 2018 C:\Windows\system32\LPK.dll
        77510000 59946079 Aug 16 08:10:49 2017 C:\Windows\system32\USP10.dll
        77660000 4ce7b82d Nov 20 03:59:41 2010 C:\Windows\system32\COMDLG32.dll
        772c0000 4ce7b9e2 Nov 20 04:06:58 2010 C:\Windows\system32\SHLWAPI.dll
        748a0000 553a8345 Apr 24 10:54:13 2015 C:\Windows\WinSxS\x86_microsoft.windows.common-controls_6595b64144ccf1df_6.0.7601.18837_none_41e855142bd5705d\COMCTL32.dll
        76090000 5a49962e Dec 31 18:00:14 2017 C:\Windows\system32\SHELL32.dll
        705f0000 4ce7ba4b Nov 20 04:08:43 2010 C:\Windows\system32\WINSPOOL.DRV
        76fb0000 5add1d98 Apr 22 16:41:12 2018 C:\Windows\system32\ole32.dll
        75e30000 5add1d9b Apr 22 16:41:15 2018 C:\Windows\system32\OLEAUT32.dll
        74e40000 4a5bdb2b Jul 13 18:11:07 2009 C:\Windows\system32\VERSION.dll
        75ed0000 4ce7b845 Nov 20 04:00:05 2010 C:\Windows\system32\IMM32.DLL
        76ee0000 59b94a4c Sep 13 08:10:04 2017 C:\Windows\system32\MSCTF.dll
        759f0000 5add1848 Apr 22 16:18:32 2018 C:\Windows\system32\CRYPTBASE.dll
        74620000 4a5bdb38 Jul 13 18:11:20 2009 C:\Windows\system32\uxtheme.dll
        745b0000 559eb13d Jul 09 10:37:01 2015 C:\Windows\system32\dwmapi.dll
    SubSystemData:     00000000
    ProcessHeap:       00390000
    ProcessParameters: 003912e8
    CurrentDirectory:  'C:\Users\debug\'
    WindowTitle:  'C:\Users\debug\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Accessories\Notepad.lnk'
    ImageFile:    'C:\Windows\system32\notepad.exe'
    CommandLine:  '"C:\Windows\system32\notepad.exe" '
    DllPath:      'C:\Windows\system32;;C:\Windows\system32;C:\Windows\system;C:\Windows;.;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;c:\Program Files\Microsoft SQL Server\100\Tools\Binn\;c:\Program Files\Microsoft SQL Server\100\DTS\Binn\;C:\Users\debug\AppData\Local\Programs\Python\Python36-32\Scripts\;C:\Users\debug\AppData\Local\Programs\Python\Python36-32\'
    Environment:  003907f0
        =::=::\
        ALLUSERSPROFILE=C:\ProgramData
        APPDATA=C:\Users\debug\AppData\Roaming
        CommonProgramFiles=C:\Program Files\Common Files
        COMPUTERNAME=DEBUG-WK86-7
        ComSpec=C:\Windows\system32\cmd.exe
        FP_NO_HOST_CHECK=NO
        HOMEDRIVE=C:
        HOMEPATH=\Users\debug
        LOCALAPPDATA=C:\Users\debug\AppData\Local
        LOGONSERVER=\\DEBUG-WK86-7
        NUMBER_OF_PROCESSORS=1
        OS=Windows_NT
        Path=C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;c:\Program Files\Microsoft SQL Server\100\Tools\Binn\;c:\Program Files\Microsoft SQL Server\100\DTS\Binn\;C:\Users\debug\AppData\Local\Programs\Python\Python36-32\Scripts\;C:\Users\debug\AppData\Local\Programs\Python\Python36-32\
        PATHEXT=.COM;.EXE;.BAT;.CMD;.VBS;.VBE;.JS;.JSE;.WSF;.WSH;.MSC
        PROCESSOR_ARCHITECTURE=x86
        PROCESSOR_IDENTIFIER=x86 Family 6 Model 70 Stepping 1, GenuineIntel
        PROCESSOR_LEVEL=6
        PROCESSOR_REVISION=4601
        ProgramData=C:\ProgramData
        ProgramFiles=C:\Program Files
        PSModulePath=C:\Windows\system32\WindowsPowerShell\v1.0\Modules\
        PUBLIC=C:\Users\Public
        SESSIONNAME=Console
        SystemDrive=C:
        SystemRoot=C:\Windows
        TEMP=C:\Users\debug\AppData\Local\Temp
        TMP=C:\Users\debug\AppData\Local\Temp
        USERDOMAIN=debug-WK86-7
        USERNAME=debug
        USERPROFILE=C:\Users\debug
        VS100COMNTOOLS=c:\Program Files\Microsoft Visual Studio 10.0\Common7\Tools\
        windir=C:\Windows
        _NT_SYMBOL_PATH=SRV*C:\Symbols*http://msdl.microsoft.com/download/symbols
```

```
0:001> dd fs:[0x30]
003b:00000030  7ffdf000 00000000 00000000 00000000
003b:00000040  00000000 00000000 00000000 00000000
003b:00000050  00000000 00000000 00000000 00000000
003b:00000060  00000000 00000000 00000000 00000000
003b:00000070  00000000 00000000 00000000 00000000
003b:00000080  00000000 00000000 00000000 00000000
003b:00000090  00000000 00000000 00000000 00000000
003b:000000a0  00000000 00000000 00000000 00000000
```

```
0:001> dt nt!_PEB 7ffdf000
ntdll!_PEB
   +0x000 InheritedAddressSpace : 0 ''
   +0x001 ReadImageFileExecOptions : 0 ''
   +0x002 BeingDebugged    : 0x1 ''
   +0x003 BitField         : 0x8 ''
   +0x003 ImageUsesLargePages : 0y0
   +0x003 IsProtectedProcess : 0y0
   +0x003 IsLegacyProcess  : 0y0
   +0x003 IsImageDynamicallyRelocated : 0y1
   +0x003 SkipPatchingUser32Forwarders : 0y0
   +0x003 SpareBits        : 0y000
   +0x004 Mutant           : 0xffffffff Void
   +0x008 ImageBaseAddress : 0x00f70000 Void
   +0x00c Ldr              : 0x77c08880 _PEB_LDR_DATA
   +0x010 ProcessParameters : 0x003912e8 _RTL_USER_PROCESS_PARAMETERS
   +0x014 SubSystemData    : (null) 
   +0x018 ProcessHeap      : 0x00390000 Void
   +0x01c FastPebLock      : 0x77c08380 _RTL_CRITICAL_SECTION
   +0x020 AtlThunkSListPtr : (null) 
   +0x024 IFEOKey          : (null) 
   +0x028 CrossProcessFlags : 0
   +0x028 ProcessInJob     : 0y0
   +0x028 ProcessInitializing : 0y0
   +0x028 ProcessUsingVEH  : 0y0
   +0x028 ProcessUsingVCH  : 0y0
   +0x028 ProcessUsingFTH  : 0y0
   +0x028 ReservedBits0    : 0y000000000000000000000000000 (0)
   +0x02c KernelCallbackTable : 0x77cbd538 Void
   +0x02c UserSharedInfoPtr : 0x77cbd538 Void
   +0x030 SystemReserved   : [1] 0
   +0x034 AtlThunkSListPtr32 : 0
   +0x038 ApiSetMap        : 0x77d90000 Void
   +0x03c TlsExpansionCounter : 0
   +0x040 TlsBitmap        : 0x77c08260 Void
   +0x044 TlsBitmapBits    : [2] 0x1ffffff
   +0x04c ReadOnlySharedMemoryBase : 0x7f6f0000 Void
   +0x050 HotpatchInformation : (null) 
   +0x054 ReadOnlyStaticServerData : 0x7f6f0590  -> (null) 
   +0x058 AnsiCodePageData : 0x7ffb0000 Void
   +0x05c OemCodePageData  : 0x7ffc0224 Void
   +0x060 UnicodeCaseTableData : 0x7ffd0648 Void
   +0x064 NumberOfProcessors : 1
   +0x068 NtGlobalFlag     : 0
   +0x070 CriticalSectionTimeout : _LARGE_INTEGER 0xffffe86d`079b8000
   +0x078 HeapSegmentReserve : 0x100000
   +0x07c HeapSegmentCommit : 0x2000
   +0x080 HeapDeCommitTotalFreeThreshold : 0x10000
   +0x084 HeapDeCommitFreeBlockThreshold : 0x1000
   +0x088 NumberOfHeaps    : 6
   +0x08c MaximumNumberOfHeaps : 0x10
   +0x090 ProcessHeaps     : 0x77c08500  -> 0x00390000 Void
   +0x094 GdiSharedHandleTable : 0x00490000 Void
   +0x098 ProcessStarterHelper : (null) 
   +0x09c GdiDCAttributeList : 0x14
   +0x0a0 LoaderLock       : 0x77c08340 _RTL_CRITICAL_SECTION
   +0x0a4 OSMajorVersion   : 6
   +0x0a8 OSMinorVersion   : 1
   +0x0ac OSBuildNumber    : 0x1db1
   +0x0ae OSCSDVersion     : 0x100
   +0x0b0 OSPlatformId     : 2
   +0x0b4 ImageSubsystem   : 2
   +0x0b8 ImageSubsystemMajorVersion : 6
   +0x0bc ImageSubsystemMinorVersion : 1
   +0x0c0 ActiveProcessAffinityMask : 1
   +0x0c4 GdiHandleBuffer  : [34] 0
   +0x14c PostProcessInitRoutine : (null) 
   +0x150 TlsExpansionBitmap : 0x77c08268 Void
   +0x154 TlsExpansionBitmapBits : [32] 1
   +0x1d4 SessionId        : 1
   +0x1d8 AppCompatFlags   : _ULARGE_INTEGER 0x0
   +0x1e0 AppCompatFlagsUser : _ULARGE_INTEGER 0x0
   +0x1e8 pShimData        : (null) 
   +0x1ec AppCompatInfo    : (null) 
   +0x1f0 CSDVersion       : _UNICODE_STRING "Service Pack 1"
   +0x1f8 ActivationContextData : 0x00040000 _ACTIVATION_CONTEXT_DATA
   +0x1fc ProcessAssemblyStorageMap : 0x00392c28 _ASSEMBLY_STORAGE_MAP
   +0x200 SystemDefaultActivationContextData : 0x00030000 _ACTIVATION_CONTEXT_DATA
   +0x204 SystemAssemblyStorageMap : (null) 
   +0x208 MinimumStackCommit : 0
   +0x20c FlsCallback      : 0x003a11f8 _FLS_CALLBACK_INFO
   +0x210 FlsListHead      : _LIST_ENTRY [ 0x3a0ee0 - 0x3a0ee0 ]
   +0x218 FlsBitmap        : 0x77c08270 Void
   +0x21c FlsBitmapBits    : [4] 0xf
   +0x22c FlsHighIndex     : 3
   +0x230 WerRegistrationData : (null) 
   +0x234 WerShipAssertPtr : (null) 
   +0x238 pContextData     : 0x00050000 Void
   +0x23c pImageHeaderHash : (null) 
   +0x240 TracingFlags     : 0
   +0x240 HeapTracingEnabled : 0y0
   +0x240 CritSecTracingEnabled : 0y0
   +0x240 SpareTracingBits : 0y000000000000000000000000000000 (0)
```

## KERNEL EPROCESS

```
kd> dt NT!_EPROCESS -r
   +0x000 Pcb              : _KPROCESS
      +0x000 Header           : _DISPATCHER_HEADER
         +0x000 Type             : UChar
         +0x001 TimerControlFlags : UChar
         +0x001 Absolute         : Pos 0, 1 Bit
         +0x001 Coalescable      : Pos 1, 1 Bit
         +0x001 KeepShifting     : Pos 2, 1 Bit
         +0x001 EncodedTolerableDelay : Pos 3, 5 Bits
         +0x001 Abandoned        : UChar
         +0x001 Signalling       : UChar
         +0x001 ThreadSpecControl : UChar
         +0x001 SpecControlIbrs  : Pos 0, 1 Bit
         +0x001 SpecControlStibp : Pos 1, 1 Bit
         +0x001 SpecControlReserved : Pos 2, 6 Bits
         +0x002 ThreadControlFlags : UChar
         +0x002 CpuThrottled     : Pos 0, 1 Bit
         +0x002 CycleProfiling   : Pos 1, 1 Bit
         +0x002 CounterProfiling : Pos 2, 1 Bit
         +0x002 Reserved         : Pos 3, 5 Bits
         +0x002 Hand             : UChar
         +0x002 Size             : UChar
         +0x003 TimerMiscFlags   : UChar
         +0x003 Index            : Pos 0, 1 Bit
         +0x003 Processor        : Pos 1, 5 Bits
         +0x003 Inserted         : Pos 6, 1 Bit
         +0x003 Expired          : Pos 7, 1 Bit
         +0x003 DebugActive      : UChar
         +0x003 ActiveDR7        : Pos 0, 1 Bit
         +0x003 Instrumented     : Pos 1, 1 Bit
         +0x003 Reserved2        : Pos 2, 4 Bits
         +0x003 UmsScheduled     : Pos 6, 1 Bit
         +0x003 UmsPrimary       : Pos 7, 1 Bit
         +0x003 DpcActive        : UChar
         +0x000 Lock             : Int4B
         +0x004 SignalState      : Int4B
         +0x008 WaitListHead     : _LIST_ENTRY
      +0x010 ProfileListHead  : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x018 DirectoryTableBase : Uint4B
      +0x01c LdtDescriptor    : _KGDTENTRY
         +0x000 LimitLow         : Uint2B
         +0x002 BaseLow          : Uint2B
         +0x004 HighWord         : <unnamed-tag>
      +0x024 Int21Descriptor  : _KIDTENTRY
         +0x000 Offset           : Uint2B
         +0x002 Selector         : Uint2B
         +0x004 Access           : Uint2B
         +0x006 ExtendedOffset   : Uint2B
      +0x02c ThreadListHead   : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x034 ProcessLock      : Uint4B
      +0x038 Affinity         : _KAFFINITY_EX
         +0x000 Count            : Uint2B
         +0x002 Size             : Uint2B
         +0x004 Reserved         : Uint4B
         +0x008 Bitmap           : [1] Uint4B
      +0x044 ReadyListHead    : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x04c SwapListEntry    : _SINGLE_LIST_ENTRY
         +0x000 Next             : Ptr32 _SINGLE_LIST_ENTRY
      +0x050 ActiveProcessors : _KAFFINITY_EX
         +0x000 Count            : Uint2B
         +0x002 Size             : Uint2B
         +0x004 Reserved         : Uint4B
         +0x008 Bitmap           : [1] Uint4B
      +0x05c AutoAlignment    : Pos 0, 1 Bit
      +0x05c DisableBoost     : Pos 1, 1 Bit
      +0x05c DisableQuantum   : Pos 2, 1 Bit
      +0x05c ActiveGroupsMask : Pos 3, 1 Bit
      +0x05c ReservedFlags    : Pos 4, 28 Bits
      +0x05c ProcessFlags     : Int4B
      +0x060 BasePriority     : Char
      +0x061 QuantumReset     : Char
      +0x062 Visited          : UChar
      +0x063 Unused3          : UChar
      +0x064 ThreadSeed       : [1] Uint4B
      +0x068 IdealNode        : [1] Uint2B
      +0x06a IdealGlobalNode  : Uint2B
      +0x06c Flags            : _KEXECUTE_OPTIONS
         +0x000 ExecuteDisable   : Pos 0, 1 Bit
         +0x000 ExecuteEnable    : Pos 1, 1 Bit
         +0x000 DisableThunkEmulation : Pos 2, 1 Bit
         +0x000 Permanent        : Pos 3, 1 Bit
         +0x000 ExecuteDispatchEnable : Pos 4, 1 Bit
         +0x000 ImageDispatchEnable : Pos 5, 1 Bit
         +0x000 DisableExceptionChainValidation : Pos 6, 1 Bit
         +0x000 Spare            : Pos 7, 1 Bit
         +0x000 ExecuteOptions   : UChar
      +0x06d AddressPolicy    : UChar
      +0x06e IopmOffset       : Uint2B
      +0x070 Unused4          : Uint4B
      +0x074 StackCount       : _KSTACK_COUNT
         +0x000 Value            : Int4B
         +0x000 State            : Pos 0, 3 Bits
         +0x000 StackCount       : Pos 3, 29 Bits
      +0x078 ProcessListEntry : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x080 CycleTime        : Uint8B
      +0x088 KernelTime       : Uint4B
      +0x08c UserTime         : Uint4B
      +0x090 VdmTrapcHandler  : Ptr32 Void
   +0x098 ProcessLock      : _EX_PUSH_LOCK
      +0x000 Locked           : Pos 0, 1 Bit
      +0x000 Waiting          : Pos 1, 1 Bit
      +0x000 Waking           : Pos 2, 1 Bit
      +0x000 MultipleShared   : Pos 3, 1 Bit
      +0x000 Shared           : Pos 4, 28 Bits
      +0x000 Value            : Uint4B
      +0x000 Ptr              : Ptr32 Void
   +0x0a0 CreateTime       : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x0a8 ExitTime         : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x0b0 RundownProtect   : _EX_RUNDOWN_REF
      +0x000 Count            : Uint4B
      +0x000 Ptr              : Ptr32 Void
   +0x0b4 UniqueProcessId  : Ptr32 Void
   +0x0b8 ActiveProcessLinks : _LIST_ENTRY
      +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x004 Blink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
   +0x0c0 ProcessQuotaUsage : [2] Uint4B
   +0x0c8 ProcessQuotaPeak : [2] Uint4B
   +0x0d0 CommitCharge     : Uint4B
   +0x0d4 QuotaBlock       : Ptr32 _EPROCESS_QUOTA_BLOCK
   +0x0d8 CpuQuotaBlock    : Ptr32 _PS_CPU_QUOTA_BLOCK
      +0x000 ListEntry        : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x008 SessionId        : Uint4B
      +0x00c CpuShareWeight   : Uint4B
      +0x010 CapturedWeightData : _PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA
         +0x000 CapturedCpuShareWeight : Uint4B
         +0x004 CapturedTotalWeight : Uint4B
         +0x000 CombinedData     : Int8B
      +0x018 DuplicateInputMarker : Pos 0, 1 Bit
      +0x018 Reserved         : Pos 1, 31 Bits
      +0x018 MiscFlags        : Int4B
      +0x000 BlockCurrentGenerationLock : Uint4B
      +0x008 CyclesAccumulated : Uint8B
      +0x040 CycleCredit      : Uint8B
      +0x048 BlockCurrentGeneration : Uint4B
      +0x04c CpuCyclePercent  : Uint4B
      +0x050 CyclesFinishedForCurrentGeneration : UChar
      +0x080 Cpu              : [32] _PS_PER_CPU_QUOTA_CACHE_AWARE
         +0x000 SortedListEntry  : _LIST_ENTRY
         +0x008 IdleOnlyListHead : _LIST_ENTRY
         +0x010 CycleBaseAllowance : Uint8B
         +0x018 CyclesRemaining  : Int8B
         +0x020 CurrentGeneration : Uint4B
   +0x0dc PeakVirtualSize  : Uint4B
   +0x0e0 VirtualSize      : Uint4B
   +0x0e4 SessionProcessLinks : _LIST_ENTRY
      +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x004 Blink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
   +0x0ec DebugPort        : Ptr32 Void
   +0x0f0 ExceptionPortData : Ptr32 Void
   +0x0f0 ExceptionPortValue : Uint4B
   +0x0f0 ExceptionPortState : Pos 0, 3 Bits
   +0x0f4 ObjectTable      : Ptr32 _HANDLE_TABLE
      +0x000 TableCode        : Uint4B
      +0x004 QuotaProcess     : Ptr32 _EPROCESS
         +0x000 Pcb              : _KPROCESS
         +0x098 ProcessLock      : _EX_PUSH_LOCK
         +0x0a0 CreateTime       : _LARGE_INTEGER
         +0x0a8 ExitTime         : _LARGE_INTEGER
         +0x0b0 RundownProtect   : _EX_RUNDOWN_REF
         +0x0b4 UniqueProcessId  : Ptr32 Void
         +0x0b8 ActiveProcessLinks : _LIST_ENTRY
         +0x0c0 ProcessQuotaUsage : [2] Uint4B
         +0x0c8 ProcessQuotaPeak : [2] Uint4B
         +0x0d0 CommitCharge     : Uint4B
         +0x0d4 QuotaBlock       : Ptr32 _EPROCESS_QUOTA_BLOCK
         +0x0d8 CpuQuotaBlock    : Ptr32 _PS_CPU_QUOTA_BLOCK
         +0x0dc PeakVirtualSize  : Uint4B
         +0x0e0 VirtualSize      : Uint4B
         +0x0e4 SessionProcessLinks : _LIST_ENTRY
         +0x0ec DebugPort        : Ptr32 Void
         +0x0f0 ExceptionPortData : Ptr32 Void
         +0x0f0 ExceptionPortValue : Uint4B
         +0x0f0 ExceptionPortState : Pos 0, 3 Bits
         +0x0f4 ObjectTable      : Ptr32 _HANDLE_TABLE
         +0x0f8 Token            : _EX_FAST_REF
         +0x0fc WorkingSetPage   : Uint4B
         +0x100 AddressCreationLock : _EX_PUSH_LOCK
         +0x104 RotateInProgress : Ptr32 _ETHREAD
         +0x108 ForkInProgress   : Ptr32 _ETHREAD
         +0x10c HardwareTrigger  : Uint4B
         +0x110 PhysicalVadRoot  : Ptr32 _MM_AVL_TABLE
         +0x114 CloneRoot        : Ptr32 Void
         +0x118 NumberOfPrivatePages : Uint4B
         +0x11c NumberOfLockedPages : Uint4B
         +0x120 Win32Process     : Ptr32 Void
         +0x124 Job              : Ptr32 _EJOB
         +0x128 SectionObject    : Ptr32 Void
         +0x12c SectionBaseAddress : Ptr32 Void
         +0x130 Cookie           : Uint4B
         +0x134 Spare8           : Uint4B
         +0x138 WorkingSetWatch  : Ptr32 _PAGEFAULT_HISTORY
         +0x13c Win32WindowStation : Ptr32 Void
         +0x140 InheritedFromUniqueProcessId : Ptr32 Void
         +0x144 LdtInformation   : Ptr32 Void
         +0x148 VdmObjects       : Ptr32 Void
         +0x14c ConsoleHostProcess : Uint4B
         +0x150 DeviceMap        : Ptr32 Void
         +0x154 EtwDataSource    : Ptr32 Void
         +0x158 FreeTebHint      : Ptr32 Void
         +0x160 PageDirectoryPte : _HARDWARE_PTE
         +0x160 Filler           : Uint8B
         +0x168 Session          : Ptr32 Void
         +0x16c ImageFileName    : [15] UChar
         +0x17b PriorityClass    : UChar
         +0x17c JobLinks         : _LIST_ENTRY
         +0x184 LockedPagesList  : Ptr32 Void
         +0x188 ThreadListHead   : _LIST_ENTRY
         +0x190 SecurityPort     : Ptr32 Void
         +0x194 PaeTop           : Ptr32 Void
         +0x198 ActiveThreads    : Uint4B
         +0x19c ImagePathHash    : Uint4B
         +0x1a0 DefaultHardErrorProcessing : Uint4B
         +0x1a4 LastThreadExitStatus : Int4B
         +0x1a8 Peb              : Ptr32 _PEB
         +0x1ac PrefetchTrace    : _EX_FAST_REF
         +0x1b0 ReadOperationCount : _LARGE_INTEGER
         +0x1b8 WriteOperationCount : _LARGE_INTEGER
         +0x1c0 OtherOperationCount : _LARGE_INTEGER
         +0x1c8 ReadTransferCount : _LARGE_INTEGER
         +0x1d0 WriteTransferCount : _LARGE_INTEGER
         +0x1d8 OtherTransferCount : _LARGE_INTEGER
         +0x1e0 CommitChargeLimit : Uint4B
         +0x1e4 CommitChargePeak : Uint4B
         +0x1e8 AweInfo          : Ptr32 Void
         +0x1ec SeAuditProcessCreationInfo : _SE_AUDIT_PROCESS_CREATION_INFO
         +0x1f0 Vm               : _MMSUPPORT
         +0x25c MmProcessLinks   : _LIST_ENTRY
         +0x264 HighestUserAddress : Ptr32 Void
         +0x268 ModifiedPageCount : Uint4B
         +0x26c Flags2           : Uint4B
         +0x26c JobNotReallyActive : Pos 0, 1 Bit
         +0x26c AccountingFolded : Pos 1, 1 Bit
         +0x26c NewProcessReported : Pos 2, 1 Bit
         +0x26c ExitProcessReported : Pos 3, 1 Bit
         +0x26c ReportCommitChanges : Pos 4, 1 Bit
         +0x26c LastReportMemory : Pos 5, 1 Bit
         +0x26c ReportPhysicalPageChanges : Pos 6, 1 Bit
         +0x26c HandleTableRundown : Pos 7, 1 Bit
         +0x26c NeedsHandleRundown : Pos 8, 1 Bit
         +0x26c RefTraceEnabled  : Pos 9, 1 Bit
         +0x26c NumaAware        : Pos 10, 1 Bit
         +0x26c ProtectedProcess : Pos 11, 1 Bit
         +0x26c DefaultPagePriority : Pos 12, 3 Bits
         +0x26c PrimaryTokenFrozen : Pos 15, 1 Bit
         +0x26c ProcessVerifierTarget : Pos 16, 1 Bit
         +0x26c StackRandomizationDisabled : Pos 17, 1 Bit
         +0x26c AffinityPermanent : Pos 18, 1 Bit
         +0x26c AffinityUpdateEnable : Pos 19, 1 Bit
         +0x26c PropagateNode    : Pos 20, 1 Bit
         +0x26c ExplicitAffinity : Pos 21, 1 Bit
         +0x26c Spare1           : Pos 22, 1 Bit
         +0x26c ForceRelocateImages : Pos 23, 1 Bit
         +0x26c DisallowStrippedImages : Pos 24, 1 Bit
         +0x26c LowVaAccessible  : Pos 25, 1 Bit
         +0x26c RestrictIndirectBranchPrediction : Pos 26, 1 Bit
         +0x26c AddressPolicyFrozen : Pos 27, 1 Bit
         +0x270 Flags            : Uint4B
         +0x270 CreateReported   : Pos 0, 1 Bit
         +0x270 NoDebugInherit   : Pos 1, 1 Bit
         +0x270 ProcessExiting   : Pos 2, 1 Bit
         +0x270 ProcessDelete    : Pos 3, 1 Bit
         +0x270 Wow64SplitPages  : Pos 4, 1 Bit
         +0x270 VmDeleted        : Pos 5, 1 Bit
         +0x270 OutswapEnabled   : Pos 6, 1 Bit
         +0x270 Outswapped       : Pos 7, 1 Bit
         +0x270 ForkFailed       : Pos 8, 1 Bit
         +0x270 Wow64VaSpace4Gb  : Pos 9, 1 Bit
         +0x270 AddressSpaceInitialized : Pos 10, 2 Bits
         +0x270 SetTimerResolution : Pos 12, 1 Bit
         +0x270 BreakOnTermination : Pos 13, 1 Bit
         +0x270 DeprioritizeViews : Pos 14, 1 Bit
         +0x270 WriteWatch       : Pos 15, 1 Bit
         +0x270 ProcessInSession : Pos 16, 1 Bit
         +0x270 OverrideAddressSpace : Pos 17, 1 Bit
         +0x270 HasAddressSpace  : Pos 18, 1 Bit
         +0x270 LaunchPrefetched : Pos 19, 1 Bit
         +0x270 InjectInpageErrors : Pos 20, 1 Bit
         +0x270 VmTopDown        : Pos 21, 1 Bit
         +0x270 ImageNotifyDone  : Pos 22, 1 Bit
         +0x270 PdeUpdateNeeded  : Pos 23, 1 Bit
         +0x270 VdmAllowed       : Pos 24, 1 Bit
         +0x270 CrossSessionCreate : Pos 25, 1 Bit
         +0x270 ProcessInserted  : Pos 26, 1 Bit
         +0x270 DefaultIoPriority : Pos 27, 3 Bits
         +0x270 ProcessSelfDelete : Pos 30, 1 Bit
         +0x270 SetTimerResolutionLink : Pos 31, 1 Bit
         +0x274 ExitStatus       : Int4B
         +0x278 VadRoot          : _MM_AVL_TABLE
         +0x298 AlpcContext      : _ALPC_PROCESS_CONTEXT
         +0x2a8 TimerResolutionLink : _LIST_ENTRY
         +0x2b0 RequestedTimerResolution : Uint4B
         +0x2b4 ActiveThreadsHighWatermark : Uint4B
         +0x2b8 SmallestTimerResolution : Uint4B
         +0x2bc TimerResolutionStackRecord : Ptr32 _PO_DIAG_STACK_RECORD
         +0x2c0 SequenceNumber   : Uint8B
         +0x2c8 CreateInterruptTime : Uint8B
         +0x2d0 CreateUnbiasedInterruptTime : Uint8B
         +0x2d8 SecurityDomain   : Uint8B
      +0x008 UniqueProcessId  : Ptr32 Void
      +0x00c HandleLock       : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 28 Bits
         +0x000 Value            : Uint4B
         +0x000 Ptr              : Ptr32 Void
      +0x010 HandleTableList  : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x018 HandleContentionEvent : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 28 Bits
         +0x000 Value            : Uint4B
         +0x000 Ptr              : Ptr32 Void
      +0x01c DebugInfo        : Ptr32 _HANDLE_TRACE_DEBUG_INFO
         +0x000 RefCount         : Int4B
         +0x004 TableSize        : Uint4B
         +0x008 BitMaskFlags     : Uint4B
         +0x00c CloseCompactionLock : _FAST_MUTEX
         +0x02c CurrentStackIndex : Uint4B
         +0x030 TraceDb          : [1] _HANDLE_TRACE_DB_ENTRY
      +0x020 ExtraInfoPages   : Int4B
      +0x024 Flags            : Uint4B
      +0x024 StrictFIFO       : Pos 0, 1 Bit
      +0x028 FirstFreeHandle  : Uint4B
      +0x02c LastFreeHandleEntry : Ptr32 _HANDLE_TABLE_ENTRY
         +0x000 Object           : Ptr32 Void
         +0x000 ObAttributes     : Uint4B
         +0x000 InfoTable        : Ptr32 _HANDLE_TABLE_ENTRY_INFO
         +0x000 Value            : Uint4B
         +0x004 GrantedAccess    : Uint4B
         +0x004 GrantedAccessIndex : Uint2B
         +0x006 CreatorBackTraceIndex : Uint2B
         +0x004 NextFreeTableEntry : Uint4B
      +0x030 HandleCount      : Uint4B
      +0x034 NextHandleNeedingPool : Uint4B
      +0x038 HandleCountHighWatermark : Uint4B
   +0x0f8 Token            : _EX_FAST_REF
      +0x000 Object           : Ptr32 Void
      +0x000 RefCnt           : Pos 0, 3 Bits
      +0x000 Value            : Uint4B
   +0x0fc WorkingSetPage   : Uint4B
   +0x100 AddressCreationLock : _EX_PUSH_LOCK
      +0x000 Locked           : Pos 0, 1 Bit
      +0x000 Waiting          : Pos 1, 1 Bit
      +0x000 Waking           : Pos 2, 1 Bit
      +0x000 MultipleShared   : Pos 3, 1 Bit
      +0x000 Shared           : Pos 4, 28 Bits
      +0x000 Value            : Uint4B
      +0x000 Ptr              : Ptr32 Void
   +0x104 RotateInProgress : Ptr32 _ETHREAD
      +0x000 Tcb              : _KTHREAD
         +0x000 Header           : _DISPATCHER_HEADER
         +0x010 CycleTime        : Uint8B
         +0x018 HighCycleTime    : Uint4B
         +0x020 QuantumTarget    : Uint8B
         +0x028 InitialStack     : Ptr32 Void
         +0x02c StackLimit       : Ptr32 Void
         +0x030 KernelStack      : Ptr32 Void
         +0x034 ThreadLock       : Uint4B
         +0x038 WaitRegister     : _KWAIT_STATUS_REGISTER
         +0x039 Running          : UChar
         +0x03a Alerted          : [2] UChar
         +0x03c KernelStackResident : Pos 0, 1 Bit
         +0x03c ReadyTransition  : Pos 1, 1 Bit
         +0x03c ProcessReadyQueue : Pos 2, 1 Bit
         +0x03c WaitNext         : Pos 3, 1 Bit
         +0x03c SystemAffinityActive : Pos 4, 1 Bit
         +0x03c Alertable        : Pos 5, 1 Bit
         +0x03c GdiFlushActive   : Pos 6, 1 Bit
         +0x03c UserStackWalkActive : Pos 7, 1 Bit
         +0x03c ApcInterruptRequest : Pos 8, 1 Bit
         +0x03c ForceDeferSchedule : Pos 9, 1 Bit
         +0x03c QuantumEndMigrate : Pos 10, 1 Bit
         +0x03c UmsDirectedSwitchEnable : Pos 11, 1 Bit
         +0x03c TimerActive      : Pos 12, 1 Bit
         +0x03c SystemThread     : Pos 13, 1 Bit
         +0x03c Reserved         : Pos 14, 18 Bits
         +0x03c MiscFlags        : Int4B
         +0x040 ApcState         : _KAPC_STATE
         +0x040 ApcStateFill     : [23] UChar
         +0x057 Priority         : Char
         +0x058 NextProcessor    : Uint4B
         +0x05c DeferredProcessor : Uint4B
         +0x060 ApcQueueLock     : Uint4B
         +0x064 ContextSwitches  : Uint4B
         +0x068 State            : UChar
         +0x069 NpxState         : Char
         +0x06a WaitIrql         : UChar
         +0x06b WaitMode         : Char
         +0x06c WaitStatus       : Int4B
         +0x070 WaitBlockList    : Ptr32 _KWAIT_BLOCK
         +0x074 WaitListEntry    : _LIST_ENTRY
         +0x074 SwapListEntry    : _SINGLE_LIST_ENTRY
         +0x07c Queue            : Ptr32 _KQUEUE
         +0x080 WaitTime         : Uint4B
         +0x084 KernelApcDisable : Int2B
         +0x086 SpecialApcDisable : Int2B
         +0x084 CombinedApcDisable : Uint4B
         +0x088 Teb              : Ptr32 Void
         +0x090 Timer            : _KTIMER
         +0x0b8 AutoAlignment    : Pos 0, 1 Bit
         +0x0b8 DisableBoost     : Pos 1, 1 Bit
         +0x0b8 EtwStackTraceApc1Inserted : Pos 2, 1 Bit
         +0x0b8 EtwStackTraceApc2Inserted : Pos 3, 1 Bit
         +0x0b8 CalloutActive    : Pos 4, 1 Bit
         +0x0b8 ApcQueueable     : Pos 5, 1 Bit
         +0x0b8 EnableStackSwap  : Pos 6, 1 Bit
         +0x0b8 GuiThread        : Pos 7, 1 Bit
         +0x0b8 UmsPerformingSyscall : Pos 8, 1 Bit
         +0x0b8 VdmSafe          : Pos 9, 1 Bit
         +0x0b8 UmsDispatched    : Pos 10, 1 Bit
         +0x0b8 ReservedFlags    : Pos 11, 21 Bits
         +0x0b8 ThreadFlags      : Int4B
         +0x0bc ServiceTable     : Ptr32 Void
         +0x0c0 WaitBlock        : [4] _KWAIT_BLOCK
         +0x120 QueueListEntry   : _LIST_ENTRY
         +0x128 TrapFrame        : Ptr32 _KTRAP_FRAME
         +0x12c FirstArgument    : Ptr32 Void
         +0x130 CallbackStack    : Ptr32 Void
         +0x130 CallbackDepth    : Uint4B
         +0x134 ApcStateIndex    : UChar
         +0x135 BasePriority     : Char
         +0x136 PriorityDecrement : Char
         +0x136 ForegroundBoost  : Pos 0, 4 Bits
         +0x136 UnusualBoost     : Pos 4, 4 Bits
         +0x137 Preempted        : UChar
         +0x138 AdjustReason     : UChar
         +0x139 AdjustIncrement  : Char
         +0x13a PreviousMode     : Char
         +0x13b Saturation       : Char
         +0x13c SystemCallNumber : Uint4B
         +0x140 FreezeCount      : Uint4B
         +0x144 UserAffinity     : _GROUP_AFFINITY
         +0x150 Process          : Ptr32 _KPROCESS
         +0x154 Affinity         : _GROUP_AFFINITY
         +0x160 IdealProcessor   : Uint4B
         +0x164 UserIdealProcessor : Uint4B
         +0x168 ApcStatePointer  : [2] Ptr32 _KAPC_STATE
         +0x170 SavedApcState    : _KAPC_STATE
         +0x170 SavedApcStateFill : [23] UChar
         +0x187 WaitReason       : UChar
         +0x188 SuspendCount     : Char
         +0x189 Spare1           : Char
         +0x18a OtherPlatformFill : UChar
         +0x18c Win32Thread      : Ptr32 Void
         +0x190 StackBase        : Ptr32 Void
         +0x194 SuspendApc       : _KAPC
         +0x194 SuspendApcFill0  : [1] UChar
         +0x195 ResourceIndex    : UChar
         +0x194 SuspendApcFill1  : [3] UChar
         +0x197 QuantumReset     : UChar
         +0x194 SuspendApcFill2  : [4] UChar
         +0x198 KernelTime       : Uint4B
         +0x194 SuspendApcFill3  : [36] UChar
         +0x1b8 WaitPrcb         : Ptr32 _KPRCB
         +0x194 SuspendApcFill4  : [40] UChar
         +0x1bc LegoData         : Ptr32 Void
         +0x194 SuspendApcFill5  : [47] UChar
         +0x1c3 LargeStack       : UChar
         +0x1c4 UserTime         : Uint4B
         +0x1c8 SuspendSemaphore : _KSEMAPHORE
         +0x1c8 SuspendSemaphorefill : [20] UChar
         +0x1dc SListFaultCount  : Uint4B
         +0x1e0 ThreadListEntry  : _LIST_ENTRY
         +0x1e8 MutantListHead   : _LIST_ENTRY
         +0x1f0 SListFaultAddress : Ptr32 Void
         +0x1f4 ThreadCounters   : Ptr32 _KTHREAD_COUNTERS
         +0x1f8 XStateSave       : Ptr32 _XSTATE_SAVE
      +0x200 CreateTime       : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x208 ExitTime         : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x208 KeyedWaitChain   : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x210 ExitStatus       : Int4B
      +0x214 PostBlockList    : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x214 ForwardLinkShadow : Ptr32 Void
      +0x218 StartAddress     : Ptr32 Void
      +0x21c TerminationPort  : Ptr32 _TERMINATION_PORT
         +0x000 Next             : Ptr32 _TERMINATION_PORT
         +0x004 Port             : Ptr32 Void
      +0x21c ReaperLink       : Ptr32 _ETHREAD
         +0x000 Tcb              : _KTHREAD
         +0x200 CreateTime       : _LARGE_INTEGER
         +0x208 ExitTime         : _LARGE_INTEGER
         +0x208 KeyedWaitChain   : _LIST_ENTRY
         +0x210 ExitStatus       : Int4B
         +0x214 PostBlockList    : _LIST_ENTRY
         +0x214 ForwardLinkShadow : Ptr32 Void
         +0x218 StartAddress     : Ptr32 Void
         +0x21c TerminationPort  : Ptr32 _TERMINATION_PORT
         +0x21c ReaperLink       : Ptr32 _ETHREAD
         +0x21c KeyedWaitValue   : Ptr32 Void
         +0x220 ActiveTimerListLock : Uint4B
         +0x224 ActiveTimerListHead : _LIST_ENTRY
         +0x22c Cid              : _CLIENT_ID
         +0x234 KeyedWaitSemaphore : _KSEMAPHORE
         +0x234 AlpcWaitSemaphore : _KSEMAPHORE
         +0x248 ClientSecurity   : _PS_CLIENT_SECURITY_CONTEXT
         +0x24c IrpList          : _LIST_ENTRY
         +0x254 TopLevelIrp      : Uint4B
         +0x258 DeviceToVerify   : Ptr32 _DEVICE_OBJECT
         +0x25c CpuQuotaApc      : Ptr32 _PSP_CPU_QUOTA_APC
         +0x260 Win32StartAddress : Ptr32 Void
         +0x264 LegacyPowerObject : Ptr32 Void
         +0x268 ThreadListEntry  : _LIST_ENTRY
         +0x270 RundownProtect   : _EX_RUNDOWN_REF
         +0x274 ThreadLock       : _EX_PUSH_LOCK
         +0x278 ReadClusterSize  : Uint4B
         +0x27c MmLockOrdering   : Int4B
         +0x280 CrossThreadFlags : Uint4B
         +0x280 Terminated       : Pos 0, 1 Bit
         +0x280 ThreadInserted   : Pos 1, 1 Bit
         +0x280 HideFromDebugger : Pos 2, 1 Bit
         +0x280 ActiveImpersonationInfo : Pos 3, 1 Bit
         +0x280 Reserved         : Pos 4, 1 Bit
         +0x280 HardErrorsAreDisabled : Pos 5, 1 Bit
         +0x280 BreakOnTermination : Pos 6, 1 Bit
         +0x280 SkipCreationMsg  : Pos 7, 1 Bit
         +0x280 SkipTerminationMsg : Pos 8, 1 Bit
         +0x280 CopyTokenOnOpen  : Pos 9, 1 Bit
         +0x280 ThreadIoPriority : Pos 10, 3 Bits
         +0x280 ThreadPagePriority : Pos 13, 3 Bits
         +0x280 RundownFail      : Pos 16, 1 Bit
         +0x280 NeedsWorkingSetAging : Pos 17, 1 Bit
         +0x284 SameThreadPassiveFlags : Uint4B
         +0x284 ActiveExWorker   : Pos 0, 1 Bit
         +0x284 ExWorkerCanWaitUser : Pos 1, 1 Bit
         +0x284 MemoryMaker      : Pos 2, 1 Bit
         +0x284 ClonedThread     : Pos 3, 1 Bit
         +0x284 KeyedEventInUse  : Pos 4, 1 Bit
         +0x284 RateApcState     : Pos 5, 2 Bits
         +0x284 SelfTerminate    : Pos 7, 1 Bit
         +0x288 SameThreadApcFlags : Uint4B
         +0x288 Spare            : Pos 0, 1 Bit
         +0x288 StartAddressInvalid : Pos 1, 1 Bit
         +0x288 EtwPageFaultCalloutActive : Pos 2, 1 Bit
         +0x288 OwnsProcessWorkingSetExclusive : Pos 3, 1 Bit
         +0x288 OwnsProcessWorkingSetShared : Pos 4, 1 Bit
         +0x288 OwnsSystemCacheWorkingSetExclusive : Pos 5, 1 Bit
         +0x288 OwnsSystemCacheWorkingSetShared : Pos 6, 1 Bit
         +0x288 OwnsSessionWorkingSetExclusive : Pos 7, 1 Bit
         +0x289 OwnsSessionWorkingSetShared : Pos 0, 1 Bit
         +0x289 OwnsProcessAddressSpaceExclusive : Pos 1, 1 Bit
         +0x289 OwnsProcessAddressSpaceShared : Pos 2, 1 Bit
         +0x289 SuppressSymbolLoad : Pos 3, 1 Bit
         +0x289 Prefetching      : Pos 4, 1 Bit
         +0x289 OwnsDynamicMemoryShared : Pos 5, 1 Bit
         +0x289 OwnsChangeControlAreaExclusive : Pos 6, 1 Bit
         +0x289 OwnsChangeControlAreaShared : Pos 7, 1 Bit
         +0x28a OwnsPagedPoolWorkingSetExclusive : Pos 0, 1 Bit
         +0x28a OwnsPagedPoolWorkingSetShared : Pos 1, 1 Bit
         +0x28a OwnsSystemPtesWorkingSetExclusive : Pos 2, 1 Bit
         +0x28a OwnsSystemPtesWorkingSetShared : Pos 3, 1 Bit
         +0x28a TrimTrigger      : Pos 4, 2 Bits
         +0x28a Spare1           : Pos 6, 2 Bits
         +0x28b PriorityRegionActive : UChar
         +0x28c CacheManagerActive : UChar
         +0x28d DisablePageFaultClustering : UChar
         +0x28e ActiveFaultCount : UChar
         +0x28f LockOrderState   : UChar
         +0x290 AlpcMessageId    : Uint4B
         +0x294 AlpcMessage      : Ptr32 Void
         +0x294 AlpcReceiveAttributeSet : Uint4B
         +0x298 AlpcWaitListEntry : _LIST_ENTRY
         +0x2a0 CacheManagerCount : Uint4B
         +0x2a4 IoBoostCount     : Uint4B
         +0x2a8 IrpListLock      : Uint4B
         +0x2ac ReservedForSynchTracking : Ptr32 Void
         +0x2b0 CmCallbackListHead : _SINGLE_LIST_ENTRY
         +0x2b4 KernelStackReference : Uint4B
      +0x21c KeyedWaitValue   : Ptr32 Void
      +0x220 ActiveTimerListLock : Uint4B
      +0x224 ActiveTimerListHead : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x22c Cid              : _CLIENT_ID
         +0x000 UniqueProcess    : Ptr32 Void
         +0x004 UniqueThread     : Ptr32 Void
      +0x234 KeyedWaitSemaphore : _KSEMAPHORE
         +0x000 Header           : _DISPATCHER_HEADER
         +0x010 Limit            : Int4B
      +0x234 AlpcWaitSemaphore : _KSEMAPHORE
         +0x000 Header           : _DISPATCHER_HEADER
         +0x010 Limit            : Int4B
      +0x248 ClientSecurity   : _PS_CLIENT_SECURITY_CONTEXT
         +0x000 ImpersonationData : Uint4B
         +0x000 ImpersonationToken : Ptr32 Void
         +0x000 ImpersonationLevel : Pos 0, 2 Bits
         +0x000 EffectiveOnly    : Pos 2, 1 Bit
      +0x24c IrpList          : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x254 TopLevelIrp      : Uint4B
      +0x258 DeviceToVerify   : Ptr32 _DEVICE_OBJECT
         +0x000 Type             : Int2B
         +0x002 Size             : Uint2B
         +0x004 ReferenceCount   : Int4B
         +0x008 DriverObject     : Ptr32 _DRIVER_OBJECT
         +0x00c NextDevice       : Ptr32 _DEVICE_OBJECT
         +0x010 AttachedDevice   : Ptr32 _DEVICE_OBJECT
         +0x014 CurrentIrp       : Ptr32 _IRP
         +0x018 Timer            : Ptr32 _IO_TIMER
         +0x01c Flags            : Uint4B
         +0x020 Characteristics  : Uint4B
         +0x024 Vpb              : Ptr32 _VPB
         +0x028 DeviceExtension  : Ptr32 Void
         +0x02c DeviceType       : Uint4B
         +0x030 StackSize        : Char
         +0x034 Queue            : <unnamed-tag>
         +0x05c AlignmentRequirement : Uint4B
         +0x060 DeviceQueue      : _KDEVICE_QUEUE
         +0x074 Dpc              : _KDPC
         +0x094 ActiveThreadCount : Uint4B
         +0x098 SecurityDescriptor : Ptr32 Void
         +0x09c DeviceLock       : _KEVENT
         +0x0ac SectorSize       : Uint2B
         +0x0ae Spare1           : Uint2B
         +0x0b0 DeviceObjectExtension : Ptr32 _DEVOBJ_EXTENSION
         +0x0b4 Reserved         : Ptr32 Void
      +0x25c CpuQuotaApc      : Ptr32 _PSP_CPU_QUOTA_APC
      +0x260 Win32StartAddress : Ptr32 Void
      +0x264 LegacyPowerObject : Ptr32 Void
      +0x268 ThreadListEntry  : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x270 RundownProtect   : _EX_RUNDOWN_REF
         +0x000 Count            : Uint4B
         +0x000 Ptr              : Ptr32 Void
      +0x274 ThreadLock       : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 28 Bits
         +0x000 Value            : Uint4B
         +0x000 Ptr              : Ptr32 Void
      +0x278 ReadClusterSize  : Uint4B
      +0x27c MmLockOrdering   : Int4B
      +0x280 CrossThreadFlags : Uint4B
      +0x280 Terminated       : Pos 0, 1 Bit
      +0x280 ThreadInserted   : Pos 1, 1 Bit
      +0x280 HideFromDebugger : Pos 2, 1 Bit
      +0x280 ActiveImpersonationInfo : Pos 3, 1 Bit
      +0x280 Reserved         : Pos 4, 1 Bit
      +0x280 HardErrorsAreDisabled : Pos 5, 1 Bit
      +0x280 BreakOnTermination : Pos 6, 1 Bit
      +0x280 SkipCreationMsg  : Pos 7, 1 Bit
      +0x280 SkipTerminationMsg : Pos 8, 1 Bit
      +0x280 CopyTokenOnOpen  : Pos 9, 1 Bit
      +0x280 ThreadIoPriority : Pos 10, 3 Bits
      +0x280 ThreadPagePriority : Pos 13, 3 Bits
      +0x280 RundownFail      : Pos 16, 1 Bit
      +0x280 NeedsWorkingSetAging : Pos 17, 1 Bit
      +0x284 SameThreadPassiveFlags : Uint4B
      +0x284 ActiveExWorker   : Pos 0, 1 Bit
      +0x284 ExWorkerCanWaitUser : Pos 1, 1 Bit
      +0x284 MemoryMaker      : Pos 2, 1 Bit
      +0x284 ClonedThread     : Pos 3, 1 Bit
      +0x284 KeyedEventInUse  : Pos 4, 1 Bit
      +0x284 RateApcState     : Pos 5, 2 Bits
      +0x284 SelfTerminate    : Pos 7, 1 Bit
      +0x288 SameThreadApcFlags : Uint4B
      +0x288 Spare            : Pos 0, 1 Bit
      +0x288 StartAddressInvalid : Pos 1, 1 Bit
      +0x288 EtwPageFaultCalloutActive : Pos 2, 1 Bit
      +0x288 OwnsProcessWorkingSetExclusive : Pos 3, 1 Bit
      +0x288 OwnsProcessWorkingSetShared : Pos 4, 1 Bit
      +0x288 OwnsSystemCacheWorkingSetExclusive : Pos 5, 1 Bit
      +0x288 OwnsSystemCacheWorkingSetShared : Pos 6, 1 Bit
      +0x288 OwnsSessionWorkingSetExclusive : Pos 7, 1 Bit
      +0x289 OwnsSessionWorkingSetShared : Pos 0, 1 Bit
      +0x289 OwnsProcessAddressSpaceExclusive : Pos 1, 1 Bit
      +0x289 OwnsProcessAddressSpaceShared : Pos 2, 1 Bit
      +0x289 SuppressSymbolLoad : Pos 3, 1 Bit
      +0x289 Prefetching      : Pos 4, 1 Bit
      +0x289 OwnsDynamicMemoryShared : Pos 5, 1 Bit
      +0x289 OwnsChangeControlAreaExclusive : Pos 6, 1 Bit
      +0x289 OwnsChangeControlAreaShared : Pos 7, 1 Bit
      +0x28a OwnsPagedPoolWorkingSetExclusive : Pos 0, 1 Bit
      +0x28a OwnsPagedPoolWorkingSetShared : Pos 1, 1 Bit
      +0x28a OwnsSystemPtesWorkingSetExclusive : Pos 2, 1 Bit
      +0x28a OwnsSystemPtesWorkingSetShared : Pos 3, 1 Bit
      +0x28a TrimTrigger      : Pos 4, 2 Bits
      +0x28a Spare1           : Pos 6, 2 Bits
      +0x28b PriorityRegionActive : UChar
      +0x28c CacheManagerActive : UChar
      +0x28d DisablePageFaultClustering : UChar
      +0x28e ActiveFaultCount : UChar
      +0x28f LockOrderState   : UChar
      +0x290 AlpcMessageId    : Uint4B
      +0x294 AlpcMessage      : Ptr32 Void
      +0x294 AlpcReceiveAttributeSet : Uint4B
      +0x298 AlpcWaitListEntry : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x2a0 CacheManagerCount : Uint4B
      +0x2a4 IoBoostCount     : Uint4B
      +0x2a8 IrpListLock      : Uint4B
      +0x2ac ReservedForSynchTracking : Ptr32 Void
      +0x2b0 CmCallbackListHead : _SINGLE_LIST_ENTRY
         +0x000 Next             : Ptr32 _SINGLE_LIST_ENTRY
      +0x2b4 KernelStackReference : Uint4B
   +0x108 ForkInProgress   : Ptr32 _ETHREAD
      +0x000 Tcb              : _KTHREAD
         +0x000 Header           : _DISPATCHER_HEADER
         +0x010 CycleTime        : Uint8B
         +0x018 HighCycleTime    : Uint4B
         +0x020 QuantumTarget    : Uint8B
         +0x028 InitialStack     : Ptr32 Void
         +0x02c StackLimit       : Ptr32 Void
         +0x030 KernelStack      : Ptr32 Void
         +0x034 ThreadLock       : Uint4B
         +0x038 WaitRegister     : _KWAIT_STATUS_REGISTER
         +0x039 Running          : UChar
         +0x03a Alerted          : [2] UChar
         +0x03c KernelStackResident : Pos 0, 1 Bit
         +0x03c ReadyTransition  : Pos 1, 1 Bit
         +0x03c ProcessReadyQueue : Pos 2, 1 Bit
         +0x03c WaitNext         : Pos 3, 1 Bit
         +0x03c SystemAffinityActive : Pos 4, 1 Bit
         +0x03c Alertable        : Pos 5, 1 Bit
         +0x03c GdiFlushActive   : Pos 6, 1 Bit
         +0x03c UserStackWalkActive : Pos 7, 1 Bit
         +0x03c ApcInterruptRequest : Pos 8, 1 Bit
         +0x03c ForceDeferSchedule : Pos 9, 1 Bit
         +0x03c QuantumEndMigrate : Pos 10, 1 Bit
         +0x03c UmsDirectedSwitchEnable : Pos 11, 1 Bit
         +0x03c TimerActive      : Pos 12, 1 Bit
         +0x03c SystemThread     : Pos 13, 1 Bit
         +0x03c Reserved         : Pos 14, 18 Bits
         +0x03c MiscFlags        : Int4B
         +0x040 ApcState         : _KAPC_STATE
         +0x040 ApcStateFill     : [23] UChar
         +0x057 Priority         : Char
         +0x058 NextProcessor    : Uint4B
         +0x05c DeferredProcessor : Uint4B
         +0x060 ApcQueueLock     : Uint4B
         +0x064 ContextSwitches  : Uint4B
         +0x068 State            : UChar
         +0x069 NpxState         : Char
         +0x06a WaitIrql         : UChar
         +0x06b WaitMode         : Char
         +0x06c WaitStatus       : Int4B
         +0x070 WaitBlockList    : Ptr32 _KWAIT_BLOCK
         +0x074 WaitListEntry    : _LIST_ENTRY
         +0x074 SwapListEntry    : _SINGLE_LIST_ENTRY
         +0x07c Queue            : Ptr32 _KQUEUE
         +0x080 WaitTime         : Uint4B
         +0x084 KernelApcDisable : Int2B
         +0x086 SpecialApcDisable : Int2B
         +0x084 CombinedApcDisable : Uint4B
         +0x088 Teb              : Ptr32 Void
         +0x090 Timer            : _KTIMER
         +0x0b8 AutoAlignment    : Pos 0, 1 Bit
         +0x0b8 DisableBoost     : Pos 1, 1 Bit
         +0x0b8 EtwStackTraceApc1Inserted : Pos 2, 1 Bit
         +0x0b8 EtwStackTraceApc2Inserted : Pos 3, 1 Bit
         +0x0b8 CalloutActive    : Pos 4, 1 Bit
         +0x0b8 ApcQueueable     : Pos 5, 1 Bit
         +0x0b8 EnableStackSwap  : Pos 6, 1 Bit
         +0x0b8 GuiThread        : Pos 7, 1 Bit
         +0x0b8 UmsPerformingSyscall : Pos 8, 1 Bit
         +0x0b8 VdmSafe          : Pos 9, 1 Bit
         +0x0b8 UmsDispatched    : Pos 10, 1 Bit
         +0x0b8 ReservedFlags    : Pos 11, 21 Bits
         +0x0b8 ThreadFlags      : Int4B
         +0x0bc ServiceTable     : Ptr32 Void
         +0x0c0 WaitBlock        : [4] _KWAIT_BLOCK
         +0x120 QueueListEntry   : _LIST_ENTRY
         +0x128 TrapFrame        : Ptr32 _KTRAP_FRAME
         +0x12c FirstArgument    : Ptr32 Void
         +0x130 CallbackStack    : Ptr32 Void
         +0x130 CallbackDepth    : Uint4B
         +0x134 ApcStateIndex    : UChar
         +0x135 BasePriority     : Char
         +0x136 PriorityDecrement : Char
         +0x136 ForegroundBoost  : Pos 0, 4 Bits
         +0x136 UnusualBoost     : Pos 4, 4 Bits
         +0x137 Preempted        : UChar
         +0x138 AdjustReason     : UChar
         +0x139 AdjustIncrement  : Char
         +0x13a PreviousMode     : Char
         +0x13b Saturation       : Char
         +0x13c SystemCallNumber : Uint4B
         +0x140 FreezeCount      : Uint4B
         +0x144 UserAffinity     : _GROUP_AFFINITY
         +0x150 Process          : Ptr32 _KPROCESS
         +0x154 Affinity         : _GROUP_AFFINITY
         +0x160 IdealProcessor   : Uint4B
         +0x164 UserIdealProcessor : Uint4B
         +0x168 ApcStatePointer  : [2] Ptr32 _KAPC_STATE
         +0x170 SavedApcState    : _KAPC_STATE
         +0x170 SavedApcStateFill : [23] UChar
         +0x187 WaitReason       : UChar
         +0x188 SuspendCount     : Char
         +0x189 Spare1           : Char
         +0x18a OtherPlatformFill : UChar
         +0x18c Win32Thread      : Ptr32 Void
         +0x190 StackBase        : Ptr32 Void
         +0x194 SuspendApc       : _KAPC
         +0x194 SuspendApcFill0  : [1] UChar
         +0x195 ResourceIndex    : UChar
         +0x194 SuspendApcFill1  : [3] UChar
         +0x197 QuantumReset     : UChar
         +0x194 SuspendApcFill2  : [4] UChar
         +0x198 KernelTime       : Uint4B
         +0x194 SuspendApcFill3  : [36] UChar
         +0x1b8 WaitPrcb         : Ptr32 _KPRCB
         +0x194 SuspendApcFill4  : [40] UChar
         +0x1bc LegoData         : Ptr32 Void
         +0x194 SuspendApcFill5  : [47] UChar
         +0x1c3 LargeStack       : UChar
         +0x1c4 UserTime         : Uint4B
         +0x1c8 SuspendSemaphore : _KSEMAPHORE
         +0x1c8 SuspendSemaphorefill : [20] UChar
         +0x1dc SListFaultCount  : Uint4B
         +0x1e0 ThreadListEntry  : _LIST_ENTRY
         +0x1e8 MutantListHead   : _LIST_ENTRY
         +0x1f0 SListFaultAddress : Ptr32 Void
         +0x1f4 ThreadCounters   : Ptr32 _KTHREAD_COUNTERS
         +0x1f8 XStateSave       : Ptr32 _XSTATE_SAVE
      +0x200 CreateTime       : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x208 ExitTime         : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x208 KeyedWaitChain   : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x210 ExitStatus       : Int4B
      +0x214 PostBlockList    : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x214 ForwardLinkShadow : Ptr32 Void
      +0x218 StartAddress     : Ptr32 Void
      +0x21c TerminationPort  : Ptr32 _TERMINATION_PORT
         +0x000 Next             : Ptr32 _TERMINATION_PORT
         +0x004 Port             : Ptr32 Void
      +0x21c ReaperLink       : Ptr32 _ETHREAD
         +0x000 Tcb              : _KTHREAD
         +0x200 CreateTime       : _LARGE_INTEGER
         +0x208 ExitTime         : _LARGE_INTEGER
         +0x208 KeyedWaitChain   : _LIST_ENTRY
         +0x210 ExitStatus       : Int4B
         +0x214 PostBlockList    : _LIST_ENTRY
         +0x214 ForwardLinkShadow : Ptr32 Void
         +0x218 StartAddress     : Ptr32 Void
         +0x21c TerminationPort  : Ptr32 _TERMINATION_PORT
         +0x21c ReaperLink       : Ptr32 _ETHREAD
         +0x21c KeyedWaitValue   : Ptr32 Void
         +0x220 ActiveTimerListLock : Uint4B
         +0x224 ActiveTimerListHead : _LIST_ENTRY
         +0x22c Cid              : _CLIENT_ID
         +0x234 KeyedWaitSemaphore : _KSEMAPHORE
         +0x234 AlpcWaitSemaphore : _KSEMAPHORE
         +0x248 ClientSecurity   : _PS_CLIENT_SECURITY_CONTEXT
         +0x24c IrpList          : _LIST_ENTRY
         +0x254 TopLevelIrp      : Uint4B
         +0x258 DeviceToVerify   : Ptr32 _DEVICE_OBJECT
         +0x25c CpuQuotaApc      : Ptr32 _PSP_CPU_QUOTA_APC
         +0x260 Win32StartAddress : Ptr32 Void
         +0x264 LegacyPowerObject : Ptr32 Void
         +0x268 ThreadListEntry  : _LIST_ENTRY
         +0x270 RundownProtect   : _EX_RUNDOWN_REF
         +0x274 ThreadLock       : _EX_PUSH_LOCK
         +0x278 ReadClusterSize  : Uint4B
         +0x27c MmLockOrdering   : Int4B
         +0x280 CrossThreadFlags : Uint4B
         +0x280 Terminated       : Pos 0, 1 Bit
         +0x280 ThreadInserted   : Pos 1, 1 Bit
         +0x280 HideFromDebugger : Pos 2, 1 Bit
         +0x280 ActiveImpersonationInfo : Pos 3, 1 Bit
         +0x280 Reserved         : Pos 4, 1 Bit
         +0x280 HardErrorsAreDisabled : Pos 5, 1 Bit
         +0x280 BreakOnTermination : Pos 6, 1 Bit
         +0x280 SkipCreationMsg  : Pos 7, 1 Bit
         +0x280 SkipTerminationMsg : Pos 8, 1 Bit
         +0x280 CopyTokenOnOpen  : Pos 9, 1 Bit
         +0x280 ThreadIoPriority : Pos 10, 3 Bits
         +0x280 ThreadPagePriority : Pos 13, 3 Bits
         +0x280 RundownFail      : Pos 16, 1 Bit
         +0x280 NeedsWorkingSetAging : Pos 17, 1 Bit
         +0x284 SameThreadPassiveFlags : Uint4B
         +0x284 ActiveExWorker   : Pos 0, 1 Bit
         +0x284 ExWorkerCanWaitUser : Pos 1, 1 Bit
         +0x284 MemoryMaker      : Pos 2, 1 Bit
         +0x284 ClonedThread     : Pos 3, 1 Bit
         +0x284 KeyedEventInUse  : Pos 4, 1 Bit
         +0x284 RateApcState     : Pos 5, 2 Bits
         +0x284 SelfTerminate    : Pos 7, 1 Bit
         +0x288 SameThreadApcFlags : Uint4B
         +0x288 Spare            : Pos 0, 1 Bit
         +0x288 StartAddressInvalid : Pos 1, 1 Bit
         +0x288 EtwPageFaultCalloutActive : Pos 2, 1 Bit
         +0x288 OwnsProcessWorkingSetExclusive : Pos 3, 1 Bit
         +0x288 OwnsProcessWorkingSetShared : Pos 4, 1 Bit
         +0x288 OwnsSystemCacheWorkingSetExclusive : Pos 5, 1 Bit
         +0x288 OwnsSystemCacheWorkingSetShared : Pos 6, 1 Bit
         +0x288 OwnsSessionWorkingSetExclusive : Pos 7, 1 Bit
         +0x289 OwnsSessionWorkingSetShared : Pos 0, 1 Bit
         +0x289 OwnsProcessAddressSpaceExclusive : Pos 1, 1 Bit
         +0x289 OwnsProcessAddressSpaceShared : Pos 2, 1 Bit
         +0x289 SuppressSymbolLoad : Pos 3, 1 Bit
         +0x289 Prefetching      : Pos 4, 1 Bit
         +0x289 OwnsDynamicMemoryShared : Pos 5, 1 Bit
         +0x289 OwnsChangeControlAreaExclusive : Pos 6, 1 Bit
         +0x289 OwnsChangeControlAreaShared : Pos 7, 1 Bit
         +0x28a OwnsPagedPoolWorkingSetExclusive : Pos 0, 1 Bit
         +0x28a OwnsPagedPoolWorkingSetShared : Pos 1, 1 Bit
         +0x28a OwnsSystemPtesWorkingSetExclusive : Pos 2, 1 Bit
         +0x28a OwnsSystemPtesWorkingSetShared : Pos 3, 1 Bit
         +0x28a TrimTrigger      : Pos 4, 2 Bits
         +0x28a Spare1           : Pos 6, 2 Bits
         +0x28b PriorityRegionActive : UChar
         +0x28c CacheManagerActive : UChar
         +0x28d DisablePageFaultClustering : UChar
         +0x28e ActiveFaultCount : UChar
         +0x28f LockOrderState   : UChar
         +0x290 AlpcMessageId    : Uint4B
         +0x294 AlpcMessage      : Ptr32 Void
         +0x294 AlpcReceiveAttributeSet : Uint4B
         +0x298 AlpcWaitListEntry : _LIST_ENTRY
         +0x2a0 CacheManagerCount : Uint4B
         +0x2a4 IoBoostCount     : Uint4B
         +0x2a8 IrpListLock      : Uint4B
         +0x2ac ReservedForSynchTracking : Ptr32 Void
         +0x2b0 CmCallbackListHead : _SINGLE_LIST_ENTRY
         +0x2b4 KernelStackReference : Uint4B
      +0x21c KeyedWaitValue   : Ptr32 Void
      +0x220 ActiveTimerListLock : Uint4B
      +0x224 ActiveTimerListHead : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x22c Cid              : _CLIENT_ID
         +0x000 UniqueProcess    : Ptr32 Void
         +0x004 UniqueThread     : Ptr32 Void
      +0x234 KeyedWaitSemaphore : _KSEMAPHORE
         +0x000 Header           : _DISPATCHER_HEADER
         +0x010 Limit            : Int4B
      +0x234 AlpcWaitSemaphore : _KSEMAPHORE
         +0x000 Header           : _DISPATCHER_HEADER
         +0x010 Limit            : Int4B
      +0x248 ClientSecurity   : _PS_CLIENT_SECURITY_CONTEXT
         +0x000 ImpersonationData : Uint4B
         +0x000 ImpersonationToken : Ptr32 Void
         +0x000 ImpersonationLevel : Pos 0, 2 Bits
         +0x000 EffectiveOnly    : Pos 2, 1 Bit
      +0x24c IrpList          : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x254 TopLevelIrp      : Uint4B
      +0x258 DeviceToVerify   : Ptr32 _DEVICE_OBJECT
         +0x000 Type             : Int2B
         +0x002 Size             : Uint2B
         +0x004 ReferenceCount   : Int4B
         +0x008 DriverObject     : Ptr32 _DRIVER_OBJECT
         +0x00c NextDevice       : Ptr32 _DEVICE_OBJECT
         +0x010 AttachedDevice   : Ptr32 _DEVICE_OBJECT
         +0x014 CurrentIrp       : Ptr32 _IRP
         +0x018 Timer            : Ptr32 _IO_TIMER
         +0x01c Flags            : Uint4B
         +0x020 Characteristics  : Uint4B
         +0x024 Vpb              : Ptr32 _VPB
         +0x028 DeviceExtension  : Ptr32 Void
         +0x02c DeviceType       : Uint4B
         +0x030 StackSize        : Char
         +0x034 Queue            : <unnamed-tag>
         +0x05c AlignmentRequirement : Uint4B
         +0x060 DeviceQueue      : _KDEVICE_QUEUE
         +0x074 Dpc              : _KDPC
         +0x094 ActiveThreadCount : Uint4B
         +0x098 SecurityDescriptor : Ptr32 Void
         +0x09c DeviceLock       : _KEVENT
         +0x0ac SectorSize       : Uint2B
         +0x0ae Spare1           : Uint2B
         +0x0b0 DeviceObjectExtension : Ptr32 _DEVOBJ_EXTENSION
         +0x0b4 Reserved         : Ptr32 Void
      +0x25c CpuQuotaApc      : Ptr32 _PSP_CPU_QUOTA_APC
      +0x260 Win32StartAddress : Ptr32 Void
      +0x264 LegacyPowerObject : Ptr32 Void
      +0x268 ThreadListEntry  : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x270 RundownProtect   : _EX_RUNDOWN_REF
         +0x000 Count            : Uint4B
         +0x000 Ptr              : Ptr32 Void
      +0x274 ThreadLock       : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 28 Bits
         +0x000 Value            : Uint4B
         +0x000 Ptr              : Ptr32 Void
      +0x278 ReadClusterSize  : Uint4B
      +0x27c MmLockOrdering   : Int4B
      +0x280 CrossThreadFlags : Uint4B
      +0x280 Terminated       : Pos 0, 1 Bit
      +0x280 ThreadInserted   : Pos 1, 1 Bit
      +0x280 HideFromDebugger : Pos 2, 1 Bit
      +0x280 ActiveImpersonationInfo : Pos 3, 1 Bit
      +0x280 Reserved         : Pos 4, 1 Bit
      +0x280 HardErrorsAreDisabled : Pos 5, 1 Bit
      +0x280 BreakOnTermination : Pos 6, 1 Bit
      +0x280 SkipCreationMsg  : Pos 7, 1 Bit
      +0x280 SkipTerminationMsg : Pos 8, 1 Bit
      +0x280 CopyTokenOnOpen  : Pos 9, 1 Bit
      +0x280 ThreadIoPriority : Pos 10, 3 Bits
      +0x280 ThreadPagePriority : Pos 13, 3 Bits
      +0x280 RundownFail      : Pos 16, 1 Bit
      +0x280 NeedsWorkingSetAging : Pos 17, 1 Bit
      +0x284 SameThreadPassiveFlags : Uint4B
      +0x284 ActiveExWorker   : Pos 0, 1 Bit
      +0x284 ExWorkerCanWaitUser : Pos 1, 1 Bit
      +0x284 MemoryMaker      : Pos 2, 1 Bit
      +0x284 ClonedThread     : Pos 3, 1 Bit
      +0x284 KeyedEventInUse  : Pos 4, 1 Bit
      +0x284 RateApcState     : Pos 5, 2 Bits
      +0x284 SelfTerminate    : Pos 7, 1 Bit
      +0x288 SameThreadApcFlags : Uint4B
      +0x288 Spare            : Pos 0, 1 Bit
      +0x288 StartAddressInvalid : Pos 1, 1 Bit
      +0x288 EtwPageFaultCalloutActive : Pos 2, 1 Bit
      +0x288 OwnsProcessWorkingSetExclusive : Pos 3, 1 Bit
      +0x288 OwnsProcessWorkingSetShared : Pos 4, 1 Bit
      +0x288 OwnsSystemCacheWorkingSetExclusive : Pos 5, 1 Bit
      +0x288 OwnsSystemCacheWorkingSetShared : Pos 6, 1 Bit
      +0x288 OwnsSessionWorkingSetExclusive : Pos 7, 1 Bit
      +0x289 OwnsSessionWorkingSetShared : Pos 0, 1 Bit
      +0x289 OwnsProcessAddressSpaceExclusive : Pos 1, 1 Bit
      +0x289 OwnsProcessAddressSpaceShared : Pos 2, 1 Bit
      +0x289 SuppressSymbolLoad : Pos 3, 1 Bit
      +0x289 Prefetching      : Pos 4, 1 Bit
      +0x289 OwnsDynamicMemoryShared : Pos 5, 1 Bit
      +0x289 OwnsChangeControlAreaExclusive : Pos 6, 1 Bit
      +0x289 OwnsChangeControlAreaShared : Pos 7, 1 Bit
      +0x28a OwnsPagedPoolWorkingSetExclusive : Pos 0, 1 Bit
      +0x28a OwnsPagedPoolWorkingSetShared : Pos 1, 1 Bit
      +0x28a OwnsSystemPtesWorkingSetExclusive : Pos 2, 1 Bit
      +0x28a OwnsSystemPtesWorkingSetShared : Pos 3, 1 Bit
      +0x28a TrimTrigger      : Pos 4, 2 Bits
      +0x28a Spare1           : Pos 6, 2 Bits
      +0x28b PriorityRegionActive : UChar
      +0x28c CacheManagerActive : UChar
      +0x28d DisablePageFaultClustering : UChar
      +0x28e ActiveFaultCount : UChar
      +0x28f LockOrderState   : UChar
      +0x290 AlpcMessageId    : Uint4B
      +0x294 AlpcMessage      : Ptr32 Void
      +0x294 AlpcReceiveAttributeSet : Uint4B
      +0x298 AlpcWaitListEntry : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x2a0 CacheManagerCount : Uint4B
      +0x2a4 IoBoostCount     : Uint4B
      +0x2a8 IrpListLock      : Uint4B
      +0x2ac ReservedForSynchTracking : Ptr32 Void
      +0x2b0 CmCallbackListHead : _SINGLE_LIST_ENTRY
         +0x000 Next             : Ptr32 _SINGLE_LIST_ENTRY
      +0x2b4 KernelStackReference : Uint4B
   +0x10c HardwareTrigger  : Uint4B
   +0x110 PhysicalVadRoot  : Ptr32 _MM_AVL_TABLE
      +0x000 BalancedRoot     : _MMADDRESS_NODE
         +0x000 u1               : <unnamed-tag>
         +0x004 LeftChild        : Ptr32 _MMADDRESS_NODE
         +0x008 RightChild       : Ptr32 _MMADDRESS_NODE
         +0x00c StartingVpn      : Uint4B
         +0x010 EndingVpn        : Uint4B
      +0x014 DepthOfTree      : Pos 0, 5 Bits
      +0x014 Unused           : Pos 5, 3 Bits
      +0x014 NumberGenericTableElements : Pos 8, 24 Bits
      +0x018 NodeHint         : Ptr32 Void
      +0x01c NodeFreeHint     : Ptr32 Void
   +0x114 CloneRoot        : Ptr32 Void
   +0x118 NumberOfPrivatePages : Uint4B
   +0x11c NumberOfLockedPages : Uint4B
   +0x120 Win32Process     : Ptr32 Void
   +0x124 Job              : Ptr32 _EJOB
      +0x000 Event            : _KEVENT
         +0x000 Header           : _DISPATCHER_HEADER
      +0x010 JobLinks         : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x018 ProcessListHead  : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x020 JobLock          : _ERESOURCE
         +0x000 SystemResourcesList : _LIST_ENTRY
         +0x008 OwnerTable       : Ptr32 _OWNER_ENTRY
         +0x00c ActiveCount      : Int2B
         +0x00e Flag             : Uint2B
         +0x010 SharedWaiters    : Ptr32 _KSEMAPHORE
         +0x014 ExclusiveWaiters : Ptr32 _KEVENT
         +0x018 OwnerEntry       : _OWNER_ENTRY
         +0x020 ActiveEntries    : Uint4B
         +0x024 ContentionCount  : Uint4B
         +0x028 NumberOfSharedWaiters : Uint4B
         +0x02c NumberOfExclusiveWaiters : Uint4B
         +0x030 Address          : Ptr32 Void
         +0x030 CreatorBackTraceIndex : Uint4B
         +0x034 SpinLock         : Uint4B
      +0x058 TotalUserTime    : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x060 TotalKernelTime  : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x068 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x070 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x078 TotalPageFaultCount : Uint4B
      +0x07c TotalProcesses   : Uint4B
      +0x080 ActiveProcesses  : Uint4B
      +0x084 TotalTerminatedProcesses : Uint4B
      +0x088 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x090 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x098 MinimumWorkingSetSize : Uint4B
      +0x09c MaximumWorkingSetSize : Uint4B
      +0x0a0 LimitFlags       : Uint4B
      +0x0a4 ActiveProcessLimit : Uint4B
      +0x0a8 Affinity         : _KAFFINITY_EX
         +0x000 Count            : Uint2B
         +0x002 Size             : Uint2B
         +0x004 Reserved         : Uint4B
         +0x008 Bitmap           : [1] Uint4B
      +0x0b4 PriorityClass    : UChar
      +0x0b8 AccessState      : Ptr32 _JOB_ACCESS_STATE
      +0x0bc UIRestrictionsClass : Uint4B
      +0x0c0 EndOfJobTimeAction : Uint4B
      +0x0c4 CompletionPort   : Ptr32 Void
      +0x0c8 CompletionKey    : Ptr32 Void
      +0x0cc SessionId        : Uint4B
      +0x0d0 SchedulingClass  : Uint4B
      +0x0d8 ReadOperationCount : Uint8B
      +0x0e0 WriteOperationCount : Uint8B
      +0x0e8 OtherOperationCount : Uint8B
      +0x0f0 ReadTransferCount : Uint8B
      +0x0f8 WriteTransferCount : Uint8B
      +0x100 OtherTransferCount : Uint8B
      +0x108 ProcessMemoryLimit : Uint4B
      +0x10c JobMemoryLimit   : Uint4B
      +0x110 PeakProcessMemoryUsed : Uint4B
      +0x114 PeakJobMemoryUsed : Uint4B
      +0x118 CurrentJobMemoryUsed : Uint8B
      +0x120 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 28 Bits
         +0x000 Value            : Uint4B
         +0x000 Ptr              : Ptr32 Void
      +0x124 JobSetLinks      : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x12c MemberLevel      : Uint4B
      +0x130 JobFlags         : Uint4B
   +0x128 SectionObject    : Ptr32 Void
   +0x12c SectionBaseAddress : Ptr32 Void
   +0x130 Cookie           : Uint4B
   +0x134 Spare8           : Uint4B
   +0x138 WorkingSetWatch  : Ptr32 _PAGEFAULT_HISTORY
   +0x13c Win32WindowStation : Ptr32 Void
   +0x140 InheritedFromUniqueProcessId : Ptr32 Void
   +0x144 LdtInformation   : Ptr32 Void
   +0x148 VdmObjects       : Ptr32 Void
   +0x14c ConsoleHostProcess : Uint4B
   +0x150 DeviceMap        : Ptr32 Void
   +0x154 EtwDataSource    : Ptr32 Void
   +0x158 FreeTebHint      : Ptr32 Void
   +0x160 PageDirectoryPte : _HARDWARE_PTE
      +0x000 Valid            : Pos 0, 1 Bit
      +0x000 Write            : Pos 1, 1 Bit
      +0x000 Owner            : Pos 2, 1 Bit
      +0x000 WriteThrough     : Pos 3, 1 Bit
      +0x000 CacheDisable     : Pos 4, 1 Bit
      +0x000 Accessed         : Pos 5, 1 Bit
      +0x000 Dirty            : Pos 6, 1 Bit
      +0x000 LargePage        : Pos 7, 1 Bit
      +0x000 Global           : Pos 8, 1 Bit
      +0x000 CopyOnWrite      : Pos 9, 1 Bit
      +0x000 Prototype        : Pos 10, 1 Bit
      +0x000 reserved0        : Pos 11, 1 Bit
      +0x000 PageFrameNumber  : Pos 12, 26 Bits
      +0x000 reserved1        : Pos 38, 26 Bits
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Uint4B
   +0x160 Filler           : Uint8B
   +0x168 Session          : Ptr32 Void
   +0x16c ImageFileName    : [15] UChar
   +0x17b PriorityClass    : UChar
   +0x17c JobLinks         : _LIST_ENTRY
      +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x004 Blink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
   +0x184 LockedPagesList  : Ptr32 Void
   +0x188 ThreadListHead   : _LIST_ENTRY
      +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x004 Blink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
   +0x190 SecurityPort     : Ptr32 Void
   +0x194 PaeTop           : Ptr32 Void
   +0x198 ActiveThreads    : Uint4B
   +0x19c ImagePathHash    : Uint4B
   +0x1a0 DefaultHardErrorProcessing : Uint4B
   +0x1a4 LastThreadExitStatus : Int4B
   +0x1a8 Peb              : Ptr32 _PEB
      +0x000 InheritedAddressSpace : UChar
      +0x001 ReadImageFileExecOptions : UChar
      +0x002 BeingDebugged    : UChar
      +0x003 BitField         : UChar
      +0x003 ImageUsesLargePages : Pos 0, 1 Bit
      +0x003 IsProtectedProcess : Pos 1, 1 Bit
      +0x003 IsLegacyProcess  : Pos 2, 1 Bit
      +0x003 IsImageDynamicallyRelocated : Pos 3, 1 Bit
      +0x003 SkipPatchingUser32Forwarders : Pos 4, 1 Bit
      +0x003 SpareBits        : Pos 5, 3 Bits
      +0x004 Mutant           : Ptr32 Void
      +0x008 ImageBaseAddress : Ptr32 Void
      +0x00c Ldr              : Ptr32 _PEB_LDR_DATA
         +0x000 Length           : Uint4B
         +0x004 Initialized      : UChar
         +0x008 SsHandle         : Ptr32 Void
         +0x00c InLoadOrderModuleList : _LIST_ENTRY
         +0x014 InMemoryOrderModuleList : _LIST_ENTRY
         +0x01c InInitializationOrderModuleList : _LIST_ENTRY
         +0x024 EntryInProgress  : Ptr32 Void
         +0x028 ShutdownInProgress : UChar
         +0x02c ShutdownThreadId : Ptr32 Void
      +0x010 ProcessParameters : Ptr32 _RTL_USER_PROCESS_PARAMETERS
         +0x000 MaximumLength    : Uint4B
         +0x004 Length           : Uint4B
         +0x008 Flags            : Uint4B
         +0x00c DebugFlags       : Uint4B
         +0x010 ConsoleHandle    : Ptr32 Void
         +0x014 ConsoleFlags     : Uint4B
         +0x018 StandardInput    : Ptr32 Void
         +0x01c StandardOutput   : Ptr32 Void
         +0x020 StandardError    : Ptr32 Void
         +0x024 CurrentDirectory : _CURDIR
         +0x030 DllPath          : _UNICODE_STRING
         +0x038 ImagePathName    : _UNICODE_STRING
         +0x040 CommandLine      : _UNICODE_STRING
         +0x048 Environment      : Ptr32 Void
         +0x04c StartingX        : Uint4B
         +0x050 StartingY        : Uint4B
         +0x054 CountX           : Uint4B
         +0x058 CountY           : Uint4B
         +0x05c CountCharsX      : Uint4B
         +0x060 CountCharsY      : Uint4B
         +0x064 FillAttribute    : Uint4B
         +0x068 WindowFlags      : Uint4B
         +0x06c ShowWindowFlags  : Uint4B
         +0x070 WindowTitle      : _UNICODE_STRING
         +0x078 DesktopInfo      : _UNICODE_STRING
         +0x080 ShellInfo        : _UNICODE_STRING
         +0x088 RuntimeData      : _UNICODE_STRING
         +0x090 CurrentDirectores : [32] _RTL_DRIVE_LETTER_CURDIR
         +0x290 EnvironmentSize  : Uint4B
         +0x294 EnvironmentVersion : Uint4B
      +0x014 SubSystemData    : Ptr32 Void
      +0x018 ProcessHeap      : Ptr32 Void
      +0x01c FastPebLock      : Ptr32 _RTL_CRITICAL_SECTION
         +0x000 DebugInfo        : Ptr32 _RTL_CRITICAL_SECTION_DEBUG
         +0x004 LockCount        : Int4B
         +0x008 RecursionCount   : Int4B
         +0x00c OwningThread     : Ptr32 Void
         +0x010 LockSemaphore    : Ptr32 Void
         +0x014 SpinCount        : Uint4B
      +0x020 AtlThunkSListPtr : Ptr32 Void
      +0x024 IFEOKey          : Ptr32 Void
      +0x028 CrossProcessFlags : Uint4B
      +0x028 ProcessInJob     : Pos 0, 1 Bit
      +0x028 ProcessInitializing : Pos 1, 1 Bit
      +0x028 ProcessUsingVEH  : Pos 2, 1 Bit
      +0x028 ProcessUsingVCH  : Pos 3, 1 Bit
      +0x028 ProcessUsingFTH  : Pos 4, 1 Bit
      +0x028 ReservedBits0    : Pos 5, 27 Bits
      +0x02c KernelCallbackTable : Ptr32 Void
      +0x02c UserSharedInfoPtr : Ptr32 Void
      +0x030 SystemReserved   : [1] Uint4B
      +0x034 AtlThunkSListPtr32 : Uint4B
      +0x038 ApiSetMap        : Ptr32 Void
      +0x03c TlsExpansionCounter : Uint4B
      +0x040 TlsBitmap        : Ptr32 Void
      +0x044 TlsBitmapBits    : [2] Uint4B
      +0x04c ReadOnlySharedMemoryBase : Ptr32 Void
      +0x050 HotpatchInformation : Ptr32 Void
      +0x054 ReadOnlyStaticServerData : Ptr32 Ptr32 Void
      +0x058 AnsiCodePageData : Ptr32 Void
      +0x05c OemCodePageData  : Ptr32 Void
      +0x060 UnicodeCaseTableData : Ptr32 Void
      +0x064 NumberOfProcessors : Uint4B
      +0x068 NtGlobalFlag     : Uint4B
      +0x070 CriticalSectionTimeout : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x078 HeapSegmentReserve : Uint4B
      +0x07c HeapSegmentCommit : Uint4B
      +0x080 HeapDeCommitTotalFreeThreshold : Uint4B
      +0x084 HeapDeCommitFreeBlockThreshold : Uint4B
      +0x088 NumberOfHeaps    : Uint4B
      +0x08c MaximumNumberOfHeaps : Uint4B
      +0x090 ProcessHeaps     : Ptr32 Ptr32 Void
      +0x094 GdiSharedHandleTable : Ptr32 Void
      +0x098 ProcessStarterHelper : Ptr32 Void
      +0x09c GdiDCAttributeList : Uint4B
      +0x0a0 LoaderLock       : Ptr32 _RTL_CRITICAL_SECTION
         +0x000 DebugInfo        : Ptr32 _RTL_CRITICAL_SECTION_DEBUG
         +0x004 LockCount        : Int4B
         +0x008 RecursionCount   : Int4B
         +0x00c OwningThread     : Ptr32 Void
         +0x010 LockSemaphore    : Ptr32 Void
         +0x014 SpinCount        : Uint4B
      +0x0a4 OSMajorVersion   : Uint4B
      +0x0a8 OSMinorVersion   : Uint4B
      +0x0ac OSBuildNumber    : Uint2B
      +0x0ae OSCSDVersion     : Uint2B
      +0x0b0 OSPlatformId     : Uint4B
      +0x0b4 ImageSubsystem   : Uint4B
      +0x0b8 ImageSubsystemMajorVersion : Uint4B
      +0x0bc ImageSubsystemMinorVersion : Uint4B
      +0x0c0 ActiveProcessAffinityMask : Uint4B
      +0x0c4 GdiHandleBuffer  : [34] Uint4B
      +0x14c PostProcessInitRoutine : Ptr32        void 
      +0x150 TlsExpansionBitmap : Ptr32 Void
      +0x154 TlsExpansionBitmapBits : [32] Uint4B
      +0x1d4 SessionId        : Uint4B
      +0x1d8 AppCompatFlags   : _ULARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Uint4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Uint8B
      +0x1e0 AppCompatFlagsUser : _ULARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Uint4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Uint8B
      +0x1e8 pShimData        : Ptr32 Void
      +0x1ec AppCompatInfo    : Ptr32 Void
      +0x1f0 CSDVersion       : _UNICODE_STRING
         +0x000 Length           : Uint2B
         +0x002 MaximumLength    : Uint2B
         +0x004 Buffer           : Ptr32 Uint2B
      +0x1f8 ActivationContextData : Ptr32 _ACTIVATION_CONTEXT_DATA
      +0x1fc ProcessAssemblyStorageMap : Ptr32 _ASSEMBLY_STORAGE_MAP
      +0x200 SystemDefaultActivationContextData : Ptr32 _ACTIVATION_CONTEXT_DATA
      +0x204 SystemAssemblyStorageMap : Ptr32 _ASSEMBLY_STORAGE_MAP
      +0x208 MinimumStackCommit : Uint4B
      +0x20c FlsCallback      : Ptr32 _FLS_CALLBACK_INFO
      +0x210 FlsListHead      : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x218 FlsBitmap        : Ptr32 Void
      +0x21c FlsBitmapBits    : [4] Uint4B
      +0x22c FlsHighIndex     : Uint4B
      +0x230 WerRegistrationData : Ptr32 Void
      +0x234 WerShipAssertPtr : Ptr32 Void
      +0x238 pContextData     : Ptr32 Void
      +0x23c pImageHeaderHash : Ptr32 Void
      +0x240 TracingFlags     : Uint4B
      +0x240 HeapTracingEnabled : Pos 0, 1 Bit
      +0x240 CritSecTracingEnabled : Pos 1, 1 Bit
      +0x240 SpareTracingBits : Pos 2, 30 Bits
   +0x1ac PrefetchTrace    : _EX_FAST_REF
      +0x000 Object           : Ptr32 Void
      +0x000 RefCnt           : Pos 0, 3 Bits
      +0x000 Value            : Uint4B
   +0x1b0 ReadOperationCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x1b8 WriteOperationCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x1c0 OtherOperationCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x1c8 ReadTransferCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x1d0 WriteTransferCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x1d8 OtherTransferCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x1e0 CommitChargeLimit : Uint4B
   +0x1e4 CommitChargePeak : Uint4B
   +0x1e8 AweInfo          : Ptr32 Void
   +0x1ec SeAuditProcessCreationInfo : _SE_AUDIT_PROCESS_CREATION_INFO
      +0x000 ImageFileName    : Ptr32 _OBJECT_NAME_INFORMATION
         +0x000 Name             : _UNICODE_STRING
   +0x1f0 Vm               : _MMSUPPORT
      +0x000 WorkingSetMutex  : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 28 Bits
         +0x000 Value            : Uint4B
         +0x000 Ptr              : Ptr32 Void
      +0x004 ExitGate         : Ptr32 _KGATE
         +0x000 Header           : _DISPATCHER_HEADER
      +0x008 AccessLog        : Ptr32 Void
      +0x00c WorkingSetExpansionLinks : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x014 AgeDistribution  : [7] Uint4B
      +0x030 MinimumWorkingSetSize : Uint4B
      +0x034 WorkingSetSize   : Uint4B
      +0x038 WorkingSetPrivateSize : Uint4B
      +0x03c MaximumWorkingSetSize : Uint4B
      +0x040 ChargedWslePages : Uint4B
      +0x044 ActualWslePages  : Uint4B
      +0x048 WorkingSetSizeOverhead : Uint4B
      +0x04c PeakWorkingSetSize : Uint4B
      +0x050 HardFaultCount   : Uint4B
      +0x054 VmWorkingSetList : Ptr32 _MMWSL
         +0x000 FirstFree        : Uint4B
         +0x004 FirstDynamic     : Uint4B
         +0x008 LastEntry        : Uint4B
         +0x00c NextSlot         : Uint4B
         +0x010 Wsle             : Ptr32 _MMWSLE
         +0x014 LowestPagableAddress : Ptr32 Void
         +0x018 LastInitializedWsle : Uint4B
         +0x01c NextAgingSlot    : Uint4B
         +0x020 NumberOfCommittedPageTables : Uint4B
         +0x024 VadBitMapHint    : Uint4B
         +0x028 NonDirectCount   : Uint4B
         +0x02c LastVadBit       : Uint4B
         +0x030 MaximumLastVadBit : Uint4B
         +0x034 LastAllocationSizeHint : Uint4B
         +0x038 LastAllocationSize : Uint4B
         +0x03c NonDirectHash    : Ptr32 _MMWSLE_NONDIRECT_HASH
         +0x040 HashTableStart   : Ptr32 _MMWSLE_HASH
         +0x044 HighestPermittedHashAddress : Ptr32 _MMWSLE_HASH
         +0x048 UsedPageTableEntries : [1536] Uint2B
         +0xc48 CommittedPageTables : [48] Uint4B
      +0x058 NextPageColor    : Uint2B
      +0x05a LastTrimStamp    : Uint2B
      +0x05c PageFaultCount   : Uint4B
      +0x060 RepurposeCount   : Uint4B
      +0x064 ShadowMapping    : Ptr32 Void
      +0x068 Flags            : _MMSUPPORT_FLAGS
         +0x000 WorkingSetType   : Pos 0, 3 Bits
         +0x000 ModwriterAttached : Pos 3, 1 Bit
         +0x000 TrimHard         : Pos 4, 1 Bit
         +0x000 MaximumWorkingSetHard : Pos 5, 1 Bit
         +0x000 ForceTrim        : Pos 6, 1 Bit
         +0x000 MinimumWorkingSetHard : Pos 7, 1 Bit
         +0x001 SessionMaster    : Pos 0, 1 Bit
         +0x001 TrimmerState     : Pos 1, 2 Bits
         +0x001 Reserved         : Pos 3, 1 Bit
         +0x001 PageStealers     : Pos 4, 4 Bits
         +0x002 MemoryPriority   : Pos 0, 8 Bits
         +0x003 WsleDeleted      : Pos 0, 1 Bit
         +0x003 VmExiting        : Pos 1, 1 Bit
         +0x003 ExpansionFailed  : Pos 2, 1 Bit
         +0x003 Available        : Pos 3, 5 Bits
   +0x25c MmProcessLinks   : _LIST_ENTRY
      +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x004 Blink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
   +0x264 HighestUserAddress : Ptr32 Void
   +0x268 ModifiedPageCount : Uint4B
   +0x26c Flags2           : Uint4B
   +0x26c JobNotReallyActive : Pos 0, 1 Bit
   +0x26c AccountingFolded : Pos 1, 1 Bit
   +0x26c NewProcessReported : Pos 2, 1 Bit
   +0x26c ExitProcessReported : Pos 3, 1 Bit
   +0x26c ReportCommitChanges : Pos 4, 1 Bit
   +0x26c LastReportMemory : Pos 5, 1 Bit
   +0x26c ReportPhysicalPageChanges : Pos 6, 1 Bit
   +0x26c HandleTableRundown : Pos 7, 1 Bit
   +0x26c NeedsHandleRundown : Pos 8, 1 Bit
   +0x26c RefTraceEnabled  : Pos 9, 1 Bit
   +0x26c NumaAware        : Pos 10, 1 Bit
   +0x26c ProtectedProcess : Pos 11, 1 Bit
   +0x26c DefaultPagePriority : Pos 12, 3 Bits
   +0x26c PrimaryTokenFrozen : Pos 15, 1 Bit
   +0x26c ProcessVerifierTarget : Pos 16, 1 Bit
   +0x26c StackRandomizationDisabled : Pos 17, 1 Bit
   +0x26c AffinityPermanent : Pos 18, 1 Bit
   +0x26c AffinityUpdateEnable : Pos 19, 1 Bit
   +0x26c PropagateNode    : Pos 20, 1 Bit
   +0x26c ExplicitAffinity : Pos 21, 1 Bit
   +0x26c Spare1           : Pos 22, 1 Bit
   +0x26c ForceRelocateImages : Pos 23, 1 Bit
   +0x26c DisallowStrippedImages : Pos 24, 1 Bit
   +0x26c LowVaAccessible  : Pos 25, 1 Bit
   +0x26c RestrictIndirectBranchPrediction : Pos 26, 1 Bit
   +0x26c AddressPolicyFrozen : Pos 27, 1 Bit
   +0x270 Flags            : Uint4B
   +0x270 CreateReported   : Pos 0, 1 Bit
   +0x270 NoDebugInherit   : Pos 1, 1 Bit
   +0x270 ProcessExiting   : Pos 2, 1 Bit
   +0x270 ProcessDelete    : Pos 3, 1 Bit
   +0x270 Wow64SplitPages  : Pos 4, 1 Bit
   +0x270 VmDeleted        : Pos 5, 1 Bit
   +0x270 OutswapEnabled   : Pos 6, 1 Bit
   +0x270 Outswapped       : Pos 7, 1 Bit
   +0x270 ForkFailed       : Pos 8, 1 Bit
   +0x270 Wow64VaSpace4Gb  : Pos 9, 1 Bit
   +0x270 AddressSpaceInitialized : Pos 10, 2 Bits
   +0x270 SetTimerResolution : Pos 12, 1 Bit
   +0x270 BreakOnTermination : Pos 13, 1 Bit
   +0x270 DeprioritizeViews : Pos 14, 1 Bit
   +0x270 WriteWatch       : Pos 15, 1 Bit
   +0x270 ProcessInSession : Pos 16, 1 Bit
   +0x270 OverrideAddressSpace : Pos 17, 1 Bit
   +0x270 HasAddressSpace  : Pos 18, 1 Bit
   +0x270 LaunchPrefetched : Pos 19, 1 Bit
   +0x270 InjectInpageErrors : Pos 20, 1 Bit
   +0x270 VmTopDown        : Pos 21, 1 Bit
   +0x270 ImageNotifyDone  : Pos 22, 1 Bit
   +0x270 PdeUpdateNeeded  : Pos 23, 1 Bit
   +0x270 VdmAllowed       : Pos 24, 1 Bit
   +0x270 CrossSessionCreate : Pos 25, 1 Bit
   +0x270 ProcessInserted  : Pos 26, 1 Bit
   +0x270 DefaultIoPriority : Pos 27, 3 Bits
   +0x270 ProcessSelfDelete : Pos 30, 1 Bit
   +0x270 SetTimerResolutionLink : Pos 31, 1 Bit
   +0x274 ExitStatus       : Int4B
   +0x278 VadRoot          : _MM_AVL_TABLE
      +0x000 BalancedRoot     : _MMADDRESS_NODE
         +0x000 u1               : <unnamed-tag>
         +0x004 LeftChild        : Ptr32 _MMADDRESS_NODE
         +0x008 RightChild       : Ptr32 _MMADDRESS_NODE
         +0x00c StartingVpn      : Uint4B
         +0x010 EndingVpn        : Uint4B
      +0x014 DepthOfTree      : Pos 0, 5 Bits
      +0x014 Unused           : Pos 5, 3 Bits
      +0x014 NumberGenericTableElements : Pos 8, 24 Bits
      +0x018 NodeHint         : Ptr32 Void
      +0x01c NodeFreeHint     : Ptr32 Void
   +0x298 AlpcContext      : _ALPC_PROCESS_CONTEXT
      +0x000 Lock             : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 28 Bits
         +0x000 Value            : Uint4B
         +0x000 Ptr              : Ptr32 Void
      +0x004 ViewListHead     : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x00c PagedPoolQuotaCache : Uint4B
   +0x2a8 TimerResolutionLink : _LIST_ENTRY
      +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x004 Blink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
   +0x2b0 RequestedTimerResolution : Uint4B
   +0x2b4 ActiveThreadsHighWatermark : Uint4B
   +0x2b8 SmallestTimerResolution : Uint4B
   +0x2bc TimerResolutionStackRecord : Ptr32 _PO_DIAG_STACK_RECORD
      +0x000 StackDepth       : Uint4B
      +0x004 Stack            : [1] Ptr32 Void
   +0x2c0 SequenceNumber   : Uint8B
   +0x2c8 CreateInterruptTime : Uint8B
   +0x2d0 CreateUnbiasedInterruptTime : Uint8B
   +0x2d8 SecurityDomain   : Uint8B
```

## References

# https://en.wikipedia.org/wiki/Process_Environment_Block
# https://msdn.microsoft.com/en-us/library/windows/desktop/aa813706(v=vs.85).aspx
# https://www.securitysift.com/windows-exploit-development-part-7-unicode-buffer-overflows/#leave-comment
