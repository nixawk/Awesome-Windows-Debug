```
kd> dt nt!_EPROCESS -r
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
         +0x002 ThreadControlFlags : UChar
         +0x002 CpuThrottled     : Pos 0, 1 Bit
         +0x002 CycleProfiling   : Pos 1, 1 Bit
         +0x002 CounterProfiling : Pos 2, 1 Bit
         +0x002 Reserved         : Pos 3, 5 Bits
         +0x002 Hand             : UChar
         +0x002 Size             : UChar
         +0x003 TimerMiscFlags   : UChar
         +0x003 Index            : Pos 0, 6 Bits
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
      +0x018 ProfileListHead  : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x028 DirectoryTableBase : Uint8B
      +0x030 ThreadListHead   : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x040 ProcessLock      : Uint8B
      +0x048 Affinity         : _KAFFINITY_EX
         +0x000 Count            : Uint2B
         +0x002 Size             : Uint2B
         +0x004 Reserved         : Uint4B
         +0x008 Bitmap           : [4] Uint8B
      +0x070 ReadyListHead    : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x080 SwapListEntry    : _SINGLE_LIST_ENTRY
         +0x000 Next             : Ptr64 _SINGLE_LIST_ENTRY
      +0x088 ActiveProcessors : _KAFFINITY_EX
         +0x000 Count            : Uint2B
         +0x002 Size             : Uint2B
         +0x004 Reserved         : Uint4B
         +0x008 Bitmap           : [4] Uint8B
      +0x0b0 AutoAlignment    : Pos 0, 1 Bit
      +0x0b0 DisableBoost     : Pos 1, 1 Bit
      +0x0b0 DisableQuantum   : Pos 2, 1 Bit
      +0x0b0 ActiveGroupsMask : Pos 3, 4 Bits
      +0x0b0 ReservedFlags    : Pos 7, 25 Bits
      +0x0b0 ProcessFlags     : Int4B
      +0x0b4 BasePriority     : Char
      +0x0b5 QuantumReset     : Char
      +0x0b6 Visited          : UChar
      +0x0b7 Unused3          : UChar
      +0x0b8 ThreadSeed       : [4] Uint4B
      +0x0c8 IdealNode        : [4] Uint2B
      +0x0d0 IdealGlobalNode  : Uint2B
      +0x0d2 Flags            : _KEXECUTE_OPTIONS
         +0x000 ExecuteDisable   : Pos 0, 1 Bit
         +0x000 ExecuteEnable    : Pos 1, 1 Bit
         +0x000 DisableThunkEmulation : Pos 2, 1 Bit
         +0x000 Permanent        : Pos 3, 1 Bit
         +0x000 ExecuteDispatchEnable : Pos 4, 1 Bit
         +0x000 ImageDispatchEnable : Pos 5, 1 Bit
         +0x000 DisableExceptionChainValidation : Pos 6, 1 Bit
         +0x000 Spare            : Pos 7, 1 Bit
         +0x000 ExecuteOptions   : UChar
      +0x0d3 Unused1          : UChar
      +0x0d4 Unused2          : Uint4B
      +0x0d8 Unused4          : Uint4B
      +0x0dc StackCount       : _KSTACK_COUNT
         +0x000 Value            : Int4B
         +0x000 State            : Pos 0, 3 Bits
         +0x000 StackCount       : Pos 3, 29 Bits
      +0x0e0 ProcessListEntry : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x0f0 CycleTime        : Uint8B
      +0x0f8 KernelTime       : Uint4B
      +0x0fc UserTime         : Uint4B
      +0x100 InstrumentationCallback : Ptr64 Void
      +0x108 LdtSystemDescriptor : _KGDTENTRY64
         +0x000 LimitLow         : Uint2B
         +0x002 BaseLow          : Uint2B
         +0x004 Bytes            : <unnamed-tag>
         +0x004 Bits             : <unnamed-tag>
         +0x008 BaseUpper        : Uint4B
         +0x00c MustBeZero       : Uint4B
         +0x000 Alignment        : Uint8B
      +0x118 LdtBaseAddress   : Ptr64 Void
      +0x120 LdtProcessLock   : _KGUARDED_MUTEX
         +0x000 Count            : Int4B
         +0x008 Owner            : Ptr64 _KTHREAD
         +0x010 Contention       : Uint4B
         +0x018 Gate             : _KGATE
         +0x030 KernelApcDisable : Int2B
         +0x032 SpecialApcDisable : Int2B
         +0x030 CombinedApcDisable : Uint4B
      +0x158 LdtFreeSelectorHint : Uint2B
      +0x15a LdtTableLength   : Uint2B
   +0x160 ProcessLock      : _EX_PUSH_LOCK
      +0x000 Locked           : Pos 0, 1 Bit
      +0x000 Waiting          : Pos 1, 1 Bit
      +0x000 Waking           : Pos 2, 1 Bit
      +0x000 MultipleShared   : Pos 3, 1 Bit
      +0x000 Shared           : Pos 4, 60 Bits
      +0x000 Value            : Uint8B
      +0x000 Ptr              : Ptr64 Void
   +0x168 CreateTime       : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x170 ExitTime         : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x178 RundownProtect   : _EX_RUNDOWN_REF
      +0x000 Count            : Uint8B
      +0x000 Ptr              : Ptr64 Void
   +0x180 UniqueProcessId  : Ptr64 Void
   +0x188 ActiveProcessLinks : _LIST_ENTRY
      +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x008 Blink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
   +0x198 ProcessQuotaUsage : [2] Uint8B
   +0x1a8 ProcessQuotaPeak : [2] Uint8B
   +0x1b8 CommitCharge     : Uint8B
   +0x1c0 QuotaBlock       : Ptr64 _EPROCESS_QUOTA_BLOCK
   +0x1c8 CpuQuotaBlock    : Ptr64 _PS_CPU_QUOTA_BLOCK
      +0x000 ListEntry        : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x010 SessionId        : Uint4B
      +0x014 CpuShareWeight   : Uint4B
      +0x018 CapturedWeightData : _PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA
         +0x000 CapturedCpuShareWeight : Uint4B
         +0x004 CapturedTotalWeight : Uint4B
         +0x000 CombinedData     : Int8B
      +0x020 DuplicateInputMarker : Pos 0, 1 Bit
      +0x020 Reserved         : Pos 1, 31 Bits
      +0x020 MiscFlags        : Int4B
      +0x000 BlockCurrentGenerationLock : Uint8B
      +0x008 CyclesAccumulated : Uint8B
      +0x040 CycleCredit      : Uint8B
      +0x048 BlockCurrentGeneration : Uint4B
      +0x04c CpuCyclePercent  : Uint4B
      +0x050 CyclesFinishedForCurrentGeneration : UChar
      +0x080 Cpu              : [256] _PS_PER_CPU_QUOTA_CACHE_AWARE
         +0x000 SortedListEntry  : _LIST_ENTRY
         +0x010 IdleOnlyListHead : _LIST_ENTRY
         +0x020 CycleBaseAllowance : Uint8B
         +0x028 CyclesRemaining  : Int8B
         +0x030 CurrentGeneration : Uint4B
   +0x1d0 PeakVirtualSize  : Uint8B
   +0x1d8 VirtualSize      : Uint8B
   +0x1e0 SessionProcessLinks : _LIST_ENTRY
      +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x008 Blink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
   +0x1f0 DebugPort        : Ptr64 Void
   +0x1f8 ExceptionPortData : Ptr64 Void
   +0x1f8 ExceptionPortValue : Uint8B
   +0x1f8 ExceptionPortState : Pos 0, 3 Bits
   +0x200 ObjectTable      : Ptr64 _HANDLE_TABLE
      +0x000 TableCode        : Uint8B
      +0x008 QuotaProcess     : Ptr64 _EPROCESS
         +0x000 Pcb              : _KPROCESS
         +0x160 ProcessLock      : _EX_PUSH_LOCK
         +0x168 CreateTime       : _LARGE_INTEGER
         +0x170 ExitTime         : _LARGE_INTEGER
         +0x178 RundownProtect   : _EX_RUNDOWN_REF
         +0x180 UniqueProcessId  : Ptr64 Void
         +0x188 ActiveProcessLinks : _LIST_ENTRY
         +0x198 ProcessQuotaUsage : [2] Uint8B
         +0x1a8 ProcessQuotaPeak : [2] Uint8B
         +0x1b8 CommitCharge     : Uint8B
         +0x1c0 QuotaBlock       : Ptr64 _EPROCESS_QUOTA_BLOCK
         +0x1c8 CpuQuotaBlock    : Ptr64 _PS_CPU_QUOTA_BLOCK
         +0x1d0 PeakVirtualSize  : Uint8B
         +0x1d8 VirtualSize      : Uint8B
         +0x1e0 SessionProcessLinks : _LIST_ENTRY
         +0x1f0 DebugPort        : Ptr64 Void
         +0x1f8 ExceptionPortData : Ptr64 Void
         +0x1f8 ExceptionPortValue : Uint8B
         +0x1f8 ExceptionPortState : Pos 0, 3 Bits
         +0x200 ObjectTable      : Ptr64 _HANDLE_TABLE
         +0x208 Token            : _EX_FAST_REF
         +0x210 WorkingSetPage   : Uint8B
         +0x218 AddressCreationLock : _EX_PUSH_LOCK
         +0x220 RotateInProgress : Ptr64 _ETHREAD
         +0x228 ForkInProgress   : Ptr64 _ETHREAD
         +0x230 HardwareTrigger  : Uint8B
         +0x238 PhysicalVadRoot  : Ptr64 _MM_AVL_TABLE
         +0x240 CloneRoot        : Ptr64 Void
         +0x248 NumberOfPrivatePages : Uint8B
         +0x250 NumberOfLockedPages : Uint8B
         +0x258 Win32Process     : Ptr64 Void
         +0x260 Job              : Ptr64 _EJOB
         +0x268 SectionObject    : Ptr64 Void
         +0x270 SectionBaseAddress : Ptr64 Void
         +0x278 Cookie           : Uint4B
         +0x27c UmsScheduledThreads : Uint4B
         +0x280 WorkingSetWatch  : Ptr64 _PAGEFAULT_HISTORY
         +0x288 Win32WindowStation : Ptr64 Void
         +0x290 InheritedFromUniqueProcessId : Ptr64 Void
         +0x298 LdtInformation   : Ptr64 Void
         +0x2a0 Spare            : Ptr64 Void
         +0x2a8 ConsoleHostProcess : Uint8B
         +0x2b0 DeviceMap        : Ptr64 Void
         +0x2b8 EtwDataSource    : Ptr64 Void
         +0x2c0 FreeTebHint      : Ptr64 Void
         +0x2c8 FreeUmsTebHint   : Ptr64 Void
         +0x2d0 PageDirectoryPte : _HARDWARE_PTE
         +0x2d0 Filler           : Uint8B
         +0x2d8 Session          : Ptr64 Void
         +0x2e0 ImageFileName    : [15] UChar
         +0x2ef PriorityClass    : UChar
         +0x2f0 JobLinks         : _LIST_ENTRY
         +0x300 LockedPagesList  : Ptr64 Void
         +0x308 ThreadListHead   : _LIST_ENTRY
         +0x318 SecurityPort     : Ptr64 Void
         +0x320 Wow64Process     : Ptr64 Void
         +0x328 ActiveThreads    : Uint4B
         +0x32c ImagePathHash    : Uint4B
         +0x330 DefaultHardErrorProcessing : Uint4B
         +0x334 LastThreadExitStatus : Int4B
         +0x338 Peb              : Ptr64 _PEB
         +0x340 PrefetchTrace    : _EX_FAST_REF
         +0x348 ReadOperationCount : _LARGE_INTEGER
         +0x350 WriteOperationCount : _LARGE_INTEGER
         +0x358 OtherOperationCount : _LARGE_INTEGER
         +0x360 ReadTransferCount : _LARGE_INTEGER
         +0x368 WriteTransferCount : _LARGE_INTEGER
         +0x370 OtherTransferCount : _LARGE_INTEGER
         +0x378 CommitChargeLimit : Uint8B
         +0x380 CommitChargePeak : Uint8B
         +0x388 AweInfo          : Ptr64 Void
         +0x390 SeAuditProcessCreationInfo : _SE_AUDIT_PROCESS_CREATION_INFO
         +0x398 Vm               : _MMSUPPORT
         +0x420 MmProcessLinks   : _LIST_ENTRY
         +0x430 HighestUserAddress : Ptr64 Void
         +0x438 ModifiedPageCount : Uint4B
         +0x43c Flags2           : Uint4B
         +0x43c JobNotReallyActive : Pos 0, 1 Bit
         +0x43c AccountingFolded : Pos 1, 1 Bit
         +0x43c NewProcessReported : Pos 2, 1 Bit
         +0x43c ExitProcessReported : Pos 3, 1 Bit
         +0x43c ReportCommitChanges : Pos 4, 1 Bit
         +0x43c LastReportMemory : Pos 5, 1 Bit
         +0x43c ReportPhysicalPageChanges : Pos 6, 1 Bit
         +0x43c HandleTableRundown : Pos 7, 1 Bit
         +0x43c NeedsHandleRundown : Pos 8, 1 Bit
         +0x43c RefTraceEnabled  : Pos 9, 1 Bit
         +0x43c NumaAware        : Pos 10, 1 Bit
         +0x43c ProtectedProcess : Pos 11, 1 Bit
         +0x43c DefaultPagePriority : Pos 12, 3 Bits
         +0x43c PrimaryTokenFrozen : Pos 15, 1 Bit
         +0x43c ProcessVerifierTarget : Pos 16, 1 Bit
         +0x43c StackRandomizationDisabled : Pos 17, 1 Bit
         +0x43c AffinityPermanent : Pos 18, 1 Bit
         +0x43c AffinityUpdateEnable : Pos 19, 1 Bit
         +0x43c PropagateNode    : Pos 20, 1 Bit
         +0x43c ExplicitAffinity : Pos 21, 1 Bit
         +0x440 Flags            : Uint4B
         +0x440 CreateReported   : Pos 0, 1 Bit
         +0x440 NoDebugInherit   : Pos 1, 1 Bit
         +0x440 ProcessExiting   : Pos 2, 1 Bit
         +0x440 ProcessDelete    : Pos 3, 1 Bit
         +0x440 Wow64SplitPages  : Pos 4, 1 Bit
         +0x440 VmDeleted        : Pos 5, 1 Bit
         +0x440 OutswapEnabled   : Pos 6, 1 Bit
         +0x440 Outswapped       : Pos 7, 1 Bit
         +0x440 ForkFailed       : Pos 8, 1 Bit
         +0x440 Wow64VaSpace4Gb  : Pos 9, 1 Bit
         +0x440 AddressSpaceInitialized : Pos 10, 2 Bits
         +0x440 SetTimerResolution : Pos 12, 1 Bit
         +0x440 BreakOnTermination : Pos 13, 1 Bit
         +0x440 DeprioritizeViews : Pos 14, 1 Bit
         +0x440 WriteWatch       : Pos 15, 1 Bit
         +0x440 ProcessInSession : Pos 16, 1 Bit
         +0x440 OverrideAddressSpace : Pos 17, 1 Bit
         +0x440 HasAddressSpace  : Pos 18, 1 Bit
         +0x440 LaunchPrefetched : Pos 19, 1 Bit
         +0x440 InjectInpageErrors : Pos 20, 1 Bit
         +0x440 VmTopDown        : Pos 21, 1 Bit
         +0x440 ImageNotifyDone  : Pos 22, 1 Bit
         +0x440 PdeUpdateNeeded  : Pos 23, 1 Bit
         +0x440 VdmAllowed       : Pos 24, 1 Bit
         +0x440 CrossSessionCreate : Pos 25, 1 Bit
         +0x440 ProcessInserted  : Pos 26, 1 Bit
         +0x440 DefaultIoPriority : Pos 27, 3 Bits
         +0x440 ProcessSelfDelete : Pos 30, 1 Bit
         +0x440 SetTimerResolutionLink : Pos 31, 1 Bit
         +0x444 ExitStatus       : Int4B
         +0x448 VadRoot          : _MM_AVL_TABLE
         +0x488 AlpcContext      : _ALPC_PROCESS_CONTEXT
         +0x4a8 TimerResolutionLink : _LIST_ENTRY
         +0x4b8 RequestedTimerResolution : Uint4B
         +0x4bc ActiveThreadsHighWatermark : Uint4B
         +0x4c0 SmallestTimerResolution : Uint4B
         +0x4c8 TimerResolutionStackRecord : Ptr64 _PO_DIAG_STACK_RECORD
      +0x010 UniqueProcessId  : Ptr64 Void
      +0x018 HandleLock       : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 60 Bits
         +0x000 Value            : Uint8B
         +0x000 Ptr              : Ptr64 Void
      +0x020 HandleTableList  : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x030 HandleContentionEvent : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 60 Bits
         +0x000 Value            : Uint8B
         +0x000 Ptr              : Ptr64 Void
      +0x038 DebugInfo        : Ptr64 _HANDLE_TRACE_DEBUG_INFO
         +0x000 RefCount         : Int4B
         +0x004 TableSize        : Uint4B
         +0x008 BitMaskFlags     : Uint4B
         +0x010 CloseCompactionLock : _FAST_MUTEX
         +0x048 CurrentStackIndex : Uint4B
         +0x050 TraceDb          : [1] _HANDLE_TRACE_DB_ENTRY
      +0x040 ExtraInfoPages   : Int4B
      +0x044 Flags            : Uint4B
      +0x044 StrictFIFO       : Pos 0, 1 Bit
      +0x048 FirstFreeHandle  : Uint4B
      +0x050 LastFreeHandleEntry : Ptr64 _HANDLE_TABLE_ENTRY
         +0x000 Object           : Ptr64 Void
         +0x000 ObAttributes     : Uint4B
         +0x000 InfoTable        : Ptr64 _HANDLE_TABLE_ENTRY_INFO
         +0x000 Value            : Uint8B
         +0x008 GrantedAccess    : Uint4B
         +0x008 GrantedAccessIndex : Uint2B
         +0x00a CreatorBackTraceIndex : Uint2B
         +0x008 NextFreeTableEntry : Uint4B
      +0x058 HandleCount      : Uint4B
      +0x05c NextHandleNeedingPool : Uint4B
      +0x060 HandleCountHighWatermark : Uint4B
   +0x208 Token            : _EX_FAST_REF
      +0x000 Object           : Ptr64 Void
      +0x000 RefCnt           : Pos 0, 4 Bits
      +0x000 Value            : Uint8B
   +0x210 WorkingSetPage   : Uint8B
   +0x218 AddressCreationLock : _EX_PUSH_LOCK
      +0x000 Locked           : Pos 0, 1 Bit
      +0x000 Waiting          : Pos 1, 1 Bit
      +0x000 Waking           : Pos 2, 1 Bit
      +0x000 MultipleShared   : Pos 3, 1 Bit
      +0x000 Shared           : Pos 4, 60 Bits
      +0x000 Value            : Uint8B
      +0x000 Ptr              : Ptr64 Void
   +0x220 RotateInProgress : Ptr64 _ETHREAD
      +0x000 Tcb              : _KTHREAD
         +0x000 Header           : _DISPATCHER_HEADER
         +0x018 CycleTime        : Uint8B
         +0x020 QuantumTarget    : Uint8B
         +0x028 InitialStack     : Ptr64 Void
         +0x030 StackLimit       : Ptr64 Void
         +0x038 KernelStack      : Ptr64 Void
         +0x040 ThreadLock       : Uint8B
         +0x048 WaitRegister     : _KWAIT_STATUS_REGISTER
         +0x049 Running          : UChar
         +0x04a Alerted          : [2] UChar
         +0x04c KernelStackResident : Pos 0, 1 Bit
         +0x04c ReadyTransition  : Pos 1, 1 Bit
         +0x04c ProcessReadyQueue : Pos 2, 1 Bit
         +0x04c WaitNext         : Pos 3, 1 Bit
         +0x04c SystemAffinityActive : Pos 4, 1 Bit
         +0x04c Alertable        : Pos 5, 1 Bit
         +0x04c GdiFlushActive   : Pos 6, 1 Bit
         +0x04c UserStackWalkActive : Pos 7, 1 Bit
         +0x04c ApcInterruptRequest : Pos 8, 1 Bit
         +0x04c ForceDeferSchedule : Pos 9, 1 Bit
         +0x04c QuantumEndMigrate : Pos 10, 1 Bit
         +0x04c UmsDirectedSwitchEnable : Pos 11, 1 Bit
         +0x04c TimerActive      : Pos 12, 1 Bit
         +0x04c SystemThread     : Pos 13, 1 Bit
         +0x04c Reserved         : Pos 14, 18 Bits
         +0x04c MiscFlags        : Int4B
         +0x050 ApcState         : _KAPC_STATE
         +0x050 ApcStateFill     : [43] UChar
         +0x07b Priority         : Char
         +0x07c NextProcessor    : Uint4B
         +0x080 DeferredProcessor : Uint4B
         +0x088 ApcQueueLock     : Uint8B
         +0x090 WaitStatus       : Int8B
         +0x098 WaitBlockList    : Ptr64 _KWAIT_BLOCK
         +0x0a0 WaitListEntry    : _LIST_ENTRY
         +0x0a0 SwapListEntry    : _SINGLE_LIST_ENTRY
         +0x0b0 Queue            : Ptr64 _KQUEUE
         +0x0b8 Teb              : Ptr64 Void
         +0x0c0 Timer            : _KTIMER
         +0x100 AutoAlignment    : Pos 0, 1 Bit
         +0x100 DisableBoost     : Pos 1, 1 Bit
         +0x100 EtwStackTraceApc1Inserted : Pos 2, 1 Bit
         +0x100 EtwStackTraceApc2Inserted : Pos 3, 1 Bit
         +0x100 CalloutActive    : Pos 4, 1 Bit
         +0x100 ApcQueueable     : Pos 5, 1 Bit
         +0x100 EnableStackSwap  : Pos 6, 1 Bit
         +0x100 GuiThread        : Pos 7, 1 Bit
         +0x100 UmsPerformingSyscall : Pos 8, 1 Bit
         +0x100 VdmSafe          : Pos 9, 1 Bit
         +0x100 UmsDispatched    : Pos 10, 1 Bit
         +0x100 ReservedFlags    : Pos 11, 21 Bits
         +0x100 ThreadFlags      : Int4B
         +0x104 Spare0           : Uint4B
         +0x108 WaitBlock        : [4] _KWAIT_BLOCK
         +0x108 WaitBlockFill4   : [44] UChar
         +0x134 ContextSwitches  : Uint4B
         +0x108 WaitBlockFill5   : [92] UChar
         +0x164 State            : UChar
         +0x165 NpxState         : Char
         +0x166 WaitIrql         : UChar
         +0x167 WaitMode         : Char
         +0x108 WaitBlockFill6   : [140] UChar
         +0x194 WaitTime         : Uint4B
         +0x108 WaitBlockFill7   : [168] UChar
         +0x1b0 TebMappedLowVa   : Ptr64 Void
         +0x1b8 Ucb              : Ptr64 _UMS_CONTROL_BLOCK
         +0x108 WaitBlockFill8   : [188] UChar
         +0x1c4 KernelApcDisable : Int2B
         +0x1c6 SpecialApcDisable : Int2B
         +0x1c4 CombinedApcDisable : Uint4B
         +0x1c8 QueueListEntry   : _LIST_ENTRY
         +0x1d8 TrapFrame        : Ptr64 _KTRAP_FRAME
         +0x1e0 FirstArgument    : Ptr64 Void
         +0x1e8 CallbackStack    : Ptr64 Void
         +0x1e8 CallbackDepth    : Uint8B
         +0x1f0 ApcStateIndex    : UChar
         +0x1f1 BasePriority     : Char
         +0x1f2 PriorityDecrement : Char
         +0x1f2 ForegroundBoost  : Pos 0, 4 Bits
         +0x1f2 UnusualBoost     : Pos 4, 4 Bits
         +0x1f3 Preempted        : UChar
         +0x1f4 AdjustReason     : UChar
         +0x1f5 AdjustIncrement  : Char
         +0x1f6 PreviousMode     : Char
         +0x1f7 Saturation       : Char
         +0x1f8 SystemCallNumber : Uint4B
         +0x1fc FreezeCount      : Uint4B
         +0x200 UserAffinity     : _GROUP_AFFINITY
         +0x210 Process          : Ptr64 _KPROCESS
         +0x218 Affinity         : _GROUP_AFFINITY
         +0x228 IdealProcessor   : Uint4B
         +0x22c UserIdealProcessor : Uint4B
         +0x230 ApcStatePointer  : [2] Ptr64 _KAPC_STATE
         +0x240 SavedApcState    : _KAPC_STATE
         +0x240 SavedApcStateFill : [43] UChar
         +0x26b WaitReason       : UChar
         +0x26c SuspendCount     : Char
         +0x26d Spare1           : Char
         +0x26e CodePatchInProgress : UChar
         +0x270 Win32Thread      : Ptr64 Void
         +0x278 StackBase        : Ptr64 Void
         +0x280 SuspendApc       : _KAPC
         +0x280 SuspendApcFill0  : [1] UChar
         +0x281 ResourceIndex    : UChar
         +0x280 SuspendApcFill1  : [3] UChar
         +0x283 QuantumReset     : UChar
         +0x280 SuspendApcFill2  : [4] UChar
         +0x284 KernelTime       : Uint4B
         +0x280 SuspendApcFill3  : [64] UChar
         +0x2c0 WaitPrcb         : Ptr64 _KPRCB
         +0x280 SuspendApcFill4  : [72] UChar
         +0x2c8 LegoData         : Ptr64 Void
         +0x280 SuspendApcFill5  : [83] UChar
         +0x2d3 LargeStack       : UChar
         +0x2d4 UserTime         : Uint4B
         +0x2d8 SuspendSemaphore : _KSEMAPHORE
         +0x2d8 SuspendSemaphorefill : [28] UChar
         +0x2f4 SListFaultCount  : Uint4B
         +0x2f8 ThreadListEntry  : _LIST_ENTRY
         +0x308 MutantListHead   : _LIST_ENTRY
         +0x318 SListFaultAddress : Ptr64 Void
         +0x320 ReadOperationCount : Int8B
         +0x328 WriteOperationCount : Int8B
         +0x330 OtherOperationCount : Int8B
         +0x338 ReadTransferCount : Int8B
         +0x340 WriteTransferCount : Int8B
         +0x348 OtherTransferCount : Int8B
         +0x350 ThreadCounters   : Ptr64 _KTHREAD_COUNTERS
         +0x358 XStateSave       : Ptr64 _XSTATE_SAVE
      +0x360 CreateTime       : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x368 ExitTime         : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x368 KeyedWaitChain   : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x378 ExitStatus       : Int4B
      +0x380 PostBlockList    : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x380 ForwardLinkShadow : Ptr64 Void
      +0x388 StartAddress     : Ptr64 Void
      +0x390 TerminationPort  : Ptr64 _TERMINATION_PORT
         +0x000 Next             : Ptr64 _TERMINATION_PORT
         +0x008 Port             : Ptr64 Void
      +0x390 ReaperLink       : Ptr64 _ETHREAD
         +0x000 Tcb              : _KTHREAD
         +0x360 CreateTime       : _LARGE_INTEGER
         +0x368 ExitTime         : _LARGE_INTEGER
         +0x368 KeyedWaitChain   : _LIST_ENTRY
         +0x378 ExitStatus       : Int4B
         +0x380 PostBlockList    : _LIST_ENTRY
         +0x380 ForwardLinkShadow : Ptr64 Void
         +0x388 StartAddress     : Ptr64 Void
         +0x390 TerminationPort  : Ptr64 _TERMINATION_PORT
         +0x390 ReaperLink       : Ptr64 _ETHREAD
         +0x390 KeyedWaitValue   : Ptr64 Void
         +0x398 ActiveTimerListLock : Uint8B
         +0x3a0 ActiveTimerListHead : _LIST_ENTRY
         +0x3b0 Cid              : _CLIENT_ID
         +0x3c0 KeyedWaitSemaphore : _KSEMAPHORE
         +0x3c0 AlpcWaitSemaphore : _KSEMAPHORE
         +0x3e0 ClientSecurity   : _PS_CLIENT_SECURITY_CONTEXT
         +0x3e8 IrpList          : _LIST_ENTRY
         +0x3f8 TopLevelIrp      : Uint8B
         +0x400 DeviceToVerify   : Ptr64 _DEVICE_OBJECT
         +0x408 CpuQuotaApc      : Ptr64 _PSP_CPU_QUOTA_APC
         +0x410 Win32StartAddress : Ptr64 Void
         +0x418 LegacyPowerObject : Ptr64 Void
         +0x420 ThreadListEntry  : _LIST_ENTRY
         +0x430 RundownProtect   : _EX_RUNDOWN_REF
         +0x438 ThreadLock       : _EX_PUSH_LOCK
         +0x440 ReadClusterSize  : Uint4B
         +0x444 MmLockOrdering   : Int4B
         +0x448 CrossThreadFlags : Uint4B
         +0x448 Terminated       : Pos 0, 1 Bit
         +0x448 ThreadInserted   : Pos 1, 1 Bit
         +0x448 HideFromDebugger : Pos 2, 1 Bit
         +0x448 ActiveImpersonationInfo : Pos 3, 1 Bit
         +0x448 Reserved         : Pos 4, 1 Bit
         +0x448 HardErrorsAreDisabled : Pos 5, 1 Bit
         +0x448 BreakOnTermination : Pos 6, 1 Bit
         +0x448 SkipCreationMsg  : Pos 7, 1 Bit
         +0x448 SkipTerminationMsg : Pos 8, 1 Bit
         +0x448 CopyTokenOnOpen  : Pos 9, 1 Bit
         +0x448 ThreadIoPriority : Pos 10, 3 Bits
         +0x448 ThreadPagePriority : Pos 13, 3 Bits
         +0x448 RundownFail      : Pos 16, 1 Bit
         +0x448 NeedsWorkingSetAging : Pos 17, 1 Bit
         +0x44c SameThreadPassiveFlags : Uint4B
         +0x44c ActiveExWorker   : Pos 0, 1 Bit
         +0x44c ExWorkerCanWaitUser : Pos 1, 1 Bit
         +0x44c MemoryMaker      : Pos 2, 1 Bit
         +0x44c ClonedThread     : Pos 3, 1 Bit
         +0x44c KeyedEventInUse  : Pos 4, 1 Bit
         +0x44c RateApcState     : Pos 5, 2 Bits
         +0x44c SelfTerminate    : Pos 7, 1 Bit
         +0x450 SameThreadApcFlags : Uint4B
         +0x450 Spare            : Pos 0, 1 Bit
         +0x450 StartAddressInvalid : Pos 1, 1 Bit
         +0x450 EtwPageFaultCalloutActive : Pos 2, 1 Bit
         +0x450 OwnsProcessWorkingSetExclusive : Pos 3, 1 Bit
         +0x450 OwnsProcessWorkingSetShared : Pos 4, 1 Bit
         +0x450 OwnsSystemCacheWorkingSetExclusive : Pos 5, 1 Bit
         +0x450 OwnsSystemCacheWorkingSetShared : Pos 6, 1 Bit
         +0x450 OwnsSessionWorkingSetExclusive : Pos 7, 1 Bit
         +0x451 OwnsSessionWorkingSetShared : Pos 0, 1 Bit
         +0x451 OwnsProcessAddressSpaceExclusive : Pos 1, 1 Bit
         +0x451 OwnsProcessAddressSpaceShared : Pos 2, 1 Bit
         +0x451 SuppressSymbolLoad : Pos 3, 1 Bit
         +0x451 Prefetching      : Pos 4, 1 Bit
         +0x451 OwnsDynamicMemoryShared : Pos 5, 1 Bit
         +0x451 OwnsChangeControlAreaExclusive : Pos 6, 1 Bit
         +0x451 OwnsChangeControlAreaShared : Pos 7, 1 Bit
         +0x452 OwnsPagedPoolWorkingSetExclusive : Pos 0, 1 Bit
         +0x452 OwnsPagedPoolWorkingSetShared : Pos 1, 1 Bit
         +0x452 OwnsSystemPtesWorkingSetExclusive : Pos 2, 1 Bit
         +0x452 OwnsSystemPtesWorkingSetShared : Pos 3, 1 Bit
         +0x452 TrimTrigger      : Pos 4, 2 Bits
         +0x452 Spare1           : Pos 6, 2 Bits
         +0x453 PriorityRegionActive : UChar
         +0x454 CacheManagerActive : UChar
         +0x455 DisablePageFaultClustering : UChar
         +0x456 ActiveFaultCount : UChar
         +0x457 LockOrderState   : UChar
         +0x458 AlpcMessageId    : Uint8B
         +0x460 AlpcMessage      : Ptr64 Void
         +0x460 AlpcReceiveAttributeSet : Uint4B
         +0x468 AlpcWaitListEntry : _LIST_ENTRY
         +0x478 CacheManagerCount : Uint4B
         +0x47c IoBoostCount     : Uint4B
         +0x480 IrpListLock      : Uint8B
         +0x488 ReservedForSynchTracking : Ptr64 Void
         +0x490 CmCallbackListHead : _SINGLE_LIST_ENTRY
      +0x390 KeyedWaitValue   : Ptr64 Void
      +0x398 ActiveTimerListLock : Uint8B
      +0x3a0 ActiveTimerListHead : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x3b0 Cid              : _CLIENT_ID
         +0x000 UniqueProcess    : Ptr64 Void
         +0x008 UniqueThread     : Ptr64 Void
      +0x3c0 KeyedWaitSemaphore : _KSEMAPHORE
         +0x000 Header           : _DISPATCHER_HEADER
         +0x018 Limit            : Int4B
      +0x3c0 AlpcWaitSemaphore : _KSEMAPHORE
         +0x000 Header           : _DISPATCHER_HEADER
         +0x018 Limit            : Int4B
      +0x3e0 ClientSecurity   : _PS_CLIENT_SECURITY_CONTEXT
         +0x000 ImpersonationData : Uint8B
         +0x000 ImpersonationToken : Ptr64 Void
         +0x000 ImpersonationLevel : Pos 0, 2 Bits
         +0x000 EffectiveOnly    : Pos 2, 1 Bit
      +0x3e8 IrpList          : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x3f8 TopLevelIrp      : Uint8B
      +0x400 DeviceToVerify   : Ptr64 _DEVICE_OBJECT
         +0x000 Type             : Int2B
         +0x002 Size             : Uint2B
         +0x004 ReferenceCount   : Int4B
         +0x008 DriverObject     : Ptr64 _DRIVER_OBJECT
         +0x010 NextDevice       : Ptr64 _DEVICE_OBJECT
         +0x018 AttachedDevice   : Ptr64 _DEVICE_OBJECT
         +0x020 CurrentIrp       : Ptr64 _IRP
         +0x028 Timer            : Ptr64 _IO_TIMER
         +0x030 Flags            : Uint4B
         +0x034 Characteristics  : Uint4B
         +0x038 Vpb              : Ptr64 _VPB
         +0x040 DeviceExtension  : Ptr64 Void
         +0x048 DeviceType       : Uint4B
         +0x04c StackSize        : Char
         +0x050 Queue            : <unnamed-tag>
         +0x098 AlignmentRequirement : Uint4B
         +0x0a0 DeviceQueue      : _KDEVICE_QUEUE
         +0x0c8 Dpc              : _KDPC
         +0x108 ActiveThreadCount : Uint4B
         +0x110 SecurityDescriptor : Ptr64 Void
         +0x118 DeviceLock       : _KEVENT
         +0x130 SectorSize       : Uint2B
         +0x132 Spare1           : Uint2B
         +0x138 DeviceObjectExtension : Ptr64 _DEVOBJ_EXTENSION
         +0x140 Reserved         : Ptr64 Void
      +0x408 CpuQuotaApc      : Ptr64 _PSP_CPU_QUOTA_APC
      +0x410 Win32StartAddress : Ptr64 Void
      +0x418 LegacyPowerObject : Ptr64 Void
      +0x420 ThreadListEntry  : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x430 RundownProtect   : _EX_RUNDOWN_REF
         +0x000 Count            : Uint8B
         +0x000 Ptr              : Ptr64 Void
      +0x438 ThreadLock       : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 60 Bits
         +0x000 Value            : Uint8B
         +0x000 Ptr              : Ptr64 Void
      +0x440 ReadClusterSize  : Uint4B
      +0x444 MmLockOrdering   : Int4B
      +0x448 CrossThreadFlags : Uint4B
      +0x448 Terminated       : Pos 0, 1 Bit
      +0x448 ThreadInserted   : Pos 1, 1 Bit
      +0x448 HideFromDebugger : Pos 2, 1 Bit
      +0x448 ActiveImpersonationInfo : Pos 3, 1 Bit
      +0x448 Reserved         : Pos 4, 1 Bit
      +0x448 HardErrorsAreDisabled : Pos 5, 1 Bit
      +0x448 BreakOnTermination : Pos 6, 1 Bit
      +0x448 SkipCreationMsg  : Pos 7, 1 Bit
      +0x448 SkipTerminationMsg : Pos 8, 1 Bit
      +0x448 CopyTokenOnOpen  : Pos 9, 1 Bit
      +0x448 ThreadIoPriority : Pos 10, 3 Bits
      +0x448 ThreadPagePriority : Pos 13, 3 Bits
      +0x448 RundownFail      : Pos 16, 1 Bit
      +0x448 NeedsWorkingSetAging : Pos 17, 1 Bit
      +0x44c SameThreadPassiveFlags : Uint4B
      +0x44c ActiveExWorker   : Pos 0, 1 Bit
      +0x44c ExWorkerCanWaitUser : Pos 1, 1 Bit
      +0x44c MemoryMaker      : Pos 2, 1 Bit
      +0x44c ClonedThread     : Pos 3, 1 Bit
      +0x44c KeyedEventInUse  : Pos 4, 1 Bit
      +0x44c RateApcState     : Pos 5, 2 Bits
      +0x44c SelfTerminate    : Pos 7, 1 Bit
      +0x450 SameThreadApcFlags : Uint4B
      +0x450 Spare            : Pos 0, 1 Bit
      +0x450 StartAddressInvalid : Pos 1, 1 Bit
      +0x450 EtwPageFaultCalloutActive : Pos 2, 1 Bit
      +0x450 OwnsProcessWorkingSetExclusive : Pos 3, 1 Bit
      +0x450 OwnsProcessWorkingSetShared : Pos 4, 1 Bit
      +0x450 OwnsSystemCacheWorkingSetExclusive : Pos 5, 1 Bit
      +0x450 OwnsSystemCacheWorkingSetShared : Pos 6, 1 Bit
      +0x450 OwnsSessionWorkingSetExclusive : Pos 7, 1 Bit
      +0x451 OwnsSessionWorkingSetShared : Pos 0, 1 Bit
      +0x451 OwnsProcessAddressSpaceExclusive : Pos 1, 1 Bit
      +0x451 OwnsProcessAddressSpaceShared : Pos 2, 1 Bit
      +0x451 SuppressSymbolLoad : Pos 3, 1 Bit
      +0x451 Prefetching      : Pos 4, 1 Bit
      +0x451 OwnsDynamicMemoryShared : Pos 5, 1 Bit
      +0x451 OwnsChangeControlAreaExclusive : Pos 6, 1 Bit
      +0x451 OwnsChangeControlAreaShared : Pos 7, 1 Bit
      +0x452 OwnsPagedPoolWorkingSetExclusive : Pos 0, 1 Bit
      +0x452 OwnsPagedPoolWorkingSetShared : Pos 1, 1 Bit
      +0x452 OwnsSystemPtesWorkingSetExclusive : Pos 2, 1 Bit
      +0x452 OwnsSystemPtesWorkingSetShared : Pos 3, 1 Bit
      +0x452 TrimTrigger      : Pos 4, 2 Bits
      +0x452 Spare1           : Pos 6, 2 Bits
      +0x453 PriorityRegionActive : UChar
      +0x454 CacheManagerActive : UChar
      +0x455 DisablePageFaultClustering : UChar
      +0x456 ActiveFaultCount : UChar
      +0x457 LockOrderState   : UChar
      +0x458 AlpcMessageId    : Uint8B
      +0x460 AlpcMessage      : Ptr64 Void
      +0x460 AlpcReceiveAttributeSet : Uint4B
      +0x468 AlpcWaitListEntry : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x478 CacheManagerCount : Uint4B
      +0x47c IoBoostCount     : Uint4B
      +0x480 IrpListLock      : Uint8B
      +0x488 ReservedForSynchTracking : Ptr64 Void
      +0x490 CmCallbackListHead : _SINGLE_LIST_ENTRY
         +0x000 Next             : Ptr64 _SINGLE_LIST_ENTRY
   +0x228 ForkInProgress   : Ptr64 _ETHREAD
      +0x000 Tcb              : _KTHREAD
         +0x000 Header           : _DISPATCHER_HEADER
         +0x018 CycleTime        : Uint8B
         +0x020 QuantumTarget    : Uint8B
         +0x028 InitialStack     : Ptr64 Void
         +0x030 StackLimit       : Ptr64 Void
         +0x038 KernelStack      : Ptr64 Void
         +0x040 ThreadLock       : Uint8B
         +0x048 WaitRegister     : _KWAIT_STATUS_REGISTER
         +0x049 Running          : UChar
         +0x04a Alerted          : [2] UChar
         +0x04c KernelStackResident : Pos 0, 1 Bit
         +0x04c ReadyTransition  : Pos 1, 1 Bit
         +0x04c ProcessReadyQueue : Pos 2, 1 Bit
         +0x04c WaitNext         : Pos 3, 1 Bit
         +0x04c SystemAffinityActive : Pos 4, 1 Bit
         +0x04c Alertable        : Pos 5, 1 Bit
         +0x04c GdiFlushActive   : Pos 6, 1 Bit
         +0x04c UserStackWalkActive : Pos 7, 1 Bit
         +0x04c ApcInterruptRequest : Pos 8, 1 Bit
         +0x04c ForceDeferSchedule : Pos 9, 1 Bit
         +0x04c QuantumEndMigrate : Pos 10, 1 Bit
         +0x04c UmsDirectedSwitchEnable : Pos 11, 1 Bit
         +0x04c TimerActive      : Pos 12, 1 Bit
         +0x04c SystemThread     : Pos 13, 1 Bit
         +0x04c Reserved         : Pos 14, 18 Bits
         +0x04c MiscFlags        : Int4B
         +0x050 ApcState         : _KAPC_STATE
         +0x050 ApcStateFill     : [43] UChar
         +0x07b Priority         : Char
         +0x07c NextProcessor    : Uint4B
         +0x080 DeferredProcessor : Uint4B
         +0x088 ApcQueueLock     : Uint8B
         +0x090 WaitStatus       : Int8B
         +0x098 WaitBlockList    : Ptr64 _KWAIT_BLOCK
         +0x0a0 WaitListEntry    : _LIST_ENTRY
         +0x0a0 SwapListEntry    : _SINGLE_LIST_ENTRY
         +0x0b0 Queue            : Ptr64 _KQUEUE
         +0x0b8 Teb              : Ptr64 Void
         +0x0c0 Timer            : _KTIMER
         +0x100 AutoAlignment    : Pos 0, 1 Bit
         +0x100 DisableBoost     : Pos 1, 1 Bit
         +0x100 EtwStackTraceApc1Inserted : Pos 2, 1 Bit
         +0x100 EtwStackTraceApc2Inserted : Pos 3, 1 Bit
         +0x100 CalloutActive    : Pos 4, 1 Bit
         +0x100 ApcQueueable     : Pos 5, 1 Bit
         +0x100 EnableStackSwap  : Pos 6, 1 Bit
         +0x100 GuiThread        : Pos 7, 1 Bit
         +0x100 UmsPerformingSyscall : Pos 8, 1 Bit
         +0x100 VdmSafe          : Pos 9, 1 Bit
         +0x100 UmsDispatched    : Pos 10, 1 Bit
         +0x100 ReservedFlags    : Pos 11, 21 Bits
         +0x100 ThreadFlags      : Int4B
         +0x104 Spare0           : Uint4B
         +0x108 WaitBlock        : [4] _KWAIT_BLOCK
         +0x108 WaitBlockFill4   : [44] UChar
         +0x134 ContextSwitches  : Uint4B
         +0x108 WaitBlockFill5   : [92] UChar
         +0x164 State            : UChar
         +0x165 NpxState         : Char
         +0x166 WaitIrql         : UChar
         +0x167 WaitMode         : Char
         +0x108 WaitBlockFill6   : [140] UChar
         +0x194 WaitTime         : Uint4B
         +0x108 WaitBlockFill7   : [168] UChar
         +0x1b0 TebMappedLowVa   : Ptr64 Void
         +0x1b8 Ucb              : Ptr64 _UMS_CONTROL_BLOCK
         +0x108 WaitBlockFill8   : [188] UChar
         +0x1c4 KernelApcDisable : Int2B
         +0x1c6 SpecialApcDisable : Int2B
         +0x1c4 CombinedApcDisable : Uint4B
         +0x1c8 QueueListEntry   : _LIST_ENTRY
         +0x1d8 TrapFrame        : Ptr64 _KTRAP_FRAME
         +0x1e0 FirstArgument    : Ptr64 Void
         +0x1e8 CallbackStack    : Ptr64 Void
         +0x1e8 CallbackDepth    : Uint8B
         +0x1f0 ApcStateIndex    : UChar
         +0x1f1 BasePriority     : Char
         +0x1f2 PriorityDecrement : Char
         +0x1f2 ForegroundBoost  : Pos 0, 4 Bits
         +0x1f2 UnusualBoost     : Pos 4, 4 Bits
         +0x1f3 Preempted        : UChar
         +0x1f4 AdjustReason     : UChar
         +0x1f5 AdjustIncrement  : Char
         +0x1f6 PreviousMode     : Char
         +0x1f7 Saturation       : Char
         +0x1f8 SystemCallNumber : Uint4B
         +0x1fc FreezeCount      : Uint4B
         +0x200 UserAffinity     : _GROUP_AFFINITY
         +0x210 Process          : Ptr64 _KPROCESS
         +0x218 Affinity         : _GROUP_AFFINITY
         +0x228 IdealProcessor   : Uint4B
         +0x22c UserIdealProcessor : Uint4B
         +0x230 ApcStatePointer  : [2] Ptr64 _KAPC_STATE
         +0x240 SavedApcState    : _KAPC_STATE
         +0x240 SavedApcStateFill : [43] UChar
         +0x26b WaitReason       : UChar
         +0x26c SuspendCount     : Char
         +0x26d Spare1           : Char
         +0x26e CodePatchInProgress : UChar
         +0x270 Win32Thread      : Ptr64 Void
         +0x278 StackBase        : Ptr64 Void
         +0x280 SuspendApc       : _KAPC
         +0x280 SuspendApcFill0  : [1] UChar
         +0x281 ResourceIndex    : UChar
         +0x280 SuspendApcFill1  : [3] UChar
         +0x283 QuantumReset     : UChar
         +0x280 SuspendApcFill2  : [4] UChar
         +0x284 KernelTime       : Uint4B
         +0x280 SuspendApcFill3  : [64] UChar
         +0x2c0 WaitPrcb         : Ptr64 _KPRCB
         +0x280 SuspendApcFill4  : [72] UChar
         +0x2c8 LegoData         : Ptr64 Void
         +0x280 SuspendApcFill5  : [83] UChar
         +0x2d3 LargeStack       : UChar
         +0x2d4 UserTime         : Uint4B
         +0x2d8 SuspendSemaphore : _KSEMAPHORE
         +0x2d8 SuspendSemaphorefill : [28] UChar
         +0x2f4 SListFaultCount  : Uint4B
         +0x2f8 ThreadListEntry  : _LIST_ENTRY
         +0x308 MutantListHead   : _LIST_ENTRY
         +0x318 SListFaultAddress : Ptr64 Void
         +0x320 ReadOperationCount : Int8B
         +0x328 WriteOperationCount : Int8B
         +0x330 OtherOperationCount : Int8B
         +0x338 ReadTransferCount : Int8B
         +0x340 WriteTransferCount : Int8B
         +0x348 OtherTransferCount : Int8B
         +0x350 ThreadCounters   : Ptr64 _KTHREAD_COUNTERS
         +0x358 XStateSave       : Ptr64 _XSTATE_SAVE
      +0x360 CreateTime       : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x368 ExitTime         : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x368 KeyedWaitChain   : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x378 ExitStatus       : Int4B
      +0x380 PostBlockList    : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x380 ForwardLinkShadow : Ptr64 Void
      +0x388 StartAddress     : Ptr64 Void
      +0x390 TerminationPort  : Ptr64 _TERMINATION_PORT
         +0x000 Next             : Ptr64 _TERMINATION_PORT
         +0x008 Port             : Ptr64 Void
      +0x390 ReaperLink       : Ptr64 _ETHREAD
         +0x000 Tcb              : _KTHREAD
         +0x360 CreateTime       : _LARGE_INTEGER
         +0x368 ExitTime         : _LARGE_INTEGER
         +0x368 KeyedWaitChain   : _LIST_ENTRY
         +0x378 ExitStatus       : Int4B
         +0x380 PostBlockList    : _LIST_ENTRY
         +0x380 ForwardLinkShadow : Ptr64 Void
         +0x388 StartAddress     : Ptr64 Void
         +0x390 TerminationPort  : Ptr64 _TERMINATION_PORT
         +0x390 ReaperLink       : Ptr64 _ETHREAD
         +0x390 KeyedWaitValue   : Ptr64 Void
         +0x398 ActiveTimerListLock : Uint8B
         +0x3a0 ActiveTimerListHead : _LIST_ENTRY
         +0x3b0 Cid              : _CLIENT_ID
         +0x3c0 KeyedWaitSemaphore : _KSEMAPHORE
         +0x3c0 AlpcWaitSemaphore : _KSEMAPHORE
         +0x3e0 ClientSecurity   : _PS_CLIENT_SECURITY_CONTEXT
         +0x3e8 IrpList          : _LIST_ENTRY
         +0x3f8 TopLevelIrp      : Uint8B
         +0x400 DeviceToVerify   : Ptr64 _DEVICE_OBJECT
         +0x408 CpuQuotaApc      : Ptr64 _PSP_CPU_QUOTA_APC
         +0x410 Win32StartAddress : Ptr64 Void
         +0x418 LegacyPowerObject : Ptr64 Void
         +0x420 ThreadListEntry  : _LIST_ENTRY
         +0x430 RundownProtect   : _EX_RUNDOWN_REF
         +0x438 ThreadLock       : _EX_PUSH_LOCK
         +0x440 ReadClusterSize  : Uint4B
         +0x444 MmLockOrdering   : Int4B
         +0x448 CrossThreadFlags : Uint4B
         +0x448 Terminated       : Pos 0, 1 Bit
         +0x448 ThreadInserted   : Pos 1, 1 Bit
         +0x448 HideFromDebugger : Pos 2, 1 Bit
         +0x448 ActiveImpersonationInfo : Pos 3, 1 Bit
         +0x448 Reserved         : Pos 4, 1 Bit
         +0x448 HardErrorsAreDisabled : Pos 5, 1 Bit
         +0x448 BreakOnTermination : Pos 6, 1 Bit
         +0x448 SkipCreationMsg  : Pos 7, 1 Bit
         +0x448 SkipTerminationMsg : Pos 8, 1 Bit
         +0x448 CopyTokenOnOpen  : Pos 9, 1 Bit
         +0x448 ThreadIoPriority : Pos 10, 3 Bits
         +0x448 ThreadPagePriority : Pos 13, 3 Bits
         +0x448 RundownFail      : Pos 16, 1 Bit
         +0x448 NeedsWorkingSetAging : Pos 17, 1 Bit
         +0x44c SameThreadPassiveFlags : Uint4B
         +0x44c ActiveExWorker   : Pos 0, 1 Bit
         +0x44c ExWorkerCanWaitUser : Pos 1, 1 Bit
         +0x44c MemoryMaker      : Pos 2, 1 Bit
         +0x44c ClonedThread     : Pos 3, 1 Bit
         +0x44c KeyedEventInUse  : Pos 4, 1 Bit
         +0x44c RateApcState     : Pos 5, 2 Bits
         +0x44c SelfTerminate    : Pos 7, 1 Bit
         +0x450 SameThreadApcFlags : Uint4B
         +0x450 Spare            : Pos 0, 1 Bit
         +0x450 StartAddressInvalid : Pos 1, 1 Bit
         +0x450 EtwPageFaultCalloutActive : Pos 2, 1 Bit
         +0x450 OwnsProcessWorkingSetExclusive : Pos 3, 1 Bit
         +0x450 OwnsProcessWorkingSetShared : Pos 4, 1 Bit
         +0x450 OwnsSystemCacheWorkingSetExclusive : Pos 5, 1 Bit
         +0x450 OwnsSystemCacheWorkingSetShared : Pos 6, 1 Bit
         +0x450 OwnsSessionWorkingSetExclusive : Pos 7, 1 Bit
         +0x451 OwnsSessionWorkingSetShared : Pos 0, 1 Bit
         +0x451 OwnsProcessAddressSpaceExclusive : Pos 1, 1 Bit
         +0x451 OwnsProcessAddressSpaceShared : Pos 2, 1 Bit
         +0x451 SuppressSymbolLoad : Pos 3, 1 Bit
         +0x451 Prefetching      : Pos 4, 1 Bit
         +0x451 OwnsDynamicMemoryShared : Pos 5, 1 Bit
         +0x451 OwnsChangeControlAreaExclusive : Pos 6, 1 Bit
         +0x451 OwnsChangeControlAreaShared : Pos 7, 1 Bit
         +0x452 OwnsPagedPoolWorkingSetExclusive : Pos 0, 1 Bit
         +0x452 OwnsPagedPoolWorkingSetShared : Pos 1, 1 Bit
         +0x452 OwnsSystemPtesWorkingSetExclusive : Pos 2, 1 Bit
         +0x452 OwnsSystemPtesWorkingSetShared : Pos 3, 1 Bit
         +0x452 TrimTrigger      : Pos 4, 2 Bits
         +0x452 Spare1           : Pos 6, 2 Bits
         +0x453 PriorityRegionActive : UChar
         +0x454 CacheManagerActive : UChar
         +0x455 DisablePageFaultClustering : UChar
         +0x456 ActiveFaultCount : UChar
         +0x457 LockOrderState   : UChar
         +0x458 AlpcMessageId    : Uint8B
         +0x460 AlpcMessage      : Ptr64 Void
         +0x460 AlpcReceiveAttributeSet : Uint4B
         +0x468 AlpcWaitListEntry : _LIST_ENTRY
         +0x478 CacheManagerCount : Uint4B
         +0x47c IoBoostCount     : Uint4B
         +0x480 IrpListLock      : Uint8B
         +0x488 ReservedForSynchTracking : Ptr64 Void
         +0x490 CmCallbackListHead : _SINGLE_LIST_ENTRY
      +0x390 KeyedWaitValue   : Ptr64 Void
      +0x398 ActiveTimerListLock : Uint8B
      +0x3a0 ActiveTimerListHead : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x3b0 Cid              : _CLIENT_ID
         +0x000 UniqueProcess    : Ptr64 Void
         +0x008 UniqueThread     : Ptr64 Void
      +0x3c0 KeyedWaitSemaphore : _KSEMAPHORE
         +0x000 Header           : _DISPATCHER_HEADER
         +0x018 Limit            : Int4B
      +0x3c0 AlpcWaitSemaphore : _KSEMAPHORE
         +0x000 Header           : _DISPATCHER_HEADER
         +0x018 Limit            : Int4B
      +0x3e0 ClientSecurity   : _PS_CLIENT_SECURITY_CONTEXT
         +0x000 ImpersonationData : Uint8B
         +0x000 ImpersonationToken : Ptr64 Void
         +0x000 ImpersonationLevel : Pos 0, 2 Bits
         +0x000 EffectiveOnly    : Pos 2, 1 Bit
      +0x3e8 IrpList          : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x3f8 TopLevelIrp      : Uint8B
      +0x400 DeviceToVerify   : Ptr64 _DEVICE_OBJECT
         +0x000 Type             : Int2B
         +0x002 Size             : Uint2B
         +0x004 ReferenceCount   : Int4B
         +0x008 DriverObject     : Ptr64 _DRIVER_OBJECT
         +0x010 NextDevice       : Ptr64 _DEVICE_OBJECT
         +0x018 AttachedDevice   : Ptr64 _DEVICE_OBJECT
         +0x020 CurrentIrp       : Ptr64 _IRP
         +0x028 Timer            : Ptr64 _IO_TIMER
         +0x030 Flags            : Uint4B
         +0x034 Characteristics  : Uint4B
         +0x038 Vpb              : Ptr64 _VPB
         +0x040 DeviceExtension  : Ptr64 Void
         +0x048 DeviceType       : Uint4B
         +0x04c StackSize        : Char
         +0x050 Queue            : <unnamed-tag>
         +0x098 AlignmentRequirement : Uint4B
         +0x0a0 DeviceQueue      : _KDEVICE_QUEUE
         +0x0c8 Dpc              : _KDPC
         +0x108 ActiveThreadCount : Uint4B
         +0x110 SecurityDescriptor : Ptr64 Void
         +0x118 DeviceLock       : _KEVENT
         +0x130 SectorSize       : Uint2B
         +0x132 Spare1           : Uint2B
         +0x138 DeviceObjectExtension : Ptr64 _DEVOBJ_EXTENSION
         +0x140 Reserved         : Ptr64 Void
      +0x408 CpuQuotaApc      : Ptr64 _PSP_CPU_QUOTA_APC
      +0x410 Win32StartAddress : Ptr64 Void
      +0x418 LegacyPowerObject : Ptr64 Void
      +0x420 ThreadListEntry  : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x430 RundownProtect   : _EX_RUNDOWN_REF
         +0x000 Count            : Uint8B
         +0x000 Ptr              : Ptr64 Void
      +0x438 ThreadLock       : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 60 Bits
         +0x000 Value            : Uint8B
         +0x000 Ptr              : Ptr64 Void
      +0x440 ReadClusterSize  : Uint4B
      +0x444 MmLockOrdering   : Int4B
      +0x448 CrossThreadFlags : Uint4B
      +0x448 Terminated       : Pos 0, 1 Bit
      +0x448 ThreadInserted   : Pos 1, 1 Bit
      +0x448 HideFromDebugger : Pos 2, 1 Bit
      +0x448 ActiveImpersonationInfo : Pos 3, 1 Bit
      +0x448 Reserved         : Pos 4, 1 Bit
      +0x448 HardErrorsAreDisabled : Pos 5, 1 Bit
      +0x448 BreakOnTermination : Pos 6, 1 Bit
      +0x448 SkipCreationMsg  : Pos 7, 1 Bit
      +0x448 SkipTerminationMsg : Pos 8, 1 Bit
      +0x448 CopyTokenOnOpen  : Pos 9, 1 Bit
      +0x448 ThreadIoPriority : Pos 10, 3 Bits
      +0x448 ThreadPagePriority : Pos 13, 3 Bits
      +0x448 RundownFail      : Pos 16, 1 Bit
      +0x448 NeedsWorkingSetAging : Pos 17, 1 Bit
      +0x44c SameThreadPassiveFlags : Uint4B
      +0x44c ActiveExWorker   : Pos 0, 1 Bit
      +0x44c ExWorkerCanWaitUser : Pos 1, 1 Bit
      +0x44c MemoryMaker      : Pos 2, 1 Bit
      +0x44c ClonedThread     : Pos 3, 1 Bit
      +0x44c KeyedEventInUse  : Pos 4, 1 Bit
      +0x44c RateApcState     : Pos 5, 2 Bits
      +0x44c SelfTerminate    : Pos 7, 1 Bit
      +0x450 SameThreadApcFlags : Uint4B
      +0x450 Spare            : Pos 0, 1 Bit
      +0x450 StartAddressInvalid : Pos 1, 1 Bit
      +0x450 EtwPageFaultCalloutActive : Pos 2, 1 Bit
      +0x450 OwnsProcessWorkingSetExclusive : Pos 3, 1 Bit
      +0x450 OwnsProcessWorkingSetShared : Pos 4, 1 Bit
      +0x450 OwnsSystemCacheWorkingSetExclusive : Pos 5, 1 Bit
      +0x450 OwnsSystemCacheWorkingSetShared : Pos 6, 1 Bit
      +0x450 OwnsSessionWorkingSetExclusive : Pos 7, 1 Bit
      +0x451 OwnsSessionWorkingSetShared : Pos 0, 1 Bit
      +0x451 OwnsProcessAddressSpaceExclusive : Pos 1, 1 Bit
      +0x451 OwnsProcessAddressSpaceShared : Pos 2, 1 Bit
      +0x451 SuppressSymbolLoad : Pos 3, 1 Bit
      +0x451 Prefetching      : Pos 4, 1 Bit
      +0x451 OwnsDynamicMemoryShared : Pos 5, 1 Bit
      +0x451 OwnsChangeControlAreaExclusive : Pos 6, 1 Bit
      +0x451 OwnsChangeControlAreaShared : Pos 7, 1 Bit
      +0x452 OwnsPagedPoolWorkingSetExclusive : Pos 0, 1 Bit
      +0x452 OwnsPagedPoolWorkingSetShared : Pos 1, 1 Bit
      +0x452 OwnsSystemPtesWorkingSetExclusive : Pos 2, 1 Bit
      +0x452 OwnsSystemPtesWorkingSetShared : Pos 3, 1 Bit
      +0x452 TrimTrigger      : Pos 4, 2 Bits
      +0x452 Spare1           : Pos 6, 2 Bits
      +0x453 PriorityRegionActive : UChar
      +0x454 CacheManagerActive : UChar
      +0x455 DisablePageFaultClustering : UChar
      +0x456 ActiveFaultCount : UChar
      +0x457 LockOrderState   : UChar
      +0x458 AlpcMessageId    : Uint8B
      +0x460 AlpcMessage      : Ptr64 Void
      +0x460 AlpcReceiveAttributeSet : Uint4B
      +0x468 AlpcWaitListEntry : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x478 CacheManagerCount : Uint4B
      +0x47c IoBoostCount     : Uint4B
      +0x480 IrpListLock      : Uint8B
      +0x488 ReservedForSynchTracking : Ptr64 Void
      +0x490 CmCallbackListHead : _SINGLE_LIST_ENTRY
         +0x000 Next             : Ptr64 _SINGLE_LIST_ENTRY
   +0x230 HardwareTrigger  : Uint8B
   +0x238 PhysicalVadRoot  : Ptr64 _MM_AVL_TABLE
      +0x000 BalancedRoot     : _MMADDRESS_NODE
         +0x000 u1               : <unnamed-tag>
         +0x008 LeftChild        : Ptr64 _MMADDRESS_NODE
         +0x010 RightChild       : Ptr64 _MMADDRESS_NODE
         +0x018 StartingVpn      : Uint8B
         +0x020 EndingVpn        : Uint8B
      +0x028 DepthOfTree      : Pos 0, 5 Bits
      +0x028 Unused           : Pos 5, 3 Bits
      +0x028 NumberGenericTableElements : Pos 8, 56 Bits
      +0x030 NodeHint         : Ptr64 Void
      +0x038 NodeFreeHint     : Ptr64 Void
   +0x240 CloneRoot        : Ptr64 Void
   +0x248 NumberOfPrivatePages : Uint8B
   +0x250 NumberOfLockedPages : Uint8B
   +0x258 Win32Process     : Ptr64 Void
   +0x260 Job              : Ptr64 _EJOB
      +0x000 Event            : _KEVENT
         +0x000 Header           : _DISPATCHER_HEADER
      +0x018 JobLinks         : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x028 ProcessListHead  : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x038 JobLock          : _ERESOURCE
         +0x000 SystemResourcesList : _LIST_ENTRY
         +0x010 OwnerTable       : Ptr64 _OWNER_ENTRY
         +0x018 ActiveCount      : Int2B
         +0x01a Flag             : Uint2B
         +0x020 SharedWaiters    : Ptr64 _KSEMAPHORE
         +0x028 ExclusiveWaiters : Ptr64 _KEVENT
         +0x030 OwnerEntry       : _OWNER_ENTRY
         +0x040 ActiveEntries    : Uint4B
         +0x044 ContentionCount  : Uint4B
         +0x048 NumberOfSharedWaiters : Uint4B
         +0x04c NumberOfExclusiveWaiters : Uint4B
         +0x050 Reserved2        : Ptr64 Void
         +0x058 Address          : Ptr64 Void
         +0x058 CreatorBackTraceIndex : Uint8B
         +0x060 SpinLock         : Uint8B
      +0x0a0 TotalUserTime    : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x0a8 TotalKernelTime  : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x0b0 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x0b8 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x0c0 TotalPageFaultCount : Uint4B
      +0x0c4 TotalProcesses   : Uint4B
      +0x0c8 ActiveProcesses  : Uint4B
      +0x0cc TotalTerminatedProcesses : Uint4B
      +0x0d0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x0d8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x0e0 MinimumWorkingSetSize : Uint8B
      +0x0e8 MaximumWorkingSetSize : Uint8B
      +0x0f0 LimitFlags       : Uint4B
      +0x0f4 ActiveProcessLimit : Uint4B
      +0x0f8 Affinity         : _KAFFINITY_EX
         +0x000 Count            : Uint2B
         +0x002 Size             : Uint2B
         +0x004 Reserved         : Uint4B
         +0x008 Bitmap           : [4] Uint8B
      +0x120 PriorityClass    : UChar
      +0x128 AccessState      : Ptr64 _JOB_ACCESS_STATE
      +0x130 UIRestrictionsClass : Uint4B
      +0x134 EndOfJobTimeAction : Uint4B
      +0x138 CompletionPort   : Ptr64 Void
      +0x140 CompletionKey    : Ptr64 Void
      +0x148 SessionId        : Uint4B
      +0x14c SchedulingClass  : Uint4B
      +0x150 ReadOperationCount : Uint8B
      +0x158 WriteOperationCount : Uint8B
      +0x160 OtherOperationCount : Uint8B
      +0x168 ReadTransferCount : Uint8B
      +0x170 WriteTransferCount : Uint8B
      +0x178 OtherTransferCount : Uint8B
      +0x180 ProcessMemoryLimit : Uint8B
      +0x188 JobMemoryLimit   : Uint8B
      +0x190 PeakProcessMemoryUsed : Uint8B
      +0x198 PeakJobMemoryUsed : Uint8B
      +0x1a0 CurrentJobMemoryUsed : Uint8B
      +0x1a8 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 60 Bits
         +0x000 Value            : Uint8B
         +0x000 Ptr              : Ptr64 Void
      +0x1b0 JobSetLinks      : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x1c0 MemberLevel      : Uint4B
      +0x1c4 JobFlags         : Uint4B
   +0x268 SectionObject    : Ptr64 Void
   +0x270 SectionBaseAddress : Ptr64 Void
   +0x278 Cookie           : Uint4B
   +0x27c UmsScheduledThreads : Uint4B
   +0x280 WorkingSetWatch  : Ptr64 _PAGEFAULT_HISTORY
   +0x288 Win32WindowStation : Ptr64 Void
   +0x290 InheritedFromUniqueProcessId : Ptr64 Void
   +0x298 LdtInformation   : Ptr64 Void
   +0x2a0 Spare            : Ptr64 Void
   +0x2a8 ConsoleHostProcess : Uint8B
   +0x2b0 DeviceMap        : Ptr64 Void
   +0x2b8 EtwDataSource    : Ptr64 Void
   +0x2c0 FreeTebHint      : Ptr64 Void
   +0x2c8 FreeUmsTebHint   : Ptr64 Void
   +0x2d0 PageDirectoryPte : _HARDWARE_PTE
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
      +0x000 PageFrameNumber  : Pos 12, 36 Bits
      +0x000 reserved1        : Pos 48, 4 Bits
      +0x000 SoftwareWsIndex  : Pos 52, 11 Bits
      +0x000 NoExecute        : Pos 63, 1 Bit
   +0x2d0 Filler           : Uint8B
   +0x2d8 Session          : Ptr64 Void
   +0x2e0 ImageFileName    : [15] UChar
   +0x2ef PriorityClass    : UChar
   +0x2f0 JobLinks         : _LIST_ENTRY
      +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x008 Blink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
   +0x300 LockedPagesList  : Ptr64 Void
   +0x308 ThreadListHead   : _LIST_ENTRY
      +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x008 Blink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
   +0x318 SecurityPort     : Ptr64 Void
   +0x320 Wow64Process     : Ptr64 Void
   +0x328 ActiveThreads    : Uint4B
   +0x32c ImagePathHash    : Uint4B
   +0x330 DefaultHardErrorProcessing : Uint4B
   +0x334 LastThreadExitStatus : Int4B
   +0x338 Peb              : Ptr64 _PEB
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
      +0x008 Mutant           : Ptr64 Void
      +0x010 ImageBaseAddress : Ptr64 Void
      +0x018 Ldr              : Ptr64 _PEB_LDR_DATA
         +0x000 Length           : Uint4B
         +0x004 Initialized      : UChar
         +0x008 SsHandle         : Ptr64 Void
         +0x010 InLoadOrderModuleList : _LIST_ENTRY
         +0x020 InMemoryOrderModuleList : _LIST_ENTRY
         +0x030 InInitializationOrderModuleList : _LIST_ENTRY
         +0x040 EntryInProgress  : Ptr64 Void
         +0x048 ShutdownInProgress : UChar
         +0x050 ShutdownThreadId : Ptr64 Void
      +0x020 ProcessParameters : Ptr64 _RTL_USER_PROCESS_PARAMETERS
         +0x000 MaximumLength    : Uint4B
         +0x004 Length           : Uint4B
         +0x008 Flags            : Uint4B
         +0x00c DebugFlags       : Uint4B
         +0x010 ConsoleHandle    : Ptr64 Void
         +0x018 ConsoleFlags     : Uint4B
         +0x020 StandardInput    : Ptr64 Void
         +0x028 StandardOutput   : Ptr64 Void
         +0x030 StandardError    : Ptr64 Void
         +0x038 CurrentDirectory : _CURDIR
         +0x050 DllPath          : _UNICODE_STRING
         +0x060 ImagePathName    : _UNICODE_STRING
         +0x070 CommandLine      : _UNICODE_STRING
         +0x080 Environment      : Ptr64 Void
         +0x088 StartingX        : Uint4B
         +0x08c StartingY        : Uint4B
         +0x090 CountX           : Uint4B
         +0x094 CountY           : Uint4B
         +0x098 CountCharsX      : Uint4B
         +0x09c CountCharsY      : Uint4B
         +0x0a0 FillAttribute    : Uint4B
         +0x0a4 WindowFlags      : Uint4B
         +0x0a8 ShowWindowFlags  : Uint4B
         +0x0b0 WindowTitle      : _UNICODE_STRING
         +0x0c0 DesktopInfo      : _UNICODE_STRING
         +0x0d0 ShellInfo        : _UNICODE_STRING
         +0x0e0 RuntimeData      : _UNICODE_STRING
         +0x0f0 CurrentDirectores : [32] _RTL_DRIVE_LETTER_CURDIR
         +0x3f0 EnvironmentSize  : Uint8B
         +0x3f8 EnvironmentVersion : Uint8B
      +0x028 SubSystemData    : Ptr64 Void
      +0x030 ProcessHeap      : Ptr64 Void
      +0x038 FastPebLock      : Ptr64 _RTL_CRITICAL_SECTION
         +0x000 DebugInfo        : Ptr64 _RTL_CRITICAL_SECTION_DEBUG
         +0x008 LockCount        : Int4B
         +0x00c RecursionCount   : Int4B
         +0x010 OwningThread     : Ptr64 Void
         +0x018 LockSemaphore    : Ptr64 Void
         +0x020 SpinCount        : Uint8B
      +0x040 AtlThunkSListPtr : Ptr64 Void
      +0x048 IFEOKey          : Ptr64 Void
      +0x050 CrossProcessFlags : Uint4B
      +0x050 ProcessInJob     : Pos 0, 1 Bit
      +0x050 ProcessInitializing : Pos 1, 1 Bit
      +0x050 ProcessUsingVEH  : Pos 2, 1 Bit
      +0x050 ProcessUsingVCH  : Pos 3, 1 Bit
      +0x050 ProcessUsingFTH  : Pos 4, 1 Bit
      +0x050 ReservedBits0    : Pos 5, 27 Bits
      +0x058 KernelCallbackTable : Ptr64 Void
      +0x058 UserSharedInfoPtr : Ptr64 Void
      +0x060 SystemReserved   : [1] Uint4B
      +0x064 AtlThunkSListPtr32 : Uint4B
      +0x068 ApiSetMap        : Ptr64 Void
      +0x070 TlsExpansionCounter : Uint4B
      +0x078 TlsBitmap        : Ptr64 Void
      +0x080 TlsBitmapBits    : [2] Uint4B
      +0x088 ReadOnlySharedMemoryBase : Ptr64 Void
      +0x090 HotpatchInformation : Ptr64 Void
      +0x098 ReadOnlyStaticServerData : Ptr64 Ptr64 Void
      +0x0a0 AnsiCodePageData : Ptr64 Void
      +0x0a8 OemCodePageData  : Ptr64 Void
      +0x0b0 UnicodeCaseTableData : Ptr64 Void
      +0x0b8 NumberOfProcessors : Uint4B
      +0x0bc NtGlobalFlag     : Uint4B
      +0x0c0 CriticalSectionTimeout : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x0c8 HeapSegmentReserve : Uint8B
      +0x0d0 HeapSegmentCommit : Uint8B
      +0x0d8 HeapDeCommitTotalFreeThreshold : Uint8B
      +0x0e0 HeapDeCommitFreeBlockThreshold : Uint8B
      +0x0e8 NumberOfHeaps    : Uint4B
      +0x0ec MaximumNumberOfHeaps : Uint4B
      +0x0f0 ProcessHeaps     : Ptr64 Ptr64 Void
      +0x0f8 GdiSharedHandleTable : Ptr64 Void
      +0x100 ProcessStarterHelper : Ptr64 Void
      +0x108 GdiDCAttributeList : Uint4B
      +0x110 LoaderLock       : Ptr64 _RTL_CRITICAL_SECTION
         +0x000 DebugInfo        : Ptr64 _RTL_CRITICAL_SECTION_DEBUG
         +0x008 LockCount        : Int4B
         +0x00c RecursionCount   : Int4B
         +0x010 OwningThread     : Ptr64 Void
         +0x018 LockSemaphore    : Ptr64 Void
         +0x020 SpinCount        : Uint8B
      +0x118 OSMajorVersion   : Uint4B
      +0x11c OSMinorVersion   : Uint4B
      +0x120 OSBuildNumber    : Uint2B
      +0x122 OSCSDVersion     : Uint2B
      +0x124 OSPlatformId     : Uint4B
      +0x128 ImageSubsystem   : Uint4B
      +0x12c ImageSubsystemMajorVersion : Uint4B
      +0x130 ImageSubsystemMinorVersion : Uint4B
      +0x138 ActiveProcessAffinityMask : Uint8B
      +0x140 GdiHandleBuffer  : [60] Uint4B
      +0x230 PostProcessInitRoutine : Ptr64        void 
      +0x238 TlsExpansionBitmap : Ptr64 Void
      +0x240 TlsExpansionBitmapBits : [32] Uint4B
      +0x2c0 SessionId        : Uint4B
      +0x2c8 AppCompatFlags   : _ULARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Uint4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Uint8B
      +0x2d0 AppCompatFlagsUser : _ULARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Uint4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Uint8B
      +0x2d8 pShimData        : Ptr64 Void
      +0x2e0 AppCompatInfo    : Ptr64 Void
      +0x2e8 CSDVersion       : _UNICODE_STRING
         +0x000 Length           : Uint2B
         +0x002 MaximumLength    : Uint2B
         +0x008 Buffer           : Ptr64 Uint2B
      +0x2f8 ActivationContextData : Ptr64 _ACTIVATION_CONTEXT_DATA
      +0x300 ProcessAssemblyStorageMap : Ptr64 _ASSEMBLY_STORAGE_MAP
      +0x308 SystemDefaultActivationContextData : Ptr64 _ACTIVATION_CONTEXT_DATA
      +0x310 SystemAssemblyStorageMap : Ptr64 _ASSEMBLY_STORAGE_MAP
      +0x318 MinimumStackCommit : Uint8B
      +0x320 FlsCallback      : Ptr64 _FLS_CALLBACK_INFO
      +0x328 FlsListHead      : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x338 FlsBitmap        : Ptr64 Void
      +0x340 FlsBitmapBits    : [4] Uint4B
      +0x350 FlsHighIndex     : Uint4B
      +0x358 WerRegistrationData : Ptr64 Void
      +0x360 WerShipAssertPtr : Ptr64 Void
      +0x368 pContextData     : Ptr64 Void
      +0x370 pImageHeaderHash : Ptr64 Void
      +0x378 TracingFlags     : Uint4B
      +0x378 HeapTracingEnabled : Pos 0, 1 Bit
      +0x378 CritSecTracingEnabled : Pos 1, 1 Bit
      +0x378 SpareTracingBits : Pos 2, 30 Bits
   +0x340 PrefetchTrace    : _EX_FAST_REF
      +0x000 Object           : Ptr64 Void
      +0x000 RefCnt           : Pos 0, 4 Bits
      +0x000 Value            : Uint8B
   +0x348 ReadOperationCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x350 WriteOperationCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x358 OtherOperationCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x360 ReadTransferCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x368 WriteTransferCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x370 OtherTransferCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x378 CommitChargeLimit : Uint8B
   +0x380 CommitChargePeak : Uint8B
   +0x388 AweInfo          : Ptr64 Void
   +0x390 SeAuditProcessCreationInfo : _SE_AUDIT_PROCESS_CREATION_INFO
      +0x000 ImageFileName    : Ptr64 _OBJECT_NAME_INFORMATION
         +0x000 Name             : _UNICODE_STRING
   +0x398 Vm               : _MMSUPPORT
      +0x000 WorkingSetMutex  : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 60 Bits
         +0x000 Value            : Uint8B
         +0x000 Ptr              : Ptr64 Void
      +0x008 ExitGate         : Ptr64 _KGATE
         +0x000 Header           : _DISPATCHER_HEADER
      +0x010 AccessLog        : Ptr64 Void
      +0x018 WorkingSetExpansionLinks : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x028 AgeDistribution  : [7] Uint4B
      +0x044 MinimumWorkingSetSize : Uint4B
      +0x048 WorkingSetSize   : Uint4B
      +0x04c WorkingSetPrivateSize : Uint4B
      +0x050 MaximumWorkingSetSize : Uint4B
      +0x054 ChargedWslePages : Uint4B
      +0x058 ActualWslePages  : Uint4B
      +0x05c WorkingSetSizeOverhead : Uint4B
      +0x060 PeakWorkingSetSize : Uint4B
      +0x064 HardFaultCount   : Uint4B
      +0x068 VmWorkingSetList : Ptr64 _MMWSL
         +0x000 FirstFree        : Uint4B
         +0x004 FirstDynamic     : Uint4B
         +0x008 LastEntry        : Uint4B
         +0x00c NextSlot         : Uint4B
         +0x010 Wsle             : Ptr64 _MMWSLE
         +0x018 LowestPagableAddress : Ptr64 Void
         +0x020 LastInitializedWsle : Uint4B
         +0x024 NextAgingSlot    : Uint4B
         +0x028 NumberOfCommittedPageTables : Uint4B
         +0x02c VadBitMapHint    : Uint4B
         +0x030 NonDirectCount   : Uint4B
         +0x034 LastVadBit       : Uint4B
         +0x038 MaximumLastVadBit : Uint4B
         +0x03c LastAllocationSizeHint : Uint4B
         +0x040 LastAllocationSize : Uint4B
         +0x048 NonDirectHash    : Ptr64 _MMWSLE_NONDIRECT_HASH
         +0x050 HashTableStart   : Ptr64 _MMWSLE_HASH
         +0x058 HighestPermittedHashAddress : Ptr64 _MMWSLE_HASH
         +0x060 MaximumUserPageTablePages : Uint4B
         +0x064 MaximumUserPageDirectoryPages : Uint4B
         +0x068 CommittedPageTables : Ptr64 Uint4B
         +0x070 NumberOfCommittedPageDirectories : Uint4B
         +0x078 CommittedPageDirectories : [128] Uint8B
         +0x478 NumberOfCommittedPageDirectoryParents : Uint4B
         +0x480 CommittedPageDirectoryParents : [1] Uint8B
      +0x070 NextPageColor    : Uint2B
      +0x072 LastTrimStamp    : Uint2B
      +0x074 PageFaultCount   : Uint4B
      +0x078 RepurposeCount   : Uint4B
      +0x07c Spare            : [2] Uint4B
      +0x084 Flags            : _MMSUPPORT_FLAGS
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
   +0x420 MmProcessLinks   : _LIST_ENTRY
      +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x008 Blink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
   +0x430 HighestUserAddress : Ptr64 Void
   +0x438 ModifiedPageCount : Uint4B
   +0x43c Flags2           : Uint4B
   +0x43c JobNotReallyActive : Pos 0, 1 Bit
   +0x43c AccountingFolded : Pos 1, 1 Bit
   +0x43c NewProcessReported : Pos 2, 1 Bit
   +0x43c ExitProcessReported : Pos 3, 1 Bit
   +0x43c ReportCommitChanges : Pos 4, 1 Bit
   +0x43c LastReportMemory : Pos 5, 1 Bit
   +0x43c ReportPhysicalPageChanges : Pos 6, 1 Bit
   +0x43c HandleTableRundown : Pos 7, 1 Bit
   +0x43c NeedsHandleRundown : Pos 8, 1 Bit
   +0x43c RefTraceEnabled  : Pos 9, 1 Bit
   +0x43c NumaAware        : Pos 10, 1 Bit
   +0x43c ProtectedProcess : Pos 11, 1 Bit
   +0x43c DefaultPagePriority : Pos 12, 3 Bits
   +0x43c PrimaryTokenFrozen : Pos 15, 1 Bit
   +0x43c ProcessVerifierTarget : Pos 16, 1 Bit
   +0x43c StackRandomizationDisabled : Pos 17, 1 Bit
   +0x43c AffinityPermanent : Pos 18, 1 Bit
   +0x43c AffinityUpdateEnable : Pos 19, 1 Bit
   +0x43c PropagateNode    : Pos 20, 1 Bit
   +0x43c ExplicitAffinity : Pos 21, 1 Bit
   +0x440 Flags            : Uint4B
   +0x440 CreateReported   : Pos 0, 1 Bit
   +0x440 NoDebugInherit   : Pos 1, 1 Bit
   +0x440 ProcessExiting   : Pos 2, 1 Bit
   +0x440 ProcessDelete    : Pos 3, 1 Bit
   +0x440 Wow64SplitPages  : Pos 4, 1 Bit
   +0x440 VmDeleted        : Pos 5, 1 Bit
   +0x440 OutswapEnabled   : Pos 6, 1 Bit
   +0x440 Outswapped       : Pos 7, 1 Bit
   +0x440 ForkFailed       : Pos 8, 1 Bit
   +0x440 Wow64VaSpace4Gb  : Pos 9, 1 Bit
   +0x440 AddressSpaceInitialized : Pos 10, 2 Bits
   +0x440 SetTimerResolution : Pos 12, 1 Bit
   +0x440 BreakOnTermination : Pos 13, 1 Bit
   +0x440 DeprioritizeViews : Pos 14, 1 Bit
   +0x440 WriteWatch       : Pos 15, 1 Bit
   +0x440 ProcessInSession : Pos 16, 1 Bit
   +0x440 OverrideAddressSpace : Pos 17, 1 Bit
   +0x440 HasAddressSpace  : Pos 18, 1 Bit
   +0x440 LaunchPrefetched : Pos 19, 1 Bit
   +0x440 InjectInpageErrors : Pos 20, 1 Bit
   +0x440 VmTopDown        : Pos 21, 1 Bit
   +0x440 ImageNotifyDone  : Pos 22, 1 Bit
   +0x440 PdeUpdateNeeded  : Pos 23, 1 Bit
   +0x440 VdmAllowed       : Pos 24, 1 Bit
   +0x440 CrossSessionCreate : Pos 25, 1 Bit
   +0x440 ProcessInserted  : Pos 26, 1 Bit
   +0x440 DefaultIoPriority : Pos 27, 3 Bits
   +0x440 ProcessSelfDelete : Pos 30, 1 Bit
   +0x440 SetTimerResolutionLink : Pos 31, 1 Bit
   +0x444 ExitStatus       : Int4B
   +0x448 VadRoot          : _MM_AVL_TABLE
      +0x000 BalancedRoot     : _MMADDRESS_NODE
         +0x000 u1               : <unnamed-tag>
         +0x008 LeftChild        : Ptr64 _MMADDRESS_NODE
         +0x010 RightChild       : Ptr64 _MMADDRESS_NODE
         +0x018 StartingVpn      : Uint8B
         +0x020 EndingVpn        : Uint8B
      +0x028 DepthOfTree      : Pos 0, 5 Bits
      +0x028 Unused           : Pos 5, 3 Bits
      +0x028 NumberGenericTableElements : Pos 8, 56 Bits
      +0x030 NodeHint         : Ptr64 Void
      +0x038 NodeFreeHint     : Ptr64 Void
   +0x488 AlpcContext      : _ALPC_PROCESS_CONTEXT
      +0x000 Lock             : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 60 Bits
         +0x000 Value            : Uint8B
         +0x000 Ptr              : Ptr64 Void
      +0x008 ViewListHead     : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x018 PagedPoolQuotaCache : Uint8B
   +0x4a8 TimerResolutionLink : _LIST_ENTRY
      +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x008 Blink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
   +0x4b8 RequestedTimerResolution : Uint4B
   +0x4bc ActiveThreadsHighWatermark : Uint4B
   +0x4c0 SmallestTimerResolution : Uint4B
   +0x4c8 TimerResolutionStackRecord : Ptr64 _PO_DIAG_STACK_RECORD
      +0x000 StackDepth       : Uint4B
      +0x008 Stack            : [1] Ptr64 Void
```