```
kd> dt nt!_EPROCESS -r
   +0x000 Pcb              : _KPROCESS
      +0x000 Header           : _DISPATCHER_HEADER
         +0x000 Type             : UChar
         +0x001 Absolute         : UChar
         +0x002 Size             : UChar
         +0x003 Inserted         : UChar
         +0x004 SignalState      : Int4B
         +0x008 WaitListHead     : _LIST_ENTRY
      +0x010 ProfileListHead  : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x018 DirectoryTableBase : [2] Uint4B
      +0x020 LdtDescriptor    : _KGDTENTRY
         +0x000 LimitLow         : Uint2B
         +0x002 BaseLow          : Uint2B
         +0x004 HighWord         : __unnamed
      +0x028 Int21Descriptor  : _KIDTENTRY
         +0x000 Offset           : Uint2B
         +0x002 Selector         : Uint2B
         +0x004 Access           : Uint2B
         +0x006 ExtendedOffset   : Uint2B
      +0x030 IopmOffset       : Uint2B
      +0x032 Iopl             : UChar
      +0x033 Unused           : UChar
      +0x034 ActiveProcessors : Uint4B
      +0x038 KernelTime       : Uint4B
      +0x03c UserTime         : Uint4B
      +0x040 ReadyListHead    : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x048 SwapListEntry    : _SINGLE_LIST_ENTRY
         +0x000 Next             : Ptr32 _SINGLE_LIST_ENTRY
      +0x04c VdmTrapcHandler  : Ptr32 Void
      +0x050 ThreadListHead   : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x058 ProcessLock      : Uint4B
      +0x05c Affinity         : Uint4B
      +0x060 StackCount       : Uint2B
      +0x062 BasePriority     : Char
      +0x063 ThreadQuantum    : Char
      +0x064 AutoAlignment    : UChar
      +0x065 State            : UChar
      +0x066 ThreadSeed       : UChar
      +0x067 DisableBoost     : UChar
      +0x068 PowerState       : UChar
      +0x069 DisableQuantum   : UChar
      +0x06a IdealNode        : UChar
      +0x06b Flags            : _KEXECUTE_OPTIONS
         +0x000 ExecuteDisable   : Pos 0, 1 Bit
         +0x000 ExecuteEnable    : Pos 1, 1 Bit
         +0x000 DisableThunkEmulation : Pos 2, 1 Bit
         +0x000 Permanent        : Pos 3, 1 Bit
         +0x000 ExecuteDispatchEnable : Pos 4, 1 Bit
         +0x000 ImageDispatchEnable : Pos 5, 1 Bit
         +0x000 Spare            : Pos 6, 2 Bits
      +0x06b ExecuteOptions   : UChar
   +0x06c ProcessLock      : _EX_PUSH_LOCK
      +0x000 Waiting          : Pos 0, 1 Bit
      +0x000 Exclusive        : Pos 1, 1 Bit
      +0x000 Shared           : Pos 2, 30 Bits
      +0x000 Value            : Uint4B
      +0x000 Ptr              : Ptr32 Void
   +0x070 CreateTime       : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : __unnamed
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x078 ExitTime         : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : __unnamed
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x080 RundownProtect   : _EX_RUNDOWN_REF
      +0x000 Count            : Uint4B
      +0x000 Ptr              : Ptr32 Void
   +0x084 UniqueProcessId  : Ptr32 Void
   +0x088 ActiveProcessLinks : _LIST_ENTRY
      +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x004 Blink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
   +0x090 QuotaUsage       : [3] Uint4B
   +0x09c QuotaPeak        : [3] Uint4B
   +0x0a8 CommitCharge     : Uint4B
   +0x0ac PeakVirtualSize  : Uint4B
   +0x0b0 VirtualSize      : Uint4B
   +0x0b4 SessionProcessLinks : _LIST_ENTRY
      +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x004 Blink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
   +0x0bc DebugPort        : Ptr32 Void
   +0x0c0 ExceptionPort    : Ptr32 Void
   +0x0c4 ObjectTable      : Ptr32 _HANDLE_TABLE
      +0x000 TableCode        : Uint4B
      +0x004 QuotaProcess     : Ptr32 _EPROCESS
         +0x000 Pcb              : _KPROCESS
         +0x06c ProcessLock      : _EX_PUSH_LOCK
         +0x070 CreateTime       : _LARGE_INTEGER
         +0x078 ExitTime         : _LARGE_INTEGER
         +0x080 RundownProtect   : _EX_RUNDOWN_REF
         +0x084 UniqueProcessId  : Ptr32 Void
         +0x088 ActiveProcessLinks : _LIST_ENTRY
         +0x090 QuotaUsage       : [3] Uint4B
         +0x09c QuotaPeak        : [3] Uint4B
         +0x0a8 CommitCharge     : Uint4B
         +0x0ac PeakVirtualSize  : Uint4B
         +0x0b0 VirtualSize      : Uint4B
         +0x0b4 SessionProcessLinks : _LIST_ENTRY
         +0x0bc DebugPort        : Ptr32 Void
         +0x0c0 ExceptionPort    : Ptr32 Void
         +0x0c4 ObjectTable      : Ptr32 _HANDLE_TABLE
         +0x0c8 Token            : _EX_FAST_REF
         +0x0cc WorkingSetLock   : _FAST_MUTEX
         +0x0ec WorkingSetPage   : Uint4B
         +0x0f0 AddressCreationLock : _FAST_MUTEX
         +0x110 HyperSpaceLock   : Uint4B
         +0x114 ForkInProgress   : Ptr32 _ETHREAD
         +0x118 HardwareTrigger  : Uint4B
         +0x11c VadRoot          : Ptr32 Void
         +0x120 VadHint          : Ptr32 Void
         +0x124 CloneRoot        : Ptr32 Void
         +0x128 NumberOfPrivatePages : Uint4B
         +0x12c NumberOfLockedPages : Uint4B
         +0x130 Win32Process     : Ptr32 Void
         +0x134 Job              : Ptr32 _EJOB
         +0x138 SectionObject    : Ptr32 Void
         +0x13c SectionBaseAddress : Ptr32 Void
         +0x140 QuotaBlock       : Ptr32 _EPROCESS_QUOTA_BLOCK
         +0x144 WorkingSetWatch  : Ptr32 _PAGEFAULT_HISTORY
         +0x148 Win32WindowStation : Ptr32 Void
         +0x14c InheritedFromUniqueProcessId : Ptr32 Void
         +0x150 LdtInformation   : Ptr32 Void
         +0x154 VadFreeHint      : Ptr32 Void
         +0x158 VdmObjects       : Ptr32 Void
         +0x15c DeviceMap        : Ptr32 Void
         +0x160 PhysicalVadList  : _LIST_ENTRY
         +0x168 PageDirectoryPte : _HARDWARE_PTE
         +0x168 Filler           : Uint8B
         +0x170 Session          : Ptr32 Void
         +0x174 ImageFileName    : [16] UChar
         +0x184 JobLinks         : _LIST_ENTRY
         +0x18c LockedPagesList  : Ptr32 Void
         +0x190 ThreadListHead   : _LIST_ENTRY
         +0x198 SecurityPort     : Ptr32 Void
         +0x19c PaeTop           : Ptr32 Void
         +0x1a0 ActiveThreads    : Uint4B
         +0x1a4 GrantedAccess    : Uint4B
         +0x1a8 DefaultHardErrorProcessing : Uint4B
         +0x1ac LastThreadExitStatus : Int4B
         +0x1b0 Peb              : Ptr32 _PEB
         +0x1b4 PrefetchTrace    : _EX_FAST_REF
         +0x1b8 ReadOperationCount : _LARGE_INTEGER
         +0x1c0 WriteOperationCount : _LARGE_INTEGER
         +0x1c8 OtherOperationCount : _LARGE_INTEGER
         +0x1d0 ReadTransferCount : _LARGE_INTEGER
         +0x1d8 WriteTransferCount : _LARGE_INTEGER
         +0x1e0 OtherTransferCount : _LARGE_INTEGER
         +0x1e8 CommitChargeLimit : Uint4B
         +0x1ec CommitChargePeak : Uint4B
         +0x1f0 AweInfo          : Ptr32 Void
         +0x1f4 SeAuditProcessCreationInfo : _SE_AUDIT_PROCESS_CREATION_INFO
         +0x1f8 Vm               : _MMSUPPORT
         +0x238 LastFaultCount   : Uint4B
         +0x23c ModifiedPageCount : Uint4B
         +0x240 NumberOfVads     : Uint4B
         +0x244 JobStatus        : Uint4B
         +0x248 Flags            : Uint4B
         +0x248 CreateReported   : Pos 0, 1 Bit
         +0x248 NoDebugInherit   : Pos 1, 1 Bit
         +0x248 ProcessExiting   : Pos 2, 1 Bit
         +0x248 ProcessDelete    : Pos 3, 1 Bit
         +0x248 Wow64SplitPages  : Pos 4, 1 Bit
         +0x248 VmDeleted        : Pos 5, 1 Bit
         +0x248 OutswapEnabled   : Pos 6, 1 Bit
         +0x248 Outswapped       : Pos 7, 1 Bit
         +0x248 ForkFailed       : Pos 8, 1 Bit
         +0x248 HasPhysicalVad   : Pos 9, 1 Bit
         +0x248 AddressSpaceInitialized : Pos 10, 2 Bits
         +0x248 SetTimerResolution : Pos 12, 1 Bit
         +0x248 BreakOnTermination : Pos 13, 1 Bit
         +0x248 SessionCreationUnderway : Pos 14, 1 Bit
         +0x248 WriteWatch       : Pos 15, 1 Bit
         +0x248 ProcessInSession : Pos 16, 1 Bit
         +0x248 OverrideAddressSpace : Pos 17, 1 Bit
         +0x248 HasAddressSpace  : Pos 18, 1 Bit
         +0x248 LaunchPrefetched : Pos 19, 1 Bit
         +0x248 InjectInpageErrors : Pos 20, 1 Bit
         +0x248 VmTopDown        : Pos 21, 1 Bit
         +0x248 Unused3          : Pos 22, 1 Bit
         +0x248 Unused4          : Pos 23, 1 Bit
         +0x248 VdmAllowed       : Pos 24, 1 Bit
         +0x248 Unused           : Pos 25, 5 Bits
         +0x248 Unused1          : Pos 30, 1 Bit
         +0x248 Unused2          : Pos 31, 1 Bit
         +0x24c ExitStatus       : Int4B
         +0x250 NextPageColor    : Uint2B
         +0x252 SubSystemMinorVersion : UChar
         +0x253 SubSystemMajorVersion : UChar
         +0x252 SubSystemVersion : Uint2B
         +0x254 PriorityClass    : UChar
         +0x255 WorkingSetAcquiredUnsafe : UChar
         +0x258 Cookie           : Uint4B
      +0x008 UniqueProcessId  : Ptr32 Void
      +0x00c HandleTableLock  : [4] _EX_PUSH_LOCK
         +0x000 Waiting          : Pos 0, 1 Bit
         +0x000 Exclusive        : Pos 1, 1 Bit
         +0x000 Shared           : Pos 2, 30 Bits
         +0x000 Value            : Uint4B
         +0x000 Ptr              : Ptr32 Void
      +0x01c HandleTableList  : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x024 HandleContentionEvent : _EX_PUSH_LOCK
         +0x000 Waiting          : Pos 0, 1 Bit
         +0x000 Exclusive        : Pos 1, 1 Bit
         +0x000 Shared           : Pos 2, 30 Bits
         +0x000 Value            : Uint4B
         +0x000 Ptr              : Ptr32 Void
      +0x028 DebugInfo        : Ptr32 _HANDLE_TRACE_DEBUG_INFO
         +0x000 CurrentStackIndex : Uint4B
         +0x004 TraceDb          : [4096] _HANDLE_TRACE_DB_ENTRY
      +0x02c ExtraInfoPages   : Int4B
      +0x030 FirstFree        : Uint4B
      +0x034 LastFree         : Uint4B
      +0x038 NextHandleNeedingPool : Uint4B
      +0x03c HandleCount      : Int4B
      +0x040 Flags            : Uint4B
      +0x040 StrictFIFO       : Pos 0, 1 Bit
   +0x0c8 Token            : _EX_FAST_REF
      +0x000 Object           : Ptr32 Void
      +0x000 RefCnt           : Pos 0, 3 Bits
      +0x000 Value            : Uint4B
   +0x0cc WorkingSetLock   : _FAST_MUTEX
      +0x000 Count            : Int4B
      +0x004 Owner            : Ptr32 _KTHREAD
         +0x000 Header           : _DISPATCHER_HEADER
         +0x010 MutantListHead   : _LIST_ENTRY
         +0x018 InitialStack     : Ptr32 Void
         +0x01c StackLimit       : Ptr32 Void
         +0x020 Teb              : Ptr32 Void
         +0x024 TlsArray         : Ptr32 Void
         +0x028 KernelStack      : Ptr32 Void
         +0x02c DebugActive      : UChar
         +0x02d State            : UChar
         +0x02e Alerted          : [2] UChar
         +0x030 Iopl             : UChar
         +0x031 NpxState         : UChar
         +0x032 Saturation       : Char
         +0x033 Priority         : Char
         +0x034 ApcState         : _KAPC_STATE
         +0x04c ContextSwitches  : Uint4B
         +0x050 IdleSwapBlock    : UChar
         +0x051 Spare0           : [3] UChar
         +0x054 WaitStatus       : Int4B
         +0x058 WaitIrql         : UChar
         +0x059 WaitMode         : Char
         +0x05a WaitNext         : UChar
         +0x05b WaitReason       : UChar
         +0x05c WaitBlockList    : Ptr32 _KWAIT_BLOCK
         +0x060 WaitListEntry    : _LIST_ENTRY
         +0x060 SwapListEntry    : _SINGLE_LIST_ENTRY
         +0x068 WaitTime         : Uint4B
         +0x06c BasePriority     : Char
         +0x06d DecrementCount   : UChar
         +0x06e PriorityDecrement : Char
         +0x06f Quantum          : Char
         +0x070 WaitBlock        : [4] _KWAIT_BLOCK
         +0x0d0 LegoData         : Ptr32 Void
         +0x0d4 KernelApcDisable : Uint4B
         +0x0d8 UserAffinity     : Uint4B
         +0x0dc SystemAffinityActive : UChar
         +0x0dd PowerState       : UChar
         +0x0de NpxIrql          : UChar
         +0x0df InitialNode      : UChar
         +0x0e0 ServiceTable     : Ptr32 Void
         +0x0e4 Queue            : Ptr32 _KQUEUE
         +0x0e8 ApcQueueLock     : Uint4B
         +0x0f0 Timer            : _KTIMER
         +0x118 QueueListEntry   : _LIST_ENTRY
         +0x120 SoftAffinity     : Uint4B
         +0x124 Affinity         : Uint4B
         +0x128 Preempted        : UChar
         +0x129 ProcessReadyQueue : UChar
         +0x12a KernelStackResident : UChar
         +0x12b NextProcessor    : UChar
         +0x12c CallbackStack    : Ptr32 Void
         +0x130 Win32Thread      : Ptr32 Void
         +0x134 TrapFrame        : Ptr32 _KTRAP_FRAME
         +0x138 ApcStatePointer  : [2] Ptr32 _KAPC_STATE
         +0x140 PreviousMode     : Char
         +0x141 EnableStackSwap  : UChar
         +0x142 LargeStack       : UChar
         +0x143 ResourceIndex    : UChar
         +0x144 KernelTime       : Uint4B
         +0x148 UserTime         : Uint4B
         +0x14c SavedApcState    : _KAPC_STATE
         +0x164 Alertable        : UChar
         +0x165 ApcStateIndex    : UChar
         +0x166 ApcQueueable     : UChar
         +0x167 AutoAlignment    : UChar
         +0x168 StackBase        : Ptr32 Void
         +0x16c SuspendApc       : _KAPC
         +0x19c SuspendSemaphore : _KSEMAPHORE
         +0x1b0 ThreadListEntry  : _LIST_ENTRY
         +0x1b8 FreezeCount      : Char
         +0x1b9 SuspendCount     : Char
         +0x1ba IdealProcessor   : UChar
         +0x1bb DisableBoost     : UChar
      +0x008 Contention       : Uint4B
      +0x00c Event            : _KEVENT
         +0x000 Header           : _DISPATCHER_HEADER
      +0x01c OldIrql          : Uint4B
   +0x0ec WorkingSetPage   : Uint4B
   +0x0f0 AddressCreationLock : _FAST_MUTEX
      +0x000 Count            : Int4B
      +0x004 Owner            : Ptr32 _KTHREAD
         +0x000 Header           : _DISPATCHER_HEADER
         +0x010 MutantListHead   : _LIST_ENTRY
         +0x018 InitialStack     : Ptr32 Void
         +0x01c StackLimit       : Ptr32 Void
         +0x020 Teb              : Ptr32 Void
         +0x024 TlsArray         : Ptr32 Void
         +0x028 KernelStack      : Ptr32 Void
         +0x02c DebugActive      : UChar
         +0x02d State            : UChar
         +0x02e Alerted          : [2] UChar
         +0x030 Iopl             : UChar
         +0x031 NpxState         : UChar
         +0x032 Saturation       : Char
         +0x033 Priority         : Char
         +0x034 ApcState         : _KAPC_STATE
         +0x04c ContextSwitches  : Uint4B
         +0x050 IdleSwapBlock    : UChar
         +0x051 Spare0           : [3] UChar
         +0x054 WaitStatus       : Int4B
         +0x058 WaitIrql         : UChar
         +0x059 WaitMode         : Char
         +0x05a WaitNext         : UChar
         +0x05b WaitReason       : UChar
         +0x05c WaitBlockList    : Ptr32 _KWAIT_BLOCK
         +0x060 WaitListEntry    : _LIST_ENTRY
         +0x060 SwapListEntry    : _SINGLE_LIST_ENTRY
         +0x068 WaitTime         : Uint4B
         +0x06c BasePriority     : Char
         +0x06d DecrementCount   : UChar
         +0x06e PriorityDecrement : Char
         +0x06f Quantum          : Char
         +0x070 WaitBlock        : [4] _KWAIT_BLOCK
         +0x0d0 LegoData         : Ptr32 Void
         +0x0d4 KernelApcDisable : Uint4B
         +0x0d8 UserAffinity     : Uint4B
         +0x0dc SystemAffinityActive : UChar
         +0x0dd PowerState       : UChar
         +0x0de NpxIrql          : UChar
         +0x0df InitialNode      : UChar
         +0x0e0 ServiceTable     : Ptr32 Void
         +0x0e4 Queue            : Ptr32 _KQUEUE
         +0x0e8 ApcQueueLock     : Uint4B
         +0x0f0 Timer            : _KTIMER
         +0x118 QueueListEntry   : _LIST_ENTRY
         +0x120 SoftAffinity     : Uint4B
         +0x124 Affinity         : Uint4B
         +0x128 Preempted        : UChar
         +0x129 ProcessReadyQueue : UChar
         +0x12a KernelStackResident : UChar
         +0x12b NextProcessor    : UChar
         +0x12c CallbackStack    : Ptr32 Void
         +0x130 Win32Thread      : Ptr32 Void
         +0x134 TrapFrame        : Ptr32 _KTRAP_FRAME
         +0x138 ApcStatePointer  : [2] Ptr32 _KAPC_STATE
         +0x140 PreviousMode     : Char
         +0x141 EnableStackSwap  : UChar
         +0x142 LargeStack       : UChar
         +0x143 ResourceIndex    : UChar
         +0x144 KernelTime       : Uint4B
         +0x148 UserTime         : Uint4B
         +0x14c SavedApcState    : _KAPC_STATE
         +0x164 Alertable        : UChar
         +0x165 ApcStateIndex    : UChar
         +0x166 ApcQueueable     : UChar
         +0x167 AutoAlignment    : UChar
         +0x168 StackBase        : Ptr32 Void
         +0x16c SuspendApc       : _KAPC
         +0x19c SuspendSemaphore : _KSEMAPHORE
         +0x1b0 ThreadListEntry  : _LIST_ENTRY
         +0x1b8 FreezeCount      : Char
         +0x1b9 SuspendCount     : Char
         +0x1ba IdealProcessor   : UChar
         +0x1bb DisableBoost     : UChar
      +0x008 Contention       : Uint4B
      +0x00c Event            : _KEVENT
         +0x000 Header           : _DISPATCHER_HEADER
      +0x01c OldIrql          : Uint4B
   +0x110 HyperSpaceLock   : Uint4B
   +0x114 ForkInProgress   : Ptr32 _ETHREAD
      +0x000 Tcb              : _KTHREAD
         +0x000 Header           : _DISPATCHER_HEADER
         +0x010 MutantListHead   : _LIST_ENTRY
         +0x018 InitialStack     : Ptr32 Void
         +0x01c StackLimit       : Ptr32 Void
         +0x020 Teb              : Ptr32 Void
         +0x024 TlsArray         : Ptr32 Void
         +0x028 KernelStack      : Ptr32 Void
         +0x02c DebugActive      : UChar
         +0x02d State            : UChar
         +0x02e Alerted          : [2] UChar
         +0x030 Iopl             : UChar
         +0x031 NpxState         : UChar
         +0x032 Saturation       : Char
         +0x033 Priority         : Char
         +0x034 ApcState         : _KAPC_STATE
         +0x04c ContextSwitches  : Uint4B
         +0x050 IdleSwapBlock    : UChar
         +0x051 Spare0           : [3] UChar
         +0x054 WaitStatus       : Int4B
         +0x058 WaitIrql         : UChar
         +0x059 WaitMode         : Char
         +0x05a WaitNext         : UChar
         +0x05b WaitReason       : UChar
         +0x05c WaitBlockList    : Ptr32 _KWAIT_BLOCK
         +0x060 WaitListEntry    : _LIST_ENTRY
         +0x060 SwapListEntry    : _SINGLE_LIST_ENTRY
         +0x068 WaitTime         : Uint4B
         +0x06c BasePriority     : Char
         +0x06d DecrementCount   : UChar
         +0x06e PriorityDecrement : Char
         +0x06f Quantum          : Char
         +0x070 WaitBlock        : [4] _KWAIT_BLOCK
         +0x0d0 LegoData         : Ptr32 Void
         +0x0d4 KernelApcDisable : Uint4B
         +0x0d8 UserAffinity     : Uint4B
         +0x0dc SystemAffinityActive : UChar
         +0x0dd PowerState       : UChar
         +0x0de NpxIrql          : UChar
         +0x0df InitialNode      : UChar
         +0x0e0 ServiceTable     : Ptr32 Void
         +0x0e4 Queue            : Ptr32 _KQUEUE
         +0x0e8 ApcQueueLock     : Uint4B
         +0x0f0 Timer            : _KTIMER
         +0x118 QueueListEntry   : _LIST_ENTRY
         +0x120 SoftAffinity     : Uint4B
         +0x124 Affinity         : Uint4B
         +0x128 Preempted        : UChar
         +0x129 ProcessReadyQueue : UChar
         +0x12a KernelStackResident : UChar
         +0x12b NextProcessor    : UChar
         +0x12c CallbackStack    : Ptr32 Void
         +0x130 Win32Thread      : Ptr32 Void
         +0x134 TrapFrame        : Ptr32 _KTRAP_FRAME
         +0x138 ApcStatePointer  : [2] Ptr32 _KAPC_STATE
         +0x140 PreviousMode     : Char
         +0x141 EnableStackSwap  : UChar
         +0x142 LargeStack       : UChar
         +0x143 ResourceIndex    : UChar
         +0x144 KernelTime       : Uint4B
         +0x148 UserTime         : Uint4B
         +0x14c SavedApcState    : _KAPC_STATE
         +0x164 Alertable        : UChar
         +0x165 ApcStateIndex    : UChar
         +0x166 ApcQueueable     : UChar
         +0x167 AutoAlignment    : UChar
         +0x168 StackBase        : Ptr32 Void
         +0x16c SuspendApc       : _KAPC
         +0x19c SuspendSemaphore : _KSEMAPHORE
         +0x1b0 ThreadListEntry  : _LIST_ENTRY
         +0x1b8 FreezeCount      : Char
         +0x1b9 SuspendCount     : Char
         +0x1ba IdealProcessor   : UChar
         +0x1bb DisableBoost     : UChar
      +0x1c0 CreateTime       : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : __unnamed
         +0x000 QuadPart         : Int8B
      +0x1c0 NestedFaultCount : Pos 0, 2 Bits
      +0x1c0 ApcNeeded        : Pos 2, 1 Bit
      +0x1c8 ExitTime         : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : __unnamed
         +0x000 QuadPart         : Int8B
      +0x1c8 LpcReplyChain    : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x1c8 KeyedWaitChain   : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x1d0 ExitStatus       : Int4B
      +0x1d0 OfsChain         : Ptr32 Void
      +0x1d4 PostBlockList    : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x1dc TerminationPort  : Ptr32 _TERMINATION_PORT
         +0x000 Next             : Ptr32 _TERMINATION_PORT
         +0x004 Port             : Ptr32 Void
      +0x1dc ReaperLink       : Ptr32 _ETHREAD
         +0x000 Tcb              : _KTHREAD
         +0x1c0 CreateTime       : _LARGE_INTEGER
         +0x1c0 NestedFaultCount : Pos 0, 2 Bits
         +0x1c0 ApcNeeded        : Pos 2, 1 Bit
         +0x1c8 ExitTime         : _LARGE_INTEGER
         +0x1c8 LpcReplyChain    : _LIST_ENTRY
         +0x1c8 KeyedWaitChain   : _LIST_ENTRY
         +0x1d0 ExitStatus       : Int4B
         +0x1d0 OfsChain         : Ptr32 Void
         +0x1d4 PostBlockList    : _LIST_ENTRY
         +0x1dc TerminationPort  : Ptr32 _TERMINATION_PORT
         +0x1dc ReaperLink       : Ptr32 _ETHREAD
         +0x1dc KeyedWaitValue   : Ptr32 Void
         +0x1e0 ActiveTimerListLock : Uint4B
         +0x1e4 ActiveTimerListHead : _LIST_ENTRY
         +0x1ec Cid              : _CLIENT_ID
         +0x1f4 LpcReplySemaphore : _KSEMAPHORE
         +0x1f4 KeyedWaitSemaphore : _KSEMAPHORE
         +0x208 LpcReplyMessage  : Ptr32 Void
         +0x208 LpcWaitingOnPort : Ptr32 Void
         +0x20c ImpersonationInfo : Ptr32 _PS_IMPERSONATION_INFORMATION
         +0x210 IrpList          : _LIST_ENTRY
         +0x218 TopLevelIrp      : Uint4B
         +0x21c DeviceToVerify   : Ptr32 _DEVICE_OBJECT
         +0x220 ThreadsProcess   : Ptr32 _EPROCESS
         +0x224 StartAddress     : Ptr32 Void
         +0x228 Win32StartAddress : Ptr32 Void
         +0x228 LpcReceivedMessageId : Uint4B
         +0x22c ThreadListEntry  : _LIST_ENTRY
         +0x234 RundownProtect   : _EX_RUNDOWN_REF
         +0x238 ThreadLock       : _EX_PUSH_LOCK
         +0x23c LpcReplyMessageId : Uint4B
         +0x240 ReadClusterSize  : Uint4B
         +0x244 GrantedAccess    : Uint4B
         +0x248 CrossThreadFlags : Uint4B
         +0x248 Terminated       : Pos 0, 1 Bit
         +0x248 DeadThread       : Pos 1, 1 Bit
         +0x248 HideFromDebugger : Pos 2, 1 Bit
         +0x248 ActiveImpersonationInfo : Pos 3, 1 Bit
         +0x248 SystemThread     : Pos 4, 1 Bit
         +0x248 HardErrorsAreDisabled : Pos 5, 1 Bit
         +0x248 BreakOnTermination : Pos 6, 1 Bit
         +0x248 SkipCreationMsg  : Pos 7, 1 Bit
         +0x248 SkipTerminationMsg : Pos 8, 1 Bit
         +0x24c SameThreadPassiveFlags : Uint4B
         +0x24c ActiveExWorker   : Pos 0, 1 Bit
         +0x24c ExWorkerCanWaitUser : Pos 1, 1 Bit
         +0x24c MemoryMaker      : Pos 2, 1 Bit
         +0x250 SameThreadApcFlags : Uint4B
         +0x250 LpcReceivedMsgIdValid : Pos 0, 1 Bit
         +0x250 LpcExitThreadCalled : Pos 1, 1 Bit
         +0x250 AddressSpaceOwner : Pos 2, 1 Bit
         +0x254 ForwardClusterOnly : UChar
         +0x255 DisablePageFaultClustering : UChar
      +0x1dc KeyedWaitValue   : Ptr32 Void
      +0x1e0 ActiveTimerListLock : Uint4B
      +0x1e4 ActiveTimerListHead : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x1ec Cid              : _CLIENT_ID
         +0x000 UniqueProcess    : Ptr32 Void
         +0x004 UniqueThread     : Ptr32 Void
      +0x1f4 LpcReplySemaphore : _KSEMAPHORE
         +0x000 Header           : _DISPATCHER_HEADER
         +0x010 Limit            : Int4B
      +0x1f4 KeyedWaitSemaphore : _KSEMAPHORE
         +0x000 Header           : _DISPATCHER_HEADER
         +0x010 Limit            : Int4B
      +0x208 LpcReplyMessage  : Ptr32 Void
      +0x208 LpcWaitingOnPort : Ptr32 Void
      +0x20c ImpersonationInfo : Ptr32 _PS_IMPERSONATION_INFORMATION
         +0x000 Token            : Ptr32 Void
         +0x004 CopyOnOpen       : UChar
         +0x005 EffectiveOnly    : UChar
         +0x008 ImpersonationLevel : _SECURITY_IMPERSONATION_LEVEL
      +0x210 IrpList          : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x218 TopLevelIrp      : Uint4B
      +0x21c DeviceToVerify   : Ptr32 _DEVICE_OBJECT
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
         +0x034 Queue            : __unnamed
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
      +0x220 ThreadsProcess   : Ptr32 _EPROCESS
         +0x000 Pcb              : _KPROCESS
         +0x06c ProcessLock      : _EX_PUSH_LOCK
         +0x070 CreateTime       : _LARGE_INTEGER
         +0x078 ExitTime         : _LARGE_INTEGER
         +0x080 RundownProtect   : _EX_RUNDOWN_REF
         +0x084 UniqueProcessId  : Ptr32 Void
         +0x088 ActiveProcessLinks : _LIST_ENTRY
         +0x090 QuotaUsage       : [3] Uint4B
         +0x09c QuotaPeak        : [3] Uint4B
         +0x0a8 CommitCharge     : Uint4B
         +0x0ac PeakVirtualSize  : Uint4B
         +0x0b0 VirtualSize      : Uint4B
         +0x0b4 SessionProcessLinks : _LIST_ENTRY
         +0x0bc DebugPort        : Ptr32 Void
         +0x0c0 ExceptionPort    : Ptr32 Void
         +0x0c4 ObjectTable      : Ptr32 _HANDLE_TABLE
         +0x0c8 Token            : _EX_FAST_REF
         +0x0cc WorkingSetLock   : _FAST_MUTEX
         +0x0ec WorkingSetPage   : Uint4B
         +0x0f0 AddressCreationLock : _FAST_MUTEX
         +0x110 HyperSpaceLock   : Uint4B
         +0x114 ForkInProgress   : Ptr32 _ETHREAD
         +0x118 HardwareTrigger  : Uint4B
         +0x11c VadRoot          : Ptr32 Void
         +0x120 VadHint          : Ptr32 Void
         +0x124 CloneRoot        : Ptr32 Void
         +0x128 NumberOfPrivatePages : Uint4B
         +0x12c NumberOfLockedPages : Uint4B
         +0x130 Win32Process     : Ptr32 Void
         +0x134 Job              : Ptr32 _EJOB
         +0x138 SectionObject    : Ptr32 Void
         +0x13c SectionBaseAddress : Ptr32 Void
         +0x140 QuotaBlock       : Ptr32 _EPROCESS_QUOTA_BLOCK
         +0x144 WorkingSetWatch  : Ptr32 _PAGEFAULT_HISTORY
         +0x148 Win32WindowStation : Ptr32 Void
         +0x14c InheritedFromUniqueProcessId : Ptr32 Void
         +0x150 LdtInformation   : Ptr32 Void
         +0x154 VadFreeHint      : Ptr32 Void
         +0x158 VdmObjects       : Ptr32 Void
         +0x15c DeviceMap        : Ptr32 Void
         +0x160 PhysicalVadList  : _LIST_ENTRY
         +0x168 PageDirectoryPte : _HARDWARE_PTE
         +0x168 Filler           : Uint8B
         +0x170 Session          : Ptr32 Void
         +0x174 ImageFileName    : [16] UChar
         +0x184 JobLinks         : _LIST_ENTRY
         +0x18c LockedPagesList  : Ptr32 Void
         +0x190 ThreadListHead   : _LIST_ENTRY
         +0x198 SecurityPort     : Ptr32 Void
         +0x19c PaeTop           : Ptr32 Void
         +0x1a0 ActiveThreads    : Uint4B
         +0x1a4 GrantedAccess    : Uint4B
         +0x1a8 DefaultHardErrorProcessing : Uint4B
         +0x1ac LastThreadExitStatus : Int4B
         +0x1b0 Peb              : Ptr32 _PEB
         +0x1b4 PrefetchTrace    : _EX_FAST_REF
         +0x1b8 ReadOperationCount : _LARGE_INTEGER
         +0x1c0 WriteOperationCount : _LARGE_INTEGER
         +0x1c8 OtherOperationCount : _LARGE_INTEGER
         +0x1d0 ReadTransferCount : _LARGE_INTEGER
         +0x1d8 WriteTransferCount : _LARGE_INTEGER
         +0x1e0 OtherTransferCount : _LARGE_INTEGER
         +0x1e8 CommitChargeLimit : Uint4B
         +0x1ec CommitChargePeak : Uint4B
         +0x1f0 AweInfo          : Ptr32 Void
         +0x1f4 SeAuditProcessCreationInfo : _SE_AUDIT_PROCESS_CREATION_INFO
         +0x1f8 Vm               : _MMSUPPORT
         +0x238 LastFaultCount   : Uint4B
         +0x23c ModifiedPageCount : Uint4B
         +0x240 NumberOfVads     : Uint4B
         +0x244 JobStatus        : Uint4B
         +0x248 Flags            : Uint4B
         +0x248 CreateReported   : Pos 0, 1 Bit
         +0x248 NoDebugInherit   : Pos 1, 1 Bit
         +0x248 ProcessExiting   : Pos 2, 1 Bit
         +0x248 ProcessDelete    : Pos 3, 1 Bit
         +0x248 Wow64SplitPages  : Pos 4, 1 Bit
         +0x248 VmDeleted        : Pos 5, 1 Bit
         +0x248 OutswapEnabled   : Pos 6, 1 Bit
         +0x248 Outswapped       : Pos 7, 1 Bit
         +0x248 ForkFailed       : Pos 8, 1 Bit
         +0x248 HasPhysicalVad   : Pos 9, 1 Bit
         +0x248 AddressSpaceInitialized : Pos 10, 2 Bits
         +0x248 SetTimerResolution : Pos 12, 1 Bit
         +0x248 BreakOnTermination : Pos 13, 1 Bit
         +0x248 SessionCreationUnderway : Pos 14, 1 Bit
         +0x248 WriteWatch       : Pos 15, 1 Bit
         +0x248 ProcessInSession : Pos 16, 1 Bit
         +0x248 OverrideAddressSpace : Pos 17, 1 Bit
         +0x248 HasAddressSpace  : Pos 18, 1 Bit
         +0x248 LaunchPrefetched : Pos 19, 1 Bit
         +0x248 InjectInpageErrors : Pos 20, 1 Bit
         +0x248 VmTopDown        : Pos 21, 1 Bit
         +0x248 Unused3          : Pos 22, 1 Bit
         +0x248 Unused4          : Pos 23, 1 Bit
         +0x248 VdmAllowed       : Pos 24, 1 Bit
         +0x248 Unused           : Pos 25, 5 Bits
         +0x248 Unused1          : Pos 30, 1 Bit
         +0x248 Unused2          : Pos 31, 1 Bit
         +0x24c ExitStatus       : Int4B
         +0x250 NextPageColor    : Uint2B
         +0x252 SubSystemMinorVersion : UChar
         +0x253 SubSystemMajorVersion : UChar
         +0x252 SubSystemVersion : Uint2B
         +0x254 PriorityClass    : UChar
         +0x255 WorkingSetAcquiredUnsafe : UChar
         +0x258 Cookie           : Uint4B
      +0x224 StartAddress     : Ptr32 Void
      +0x228 Win32StartAddress : Ptr32 Void
      +0x228 LpcReceivedMessageId : Uint4B
      +0x22c ThreadListEntry  : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x234 RundownProtect   : _EX_RUNDOWN_REF
         +0x000 Count            : Uint4B
         +0x000 Ptr              : Ptr32 Void
      +0x238 ThreadLock       : _EX_PUSH_LOCK
         +0x000 Waiting          : Pos 0, 1 Bit
         +0x000 Exclusive        : Pos 1, 1 Bit
         +0x000 Shared           : Pos 2, 30 Bits
         +0x000 Value            : Uint4B
         +0x000 Ptr              : Ptr32 Void
      +0x23c LpcReplyMessageId : Uint4B
      +0x240 ReadClusterSize  : Uint4B
      +0x244 GrantedAccess    : Uint4B
      +0x248 CrossThreadFlags : Uint4B
      +0x248 Terminated       : Pos 0, 1 Bit
      +0x248 DeadThread       : Pos 1, 1 Bit
      +0x248 HideFromDebugger : Pos 2, 1 Bit
      +0x248 ActiveImpersonationInfo : Pos 3, 1 Bit
      +0x248 SystemThread     : Pos 4, 1 Bit
      +0x248 HardErrorsAreDisabled : Pos 5, 1 Bit
      +0x248 BreakOnTermination : Pos 6, 1 Bit
      +0x248 SkipCreationMsg  : Pos 7, 1 Bit
      +0x248 SkipTerminationMsg : Pos 8, 1 Bit
      +0x24c SameThreadPassiveFlags : Uint4B
      +0x24c ActiveExWorker   : Pos 0, 1 Bit
      +0x24c ExWorkerCanWaitUser : Pos 1, 1 Bit
      +0x24c MemoryMaker      : Pos 2, 1 Bit
      +0x250 SameThreadApcFlags : Uint4B
      +0x250 LpcReceivedMsgIdValid : Pos 0, 1 Bit
      +0x250 LpcExitThreadCalled : Pos 1, 1 Bit
      +0x250 AddressSpaceOwner : Pos 2, 1 Bit
      +0x254 ForwardClusterOnly : UChar
      +0x255 DisablePageFaultClustering : UChar
   +0x118 HardwareTrigger  : Uint4B
   +0x11c VadRoot          : Ptr32 Void
   +0x120 VadHint          : Ptr32 Void
   +0x124 CloneRoot        : Ptr32 Void
   +0x128 NumberOfPrivatePages : Uint4B
   +0x12c NumberOfLockedPages : Uint4B
   +0x130 Win32Process     : Ptr32 Void
   +0x134 Job              : Ptr32 _EJOB
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
         +0x018 OwnerThreads     : [2] _OWNER_ENTRY
         +0x028 ContentionCount  : Uint4B
         +0x02c NumberOfSharedWaiters : Uint2B
         +0x02e NumberOfExclusiveWaiters : Uint2B
         +0x030 Address          : Ptr32 Void
         +0x030 CreatorBackTraceIndex : Uint4B
         +0x034 SpinLock         : Uint4B
      +0x058 TotalUserTime    : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : __unnamed
         +0x000 QuadPart         : Int8B
      +0x060 TotalKernelTime  : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : __unnamed
         +0x000 QuadPart         : Int8B
      +0x068 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : __unnamed
         +0x000 QuadPart         : Int8B
      +0x070 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : __unnamed
         +0x000 QuadPart         : Int8B
      +0x078 TotalPageFaultCount : Uint4B
      +0x07c TotalProcesses   : Uint4B
      +0x080 ActiveProcesses  : Uint4B
      +0x084 TotalTerminatedProcesses : Uint4B
      +0x088 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : __unnamed
         +0x000 QuadPart         : Int8B
      +0x090 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : __unnamed
         +0x000 QuadPart         : Int8B
      +0x098 LimitFlags       : Uint4B
      +0x09c MinimumWorkingSetSize : Uint4B
      +0x0a0 MaximumWorkingSetSize : Uint4B
      +0x0a4 ActiveProcessLimit : Uint4B
      +0x0a8 Affinity         : Uint4B
      +0x0ac PriorityClass    : UChar
      +0x0b0 UIRestrictionsClass : Uint4B
      +0x0b4 SecurityLimitFlags : Uint4B
      +0x0b8 Token            : Ptr32 Void
      +0x0bc Filter           : Ptr32 _PS_JOB_TOKEN_FILTER
         +0x000 CapturedSidCount : Uint4B
         +0x004 CapturedSids     : Ptr32 _SID_AND_ATTRIBUTES
         +0x008 CapturedSidsLength : Uint4B
         +0x00c CapturedGroupCount : Uint4B
         +0x010 CapturedGroups   : Ptr32 _SID_AND_ATTRIBUTES
         +0x014 CapturedGroupsLength : Uint4B
         +0x018 CapturedPrivilegeCount : Uint4B
         +0x01c CapturedPrivileges : Ptr32 _LUID_AND_ATTRIBUTES
         +0x020 CapturedPrivilegesLength : Uint4B
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
      +0x108 IoInfo           : _IO_COUNTERS
         +0x000 ReadOperationCount : Uint8B
         +0x008 WriteOperationCount : Uint8B
         +0x010 OtherOperationCount : Uint8B
         +0x018 ReadTransferCount : Uint8B
         +0x020 WriteTransferCount : Uint8B
         +0x028 OtherTransferCount : Uint8B
      +0x138 ProcessMemoryLimit : Uint4B
      +0x13c JobMemoryLimit   : Uint4B
      +0x140 PeakProcessMemoryUsed : Uint4B
      +0x144 PeakJobMemoryUsed : Uint4B
      +0x148 CurrentJobMemoryUsed : Uint4B
      +0x14c MemoryLimitsLock : _FAST_MUTEX
         +0x000 Count            : Int4B
         +0x004 Owner            : Ptr32 _KTHREAD
         +0x008 Contention       : Uint4B
         +0x00c Event            : _KEVENT
         +0x01c OldIrql          : Uint4B
      +0x16c JobSetLinks      : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x174 MemberLevel      : Uint4B
      +0x178 JobFlags         : Uint4B
   +0x138 SectionObject    : Ptr32 Void
   +0x13c SectionBaseAddress : Ptr32 Void
   +0x140 QuotaBlock       : Ptr32 _EPROCESS_QUOTA_BLOCK
      +0x000 QuotaEntry       : [3] _EPROCESS_QUOTA_ENTRY
         +0x000 Usage            : Uint4B
         +0x004 Limit            : Uint4B
         +0x008 Peak             : Uint4B
         +0x00c Return           : Uint4B
      +0x030 QuotaList        : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x038 ReferenceCount   : Uint4B
      +0x03c ProcessCount     : Uint4B
   +0x144 WorkingSetWatch  : Ptr32 _PAGEFAULT_HISTORY
      +0x000 CurrentIndex     : Uint4B
      +0x004 MaxIndex         : Uint4B
      +0x008 SpinLock         : Uint4B
      +0x00c Reserved         : Ptr32 Void
      +0x010 WatchInfo        : [1] _PROCESS_WS_WATCH_INFORMATION
         +0x000 FaultingPc       : Ptr32 Void
         +0x004 FaultingVa       : Ptr32 Void
   +0x148 Win32WindowStation : Ptr32 Void
   +0x14c InheritedFromUniqueProcessId : Ptr32 Void
   +0x150 LdtInformation   : Ptr32 Void
   +0x154 VadFreeHint      : Ptr32 Void
   +0x158 VdmObjects       : Ptr32 Void
   +0x15c DeviceMap        : Ptr32 Void
   +0x160 PhysicalVadList  : _LIST_ENTRY
      +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x004 Blink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
   +0x168 PageDirectoryPte : _HARDWARE_PTE
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
   +0x168 Filler           : Uint8B
   +0x170 Session          : Ptr32 Void
   +0x174 ImageFileName    : [16] UChar
   +0x184 JobLinks         : _LIST_ENTRY
      +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x004 Blink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
   +0x18c LockedPagesList  : Ptr32 Void
   +0x190 ThreadListHead   : _LIST_ENTRY
      +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x004 Blink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
   +0x198 SecurityPort     : Ptr32 Void
   +0x19c PaeTop           : Ptr32 Void
   +0x1a0 ActiveThreads    : Uint4B
   +0x1a4 GrantedAccess    : Uint4B
   +0x1a8 DefaultHardErrorProcessing : Uint4B
   +0x1ac LastThreadExitStatus : Int4B
   +0x1b0 Peb              : Ptr32 _PEB
      +0x000 InheritedAddressSpace : UChar
      +0x001 ReadImageFileExecOptions : UChar
      +0x002 BeingDebugged    : UChar
      +0x003 SpareBool        : UChar
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
      +0x014 SubSystemData    : Ptr32 Void
      +0x018 ProcessHeap      : Ptr32 Void
      +0x01c FastPebLock      : Ptr32 _RTL_CRITICAL_SECTION
         +0x000 DebugInfo        : Ptr32 _RTL_CRITICAL_SECTION_DEBUG
         +0x004 LockCount        : Int4B
         +0x008 RecursionCount   : Int4B
         +0x00c OwningThread     : Ptr32 Void
         +0x010 LockSemaphore    : Ptr32 Void
         +0x014 SpinCount        : Uint4B
      +0x020 FastPebLockRoutine : Ptr32 Void
      +0x024 FastPebUnlockRoutine : Ptr32 Void
      +0x028 EnvironmentUpdateCount : Uint4B
      +0x02c KernelCallbackTable : Ptr32 Void
      +0x030 SystemReserved   : [1] Uint4B
      +0x034 AtlThunkSListPtr32 : Uint4B
      +0x038 FreeList         : Ptr32 _PEB_FREE_BLOCK
         +0x000 Next             : Ptr32 _PEB_FREE_BLOCK
         +0x004 Size             : Uint4B
      +0x03c TlsExpansionCounter : Uint4B
      +0x040 TlsBitmap        : Ptr32 Void
      +0x044 TlsBitmapBits    : [2] Uint4B
      +0x04c ReadOnlySharedMemoryBase : Ptr32 Void
      +0x050 ReadOnlySharedMemoryHeap : Ptr32 Void
      +0x054 ReadOnlyStaticServerData : Ptr32 Ptr32 Void
      +0x058 AnsiCodePageData : Ptr32 Void
      +0x05c OemCodePageData  : Ptr32 Void
      +0x060 UnicodeCaseTableData : Ptr32 Void
      +0x064 NumberOfProcessors : Uint4B
      +0x068 NtGlobalFlag     : Uint4B
      +0x070 CriticalSectionTimeout : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : __unnamed
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
      +0x0a0 LoaderLock       : Ptr32 Void
      +0x0a4 OSMajorVersion   : Uint4B
      +0x0a8 OSMinorVersion   : Uint4B
      +0x0ac OSBuildNumber    : Uint2B
      +0x0ae OSCSDVersion     : Uint2B
      +0x0b0 OSPlatformId     : Uint4B
      +0x0b4 ImageSubsystem   : Uint4B
      +0x0b8 ImageSubsystemMajorVersion : Uint4B
      +0x0bc ImageSubsystemMinorVersion : Uint4B
      +0x0c0 ImageProcessAffinityMask : Uint4B
      +0x0c4 GdiHandleBuffer  : [34] Uint4B
      +0x14c PostProcessInitRoutine : Ptr32        void 
      +0x150 TlsExpansionBitmap : Ptr32 Void
      +0x154 TlsExpansionBitmapBits : [32] Uint4B
      +0x1d4 SessionId        : Uint4B
      +0x1d8 AppCompatFlags   : _ULARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Uint4B
         +0x000 u                : __unnamed
         +0x000 QuadPart         : Uint8B
      +0x1e0 AppCompatFlagsUser : _ULARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Uint4B
         +0x000 u                : __unnamed
         +0x000 QuadPart         : Uint8B
      +0x1e8 pShimData        : Ptr32 Void
      +0x1ec AppCompatInfo    : Ptr32 Void
      +0x1f0 CSDVersion       : _UNICODE_STRING
         +0x000 Length           : Uint2B
         +0x002 MaximumLength    : Uint2B
         +0x004 Buffer           : Ptr32 Uint2B
      +0x1f8 ActivationContextData : Ptr32 Void
      +0x1fc ProcessAssemblyStorageMap : Ptr32 Void
      +0x200 SystemDefaultActivationContextData : Ptr32 Void
      +0x204 SystemAssemblyStorageMap : Ptr32 Void
      +0x208 MinimumStackCommit : Uint4B
   +0x1b4 PrefetchTrace    : _EX_FAST_REF
      +0x000 Object           : Ptr32 Void
      +0x000 RefCnt           : Pos 0, 3 Bits
      +0x000 Value            : Uint4B
   +0x1b8 ReadOperationCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : __unnamed
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x1c0 WriteOperationCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : __unnamed
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x1c8 OtherOperationCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : __unnamed
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x1d0 ReadTransferCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : __unnamed
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x1d8 WriteTransferCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : __unnamed
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x1e0 OtherTransferCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : __unnamed
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x1e8 CommitChargeLimit : Uint4B
   +0x1ec CommitChargePeak : Uint4B
   +0x1f0 AweInfo          : Ptr32 Void
   +0x1f4 SeAuditProcessCreationInfo : _SE_AUDIT_PROCESS_CREATION_INFO
      +0x000 ImageFileName    : Ptr32 _OBJECT_NAME_INFORMATION
         +0x000 Name             : _UNICODE_STRING
   +0x1f8 Vm               : _MMSUPPORT
      +0x000 LastTrimTime     : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : __unnamed
         +0x000 QuadPart         : Int8B
      +0x008 Flags            : _MMSUPPORT_FLAGS
         +0x000 SessionSpace     : Pos 0, 1 Bit
         +0x000 BeingTrimmed     : Pos 1, 1 Bit
         +0x000 SessionLeader    : Pos 2, 1 Bit
         +0x000 TrimHard         : Pos 3, 1 Bit
         +0x000 WorkingSetHard   : Pos 4, 1 Bit
         +0x000 AddressSpaceBeingDeleted : Pos 5, 1 Bit
         +0x000 Available        : Pos 6, 10 Bits
         +0x000 AllowWorkingSetAdjustment : Pos 16, 8 Bits
         +0x000 MemoryPriority   : Pos 24, 8 Bits
      +0x00c PageFaultCount   : Uint4B
      +0x010 PeakWorkingSetSize : Uint4B
      +0x014 WorkingSetSize   : Uint4B
      +0x018 MinimumWorkingSetSize : Uint4B
      +0x01c MaximumWorkingSetSize : Uint4B
      +0x020 VmWorkingSetList : Ptr32 _MMWSL
         +0x000 Quota            : Uint4B
         +0x004 FirstFree        : Uint4B
         +0x008 FirstDynamic     : Uint4B
         +0x00c LastEntry        : Uint4B
         +0x010 NextSlot         : Uint4B
         +0x014 Wsle             : Ptr32 _MMWSLE
         +0x018 LastInitializedWsle : Uint4B
         +0x01c NonDirectCount   : Uint4B
         +0x020 HashTable        : Ptr32 _MMWSLE_HASH
         +0x024 HashTableSize    : Uint4B
         +0x028 NumberOfCommittedPageTables : Uint4B
         +0x02c HashTableStart   : Ptr32 Void
         +0x030 HighestPermittedHashAddress : Ptr32 Void
         +0x034 NumberOfImageWaiters : Uint4B
         +0x038 VadBitMapHint    : Uint4B
         +0x03c UsedPageTableEntries : [1536] Uint2B
         +0xc3c CommittedPageTables : [48] Uint4B
      +0x024 WorkingSetExpansionLinks : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x02c Claim            : Uint4B
      +0x030 NextEstimationSlot : Uint4B
      +0x034 NextAgingSlot    : Uint4B
      +0x038 EstimatedAvailable : Uint4B
      +0x03c GrowthSinceLastEstimate : Uint4B
   +0x238 LastFaultCount   : Uint4B
   +0x23c ModifiedPageCount : Uint4B
   +0x240 NumberOfVads     : Uint4B
   +0x244 JobStatus        : Uint4B
   +0x248 Flags            : Uint4B
   +0x248 CreateReported   : Pos 0, 1 Bit
   +0x248 NoDebugInherit   : Pos 1, 1 Bit
   +0x248 ProcessExiting   : Pos 2, 1 Bit
   +0x248 ProcessDelete    : Pos 3, 1 Bit
   +0x248 Wow64SplitPages  : Pos 4, 1 Bit
   +0x248 VmDeleted        : Pos 5, 1 Bit
   +0x248 OutswapEnabled   : Pos 6, 1 Bit
   +0x248 Outswapped       : Pos 7, 1 Bit
   +0x248 ForkFailed       : Pos 8, 1 Bit
   +0x248 HasPhysicalVad   : Pos 9, 1 Bit
   +0x248 AddressSpaceInitialized : Pos 10, 2 Bits
   +0x248 SetTimerResolution : Pos 12, 1 Bit
   +0x248 BreakOnTermination : Pos 13, 1 Bit
   +0x248 SessionCreationUnderway : Pos 14, 1 Bit
   +0x248 WriteWatch       : Pos 15, 1 Bit
   +0x248 ProcessInSession : Pos 16, 1 Bit
   +0x248 OverrideAddressSpace : Pos 17, 1 Bit
   +0x248 HasAddressSpace  : Pos 18, 1 Bit
   +0x248 LaunchPrefetched : Pos 19, 1 Bit
   +0x248 InjectInpageErrors : Pos 20, 1 Bit
   +0x248 VmTopDown        : Pos 21, 1 Bit
   +0x248 Unused3          : Pos 22, 1 Bit
   +0x248 Unused4          : Pos 23, 1 Bit
   +0x248 VdmAllowed       : Pos 24, 1 Bit
   +0x248 Unused           : Pos 25, 5 Bits
   +0x248 Unused1          : Pos 30, 1 Bit
   +0x248 Unused2          : Pos 31, 1 Bit
   +0x24c ExitStatus       : Int4B
   +0x250 NextPageColor    : Uint2B
   +0x252 SubSystemMinorVersion : UChar
   +0x253 SubSystemMajorVersion : UChar
   +0x252 SubSystemVersion : Uint2B
   +0x254 PriorityClass    : UChar
   +0x255 WorkingSetAcquiredUnsafe : UChar
   +0x258 Cookie           : Uint4B
```