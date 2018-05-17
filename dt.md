
## dt (Display Type)

The dt command displays information about a local variable, global variable or data type. This can display information about simple data types, as well as structures and unions.

```
0:001> dt NT!_PEB 7ffd8000 -r
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
   +0x008 ImageBaseAddress : 0x001e0000 Void
   +0x00c Ldr              : 0x77758880 _PEB_LDR_DATA
      +0x000 Length           : 0x30
      +0x004 Initialized      : 0x1 ''
      +0x008 SsHandle         : (null) 
      +0x00c InLoadOrderModuleList : _LIST_ENTRY [ 0x471c98 - 0x47ee28 ]
         +0x000 Flink            : 0x00471c98 _LIST_ENTRY [ 0x471d18 - 0x7775888c ]
         +0x004 Blink            : 0x0047ee28 _LIST_ENTRY [ 0x7775888c - 0x47eda8 ]
      +0x014 InMemoryOrderModuleList : _LIST_ENTRY [ 0x471ca0 - 0x47ee30 ]
         +0x000 Flink            : 0x00471ca0 _LIST_ENTRY [ 0x471d20 - 0x77758894 ]
         +0x004 Blink            : 0x0047ee30 _LIST_ENTRY [ 0x77758894 - 0x47edb0 ]
      +0x01c InInitializationOrderModuleList : _LIST_ENTRY [ 0x471d28 - 0x47ee38 ]
         +0x000 Flink            : 0x00471d28 _LIST_ENTRY [ 0x472108 - 0x7775889c ]
         +0x004 Blink            : 0x0047ee38 _LIST_ENTRY [ 0x7775889c - 0x47edb8 ]
      +0x024 EntryInProgress  : (null) 
      +0x028 ShutdownInProgress : 0 ''
      +0x02c ShutdownThreadId : (null) 
   +0x010 ProcessParameters : 0x004712e8 _RTL_USER_PROCESS_PARAMETERS
      +0x000 MaximumLength    : 0x926
      +0x004 Length           : 0x926
      +0x008 Flags            : 0x6001
      +0x00c DebugFlags       : 0
      +0x010 ConsoleHandle    : (null) 
      +0x014 ConsoleFlags     : 0
      +0x018 StandardInput    : (null) 
      +0x01c StandardOutput   : (null) 
      +0x020 StandardError    : (null) 
      +0x024 CurrentDirectory : _CURDIR
         +0x000 DosPath          : _UNICODE_STRING "C:\Users\debug\"
         +0x008 Handle           : 0x00000008 Void
      +0x030 DllPath          : _UNICODE_STRING "C:\Windows\system32;;C:\Windows\system32;C:\Windows\system;C:\Windows;.;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;c:\Program Files\Microsoft SQL Server\100\Tools\Binn\;c:\Program Files\Microsoft SQL Server\100\DTS\Binn\;C:\Users\debug\AppData\Local\Programs\Python\Python36-32\Scripts\;C:\Users\debug\AppData\Local\Programs\Python\Python36-32\"
         +0x000 Length           : 0x322
         +0x002 MaximumLength    : 0x324
         +0x004 Buffer           : 0x00471788  "C:\Windows\system32;;C:\Windows\system32;C:\Windows\system;C:\Windows;.;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;c:\Program Files\Microsoft SQL Server\100\Tools\Binn\;c:\Program Files\Microsoft SQL Server\100\DTS\Binn\;C:\Users\debug\AppData\Local\Programs\Python\Python36-32\Scripts\;C:\Users\debug\AppData\Local\Programs\Python\Python36-32\"
      +0x038 ImagePathName    : _UNICODE_STRING "C:\Windows\system32\notepad.exe"
         +0x000 Length           : 0x3e
         +0x002 MaximumLength    : 0x40
         +0x004 Buffer           : 0x00471aac  "C:\Windows\system32\notepad.exe"
      +0x040 CommandLine      : _UNICODE_STRING ""C:\Windows\system32\notepad.exe" "
         +0x000 Length           : 0x44
         +0x002 MaximumLength    : 0x46
         +0x004 Buffer           : 0x00471aec  ""C:\Windows\system32\notepad.exe" "
      +0x048 Environment      : 0x004707f0 Void
      +0x04c StartingX        : 0
      +0x050 StartingY        : 0
      +0x054 CountX           : 0
      +0x058 CountY           : 0
      +0x05c CountCharsX      : 0
      +0x060 CountCharsY      : 0
      +0x064 FillAttribute    : 0
      +0x068 WindowFlags      : 0x801
      +0x06c ShowWindowFlags  : 1
      +0x070 WindowTitle      : _UNICODE_STRING "C:\Users\debug\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Accessories\Notepad.lnk"
         +0x000 Length           : 0xb8
         +0x002 MaximumLength    : 0xba
         +0x004 Buffer           : 0x00471b32  "C:\Users\debug\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Accessories\Notepad.lnk"
      +0x078 DesktopInfo      : _UNICODE_STRING "Winsta0\Default"
         +0x000 Length           : 0x1e
         +0x002 MaximumLength    : 0x20
         +0x004 Buffer           : 0x00471bec  "Winsta0\Default"
      +0x080 ShellInfo        : _UNICODE_STRING ""
         +0x000 Length           : 0
         +0x002 MaximumLength    : 2
         +0x004 Buffer           : 0x00471c0c  ""
      +0x088 RuntimeData      : _UNICODE_STRING ""
         +0x000 Length           : 0
         +0x002 MaximumLength    : 0
         +0x004 Buffer           : (null) 
      +0x090 CurrentDirectores : [32] _RTL_DRIVE_LETTER_CURDIR
         +0x000 Flags            : 0
         +0x002 Length           : 0
         +0x004 TimeStamp        : 0
         +0x008 DosPath          : _STRING ""
      +0x290 EnvironmentSize  : 0xaec
      +0x294 EnvironmentVersion : 1
   +0x014 SubSystemData    : (null) 
   +0x018 ProcessHeap      : 0x00470000 Void
   +0x01c FastPebLock      : 0x77758380 _RTL_CRITICAL_SECTION
      +0x000 DebugInfo        : 0x7775cb00 _RTL_CRITICAL_SECTION_DEBUG
         +0x000 Type             : 0
         +0x002 CreatorBackTraceIndex : 0
         +0x004 CriticalSection  : 0x77758380 _RTL_CRITICAL_SECTION
         +0x008 ProcessLocksList : _LIST_ENTRY [ 0x7775cb28 - 0x77758548 ]
         +0x010 EntryCount       : 0
         +0x014 ContentionCount  : 0
         +0x018 Flags            : 0
         +0x01c CreatorBackTraceIndexHigh : 0
         +0x01e SpareUSHORT      : 0
      +0x004 LockCount        : 0n-1
      +0x008 RecursionCount   : 0n0
      +0x00c OwningThread     : (null) 
      +0x010 LockSemaphore    : (null) 
      +0x014 SpinCount        : 0
   +0x020 AtlThunkSListPtr : (null) 
   +0x024 IFEOKey          : (null) 
   +0x028 CrossProcessFlags : 0
   +0x028 ProcessInJob     : 0y0
   +0x028 ProcessInitializing : 0y0
   +0x028 ProcessUsingVEH  : 0y0
   +0x028 ProcessUsingVCH  : 0y0
   +0x028 ProcessUsingFTH  : 0y0
   +0x028 ReservedBits0    : 0y000000000000000000000000000 (0)
   +0x02c KernelCallbackTable : 0x772dd538 Void
   +0x02c UserSharedInfoPtr : 0x772dd538 Void
   +0x030 SystemReserved   : [1] 0
   +0x034 AtlThunkSListPtr32 : 0
   +0x038 ApiSetMap        : 0x778e0000 Void
   +0x03c TlsExpansionCounter : 0
   +0x040 TlsBitmap        : 0x77758260 Void
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
      +0x000 LowPart          : 0x79b8000
      +0x004 HighPart         : 0n-6035
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : 0x79b8000
         +0x004 HighPart         : 0n-6035
      +0x000 QuadPart         : 0n-25920000000000
   +0x078 HeapSegmentReserve : 0x100000
   +0x07c HeapSegmentCommit : 0x2000
   +0x080 HeapDeCommitTotalFreeThreshold : 0x10000
   +0x084 HeapDeCommitFreeBlockThreshold : 0x1000
   +0x088 NumberOfHeaps    : 6
   +0x08c MaximumNumberOfHeaps : 0x10
   +0x090 ProcessHeaps     : 0x77758500  -> 0x00470000 Void
   +0x094 GdiSharedHandleTable : 0x002c0000 Void
   +0x098 ProcessStarterHelper : (null) 
   +0x09c GdiDCAttributeList : 0x14
   +0x0a0 LoaderLock       : 0x77758340 _RTL_CRITICAL_SECTION
      +0x000 DebugInfo        : 0x77758540 _RTL_CRITICAL_SECTION_DEBUG
         +0x000 Type             : 0
         +0x002 CreatorBackTraceIndex : 0
         +0x004 CriticalSection  : 0x77758340 _RTL_CRITICAL_SECTION
         +0x008 ProcessLocksList : _LIST_ENTRY [ 0x7775cb08 - 0x77758220 ]
         +0x010 EntryCount       : 0
         +0x014 ContentionCount  : 0
         +0x018 Flags            : 0
         +0x01c CreatorBackTraceIndexHigh : 0
         +0x01e SpareUSHORT      : 0
      +0x004 LockCount        : 0n-1
      +0x008 RecursionCount   : 0n0
      +0x00c OwningThread     : (null) 
      +0x010 LockSemaphore    : (null) 
      +0x014 SpinCount        : 0
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
   +0x150 TlsExpansionBitmap : 0x77758268 Void
   +0x154 TlsExpansionBitmapBits : [32] 1
   +0x1d4 SessionId        : 1
   +0x1d8 AppCompatFlags   : _ULARGE_INTEGER 0x0
      +0x000 LowPart          : 0
      +0x004 HighPart         : 0
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : 0
         +0x004 HighPart         : 0
      +0x000 QuadPart         : 0
   +0x1e0 AppCompatFlagsUser : _ULARGE_INTEGER 0x0
      +0x000 LowPart          : 0
      +0x004 HighPart         : 0
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : 0
         +0x004 HighPart         : 0
      +0x000 QuadPart         : 0
   +0x1e8 pShimData        : (null) 
   +0x1ec AppCompatInfo    : (null) 
   +0x1f0 CSDVersion       : _UNICODE_STRING "Service Pack 1"
      +0x000 Length           : 0x1c
      +0x002 MaximumLength    : 0x1e
      +0x004 Buffer           : 0x7f6f05d2  "Service Pack 1"
   +0x1f8 ActivationContextData : 0x00040000 _ACTIVATION_CONTEXT_DATA
   +0x1fc ProcessAssemblyStorageMap : 0x00472c28 _ASSEMBLY_STORAGE_MAP
   +0x200 SystemDefaultActivationContextData : 0x00030000 _ACTIVATION_CONTEXT_DATA
   +0x204 SystemAssemblyStorageMap : (null) 
   +0x208 MinimumStackCommit : 0
   +0x20c FlsCallback      : 0x004811f8 _FLS_CALLBACK_INFO
   +0x210 FlsListHead      : _LIST_ENTRY [ 0x480ee0 - 0x480ee0 ]
      +0x000 Flink            : 0x00480ee0 _LIST_ENTRY [ 0x7ffd8210 - 0x7ffd8210 ]
         +0x000 Flink            : 0x7ffd8210 _LIST_ENTRY [ 0x480ee0 - 0x480ee0 ]
         +0x004 Blink            : 0x7ffd8210 _LIST_ENTRY [ 0x480ee0 - 0x480ee0 ]
      +0x004 Blink            : 0x00480ee0 _LIST_ENTRY [ 0x7ffd8210 - 0x7ffd8210 ]
         +0x000 Flink            : 0x7ffd8210 _LIST_ENTRY [ 0x480ee0 - 0x480ee0 ]
         +0x004 Blink            : 0x7ffd8210 _LIST_ENTRY [ 0x480ee0 - 0x480ee0 ]
   +0x218 FlsBitmap        : 0x77758270 Void
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

## References

- https://docs.microsoft.com/en-us/windows-hardware/drivers/debugger/dt--display-type-
