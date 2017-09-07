```
kd> dt nt!_EPROCESS -r
   +0x000 Pcb              : _KPROCESS
      +0x000 Header           : _DISPATCHER_HEADER
         +0x000 Lock             : Int4B
         +0x000 LockNV           : Int4B
         +0x000 Type             : UChar
         +0x001 Signalling       : UChar
         +0x002 Size             : UChar
         +0x003 Reserved1        : UChar
         +0x000 TimerType        : UChar
         +0x001 TimerControlFlags : UChar
         +0x001 Absolute         : Pos 0, 1 Bit
         +0x001 Wake             : Pos 1, 1 Bit
         +0x001 EncodedTolerableDelay : Pos 2, 6 Bits
         +0x002 Hand             : UChar
         +0x003 TimerMiscFlags   : UChar
         +0x003 Index            : Pos 0, 6 Bits
         +0x003 Inserted         : Pos 6, 1 Bit
         +0x003 Expired          : Pos 7, 1 Bit
         +0x000 Timer2Type       : UChar
         +0x001 Timer2Flags      : UChar
         +0x001 Timer2Inserted   : Pos 0, 1 Bit
         +0x001 Timer2Expiring   : Pos 1, 1 Bit
         +0x001 Timer2CancelPending : Pos 2, 1 Bit
         +0x001 Timer2SetPending : Pos 3, 1 Bit
         +0x001 Timer2Running    : Pos 4, 1 Bit
         +0x001 Timer2Disabled   : Pos 5, 1 Bit
         +0x001 Timer2ReservedFlags : Pos 6, 2 Bits
         +0x002 Timer2Reserved1  : UChar
         +0x003 Timer2Reserved2  : UChar
         +0x000 QueueType        : UChar
         +0x001 QueueControlFlags : UChar
         +0x001 Abandoned        : Pos 0, 1 Bit
         +0x001 DisableIncrement : Pos 1, 1 Bit
         +0x001 QueueReservedControlFlags : Pos 2, 6 Bits
         +0x002 QueueSize        : UChar
         +0x003 QueueReserved    : UChar
         +0x000 ThreadType       : UChar
         +0x001 ThreadReserved   : UChar
         +0x002 ThreadControlFlags : UChar
         +0x002 CycleProfiling   : Pos 0, 1 Bit
         +0x002 CounterProfiling : Pos 1, 1 Bit
         +0x002 GroupScheduling  : Pos 2, 1 Bit
         +0x002 AffinitySet      : Pos 3, 1 Bit
         +0x002 Tagged           : Pos 4, 1 Bit
         +0x002 EnergyProfiling  : Pos 5, 1 Bit
         +0x002 ThreadReservedControlFlags : Pos 6, 2 Bits
         +0x003 DebugActive      : UChar
         +0x003 ActiveDR7        : Pos 0, 1 Bit
         +0x003 Instrumented     : Pos 1, 1 Bit
         +0x003 Minimal          : Pos 2, 1 Bit
         +0x003 Reserved4        : Pos 3, 3 Bits
         +0x003 UmsScheduled     : Pos 6, 1 Bit
         +0x003 UmsPrimary       : Pos 7, 1 Bit
         +0x000 MutantType       : UChar
         +0x001 MutantSize       : UChar
         +0x002 DpcActive        : UChar
         +0x003 MutantReserved   : UChar
         +0x004 SignalState      : Int4B
         +0x008 WaitListHead     : _LIST_ENTRY
      +0x018 ProfileListHead  : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x028 DirectoryTableBase : Uint8B
      +0x030 ThreadListHead   : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x040 ProcessLock      : Uint4B
      +0x044 Spare0           : Uint4B
      +0x048 DeepFreezeStartTime : Uint8B
      +0x050 Affinity         : _KAFFINITY_EX
         +0x000 Count            : Uint2B
         +0x002 Size             : Uint2B
         +0x004 Reserved         : Uint4B
         +0x008 Bitmap           : [20] Uint8B
      +0x0f8 ReadyListHead    : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x108 SwapListEntry    : _SINGLE_LIST_ENTRY
         +0x000 Next             : Ptr64 _SINGLE_LIST_ENTRY
      +0x110 ActiveProcessors : _KAFFINITY_EX
         +0x000 Count            : Uint2B
         +0x002 Size             : Uint2B
         +0x004 Reserved         : Uint4B
         +0x008 Bitmap           : [20] Uint8B
      +0x1b8 AutoAlignment    : Pos 0, 1 Bit
      +0x1b8 DisableBoost     : Pos 1, 1 Bit
      +0x1b8 DisableQuantum   : Pos 2, 1 Bit
      +0x1b8 DeepFreeze       : Pos 3, 1 Bit
      +0x1b8 TimerVirtualization : Pos 4, 1 Bit
      +0x1b8 CheckStackExtents : Pos 5, 1 Bit
      +0x1b8 SpareFlags0      : Pos 6, 2 Bits
      +0x1b8 ActiveGroupsMask : Pos 8, 20 Bits
      +0x1b8 ReservedFlags    : Pos 28, 4 Bits
      +0x1b8 ProcessFlags     : Int4B
      +0x1bc BasePriority     : Char
      +0x1bd QuantumReset     : Char
      +0x1be Visited          : UChar
      +0x1bf Flags            : _KEXECUTE_OPTIONS
         +0x000 ExecuteDisable   : Pos 0, 1 Bit
         +0x000 ExecuteEnable    : Pos 1, 1 Bit
         +0x000 DisableThunkEmulation : Pos 2, 1 Bit
         +0x000 Permanent        : Pos 3, 1 Bit
         +0x000 ExecuteDispatchEnable : Pos 4, 1 Bit
         +0x000 ImageDispatchEnable : Pos 5, 1 Bit
         +0x000 DisableExceptionChainValidation : Pos 6, 1 Bit
         +0x000 Spare            : Pos 7, 1 Bit
         +0x000 ExecuteOptions   : UChar
         +0x000 ExecuteOptionsNV : UChar
      +0x1c0 ThreadSeed       : [20] Uint4B
      +0x210 IdealNode        : [20] Uint2B
      +0x238 IdealGlobalNode  : Uint2B
      +0x23a Spare1           : Uint2B
      +0x23c StackCount       : _KSTACK_COUNT
         +0x000 Value            : Int4B
         +0x000 State            : Pos 0, 3 Bits
         +0x000 StackCount       : Pos 3, 29 Bits
      +0x240 ProcessListEntry : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x250 CycleTime        : Uint8B
      +0x258 ContextSwitches  : Uint8B
      +0x260 SchedulingGroup  : Ptr64 _KSCHEDULING_GROUP
         +0x000 Policy           : _KSCHEDULING_GROUP_POLICY
         +0x008 RelativeWeight   : Uint4B
         +0x00c ChildMinRate     : Uint4B
         +0x010 ChildMinWeight   : Uint4B
         +0x014 ChildTotalWeight : Uint4B
         +0x018 QueryHistoryTimeStamp : Uint8B
         +0x020 NotificationCycles : Int8B
         +0x028 SchedulingGroupList : _LIST_ENTRY
         +0x028 Sibling          : _LIST_ENTRY
         +0x038 NotificationDpc  : Ptr64 _KDPC
         +0x040 ChildList        : _LIST_ENTRY
         +0x050 Parent           : Ptr64 _KSCHEDULING_GROUP
         +0x080 PerProcessor     : [1] _KSCB
      +0x268 FreezeCount      : Uint4B
      +0x26c KernelTime       : Uint4B
      +0x270 UserTime         : Uint4B
      +0x274 LdtFreeSelectorHint : Uint2B
      +0x276 LdtTableLength   : Uint2B
      +0x278 LdtSystemDescriptor : _KGDTENTRY64
         +0x000 LimitLow         : Uint2B
         +0x002 BaseLow          : Uint2B
         +0x004 Bytes            : <unnamed-tag>
         +0x004 Bits             : <unnamed-tag>
         +0x008 BaseUpper        : Uint4B
         +0x00c MustBeZero       : Uint4B
         +0x000 DataLow          : Int8B
         +0x008 DataHigh         : Int8B
      +0x288 LdtBaseAddress   : Ptr64 Void
      +0x290 LdtProcessLock   : _FAST_MUTEX
         +0x000 Count            : Int4B
         +0x008 Owner            : Ptr64 Void
         +0x010 Contention       : Uint4B
         +0x018 Event            : _KEVENT
         +0x030 OldIrql          : Uint4B
      +0x2c8 InstrumentationCallback : Ptr64 Void
      +0x2d0 SecurePid        : Uint8B
   +0x2d8 ProcessLock      : _EX_PUSH_LOCK
      +0x000 Locked           : Pos 0, 1 Bit
      +0x000 Waiting          : Pos 1, 1 Bit
      +0x000 Waking           : Pos 2, 1 Bit
      +0x000 MultipleShared   : Pos 3, 1 Bit
      +0x000 Shared           : Pos 4, 60 Bits
      +0x000 Value            : Uint8B
      +0x000 Ptr              : Ptr64 Void
   +0x2e0 RundownProtect   : _EX_RUNDOWN_REF
      +0x000 Count            : Uint8B
      +0x000 Ptr              : Ptr64 Void
   +0x2e8 UniqueProcessId  : Ptr64 Void
   +0x2f0 ActiveProcessLinks : _LIST_ENTRY
      +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x008 Blink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
   +0x300 Flags2           : Uint4B
   +0x300 JobNotReallyActive : Pos 0, 1 Bit
   +0x300 AccountingFolded : Pos 1, 1 Bit
   +0x300 NewProcessReported : Pos 2, 1 Bit
   +0x300 ExitProcessReported : Pos 3, 1 Bit
   +0x300 ReportCommitChanges : Pos 4, 1 Bit
   +0x300 LastReportMemory : Pos 5, 1 Bit
   +0x300 ForceWakeCharge  : Pos 6, 1 Bit
   +0x300 CrossSessionCreate : Pos 7, 1 Bit
   +0x300 NeedsHandleRundown : Pos 8, 1 Bit
   +0x300 RefTraceEnabled  : Pos 9, 1 Bit
   +0x300 DisableDynamicCode : Pos 10, 1 Bit
   +0x300 EmptyJobEvaluated : Pos 11, 1 Bit
   +0x300 DefaultPagePriority : Pos 12, 3 Bits
   +0x300 PrimaryTokenFrozen : Pos 15, 1 Bit
   +0x300 ProcessVerifierTarget : Pos 16, 1 Bit
   +0x300 StackRandomizationDisabled : Pos 17, 1 Bit
   +0x300 AffinityPermanent : Pos 18, 1 Bit
   +0x300 AffinityUpdateEnable : Pos 19, 1 Bit
   +0x300 PropagateNode    : Pos 20, 1 Bit
   +0x300 ExplicitAffinity : Pos 21, 1 Bit
   +0x300 ProcessExecutionState : Pos 22, 2 Bits
   +0x300 DisallowStrippedImages : Pos 24, 1 Bit
   +0x300 HighEntropyASLREnabled : Pos 25, 1 Bit
   +0x300 ExtensionPointDisable : Pos 26, 1 Bit
   +0x300 ForceRelocateImages : Pos 27, 1 Bit
   +0x300 ProcessStateChangeRequest : Pos 28, 2 Bits
   +0x300 ProcessStateChangeInProgress : Pos 30, 1 Bit
   +0x300 DisallowWin32kSystemCalls : Pos 31, 1 Bit
   +0x304 Flags            : Uint4B
   +0x304 CreateReported   : Pos 0, 1 Bit
   +0x304 NoDebugInherit   : Pos 1, 1 Bit
   +0x304 ProcessExiting   : Pos 2, 1 Bit
   +0x304 ProcessDelete    : Pos 3, 1 Bit
   +0x304 ControlFlowGuardEnabled : Pos 4, 1 Bit
   +0x304 VmDeleted        : Pos 5, 1 Bit
   +0x304 OutswapEnabled   : Pos 6, 1 Bit
   +0x304 Outswapped       : Pos 7, 1 Bit
   +0x304 FailFastOnCommitFail : Pos 8, 1 Bit
   +0x304 Wow64VaSpace4Gb  : Pos 9, 1 Bit
   +0x304 AddressSpaceInitialized : Pos 10, 2 Bits
   +0x304 SetTimerResolution : Pos 12, 1 Bit
   +0x304 BreakOnTermination : Pos 13, 1 Bit
   +0x304 DeprioritizeViews : Pos 14, 1 Bit
   +0x304 WriteWatch       : Pos 15, 1 Bit
   +0x304 ProcessInSession : Pos 16, 1 Bit
   +0x304 OverrideAddressSpace : Pos 17, 1 Bit
   +0x304 HasAddressSpace  : Pos 18, 1 Bit
   +0x304 LaunchPrefetched : Pos 19, 1 Bit
   +0x304 Background       : Pos 20, 1 Bit
   +0x304 VmTopDown        : Pos 21, 1 Bit
   +0x304 ImageNotifyDone  : Pos 22, 1 Bit
   +0x304 PdeUpdateNeeded  : Pos 23, 1 Bit
   +0x304 VdmAllowed       : Pos 24, 1 Bit
   +0x304 ProcessRundown   : Pos 25, 1 Bit
   +0x304 ProcessInserted  : Pos 26, 1 Bit
   +0x304 DefaultIoPriority : Pos 27, 3 Bits
   +0x304 ProcessSelfDelete : Pos 30, 1 Bit
   +0x304 SetTimerResolutionLink : Pos 31, 1 Bit
   +0x308 CreateTime       : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x310 ProcessQuotaUsage : [2] Uint8B
   +0x320 ProcessQuotaPeak : [2] Uint8B
   +0x330 PeakVirtualSize  : Uint8B
   +0x338 VirtualSize      : Uint8B
   +0x340 SessionProcessLinks : _LIST_ENTRY
      +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x008 Blink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
   +0x350 ExceptionPortData : Ptr64 Void
   +0x350 ExceptionPortValue : Uint8B
   +0x350 ExceptionPortState : Pos 0, 3 Bits
   +0x358 Token            : _EX_FAST_REF
      +0x000 Object           : Ptr64 Void
      +0x000 RefCnt           : Pos 0, 4 Bits
      +0x000 Value            : Uint8B
   +0x360 WorkingSetPage   : Uint8B
   +0x368 AddressCreationLock : _EX_PUSH_LOCK
      +0x000 Locked           : Pos 0, 1 Bit
      +0x000 Waiting          : Pos 1, 1 Bit
      +0x000 Waking           : Pos 2, 1 Bit
      +0x000 MultipleShared   : Pos 3, 1 Bit
      +0x000 Shared           : Pos 4, 60 Bits
      +0x000 Value            : Uint8B
      +0x000 Ptr              : Ptr64 Void
   +0x370 PageTableCommitmentLock : _EX_PUSH_LOCK
      +0x000 Locked           : Pos 0, 1 Bit
      +0x000 Waiting          : Pos 1, 1 Bit
      +0x000 Waking           : Pos 2, 1 Bit
      +0x000 MultipleShared   : Pos 3, 1 Bit
      +0x000 Shared           : Pos 4, 60 Bits
      +0x000 Value            : Uint8B
      +0x000 Ptr              : Ptr64 Void
   +0x378 RotateInProgress : Ptr64 _ETHREAD
      +0x000 Tcb              : _KTHREAD
         +0x000 Header           : _DISPATCHER_HEADER
         +0x018 SListFaultAddress : Ptr64 Void
         +0x020 QuantumTarget    : Uint8B
         +0x028 InitialStack     : Ptr64 Void
         +0x030 StackLimit       : Ptr64 Void
         +0x038 StackBase        : Ptr64 Void
         +0x040 ThreadLock       : Uint8B
         +0x048 CycleTime        : Uint8B
         +0x050 CurrentRunTime   : Uint4B
         +0x054 ExpectedRunTime  : Uint4B
         +0x058 KernelStack      : Ptr64 Void
         +0x060 StateSaveArea    : Ptr64 _XSAVE_FORMAT
         +0x068 SchedulingGroup  : Ptr64 _KSCHEDULING_GROUP
         +0x070 WaitRegister     : _KWAIT_STATUS_REGISTER
         +0x071 Running          : UChar
         +0x072 Alerted          : [2] UChar
         +0x074 AutoBoostActive  : Pos 0, 1 Bit
         +0x074 ReadyTransition  : Pos 1, 1 Bit
         +0x074 WaitNext         : Pos 2, 1 Bit
         +0x074 SystemAffinityActive : Pos 3, 1 Bit
         +0x074 Alertable        : Pos 4, 1 Bit
         +0x074 UserStackWalkActive : Pos 5, 1 Bit
         +0x074 ApcInterruptRequest : Pos 6, 1 Bit
         +0x074 QuantumEndMigrate : Pos 7, 1 Bit
         +0x074 UmsDirectedSwitchEnable : Pos 8, 1 Bit
         +0x074 TimerActive      : Pos 9, 1 Bit
         +0x074 SystemThread     : Pos 10, 1 Bit
         +0x074 ProcessDetachActive : Pos 11, 1 Bit
         +0x074 CalloutActive    : Pos 12, 1 Bit
         +0x074 ScbReadyQueue    : Pos 13, 1 Bit
         +0x074 ApcQueueable     : Pos 14, 1 Bit
         +0x074 ReservedStackInUse : Pos 15, 1 Bit
         +0x074 UmsPerformingSyscall : Pos 16, 1 Bit
         +0x074 TimerSuspended   : Pos 17, 1 Bit
         +0x074 SuspendedWaitMode : Pos 18, 1 Bit
         +0x074 SuspendSchedulerApcWait : Pos 19, 1 Bit
         +0x074 Reserved         : Pos 20, 12 Bits
         +0x074 MiscFlags        : Int4B
         +0x078 AutoAlignment    : Pos 0, 1 Bit
         +0x078 DisableBoost     : Pos 1, 1 Bit
         +0x078 ThreadFlagsSpare0 : Pos 2, 1 Bit
         +0x078 AlertedByThreadId : Pos 3, 1 Bit
         +0x078 QuantumDonation  : Pos 4, 1 Bit
         +0x078 EnableStackSwap  : Pos 5, 1 Bit
         +0x078 GuiThread        : Pos 6, 1 Bit
         +0x078 DisableQuantum   : Pos 7, 1 Bit
         +0x078 ChargeOnlySchedulingGroup : Pos 8, 1 Bit
         +0x078 DeferPreemption  : Pos 9, 1 Bit
         +0x078 QueueDeferPreemption : Pos 10, 1 Bit
         +0x078 ForceDeferSchedule : Pos 11, 1 Bit
         +0x078 SharedReadyQueueAffinity : Pos 12, 1 Bit
         +0x078 FreezeCount      : Pos 13, 1 Bit
         +0x078 TerminationApcRequest : Pos 14, 1 Bit
         +0x078 AutoBoostEntriesExhausted : Pos 15, 1 Bit
         +0x078 KernelStackResident : Pos 16, 1 Bit
         +0x078 CommitFailTerminateRequest : Pos 17, 1 Bit
         +0x078 ProcessStackCountDecremented : Pos 18, 1 Bit
         +0x078 ThreadFlagsSpare : Pos 19, 5 Bits
         +0x078 EtwStackTraceApcInserted : Pos 24, 8 Bits
         +0x078 ThreadFlags      : Int4B
         +0x07c Tag              : UChar
         +0x07d SystemHeteroCpuPolicy : UChar
         +0x07e UserHeteroCpuPolicy : Pos 0, 7 Bits
         +0x07e ExplicitSystemHeteroCpuPolicy : Pos 7, 1 Bit
         +0x07f Spare0           : UChar
         +0x080 SystemCallNumber : Uint4B
         +0x084 Spare10          : Uint4B
         +0x088 FirstArgument    : Ptr64 Void
         +0x090 TrapFrame        : Ptr64 _KTRAP_FRAME
         +0x098 ApcState         : _KAPC_STATE
         +0x098 ApcStateFill     : [43] UChar
         +0x0c3 Priority         : Char
         +0x0c4 UserIdealProcessor : Uint4B
         +0x0c8 WaitStatus       : Int8B
         +0x0d0 WaitBlockList    : Ptr64 _KWAIT_BLOCK
         +0x0d8 WaitListEntry    : _LIST_ENTRY
         +0x0d8 SwapListEntry    : _SINGLE_LIST_ENTRY
         +0x0e8 Queue            : Ptr64 _DISPATCHER_HEADER
         +0x0f0 Teb              : Ptr64 Void
         +0x0f8 RelativeTimerBias : Uint8B
         +0x100 Timer            : _KTIMER
         +0x140 WaitBlock        : [4] _KWAIT_BLOCK
         +0x140 WaitBlockFill4   : [20] UChar
         +0x154 ContextSwitches  : Uint4B
         +0x140 WaitBlockFill5   : [68] UChar
         +0x184 State            : UChar
         +0x185 Spare13          : Char
         +0x186 WaitIrql         : UChar
         +0x187 WaitMode         : Char
         +0x140 WaitBlockFill6   : [116] UChar
         +0x1b4 WaitTime         : Uint4B
         +0x140 WaitBlockFill7   : [164] UChar
         +0x1e4 KernelApcDisable : Int2B
         +0x1e6 SpecialApcDisable : Int2B
         +0x1e4 CombinedApcDisable : Uint4B
         +0x140 WaitBlockFill8   : [40] UChar
         +0x168 ThreadCounters   : Ptr64 _KTHREAD_COUNTERS
         +0x140 WaitBlockFill9   : [88] UChar
         +0x198 XStateSave       : Ptr64 _XSTATE_SAVE
         +0x140 WaitBlockFill10  : [136] UChar
         +0x1c8 Win32Thread      : Ptr64 Void
         +0x140 WaitBlockFill11  : [176] UChar
         +0x1f0 Ucb              : Ptr64 _UMS_CONTROL_BLOCK
         +0x1f8 Uch              : Ptr64 _KUMS_CONTEXT_HEADER
         +0x200 TebMappedLowVa   : Ptr64 Void
         +0x208 QueueListEntry   : _LIST_ENTRY
         +0x218 NextProcessor    : Uint4B
         +0x218 NextProcessorNumber : Pos 0, 31 Bits
         +0x218 SharedReadyQueue : Pos 31, 1 Bit
         +0x21c QueuePriority    : Int4B
         +0x220 Process          : Ptr64 _KPROCESS
         +0x228 UserAffinity     : _GROUP_AFFINITY
         +0x228 UserAffinityFill : [10] UChar
         +0x232 PreviousMode     : Char
         +0x233 BasePriority     : Char
         +0x234 PriorityDecrement : Char
         +0x234 ForegroundBoost  : Pos 0, 4 Bits
         +0x234 UnusualBoost     : Pos 4, 4 Bits
         +0x235 Preempted        : UChar
         +0x236 AdjustReason     : UChar
         +0x237 AdjustIncrement  : Char
         +0x238 AffinityVersion  : Uint8B
         +0x240 Affinity         : _GROUP_AFFINITY
         +0x240 AffinityFill     : [10] UChar
         +0x24a ApcStateIndex    : UChar
         +0x24b WaitBlockCount   : UChar
         +0x24c IdealProcessor   : Uint4B
         +0x250 NpxState         : Uint8B
         +0x258 SavedApcState    : _KAPC_STATE
         +0x258 SavedApcStateFill : [43] UChar
         +0x283 WaitReason       : UChar
         +0x284 SuspendCount     : Char
         +0x285 Saturation       : Char
         +0x286 SListFaultCount  : Uint2B
         +0x288 SchedulerApc     : _KAPC
         +0x288 SchedulerApcFill0 : [1] UChar
         +0x289 ResourceIndex    : UChar
         +0x288 SchedulerApcFill1 : [3] UChar
         +0x28b QuantumReset     : UChar
         +0x288 SchedulerApcFill2 : [4] UChar
         +0x28c KernelTime       : Uint4B
         +0x288 SchedulerApcFill3 : [64] UChar
         +0x2c8 WaitPrcb         : Ptr64 _KPRCB
         +0x288 SchedulerApcFill4 : [72] UChar
         +0x2d0 LegoData         : Ptr64 Void
         +0x288 SchedulerApcFill5 : [83] UChar
         +0x2db CallbackNestingLevel : UChar
         +0x2dc UserTime         : Uint4B
         +0x2e0 SuspendEvent     : _KEVENT
         +0x2f8 ThreadListEntry  : _LIST_ENTRY
         +0x308 MutantListHead   : _LIST_ENTRY
         +0x318 AbEntrySummary   : UChar
         +0x319 AbWaitEntryCount : UChar
         +0x31a Spare20          : Uint2B
         +0x31c SecureThreadCookie : Uint4B
         +0x320 LockEntries      : [6] _KLOCK_ENTRY
         +0x560 PropagateBoostsEntry : _SINGLE_LIST_ENTRY
         +0x568 IoSelfBoostsEntry : _SINGLE_LIST_ENTRY
         +0x570 PriorityFloorCounts : [16] UChar
         +0x580 PriorityFloorSummary : Uint4B
         +0x584 AbCompletedIoBoostCount : Int4B
         +0x588 KeReferenceCount : Int2B
         +0x58a AbOrphanedEntrySummary : UChar
         +0x58b AbOwnedEntryCount : UChar
         +0x58c ForegroundLossTime : Uint4B
         +0x590 GlobalForegroundListEntry : _LIST_ENTRY
         +0x590 ForegroundDpcStackListEntry : _SINGLE_LIST_ENTRY
         +0x598 InGlobalForegroundList : Uint8B
         +0x5a0 ReadOperationCount : Int8B
         +0x5a8 WriteOperationCount : Int8B
         +0x5b0 OtherOperationCount : Int8B
         +0x5b8 ReadTransferCount : Int8B
         +0x5c0 WriteTransferCount : Int8B
         +0x5c8 OtherTransferCount : Int8B
         +0x5d0 QueuedScb        : Ptr64 _KSCB
      +0x5d8 CreateTime       : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x5e0 ExitTime         : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x5e0 KeyedWaitChain   : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x5f0 ChargeOnlySession : Ptr64 Void
      +0x5f8 PostBlockList    : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x5f8 ForwardLinkShadow : Ptr64 Void
      +0x600 StartAddress     : Ptr64 Void
      +0x608 TerminationPort  : Ptr64 _TERMINATION_PORT
         +0x000 Next             : Ptr64 _TERMINATION_PORT
         +0x008 Port             : Ptr64 Void
      +0x608 ReaperLink       : Ptr64 _ETHREAD
         +0x000 Tcb              : _KTHREAD
         +0x5d8 CreateTime       : _LARGE_INTEGER
         +0x5e0 ExitTime         : _LARGE_INTEGER
         +0x5e0 KeyedWaitChain   : _LIST_ENTRY
         +0x5f0 ChargeOnlySession : Ptr64 Void
         +0x5f8 PostBlockList    : _LIST_ENTRY
         +0x5f8 ForwardLinkShadow : Ptr64 Void
         +0x600 StartAddress     : Ptr64 Void
         +0x608 TerminationPort  : Ptr64 _TERMINATION_PORT
         +0x608 ReaperLink       : Ptr64 _ETHREAD
         +0x608 KeyedWaitValue   : Ptr64 Void
         +0x610 ActiveTimerListLock : Uint8B
         +0x618 ActiveTimerListHead : _LIST_ENTRY
         +0x628 Cid              : _CLIENT_ID
         +0x638 KeyedWaitSemaphore : _KSEMAPHORE
         +0x638 AlpcWaitSemaphore : _KSEMAPHORE
         +0x658 ClientSecurity   : _PS_CLIENT_SECURITY_CONTEXT
         +0x660 IrpList          : _LIST_ENTRY
         +0x670 TopLevelIrp      : Uint8B
         +0x678 DeviceToVerify   : Ptr64 _DEVICE_OBJECT
         +0x680 Win32StartAddress : Ptr64 Void
         +0x688 LegacyPowerObject : Ptr64 Void
         +0x690 ThreadListEntry  : _LIST_ENTRY
         +0x6a0 RundownProtect   : _EX_RUNDOWN_REF
         +0x6a8 ThreadLock       : _EX_PUSH_LOCK
         +0x6b0 ReadClusterSize  : Uint4B
         +0x6b4 MmLockOrdering   : Int4B
         +0x6b8 CmLockOrdering   : Int4B
         +0x6bc CrossThreadFlags : Uint4B
         +0x6bc Terminated       : Pos 0, 1 Bit
         +0x6bc ThreadInserted   : Pos 1, 1 Bit
         +0x6bc HideFromDebugger : Pos 2, 1 Bit
         +0x6bc ActiveImpersonationInfo : Pos 3, 1 Bit
         +0x6bc HardErrorsAreDisabled : Pos 4, 1 Bit
         +0x6bc BreakOnTermination : Pos 5, 1 Bit
         +0x6bc SkipCreationMsg  : Pos 6, 1 Bit
         +0x6bc SkipTerminationMsg : Pos 7, 1 Bit
         +0x6bc CopyTokenOnOpen  : Pos 8, 1 Bit
         +0x6bc ThreadIoPriority : Pos 9, 3 Bits
         +0x6bc ThreadPagePriority : Pos 12, 3 Bits
         +0x6bc RundownFail      : Pos 15, 1 Bit
         +0x6bc UmsForceQueueTermination : Pos 16, 1 Bit
         +0x6bc IndirectCpuSets  : Pos 17, 1 Bit
         +0x6bc ReservedCrossThreadFlags : Pos 18, 14 Bits
         +0x6c0 SameThreadPassiveFlags : Uint4B
         +0x6c0 ActiveExWorker   : Pos 0, 1 Bit
         +0x6c0 MemoryMaker      : Pos 1, 1 Bit
         +0x6c0 ClonedThread     : Pos 2, 1 Bit
         +0x6c0 KeyedEventInUse  : Pos 3, 1 Bit
         +0x6c0 SelfTerminate    : Pos 4, 1 Bit
         +0x6c0 RespectIoPriority : Pos 5, 1 Bit
         +0x6c0 ReservedSameThreadPassiveFlags : Pos 6, 26 Bits
         +0x6c4 SameThreadApcFlags : Uint4B
         +0x6c4 OwnsProcessAddressSpaceExclusive : Pos 0, 1 Bit
         +0x6c4 OwnsProcessAddressSpaceShared : Pos 1, 1 Bit
         +0x6c4 HardFaultBehavior : Pos 2, 1 Bit
         +0x6c4 StartAddressInvalid : Pos 3, 1 Bit
         +0x6c4 EtwCalloutActive : Pos 4, 1 Bit
         +0x6c4 SuppressSymbolLoad : Pos 5, 1 Bit
         +0x6c4 Prefetching      : Pos 6, 1 Bit
         +0x6c4 OwnsVadExclusive : Pos 7, 1 Bit
         +0x6c5 SystemPagePriorityActive : Pos 0, 1 Bit
         +0x6c5 SystemPagePriority : Pos 1, 3 Bits
         +0x6c8 CacheManagerActive : UChar
         +0x6c9 DisablePageFaultClustering : UChar
         +0x6ca ActiveFaultCount : UChar
         +0x6cb LockOrderState   : UChar
         +0x6d0 AlpcMessageId    : Uint8B
         +0x6d8 AlpcMessage      : Ptr64 Void
         +0x6d8 AlpcReceiveAttributeSet : Uint4B
         +0x6e0 ExitStatus       : Int4B
         +0x6e8 AlpcWaitListEntry : _LIST_ENTRY
         +0x6f8 CacheManagerCount : Uint4B
         +0x6fc IoBoostCount     : Uint4B
         +0x700 BoostList        : _LIST_ENTRY
         +0x710 DeboostList      : _LIST_ENTRY
         +0x720 BoostListLock    : Uint8B
         +0x728 IrpListLock      : Uint8B
         +0x730 ReservedForSynchTracking : Ptr64 Void
         +0x738 CmCallbackListHead : _SINGLE_LIST_ENTRY
         +0x740 ActivityId       : Ptr64 _GUID
         +0x748 SeLearningModeListHead : _SINGLE_LIST_ENTRY
         +0x750 VerifierContext  : Ptr64 Void
         +0x758 KernelStackReference : Uint4B
         +0x760 AdjustedClientToken : Ptr64 Void
         +0x768 WorkingOnBehalfClient : Ptr64 Void
         +0x770 PropertySet      : _PS_PROPERTY_SET
         +0x788 PicoContext      : Ptr64 Void
         +0x790 UserFsBase       : Uint4B
         +0x798 UserGsBase       : Uint8B
         +0x7a0 EnergyValues     : Ptr64 _THREAD_ENERGY_VALUES
         +0x7a8 CmCellReferences : Uint4B
         +0x7b0 SelectedCpuSets  : Uint8B
         +0x7b0 SelectedCpuSetsIndirect : Ptr64 Uint8B
         +0x7b8 Silo             : Ptr64 _ESILO
      +0x608 KeyedWaitValue   : Ptr64 Void
      +0x610 ActiveTimerListLock : Uint8B
      +0x618 ActiveTimerListHead : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x628 Cid              : _CLIENT_ID
         +0x000 UniqueProcess    : Ptr64 Void
         +0x008 UniqueThread     : Ptr64 Void
      +0x638 KeyedWaitSemaphore : _KSEMAPHORE
         +0x000 Header           : _DISPATCHER_HEADER
         +0x018 Limit            : Int4B
      +0x638 AlpcWaitSemaphore : _KSEMAPHORE
         +0x000 Header           : _DISPATCHER_HEADER
         +0x018 Limit            : Int4B
      +0x658 ClientSecurity   : _PS_CLIENT_SECURITY_CONTEXT
         +0x000 ImpersonationData : Uint8B
         +0x000 ImpersonationToken : Ptr64 Void
         +0x000 ImpersonationLevel : Pos 0, 2 Bits
         +0x000 EffectiveOnly    : Pos 2, 1 Bit
      +0x660 IrpList          : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x670 TopLevelIrp      : Uint8B
      +0x678 DeviceToVerify   : Ptr64 _DEVICE_OBJECT
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
      +0x680 Win32StartAddress : Ptr64 Void
      +0x688 LegacyPowerObject : Ptr64 Void
      +0x690 ThreadListEntry  : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x6a0 RundownProtect   : _EX_RUNDOWN_REF
         +0x000 Count            : Uint8B
         +0x000 Ptr              : Ptr64 Void
      +0x6a8 ThreadLock       : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 60 Bits
         +0x000 Value            : Uint8B
         +0x000 Ptr              : Ptr64 Void
      +0x6b0 ReadClusterSize  : Uint4B
      +0x6b4 MmLockOrdering   : Int4B
      +0x6b8 CmLockOrdering   : Int4B
      +0x6bc CrossThreadFlags : Uint4B
      +0x6bc Terminated       : Pos 0, 1 Bit
      +0x6bc ThreadInserted   : Pos 1, 1 Bit
      +0x6bc HideFromDebugger : Pos 2, 1 Bit
      +0x6bc ActiveImpersonationInfo : Pos 3, 1 Bit
      +0x6bc HardErrorsAreDisabled : Pos 4, 1 Bit
      +0x6bc BreakOnTermination : Pos 5, 1 Bit
      +0x6bc SkipCreationMsg  : Pos 6, 1 Bit
      +0x6bc SkipTerminationMsg : Pos 7, 1 Bit
      +0x6bc CopyTokenOnOpen  : Pos 8, 1 Bit
      +0x6bc ThreadIoPriority : Pos 9, 3 Bits
      +0x6bc ThreadPagePriority : Pos 12, 3 Bits
      +0x6bc RundownFail      : Pos 15, 1 Bit
      +0x6bc UmsForceQueueTermination : Pos 16, 1 Bit
      +0x6bc IndirectCpuSets  : Pos 17, 1 Bit
      +0x6bc ReservedCrossThreadFlags : Pos 18, 14 Bits
      +0x6c0 SameThreadPassiveFlags : Uint4B
      +0x6c0 ActiveExWorker   : Pos 0, 1 Bit
      +0x6c0 MemoryMaker      : Pos 1, 1 Bit
      +0x6c0 ClonedThread     : Pos 2, 1 Bit
      +0x6c0 KeyedEventInUse  : Pos 3, 1 Bit
      +0x6c0 SelfTerminate    : Pos 4, 1 Bit
      +0x6c0 RespectIoPriority : Pos 5, 1 Bit
      +0x6c0 ReservedSameThreadPassiveFlags : Pos 6, 26 Bits
      +0x6c4 SameThreadApcFlags : Uint4B
      +0x6c4 OwnsProcessAddressSpaceExclusive : Pos 0, 1 Bit
      +0x6c4 OwnsProcessAddressSpaceShared : Pos 1, 1 Bit
      +0x6c4 HardFaultBehavior : Pos 2, 1 Bit
      +0x6c4 StartAddressInvalid : Pos 3, 1 Bit
      +0x6c4 EtwCalloutActive : Pos 4, 1 Bit
      +0x6c4 SuppressSymbolLoad : Pos 5, 1 Bit
      +0x6c4 Prefetching      : Pos 6, 1 Bit
      +0x6c4 OwnsVadExclusive : Pos 7, 1 Bit
      +0x6c5 SystemPagePriorityActive : Pos 0, 1 Bit
      +0x6c5 SystemPagePriority : Pos 1, 3 Bits
      +0x6c8 CacheManagerActive : UChar
      +0x6c9 DisablePageFaultClustering : UChar
      +0x6ca ActiveFaultCount : UChar
      +0x6cb LockOrderState   : UChar
      +0x6d0 AlpcMessageId    : Uint8B
      +0x6d8 AlpcMessage      : Ptr64 Void
      +0x6d8 AlpcReceiveAttributeSet : Uint4B
      +0x6e0 ExitStatus       : Int4B
      +0x6e8 AlpcWaitListEntry : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x6f8 CacheManagerCount : Uint4B
      +0x6fc IoBoostCount     : Uint4B
      +0x700 BoostList        : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x710 DeboostList      : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x720 BoostListLock    : Uint8B
      +0x728 IrpListLock      : Uint8B
      +0x730 ReservedForSynchTracking : Ptr64 Void
      +0x738 CmCallbackListHead : _SINGLE_LIST_ENTRY
         +0x000 Next             : Ptr64 _SINGLE_LIST_ENTRY
      +0x740 ActivityId       : Ptr64 _GUID
         +0x000 Data1            : Uint4B
         +0x004 Data2            : Uint2B
         +0x006 Data3            : Uint2B
         +0x008 Data4            : [8] UChar
      +0x748 SeLearningModeListHead : _SINGLE_LIST_ENTRY
         +0x000 Next             : Ptr64 _SINGLE_LIST_ENTRY
      +0x750 VerifierContext  : Ptr64 Void
      +0x758 KernelStackReference : Uint4B
      +0x760 AdjustedClientToken : Ptr64 Void
      +0x768 WorkingOnBehalfClient : Ptr64 Void
      +0x770 PropertySet      : _PS_PROPERTY_SET
         +0x000 ListHead         : _LIST_ENTRY
         +0x010 Lock             : Uint8B
      +0x788 PicoContext      : Ptr64 Void
      +0x790 UserFsBase       : Uint4B
      +0x798 UserGsBase       : Uint8B
      +0x7a0 EnergyValues     : Ptr64 _THREAD_ENERGY_VALUES
         +0x000 Cycles           : [4] [2] Uint8B
      +0x7a8 CmCellReferences : Uint4B
      +0x7b0 SelectedCpuSets  : Uint8B
      +0x7b0 SelectedCpuSetsIndirect : Ptr64 Uint8B
      +0x7b8 Silo             : Ptr64 _ESILO
   +0x380 ForkInProgress   : Ptr64 _ETHREAD
      +0x000 Tcb              : _KTHREAD
         +0x000 Header           : _DISPATCHER_HEADER
         +0x018 SListFaultAddress : Ptr64 Void
         +0x020 QuantumTarget    : Uint8B
         +0x028 InitialStack     : Ptr64 Void
         +0x030 StackLimit       : Ptr64 Void
         +0x038 StackBase        : Ptr64 Void
         +0x040 ThreadLock       : Uint8B
         +0x048 CycleTime        : Uint8B
         +0x050 CurrentRunTime   : Uint4B
         +0x054 ExpectedRunTime  : Uint4B
         +0x058 KernelStack      : Ptr64 Void
         +0x060 StateSaveArea    : Ptr64 _XSAVE_FORMAT
         +0x068 SchedulingGroup  : Ptr64 _KSCHEDULING_GROUP
         +0x070 WaitRegister     : _KWAIT_STATUS_REGISTER
         +0x071 Running          : UChar
         +0x072 Alerted          : [2] UChar
         +0x074 AutoBoostActive  : Pos 0, 1 Bit
         +0x074 ReadyTransition  : Pos 1, 1 Bit
         +0x074 WaitNext         : Pos 2, 1 Bit
         +0x074 SystemAffinityActive : Pos 3, 1 Bit
         +0x074 Alertable        : Pos 4, 1 Bit
         +0x074 UserStackWalkActive : Pos 5, 1 Bit
         +0x074 ApcInterruptRequest : Pos 6, 1 Bit
         +0x074 QuantumEndMigrate : Pos 7, 1 Bit
         +0x074 UmsDirectedSwitchEnable : Pos 8, 1 Bit
         +0x074 TimerActive      : Pos 9, 1 Bit
         +0x074 SystemThread     : Pos 10, 1 Bit
         +0x074 ProcessDetachActive : Pos 11, 1 Bit
         +0x074 CalloutActive    : Pos 12, 1 Bit
         +0x074 ScbReadyQueue    : Pos 13, 1 Bit
         +0x074 ApcQueueable     : Pos 14, 1 Bit
         +0x074 ReservedStackInUse : Pos 15, 1 Bit
         +0x074 UmsPerformingSyscall : Pos 16, 1 Bit
         +0x074 TimerSuspended   : Pos 17, 1 Bit
         +0x074 SuspendedWaitMode : Pos 18, 1 Bit
         +0x074 SuspendSchedulerApcWait : Pos 19, 1 Bit
         +0x074 Reserved         : Pos 20, 12 Bits
         +0x074 MiscFlags        : Int4B
         +0x078 AutoAlignment    : Pos 0, 1 Bit
         +0x078 DisableBoost     : Pos 1, 1 Bit
         +0x078 ThreadFlagsSpare0 : Pos 2, 1 Bit
         +0x078 AlertedByThreadId : Pos 3, 1 Bit
         +0x078 QuantumDonation  : Pos 4, 1 Bit
         +0x078 EnableStackSwap  : Pos 5, 1 Bit
         +0x078 GuiThread        : Pos 6, 1 Bit
         +0x078 DisableQuantum   : Pos 7, 1 Bit
         +0x078 ChargeOnlySchedulingGroup : Pos 8, 1 Bit
         +0x078 DeferPreemption  : Pos 9, 1 Bit
         +0x078 QueueDeferPreemption : Pos 10, 1 Bit
         +0x078 ForceDeferSchedule : Pos 11, 1 Bit
         +0x078 SharedReadyQueueAffinity : Pos 12, 1 Bit
         +0x078 FreezeCount      : Pos 13, 1 Bit
         +0x078 TerminationApcRequest : Pos 14, 1 Bit
         +0x078 AutoBoostEntriesExhausted : Pos 15, 1 Bit
         +0x078 KernelStackResident : Pos 16, 1 Bit
         +0x078 CommitFailTerminateRequest : Pos 17, 1 Bit
         +0x078 ProcessStackCountDecremented : Pos 18, 1 Bit
         +0x078 ThreadFlagsSpare : Pos 19, 5 Bits
         +0x078 EtwStackTraceApcInserted : Pos 24, 8 Bits
         +0x078 ThreadFlags      : Int4B
         +0x07c Tag              : UChar
         +0x07d SystemHeteroCpuPolicy : UChar
         +0x07e UserHeteroCpuPolicy : Pos 0, 7 Bits
         +0x07e ExplicitSystemHeteroCpuPolicy : Pos 7, 1 Bit
         +0x07f Spare0           : UChar
         +0x080 SystemCallNumber : Uint4B
         +0x084 Spare10          : Uint4B
         +0x088 FirstArgument    : Ptr64 Void
         +0x090 TrapFrame        : Ptr64 _KTRAP_FRAME
         +0x098 ApcState         : _KAPC_STATE
         +0x098 ApcStateFill     : [43] UChar
         +0x0c3 Priority         : Char
         +0x0c4 UserIdealProcessor : Uint4B
         +0x0c8 WaitStatus       : Int8B
         +0x0d0 WaitBlockList    : Ptr64 _KWAIT_BLOCK
         +0x0d8 WaitListEntry    : _LIST_ENTRY
         +0x0d8 SwapListEntry    : _SINGLE_LIST_ENTRY
         +0x0e8 Queue            : Ptr64 _DISPATCHER_HEADER
         +0x0f0 Teb              : Ptr64 Void
         +0x0f8 RelativeTimerBias : Uint8B
         +0x100 Timer            : _KTIMER
         +0x140 WaitBlock        : [4] _KWAIT_BLOCK
         +0x140 WaitBlockFill4   : [20] UChar
         +0x154 ContextSwitches  : Uint4B
         +0x140 WaitBlockFill5   : [68] UChar
         +0x184 State            : UChar
         +0x185 Spare13          : Char
         +0x186 WaitIrql         : UChar
         +0x187 WaitMode         : Char
         +0x140 WaitBlockFill6   : [116] UChar
         +0x1b4 WaitTime         : Uint4B
         +0x140 WaitBlockFill7   : [164] UChar
         +0x1e4 KernelApcDisable : Int2B
         +0x1e6 SpecialApcDisable : Int2B
         +0x1e4 CombinedApcDisable : Uint4B
         +0x140 WaitBlockFill8   : [40] UChar
         +0x168 ThreadCounters   : Ptr64 _KTHREAD_COUNTERS
         +0x140 WaitBlockFill9   : [88] UChar
         +0x198 XStateSave       : Ptr64 _XSTATE_SAVE
         +0x140 WaitBlockFill10  : [136] UChar
         +0x1c8 Win32Thread      : Ptr64 Void
         +0x140 WaitBlockFill11  : [176] UChar
         +0x1f0 Ucb              : Ptr64 _UMS_CONTROL_BLOCK
         +0x1f8 Uch              : Ptr64 _KUMS_CONTEXT_HEADER
         +0x200 TebMappedLowVa   : Ptr64 Void
         +0x208 QueueListEntry   : _LIST_ENTRY
         +0x218 NextProcessor    : Uint4B
         +0x218 NextProcessorNumber : Pos 0, 31 Bits
         +0x218 SharedReadyQueue : Pos 31, 1 Bit
         +0x21c QueuePriority    : Int4B
         +0x220 Process          : Ptr64 _KPROCESS
         +0x228 UserAffinity     : _GROUP_AFFINITY
         +0x228 UserAffinityFill : [10] UChar
         +0x232 PreviousMode     : Char
         +0x233 BasePriority     : Char
         +0x234 PriorityDecrement : Char
         +0x234 ForegroundBoost  : Pos 0, 4 Bits
         +0x234 UnusualBoost     : Pos 4, 4 Bits
         +0x235 Preempted        : UChar
         +0x236 AdjustReason     : UChar
         +0x237 AdjustIncrement  : Char
         +0x238 AffinityVersion  : Uint8B
         +0x240 Affinity         : _GROUP_AFFINITY
         +0x240 AffinityFill     : [10] UChar
         +0x24a ApcStateIndex    : UChar
         +0x24b WaitBlockCount   : UChar
         +0x24c IdealProcessor   : Uint4B
         +0x250 NpxState         : Uint8B
         +0x258 SavedApcState    : _KAPC_STATE
         +0x258 SavedApcStateFill : [43] UChar
         +0x283 WaitReason       : UChar
         +0x284 SuspendCount     : Char
         +0x285 Saturation       : Char
         +0x286 SListFaultCount  : Uint2B
         +0x288 SchedulerApc     : _KAPC
         +0x288 SchedulerApcFill0 : [1] UChar
         +0x289 ResourceIndex    : UChar
         +0x288 SchedulerApcFill1 : [3] UChar
         +0x28b QuantumReset     : UChar
         +0x288 SchedulerApcFill2 : [4] UChar
         +0x28c KernelTime       : Uint4B
         +0x288 SchedulerApcFill3 : [64] UChar
         +0x2c8 WaitPrcb         : Ptr64 _KPRCB
         +0x288 SchedulerApcFill4 : [72] UChar
         +0x2d0 LegoData         : Ptr64 Void
         +0x288 SchedulerApcFill5 : [83] UChar
         +0x2db CallbackNestingLevel : UChar
         +0x2dc UserTime         : Uint4B
         +0x2e0 SuspendEvent     : _KEVENT
         +0x2f8 ThreadListEntry  : _LIST_ENTRY
         +0x308 MutantListHead   : _LIST_ENTRY
         +0x318 AbEntrySummary   : UChar
         +0x319 AbWaitEntryCount : UChar
         +0x31a Spare20          : Uint2B
         +0x31c SecureThreadCookie : Uint4B
         +0x320 LockEntries      : [6] _KLOCK_ENTRY
         +0x560 PropagateBoostsEntry : _SINGLE_LIST_ENTRY
         +0x568 IoSelfBoostsEntry : _SINGLE_LIST_ENTRY
         +0x570 PriorityFloorCounts : [16] UChar
         +0x580 PriorityFloorSummary : Uint4B
         +0x584 AbCompletedIoBoostCount : Int4B
         +0x588 KeReferenceCount : Int2B
         +0x58a AbOrphanedEntrySummary : UChar
         +0x58b AbOwnedEntryCount : UChar
         +0x58c ForegroundLossTime : Uint4B
         +0x590 GlobalForegroundListEntry : _LIST_ENTRY
         +0x590 ForegroundDpcStackListEntry : _SINGLE_LIST_ENTRY
         +0x598 InGlobalForegroundList : Uint8B
         +0x5a0 ReadOperationCount : Int8B
         +0x5a8 WriteOperationCount : Int8B
         +0x5b0 OtherOperationCount : Int8B
         +0x5b8 ReadTransferCount : Int8B
         +0x5c0 WriteTransferCount : Int8B
         +0x5c8 OtherTransferCount : Int8B
         +0x5d0 QueuedScb        : Ptr64 _KSCB
      +0x5d8 CreateTime       : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x5e0 ExitTime         : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x5e0 KeyedWaitChain   : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x5f0 ChargeOnlySession : Ptr64 Void
      +0x5f8 PostBlockList    : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x5f8 ForwardLinkShadow : Ptr64 Void
      +0x600 StartAddress     : Ptr64 Void
      +0x608 TerminationPort  : Ptr64 _TERMINATION_PORT
         +0x000 Next             : Ptr64 _TERMINATION_PORT
         +0x008 Port             : Ptr64 Void
      +0x608 ReaperLink       : Ptr64 _ETHREAD
         +0x000 Tcb              : _KTHREAD
         +0x5d8 CreateTime       : _LARGE_INTEGER
         +0x5e0 ExitTime         : _LARGE_INTEGER
         +0x5e0 KeyedWaitChain   : _LIST_ENTRY
         +0x5f0 ChargeOnlySession : Ptr64 Void
         +0x5f8 PostBlockList    : _LIST_ENTRY
         +0x5f8 ForwardLinkShadow : Ptr64 Void
         +0x600 StartAddress     : Ptr64 Void
         +0x608 TerminationPort  : Ptr64 _TERMINATION_PORT
         +0x608 ReaperLink       : Ptr64 _ETHREAD
         +0x608 KeyedWaitValue   : Ptr64 Void
         +0x610 ActiveTimerListLock : Uint8B
         +0x618 ActiveTimerListHead : _LIST_ENTRY
         +0x628 Cid              : _CLIENT_ID
         +0x638 KeyedWaitSemaphore : _KSEMAPHORE
         +0x638 AlpcWaitSemaphore : _KSEMAPHORE
         +0x658 ClientSecurity   : _PS_CLIENT_SECURITY_CONTEXT
         +0x660 IrpList          : _LIST_ENTRY
         +0x670 TopLevelIrp      : Uint8B
         +0x678 DeviceToVerify   : Ptr64 _DEVICE_OBJECT
         +0x680 Win32StartAddress : Ptr64 Void
         +0x688 LegacyPowerObject : Ptr64 Void
         +0x690 ThreadListEntry  : _LIST_ENTRY
         +0x6a0 RundownProtect   : _EX_RUNDOWN_REF
         +0x6a8 ThreadLock       : _EX_PUSH_LOCK
         +0x6b0 ReadClusterSize  : Uint4B
         +0x6b4 MmLockOrdering   : Int4B
         +0x6b8 CmLockOrdering   : Int4B
         +0x6bc CrossThreadFlags : Uint4B
         +0x6bc Terminated       : Pos 0, 1 Bit
         +0x6bc ThreadInserted   : Pos 1, 1 Bit
         +0x6bc HideFromDebugger : Pos 2, 1 Bit
         +0x6bc ActiveImpersonationInfo : Pos 3, 1 Bit
         +0x6bc HardErrorsAreDisabled : Pos 4, 1 Bit
         +0x6bc BreakOnTermination : Pos 5, 1 Bit
         +0x6bc SkipCreationMsg  : Pos 6, 1 Bit
         +0x6bc SkipTerminationMsg : Pos 7, 1 Bit
         +0x6bc CopyTokenOnOpen  : Pos 8, 1 Bit
         +0x6bc ThreadIoPriority : Pos 9, 3 Bits
         +0x6bc ThreadPagePriority : Pos 12, 3 Bits
         +0x6bc RundownFail      : Pos 15, 1 Bit
         +0x6bc UmsForceQueueTermination : Pos 16, 1 Bit
         +0x6bc IndirectCpuSets  : Pos 17, 1 Bit
         +0x6bc ReservedCrossThreadFlags : Pos 18, 14 Bits
         +0x6c0 SameThreadPassiveFlags : Uint4B
         +0x6c0 ActiveExWorker   : Pos 0, 1 Bit
         +0x6c0 MemoryMaker      : Pos 1, 1 Bit
         +0x6c0 ClonedThread     : Pos 2, 1 Bit
         +0x6c0 KeyedEventInUse  : Pos 3, 1 Bit
         +0x6c0 SelfTerminate    : Pos 4, 1 Bit
         +0x6c0 RespectIoPriority : Pos 5, 1 Bit
         +0x6c0 ReservedSameThreadPassiveFlags : Pos 6, 26 Bits
         +0x6c4 SameThreadApcFlags : Uint4B
         +0x6c4 OwnsProcessAddressSpaceExclusive : Pos 0, 1 Bit
         +0x6c4 OwnsProcessAddressSpaceShared : Pos 1, 1 Bit
         +0x6c4 HardFaultBehavior : Pos 2, 1 Bit
         +0x6c4 StartAddressInvalid : Pos 3, 1 Bit
         +0x6c4 EtwCalloutActive : Pos 4, 1 Bit
         +0x6c4 SuppressSymbolLoad : Pos 5, 1 Bit
         +0x6c4 Prefetching      : Pos 6, 1 Bit
         +0x6c4 OwnsVadExclusive : Pos 7, 1 Bit
         +0x6c5 SystemPagePriorityActive : Pos 0, 1 Bit
         +0x6c5 SystemPagePriority : Pos 1, 3 Bits
         +0x6c8 CacheManagerActive : UChar
         +0x6c9 DisablePageFaultClustering : UChar
         +0x6ca ActiveFaultCount : UChar
         +0x6cb LockOrderState   : UChar
         +0x6d0 AlpcMessageId    : Uint8B
         +0x6d8 AlpcMessage      : Ptr64 Void
         +0x6d8 AlpcReceiveAttributeSet : Uint4B
         +0x6e0 ExitStatus       : Int4B
         +0x6e8 AlpcWaitListEntry : _LIST_ENTRY
         +0x6f8 CacheManagerCount : Uint4B
         +0x6fc IoBoostCount     : Uint4B
         +0x700 BoostList        : _LIST_ENTRY
         +0x710 DeboostList      : _LIST_ENTRY
         +0x720 BoostListLock    : Uint8B
         +0x728 IrpListLock      : Uint8B
         +0x730 ReservedForSynchTracking : Ptr64 Void
         +0x738 CmCallbackListHead : _SINGLE_LIST_ENTRY
         +0x740 ActivityId       : Ptr64 _GUID
         +0x748 SeLearningModeListHead : _SINGLE_LIST_ENTRY
         +0x750 VerifierContext  : Ptr64 Void
         +0x758 KernelStackReference : Uint4B
         +0x760 AdjustedClientToken : Ptr64 Void
         +0x768 WorkingOnBehalfClient : Ptr64 Void
         +0x770 PropertySet      : _PS_PROPERTY_SET
         +0x788 PicoContext      : Ptr64 Void
         +0x790 UserFsBase       : Uint4B
         +0x798 UserGsBase       : Uint8B
         +0x7a0 EnergyValues     : Ptr64 _THREAD_ENERGY_VALUES
         +0x7a8 CmCellReferences : Uint4B
         +0x7b0 SelectedCpuSets  : Uint8B
         +0x7b0 SelectedCpuSetsIndirect : Ptr64 Uint8B
         +0x7b8 Silo             : Ptr64 _ESILO
      +0x608 KeyedWaitValue   : Ptr64 Void
      +0x610 ActiveTimerListLock : Uint8B
      +0x618 ActiveTimerListHead : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x628 Cid              : _CLIENT_ID
         +0x000 UniqueProcess    : Ptr64 Void
         +0x008 UniqueThread     : Ptr64 Void
      +0x638 KeyedWaitSemaphore : _KSEMAPHORE
         +0x000 Header           : _DISPATCHER_HEADER
         +0x018 Limit            : Int4B
      +0x638 AlpcWaitSemaphore : _KSEMAPHORE
         +0x000 Header           : _DISPATCHER_HEADER
         +0x018 Limit            : Int4B
      +0x658 ClientSecurity   : _PS_CLIENT_SECURITY_CONTEXT
         +0x000 ImpersonationData : Uint8B
         +0x000 ImpersonationToken : Ptr64 Void
         +0x000 ImpersonationLevel : Pos 0, 2 Bits
         +0x000 EffectiveOnly    : Pos 2, 1 Bit
      +0x660 IrpList          : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x670 TopLevelIrp      : Uint8B
      +0x678 DeviceToVerify   : Ptr64 _DEVICE_OBJECT
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
      +0x680 Win32StartAddress : Ptr64 Void
      +0x688 LegacyPowerObject : Ptr64 Void
      +0x690 ThreadListEntry  : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x6a0 RundownProtect   : _EX_RUNDOWN_REF
         +0x000 Count            : Uint8B
         +0x000 Ptr              : Ptr64 Void
      +0x6a8 ThreadLock       : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 60 Bits
         +0x000 Value            : Uint8B
         +0x000 Ptr              : Ptr64 Void
      +0x6b0 ReadClusterSize  : Uint4B
      +0x6b4 MmLockOrdering   : Int4B
      +0x6b8 CmLockOrdering   : Int4B
      +0x6bc CrossThreadFlags : Uint4B
      +0x6bc Terminated       : Pos 0, 1 Bit
      +0x6bc ThreadInserted   : Pos 1, 1 Bit
      +0x6bc HideFromDebugger : Pos 2, 1 Bit
      +0x6bc ActiveImpersonationInfo : Pos 3, 1 Bit
      +0x6bc HardErrorsAreDisabled : Pos 4, 1 Bit
      +0x6bc BreakOnTermination : Pos 5, 1 Bit
      +0x6bc SkipCreationMsg  : Pos 6, 1 Bit
      +0x6bc SkipTerminationMsg : Pos 7, 1 Bit
      +0x6bc CopyTokenOnOpen  : Pos 8, 1 Bit
      +0x6bc ThreadIoPriority : Pos 9, 3 Bits
      +0x6bc ThreadPagePriority : Pos 12, 3 Bits
      +0x6bc RundownFail      : Pos 15, 1 Bit
      +0x6bc UmsForceQueueTermination : Pos 16, 1 Bit
      +0x6bc IndirectCpuSets  : Pos 17, 1 Bit
      +0x6bc ReservedCrossThreadFlags : Pos 18, 14 Bits
      +0x6c0 SameThreadPassiveFlags : Uint4B
      +0x6c0 ActiveExWorker   : Pos 0, 1 Bit
      +0x6c0 MemoryMaker      : Pos 1, 1 Bit
      +0x6c0 ClonedThread     : Pos 2, 1 Bit
      +0x6c0 KeyedEventInUse  : Pos 3, 1 Bit
      +0x6c0 SelfTerminate    : Pos 4, 1 Bit
      +0x6c0 RespectIoPriority : Pos 5, 1 Bit
      +0x6c0 ReservedSameThreadPassiveFlags : Pos 6, 26 Bits
      +0x6c4 SameThreadApcFlags : Uint4B
      +0x6c4 OwnsProcessAddressSpaceExclusive : Pos 0, 1 Bit
      +0x6c4 OwnsProcessAddressSpaceShared : Pos 1, 1 Bit
      +0x6c4 HardFaultBehavior : Pos 2, 1 Bit
      +0x6c4 StartAddressInvalid : Pos 3, 1 Bit
      +0x6c4 EtwCalloutActive : Pos 4, 1 Bit
      +0x6c4 SuppressSymbolLoad : Pos 5, 1 Bit
      +0x6c4 Prefetching      : Pos 6, 1 Bit
      +0x6c4 OwnsVadExclusive : Pos 7, 1 Bit
      +0x6c5 SystemPagePriorityActive : Pos 0, 1 Bit
      +0x6c5 SystemPagePriority : Pos 1, 3 Bits
      +0x6c8 CacheManagerActive : UChar
      +0x6c9 DisablePageFaultClustering : UChar
      +0x6ca ActiveFaultCount : UChar
      +0x6cb LockOrderState   : UChar
      +0x6d0 AlpcMessageId    : Uint8B
      +0x6d8 AlpcMessage      : Ptr64 Void
      +0x6d8 AlpcReceiveAttributeSet : Uint4B
      +0x6e0 ExitStatus       : Int4B
      +0x6e8 AlpcWaitListEntry : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x6f8 CacheManagerCount : Uint4B
      +0x6fc IoBoostCount     : Uint4B
      +0x700 BoostList        : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x710 DeboostList      : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x720 BoostListLock    : Uint8B
      +0x728 IrpListLock      : Uint8B
      +0x730 ReservedForSynchTracking : Ptr64 Void
      +0x738 CmCallbackListHead : _SINGLE_LIST_ENTRY
         +0x000 Next             : Ptr64 _SINGLE_LIST_ENTRY
      +0x740 ActivityId       : Ptr64 _GUID
         +0x000 Data1            : Uint4B
         +0x004 Data2            : Uint2B
         +0x006 Data3            : Uint2B
         +0x008 Data4            : [8] UChar
      +0x748 SeLearningModeListHead : _SINGLE_LIST_ENTRY
         +0x000 Next             : Ptr64 _SINGLE_LIST_ENTRY
      +0x750 VerifierContext  : Ptr64 Void
      +0x758 KernelStackReference : Uint4B
      +0x760 AdjustedClientToken : Ptr64 Void
      +0x768 WorkingOnBehalfClient : Ptr64 Void
      +0x770 PropertySet      : _PS_PROPERTY_SET
         +0x000 ListHead         : _LIST_ENTRY
         +0x010 Lock             : Uint8B
      +0x788 PicoContext      : Ptr64 Void
      +0x790 UserFsBase       : Uint4B
      +0x798 UserGsBase       : Uint8B
      +0x7a0 EnergyValues     : Ptr64 _THREAD_ENERGY_VALUES
         +0x000 Cycles           : [4] [2] Uint8B
      +0x7a8 CmCellReferences : Uint4B
      +0x7b0 SelectedCpuSets  : Uint8B
      +0x7b0 SelectedCpuSetsIndirect : Ptr64 Uint8B
      +0x7b8 Silo             : Ptr64 _ESILO
   +0x388 CommitChargeJob  : Ptr64 _EJOB
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
         +0x01a ReservedLowFlags : UChar
         +0x01b WaiterPriority   : UChar
         +0x020 SharedWaiters    : _KWAIT_CHAIN
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
      +0x0b0 TotalCycleTime   : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x0b8 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x0c0 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x0c8 TotalContextSwitches : Uint8B
      +0x0d0 TotalPageFaultCount : Uint4B
      +0x0d4 TotalProcesses   : Uint4B
      +0x0d8 ActiveProcesses  : Uint4B
      +0x0dc TotalTerminatedProcesses : Uint4B
      +0x0e0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x0e8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x0f0 MinimumWorkingSetSize : Uint8B
      +0x0f8 MaximumWorkingSetSize : Uint8B
      +0x100 LimitFlags       : Uint4B
      +0x104 ActiveProcessLimit : Uint4B
      +0x108 Affinity         : _KAFFINITY_EX
         +0x000 Count            : Uint2B
         +0x002 Size             : Uint2B
         +0x004 Reserved         : Uint4B
         +0x008 Bitmap           : [20] Uint8B
      +0x1b0 AccessState      : Ptr64 _JOB_ACCESS_STATE
      +0x1b8 AccessStateQuotaReference : Ptr64 Void
      +0x1c0 UIRestrictionsClass : Uint4B
      +0x1c4 EndOfJobTimeAction : Uint4B
      +0x1c8 CompletionPort   : Ptr64 Void
      +0x1d0 CompletionKey    : Ptr64 Void
      +0x1d8 CompletionCount  : Uint8B
      +0x1e0 SessionId        : Uint4B
      +0x1e4 SchedulingClass  : Uint4B
      +0x1e8 ReadOperationCount : Uint8B
      +0x1f0 WriteOperationCount : Uint8B
      +0x1f8 OtherOperationCount : Uint8B
      +0x200 ReadTransferCount : Uint8B
      +0x208 WriteTransferCount : Uint8B
      +0x210 OtherTransferCount : Uint8B
      +0x218 DiskIoInfo       : _PROCESS_DISK_COUNTERS
         +0x000 BytesRead        : Uint8B
         +0x008 BytesWritten     : Uint8B
         +0x010 ReadOperationCount : Uint8B
         +0x018 WriteOperationCount : Uint8B
         +0x020 FlushOperationCount : Uint8B
      +0x240 ProcessMemoryLimit : Uint8B
      +0x248 JobMemoryLimit   : Uint8B
      +0x250 JobTotalMemoryLimit : Uint8B
      +0x258 PeakProcessMemoryUsed : Uint8B
      +0x260 PeakJobMemoryUsed : Uint8B
      +0x268 EffectiveAffinity : _KAFFINITY_EX
         +0x000 Count            : Uint2B
         +0x002 Size             : Uint2B
         +0x004 Reserved         : Uint4B
         +0x008 Bitmap           : [20] Uint8B
      +0x310 EffectivePerProcessUserTimeLimit : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x318 EffectiveMinimumWorkingSetSize : Uint8B
      +0x320 EffectiveMaximumWorkingSetSize : Uint8B
      +0x328 EffectiveProcessMemoryLimit : Uint8B
      +0x330 EffectiveProcessMemoryLimitJob : Ptr64 _EJOB
         +0x000 Event            : _KEVENT
         +0x018 JobLinks         : _LIST_ENTRY
         +0x028 ProcessListHead  : _LIST_ENTRY
         +0x038 JobLock          : _ERESOURCE
         +0x0a0 TotalUserTime    : _LARGE_INTEGER
         +0x0a8 TotalKernelTime  : _LARGE_INTEGER
         +0x0b0 TotalCycleTime   : _LARGE_INTEGER
         +0x0b8 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x0c0 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x0c8 TotalContextSwitches : Uint8B
         +0x0d0 TotalPageFaultCount : Uint4B
         +0x0d4 TotalProcesses   : Uint4B
         +0x0d8 ActiveProcesses  : Uint4B
         +0x0dc TotalTerminatedProcesses : Uint4B
         +0x0e0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x0e8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x0f0 MinimumWorkingSetSize : Uint8B
         +0x0f8 MaximumWorkingSetSize : Uint8B
         +0x100 LimitFlags       : Uint4B
         +0x104 ActiveProcessLimit : Uint4B
         +0x108 Affinity         : _KAFFINITY_EX
         +0x1b0 AccessState      : Ptr64 _JOB_ACCESS_STATE
         +0x1b8 AccessStateQuotaReference : Ptr64 Void
         +0x1c0 UIRestrictionsClass : Uint4B
         +0x1c4 EndOfJobTimeAction : Uint4B
         +0x1c8 CompletionPort   : Ptr64 Void
         +0x1d0 CompletionKey    : Ptr64 Void
         +0x1d8 CompletionCount  : Uint8B
         +0x1e0 SessionId        : Uint4B
         +0x1e4 SchedulingClass  : Uint4B
         +0x1e8 ReadOperationCount : Uint8B
         +0x1f0 WriteOperationCount : Uint8B
         +0x1f8 OtherOperationCount : Uint8B
         +0x200 ReadTransferCount : Uint8B
         +0x208 WriteTransferCount : Uint8B
         +0x210 OtherTransferCount : Uint8B
         +0x218 DiskIoInfo       : _PROCESS_DISK_COUNTERS
         +0x240 ProcessMemoryLimit : Uint8B
         +0x248 JobMemoryLimit   : Uint8B
         +0x250 JobTotalMemoryLimit : Uint8B
         +0x258 PeakProcessMemoryUsed : Uint8B
         +0x260 PeakJobMemoryUsed : Uint8B
         +0x268 EffectiveAffinity : _KAFFINITY_EX
         +0x310 EffectivePerProcessUserTimeLimit : _LARGE_INTEGER
         +0x318 EffectiveMinimumWorkingSetSize : Uint8B
         +0x320 EffectiveMaximumWorkingSetSize : Uint8B
         +0x328 EffectiveProcessMemoryLimit : Uint8B
         +0x330 EffectiveProcessMemoryLimitJob : Ptr64 _EJOB
         +0x338 EffectivePerProcessUserTimeLimitJob : Ptr64 _EJOB
         +0x340 EffectiveDiskIoRateLimitJob : Ptr64 _EJOB
         +0x348 EffectiveNetIoRateLimitJob : Ptr64 _EJOB
         +0x350 EffectiveHeapAttributionJob : Ptr64 _EJOB
         +0x358 EffectiveLimitFlags : Uint4B
         +0x35c EffectiveSchedulingClass : Uint4B
         +0x360 EffectiveFreezeCount : Uint4B
         +0x364 EffectiveBackgroundCount : Uint4B
         +0x368 EffectiveSwapCount : Uint4B
         +0x36c EffectiveNotificationLimitCount : Uint4B
         +0x370 EffectivePriorityClass : UChar
         +0x371 PriorityClass    : UChar
         +0x372 NestingDepth     : UChar
         +0x373 Reserved1        : [1] UChar
         +0x374 CompletionFilter : Uint4B
         +0x378 WakeChannel      : _WNF_STATE_NAME
         +0x378 WakeInfo         : _PS_WAKE_INFORMATION
         +0x3b0 WakeFilter       : _JOBOBJECT_WAKE_FILTER
         +0x3b8 LowEdgeLatchFilter : Uint4B
         +0x3bc OwnedHighEdgeFilters : Uint4B
         +0x3c0 NotificationLink : Ptr64 _EJOB
         +0x3c8 CurrentJobMemoryUsed : Uint8B
         +0x3d0 NotificationInfo : Ptr64 _JOB_NOTIFICATION_INFORMATION
         +0x3d8 NotificationInfoQuotaReference : Ptr64 Void
         +0x3e0 NotificationPacket : Ptr64 _IO_MINI_COMPLETION_PACKET_USER
         +0x3e8 CpuRateControl   : Ptr64 _JOB_CPU_RATE_CONTROL
         +0x3f0 EffectiveSchedulingGroup : Ptr64 Void
         +0x3f8 ReadyTime        : Uint8B
         +0x400 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x408 SiblingJobLinks  : _LIST_ENTRY
         +0x418 ChildJobListHead : _LIST_ENTRY
         +0x428 ParentJob        : Ptr64 _EJOB
         +0x430 RootJob          : Ptr64 _EJOB
         +0x438 IteratorListHead : _LIST_ENTRY
         +0x448 AncestorCount    : Uint8B
         +0x450 Ancestors        : Ptr64 Ptr64 _EJOB
         +0x450 SessionObject    : Ptr64 Void
         +0x458 Accounting       : _EPROCESS_VALUES
         +0x4a8 ShadowActiveProcessCount : Uint4B
         +0x4ac ActiveAuxiliaryProcessCount : Uint4B
         +0x4b0 SequenceNumber   : Uint4B
         +0x4b8 TimerListLock    : Uint8B
         +0x4c0 TimerListHead    : _LIST_ENTRY
         +0x4d0 ContainerId      : _GUID
         +0x4e0 Container        : Ptr64 _ESILO
         +0x4e8 PropertySet      : _PS_PROPERTY_SET
         +0x500 NetRateControl   : Ptr64 _JOB_NET_RATE_CONTROL
         +0x508 IoRateControl    : Ptr64 _JOB_IO_RATE_CONTROL
         +0x510 JobFlags         : Uint4B
         +0x510 CloseDone        : Pos 0, 1 Bit
         +0x510 MultiGroup       : Pos 1, 1 Bit
         +0x510 OutstandingNotification : Pos 2, 1 Bit
         +0x510 NotificationInProgress : Pos 3, 1 Bit
         +0x510 UILimits         : Pos 4, 1 Bit
         +0x510 CpuRateControlActive : Pos 5, 1 Bit
         +0x510 OwnCpuRateControl : Pos 6, 1 Bit
         +0x510 Terminating      : Pos 7, 1 Bit
         +0x510 WorkingSetLock   : Pos 8, 1 Bit
         +0x510 JobFrozen        : Pos 9, 1 Bit
         +0x510 Background       : Pos 10, 1 Bit
         +0x510 WakeNotificationAllocated : Pos 11, 1 Bit
         +0x510 WakeNotificationEnabled : Pos 12, 1 Bit
         +0x510 WakeNotificationPending : Pos 13, 1 Bit
         +0x510 LimitNotificationRequired : Pos 14, 1 Bit
         +0x510 ZeroCountNotificationRequired : Pos 15, 1 Bit
         +0x510 CycleTimeNotificationRequired : Pos 16, 1 Bit
         +0x510 CycleTimeNotificationPending : Pos 17, 1 Bit
         +0x510 TimersVirtualized : Pos 18, 1 Bit
         +0x510 JobSwapped       : Pos 19, 1 Bit
         +0x510 ViolationDetected : Pos 20, 1 Bit
         +0x510 EmptyJobNotified : Pos 21, 1 Bit
         +0x510 NoSystemCharge   : Pos 22, 1 Bit
         +0x510 DropNoWakeCharges : Pos 23, 1 Bit
         +0x510 NoWakeChargePolicyDecided : Pos 24, 1 Bit
         +0x510 NetRateControlActive : Pos 25, 1 Bit
         +0x510 OwnNetRateControl : Pos 26, 1 Bit
         +0x510 IoRateControlActive : Pos 27, 1 Bit
         +0x510 OwnIoRateControl : Pos 28, 1 Bit
         +0x510 IsContainerRoot  : Pos 29, 1 Bit
         +0x510 SpareJobFlags    : Pos 30, 2 Bits
         +0x514 EffectiveHighEdgeFilters : Uint4B
         +0x518 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x520 SharedCommitCharge : Uint8B
      +0x338 EffectivePerProcessUserTimeLimitJob : Ptr64 _EJOB
         +0x000 Event            : _KEVENT
         +0x018 JobLinks         : _LIST_ENTRY
         +0x028 ProcessListHead  : _LIST_ENTRY
         +0x038 JobLock          : _ERESOURCE
         +0x0a0 TotalUserTime    : _LARGE_INTEGER
         +0x0a8 TotalKernelTime  : _LARGE_INTEGER
         +0x0b0 TotalCycleTime   : _LARGE_INTEGER
         +0x0b8 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x0c0 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x0c8 TotalContextSwitches : Uint8B
         +0x0d0 TotalPageFaultCount : Uint4B
         +0x0d4 TotalProcesses   : Uint4B
         +0x0d8 ActiveProcesses  : Uint4B
         +0x0dc TotalTerminatedProcesses : Uint4B
         +0x0e0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x0e8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x0f0 MinimumWorkingSetSize : Uint8B
         +0x0f8 MaximumWorkingSetSize : Uint8B
         +0x100 LimitFlags       : Uint4B
         +0x104 ActiveProcessLimit : Uint4B
         +0x108 Affinity         : _KAFFINITY_EX
         +0x1b0 AccessState      : Ptr64 _JOB_ACCESS_STATE
         +0x1b8 AccessStateQuotaReference : Ptr64 Void
         +0x1c0 UIRestrictionsClass : Uint4B
         +0x1c4 EndOfJobTimeAction : Uint4B
         +0x1c8 CompletionPort   : Ptr64 Void
         +0x1d0 CompletionKey    : Ptr64 Void
         +0x1d8 CompletionCount  : Uint8B
         +0x1e0 SessionId        : Uint4B
         +0x1e4 SchedulingClass  : Uint4B
         +0x1e8 ReadOperationCount : Uint8B
         +0x1f0 WriteOperationCount : Uint8B
         +0x1f8 OtherOperationCount : Uint8B
         +0x200 ReadTransferCount : Uint8B
         +0x208 WriteTransferCount : Uint8B
         +0x210 OtherTransferCount : Uint8B
         +0x218 DiskIoInfo       : _PROCESS_DISK_COUNTERS
         +0x240 ProcessMemoryLimit : Uint8B
         +0x248 JobMemoryLimit   : Uint8B
         +0x250 JobTotalMemoryLimit : Uint8B
         +0x258 PeakProcessMemoryUsed : Uint8B
         +0x260 PeakJobMemoryUsed : Uint8B
         +0x268 EffectiveAffinity : _KAFFINITY_EX
         +0x310 EffectivePerProcessUserTimeLimit : _LARGE_INTEGER
         +0x318 EffectiveMinimumWorkingSetSize : Uint8B
         +0x320 EffectiveMaximumWorkingSetSize : Uint8B
         +0x328 EffectiveProcessMemoryLimit : Uint8B
         +0x330 EffectiveProcessMemoryLimitJob : Ptr64 _EJOB
         +0x338 EffectivePerProcessUserTimeLimitJob : Ptr64 _EJOB
         +0x340 EffectiveDiskIoRateLimitJob : Ptr64 _EJOB
         +0x348 EffectiveNetIoRateLimitJob : Ptr64 _EJOB
         +0x350 EffectiveHeapAttributionJob : Ptr64 _EJOB
         +0x358 EffectiveLimitFlags : Uint4B
         +0x35c EffectiveSchedulingClass : Uint4B
         +0x360 EffectiveFreezeCount : Uint4B
         +0x364 EffectiveBackgroundCount : Uint4B
         +0x368 EffectiveSwapCount : Uint4B
         +0x36c EffectiveNotificationLimitCount : Uint4B
         +0x370 EffectivePriorityClass : UChar
         +0x371 PriorityClass    : UChar
         +0x372 NestingDepth     : UChar
         +0x373 Reserved1        : [1] UChar
         +0x374 CompletionFilter : Uint4B
         +0x378 WakeChannel      : _WNF_STATE_NAME
         +0x378 WakeInfo         : _PS_WAKE_INFORMATION
         +0x3b0 WakeFilter       : _JOBOBJECT_WAKE_FILTER
         +0x3b8 LowEdgeLatchFilter : Uint4B
         +0x3bc OwnedHighEdgeFilters : Uint4B
         +0x3c0 NotificationLink : Ptr64 _EJOB
         +0x3c8 CurrentJobMemoryUsed : Uint8B
         +0x3d0 NotificationInfo : Ptr64 _JOB_NOTIFICATION_INFORMATION
         +0x3d8 NotificationInfoQuotaReference : Ptr64 Void
         +0x3e0 NotificationPacket : Ptr64 _IO_MINI_COMPLETION_PACKET_USER
         +0x3e8 CpuRateControl   : Ptr64 _JOB_CPU_RATE_CONTROL
         +0x3f0 EffectiveSchedulingGroup : Ptr64 Void
         +0x3f8 ReadyTime        : Uint8B
         +0x400 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x408 SiblingJobLinks  : _LIST_ENTRY
         +0x418 ChildJobListHead : _LIST_ENTRY
         +0x428 ParentJob        : Ptr64 _EJOB
         +0x430 RootJob          : Ptr64 _EJOB
         +0x438 IteratorListHead : _LIST_ENTRY
         +0x448 AncestorCount    : Uint8B
         +0x450 Ancestors        : Ptr64 Ptr64 _EJOB
         +0x450 SessionObject    : Ptr64 Void
         +0x458 Accounting       : _EPROCESS_VALUES
         +0x4a8 ShadowActiveProcessCount : Uint4B
         +0x4ac ActiveAuxiliaryProcessCount : Uint4B
         +0x4b0 SequenceNumber   : Uint4B
         +0x4b8 TimerListLock    : Uint8B
         +0x4c0 TimerListHead    : _LIST_ENTRY
         +0x4d0 ContainerId      : _GUID
         +0x4e0 Container        : Ptr64 _ESILO
         +0x4e8 PropertySet      : _PS_PROPERTY_SET
         +0x500 NetRateControl   : Ptr64 _JOB_NET_RATE_CONTROL
         +0x508 IoRateControl    : Ptr64 _JOB_IO_RATE_CONTROL
         +0x510 JobFlags         : Uint4B
         +0x510 CloseDone        : Pos 0, 1 Bit
         +0x510 MultiGroup       : Pos 1, 1 Bit
         +0x510 OutstandingNotification : Pos 2, 1 Bit
         +0x510 NotificationInProgress : Pos 3, 1 Bit
         +0x510 UILimits         : Pos 4, 1 Bit
         +0x510 CpuRateControlActive : Pos 5, 1 Bit
         +0x510 OwnCpuRateControl : Pos 6, 1 Bit
         +0x510 Terminating      : Pos 7, 1 Bit
         +0x510 WorkingSetLock   : Pos 8, 1 Bit
         +0x510 JobFrozen        : Pos 9, 1 Bit
         +0x510 Background       : Pos 10, 1 Bit
         +0x510 WakeNotificationAllocated : Pos 11, 1 Bit
         +0x510 WakeNotificationEnabled : Pos 12, 1 Bit
         +0x510 WakeNotificationPending : Pos 13, 1 Bit
         +0x510 LimitNotificationRequired : Pos 14, 1 Bit
         +0x510 ZeroCountNotificationRequired : Pos 15, 1 Bit
         +0x510 CycleTimeNotificationRequired : Pos 16, 1 Bit
         +0x510 CycleTimeNotificationPending : Pos 17, 1 Bit
         +0x510 TimersVirtualized : Pos 18, 1 Bit
         +0x510 JobSwapped       : Pos 19, 1 Bit
         +0x510 ViolationDetected : Pos 20, 1 Bit
         +0x510 EmptyJobNotified : Pos 21, 1 Bit
         +0x510 NoSystemCharge   : Pos 22, 1 Bit
         +0x510 DropNoWakeCharges : Pos 23, 1 Bit
         +0x510 NoWakeChargePolicyDecided : Pos 24, 1 Bit
         +0x510 NetRateControlActive : Pos 25, 1 Bit
         +0x510 OwnNetRateControl : Pos 26, 1 Bit
         +0x510 IoRateControlActive : Pos 27, 1 Bit
         +0x510 OwnIoRateControl : Pos 28, 1 Bit
         +0x510 IsContainerRoot  : Pos 29, 1 Bit
         +0x510 SpareJobFlags    : Pos 30, 2 Bits
         +0x514 EffectiveHighEdgeFilters : Uint4B
         +0x518 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x520 SharedCommitCharge : Uint8B
      +0x340 EffectiveDiskIoRateLimitJob : Ptr64 _EJOB
         +0x000 Event            : _KEVENT
         +0x018 JobLinks         : _LIST_ENTRY
         +0x028 ProcessListHead  : _LIST_ENTRY
         +0x038 JobLock          : _ERESOURCE
         +0x0a0 TotalUserTime    : _LARGE_INTEGER
         +0x0a8 TotalKernelTime  : _LARGE_INTEGER
         +0x0b0 TotalCycleTime   : _LARGE_INTEGER
         +0x0b8 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x0c0 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x0c8 TotalContextSwitches : Uint8B
         +0x0d0 TotalPageFaultCount : Uint4B
         +0x0d4 TotalProcesses   : Uint4B
         +0x0d8 ActiveProcesses  : Uint4B
         +0x0dc TotalTerminatedProcesses : Uint4B
         +0x0e0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x0e8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x0f0 MinimumWorkingSetSize : Uint8B
         +0x0f8 MaximumWorkingSetSize : Uint8B
         +0x100 LimitFlags       : Uint4B
         +0x104 ActiveProcessLimit : Uint4B
         +0x108 Affinity         : _KAFFINITY_EX
         +0x1b0 AccessState      : Ptr64 _JOB_ACCESS_STATE
         +0x1b8 AccessStateQuotaReference : Ptr64 Void
         +0x1c0 UIRestrictionsClass : Uint4B
         +0x1c4 EndOfJobTimeAction : Uint4B
         +0x1c8 CompletionPort   : Ptr64 Void
         +0x1d0 CompletionKey    : Ptr64 Void
         +0x1d8 CompletionCount  : Uint8B
         +0x1e0 SessionId        : Uint4B
         +0x1e4 SchedulingClass  : Uint4B
         +0x1e8 ReadOperationCount : Uint8B
         +0x1f0 WriteOperationCount : Uint8B
         +0x1f8 OtherOperationCount : Uint8B
         +0x200 ReadTransferCount : Uint8B
         +0x208 WriteTransferCount : Uint8B
         +0x210 OtherTransferCount : Uint8B
         +0x218 DiskIoInfo       : _PROCESS_DISK_COUNTERS
         +0x240 ProcessMemoryLimit : Uint8B
         +0x248 JobMemoryLimit   : Uint8B
         +0x250 JobTotalMemoryLimit : Uint8B
         +0x258 PeakProcessMemoryUsed : Uint8B
         +0x260 PeakJobMemoryUsed : Uint8B
         +0x268 EffectiveAffinity : _KAFFINITY_EX
         +0x310 EffectivePerProcessUserTimeLimit : _LARGE_INTEGER
         +0x318 EffectiveMinimumWorkingSetSize : Uint8B
         +0x320 EffectiveMaximumWorkingSetSize : Uint8B
         +0x328 EffectiveProcessMemoryLimit : Uint8B
         +0x330 EffectiveProcessMemoryLimitJob : Ptr64 _EJOB
         +0x338 EffectivePerProcessUserTimeLimitJob : Ptr64 _EJOB
         +0x340 EffectiveDiskIoRateLimitJob : Ptr64 _EJOB
         +0x348 EffectiveNetIoRateLimitJob : Ptr64 _EJOB
         +0x350 EffectiveHeapAttributionJob : Ptr64 _EJOB
         +0x358 EffectiveLimitFlags : Uint4B
         +0x35c EffectiveSchedulingClass : Uint4B
         +0x360 EffectiveFreezeCount : Uint4B
         +0x364 EffectiveBackgroundCount : Uint4B
         +0x368 EffectiveSwapCount : Uint4B
         +0x36c EffectiveNotificationLimitCount : Uint4B
         +0x370 EffectivePriorityClass : UChar
         +0x371 PriorityClass    : UChar
         +0x372 NestingDepth     : UChar
         +0x373 Reserved1        : [1] UChar
         +0x374 CompletionFilter : Uint4B
         +0x378 WakeChannel      : _WNF_STATE_NAME
         +0x378 WakeInfo         : _PS_WAKE_INFORMATION
         +0x3b0 WakeFilter       : _JOBOBJECT_WAKE_FILTER
         +0x3b8 LowEdgeLatchFilter : Uint4B
         +0x3bc OwnedHighEdgeFilters : Uint4B
         +0x3c0 NotificationLink : Ptr64 _EJOB
         +0x3c8 CurrentJobMemoryUsed : Uint8B
         +0x3d0 NotificationInfo : Ptr64 _JOB_NOTIFICATION_INFORMATION
         +0x3d8 NotificationInfoQuotaReference : Ptr64 Void
         +0x3e0 NotificationPacket : Ptr64 _IO_MINI_COMPLETION_PACKET_USER
         +0x3e8 CpuRateControl   : Ptr64 _JOB_CPU_RATE_CONTROL
         +0x3f0 EffectiveSchedulingGroup : Ptr64 Void
         +0x3f8 ReadyTime        : Uint8B
         +0x400 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x408 SiblingJobLinks  : _LIST_ENTRY
         +0x418 ChildJobListHead : _LIST_ENTRY
         +0x428 ParentJob        : Ptr64 _EJOB
         +0x430 RootJob          : Ptr64 _EJOB
         +0x438 IteratorListHead : _LIST_ENTRY
         +0x448 AncestorCount    : Uint8B
         +0x450 Ancestors        : Ptr64 Ptr64 _EJOB
         +0x450 SessionObject    : Ptr64 Void
         +0x458 Accounting       : _EPROCESS_VALUES
         +0x4a8 ShadowActiveProcessCount : Uint4B
         +0x4ac ActiveAuxiliaryProcessCount : Uint4B
         +0x4b0 SequenceNumber   : Uint4B
         +0x4b8 TimerListLock    : Uint8B
         +0x4c0 TimerListHead    : _LIST_ENTRY
         +0x4d0 ContainerId      : _GUID
         +0x4e0 Container        : Ptr64 _ESILO
         +0x4e8 PropertySet      : _PS_PROPERTY_SET
         +0x500 NetRateControl   : Ptr64 _JOB_NET_RATE_CONTROL
         +0x508 IoRateControl    : Ptr64 _JOB_IO_RATE_CONTROL
         +0x510 JobFlags         : Uint4B
         +0x510 CloseDone        : Pos 0, 1 Bit
         +0x510 MultiGroup       : Pos 1, 1 Bit
         +0x510 OutstandingNotification : Pos 2, 1 Bit
         +0x510 NotificationInProgress : Pos 3, 1 Bit
         +0x510 UILimits         : Pos 4, 1 Bit
         +0x510 CpuRateControlActive : Pos 5, 1 Bit
         +0x510 OwnCpuRateControl : Pos 6, 1 Bit
         +0x510 Terminating      : Pos 7, 1 Bit
         +0x510 WorkingSetLock   : Pos 8, 1 Bit
         +0x510 JobFrozen        : Pos 9, 1 Bit
         +0x510 Background       : Pos 10, 1 Bit
         +0x510 WakeNotificationAllocated : Pos 11, 1 Bit
         +0x510 WakeNotificationEnabled : Pos 12, 1 Bit
         +0x510 WakeNotificationPending : Pos 13, 1 Bit
         +0x510 LimitNotificationRequired : Pos 14, 1 Bit
         +0x510 ZeroCountNotificationRequired : Pos 15, 1 Bit
         +0x510 CycleTimeNotificationRequired : Pos 16, 1 Bit
         +0x510 CycleTimeNotificationPending : Pos 17, 1 Bit
         +0x510 TimersVirtualized : Pos 18, 1 Bit
         +0x510 JobSwapped       : Pos 19, 1 Bit
         +0x510 ViolationDetected : Pos 20, 1 Bit
         +0x510 EmptyJobNotified : Pos 21, 1 Bit
         +0x510 NoSystemCharge   : Pos 22, 1 Bit
         +0x510 DropNoWakeCharges : Pos 23, 1 Bit
         +0x510 NoWakeChargePolicyDecided : Pos 24, 1 Bit
         +0x510 NetRateControlActive : Pos 25, 1 Bit
         +0x510 OwnNetRateControl : Pos 26, 1 Bit
         +0x510 IoRateControlActive : Pos 27, 1 Bit
         +0x510 OwnIoRateControl : Pos 28, 1 Bit
         +0x510 IsContainerRoot  : Pos 29, 1 Bit
         +0x510 SpareJobFlags    : Pos 30, 2 Bits
         +0x514 EffectiveHighEdgeFilters : Uint4B
         +0x518 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x520 SharedCommitCharge : Uint8B
      +0x348 EffectiveNetIoRateLimitJob : Ptr64 _EJOB
         +0x000 Event            : _KEVENT
         +0x018 JobLinks         : _LIST_ENTRY
         +0x028 ProcessListHead  : _LIST_ENTRY
         +0x038 JobLock          : _ERESOURCE
         +0x0a0 TotalUserTime    : _LARGE_INTEGER
         +0x0a8 TotalKernelTime  : _LARGE_INTEGER
         +0x0b0 TotalCycleTime   : _LARGE_INTEGER
         +0x0b8 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x0c0 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x0c8 TotalContextSwitches : Uint8B
         +0x0d0 TotalPageFaultCount : Uint4B
         +0x0d4 TotalProcesses   : Uint4B
         +0x0d8 ActiveProcesses  : Uint4B
         +0x0dc TotalTerminatedProcesses : Uint4B
         +0x0e0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x0e8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x0f0 MinimumWorkingSetSize : Uint8B
         +0x0f8 MaximumWorkingSetSize : Uint8B
         +0x100 LimitFlags       : Uint4B
         +0x104 ActiveProcessLimit : Uint4B
         +0x108 Affinity         : _KAFFINITY_EX
         +0x1b0 AccessState      : Ptr64 _JOB_ACCESS_STATE
         +0x1b8 AccessStateQuotaReference : Ptr64 Void
         +0x1c0 UIRestrictionsClass : Uint4B
         +0x1c4 EndOfJobTimeAction : Uint4B
         +0x1c8 CompletionPort   : Ptr64 Void
         +0x1d0 CompletionKey    : Ptr64 Void
         +0x1d8 CompletionCount  : Uint8B
         +0x1e0 SessionId        : Uint4B
         +0x1e4 SchedulingClass  : Uint4B
         +0x1e8 ReadOperationCount : Uint8B
         +0x1f0 WriteOperationCount : Uint8B
         +0x1f8 OtherOperationCount : Uint8B
         +0x200 ReadTransferCount : Uint8B
         +0x208 WriteTransferCount : Uint8B
         +0x210 OtherTransferCount : Uint8B
         +0x218 DiskIoInfo       : _PROCESS_DISK_COUNTERS
         +0x240 ProcessMemoryLimit : Uint8B
         +0x248 JobMemoryLimit   : Uint8B
         +0x250 JobTotalMemoryLimit : Uint8B
         +0x258 PeakProcessMemoryUsed : Uint8B
         +0x260 PeakJobMemoryUsed : Uint8B
         +0x268 EffectiveAffinity : _KAFFINITY_EX
         +0x310 EffectivePerProcessUserTimeLimit : _LARGE_INTEGER
         +0x318 EffectiveMinimumWorkingSetSize : Uint8B
         +0x320 EffectiveMaximumWorkingSetSize : Uint8B
         +0x328 EffectiveProcessMemoryLimit : Uint8B
         +0x330 EffectiveProcessMemoryLimitJob : Ptr64 _EJOB
         +0x338 EffectivePerProcessUserTimeLimitJob : Ptr64 _EJOB
         +0x340 EffectiveDiskIoRateLimitJob : Ptr64 _EJOB
         +0x348 EffectiveNetIoRateLimitJob : Ptr64 _EJOB
         +0x350 EffectiveHeapAttributionJob : Ptr64 _EJOB
         +0x358 EffectiveLimitFlags : Uint4B
         +0x35c EffectiveSchedulingClass : Uint4B
         +0x360 EffectiveFreezeCount : Uint4B
         +0x364 EffectiveBackgroundCount : Uint4B
         +0x368 EffectiveSwapCount : Uint4B
         +0x36c EffectiveNotificationLimitCount : Uint4B
         +0x370 EffectivePriorityClass : UChar
         +0x371 PriorityClass    : UChar
         +0x372 NestingDepth     : UChar
         +0x373 Reserved1        : [1] UChar
         +0x374 CompletionFilter : Uint4B
         +0x378 WakeChannel      : _WNF_STATE_NAME
         +0x378 WakeInfo         : _PS_WAKE_INFORMATION
         +0x3b0 WakeFilter       : _JOBOBJECT_WAKE_FILTER
         +0x3b8 LowEdgeLatchFilter : Uint4B
         +0x3bc OwnedHighEdgeFilters : Uint4B
         +0x3c0 NotificationLink : Ptr64 _EJOB
         +0x3c8 CurrentJobMemoryUsed : Uint8B
         +0x3d0 NotificationInfo : Ptr64 _JOB_NOTIFICATION_INFORMATION
         +0x3d8 NotificationInfoQuotaReference : Ptr64 Void
         +0x3e0 NotificationPacket : Ptr64 _IO_MINI_COMPLETION_PACKET_USER
         +0x3e8 CpuRateControl   : Ptr64 _JOB_CPU_RATE_CONTROL
         +0x3f0 EffectiveSchedulingGroup : Ptr64 Void
         +0x3f8 ReadyTime        : Uint8B
         +0x400 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x408 SiblingJobLinks  : _LIST_ENTRY
         +0x418 ChildJobListHead : _LIST_ENTRY
         +0x428 ParentJob        : Ptr64 _EJOB
         +0x430 RootJob          : Ptr64 _EJOB
         +0x438 IteratorListHead : _LIST_ENTRY
         +0x448 AncestorCount    : Uint8B
         +0x450 Ancestors        : Ptr64 Ptr64 _EJOB
         +0x450 SessionObject    : Ptr64 Void
         +0x458 Accounting       : _EPROCESS_VALUES
         +0x4a8 ShadowActiveProcessCount : Uint4B
         +0x4ac ActiveAuxiliaryProcessCount : Uint4B
         +0x4b0 SequenceNumber   : Uint4B
         +0x4b8 TimerListLock    : Uint8B
         +0x4c0 TimerListHead    : _LIST_ENTRY
         +0x4d0 ContainerId      : _GUID
         +0x4e0 Container        : Ptr64 _ESILO
         +0x4e8 PropertySet      : _PS_PROPERTY_SET
         +0x500 NetRateControl   : Ptr64 _JOB_NET_RATE_CONTROL
         +0x508 IoRateControl    : Ptr64 _JOB_IO_RATE_CONTROL
         +0x510 JobFlags         : Uint4B
         +0x510 CloseDone        : Pos 0, 1 Bit
         +0x510 MultiGroup       : Pos 1, 1 Bit
         +0x510 OutstandingNotification : Pos 2, 1 Bit
         +0x510 NotificationInProgress : Pos 3, 1 Bit
         +0x510 UILimits         : Pos 4, 1 Bit
         +0x510 CpuRateControlActive : Pos 5, 1 Bit
         +0x510 OwnCpuRateControl : Pos 6, 1 Bit
         +0x510 Terminating      : Pos 7, 1 Bit
         +0x510 WorkingSetLock   : Pos 8, 1 Bit
         +0x510 JobFrozen        : Pos 9, 1 Bit
         +0x510 Background       : Pos 10, 1 Bit
         +0x510 WakeNotificationAllocated : Pos 11, 1 Bit
         +0x510 WakeNotificationEnabled : Pos 12, 1 Bit
         +0x510 WakeNotificationPending : Pos 13, 1 Bit
         +0x510 LimitNotificationRequired : Pos 14, 1 Bit
         +0x510 ZeroCountNotificationRequired : Pos 15, 1 Bit
         +0x510 CycleTimeNotificationRequired : Pos 16, 1 Bit
         +0x510 CycleTimeNotificationPending : Pos 17, 1 Bit
         +0x510 TimersVirtualized : Pos 18, 1 Bit
         +0x510 JobSwapped       : Pos 19, 1 Bit
         +0x510 ViolationDetected : Pos 20, 1 Bit
         +0x510 EmptyJobNotified : Pos 21, 1 Bit
         +0x510 NoSystemCharge   : Pos 22, 1 Bit
         +0x510 DropNoWakeCharges : Pos 23, 1 Bit
         +0x510 NoWakeChargePolicyDecided : Pos 24, 1 Bit
         +0x510 NetRateControlActive : Pos 25, 1 Bit
         +0x510 OwnNetRateControl : Pos 26, 1 Bit
         +0x510 IoRateControlActive : Pos 27, 1 Bit
         +0x510 OwnIoRateControl : Pos 28, 1 Bit
         +0x510 IsContainerRoot  : Pos 29, 1 Bit
         +0x510 SpareJobFlags    : Pos 30, 2 Bits
         +0x514 EffectiveHighEdgeFilters : Uint4B
         +0x518 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x520 SharedCommitCharge : Uint8B
      +0x350 EffectiveHeapAttributionJob : Ptr64 _EJOB
         +0x000 Event            : _KEVENT
         +0x018 JobLinks         : _LIST_ENTRY
         +0x028 ProcessListHead  : _LIST_ENTRY
         +0x038 JobLock          : _ERESOURCE
         +0x0a0 TotalUserTime    : _LARGE_INTEGER
         +0x0a8 TotalKernelTime  : _LARGE_INTEGER
         +0x0b0 TotalCycleTime   : _LARGE_INTEGER
         +0x0b8 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x0c0 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x0c8 TotalContextSwitches : Uint8B
         +0x0d0 TotalPageFaultCount : Uint4B
         +0x0d4 TotalProcesses   : Uint4B
         +0x0d8 ActiveProcesses  : Uint4B
         +0x0dc TotalTerminatedProcesses : Uint4B
         +0x0e0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x0e8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x0f0 MinimumWorkingSetSize : Uint8B
         +0x0f8 MaximumWorkingSetSize : Uint8B
         +0x100 LimitFlags       : Uint4B
         +0x104 ActiveProcessLimit : Uint4B
         +0x108 Affinity         : _KAFFINITY_EX
         +0x1b0 AccessState      : Ptr64 _JOB_ACCESS_STATE
         +0x1b8 AccessStateQuotaReference : Ptr64 Void
         +0x1c0 UIRestrictionsClass : Uint4B
         +0x1c4 EndOfJobTimeAction : Uint4B
         +0x1c8 CompletionPort   : Ptr64 Void
         +0x1d0 CompletionKey    : Ptr64 Void
         +0x1d8 CompletionCount  : Uint8B
         +0x1e0 SessionId        : Uint4B
         +0x1e4 SchedulingClass  : Uint4B
         +0x1e8 ReadOperationCount : Uint8B
         +0x1f0 WriteOperationCount : Uint8B
         +0x1f8 OtherOperationCount : Uint8B
         +0x200 ReadTransferCount : Uint8B
         +0x208 WriteTransferCount : Uint8B
         +0x210 OtherTransferCount : Uint8B
         +0x218 DiskIoInfo       : _PROCESS_DISK_COUNTERS
         +0x240 ProcessMemoryLimit : Uint8B
         +0x248 JobMemoryLimit   : Uint8B
         +0x250 JobTotalMemoryLimit : Uint8B
         +0x258 PeakProcessMemoryUsed : Uint8B
         +0x260 PeakJobMemoryUsed : Uint8B
         +0x268 EffectiveAffinity : _KAFFINITY_EX
         +0x310 EffectivePerProcessUserTimeLimit : _LARGE_INTEGER
         +0x318 EffectiveMinimumWorkingSetSize : Uint8B
         +0x320 EffectiveMaximumWorkingSetSize : Uint8B
         +0x328 EffectiveProcessMemoryLimit : Uint8B
         +0x330 EffectiveProcessMemoryLimitJob : Ptr64 _EJOB
         +0x338 EffectivePerProcessUserTimeLimitJob : Ptr64 _EJOB
         +0x340 EffectiveDiskIoRateLimitJob : Ptr64 _EJOB
         +0x348 EffectiveNetIoRateLimitJob : Ptr64 _EJOB
         +0x350 EffectiveHeapAttributionJob : Ptr64 _EJOB
         +0x358 EffectiveLimitFlags : Uint4B
         +0x35c EffectiveSchedulingClass : Uint4B
         +0x360 EffectiveFreezeCount : Uint4B
         +0x364 EffectiveBackgroundCount : Uint4B
         +0x368 EffectiveSwapCount : Uint4B
         +0x36c EffectiveNotificationLimitCount : Uint4B
         +0x370 EffectivePriorityClass : UChar
         +0x371 PriorityClass    : UChar
         +0x372 NestingDepth     : UChar
         +0x373 Reserved1        : [1] UChar
         +0x374 CompletionFilter : Uint4B
         +0x378 WakeChannel      : _WNF_STATE_NAME
         +0x378 WakeInfo         : _PS_WAKE_INFORMATION
         +0x3b0 WakeFilter       : _JOBOBJECT_WAKE_FILTER
         +0x3b8 LowEdgeLatchFilter : Uint4B
         +0x3bc OwnedHighEdgeFilters : Uint4B
         +0x3c0 NotificationLink : Ptr64 _EJOB
         +0x3c8 CurrentJobMemoryUsed : Uint8B
         +0x3d0 NotificationInfo : Ptr64 _JOB_NOTIFICATION_INFORMATION
         +0x3d8 NotificationInfoQuotaReference : Ptr64 Void
         +0x3e0 NotificationPacket : Ptr64 _IO_MINI_COMPLETION_PACKET_USER
         +0x3e8 CpuRateControl   : Ptr64 _JOB_CPU_RATE_CONTROL
         +0x3f0 EffectiveSchedulingGroup : Ptr64 Void
         +0x3f8 ReadyTime        : Uint8B
         +0x400 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x408 SiblingJobLinks  : _LIST_ENTRY
         +0x418 ChildJobListHead : _LIST_ENTRY
         +0x428 ParentJob        : Ptr64 _EJOB
         +0x430 RootJob          : Ptr64 _EJOB
         +0x438 IteratorListHead : _LIST_ENTRY
         +0x448 AncestorCount    : Uint8B
         +0x450 Ancestors        : Ptr64 Ptr64 _EJOB
         +0x450 SessionObject    : Ptr64 Void
         +0x458 Accounting       : _EPROCESS_VALUES
         +0x4a8 ShadowActiveProcessCount : Uint4B
         +0x4ac ActiveAuxiliaryProcessCount : Uint4B
         +0x4b0 SequenceNumber   : Uint4B
         +0x4b8 TimerListLock    : Uint8B
         +0x4c0 TimerListHead    : _LIST_ENTRY
         +0x4d0 ContainerId      : _GUID
         +0x4e0 Container        : Ptr64 _ESILO
         +0x4e8 PropertySet      : _PS_PROPERTY_SET
         +0x500 NetRateControl   : Ptr64 _JOB_NET_RATE_CONTROL
         +0x508 IoRateControl    : Ptr64 _JOB_IO_RATE_CONTROL
         +0x510 JobFlags         : Uint4B
         +0x510 CloseDone        : Pos 0, 1 Bit
         +0x510 MultiGroup       : Pos 1, 1 Bit
         +0x510 OutstandingNotification : Pos 2, 1 Bit
         +0x510 NotificationInProgress : Pos 3, 1 Bit
         +0x510 UILimits         : Pos 4, 1 Bit
         +0x510 CpuRateControlActive : Pos 5, 1 Bit
         +0x510 OwnCpuRateControl : Pos 6, 1 Bit
         +0x510 Terminating      : Pos 7, 1 Bit
         +0x510 WorkingSetLock   : Pos 8, 1 Bit
         +0x510 JobFrozen        : Pos 9, 1 Bit
         +0x510 Background       : Pos 10, 1 Bit
         +0x510 WakeNotificationAllocated : Pos 11, 1 Bit
         +0x510 WakeNotificationEnabled : Pos 12, 1 Bit
         +0x510 WakeNotificationPending : Pos 13, 1 Bit
         +0x510 LimitNotificationRequired : Pos 14, 1 Bit
         +0x510 ZeroCountNotificationRequired : Pos 15, 1 Bit
         +0x510 CycleTimeNotificationRequired : Pos 16, 1 Bit
         +0x510 CycleTimeNotificationPending : Pos 17, 1 Bit
         +0x510 TimersVirtualized : Pos 18, 1 Bit
         +0x510 JobSwapped       : Pos 19, 1 Bit
         +0x510 ViolationDetected : Pos 20, 1 Bit
         +0x510 EmptyJobNotified : Pos 21, 1 Bit
         +0x510 NoSystemCharge   : Pos 22, 1 Bit
         +0x510 DropNoWakeCharges : Pos 23, 1 Bit
         +0x510 NoWakeChargePolicyDecided : Pos 24, 1 Bit
         +0x510 NetRateControlActive : Pos 25, 1 Bit
         +0x510 OwnNetRateControl : Pos 26, 1 Bit
         +0x510 IoRateControlActive : Pos 27, 1 Bit
         +0x510 OwnIoRateControl : Pos 28, 1 Bit
         +0x510 IsContainerRoot  : Pos 29, 1 Bit
         +0x510 SpareJobFlags    : Pos 30, 2 Bits
         +0x514 EffectiveHighEdgeFilters : Uint4B
         +0x518 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x520 SharedCommitCharge : Uint8B
      +0x358 EffectiveLimitFlags : Uint4B
      +0x35c EffectiveSchedulingClass : Uint4B
      +0x360 EffectiveFreezeCount : Uint4B
      +0x364 EffectiveBackgroundCount : Uint4B
      +0x368 EffectiveSwapCount : Uint4B
      +0x36c EffectiveNotificationLimitCount : Uint4B
      +0x370 EffectivePriorityClass : UChar
      +0x371 PriorityClass    : UChar
      +0x372 NestingDepth     : UChar
      +0x373 Reserved1        : [1] UChar
      +0x374 CompletionFilter : Uint4B
      +0x378 WakeChannel      : _WNF_STATE_NAME
         +0x000 Data             : [2] Uint4B
      +0x378 WakeInfo         : _PS_WAKE_INFORMATION
         +0x000 NotificationChannel : Uint8B
         +0x008 WakeCounters     : [5] Uint8B
         +0x030 NoWakeCounter    : Uint8B
      +0x3b0 WakeFilter       : _JOBOBJECT_WAKE_FILTER
         +0x000 HighEdgeFilter   : Uint4B
         +0x004 LowEdgeFilter    : Uint4B
      +0x3b8 LowEdgeLatchFilter : Uint4B
      +0x3bc OwnedHighEdgeFilters : Uint4B
      +0x3c0 NotificationLink : Ptr64 _EJOB
         +0x000 Event            : _KEVENT
         +0x018 JobLinks         : _LIST_ENTRY
         +0x028 ProcessListHead  : _LIST_ENTRY
         +0x038 JobLock          : _ERESOURCE
         +0x0a0 TotalUserTime    : _LARGE_INTEGER
         +0x0a8 TotalKernelTime  : _LARGE_INTEGER
         +0x0b0 TotalCycleTime   : _LARGE_INTEGER
         +0x0b8 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x0c0 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x0c8 TotalContextSwitches : Uint8B
         +0x0d0 TotalPageFaultCount : Uint4B
         +0x0d4 TotalProcesses   : Uint4B
         +0x0d8 ActiveProcesses  : Uint4B
         +0x0dc TotalTerminatedProcesses : Uint4B
         +0x0e0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x0e8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x0f0 MinimumWorkingSetSize : Uint8B
         +0x0f8 MaximumWorkingSetSize : Uint8B
         +0x100 LimitFlags       : Uint4B
         +0x104 ActiveProcessLimit : Uint4B
         +0x108 Affinity         : _KAFFINITY_EX
         +0x1b0 AccessState      : Ptr64 _JOB_ACCESS_STATE
         +0x1b8 AccessStateQuotaReference : Ptr64 Void
         +0x1c0 UIRestrictionsClass : Uint4B
         +0x1c4 EndOfJobTimeAction : Uint4B
         +0x1c8 CompletionPort   : Ptr64 Void
         +0x1d0 CompletionKey    : Ptr64 Void
         +0x1d8 CompletionCount  : Uint8B
         +0x1e0 SessionId        : Uint4B
         +0x1e4 SchedulingClass  : Uint4B
         +0x1e8 ReadOperationCount : Uint8B
         +0x1f0 WriteOperationCount : Uint8B
         +0x1f8 OtherOperationCount : Uint8B
         +0x200 ReadTransferCount : Uint8B
         +0x208 WriteTransferCount : Uint8B
         +0x210 OtherTransferCount : Uint8B
         +0x218 DiskIoInfo       : _PROCESS_DISK_COUNTERS
         +0x240 ProcessMemoryLimit : Uint8B
         +0x248 JobMemoryLimit   : Uint8B
         +0x250 JobTotalMemoryLimit : Uint8B
         +0x258 PeakProcessMemoryUsed : Uint8B
         +0x260 PeakJobMemoryUsed : Uint8B
         +0x268 EffectiveAffinity : _KAFFINITY_EX
         +0x310 EffectivePerProcessUserTimeLimit : _LARGE_INTEGER
         +0x318 EffectiveMinimumWorkingSetSize : Uint8B
         +0x320 EffectiveMaximumWorkingSetSize : Uint8B
         +0x328 EffectiveProcessMemoryLimit : Uint8B
         +0x330 EffectiveProcessMemoryLimitJob : Ptr64 _EJOB
         +0x338 EffectivePerProcessUserTimeLimitJob : Ptr64 _EJOB
         +0x340 EffectiveDiskIoRateLimitJob : Ptr64 _EJOB
         +0x348 EffectiveNetIoRateLimitJob : Ptr64 _EJOB
         +0x350 EffectiveHeapAttributionJob : Ptr64 _EJOB
         +0x358 EffectiveLimitFlags : Uint4B
         +0x35c EffectiveSchedulingClass : Uint4B
         +0x360 EffectiveFreezeCount : Uint4B
         +0x364 EffectiveBackgroundCount : Uint4B
         +0x368 EffectiveSwapCount : Uint4B
         +0x36c EffectiveNotificationLimitCount : Uint4B
         +0x370 EffectivePriorityClass : UChar
         +0x371 PriorityClass    : UChar
         +0x372 NestingDepth     : UChar
         +0x373 Reserved1        : [1] UChar
         +0x374 CompletionFilter : Uint4B
         +0x378 WakeChannel      : _WNF_STATE_NAME
         +0x378 WakeInfo         : _PS_WAKE_INFORMATION
         +0x3b0 WakeFilter       : _JOBOBJECT_WAKE_FILTER
         +0x3b8 LowEdgeLatchFilter : Uint4B
         +0x3bc OwnedHighEdgeFilters : Uint4B
         +0x3c0 NotificationLink : Ptr64 _EJOB
         +0x3c8 CurrentJobMemoryUsed : Uint8B
         +0x3d0 NotificationInfo : Ptr64 _JOB_NOTIFICATION_INFORMATION
         +0x3d8 NotificationInfoQuotaReference : Ptr64 Void
         +0x3e0 NotificationPacket : Ptr64 _IO_MINI_COMPLETION_PACKET_USER
         +0x3e8 CpuRateControl   : Ptr64 _JOB_CPU_RATE_CONTROL
         +0x3f0 EffectiveSchedulingGroup : Ptr64 Void
         +0x3f8 ReadyTime        : Uint8B
         +0x400 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x408 SiblingJobLinks  : _LIST_ENTRY
         +0x418 ChildJobListHead : _LIST_ENTRY
         +0x428 ParentJob        : Ptr64 _EJOB
         +0x430 RootJob          : Ptr64 _EJOB
         +0x438 IteratorListHead : _LIST_ENTRY
         +0x448 AncestorCount    : Uint8B
         +0x450 Ancestors        : Ptr64 Ptr64 _EJOB
         +0x450 SessionObject    : Ptr64 Void
         +0x458 Accounting       : _EPROCESS_VALUES
         +0x4a8 ShadowActiveProcessCount : Uint4B
         +0x4ac ActiveAuxiliaryProcessCount : Uint4B
         +0x4b0 SequenceNumber   : Uint4B
         +0x4b8 TimerListLock    : Uint8B
         +0x4c0 TimerListHead    : _LIST_ENTRY
         +0x4d0 ContainerId      : _GUID
         +0x4e0 Container        : Ptr64 _ESILO
         +0x4e8 PropertySet      : _PS_PROPERTY_SET
         +0x500 NetRateControl   : Ptr64 _JOB_NET_RATE_CONTROL
         +0x508 IoRateControl    : Ptr64 _JOB_IO_RATE_CONTROL
         +0x510 JobFlags         : Uint4B
         +0x510 CloseDone        : Pos 0, 1 Bit
         +0x510 MultiGroup       : Pos 1, 1 Bit
         +0x510 OutstandingNotification : Pos 2, 1 Bit
         +0x510 NotificationInProgress : Pos 3, 1 Bit
         +0x510 UILimits         : Pos 4, 1 Bit
         +0x510 CpuRateControlActive : Pos 5, 1 Bit
         +0x510 OwnCpuRateControl : Pos 6, 1 Bit
         +0x510 Terminating      : Pos 7, 1 Bit
         +0x510 WorkingSetLock   : Pos 8, 1 Bit
         +0x510 JobFrozen        : Pos 9, 1 Bit
         +0x510 Background       : Pos 10, 1 Bit
         +0x510 WakeNotificationAllocated : Pos 11, 1 Bit
         +0x510 WakeNotificationEnabled : Pos 12, 1 Bit
         +0x510 WakeNotificationPending : Pos 13, 1 Bit
         +0x510 LimitNotificationRequired : Pos 14, 1 Bit
         +0x510 ZeroCountNotificationRequired : Pos 15, 1 Bit
         +0x510 CycleTimeNotificationRequired : Pos 16, 1 Bit
         +0x510 CycleTimeNotificationPending : Pos 17, 1 Bit
         +0x510 TimersVirtualized : Pos 18, 1 Bit
         +0x510 JobSwapped       : Pos 19, 1 Bit
         +0x510 ViolationDetected : Pos 20, 1 Bit
         +0x510 EmptyJobNotified : Pos 21, 1 Bit
         +0x510 NoSystemCharge   : Pos 22, 1 Bit
         +0x510 DropNoWakeCharges : Pos 23, 1 Bit
         +0x510 NoWakeChargePolicyDecided : Pos 24, 1 Bit
         +0x510 NetRateControlActive : Pos 25, 1 Bit
         +0x510 OwnNetRateControl : Pos 26, 1 Bit
         +0x510 IoRateControlActive : Pos 27, 1 Bit
         +0x510 OwnIoRateControl : Pos 28, 1 Bit
         +0x510 IsContainerRoot  : Pos 29, 1 Bit
         +0x510 SpareJobFlags    : Pos 30, 2 Bits
         +0x514 EffectiveHighEdgeFilters : Uint4B
         +0x518 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x520 SharedCommitCharge : Uint8B
      +0x3c8 CurrentJobMemoryUsed : Uint8B
      +0x3d0 NotificationInfo : Ptr64 _JOB_NOTIFICATION_INFORMATION
      +0x3d8 NotificationInfoQuotaReference : Ptr64 Void
      +0x3e0 NotificationPacket : Ptr64 _IO_MINI_COMPLETION_PACKET_USER
         +0x000 ListEntry        : _LIST_ENTRY
         +0x010 PacketType       : Uint4B
         +0x018 KeyContext       : Ptr64 Void
         +0x020 ApcContext       : Ptr64 Void
         +0x028 IoStatus         : Int4B
         +0x030 IoStatusInformation : Uint8B
         +0x038 MiniPacketCallback : Ptr64           void 
         +0x040 Context          : Ptr64 Void
         +0x048 Allocated        : UChar
      +0x3e8 CpuRateControl   : Ptr64 _JOB_CPU_RATE_CONTROL
      +0x3f0 EffectiveSchedulingGroup : Ptr64 Void
      +0x3f8 ReadyTime        : Uint8B
      +0x400 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 60 Bits
         +0x000 Value            : Uint8B
         +0x000 Ptr              : Ptr64 Void
      +0x408 SiblingJobLinks  : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x418 ChildJobListHead : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x428 ParentJob        : Ptr64 _EJOB
         +0x000 Event            : _KEVENT
         +0x018 JobLinks         : _LIST_ENTRY
         +0x028 ProcessListHead  : _LIST_ENTRY
         +0x038 JobLock          : _ERESOURCE
         +0x0a0 TotalUserTime    : _LARGE_INTEGER
         +0x0a8 TotalKernelTime  : _LARGE_INTEGER
         +0x0b0 TotalCycleTime   : _LARGE_INTEGER
         +0x0b8 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x0c0 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x0c8 TotalContextSwitches : Uint8B
         +0x0d0 TotalPageFaultCount : Uint4B
         +0x0d4 TotalProcesses   : Uint4B
         +0x0d8 ActiveProcesses  : Uint4B
         +0x0dc TotalTerminatedProcesses : Uint4B
         +0x0e0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x0e8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x0f0 MinimumWorkingSetSize : Uint8B
         +0x0f8 MaximumWorkingSetSize : Uint8B
         +0x100 LimitFlags       : Uint4B
         +0x104 ActiveProcessLimit : Uint4B
         +0x108 Affinity         : _KAFFINITY_EX
         +0x1b0 AccessState      : Ptr64 _JOB_ACCESS_STATE
         +0x1b8 AccessStateQuotaReference : Ptr64 Void
         +0x1c0 UIRestrictionsClass : Uint4B
         +0x1c4 EndOfJobTimeAction : Uint4B
         +0x1c8 CompletionPort   : Ptr64 Void
         +0x1d0 CompletionKey    : Ptr64 Void
         +0x1d8 CompletionCount  : Uint8B
         +0x1e0 SessionId        : Uint4B
         +0x1e4 SchedulingClass  : Uint4B
         +0x1e8 ReadOperationCount : Uint8B
         +0x1f0 WriteOperationCount : Uint8B
         +0x1f8 OtherOperationCount : Uint8B
         +0x200 ReadTransferCount : Uint8B
         +0x208 WriteTransferCount : Uint8B
         +0x210 OtherTransferCount : Uint8B
         +0x218 DiskIoInfo       : _PROCESS_DISK_COUNTERS
         +0x240 ProcessMemoryLimit : Uint8B
         +0x248 JobMemoryLimit   : Uint8B
         +0x250 JobTotalMemoryLimit : Uint8B
         +0x258 PeakProcessMemoryUsed : Uint8B
         +0x260 PeakJobMemoryUsed : Uint8B
         +0x268 EffectiveAffinity : _KAFFINITY_EX
         +0x310 EffectivePerProcessUserTimeLimit : _LARGE_INTEGER
         +0x318 EffectiveMinimumWorkingSetSize : Uint8B
         +0x320 EffectiveMaximumWorkingSetSize : Uint8B
         +0x328 EffectiveProcessMemoryLimit : Uint8B
         +0x330 EffectiveProcessMemoryLimitJob : Ptr64 _EJOB
         +0x338 EffectivePerProcessUserTimeLimitJob : Ptr64 _EJOB
         +0x340 EffectiveDiskIoRateLimitJob : Ptr64 _EJOB
         +0x348 EffectiveNetIoRateLimitJob : Ptr64 _EJOB
         +0x350 EffectiveHeapAttributionJob : Ptr64 _EJOB
         +0x358 EffectiveLimitFlags : Uint4B
         +0x35c EffectiveSchedulingClass : Uint4B
         +0x360 EffectiveFreezeCount : Uint4B
         +0x364 EffectiveBackgroundCount : Uint4B
         +0x368 EffectiveSwapCount : Uint4B
         +0x36c EffectiveNotificationLimitCount : Uint4B
         +0x370 EffectivePriorityClass : UChar
         +0x371 PriorityClass    : UChar
         +0x372 NestingDepth     : UChar
         +0x373 Reserved1        : [1] UChar
         +0x374 CompletionFilter : Uint4B
         +0x378 WakeChannel      : _WNF_STATE_NAME
         +0x378 WakeInfo         : _PS_WAKE_INFORMATION
         +0x3b0 WakeFilter       : _JOBOBJECT_WAKE_FILTER
         +0x3b8 LowEdgeLatchFilter : Uint4B
         +0x3bc OwnedHighEdgeFilters : Uint4B
         +0x3c0 NotificationLink : Ptr64 _EJOB
         +0x3c8 CurrentJobMemoryUsed : Uint8B
         +0x3d0 NotificationInfo : Ptr64 _JOB_NOTIFICATION_INFORMATION
         +0x3d8 NotificationInfoQuotaReference : Ptr64 Void
         +0x3e0 NotificationPacket : Ptr64 _IO_MINI_COMPLETION_PACKET_USER
         +0x3e8 CpuRateControl   : Ptr64 _JOB_CPU_RATE_CONTROL
         +0x3f0 EffectiveSchedulingGroup : Ptr64 Void
         +0x3f8 ReadyTime        : Uint8B
         +0x400 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x408 SiblingJobLinks  : _LIST_ENTRY
         +0x418 ChildJobListHead : _LIST_ENTRY
         +0x428 ParentJob        : Ptr64 _EJOB
         +0x430 RootJob          : Ptr64 _EJOB
         +0x438 IteratorListHead : _LIST_ENTRY
         +0x448 AncestorCount    : Uint8B
         +0x450 Ancestors        : Ptr64 Ptr64 _EJOB
         +0x450 SessionObject    : Ptr64 Void
         +0x458 Accounting       : _EPROCESS_VALUES
         +0x4a8 ShadowActiveProcessCount : Uint4B
         +0x4ac ActiveAuxiliaryProcessCount : Uint4B
         +0x4b0 SequenceNumber   : Uint4B
         +0x4b8 TimerListLock    : Uint8B
         +0x4c0 TimerListHead    : _LIST_ENTRY
         +0x4d0 ContainerId      : _GUID
         +0x4e0 Container        : Ptr64 _ESILO
         +0x4e8 PropertySet      : _PS_PROPERTY_SET
         +0x500 NetRateControl   : Ptr64 _JOB_NET_RATE_CONTROL
         +0x508 IoRateControl    : Ptr64 _JOB_IO_RATE_CONTROL
         +0x510 JobFlags         : Uint4B
         +0x510 CloseDone        : Pos 0, 1 Bit
         +0x510 MultiGroup       : Pos 1, 1 Bit
         +0x510 OutstandingNotification : Pos 2, 1 Bit
         +0x510 NotificationInProgress : Pos 3, 1 Bit
         +0x510 UILimits         : Pos 4, 1 Bit
         +0x510 CpuRateControlActive : Pos 5, 1 Bit
         +0x510 OwnCpuRateControl : Pos 6, 1 Bit
         +0x510 Terminating      : Pos 7, 1 Bit
         +0x510 WorkingSetLock   : Pos 8, 1 Bit
         +0x510 JobFrozen        : Pos 9, 1 Bit
         +0x510 Background       : Pos 10, 1 Bit
         +0x510 WakeNotificationAllocated : Pos 11, 1 Bit
         +0x510 WakeNotificationEnabled : Pos 12, 1 Bit
         +0x510 WakeNotificationPending : Pos 13, 1 Bit
         +0x510 LimitNotificationRequired : Pos 14, 1 Bit
         +0x510 ZeroCountNotificationRequired : Pos 15, 1 Bit
         +0x510 CycleTimeNotificationRequired : Pos 16, 1 Bit
         +0x510 CycleTimeNotificationPending : Pos 17, 1 Bit
         +0x510 TimersVirtualized : Pos 18, 1 Bit
         +0x510 JobSwapped       : Pos 19, 1 Bit
         +0x510 ViolationDetected : Pos 20, 1 Bit
         +0x510 EmptyJobNotified : Pos 21, 1 Bit
         +0x510 NoSystemCharge   : Pos 22, 1 Bit
         +0x510 DropNoWakeCharges : Pos 23, 1 Bit
         +0x510 NoWakeChargePolicyDecided : Pos 24, 1 Bit
         +0x510 NetRateControlActive : Pos 25, 1 Bit
         +0x510 OwnNetRateControl : Pos 26, 1 Bit
         +0x510 IoRateControlActive : Pos 27, 1 Bit
         +0x510 OwnIoRateControl : Pos 28, 1 Bit
         +0x510 IsContainerRoot  : Pos 29, 1 Bit
         +0x510 SpareJobFlags    : Pos 30, 2 Bits
         +0x514 EffectiveHighEdgeFilters : Uint4B
         +0x518 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x520 SharedCommitCharge : Uint8B
      +0x430 RootJob          : Ptr64 _EJOB
         +0x000 Event            : _KEVENT
         +0x018 JobLinks         : _LIST_ENTRY
         +0x028 ProcessListHead  : _LIST_ENTRY
         +0x038 JobLock          : _ERESOURCE
         +0x0a0 TotalUserTime    : _LARGE_INTEGER
         +0x0a8 TotalKernelTime  : _LARGE_INTEGER
         +0x0b0 TotalCycleTime   : _LARGE_INTEGER
         +0x0b8 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x0c0 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x0c8 TotalContextSwitches : Uint8B
         +0x0d0 TotalPageFaultCount : Uint4B
         +0x0d4 TotalProcesses   : Uint4B
         +0x0d8 ActiveProcesses  : Uint4B
         +0x0dc TotalTerminatedProcesses : Uint4B
         +0x0e0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x0e8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x0f0 MinimumWorkingSetSize : Uint8B
         +0x0f8 MaximumWorkingSetSize : Uint8B
         +0x100 LimitFlags       : Uint4B
         +0x104 ActiveProcessLimit : Uint4B
         +0x108 Affinity         : _KAFFINITY_EX
         +0x1b0 AccessState      : Ptr64 _JOB_ACCESS_STATE
         +0x1b8 AccessStateQuotaReference : Ptr64 Void
         +0x1c0 UIRestrictionsClass : Uint4B
         +0x1c4 EndOfJobTimeAction : Uint4B
         +0x1c8 CompletionPort   : Ptr64 Void
         +0x1d0 CompletionKey    : Ptr64 Void
         +0x1d8 CompletionCount  : Uint8B
         +0x1e0 SessionId        : Uint4B
         +0x1e4 SchedulingClass  : Uint4B
         +0x1e8 ReadOperationCount : Uint8B
         +0x1f0 WriteOperationCount : Uint8B
         +0x1f8 OtherOperationCount : Uint8B
         +0x200 ReadTransferCount : Uint8B
         +0x208 WriteTransferCount : Uint8B
         +0x210 OtherTransferCount : Uint8B
         +0x218 DiskIoInfo       : _PROCESS_DISK_COUNTERS
         +0x240 ProcessMemoryLimit : Uint8B
         +0x248 JobMemoryLimit   : Uint8B
         +0x250 JobTotalMemoryLimit : Uint8B
         +0x258 PeakProcessMemoryUsed : Uint8B
         +0x260 PeakJobMemoryUsed : Uint8B
         +0x268 EffectiveAffinity : _KAFFINITY_EX
         +0x310 EffectivePerProcessUserTimeLimit : _LARGE_INTEGER
         +0x318 EffectiveMinimumWorkingSetSize : Uint8B
         +0x320 EffectiveMaximumWorkingSetSize : Uint8B
         +0x328 EffectiveProcessMemoryLimit : Uint8B
         +0x330 EffectiveProcessMemoryLimitJob : Ptr64 _EJOB
         +0x338 EffectivePerProcessUserTimeLimitJob : Ptr64 _EJOB
         +0x340 EffectiveDiskIoRateLimitJob : Ptr64 _EJOB
         +0x348 EffectiveNetIoRateLimitJob : Ptr64 _EJOB
         +0x350 EffectiveHeapAttributionJob : Ptr64 _EJOB
         +0x358 EffectiveLimitFlags : Uint4B
         +0x35c EffectiveSchedulingClass : Uint4B
         +0x360 EffectiveFreezeCount : Uint4B
         +0x364 EffectiveBackgroundCount : Uint4B
         +0x368 EffectiveSwapCount : Uint4B
         +0x36c EffectiveNotificationLimitCount : Uint4B
         +0x370 EffectivePriorityClass : UChar
         +0x371 PriorityClass    : UChar
         +0x372 NestingDepth     : UChar
         +0x373 Reserved1        : [1] UChar
         +0x374 CompletionFilter : Uint4B
         +0x378 WakeChannel      : _WNF_STATE_NAME
         +0x378 WakeInfo         : _PS_WAKE_INFORMATION
         +0x3b0 WakeFilter       : _JOBOBJECT_WAKE_FILTER
         +0x3b8 LowEdgeLatchFilter : Uint4B
         +0x3bc OwnedHighEdgeFilters : Uint4B
         +0x3c0 NotificationLink : Ptr64 _EJOB
         +0x3c8 CurrentJobMemoryUsed : Uint8B
         +0x3d0 NotificationInfo : Ptr64 _JOB_NOTIFICATION_INFORMATION
         +0x3d8 NotificationInfoQuotaReference : Ptr64 Void
         +0x3e0 NotificationPacket : Ptr64 _IO_MINI_COMPLETION_PACKET_USER
         +0x3e8 CpuRateControl   : Ptr64 _JOB_CPU_RATE_CONTROL
         +0x3f0 EffectiveSchedulingGroup : Ptr64 Void
         +0x3f8 ReadyTime        : Uint8B
         +0x400 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x408 SiblingJobLinks  : _LIST_ENTRY
         +0x418 ChildJobListHead : _LIST_ENTRY
         +0x428 ParentJob        : Ptr64 _EJOB
         +0x430 RootJob          : Ptr64 _EJOB
         +0x438 IteratorListHead : _LIST_ENTRY
         +0x448 AncestorCount    : Uint8B
         +0x450 Ancestors        : Ptr64 Ptr64 _EJOB
         +0x450 SessionObject    : Ptr64 Void
         +0x458 Accounting       : _EPROCESS_VALUES
         +0x4a8 ShadowActiveProcessCount : Uint4B
         +0x4ac ActiveAuxiliaryProcessCount : Uint4B
         +0x4b0 SequenceNumber   : Uint4B
         +0x4b8 TimerListLock    : Uint8B
         +0x4c0 TimerListHead    : _LIST_ENTRY
         +0x4d0 ContainerId      : _GUID
         +0x4e0 Container        : Ptr64 _ESILO
         +0x4e8 PropertySet      : _PS_PROPERTY_SET
         +0x500 NetRateControl   : Ptr64 _JOB_NET_RATE_CONTROL
         +0x508 IoRateControl    : Ptr64 _JOB_IO_RATE_CONTROL
         +0x510 JobFlags         : Uint4B
         +0x510 CloseDone        : Pos 0, 1 Bit
         +0x510 MultiGroup       : Pos 1, 1 Bit
         +0x510 OutstandingNotification : Pos 2, 1 Bit
         +0x510 NotificationInProgress : Pos 3, 1 Bit
         +0x510 UILimits         : Pos 4, 1 Bit
         +0x510 CpuRateControlActive : Pos 5, 1 Bit
         +0x510 OwnCpuRateControl : Pos 6, 1 Bit
         +0x510 Terminating      : Pos 7, 1 Bit
         +0x510 WorkingSetLock   : Pos 8, 1 Bit
         +0x510 JobFrozen        : Pos 9, 1 Bit
         +0x510 Background       : Pos 10, 1 Bit
         +0x510 WakeNotificationAllocated : Pos 11, 1 Bit
         +0x510 WakeNotificationEnabled : Pos 12, 1 Bit
         +0x510 WakeNotificationPending : Pos 13, 1 Bit
         +0x510 LimitNotificationRequired : Pos 14, 1 Bit
         +0x510 ZeroCountNotificationRequired : Pos 15, 1 Bit
         +0x510 CycleTimeNotificationRequired : Pos 16, 1 Bit
         +0x510 CycleTimeNotificationPending : Pos 17, 1 Bit
         +0x510 TimersVirtualized : Pos 18, 1 Bit
         +0x510 JobSwapped       : Pos 19, 1 Bit
         +0x510 ViolationDetected : Pos 20, 1 Bit
         +0x510 EmptyJobNotified : Pos 21, 1 Bit
         +0x510 NoSystemCharge   : Pos 22, 1 Bit
         +0x510 DropNoWakeCharges : Pos 23, 1 Bit
         +0x510 NoWakeChargePolicyDecided : Pos 24, 1 Bit
         +0x510 NetRateControlActive : Pos 25, 1 Bit
         +0x510 OwnNetRateControl : Pos 26, 1 Bit
         +0x510 IoRateControlActive : Pos 27, 1 Bit
         +0x510 OwnIoRateControl : Pos 28, 1 Bit
         +0x510 IsContainerRoot  : Pos 29, 1 Bit
         +0x510 SpareJobFlags    : Pos 30, 2 Bits
         +0x514 EffectiveHighEdgeFilters : Uint4B
         +0x518 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x520 SharedCommitCharge : Uint8B
      +0x438 IteratorListHead : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x448 AncestorCount    : Uint8B
      +0x450 Ancestors        : Ptr64 Ptr64 _EJOB
         +0x000 Event            : _KEVENT
         +0x018 JobLinks         : _LIST_ENTRY
         +0x028 ProcessListHead  : _LIST_ENTRY
         +0x038 JobLock          : _ERESOURCE
         +0x0a0 TotalUserTime    : _LARGE_INTEGER
         +0x0a8 TotalKernelTime  : _LARGE_INTEGER
         +0x0b0 TotalCycleTime   : _LARGE_INTEGER
         +0x0b8 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x0c0 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x0c8 TotalContextSwitches : Uint8B
         +0x0d0 TotalPageFaultCount : Uint4B
         +0x0d4 TotalProcesses   : Uint4B
         +0x0d8 ActiveProcesses  : Uint4B
         +0x0dc TotalTerminatedProcesses : Uint4B
         +0x0e0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x0e8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x0f0 MinimumWorkingSetSize : Uint8B
         +0x0f8 MaximumWorkingSetSize : Uint8B
         +0x100 LimitFlags       : Uint4B
         +0x104 ActiveProcessLimit : Uint4B
         +0x108 Affinity         : _KAFFINITY_EX
         +0x1b0 AccessState      : Ptr64 _JOB_ACCESS_STATE
         +0x1b8 AccessStateQuotaReference : Ptr64 Void
         +0x1c0 UIRestrictionsClass : Uint4B
         +0x1c4 EndOfJobTimeAction : Uint4B
         +0x1c8 CompletionPort   : Ptr64 Void
         +0x1d0 CompletionKey    : Ptr64 Void
         +0x1d8 CompletionCount  : Uint8B
         +0x1e0 SessionId        : Uint4B
         +0x1e4 SchedulingClass  : Uint4B
         +0x1e8 ReadOperationCount : Uint8B
         +0x1f0 WriteOperationCount : Uint8B
         +0x1f8 OtherOperationCount : Uint8B
         +0x200 ReadTransferCount : Uint8B
         +0x208 WriteTransferCount : Uint8B
         +0x210 OtherTransferCount : Uint8B
         +0x218 DiskIoInfo       : _PROCESS_DISK_COUNTERS
         +0x240 ProcessMemoryLimit : Uint8B
         +0x248 JobMemoryLimit   : Uint8B
         +0x250 JobTotalMemoryLimit : Uint8B
         +0x258 PeakProcessMemoryUsed : Uint8B
         +0x260 PeakJobMemoryUsed : Uint8B
         +0x268 EffectiveAffinity : _KAFFINITY_EX
         +0x310 EffectivePerProcessUserTimeLimit : _LARGE_INTEGER
         +0x318 EffectiveMinimumWorkingSetSize : Uint8B
         +0x320 EffectiveMaximumWorkingSetSize : Uint8B
         +0x328 EffectiveProcessMemoryLimit : Uint8B
         +0x330 EffectiveProcessMemoryLimitJob : Ptr64 _EJOB
         +0x338 EffectivePerProcessUserTimeLimitJob : Ptr64 _EJOB
         +0x340 EffectiveDiskIoRateLimitJob : Ptr64 _EJOB
         +0x348 EffectiveNetIoRateLimitJob : Ptr64 _EJOB
         +0x350 EffectiveHeapAttributionJob : Ptr64 _EJOB
         +0x358 EffectiveLimitFlags : Uint4B
         +0x35c EffectiveSchedulingClass : Uint4B
         +0x360 EffectiveFreezeCount : Uint4B
         +0x364 EffectiveBackgroundCount : Uint4B
         +0x368 EffectiveSwapCount : Uint4B
         +0x36c EffectiveNotificationLimitCount : Uint4B
         +0x370 EffectivePriorityClass : UChar
         +0x371 PriorityClass    : UChar
         +0x372 NestingDepth     : UChar
         +0x373 Reserved1        : [1] UChar
         +0x374 CompletionFilter : Uint4B
         +0x378 WakeChannel      : _WNF_STATE_NAME
         +0x378 WakeInfo         : _PS_WAKE_INFORMATION
         +0x3b0 WakeFilter       : _JOBOBJECT_WAKE_FILTER
         +0x3b8 LowEdgeLatchFilter : Uint4B
         +0x3bc OwnedHighEdgeFilters : Uint4B
         +0x3c0 NotificationLink : Ptr64 _EJOB
         +0x3c8 CurrentJobMemoryUsed : Uint8B
         +0x3d0 NotificationInfo : Ptr64 _JOB_NOTIFICATION_INFORMATION
         +0x3d8 NotificationInfoQuotaReference : Ptr64 Void
         +0x3e0 NotificationPacket : Ptr64 _IO_MINI_COMPLETION_PACKET_USER
         +0x3e8 CpuRateControl   : Ptr64 _JOB_CPU_RATE_CONTROL
         +0x3f0 EffectiveSchedulingGroup : Ptr64 Void
         +0x3f8 ReadyTime        : Uint8B
         +0x400 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x408 SiblingJobLinks  : _LIST_ENTRY
         +0x418 ChildJobListHead : _LIST_ENTRY
         +0x428 ParentJob        : Ptr64 _EJOB
         +0x430 RootJob          : Ptr64 _EJOB
         +0x438 IteratorListHead : _LIST_ENTRY
         +0x448 AncestorCount    : Uint8B
         +0x450 Ancestors        : Ptr64 Ptr64 _EJOB
         +0x450 SessionObject    : Ptr64 Void
         +0x458 Accounting       : _EPROCESS_VALUES
         +0x4a8 ShadowActiveProcessCount : Uint4B
         +0x4ac ActiveAuxiliaryProcessCount : Uint4B
         +0x4b0 SequenceNumber   : Uint4B
         +0x4b8 TimerListLock    : Uint8B
         +0x4c0 TimerListHead    : _LIST_ENTRY
         +0x4d0 ContainerId      : _GUID
         +0x4e0 Container        : Ptr64 _ESILO
         +0x4e8 PropertySet      : _PS_PROPERTY_SET
         +0x500 NetRateControl   : Ptr64 _JOB_NET_RATE_CONTROL
         +0x508 IoRateControl    : Ptr64 _JOB_IO_RATE_CONTROL
         +0x510 JobFlags         : Uint4B
         +0x510 CloseDone        : Pos 0, 1 Bit
         +0x510 MultiGroup       : Pos 1, 1 Bit
         +0x510 OutstandingNotification : Pos 2, 1 Bit
         +0x510 NotificationInProgress : Pos 3, 1 Bit
         +0x510 UILimits         : Pos 4, 1 Bit
         +0x510 CpuRateControlActive : Pos 5, 1 Bit
         +0x510 OwnCpuRateControl : Pos 6, 1 Bit
         +0x510 Terminating      : Pos 7, 1 Bit
         +0x510 WorkingSetLock   : Pos 8, 1 Bit
         +0x510 JobFrozen        : Pos 9, 1 Bit
         +0x510 Background       : Pos 10, 1 Bit
         +0x510 WakeNotificationAllocated : Pos 11, 1 Bit
         +0x510 WakeNotificationEnabled : Pos 12, 1 Bit
         +0x510 WakeNotificationPending : Pos 13, 1 Bit
         +0x510 LimitNotificationRequired : Pos 14, 1 Bit
         +0x510 ZeroCountNotificationRequired : Pos 15, 1 Bit
         +0x510 CycleTimeNotificationRequired : Pos 16, 1 Bit
         +0x510 CycleTimeNotificationPending : Pos 17, 1 Bit
         +0x510 TimersVirtualized : Pos 18, 1 Bit
         +0x510 JobSwapped       : Pos 19, 1 Bit
         +0x510 ViolationDetected : Pos 20, 1 Bit
         +0x510 EmptyJobNotified : Pos 21, 1 Bit
         +0x510 NoSystemCharge   : Pos 22, 1 Bit
         +0x510 DropNoWakeCharges : Pos 23, 1 Bit
         +0x510 NoWakeChargePolicyDecided : Pos 24, 1 Bit
         +0x510 NetRateControlActive : Pos 25, 1 Bit
         +0x510 OwnNetRateControl : Pos 26, 1 Bit
         +0x510 IoRateControlActive : Pos 27, 1 Bit
         +0x510 OwnIoRateControl : Pos 28, 1 Bit
         +0x510 IsContainerRoot  : Pos 29, 1 Bit
         +0x510 SpareJobFlags    : Pos 30, 2 Bits
         +0x514 EffectiveHighEdgeFilters : Uint4B
         +0x518 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x520 SharedCommitCharge : Uint8B
      +0x450 SessionObject    : Ptr64 Void
      +0x458 Accounting       : _EPROCESS_VALUES
         +0x000 KernelTime       : Uint8B
         +0x008 UserTime         : Uint8B
         +0x010 CycleTime        : Uint8B
         +0x018 ContextSwitches  : Uint8B
         +0x020 ReadOperationCount : Int8B
         +0x028 WriteOperationCount : Int8B
         +0x030 OtherOperationCount : Int8B
         +0x038 ReadTransferCount : Int8B
         +0x040 WriteTransferCount : Int8B
         +0x048 OtherTransferCount : Int8B
      +0x4a8 ShadowActiveProcessCount : Uint4B
      +0x4ac ActiveAuxiliaryProcessCount : Uint4B
      +0x4b0 SequenceNumber   : Uint4B
      +0x4b8 TimerListLock    : Uint8B
      +0x4c0 TimerListHead    : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x4d0 ContainerId      : _GUID
         +0x000 Data1            : Uint4B
         +0x004 Data2            : Uint2B
         +0x006 Data3            : Uint2B
         +0x008 Data4            : [8] UChar
      +0x4e0 Container        : Ptr64 _ESILO
      +0x4e8 PropertySet      : _PS_PROPERTY_SET
         +0x000 ListHead         : _LIST_ENTRY
         +0x010 Lock             : Uint8B
      +0x500 NetRateControl   : Ptr64 _JOB_NET_RATE_CONTROL
      +0x508 IoRateControl    : Ptr64 _JOB_IO_RATE_CONTROL
      +0x510 JobFlags         : Uint4B
      +0x510 CloseDone        : Pos 0, 1 Bit
      +0x510 MultiGroup       : Pos 1, 1 Bit
      +0x510 OutstandingNotification : Pos 2, 1 Bit
      +0x510 NotificationInProgress : Pos 3, 1 Bit
      +0x510 UILimits         : Pos 4, 1 Bit
      +0x510 CpuRateControlActive : Pos 5, 1 Bit
      +0x510 OwnCpuRateControl : Pos 6, 1 Bit
      +0x510 Terminating      : Pos 7, 1 Bit
      +0x510 WorkingSetLock   : Pos 8, 1 Bit
      +0x510 JobFrozen        : Pos 9, 1 Bit
      +0x510 Background       : Pos 10, 1 Bit
      +0x510 WakeNotificationAllocated : Pos 11, 1 Bit
      +0x510 WakeNotificationEnabled : Pos 12, 1 Bit
      +0x510 WakeNotificationPending : Pos 13, 1 Bit
      +0x510 LimitNotificationRequired : Pos 14, 1 Bit
      +0x510 ZeroCountNotificationRequired : Pos 15, 1 Bit
      +0x510 CycleTimeNotificationRequired : Pos 16, 1 Bit
      +0x510 CycleTimeNotificationPending : Pos 17, 1 Bit
      +0x510 TimersVirtualized : Pos 18, 1 Bit
      +0x510 JobSwapped       : Pos 19, 1 Bit
      +0x510 ViolationDetected : Pos 20, 1 Bit
      +0x510 EmptyJobNotified : Pos 21, 1 Bit
      +0x510 NoSystemCharge   : Pos 22, 1 Bit
      +0x510 DropNoWakeCharges : Pos 23, 1 Bit
      +0x510 NoWakeChargePolicyDecided : Pos 24, 1 Bit
      +0x510 NetRateControlActive : Pos 25, 1 Bit
      +0x510 OwnNetRateControl : Pos 26, 1 Bit
      +0x510 IoRateControlActive : Pos 27, 1 Bit
      +0x510 OwnIoRateControl : Pos 28, 1 Bit
      +0x510 IsContainerRoot  : Pos 29, 1 Bit
      +0x510 SpareJobFlags    : Pos 30, 2 Bits
      +0x514 EffectiveHighEdgeFilters : Uint4B
      +0x518 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x000 Cycles           : [4] [2] Uint8B
         +0x040 DiskEnergy       : Uint8B
         +0x048 NetworkTailEnergy : Uint8B
         +0x050 MBBTailEnergy    : Uint8B
         +0x058 NetworkTxRxBytes : Uint8B
         +0x060 MBBTxRxBytes     : Uint8B
         +0x068 Foreground       : Pos 0, 1 Bit
         +0x068 WindowInformation : Uint4B
         +0x06c PixelArea        : Uint4B
         +0x070 PixelReportTimestamp : Int8B
         +0x078 PixelTime        : Uint8B
         +0x080 ForegroundReportTimestamp : Int8B
         +0x088 ForegroundTime   : Uint8B
      +0x520 SharedCommitCharge : Uint8B
   +0x390 CloneRoot        : _RTL_AVL_TREE
      +0x000 Root             : Ptr64 _RTL_BALANCED_NODE
         +0x000 Children         : [2] Ptr64 _RTL_BALANCED_NODE
         +0x000 Left             : Ptr64 _RTL_BALANCED_NODE
         +0x008 Right            : Ptr64 _RTL_BALANCED_NODE
         +0x010 Red              : Pos 0, 1 Bit
         +0x010 Balance          : Pos 0, 2 Bits
         +0x010 ParentValue      : Uint8B
   +0x398 NumberOfPrivatePages : Uint8B
   +0x3a0 NumberOfLockedPages : Uint8B
   +0x3a8 Win32Process     : Ptr64 Void
   +0x3b0 Job              : Ptr64 _EJOB
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
         +0x01a ReservedLowFlags : UChar
         +0x01b WaiterPriority   : UChar
         +0x020 SharedWaiters    : _KWAIT_CHAIN
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
      +0x0b0 TotalCycleTime   : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x0b8 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x0c0 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x0c8 TotalContextSwitches : Uint8B
      +0x0d0 TotalPageFaultCount : Uint4B
      +0x0d4 TotalProcesses   : Uint4B
      +0x0d8 ActiveProcesses  : Uint4B
      +0x0dc TotalTerminatedProcesses : Uint4B
      +0x0e0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x0e8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x0f0 MinimumWorkingSetSize : Uint8B
      +0x0f8 MaximumWorkingSetSize : Uint8B
      +0x100 LimitFlags       : Uint4B
      +0x104 ActiveProcessLimit : Uint4B
      +0x108 Affinity         : _KAFFINITY_EX
         +0x000 Count            : Uint2B
         +0x002 Size             : Uint2B
         +0x004 Reserved         : Uint4B
         +0x008 Bitmap           : [20] Uint8B
      +0x1b0 AccessState      : Ptr64 _JOB_ACCESS_STATE
      +0x1b8 AccessStateQuotaReference : Ptr64 Void
      +0x1c0 UIRestrictionsClass : Uint4B
      +0x1c4 EndOfJobTimeAction : Uint4B
      +0x1c8 CompletionPort   : Ptr64 Void
      +0x1d0 CompletionKey    : Ptr64 Void
      +0x1d8 CompletionCount  : Uint8B
      +0x1e0 SessionId        : Uint4B
      +0x1e4 SchedulingClass  : Uint4B
      +0x1e8 ReadOperationCount : Uint8B
      +0x1f0 WriteOperationCount : Uint8B
      +0x1f8 OtherOperationCount : Uint8B
      +0x200 ReadTransferCount : Uint8B
      +0x208 WriteTransferCount : Uint8B
      +0x210 OtherTransferCount : Uint8B
      +0x218 DiskIoInfo       : _PROCESS_DISK_COUNTERS
         +0x000 BytesRead        : Uint8B
         +0x008 BytesWritten     : Uint8B
         +0x010 ReadOperationCount : Uint8B
         +0x018 WriteOperationCount : Uint8B
         +0x020 FlushOperationCount : Uint8B
      +0x240 ProcessMemoryLimit : Uint8B
      +0x248 JobMemoryLimit   : Uint8B
      +0x250 JobTotalMemoryLimit : Uint8B
      +0x258 PeakProcessMemoryUsed : Uint8B
      +0x260 PeakJobMemoryUsed : Uint8B
      +0x268 EffectiveAffinity : _KAFFINITY_EX
         +0x000 Count            : Uint2B
         +0x002 Size             : Uint2B
         +0x004 Reserved         : Uint4B
         +0x008 Bitmap           : [20] Uint8B
      +0x310 EffectivePerProcessUserTimeLimit : _LARGE_INTEGER
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
         +0x000 u                : <unnamed-tag>
         +0x000 QuadPart         : Int8B
      +0x318 EffectiveMinimumWorkingSetSize : Uint8B
      +0x320 EffectiveMaximumWorkingSetSize : Uint8B
      +0x328 EffectiveProcessMemoryLimit : Uint8B
      +0x330 EffectiveProcessMemoryLimitJob : Ptr64 _EJOB
         +0x000 Event            : _KEVENT
         +0x018 JobLinks         : _LIST_ENTRY
         +0x028 ProcessListHead  : _LIST_ENTRY
         +0x038 JobLock          : _ERESOURCE
         +0x0a0 TotalUserTime    : _LARGE_INTEGER
         +0x0a8 TotalKernelTime  : _LARGE_INTEGER
         +0x0b0 TotalCycleTime   : _LARGE_INTEGER
         +0x0b8 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x0c0 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x0c8 TotalContextSwitches : Uint8B
         +0x0d0 TotalPageFaultCount : Uint4B
         +0x0d4 TotalProcesses   : Uint4B
         +0x0d8 ActiveProcesses  : Uint4B
         +0x0dc TotalTerminatedProcesses : Uint4B
         +0x0e0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x0e8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x0f0 MinimumWorkingSetSize : Uint8B
         +0x0f8 MaximumWorkingSetSize : Uint8B
         +0x100 LimitFlags       : Uint4B
         +0x104 ActiveProcessLimit : Uint4B
         +0x108 Affinity         : _KAFFINITY_EX
         +0x1b0 AccessState      : Ptr64 _JOB_ACCESS_STATE
         +0x1b8 AccessStateQuotaReference : Ptr64 Void
         +0x1c0 UIRestrictionsClass : Uint4B
         +0x1c4 EndOfJobTimeAction : Uint4B
         +0x1c8 CompletionPort   : Ptr64 Void
         +0x1d0 CompletionKey    : Ptr64 Void
         +0x1d8 CompletionCount  : Uint8B
         +0x1e0 SessionId        : Uint4B
         +0x1e4 SchedulingClass  : Uint4B
         +0x1e8 ReadOperationCount : Uint8B
         +0x1f0 WriteOperationCount : Uint8B
         +0x1f8 OtherOperationCount : Uint8B
         +0x200 ReadTransferCount : Uint8B
         +0x208 WriteTransferCount : Uint8B
         +0x210 OtherTransferCount : Uint8B
         +0x218 DiskIoInfo       : _PROCESS_DISK_COUNTERS
         +0x240 ProcessMemoryLimit : Uint8B
         +0x248 JobMemoryLimit   : Uint8B
         +0x250 JobTotalMemoryLimit : Uint8B
         +0x258 PeakProcessMemoryUsed : Uint8B
         +0x260 PeakJobMemoryUsed : Uint8B
         +0x268 EffectiveAffinity : _KAFFINITY_EX
         +0x310 EffectivePerProcessUserTimeLimit : _LARGE_INTEGER
         +0x318 EffectiveMinimumWorkingSetSize : Uint8B
         +0x320 EffectiveMaximumWorkingSetSize : Uint8B
         +0x328 EffectiveProcessMemoryLimit : Uint8B
         +0x330 EffectiveProcessMemoryLimitJob : Ptr64 _EJOB
         +0x338 EffectivePerProcessUserTimeLimitJob : Ptr64 _EJOB
         +0x340 EffectiveDiskIoRateLimitJob : Ptr64 _EJOB
         +0x348 EffectiveNetIoRateLimitJob : Ptr64 _EJOB
         +0x350 EffectiveHeapAttributionJob : Ptr64 _EJOB
         +0x358 EffectiveLimitFlags : Uint4B
         +0x35c EffectiveSchedulingClass : Uint4B
         +0x360 EffectiveFreezeCount : Uint4B
         +0x364 EffectiveBackgroundCount : Uint4B
         +0x368 EffectiveSwapCount : Uint4B
         +0x36c EffectiveNotificationLimitCount : Uint4B
         +0x370 EffectivePriorityClass : UChar
         +0x371 PriorityClass    : UChar
         +0x372 NestingDepth     : UChar
         +0x373 Reserved1        : [1] UChar
         +0x374 CompletionFilter : Uint4B
         +0x378 WakeChannel      : _WNF_STATE_NAME
         +0x378 WakeInfo         : _PS_WAKE_INFORMATION
         +0x3b0 WakeFilter       : _JOBOBJECT_WAKE_FILTER
         +0x3b8 LowEdgeLatchFilter : Uint4B
         +0x3bc OwnedHighEdgeFilters : Uint4B
         +0x3c0 NotificationLink : Ptr64 _EJOB
         +0x3c8 CurrentJobMemoryUsed : Uint8B
         +0x3d0 NotificationInfo : Ptr64 _JOB_NOTIFICATION_INFORMATION
         +0x3d8 NotificationInfoQuotaReference : Ptr64 Void
         +0x3e0 NotificationPacket : Ptr64 _IO_MINI_COMPLETION_PACKET_USER
         +0x3e8 CpuRateControl   : Ptr64 _JOB_CPU_RATE_CONTROL
         +0x3f0 EffectiveSchedulingGroup : Ptr64 Void
         +0x3f8 ReadyTime        : Uint8B
         +0x400 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x408 SiblingJobLinks  : _LIST_ENTRY
         +0x418 ChildJobListHead : _LIST_ENTRY
         +0x428 ParentJob        : Ptr64 _EJOB
         +0x430 RootJob          : Ptr64 _EJOB
         +0x438 IteratorListHead : _LIST_ENTRY
         +0x448 AncestorCount    : Uint8B
         +0x450 Ancestors        : Ptr64 Ptr64 _EJOB
         +0x450 SessionObject    : Ptr64 Void
         +0x458 Accounting       : _EPROCESS_VALUES
         +0x4a8 ShadowActiveProcessCount : Uint4B
         +0x4ac ActiveAuxiliaryProcessCount : Uint4B
         +0x4b0 SequenceNumber   : Uint4B
         +0x4b8 TimerListLock    : Uint8B
         +0x4c0 TimerListHead    : _LIST_ENTRY
         +0x4d0 ContainerId      : _GUID
         +0x4e0 Container        : Ptr64 _ESILO
         +0x4e8 PropertySet      : _PS_PROPERTY_SET
         +0x500 NetRateControl   : Ptr64 _JOB_NET_RATE_CONTROL
         +0x508 IoRateControl    : Ptr64 _JOB_IO_RATE_CONTROL
         +0x510 JobFlags         : Uint4B
         +0x510 CloseDone        : Pos 0, 1 Bit
         +0x510 MultiGroup       : Pos 1, 1 Bit
         +0x510 OutstandingNotification : Pos 2, 1 Bit
         +0x510 NotificationInProgress : Pos 3, 1 Bit
         +0x510 UILimits         : Pos 4, 1 Bit
         +0x510 CpuRateControlActive : Pos 5, 1 Bit
         +0x510 OwnCpuRateControl : Pos 6, 1 Bit
         +0x510 Terminating      : Pos 7, 1 Bit
         +0x510 WorkingSetLock   : Pos 8, 1 Bit
         +0x510 JobFrozen        : Pos 9, 1 Bit
         +0x510 Background       : Pos 10, 1 Bit
         +0x510 WakeNotificationAllocated : Pos 11, 1 Bit
         +0x510 WakeNotificationEnabled : Pos 12, 1 Bit
         +0x510 WakeNotificationPending : Pos 13, 1 Bit
         +0x510 LimitNotificationRequired : Pos 14, 1 Bit
         +0x510 ZeroCountNotificationRequired : Pos 15, 1 Bit
         +0x510 CycleTimeNotificationRequired : Pos 16, 1 Bit
         +0x510 CycleTimeNotificationPending : Pos 17, 1 Bit
         +0x510 TimersVirtualized : Pos 18, 1 Bit
         +0x510 JobSwapped       : Pos 19, 1 Bit
         +0x510 ViolationDetected : Pos 20, 1 Bit
         +0x510 EmptyJobNotified : Pos 21, 1 Bit
         +0x510 NoSystemCharge   : Pos 22, 1 Bit
         +0x510 DropNoWakeCharges : Pos 23, 1 Bit
         +0x510 NoWakeChargePolicyDecided : Pos 24, 1 Bit
         +0x510 NetRateControlActive : Pos 25, 1 Bit
         +0x510 OwnNetRateControl : Pos 26, 1 Bit
         +0x510 IoRateControlActive : Pos 27, 1 Bit
         +0x510 OwnIoRateControl : Pos 28, 1 Bit
         +0x510 IsContainerRoot  : Pos 29, 1 Bit
         +0x510 SpareJobFlags    : Pos 30, 2 Bits
         +0x514 EffectiveHighEdgeFilters : Uint4B
         +0x518 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x520 SharedCommitCharge : Uint8B
      +0x338 EffectivePerProcessUserTimeLimitJob : Ptr64 _EJOB
         +0x000 Event            : _KEVENT
         +0x018 JobLinks         : _LIST_ENTRY
         +0x028 ProcessListHead  : _LIST_ENTRY
         +0x038 JobLock          : _ERESOURCE
         +0x0a0 TotalUserTime    : _LARGE_INTEGER
         +0x0a8 TotalKernelTime  : _LARGE_INTEGER
         +0x0b0 TotalCycleTime   : _LARGE_INTEGER
         +0x0b8 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x0c0 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x0c8 TotalContextSwitches : Uint8B
         +0x0d0 TotalPageFaultCount : Uint4B
         +0x0d4 TotalProcesses   : Uint4B
         +0x0d8 ActiveProcesses  : Uint4B
         +0x0dc TotalTerminatedProcesses : Uint4B
         +0x0e0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x0e8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x0f0 MinimumWorkingSetSize : Uint8B
         +0x0f8 MaximumWorkingSetSize : Uint8B
         +0x100 LimitFlags       : Uint4B
         +0x104 ActiveProcessLimit : Uint4B
         +0x108 Affinity         : _KAFFINITY_EX
         +0x1b0 AccessState      : Ptr64 _JOB_ACCESS_STATE
         +0x1b8 AccessStateQuotaReference : Ptr64 Void
         +0x1c0 UIRestrictionsClass : Uint4B
         +0x1c4 EndOfJobTimeAction : Uint4B
         +0x1c8 CompletionPort   : Ptr64 Void
         +0x1d0 CompletionKey    : Ptr64 Void
         +0x1d8 CompletionCount  : Uint8B
         +0x1e0 SessionId        : Uint4B
         +0x1e4 SchedulingClass  : Uint4B
         +0x1e8 ReadOperationCount : Uint8B
         +0x1f0 WriteOperationCount : Uint8B
         +0x1f8 OtherOperationCount : Uint8B
         +0x200 ReadTransferCount : Uint8B
         +0x208 WriteTransferCount : Uint8B
         +0x210 OtherTransferCount : Uint8B
         +0x218 DiskIoInfo       : _PROCESS_DISK_COUNTERS
         +0x240 ProcessMemoryLimit : Uint8B
         +0x248 JobMemoryLimit   : Uint8B
         +0x250 JobTotalMemoryLimit : Uint8B
         +0x258 PeakProcessMemoryUsed : Uint8B
         +0x260 PeakJobMemoryUsed : Uint8B
         +0x268 EffectiveAffinity : _KAFFINITY_EX
         +0x310 EffectivePerProcessUserTimeLimit : _LARGE_INTEGER
         +0x318 EffectiveMinimumWorkingSetSize : Uint8B
         +0x320 EffectiveMaximumWorkingSetSize : Uint8B
         +0x328 EffectiveProcessMemoryLimit : Uint8B
         +0x330 EffectiveProcessMemoryLimitJob : Ptr64 _EJOB
         +0x338 EffectivePerProcessUserTimeLimitJob : Ptr64 _EJOB
         +0x340 EffectiveDiskIoRateLimitJob : Ptr64 _EJOB
         +0x348 EffectiveNetIoRateLimitJob : Ptr64 _EJOB
         +0x350 EffectiveHeapAttributionJob : Ptr64 _EJOB
         +0x358 EffectiveLimitFlags : Uint4B
         +0x35c EffectiveSchedulingClass : Uint4B
         +0x360 EffectiveFreezeCount : Uint4B
         +0x364 EffectiveBackgroundCount : Uint4B
         +0x368 EffectiveSwapCount : Uint4B
         +0x36c EffectiveNotificationLimitCount : Uint4B
         +0x370 EffectivePriorityClass : UChar
         +0x371 PriorityClass    : UChar
         +0x372 NestingDepth     : UChar
         +0x373 Reserved1        : [1] UChar
         +0x374 CompletionFilter : Uint4B
         +0x378 WakeChannel      : _WNF_STATE_NAME
         +0x378 WakeInfo         : _PS_WAKE_INFORMATION
         +0x3b0 WakeFilter       : _JOBOBJECT_WAKE_FILTER
         +0x3b8 LowEdgeLatchFilter : Uint4B
         +0x3bc OwnedHighEdgeFilters : Uint4B
         +0x3c0 NotificationLink : Ptr64 _EJOB
         +0x3c8 CurrentJobMemoryUsed : Uint8B
         +0x3d0 NotificationInfo : Ptr64 _JOB_NOTIFICATION_INFORMATION
         +0x3d8 NotificationInfoQuotaReference : Ptr64 Void
         +0x3e0 NotificationPacket : Ptr64 _IO_MINI_COMPLETION_PACKET_USER
         +0x3e8 CpuRateControl   : Ptr64 _JOB_CPU_RATE_CONTROL
         +0x3f0 EffectiveSchedulingGroup : Ptr64 Void
         +0x3f8 ReadyTime        : Uint8B
         +0x400 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x408 SiblingJobLinks  : _LIST_ENTRY
         +0x418 ChildJobListHead : _LIST_ENTRY
         +0x428 ParentJob        : Ptr64 _EJOB
         +0x430 RootJob          : Ptr64 _EJOB
         +0x438 IteratorListHead : _LIST_ENTRY
         +0x448 AncestorCount    : Uint8B
         +0x450 Ancestors        : Ptr64 Ptr64 _EJOB
         +0x450 SessionObject    : Ptr64 Void
         +0x458 Accounting       : _EPROCESS_VALUES
         +0x4a8 ShadowActiveProcessCount : Uint4B
         +0x4ac ActiveAuxiliaryProcessCount : Uint4B
         +0x4b0 SequenceNumber   : Uint4B
         +0x4b8 TimerListLock    : Uint8B
         +0x4c0 TimerListHead    : _LIST_ENTRY
         +0x4d0 ContainerId      : _GUID
         +0x4e0 Container        : Ptr64 _ESILO
         +0x4e8 PropertySet      : _PS_PROPERTY_SET
         +0x500 NetRateControl   : Ptr64 _JOB_NET_RATE_CONTROL
         +0x508 IoRateControl    : Ptr64 _JOB_IO_RATE_CONTROL
         +0x510 JobFlags         : Uint4B
         +0x510 CloseDone        : Pos 0, 1 Bit
         +0x510 MultiGroup       : Pos 1, 1 Bit
         +0x510 OutstandingNotification : Pos 2, 1 Bit
         +0x510 NotificationInProgress : Pos 3, 1 Bit
         +0x510 UILimits         : Pos 4, 1 Bit
         +0x510 CpuRateControlActive : Pos 5, 1 Bit
         +0x510 OwnCpuRateControl : Pos 6, 1 Bit
         +0x510 Terminating      : Pos 7, 1 Bit
         +0x510 WorkingSetLock   : Pos 8, 1 Bit
         +0x510 JobFrozen        : Pos 9, 1 Bit
         +0x510 Background       : Pos 10, 1 Bit
         +0x510 WakeNotificationAllocated : Pos 11, 1 Bit
         +0x510 WakeNotificationEnabled : Pos 12, 1 Bit
         +0x510 WakeNotificationPending : Pos 13, 1 Bit
         +0x510 LimitNotificationRequired : Pos 14, 1 Bit
         +0x510 ZeroCountNotificationRequired : Pos 15, 1 Bit
         +0x510 CycleTimeNotificationRequired : Pos 16, 1 Bit
         +0x510 CycleTimeNotificationPending : Pos 17, 1 Bit
         +0x510 TimersVirtualized : Pos 18, 1 Bit
         +0x510 JobSwapped       : Pos 19, 1 Bit
         +0x510 ViolationDetected : Pos 20, 1 Bit
         +0x510 EmptyJobNotified : Pos 21, 1 Bit
         +0x510 NoSystemCharge   : Pos 22, 1 Bit
         +0x510 DropNoWakeCharges : Pos 23, 1 Bit
         +0x510 NoWakeChargePolicyDecided : Pos 24, 1 Bit
         +0x510 NetRateControlActive : Pos 25, 1 Bit
         +0x510 OwnNetRateControl : Pos 26, 1 Bit
         +0x510 IoRateControlActive : Pos 27, 1 Bit
         +0x510 OwnIoRateControl : Pos 28, 1 Bit
         +0x510 IsContainerRoot  : Pos 29, 1 Bit
         +0x510 SpareJobFlags    : Pos 30, 2 Bits
         +0x514 EffectiveHighEdgeFilters : Uint4B
         +0x518 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x520 SharedCommitCharge : Uint8B
      +0x340 EffectiveDiskIoRateLimitJob : Ptr64 _EJOB
         +0x000 Event            : _KEVENT
         +0x018 JobLinks         : _LIST_ENTRY
         +0x028 ProcessListHead  : _LIST_ENTRY
         +0x038 JobLock          : _ERESOURCE
         +0x0a0 TotalUserTime    : _LARGE_INTEGER
         +0x0a8 TotalKernelTime  : _LARGE_INTEGER
         +0x0b0 TotalCycleTime   : _LARGE_INTEGER
         +0x0b8 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x0c0 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x0c8 TotalContextSwitches : Uint8B
         +0x0d0 TotalPageFaultCount : Uint4B
         +0x0d4 TotalProcesses   : Uint4B
         +0x0d8 ActiveProcesses  : Uint4B
         +0x0dc TotalTerminatedProcesses : Uint4B
         +0x0e0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x0e8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x0f0 MinimumWorkingSetSize : Uint8B
         +0x0f8 MaximumWorkingSetSize : Uint8B
         +0x100 LimitFlags       : Uint4B
         +0x104 ActiveProcessLimit : Uint4B
         +0x108 Affinity         : _KAFFINITY_EX
         +0x1b0 AccessState      : Ptr64 _JOB_ACCESS_STATE
         +0x1b8 AccessStateQuotaReference : Ptr64 Void
         +0x1c0 UIRestrictionsClass : Uint4B
         +0x1c4 EndOfJobTimeAction : Uint4B
         +0x1c8 CompletionPort   : Ptr64 Void
         +0x1d0 CompletionKey    : Ptr64 Void
         +0x1d8 CompletionCount  : Uint8B
         +0x1e0 SessionId        : Uint4B
         +0x1e4 SchedulingClass  : Uint4B
         +0x1e8 ReadOperationCount : Uint8B
         +0x1f0 WriteOperationCount : Uint8B
         +0x1f8 OtherOperationCount : Uint8B
         +0x200 ReadTransferCount : Uint8B
         +0x208 WriteTransferCount : Uint8B
         +0x210 OtherTransferCount : Uint8B
         +0x218 DiskIoInfo       : _PROCESS_DISK_COUNTERS
         +0x240 ProcessMemoryLimit : Uint8B
         +0x248 JobMemoryLimit   : Uint8B
         +0x250 JobTotalMemoryLimit : Uint8B
         +0x258 PeakProcessMemoryUsed : Uint8B
         +0x260 PeakJobMemoryUsed : Uint8B
         +0x268 EffectiveAffinity : _KAFFINITY_EX
         +0x310 EffectivePerProcessUserTimeLimit : _LARGE_INTEGER
         +0x318 EffectiveMinimumWorkingSetSize : Uint8B
         +0x320 EffectiveMaximumWorkingSetSize : Uint8B
         +0x328 EffectiveProcessMemoryLimit : Uint8B
         +0x330 EffectiveProcessMemoryLimitJob : Ptr64 _EJOB
         +0x338 EffectivePerProcessUserTimeLimitJob : Ptr64 _EJOB
         +0x340 EffectiveDiskIoRateLimitJob : Ptr64 _EJOB
         +0x348 EffectiveNetIoRateLimitJob : Ptr64 _EJOB
         +0x350 EffectiveHeapAttributionJob : Ptr64 _EJOB
         +0x358 EffectiveLimitFlags : Uint4B
         +0x35c EffectiveSchedulingClass : Uint4B
         +0x360 EffectiveFreezeCount : Uint4B
         +0x364 EffectiveBackgroundCount : Uint4B
         +0x368 EffectiveSwapCount : Uint4B
         +0x36c EffectiveNotificationLimitCount : Uint4B
         +0x370 EffectivePriorityClass : UChar
         +0x371 PriorityClass    : UChar
         +0x372 NestingDepth     : UChar
         +0x373 Reserved1        : [1] UChar
         +0x374 CompletionFilter : Uint4B
         +0x378 WakeChannel      : _WNF_STATE_NAME
         +0x378 WakeInfo         : _PS_WAKE_INFORMATION
         +0x3b0 WakeFilter       : _JOBOBJECT_WAKE_FILTER
         +0x3b8 LowEdgeLatchFilter : Uint4B
         +0x3bc OwnedHighEdgeFilters : Uint4B
         +0x3c0 NotificationLink : Ptr64 _EJOB
         +0x3c8 CurrentJobMemoryUsed : Uint8B
         +0x3d0 NotificationInfo : Ptr64 _JOB_NOTIFICATION_INFORMATION
         +0x3d8 NotificationInfoQuotaReference : Ptr64 Void
         +0x3e0 NotificationPacket : Ptr64 _IO_MINI_COMPLETION_PACKET_USER
         +0x3e8 CpuRateControl   : Ptr64 _JOB_CPU_RATE_CONTROL
         +0x3f0 EffectiveSchedulingGroup : Ptr64 Void
         +0x3f8 ReadyTime        : Uint8B
         +0x400 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x408 SiblingJobLinks  : _LIST_ENTRY
         +0x418 ChildJobListHead : _LIST_ENTRY
         +0x428 ParentJob        : Ptr64 _EJOB
         +0x430 RootJob          : Ptr64 _EJOB
         +0x438 IteratorListHead : _LIST_ENTRY
         +0x448 AncestorCount    : Uint8B
         +0x450 Ancestors        : Ptr64 Ptr64 _EJOB
         +0x450 SessionObject    : Ptr64 Void
         +0x458 Accounting       : _EPROCESS_VALUES
         +0x4a8 ShadowActiveProcessCount : Uint4B
         +0x4ac ActiveAuxiliaryProcessCount : Uint4B
         +0x4b0 SequenceNumber   : Uint4B
         +0x4b8 TimerListLock    : Uint8B
         +0x4c0 TimerListHead    : _LIST_ENTRY
         +0x4d0 ContainerId      : _GUID
         +0x4e0 Container        : Ptr64 _ESILO
         +0x4e8 PropertySet      : _PS_PROPERTY_SET
         +0x500 NetRateControl   : Ptr64 _JOB_NET_RATE_CONTROL
         +0x508 IoRateControl    : Ptr64 _JOB_IO_RATE_CONTROL
         +0x510 JobFlags         : Uint4B
         +0x510 CloseDone        : Pos 0, 1 Bit
         +0x510 MultiGroup       : Pos 1, 1 Bit
         +0x510 OutstandingNotification : Pos 2, 1 Bit
         +0x510 NotificationInProgress : Pos 3, 1 Bit
         +0x510 UILimits         : Pos 4, 1 Bit
         +0x510 CpuRateControlActive : Pos 5, 1 Bit
         +0x510 OwnCpuRateControl : Pos 6, 1 Bit
         +0x510 Terminating      : Pos 7, 1 Bit
         +0x510 WorkingSetLock   : Pos 8, 1 Bit
         +0x510 JobFrozen        : Pos 9, 1 Bit
         +0x510 Background       : Pos 10, 1 Bit
         +0x510 WakeNotificationAllocated : Pos 11, 1 Bit
         +0x510 WakeNotificationEnabled : Pos 12, 1 Bit
         +0x510 WakeNotificationPending : Pos 13, 1 Bit
         +0x510 LimitNotificationRequired : Pos 14, 1 Bit
         +0x510 ZeroCountNotificationRequired : Pos 15, 1 Bit
         +0x510 CycleTimeNotificationRequired : Pos 16, 1 Bit
         +0x510 CycleTimeNotificationPending : Pos 17, 1 Bit
         +0x510 TimersVirtualized : Pos 18, 1 Bit
         +0x510 JobSwapped       : Pos 19, 1 Bit
         +0x510 ViolationDetected : Pos 20, 1 Bit
         +0x510 EmptyJobNotified : Pos 21, 1 Bit
         +0x510 NoSystemCharge   : Pos 22, 1 Bit
         +0x510 DropNoWakeCharges : Pos 23, 1 Bit
         +0x510 NoWakeChargePolicyDecided : Pos 24, 1 Bit
         +0x510 NetRateControlActive : Pos 25, 1 Bit
         +0x510 OwnNetRateControl : Pos 26, 1 Bit
         +0x510 IoRateControlActive : Pos 27, 1 Bit
         +0x510 OwnIoRateControl : Pos 28, 1 Bit
         +0x510 IsContainerRoot  : Pos 29, 1 Bit
         +0x510 SpareJobFlags    : Pos 30, 2 Bits
         +0x514 EffectiveHighEdgeFilters : Uint4B
         +0x518 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x520 SharedCommitCharge : Uint8B
      +0x348 EffectiveNetIoRateLimitJob : Ptr64 _EJOB
         +0x000 Event            : _KEVENT
         +0x018 JobLinks         : _LIST_ENTRY
         +0x028 ProcessListHead  : _LIST_ENTRY
         +0x038 JobLock          : _ERESOURCE
         +0x0a0 TotalUserTime    : _LARGE_INTEGER
         +0x0a8 TotalKernelTime  : _LARGE_INTEGER
         +0x0b0 TotalCycleTime   : _LARGE_INTEGER
         +0x0b8 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x0c0 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x0c8 TotalContextSwitches : Uint8B
         +0x0d0 TotalPageFaultCount : Uint4B
         +0x0d4 TotalProcesses   : Uint4B
         +0x0d8 ActiveProcesses  : Uint4B
         +0x0dc TotalTerminatedProcesses : Uint4B
         +0x0e0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x0e8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x0f0 MinimumWorkingSetSize : Uint8B
         +0x0f8 MaximumWorkingSetSize : Uint8B
         +0x100 LimitFlags       : Uint4B
         +0x104 ActiveProcessLimit : Uint4B
         +0x108 Affinity         : _KAFFINITY_EX
         +0x1b0 AccessState      : Ptr64 _JOB_ACCESS_STATE
         +0x1b8 AccessStateQuotaReference : Ptr64 Void
         +0x1c0 UIRestrictionsClass : Uint4B
         +0x1c4 EndOfJobTimeAction : Uint4B
         +0x1c8 CompletionPort   : Ptr64 Void
         +0x1d0 CompletionKey    : Ptr64 Void
         +0x1d8 CompletionCount  : Uint8B
         +0x1e0 SessionId        : Uint4B
         +0x1e4 SchedulingClass  : Uint4B
         +0x1e8 ReadOperationCount : Uint8B
         +0x1f0 WriteOperationCount : Uint8B
         +0x1f8 OtherOperationCount : Uint8B
         +0x200 ReadTransferCount : Uint8B
         +0x208 WriteTransferCount : Uint8B
         +0x210 OtherTransferCount : Uint8B
         +0x218 DiskIoInfo       : _PROCESS_DISK_COUNTERS
         +0x240 ProcessMemoryLimit : Uint8B
         +0x248 JobMemoryLimit   : Uint8B
         +0x250 JobTotalMemoryLimit : Uint8B
         +0x258 PeakProcessMemoryUsed : Uint8B
         +0x260 PeakJobMemoryUsed : Uint8B
         +0x268 EffectiveAffinity : _KAFFINITY_EX
         +0x310 EffectivePerProcessUserTimeLimit : _LARGE_INTEGER
         +0x318 EffectiveMinimumWorkingSetSize : Uint8B
         +0x320 EffectiveMaximumWorkingSetSize : Uint8B
         +0x328 EffectiveProcessMemoryLimit : Uint8B
         +0x330 EffectiveProcessMemoryLimitJob : Ptr64 _EJOB
         +0x338 EffectivePerProcessUserTimeLimitJob : Ptr64 _EJOB
         +0x340 EffectiveDiskIoRateLimitJob : Ptr64 _EJOB
         +0x348 EffectiveNetIoRateLimitJob : Ptr64 _EJOB
         +0x350 EffectiveHeapAttributionJob : Ptr64 _EJOB
         +0x358 EffectiveLimitFlags : Uint4B
         +0x35c EffectiveSchedulingClass : Uint4B
         +0x360 EffectiveFreezeCount : Uint4B
         +0x364 EffectiveBackgroundCount : Uint4B
         +0x368 EffectiveSwapCount : Uint4B
         +0x36c EffectiveNotificationLimitCount : Uint4B
         +0x370 EffectivePriorityClass : UChar
         +0x371 PriorityClass    : UChar
         +0x372 NestingDepth     : UChar
         +0x373 Reserved1        : [1] UChar
         +0x374 CompletionFilter : Uint4B
         +0x378 WakeChannel      : _WNF_STATE_NAME
         +0x378 WakeInfo         : _PS_WAKE_INFORMATION
         +0x3b0 WakeFilter       : _JOBOBJECT_WAKE_FILTER
         +0x3b8 LowEdgeLatchFilter : Uint4B
         +0x3bc OwnedHighEdgeFilters : Uint4B
         +0x3c0 NotificationLink : Ptr64 _EJOB
         +0x3c8 CurrentJobMemoryUsed : Uint8B
         +0x3d0 NotificationInfo : Ptr64 _JOB_NOTIFICATION_INFORMATION
         +0x3d8 NotificationInfoQuotaReference : Ptr64 Void
         +0x3e0 NotificationPacket : Ptr64 _IO_MINI_COMPLETION_PACKET_USER
         +0x3e8 CpuRateControl   : Ptr64 _JOB_CPU_RATE_CONTROL
         +0x3f0 EffectiveSchedulingGroup : Ptr64 Void
         +0x3f8 ReadyTime        : Uint8B
         +0x400 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x408 SiblingJobLinks  : _LIST_ENTRY
         +0x418 ChildJobListHead : _LIST_ENTRY
         +0x428 ParentJob        : Ptr64 _EJOB
         +0x430 RootJob          : Ptr64 _EJOB
         +0x438 IteratorListHead : _LIST_ENTRY
         +0x448 AncestorCount    : Uint8B
         +0x450 Ancestors        : Ptr64 Ptr64 _EJOB
         +0x450 SessionObject    : Ptr64 Void
         +0x458 Accounting       : _EPROCESS_VALUES
         +0x4a8 ShadowActiveProcessCount : Uint4B
         +0x4ac ActiveAuxiliaryProcessCount : Uint4B
         +0x4b0 SequenceNumber   : Uint4B
         +0x4b8 TimerListLock    : Uint8B
         +0x4c0 TimerListHead    : _LIST_ENTRY
         +0x4d0 ContainerId      : _GUID
         +0x4e0 Container        : Ptr64 _ESILO
         +0x4e8 PropertySet      : _PS_PROPERTY_SET
         +0x500 NetRateControl   : Ptr64 _JOB_NET_RATE_CONTROL
         +0x508 IoRateControl    : Ptr64 _JOB_IO_RATE_CONTROL
         +0x510 JobFlags         : Uint4B
         +0x510 CloseDone        : Pos 0, 1 Bit
         +0x510 MultiGroup       : Pos 1, 1 Bit
         +0x510 OutstandingNotification : Pos 2, 1 Bit
         +0x510 NotificationInProgress : Pos 3, 1 Bit
         +0x510 UILimits         : Pos 4, 1 Bit
         +0x510 CpuRateControlActive : Pos 5, 1 Bit
         +0x510 OwnCpuRateControl : Pos 6, 1 Bit
         +0x510 Terminating      : Pos 7, 1 Bit
         +0x510 WorkingSetLock   : Pos 8, 1 Bit
         +0x510 JobFrozen        : Pos 9, 1 Bit
         +0x510 Background       : Pos 10, 1 Bit
         +0x510 WakeNotificationAllocated : Pos 11, 1 Bit
         +0x510 WakeNotificationEnabled : Pos 12, 1 Bit
         +0x510 WakeNotificationPending : Pos 13, 1 Bit
         +0x510 LimitNotificationRequired : Pos 14, 1 Bit
         +0x510 ZeroCountNotificationRequired : Pos 15, 1 Bit
         +0x510 CycleTimeNotificationRequired : Pos 16, 1 Bit
         +0x510 CycleTimeNotificationPending : Pos 17, 1 Bit
         +0x510 TimersVirtualized : Pos 18, 1 Bit
         +0x510 JobSwapped       : Pos 19, 1 Bit
         +0x510 ViolationDetected : Pos 20, 1 Bit
         +0x510 EmptyJobNotified : Pos 21, 1 Bit
         +0x510 NoSystemCharge   : Pos 22, 1 Bit
         +0x510 DropNoWakeCharges : Pos 23, 1 Bit
         +0x510 NoWakeChargePolicyDecided : Pos 24, 1 Bit
         +0x510 NetRateControlActive : Pos 25, 1 Bit
         +0x510 OwnNetRateControl : Pos 26, 1 Bit
         +0x510 IoRateControlActive : Pos 27, 1 Bit
         +0x510 OwnIoRateControl : Pos 28, 1 Bit
         +0x510 IsContainerRoot  : Pos 29, 1 Bit
         +0x510 SpareJobFlags    : Pos 30, 2 Bits
         +0x514 EffectiveHighEdgeFilters : Uint4B
         +0x518 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x520 SharedCommitCharge : Uint8B
      +0x350 EffectiveHeapAttributionJob : Ptr64 _EJOB
         +0x000 Event            : _KEVENT
         +0x018 JobLinks         : _LIST_ENTRY
         +0x028 ProcessListHead  : _LIST_ENTRY
         +0x038 JobLock          : _ERESOURCE
         +0x0a0 TotalUserTime    : _LARGE_INTEGER
         +0x0a8 TotalKernelTime  : _LARGE_INTEGER
         +0x0b0 TotalCycleTime   : _LARGE_INTEGER
         +0x0b8 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x0c0 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x0c8 TotalContextSwitches : Uint8B
         +0x0d0 TotalPageFaultCount : Uint4B
         +0x0d4 TotalProcesses   : Uint4B
         +0x0d8 ActiveProcesses  : Uint4B
         +0x0dc TotalTerminatedProcesses : Uint4B
         +0x0e0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x0e8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x0f0 MinimumWorkingSetSize : Uint8B
         +0x0f8 MaximumWorkingSetSize : Uint8B
         +0x100 LimitFlags       : Uint4B
         +0x104 ActiveProcessLimit : Uint4B
         +0x108 Affinity         : _KAFFINITY_EX
         +0x1b0 AccessState      : Ptr64 _JOB_ACCESS_STATE
         +0x1b8 AccessStateQuotaReference : Ptr64 Void
         +0x1c0 UIRestrictionsClass : Uint4B
         +0x1c4 EndOfJobTimeAction : Uint4B
         +0x1c8 CompletionPort   : Ptr64 Void
         +0x1d0 CompletionKey    : Ptr64 Void
         +0x1d8 CompletionCount  : Uint8B
         +0x1e0 SessionId        : Uint4B
         +0x1e4 SchedulingClass  : Uint4B
         +0x1e8 ReadOperationCount : Uint8B
         +0x1f0 WriteOperationCount : Uint8B
         +0x1f8 OtherOperationCount : Uint8B
         +0x200 ReadTransferCount : Uint8B
         +0x208 WriteTransferCount : Uint8B
         +0x210 OtherTransferCount : Uint8B
         +0x218 DiskIoInfo       : _PROCESS_DISK_COUNTERS
         +0x240 ProcessMemoryLimit : Uint8B
         +0x248 JobMemoryLimit   : Uint8B
         +0x250 JobTotalMemoryLimit : Uint8B
         +0x258 PeakProcessMemoryUsed : Uint8B
         +0x260 PeakJobMemoryUsed : Uint8B
         +0x268 EffectiveAffinity : _KAFFINITY_EX
         +0x310 EffectivePerProcessUserTimeLimit : _LARGE_INTEGER
         +0x318 EffectiveMinimumWorkingSetSize : Uint8B
         +0x320 EffectiveMaximumWorkingSetSize : Uint8B
         +0x328 EffectiveProcessMemoryLimit : Uint8B
         +0x330 EffectiveProcessMemoryLimitJob : Ptr64 _EJOB
         +0x338 EffectivePerProcessUserTimeLimitJob : Ptr64 _EJOB
         +0x340 EffectiveDiskIoRateLimitJob : Ptr64 _EJOB
         +0x348 EffectiveNetIoRateLimitJob : Ptr64 _EJOB
         +0x350 EffectiveHeapAttributionJob : Ptr64 _EJOB
         +0x358 EffectiveLimitFlags : Uint4B
         +0x35c EffectiveSchedulingClass : Uint4B
         +0x360 EffectiveFreezeCount : Uint4B
         +0x364 EffectiveBackgroundCount : Uint4B
         +0x368 EffectiveSwapCount : Uint4B
         +0x36c EffectiveNotificationLimitCount : Uint4B
         +0x370 EffectivePriorityClass : UChar
         +0x371 PriorityClass    : UChar
         +0x372 NestingDepth     : UChar
         +0x373 Reserved1        : [1] UChar
         +0x374 CompletionFilter : Uint4B
         +0x378 WakeChannel      : _WNF_STATE_NAME
         +0x378 WakeInfo         : _PS_WAKE_INFORMATION
         +0x3b0 WakeFilter       : _JOBOBJECT_WAKE_FILTER
         +0x3b8 LowEdgeLatchFilter : Uint4B
         +0x3bc OwnedHighEdgeFilters : Uint4B
         +0x3c0 NotificationLink : Ptr64 _EJOB
         +0x3c8 CurrentJobMemoryUsed : Uint8B
         +0x3d0 NotificationInfo : Ptr64 _JOB_NOTIFICATION_INFORMATION
         +0x3d8 NotificationInfoQuotaReference : Ptr64 Void
         +0x3e0 NotificationPacket : Ptr64 _IO_MINI_COMPLETION_PACKET_USER
         +0x3e8 CpuRateControl   : Ptr64 _JOB_CPU_RATE_CONTROL
         +0x3f0 EffectiveSchedulingGroup : Ptr64 Void
         +0x3f8 ReadyTime        : Uint8B
         +0x400 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x408 SiblingJobLinks  : _LIST_ENTRY
         +0x418 ChildJobListHead : _LIST_ENTRY
         +0x428 ParentJob        : Ptr64 _EJOB
         +0x430 RootJob          : Ptr64 _EJOB
         +0x438 IteratorListHead : _LIST_ENTRY
         +0x448 AncestorCount    : Uint8B
         +0x450 Ancestors        : Ptr64 Ptr64 _EJOB
         +0x450 SessionObject    : Ptr64 Void
         +0x458 Accounting       : _EPROCESS_VALUES
         +0x4a8 ShadowActiveProcessCount : Uint4B
         +0x4ac ActiveAuxiliaryProcessCount : Uint4B
         +0x4b0 SequenceNumber   : Uint4B
         +0x4b8 TimerListLock    : Uint8B
         +0x4c0 TimerListHead    : _LIST_ENTRY
         +0x4d0 ContainerId      : _GUID
         +0x4e0 Container        : Ptr64 _ESILO
         +0x4e8 PropertySet      : _PS_PROPERTY_SET
         +0x500 NetRateControl   : Ptr64 _JOB_NET_RATE_CONTROL
         +0x508 IoRateControl    : Ptr64 _JOB_IO_RATE_CONTROL
         +0x510 JobFlags         : Uint4B
         +0x510 CloseDone        : Pos 0, 1 Bit
         +0x510 MultiGroup       : Pos 1, 1 Bit
         +0x510 OutstandingNotification : Pos 2, 1 Bit
         +0x510 NotificationInProgress : Pos 3, 1 Bit
         +0x510 UILimits         : Pos 4, 1 Bit
         +0x510 CpuRateControlActive : Pos 5, 1 Bit
         +0x510 OwnCpuRateControl : Pos 6, 1 Bit
         +0x510 Terminating      : Pos 7, 1 Bit
         +0x510 WorkingSetLock   : Pos 8, 1 Bit
         +0x510 JobFrozen        : Pos 9, 1 Bit
         +0x510 Background       : Pos 10, 1 Bit
         +0x510 WakeNotificationAllocated : Pos 11, 1 Bit
         +0x510 WakeNotificationEnabled : Pos 12, 1 Bit
         +0x510 WakeNotificationPending : Pos 13, 1 Bit
         +0x510 LimitNotificationRequired : Pos 14, 1 Bit
         +0x510 ZeroCountNotificationRequired : Pos 15, 1 Bit
         +0x510 CycleTimeNotificationRequired : Pos 16, 1 Bit
         +0x510 CycleTimeNotificationPending : Pos 17, 1 Bit
         +0x510 TimersVirtualized : Pos 18, 1 Bit
         +0x510 JobSwapped       : Pos 19, 1 Bit
         +0x510 ViolationDetected : Pos 20, 1 Bit
         +0x510 EmptyJobNotified : Pos 21, 1 Bit
         +0x510 NoSystemCharge   : Pos 22, 1 Bit
         +0x510 DropNoWakeCharges : Pos 23, 1 Bit
         +0x510 NoWakeChargePolicyDecided : Pos 24, 1 Bit
         +0x510 NetRateControlActive : Pos 25, 1 Bit
         +0x510 OwnNetRateControl : Pos 26, 1 Bit
         +0x510 IoRateControlActive : Pos 27, 1 Bit
         +0x510 OwnIoRateControl : Pos 28, 1 Bit
         +0x510 IsContainerRoot  : Pos 29, 1 Bit
         +0x510 SpareJobFlags    : Pos 30, 2 Bits
         +0x514 EffectiveHighEdgeFilters : Uint4B
         +0x518 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x520 SharedCommitCharge : Uint8B
      +0x358 EffectiveLimitFlags : Uint4B
      +0x35c EffectiveSchedulingClass : Uint4B
      +0x360 EffectiveFreezeCount : Uint4B
      +0x364 EffectiveBackgroundCount : Uint4B
      +0x368 EffectiveSwapCount : Uint4B
      +0x36c EffectiveNotificationLimitCount : Uint4B
      +0x370 EffectivePriorityClass : UChar
      +0x371 PriorityClass    : UChar
      +0x372 NestingDepth     : UChar
      +0x373 Reserved1        : [1] UChar
      +0x374 CompletionFilter : Uint4B
      +0x378 WakeChannel      : _WNF_STATE_NAME
         +0x000 Data             : [2] Uint4B
      +0x378 WakeInfo         : _PS_WAKE_INFORMATION
         +0x000 NotificationChannel : Uint8B
         +0x008 WakeCounters     : [5] Uint8B
         +0x030 NoWakeCounter    : Uint8B
      +0x3b0 WakeFilter       : _JOBOBJECT_WAKE_FILTER
         +0x000 HighEdgeFilter   : Uint4B
         +0x004 LowEdgeFilter    : Uint4B
      +0x3b8 LowEdgeLatchFilter : Uint4B
      +0x3bc OwnedHighEdgeFilters : Uint4B
      +0x3c0 NotificationLink : Ptr64 _EJOB
         +0x000 Event            : _KEVENT
         +0x018 JobLinks         : _LIST_ENTRY
         +0x028 ProcessListHead  : _LIST_ENTRY
         +0x038 JobLock          : _ERESOURCE
         +0x0a0 TotalUserTime    : _LARGE_INTEGER
         +0x0a8 TotalKernelTime  : _LARGE_INTEGER
         +0x0b0 TotalCycleTime   : _LARGE_INTEGER
         +0x0b8 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x0c0 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x0c8 TotalContextSwitches : Uint8B
         +0x0d0 TotalPageFaultCount : Uint4B
         +0x0d4 TotalProcesses   : Uint4B
         +0x0d8 ActiveProcesses  : Uint4B
         +0x0dc TotalTerminatedProcesses : Uint4B
         +0x0e0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x0e8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x0f0 MinimumWorkingSetSize : Uint8B
         +0x0f8 MaximumWorkingSetSize : Uint8B
         +0x100 LimitFlags       : Uint4B
         +0x104 ActiveProcessLimit : Uint4B
         +0x108 Affinity         : _KAFFINITY_EX
         +0x1b0 AccessState      : Ptr64 _JOB_ACCESS_STATE
         +0x1b8 AccessStateQuotaReference : Ptr64 Void
         +0x1c0 UIRestrictionsClass : Uint4B
         +0x1c4 EndOfJobTimeAction : Uint4B
         +0x1c8 CompletionPort   : Ptr64 Void
         +0x1d0 CompletionKey    : Ptr64 Void
         +0x1d8 CompletionCount  : Uint8B
         +0x1e0 SessionId        : Uint4B
         +0x1e4 SchedulingClass  : Uint4B
         +0x1e8 ReadOperationCount : Uint8B
         +0x1f0 WriteOperationCount : Uint8B
         +0x1f8 OtherOperationCount : Uint8B
         +0x200 ReadTransferCount : Uint8B
         +0x208 WriteTransferCount : Uint8B
         +0x210 OtherTransferCount : Uint8B
         +0x218 DiskIoInfo       : _PROCESS_DISK_COUNTERS
         +0x240 ProcessMemoryLimit : Uint8B
         +0x248 JobMemoryLimit   : Uint8B
         +0x250 JobTotalMemoryLimit : Uint8B
         +0x258 PeakProcessMemoryUsed : Uint8B
         +0x260 PeakJobMemoryUsed : Uint8B
         +0x268 EffectiveAffinity : _KAFFINITY_EX
         +0x310 EffectivePerProcessUserTimeLimit : _LARGE_INTEGER
         +0x318 EffectiveMinimumWorkingSetSize : Uint8B
         +0x320 EffectiveMaximumWorkingSetSize : Uint8B
         +0x328 EffectiveProcessMemoryLimit : Uint8B
         +0x330 EffectiveProcessMemoryLimitJob : Ptr64 _EJOB
         +0x338 EffectivePerProcessUserTimeLimitJob : Ptr64 _EJOB
         +0x340 EffectiveDiskIoRateLimitJob : Ptr64 _EJOB
         +0x348 EffectiveNetIoRateLimitJob : Ptr64 _EJOB
         +0x350 EffectiveHeapAttributionJob : Ptr64 _EJOB
         +0x358 EffectiveLimitFlags : Uint4B
         +0x35c EffectiveSchedulingClass : Uint4B
         +0x360 EffectiveFreezeCount : Uint4B
         +0x364 EffectiveBackgroundCount : Uint4B
         +0x368 EffectiveSwapCount : Uint4B
         +0x36c EffectiveNotificationLimitCount : Uint4B
         +0x370 EffectivePriorityClass : UChar
         +0x371 PriorityClass    : UChar
         +0x372 NestingDepth     : UChar
         +0x373 Reserved1        : [1] UChar
         +0x374 CompletionFilter : Uint4B
         +0x378 WakeChannel      : _WNF_STATE_NAME
         +0x378 WakeInfo         : _PS_WAKE_INFORMATION
         +0x3b0 WakeFilter       : _JOBOBJECT_WAKE_FILTER
         +0x3b8 LowEdgeLatchFilter : Uint4B
         +0x3bc OwnedHighEdgeFilters : Uint4B
         +0x3c0 NotificationLink : Ptr64 _EJOB
         +0x3c8 CurrentJobMemoryUsed : Uint8B
         +0x3d0 NotificationInfo : Ptr64 _JOB_NOTIFICATION_INFORMATION
         +0x3d8 NotificationInfoQuotaReference : Ptr64 Void
         +0x3e0 NotificationPacket : Ptr64 _IO_MINI_COMPLETION_PACKET_USER
         +0x3e8 CpuRateControl   : Ptr64 _JOB_CPU_RATE_CONTROL
         +0x3f0 EffectiveSchedulingGroup : Ptr64 Void
         +0x3f8 ReadyTime        : Uint8B
         +0x400 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x408 SiblingJobLinks  : _LIST_ENTRY
         +0x418 ChildJobListHead : _LIST_ENTRY
         +0x428 ParentJob        : Ptr64 _EJOB
         +0x430 RootJob          : Ptr64 _EJOB
         +0x438 IteratorListHead : _LIST_ENTRY
         +0x448 AncestorCount    : Uint8B
         +0x450 Ancestors        : Ptr64 Ptr64 _EJOB
         +0x450 SessionObject    : Ptr64 Void
         +0x458 Accounting       : _EPROCESS_VALUES
         +0x4a8 ShadowActiveProcessCount : Uint4B
         +0x4ac ActiveAuxiliaryProcessCount : Uint4B
         +0x4b0 SequenceNumber   : Uint4B
         +0x4b8 TimerListLock    : Uint8B
         +0x4c0 TimerListHead    : _LIST_ENTRY
         +0x4d0 ContainerId      : _GUID
         +0x4e0 Container        : Ptr64 _ESILO
         +0x4e8 PropertySet      : _PS_PROPERTY_SET
         +0x500 NetRateControl   : Ptr64 _JOB_NET_RATE_CONTROL
         +0x508 IoRateControl    : Ptr64 _JOB_IO_RATE_CONTROL
         +0x510 JobFlags         : Uint4B
         +0x510 CloseDone        : Pos 0, 1 Bit
         +0x510 MultiGroup       : Pos 1, 1 Bit
         +0x510 OutstandingNotification : Pos 2, 1 Bit
         +0x510 NotificationInProgress : Pos 3, 1 Bit
         +0x510 UILimits         : Pos 4, 1 Bit
         +0x510 CpuRateControlActive : Pos 5, 1 Bit
         +0x510 OwnCpuRateControl : Pos 6, 1 Bit
         +0x510 Terminating      : Pos 7, 1 Bit
         +0x510 WorkingSetLock   : Pos 8, 1 Bit
         +0x510 JobFrozen        : Pos 9, 1 Bit
         +0x510 Background       : Pos 10, 1 Bit
         +0x510 WakeNotificationAllocated : Pos 11, 1 Bit
         +0x510 WakeNotificationEnabled : Pos 12, 1 Bit
         +0x510 WakeNotificationPending : Pos 13, 1 Bit
         +0x510 LimitNotificationRequired : Pos 14, 1 Bit
         +0x510 ZeroCountNotificationRequired : Pos 15, 1 Bit
         +0x510 CycleTimeNotificationRequired : Pos 16, 1 Bit
         +0x510 CycleTimeNotificationPending : Pos 17, 1 Bit
         +0x510 TimersVirtualized : Pos 18, 1 Bit
         +0x510 JobSwapped       : Pos 19, 1 Bit
         +0x510 ViolationDetected : Pos 20, 1 Bit
         +0x510 EmptyJobNotified : Pos 21, 1 Bit
         +0x510 NoSystemCharge   : Pos 22, 1 Bit
         +0x510 DropNoWakeCharges : Pos 23, 1 Bit
         +0x510 NoWakeChargePolicyDecided : Pos 24, 1 Bit
         +0x510 NetRateControlActive : Pos 25, 1 Bit
         +0x510 OwnNetRateControl : Pos 26, 1 Bit
         +0x510 IoRateControlActive : Pos 27, 1 Bit
         +0x510 OwnIoRateControl : Pos 28, 1 Bit
         +0x510 IsContainerRoot  : Pos 29, 1 Bit
         +0x510 SpareJobFlags    : Pos 30, 2 Bits
         +0x514 EffectiveHighEdgeFilters : Uint4B
         +0x518 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x520 SharedCommitCharge : Uint8B
      +0x3c8 CurrentJobMemoryUsed : Uint8B
      +0x3d0 NotificationInfo : Ptr64 _JOB_NOTIFICATION_INFORMATION
      +0x3d8 NotificationInfoQuotaReference : Ptr64 Void
      +0x3e0 NotificationPacket : Ptr64 _IO_MINI_COMPLETION_PACKET_USER
         +0x000 ListEntry        : _LIST_ENTRY
         +0x010 PacketType       : Uint4B
         +0x018 KeyContext       : Ptr64 Void
         +0x020 ApcContext       : Ptr64 Void
         +0x028 IoStatus         : Int4B
         +0x030 IoStatusInformation : Uint8B
         +0x038 MiniPacketCallback : Ptr64           void 
         +0x040 Context          : Ptr64 Void
         +0x048 Allocated        : UChar
      +0x3e8 CpuRateControl   : Ptr64 _JOB_CPU_RATE_CONTROL
      +0x3f0 EffectiveSchedulingGroup : Ptr64 Void
      +0x3f8 ReadyTime        : Uint8B
      +0x400 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 60 Bits
         +0x000 Value            : Uint8B
         +0x000 Ptr              : Ptr64 Void
      +0x408 SiblingJobLinks  : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x418 ChildJobListHead : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x428 ParentJob        : Ptr64 _EJOB
         +0x000 Event            : _KEVENT
         +0x018 JobLinks         : _LIST_ENTRY
         +0x028 ProcessListHead  : _LIST_ENTRY
         +0x038 JobLock          : _ERESOURCE
         +0x0a0 TotalUserTime    : _LARGE_INTEGER
         +0x0a8 TotalKernelTime  : _LARGE_INTEGER
         +0x0b0 TotalCycleTime   : _LARGE_INTEGER
         +0x0b8 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x0c0 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x0c8 TotalContextSwitches : Uint8B
         +0x0d0 TotalPageFaultCount : Uint4B
         +0x0d4 TotalProcesses   : Uint4B
         +0x0d8 ActiveProcesses  : Uint4B
         +0x0dc TotalTerminatedProcesses : Uint4B
         +0x0e0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x0e8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x0f0 MinimumWorkingSetSize : Uint8B
         +0x0f8 MaximumWorkingSetSize : Uint8B
         +0x100 LimitFlags       : Uint4B
         +0x104 ActiveProcessLimit : Uint4B
         +0x108 Affinity         : _KAFFINITY_EX
         +0x1b0 AccessState      : Ptr64 _JOB_ACCESS_STATE
         +0x1b8 AccessStateQuotaReference : Ptr64 Void
         +0x1c0 UIRestrictionsClass : Uint4B
         +0x1c4 EndOfJobTimeAction : Uint4B
         +0x1c8 CompletionPort   : Ptr64 Void
         +0x1d0 CompletionKey    : Ptr64 Void
         +0x1d8 CompletionCount  : Uint8B
         +0x1e0 SessionId        : Uint4B
         +0x1e4 SchedulingClass  : Uint4B
         +0x1e8 ReadOperationCount : Uint8B
         +0x1f0 WriteOperationCount : Uint8B
         +0x1f8 OtherOperationCount : Uint8B
         +0x200 ReadTransferCount : Uint8B
         +0x208 WriteTransferCount : Uint8B
         +0x210 OtherTransferCount : Uint8B
         +0x218 DiskIoInfo       : _PROCESS_DISK_COUNTERS
         +0x240 ProcessMemoryLimit : Uint8B
         +0x248 JobMemoryLimit   : Uint8B
         +0x250 JobTotalMemoryLimit : Uint8B
         +0x258 PeakProcessMemoryUsed : Uint8B
         +0x260 PeakJobMemoryUsed : Uint8B
         +0x268 EffectiveAffinity : _KAFFINITY_EX
         +0x310 EffectivePerProcessUserTimeLimit : _LARGE_INTEGER
         +0x318 EffectiveMinimumWorkingSetSize : Uint8B
         +0x320 EffectiveMaximumWorkingSetSize : Uint8B
         +0x328 EffectiveProcessMemoryLimit : Uint8B
         +0x330 EffectiveProcessMemoryLimitJob : Ptr64 _EJOB
         +0x338 EffectivePerProcessUserTimeLimitJob : Ptr64 _EJOB
         +0x340 EffectiveDiskIoRateLimitJob : Ptr64 _EJOB
         +0x348 EffectiveNetIoRateLimitJob : Ptr64 _EJOB
         +0x350 EffectiveHeapAttributionJob : Ptr64 _EJOB
         +0x358 EffectiveLimitFlags : Uint4B
         +0x35c EffectiveSchedulingClass : Uint4B
         +0x360 EffectiveFreezeCount : Uint4B
         +0x364 EffectiveBackgroundCount : Uint4B
         +0x368 EffectiveSwapCount : Uint4B
         +0x36c EffectiveNotificationLimitCount : Uint4B
         +0x370 EffectivePriorityClass : UChar
         +0x371 PriorityClass    : UChar
         +0x372 NestingDepth     : UChar
         +0x373 Reserved1        : [1] UChar
         +0x374 CompletionFilter : Uint4B
         +0x378 WakeChannel      : _WNF_STATE_NAME
         +0x378 WakeInfo         : _PS_WAKE_INFORMATION
         +0x3b0 WakeFilter       : _JOBOBJECT_WAKE_FILTER
         +0x3b8 LowEdgeLatchFilter : Uint4B
         +0x3bc OwnedHighEdgeFilters : Uint4B
         +0x3c0 NotificationLink : Ptr64 _EJOB
         +0x3c8 CurrentJobMemoryUsed : Uint8B
         +0x3d0 NotificationInfo : Ptr64 _JOB_NOTIFICATION_INFORMATION
         +0x3d8 NotificationInfoQuotaReference : Ptr64 Void
         +0x3e0 NotificationPacket : Ptr64 _IO_MINI_COMPLETION_PACKET_USER
         +0x3e8 CpuRateControl   : Ptr64 _JOB_CPU_RATE_CONTROL
         +0x3f0 EffectiveSchedulingGroup : Ptr64 Void
         +0x3f8 ReadyTime        : Uint8B
         +0x400 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x408 SiblingJobLinks  : _LIST_ENTRY
         +0x418 ChildJobListHead : _LIST_ENTRY
         +0x428 ParentJob        : Ptr64 _EJOB
         +0x430 RootJob          : Ptr64 _EJOB
         +0x438 IteratorListHead : _LIST_ENTRY
         +0x448 AncestorCount    : Uint8B
         +0x450 Ancestors        : Ptr64 Ptr64 _EJOB
         +0x450 SessionObject    : Ptr64 Void
         +0x458 Accounting       : _EPROCESS_VALUES
         +0x4a8 ShadowActiveProcessCount : Uint4B
         +0x4ac ActiveAuxiliaryProcessCount : Uint4B
         +0x4b0 SequenceNumber   : Uint4B
         +0x4b8 TimerListLock    : Uint8B
         +0x4c0 TimerListHead    : _LIST_ENTRY
         +0x4d0 ContainerId      : _GUID
         +0x4e0 Container        : Ptr64 _ESILO
         +0x4e8 PropertySet      : _PS_PROPERTY_SET
         +0x500 NetRateControl   : Ptr64 _JOB_NET_RATE_CONTROL
         +0x508 IoRateControl    : Ptr64 _JOB_IO_RATE_CONTROL
         +0x510 JobFlags         : Uint4B
         +0x510 CloseDone        : Pos 0, 1 Bit
         +0x510 MultiGroup       : Pos 1, 1 Bit
         +0x510 OutstandingNotification : Pos 2, 1 Bit
         +0x510 NotificationInProgress : Pos 3, 1 Bit
         +0x510 UILimits         : Pos 4, 1 Bit
         +0x510 CpuRateControlActive : Pos 5, 1 Bit
         +0x510 OwnCpuRateControl : Pos 6, 1 Bit
         +0x510 Terminating      : Pos 7, 1 Bit
         +0x510 WorkingSetLock   : Pos 8, 1 Bit
         +0x510 JobFrozen        : Pos 9, 1 Bit
         +0x510 Background       : Pos 10, 1 Bit
         +0x510 WakeNotificationAllocated : Pos 11, 1 Bit
         +0x510 WakeNotificationEnabled : Pos 12, 1 Bit
         +0x510 WakeNotificationPending : Pos 13, 1 Bit
         +0x510 LimitNotificationRequired : Pos 14, 1 Bit
         +0x510 ZeroCountNotificationRequired : Pos 15, 1 Bit
         +0x510 CycleTimeNotificationRequired : Pos 16, 1 Bit
         +0x510 CycleTimeNotificationPending : Pos 17, 1 Bit
         +0x510 TimersVirtualized : Pos 18, 1 Bit
         +0x510 JobSwapped       : Pos 19, 1 Bit
         +0x510 ViolationDetected : Pos 20, 1 Bit
         +0x510 EmptyJobNotified : Pos 21, 1 Bit
         +0x510 NoSystemCharge   : Pos 22, 1 Bit
         +0x510 DropNoWakeCharges : Pos 23, 1 Bit
         +0x510 NoWakeChargePolicyDecided : Pos 24, 1 Bit
         +0x510 NetRateControlActive : Pos 25, 1 Bit
         +0x510 OwnNetRateControl : Pos 26, 1 Bit
         +0x510 IoRateControlActive : Pos 27, 1 Bit
         +0x510 OwnIoRateControl : Pos 28, 1 Bit
         +0x510 IsContainerRoot  : Pos 29, 1 Bit
         +0x510 SpareJobFlags    : Pos 30, 2 Bits
         +0x514 EffectiveHighEdgeFilters : Uint4B
         +0x518 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x520 SharedCommitCharge : Uint8B
      +0x430 RootJob          : Ptr64 _EJOB
         +0x000 Event            : _KEVENT
         +0x018 JobLinks         : _LIST_ENTRY
         +0x028 ProcessListHead  : _LIST_ENTRY
         +0x038 JobLock          : _ERESOURCE
         +0x0a0 TotalUserTime    : _LARGE_INTEGER
         +0x0a8 TotalKernelTime  : _LARGE_INTEGER
         +0x0b0 TotalCycleTime   : _LARGE_INTEGER
         +0x0b8 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x0c0 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x0c8 TotalContextSwitches : Uint8B
         +0x0d0 TotalPageFaultCount : Uint4B
         +0x0d4 TotalProcesses   : Uint4B
         +0x0d8 ActiveProcesses  : Uint4B
         +0x0dc TotalTerminatedProcesses : Uint4B
         +0x0e0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x0e8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x0f0 MinimumWorkingSetSize : Uint8B
         +0x0f8 MaximumWorkingSetSize : Uint8B
         +0x100 LimitFlags       : Uint4B
         +0x104 ActiveProcessLimit : Uint4B
         +0x108 Affinity         : _KAFFINITY_EX
         +0x1b0 AccessState      : Ptr64 _JOB_ACCESS_STATE
         +0x1b8 AccessStateQuotaReference : Ptr64 Void
         +0x1c0 UIRestrictionsClass : Uint4B
         +0x1c4 EndOfJobTimeAction : Uint4B
         +0x1c8 CompletionPort   : Ptr64 Void
         +0x1d0 CompletionKey    : Ptr64 Void
         +0x1d8 CompletionCount  : Uint8B
         +0x1e0 SessionId        : Uint4B
         +0x1e4 SchedulingClass  : Uint4B
         +0x1e8 ReadOperationCount : Uint8B
         +0x1f0 WriteOperationCount : Uint8B
         +0x1f8 OtherOperationCount : Uint8B
         +0x200 ReadTransferCount : Uint8B
         +0x208 WriteTransferCount : Uint8B
         +0x210 OtherTransferCount : Uint8B
         +0x218 DiskIoInfo       : _PROCESS_DISK_COUNTERS
         +0x240 ProcessMemoryLimit : Uint8B
         +0x248 JobMemoryLimit   : Uint8B
         +0x250 JobTotalMemoryLimit : Uint8B
         +0x258 PeakProcessMemoryUsed : Uint8B
         +0x260 PeakJobMemoryUsed : Uint8B
         +0x268 EffectiveAffinity : _KAFFINITY_EX
         +0x310 EffectivePerProcessUserTimeLimit : _LARGE_INTEGER
         +0x318 EffectiveMinimumWorkingSetSize : Uint8B
         +0x320 EffectiveMaximumWorkingSetSize : Uint8B
         +0x328 EffectiveProcessMemoryLimit : Uint8B
         +0x330 EffectiveProcessMemoryLimitJob : Ptr64 _EJOB
         +0x338 EffectivePerProcessUserTimeLimitJob : Ptr64 _EJOB
         +0x340 EffectiveDiskIoRateLimitJob : Ptr64 _EJOB
         +0x348 EffectiveNetIoRateLimitJob : Ptr64 _EJOB
         +0x350 EffectiveHeapAttributionJob : Ptr64 _EJOB
         +0x358 EffectiveLimitFlags : Uint4B
         +0x35c EffectiveSchedulingClass : Uint4B
         +0x360 EffectiveFreezeCount : Uint4B
         +0x364 EffectiveBackgroundCount : Uint4B
         +0x368 EffectiveSwapCount : Uint4B
         +0x36c EffectiveNotificationLimitCount : Uint4B
         +0x370 EffectivePriorityClass : UChar
         +0x371 PriorityClass    : UChar
         +0x372 NestingDepth     : UChar
         +0x373 Reserved1        : [1] UChar
         +0x374 CompletionFilter : Uint4B
         +0x378 WakeChannel      : _WNF_STATE_NAME
         +0x378 WakeInfo         : _PS_WAKE_INFORMATION
         +0x3b0 WakeFilter       : _JOBOBJECT_WAKE_FILTER
         +0x3b8 LowEdgeLatchFilter : Uint4B
         +0x3bc OwnedHighEdgeFilters : Uint4B
         +0x3c0 NotificationLink : Ptr64 _EJOB
         +0x3c8 CurrentJobMemoryUsed : Uint8B
         +0x3d0 NotificationInfo : Ptr64 _JOB_NOTIFICATION_INFORMATION
         +0x3d8 NotificationInfoQuotaReference : Ptr64 Void
         +0x3e0 NotificationPacket : Ptr64 _IO_MINI_COMPLETION_PACKET_USER
         +0x3e8 CpuRateControl   : Ptr64 _JOB_CPU_RATE_CONTROL
         +0x3f0 EffectiveSchedulingGroup : Ptr64 Void
         +0x3f8 ReadyTime        : Uint8B
         +0x400 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x408 SiblingJobLinks  : _LIST_ENTRY
         +0x418 ChildJobListHead : _LIST_ENTRY
         +0x428 ParentJob        : Ptr64 _EJOB
         +0x430 RootJob          : Ptr64 _EJOB
         +0x438 IteratorListHead : _LIST_ENTRY
         +0x448 AncestorCount    : Uint8B
         +0x450 Ancestors        : Ptr64 Ptr64 _EJOB
         +0x450 SessionObject    : Ptr64 Void
         +0x458 Accounting       : _EPROCESS_VALUES
         +0x4a8 ShadowActiveProcessCount : Uint4B
         +0x4ac ActiveAuxiliaryProcessCount : Uint4B
         +0x4b0 SequenceNumber   : Uint4B
         +0x4b8 TimerListLock    : Uint8B
         +0x4c0 TimerListHead    : _LIST_ENTRY
         +0x4d0 ContainerId      : _GUID
         +0x4e0 Container        : Ptr64 _ESILO
         +0x4e8 PropertySet      : _PS_PROPERTY_SET
         +0x500 NetRateControl   : Ptr64 _JOB_NET_RATE_CONTROL
         +0x508 IoRateControl    : Ptr64 _JOB_IO_RATE_CONTROL
         +0x510 JobFlags         : Uint4B
         +0x510 CloseDone        : Pos 0, 1 Bit
         +0x510 MultiGroup       : Pos 1, 1 Bit
         +0x510 OutstandingNotification : Pos 2, 1 Bit
         +0x510 NotificationInProgress : Pos 3, 1 Bit
         +0x510 UILimits         : Pos 4, 1 Bit
         +0x510 CpuRateControlActive : Pos 5, 1 Bit
         +0x510 OwnCpuRateControl : Pos 6, 1 Bit
         +0x510 Terminating      : Pos 7, 1 Bit
         +0x510 WorkingSetLock   : Pos 8, 1 Bit
         +0x510 JobFrozen        : Pos 9, 1 Bit
         +0x510 Background       : Pos 10, 1 Bit
         +0x510 WakeNotificationAllocated : Pos 11, 1 Bit
         +0x510 WakeNotificationEnabled : Pos 12, 1 Bit
         +0x510 WakeNotificationPending : Pos 13, 1 Bit
         +0x510 LimitNotificationRequired : Pos 14, 1 Bit
         +0x510 ZeroCountNotificationRequired : Pos 15, 1 Bit
         +0x510 CycleTimeNotificationRequired : Pos 16, 1 Bit
         +0x510 CycleTimeNotificationPending : Pos 17, 1 Bit
         +0x510 TimersVirtualized : Pos 18, 1 Bit
         +0x510 JobSwapped       : Pos 19, 1 Bit
         +0x510 ViolationDetected : Pos 20, 1 Bit
         +0x510 EmptyJobNotified : Pos 21, 1 Bit
         +0x510 NoSystemCharge   : Pos 22, 1 Bit
         +0x510 DropNoWakeCharges : Pos 23, 1 Bit
         +0x510 NoWakeChargePolicyDecided : Pos 24, 1 Bit
         +0x510 NetRateControlActive : Pos 25, 1 Bit
         +0x510 OwnNetRateControl : Pos 26, 1 Bit
         +0x510 IoRateControlActive : Pos 27, 1 Bit
         +0x510 OwnIoRateControl : Pos 28, 1 Bit
         +0x510 IsContainerRoot  : Pos 29, 1 Bit
         +0x510 SpareJobFlags    : Pos 30, 2 Bits
         +0x514 EffectiveHighEdgeFilters : Uint4B
         +0x518 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x520 SharedCommitCharge : Uint8B
      +0x438 IteratorListHead : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x448 AncestorCount    : Uint8B
      +0x450 Ancestors        : Ptr64 Ptr64 _EJOB
         +0x000 Event            : _KEVENT
         +0x018 JobLinks         : _LIST_ENTRY
         +0x028 ProcessListHead  : _LIST_ENTRY
         +0x038 JobLock          : _ERESOURCE
         +0x0a0 TotalUserTime    : _LARGE_INTEGER
         +0x0a8 TotalKernelTime  : _LARGE_INTEGER
         +0x0b0 TotalCycleTime   : _LARGE_INTEGER
         +0x0b8 ThisPeriodTotalUserTime : _LARGE_INTEGER
         +0x0c0 ThisPeriodTotalKernelTime : _LARGE_INTEGER
         +0x0c8 TotalContextSwitches : Uint8B
         +0x0d0 TotalPageFaultCount : Uint4B
         +0x0d4 TotalProcesses   : Uint4B
         +0x0d8 ActiveProcesses  : Uint4B
         +0x0dc TotalTerminatedProcesses : Uint4B
         +0x0e0 PerProcessUserTimeLimit : _LARGE_INTEGER
         +0x0e8 PerJobUserTimeLimit : _LARGE_INTEGER
         +0x0f0 MinimumWorkingSetSize : Uint8B
         +0x0f8 MaximumWorkingSetSize : Uint8B
         +0x100 LimitFlags       : Uint4B
         +0x104 ActiveProcessLimit : Uint4B
         +0x108 Affinity         : _KAFFINITY_EX
         +0x1b0 AccessState      : Ptr64 _JOB_ACCESS_STATE
         +0x1b8 AccessStateQuotaReference : Ptr64 Void
         +0x1c0 UIRestrictionsClass : Uint4B
         +0x1c4 EndOfJobTimeAction : Uint4B
         +0x1c8 CompletionPort   : Ptr64 Void
         +0x1d0 CompletionKey    : Ptr64 Void
         +0x1d8 CompletionCount  : Uint8B
         +0x1e0 SessionId        : Uint4B
         +0x1e4 SchedulingClass  : Uint4B
         +0x1e8 ReadOperationCount : Uint8B
         +0x1f0 WriteOperationCount : Uint8B
         +0x1f8 OtherOperationCount : Uint8B
         +0x200 ReadTransferCount : Uint8B
         +0x208 WriteTransferCount : Uint8B
         +0x210 OtherTransferCount : Uint8B
         +0x218 DiskIoInfo       : _PROCESS_DISK_COUNTERS
         +0x240 ProcessMemoryLimit : Uint8B
         +0x248 JobMemoryLimit   : Uint8B
         +0x250 JobTotalMemoryLimit : Uint8B
         +0x258 PeakProcessMemoryUsed : Uint8B
         +0x260 PeakJobMemoryUsed : Uint8B
         +0x268 EffectiveAffinity : _KAFFINITY_EX
         +0x310 EffectivePerProcessUserTimeLimit : _LARGE_INTEGER
         +0x318 EffectiveMinimumWorkingSetSize : Uint8B
         +0x320 EffectiveMaximumWorkingSetSize : Uint8B
         +0x328 EffectiveProcessMemoryLimit : Uint8B
         +0x330 EffectiveProcessMemoryLimitJob : Ptr64 _EJOB
         +0x338 EffectivePerProcessUserTimeLimitJob : Ptr64 _EJOB
         +0x340 EffectiveDiskIoRateLimitJob : Ptr64 _EJOB
         +0x348 EffectiveNetIoRateLimitJob : Ptr64 _EJOB
         +0x350 EffectiveHeapAttributionJob : Ptr64 _EJOB
         +0x358 EffectiveLimitFlags : Uint4B
         +0x35c EffectiveSchedulingClass : Uint4B
         +0x360 EffectiveFreezeCount : Uint4B
         +0x364 EffectiveBackgroundCount : Uint4B
         +0x368 EffectiveSwapCount : Uint4B
         +0x36c EffectiveNotificationLimitCount : Uint4B
         +0x370 EffectivePriorityClass : UChar
         +0x371 PriorityClass    : UChar
         +0x372 NestingDepth     : UChar
         +0x373 Reserved1        : [1] UChar
         +0x374 CompletionFilter : Uint4B
         +0x378 WakeChannel      : _WNF_STATE_NAME
         +0x378 WakeInfo         : _PS_WAKE_INFORMATION
         +0x3b0 WakeFilter       : _JOBOBJECT_WAKE_FILTER
         +0x3b8 LowEdgeLatchFilter : Uint4B
         +0x3bc OwnedHighEdgeFilters : Uint4B
         +0x3c0 NotificationLink : Ptr64 _EJOB
         +0x3c8 CurrentJobMemoryUsed : Uint8B
         +0x3d0 NotificationInfo : Ptr64 _JOB_NOTIFICATION_INFORMATION
         +0x3d8 NotificationInfoQuotaReference : Ptr64 Void
         +0x3e0 NotificationPacket : Ptr64 _IO_MINI_COMPLETION_PACKET_USER
         +0x3e8 CpuRateControl   : Ptr64 _JOB_CPU_RATE_CONTROL
         +0x3f0 EffectiveSchedulingGroup : Ptr64 Void
         +0x3f8 ReadyTime        : Uint8B
         +0x400 MemoryLimitsLock : _EX_PUSH_LOCK
         +0x408 SiblingJobLinks  : _LIST_ENTRY
         +0x418 ChildJobListHead : _LIST_ENTRY
         +0x428 ParentJob        : Ptr64 _EJOB
         +0x430 RootJob          : Ptr64 _EJOB
         +0x438 IteratorListHead : _LIST_ENTRY
         +0x448 AncestorCount    : Uint8B
         +0x450 Ancestors        : Ptr64 Ptr64 _EJOB
         +0x450 SessionObject    : Ptr64 Void
         +0x458 Accounting       : _EPROCESS_VALUES
         +0x4a8 ShadowActiveProcessCount : Uint4B
         +0x4ac ActiveAuxiliaryProcessCount : Uint4B
         +0x4b0 SequenceNumber   : Uint4B
         +0x4b8 TimerListLock    : Uint8B
         +0x4c0 TimerListHead    : _LIST_ENTRY
         +0x4d0 ContainerId      : _GUID
         +0x4e0 Container        : Ptr64 _ESILO
         +0x4e8 PropertySet      : _PS_PROPERTY_SET
         +0x500 NetRateControl   : Ptr64 _JOB_NET_RATE_CONTROL
         +0x508 IoRateControl    : Ptr64 _JOB_IO_RATE_CONTROL
         +0x510 JobFlags         : Uint4B
         +0x510 CloseDone        : Pos 0, 1 Bit
         +0x510 MultiGroup       : Pos 1, 1 Bit
         +0x510 OutstandingNotification : Pos 2, 1 Bit
         +0x510 NotificationInProgress : Pos 3, 1 Bit
         +0x510 UILimits         : Pos 4, 1 Bit
         +0x510 CpuRateControlActive : Pos 5, 1 Bit
         +0x510 OwnCpuRateControl : Pos 6, 1 Bit
         +0x510 Terminating      : Pos 7, 1 Bit
         +0x510 WorkingSetLock   : Pos 8, 1 Bit
         +0x510 JobFrozen        : Pos 9, 1 Bit
         +0x510 Background       : Pos 10, 1 Bit
         +0x510 WakeNotificationAllocated : Pos 11, 1 Bit
         +0x510 WakeNotificationEnabled : Pos 12, 1 Bit
         +0x510 WakeNotificationPending : Pos 13, 1 Bit
         +0x510 LimitNotificationRequired : Pos 14, 1 Bit
         +0x510 ZeroCountNotificationRequired : Pos 15, 1 Bit
         +0x510 CycleTimeNotificationRequired : Pos 16, 1 Bit
         +0x510 CycleTimeNotificationPending : Pos 17, 1 Bit
         +0x510 TimersVirtualized : Pos 18, 1 Bit
         +0x510 JobSwapped       : Pos 19, 1 Bit
         +0x510 ViolationDetected : Pos 20, 1 Bit
         +0x510 EmptyJobNotified : Pos 21, 1 Bit
         +0x510 NoSystemCharge   : Pos 22, 1 Bit
         +0x510 DropNoWakeCharges : Pos 23, 1 Bit
         +0x510 NoWakeChargePolicyDecided : Pos 24, 1 Bit
         +0x510 NetRateControlActive : Pos 25, 1 Bit
         +0x510 OwnNetRateControl : Pos 26, 1 Bit
         +0x510 IoRateControlActive : Pos 27, 1 Bit
         +0x510 OwnIoRateControl : Pos 28, 1 Bit
         +0x510 IsContainerRoot  : Pos 29, 1 Bit
         +0x510 SpareJobFlags    : Pos 30, 2 Bits
         +0x514 EffectiveHighEdgeFilters : Uint4B
         +0x518 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x520 SharedCommitCharge : Uint8B
      +0x450 SessionObject    : Ptr64 Void
      +0x458 Accounting       : _EPROCESS_VALUES
         +0x000 KernelTime       : Uint8B
         +0x008 UserTime         : Uint8B
         +0x010 CycleTime        : Uint8B
         +0x018 ContextSwitches  : Uint8B
         +0x020 ReadOperationCount : Int8B
         +0x028 WriteOperationCount : Int8B
         +0x030 OtherOperationCount : Int8B
         +0x038 ReadTransferCount : Int8B
         +0x040 WriteTransferCount : Int8B
         +0x048 OtherTransferCount : Int8B
      +0x4a8 ShadowActiveProcessCount : Uint4B
      +0x4ac ActiveAuxiliaryProcessCount : Uint4B
      +0x4b0 SequenceNumber   : Uint4B
      +0x4b8 TimerListLock    : Uint8B
      +0x4c0 TimerListHead    : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x4d0 ContainerId      : _GUID
         +0x000 Data1            : Uint4B
         +0x004 Data2            : Uint2B
         +0x006 Data3            : Uint2B
         +0x008 Data4            : [8] UChar
      +0x4e0 Container        : Ptr64 _ESILO
      +0x4e8 PropertySet      : _PS_PROPERTY_SET
         +0x000 ListHead         : _LIST_ENTRY
         +0x010 Lock             : Uint8B
      +0x500 NetRateControl   : Ptr64 _JOB_NET_RATE_CONTROL
      +0x508 IoRateControl    : Ptr64 _JOB_IO_RATE_CONTROL
      +0x510 JobFlags         : Uint4B
      +0x510 CloseDone        : Pos 0, 1 Bit
      +0x510 MultiGroup       : Pos 1, 1 Bit
      +0x510 OutstandingNotification : Pos 2, 1 Bit
      +0x510 NotificationInProgress : Pos 3, 1 Bit
      +0x510 UILimits         : Pos 4, 1 Bit
      +0x510 CpuRateControlActive : Pos 5, 1 Bit
      +0x510 OwnCpuRateControl : Pos 6, 1 Bit
      +0x510 Terminating      : Pos 7, 1 Bit
      +0x510 WorkingSetLock   : Pos 8, 1 Bit
      +0x510 JobFrozen        : Pos 9, 1 Bit
      +0x510 Background       : Pos 10, 1 Bit
      +0x510 WakeNotificationAllocated : Pos 11, 1 Bit
      +0x510 WakeNotificationEnabled : Pos 12, 1 Bit
      +0x510 WakeNotificationPending : Pos 13, 1 Bit
      +0x510 LimitNotificationRequired : Pos 14, 1 Bit
      +0x510 ZeroCountNotificationRequired : Pos 15, 1 Bit
      +0x510 CycleTimeNotificationRequired : Pos 16, 1 Bit
      +0x510 CycleTimeNotificationPending : Pos 17, 1 Bit
      +0x510 TimersVirtualized : Pos 18, 1 Bit
      +0x510 JobSwapped       : Pos 19, 1 Bit
      +0x510 ViolationDetected : Pos 20, 1 Bit
      +0x510 EmptyJobNotified : Pos 21, 1 Bit
      +0x510 NoSystemCharge   : Pos 22, 1 Bit
      +0x510 DropNoWakeCharges : Pos 23, 1 Bit
      +0x510 NoWakeChargePolicyDecided : Pos 24, 1 Bit
      +0x510 NetRateControlActive : Pos 25, 1 Bit
      +0x510 OwnNetRateControl : Pos 26, 1 Bit
      +0x510 IoRateControlActive : Pos 27, 1 Bit
      +0x510 OwnIoRateControl : Pos 28, 1 Bit
      +0x510 IsContainerRoot  : Pos 29, 1 Bit
      +0x510 SpareJobFlags    : Pos 30, 2 Bits
      +0x514 EffectiveHighEdgeFilters : Uint4B
      +0x518 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x000 Cycles           : [4] [2] Uint8B
         +0x040 DiskEnergy       : Uint8B
         +0x048 NetworkTailEnergy : Uint8B
         +0x050 MBBTailEnergy    : Uint8B
         +0x058 NetworkTxRxBytes : Uint8B
         +0x060 MBBTxRxBytes     : Uint8B
         +0x068 Foreground       : Pos 0, 1 Bit
         +0x068 WindowInformation : Uint4B
         +0x06c PixelArea        : Uint4B
         +0x070 PixelReportTimestamp : Int8B
         +0x078 PixelTime        : Uint8B
         +0x080 ForegroundReportTimestamp : Int8B
         +0x088 ForegroundTime   : Uint8B
      +0x520 SharedCommitCharge : Uint8B
   +0x3b8 SectionObject    : Ptr64 Void
   +0x3c0 SectionBaseAddress : Ptr64 Void
   +0x3c8 Cookie           : Uint4B
   +0x3d0 WorkingSetWatch  : Ptr64 _PAGEFAULT_HISTORY
   +0x3d8 Win32WindowStation : Ptr64 Void
   +0x3e0 InheritedFromUniqueProcessId : Ptr64 Void
   +0x3e8 LdtInformation   : Ptr64 Void
   +0x3f0 OwnerProcessId   : Uint8B
   +0x3f8 Peb              : Ptr64 _PEB
      +0x000 InheritedAddressSpace : UChar
      +0x001 ReadImageFileExecOptions : UChar
      +0x002 BeingDebugged    : UChar
      +0x003 BitField         : UChar
      +0x003 ImageUsesLargePages : Pos 0, 1 Bit
      +0x003 IsProtectedProcess : Pos 1, 1 Bit
      +0x003 IsImageDynamicallyRelocated : Pos 2, 1 Bit
      +0x003 SkipPatchingUser32Forwarders : Pos 3, 1 Bit
      +0x003 IsPackagedProcess : Pos 4, 1 Bit
      +0x003 IsAppContainer   : Pos 5, 1 Bit
      +0x003 IsProtectedProcessLight : Pos 6, 1 Bit
      +0x003 SpareBits        : Pos 7, 1 Bit
      +0x004 Padding0         : [4] UChar
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
         +0x400 PackageDependencyData : Ptr64 Void
         +0x408 ProcessGroupId   : Uint4B
         +0x40c LoaderThreads    : Uint4B
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
      +0x054 Padding1         : [4] UChar
      +0x058 KernelCallbackTable : Ptr64 Void
      +0x058 UserSharedInfoPtr : Ptr64 Void
      +0x060 SystemReserved   : [1] Uint4B
      +0x064 AtlThunkSListPtr32 : Uint4B
      +0x068 ApiSetMap        : Ptr64 Void
      +0x070 TlsExpansionCounter : Uint4B
      +0x074 Padding2         : [4] UChar
      +0x078 TlsBitmap        : Ptr64 Void
      +0x080 TlsBitmapBits    : [2] Uint4B
      +0x088 ReadOnlySharedMemoryBase : Ptr64 Void
      +0x090 SparePvoid0      : Ptr64 Void
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
      +0x10c Padding3         : [4] UChar
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
      +0x134 Padding4         : [4] UChar
      +0x138 ActiveProcessAffinityMask : Uint8B
      +0x140 GdiHandleBuffer  : [60] Uint4B
      +0x230 PostProcessInitRoutine : Ptr64        void 
      +0x238 TlsExpansionBitmap : Ptr64 Void
      +0x240 TlsExpansionBitmapBits : [32] Uint4B
      +0x2c0 SessionId        : Uint4B
      +0x2c4 Padding5         : [4] UChar
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
      +0x368 pUnused          : Ptr64 Void
      +0x370 pImageHeaderHash : Ptr64 Void
      +0x378 TracingFlags     : Uint4B
      +0x378 HeapTracingEnabled : Pos 0, 1 Bit
      +0x378 CritSecTracingEnabled : Pos 1, 1 Bit
      +0x378 LibLoaderTracingEnabled : Pos 2, 1 Bit
      +0x378 SpareTracingBits : Pos 3, 29 Bits
      +0x37c Padding6         : [4] UChar
      +0x380 CsrServerReadOnlySharedMemoryBase : Uint8B
   +0x400 Session          : Ptr64 Void
   +0x408 AweInfo          : Ptr64 Void
   +0x410 QuotaBlock       : Ptr64 _EPROCESS_QUOTA_BLOCK
   +0x418 ObjectTable      : Ptr64 _HANDLE_TABLE
      +0x000 NextHandleNeedingPool : Uint4B
      +0x004 ExtraInfoPages   : Int4B
      +0x008 TableCode        : Uint8B
      +0x010 QuotaProcess     : Ptr64 _EPROCESS
         +0x000 Pcb              : _KPROCESS
         +0x2d8 ProcessLock      : _EX_PUSH_LOCK
         +0x2e0 RundownProtect   : _EX_RUNDOWN_REF
         +0x2e8 UniqueProcessId  : Ptr64 Void
         +0x2f0 ActiveProcessLinks : _LIST_ENTRY
         +0x300 Flags2           : Uint4B
         +0x300 JobNotReallyActive : Pos 0, 1 Bit
         +0x300 AccountingFolded : Pos 1, 1 Bit
         +0x300 NewProcessReported : Pos 2, 1 Bit
         +0x300 ExitProcessReported : Pos 3, 1 Bit
         +0x300 ReportCommitChanges : Pos 4, 1 Bit
         +0x300 LastReportMemory : Pos 5, 1 Bit
         +0x300 ForceWakeCharge  : Pos 6, 1 Bit
         +0x300 CrossSessionCreate : Pos 7, 1 Bit
         +0x300 NeedsHandleRundown : Pos 8, 1 Bit
         +0x300 RefTraceEnabled  : Pos 9, 1 Bit
         +0x300 DisableDynamicCode : Pos 10, 1 Bit
         +0x300 EmptyJobEvaluated : Pos 11, 1 Bit
         +0x300 DefaultPagePriority : Pos 12, 3 Bits
         +0x300 PrimaryTokenFrozen : Pos 15, 1 Bit
         +0x300 ProcessVerifierTarget : Pos 16, 1 Bit
         +0x300 StackRandomizationDisabled : Pos 17, 1 Bit
         +0x300 AffinityPermanent : Pos 18, 1 Bit
         +0x300 AffinityUpdateEnable : Pos 19, 1 Bit
         +0x300 PropagateNode    : Pos 20, 1 Bit
         +0x300 ExplicitAffinity : Pos 21, 1 Bit
         +0x300 ProcessExecutionState : Pos 22, 2 Bits
         +0x300 DisallowStrippedImages : Pos 24, 1 Bit
         +0x300 HighEntropyASLREnabled : Pos 25, 1 Bit
         +0x300 ExtensionPointDisable : Pos 26, 1 Bit
         +0x300 ForceRelocateImages : Pos 27, 1 Bit
         +0x300 ProcessStateChangeRequest : Pos 28, 2 Bits
         +0x300 ProcessStateChangeInProgress : Pos 30, 1 Bit
         +0x300 DisallowWin32kSystemCalls : Pos 31, 1 Bit
         +0x304 Flags            : Uint4B
         +0x304 CreateReported   : Pos 0, 1 Bit
         +0x304 NoDebugInherit   : Pos 1, 1 Bit
         +0x304 ProcessExiting   : Pos 2, 1 Bit
         +0x304 ProcessDelete    : Pos 3, 1 Bit
         +0x304 ControlFlowGuardEnabled : Pos 4, 1 Bit
         +0x304 VmDeleted        : Pos 5, 1 Bit
         +0x304 OutswapEnabled   : Pos 6, 1 Bit
         +0x304 Outswapped       : Pos 7, 1 Bit
         +0x304 FailFastOnCommitFail : Pos 8, 1 Bit
         +0x304 Wow64VaSpace4Gb  : Pos 9, 1 Bit
         +0x304 AddressSpaceInitialized : Pos 10, 2 Bits
         +0x304 SetTimerResolution : Pos 12, 1 Bit
         +0x304 BreakOnTermination : Pos 13, 1 Bit
         +0x304 DeprioritizeViews : Pos 14, 1 Bit
         +0x304 WriteWatch       : Pos 15, 1 Bit
         +0x304 ProcessInSession : Pos 16, 1 Bit
         +0x304 OverrideAddressSpace : Pos 17, 1 Bit
         +0x304 HasAddressSpace  : Pos 18, 1 Bit
         +0x304 LaunchPrefetched : Pos 19, 1 Bit
         +0x304 Background       : Pos 20, 1 Bit
         +0x304 VmTopDown        : Pos 21, 1 Bit
         +0x304 ImageNotifyDone  : Pos 22, 1 Bit
         +0x304 PdeUpdateNeeded  : Pos 23, 1 Bit
         +0x304 VdmAllowed       : Pos 24, 1 Bit
         +0x304 ProcessRundown   : Pos 25, 1 Bit
         +0x304 ProcessInserted  : Pos 26, 1 Bit
         +0x304 DefaultIoPriority : Pos 27, 3 Bits
         +0x304 ProcessSelfDelete : Pos 30, 1 Bit
         +0x304 SetTimerResolutionLink : Pos 31, 1 Bit
         +0x308 CreateTime       : _LARGE_INTEGER
         +0x310 ProcessQuotaUsage : [2] Uint8B
         +0x320 ProcessQuotaPeak : [2] Uint8B
         +0x330 PeakVirtualSize  : Uint8B
         +0x338 VirtualSize      : Uint8B
         +0x340 SessionProcessLinks : _LIST_ENTRY
         +0x350 ExceptionPortData : Ptr64 Void
         +0x350 ExceptionPortValue : Uint8B
         +0x350 ExceptionPortState : Pos 0, 3 Bits
         +0x358 Token            : _EX_FAST_REF
         +0x360 WorkingSetPage   : Uint8B
         +0x368 AddressCreationLock : _EX_PUSH_LOCK
         +0x370 PageTableCommitmentLock : _EX_PUSH_LOCK
         +0x378 RotateInProgress : Ptr64 _ETHREAD
         +0x380 ForkInProgress   : Ptr64 _ETHREAD
         +0x388 CommitChargeJob  : Ptr64 _EJOB
         +0x390 CloneRoot        : _RTL_AVL_TREE
         +0x398 NumberOfPrivatePages : Uint8B
         +0x3a0 NumberOfLockedPages : Uint8B
         +0x3a8 Win32Process     : Ptr64 Void
         +0x3b0 Job              : Ptr64 _EJOB
         +0x3b8 SectionObject    : Ptr64 Void
         +0x3c0 SectionBaseAddress : Ptr64 Void
         +0x3c8 Cookie           : Uint4B
         +0x3d0 WorkingSetWatch  : Ptr64 _PAGEFAULT_HISTORY
         +0x3d8 Win32WindowStation : Ptr64 Void
         +0x3e0 InheritedFromUniqueProcessId : Ptr64 Void
         +0x3e8 LdtInformation   : Ptr64 Void
         +0x3f0 OwnerProcessId   : Uint8B
         +0x3f8 Peb              : Ptr64 _PEB
         +0x400 Session          : Ptr64 Void
         +0x408 AweInfo          : Ptr64 Void
         +0x410 QuotaBlock       : Ptr64 _EPROCESS_QUOTA_BLOCK
         +0x418 ObjectTable      : Ptr64 _HANDLE_TABLE
         +0x420 DebugPort        : Ptr64 Void
         +0x428 Wow64Process     : Ptr64 Void
         +0x430 DeviceMap        : Ptr64 Void
         +0x438 EtwDataSource    : Ptr64 Void
         +0x440 PageDirectoryPte : Uint8B
         +0x448 ImageFileName    : [15] UChar
         +0x457 PriorityClass    : UChar
         +0x458 SecurityPort     : Ptr64 Void
         +0x460 SeAuditProcessCreationInfo : _SE_AUDIT_PROCESS_CREATION_INFO
         +0x468 JobLinks         : _LIST_ENTRY
         +0x478 HighestUserAddress : Ptr64 Void
         +0x480 ThreadListHead   : _LIST_ENTRY
         +0x490 ActiveThreads    : Uint4B
         +0x494 ImagePathHash    : Uint4B
         +0x498 DefaultHardErrorProcessing : Uint4B
         +0x49c LastThreadExitStatus : Int4B
         +0x4a0 PrefetchTrace    : _EX_FAST_REF
         +0x4a8 LockedPagesList  : Ptr64 Void
         +0x4b0 ReadOperationCount : _LARGE_INTEGER
         +0x4b8 WriteOperationCount : _LARGE_INTEGER
         +0x4c0 OtherOperationCount : _LARGE_INTEGER
         +0x4c8 ReadTransferCount : _LARGE_INTEGER
         +0x4d0 WriteTransferCount : _LARGE_INTEGER
         +0x4d8 OtherTransferCount : _LARGE_INTEGER
         +0x4e0 CommitChargeLimit : Uint8B
         +0x4e8 CommitCharge     : Uint8B
         +0x4f0 CommitChargePeak : Uint8B
         +0x4f8 Vm               : _MMSUPPORT
         +0x5f0 MmProcessLinks   : _LIST_ENTRY
         +0x600 ModifiedPageCount : Uint4B
         +0x604 ExitStatus       : Int4B
         +0x608 VadRoot          : _RTL_AVL_TREE
         +0x610 VadHint          : Ptr64 Void
         +0x618 VadCount         : Uint8B
         +0x620 VadPhysicalPages : Uint8B
         +0x628 VadPhysicalPagesLimit : Uint8B
         +0x630 AlpcContext      : _ALPC_PROCESS_CONTEXT
         +0x650 TimerResolutionLink : _LIST_ENTRY
         +0x660 TimerResolutionStackRecord : Ptr64 _PO_DIAG_STACK_RECORD
         +0x668 RequestedTimerResolution : Uint4B
         +0x66c SmallestTimerResolution : Uint4B
         +0x670 ExitTime         : _LARGE_INTEGER
         +0x678 InvertedFunctionTable : Ptr64 _INVERTED_FUNCTION_TABLE
         +0x680 InvertedFunctionTableLock : _EX_PUSH_LOCK
         +0x688 ActiveThreadsHighWatermark : Uint4B
         +0x68c LargePrivateVadCount : Uint4B
         +0x690 ThreadListLock   : _EX_PUSH_LOCK
         +0x698 WnfContext       : Ptr64 Void
         +0x6a0 Spare0           : Uint8B
         +0x6a8 SignatureLevel   : UChar
         +0x6a9 SectionSignatureLevel : UChar
         +0x6aa Protection       : _PS_PROTECTION
         +0x6ab HangCount        : UChar
         +0x6ac Flags3           : Uint4B
         +0x6ac Minimal          : Pos 0, 1 Bit
         +0x6ac ReplacingPageRoot : Pos 1, 1 Bit
         +0x6ac DisableNonSystemFonts : Pos 2, 1 Bit
         +0x6ac AuditNonSystemFontLoading : Pos 3, 1 Bit
         +0x6ac Crashed          : Pos 4, 1 Bit
         +0x6ac JobVadsAreTracked : Pos 5, 1 Bit
         +0x6ac VadTrackingDisabled : Pos 6, 1 Bit
         +0x6ac AuxiliaryProcess : Pos 7, 1 Bit
         +0x6ac SubsystemProcess : Pos 8, 1 Bit
         +0x6ac IndirectCpuSets  : Pos 9, 1 Bit
         +0x6ac InPrivate        : Pos 10, 1 Bit
         +0x6b0 DeviceAsid       : Int4B
         +0x6b8 SvmData          : Ptr64 Void
         +0x6c0 SvmProcessLock   : _EX_PUSH_LOCK
         +0x6c8 SvmLock          : Uint8B
         +0x6d0 SvmProcessDeviceListHead : _LIST_ENTRY
         +0x6e0 LastFreezeInterruptTime : Uint8B
         +0x6e8 DiskCounters     : Ptr64 _PROCESS_DISK_COUNTERS
         +0x6f0 PicoContext      : Ptr64 Void
         +0x6f8 TrustletIdentity : Uint8B
         +0x700 KeepAliveCounter : Uint4B
         +0x704 NoWakeKeepAliveCounter : Uint4B
         +0x708 HighPriorityFaultsAllowed : Uint4B
         +0x710 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
         +0x718 VmContext        : Ptr64 Void
         +0x720 Silo             : Ptr64 _ESILO
         +0x728 SiloEntry        : _LIST_ENTRY
         +0x738 SequenceNumber   : Uint8B
         +0x740 CreateInterruptTime : Uint8B
         +0x748 CreateUnbiasedInterruptTime : Uint8B
         +0x750 TotalUnbiasedFrozenTime : Uint8B
         +0x758 LastAppStateUpdateTime : Uint8B
         +0x760 LastAppStateUptime : Pos 0, 61 Bits
         +0x760 LastAppState     : Pos 61, 3 Bits
         +0x768 SharedCommitCharge : Uint8B
         +0x770 SharedCommitLock : _EX_PUSH_LOCK
         +0x778 SharedCommitLinks : _LIST_ENTRY
         +0x788 AllowedCpuSets   : Uint8B
         +0x790 DefaultCpuSets   : Uint8B
         +0x788 AllowedCpuSetsIndirect : Ptr64 Uint8B
         +0x790 DefaultCpuSetsIndirect : Ptr64 Uint8B
      +0x018 HandleTableList  : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x028 UniqueProcessId  : Uint4B
      +0x02c Flags            : Uint4B
      +0x02c StrictFIFO       : Pos 0, 1 Bit
      +0x02c EnableHandleExceptions : Pos 1, 1 Bit
      +0x02c Rundown          : Pos 2, 1 Bit
      +0x02c Duplicated       : Pos 3, 1 Bit
      +0x02c RaiseUMExceptionOnInvalidHandleClose : Pos 4, 1 Bit
      +0x030 HandleContentionEvent : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 60 Bits
         +0x000 Value            : Uint8B
         +0x000 Ptr              : Ptr64 Void
      +0x038 HandleTableLock  : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 60 Bits
         +0x000 Value            : Uint8B
         +0x000 Ptr              : Ptr64 Void
      +0x040 FreeLists        : [1] _HANDLE_TABLE_FREE_LIST
         +0x000 FreeListLock     : _EX_PUSH_LOCK
         +0x008 FirstFreeHandleEntry : Ptr64 _HANDLE_TABLE_ENTRY
         +0x010 LastFreeHandleEntry : Ptr64 _HANDLE_TABLE_ENTRY
         +0x018 HandleCount      : Int4B
         +0x01c HighWaterMark    : Uint4B
         +0x020 Reserved         : [8] Uint4B
      +0x040 ActualEntry      : [32] UChar
      +0x060 DebugInfo        : Ptr64 _HANDLE_TRACE_DEBUG_INFO
         +0x000 RefCount         : Int4B
         +0x004 TableSize        : Uint4B
         +0x008 BitMaskFlags     : Uint4B
         +0x010 CloseCompactionLock : _FAST_MUTEX
         +0x048 CurrentStackIndex : Uint4B
         +0x050 TraceDb          : [1] _HANDLE_TRACE_DB_ENTRY
   +0x420 DebugPort        : Ptr64 Void
   +0x428 Wow64Process     : Ptr64 Void
   +0x430 DeviceMap        : Ptr64 Void
   +0x438 EtwDataSource    : Ptr64 Void
   +0x440 PageDirectoryPte : Uint8B
   +0x448 ImageFileName    : [15] UChar
   +0x457 PriorityClass    : UChar
   +0x458 SecurityPort     : Ptr64 Void
   +0x460 SeAuditProcessCreationInfo : _SE_AUDIT_PROCESS_CREATION_INFO
      +0x000 ImageFileName    : Ptr64 _OBJECT_NAME_INFORMATION
         +0x000 Name             : _UNICODE_STRING
   +0x468 JobLinks         : _LIST_ENTRY
      +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x008 Blink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
   +0x478 HighestUserAddress : Ptr64 Void
   +0x480 ThreadListHead   : _LIST_ENTRY
      +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x008 Blink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
   +0x490 ActiveThreads    : Uint4B
   +0x494 ImagePathHash    : Uint4B
   +0x498 DefaultHardErrorProcessing : Uint4B
   +0x49c LastThreadExitStatus : Int4B
   +0x4a0 PrefetchTrace    : _EX_FAST_REF
      +0x000 Object           : Ptr64 Void
      +0x000 RefCnt           : Pos 0, 4 Bits
      +0x000 Value            : Uint8B
   +0x4a8 LockedPagesList  : Ptr64 Void
   +0x4b0 ReadOperationCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x4b8 WriteOperationCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x4c0 OtherOperationCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x4c8 ReadTransferCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x4d0 WriteTransferCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x4d8 OtherTransferCount : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x4e0 CommitChargeLimit : Uint8B
   +0x4e8 CommitCharge     : Uint8B
   +0x4f0 CommitChargePeak : Uint8B
   +0x4f8 Vm               : _MMSUPPORT
      +0x000 WorkingSetLock   : Int4B
      +0x008 ExitOutswapGate  : Ptr64 _KGATE
         +0x000 Header           : _DISPATCHER_HEADER
      +0x010 AccessLog        : Ptr64 Void
      +0x018 WorkingSetExpansionLinks : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x028 AgeDistribution  : [7] Uint8B
      +0x060 MinimumWorkingSetSize : Uint8B
      +0x068 WorkingSetLeafSize : Uint8B
      +0x070 WorkingSetLeafPrivateSize : Uint8B
      +0x078 WorkingSetSize   : Uint8B
      +0x080 WorkingSetPrivateSize : Uint8B
      +0x088 MaximumWorkingSetSize : Uint8B
      +0x090 ChargedWslePages : Uint8B
      +0x098 ActualWslePages  : Uint8B
      +0x0a0 WorkingSetSizeOverhead : Uint8B
      +0x0a8 PeakWorkingSetSize : Uint8B
      +0x0b0 HardFaultCount   : Uint4B
      +0x0b4 PartitionId      : Uint2B
      +0x0b6 Pad0             : Uint2B
      +0x0b8 VmWorkingSetList : Ptr64 _MMWSL
         +0x000 FirstFree        : Uint8B
         +0x008 FirstDynamic     : Uint8B
         +0x010 LastEntry        : Uint8B
         +0x018 NextSlot         : Uint8B
         +0x020 LastInitializedWsle : Uint8B
         +0x028 NextAgingSlot    : Uint8B
         +0x030 NextAccessClearingSlot : Uint8B
         +0x038 LastAccessClearingRemainder : Uint4B
         +0x03c LastAgingRemainder : Uint4B
         +0x040 WsleSize         : Uint4B
         +0x048 NonDirectCount   : Uint8B
         +0x050 LowestPagableAddress : Ptr64 Void
         +0x058 NonDirectHash    : Ptr64 _MMWSLE_NONDIRECT_HASH
         +0x060 HashTableStart   : Ptr64 _MMWSLE_HASH
         +0x068 HighestPermittedHashAddress : Ptr64 _MMWSLE_HASH
         +0x070 ActiveWsleCounts : [16] Uint8B
         +0x0f0 ActiveWsles      : [16] _MI_ACTIVE_WSLE_LISTHEAD
         +0x1f0 Wsle             : Ptr64 _MMWSLE
         +0x1f8 UserVaInfo       : _MI_USER_VA_INFO
      +0x0c0 NextPageColor    : Uint2B
      +0x0c2 LastTrimStamp    : Uint2B
      +0x0c4 PageFaultCount   : Uint4B
      +0x0c8 TrimmedPageCount : Uint8B
      +0x0d0 ForceTrimPages   : Uint8B
      +0x0d8 Flags            : _MMSUPPORT_FLAGS
         +0x000 WorkingSetType   : Pos 0, 3 Bits
         +0x000 ForceCredits     : Pos 3, 3 Bits
         +0x000 MaximumWorkingSetHard : Pos 6, 1 Bit
         +0x000 MinimumWorkingSetHard : Pos 7, 1 Bit
         +0x001 SessionMaster    : Pos 0, 1 Bit
         +0x001 TrimmerState     : Pos 1, 2 Bits
         +0x001 Reserved         : Pos 3, 1 Bit
         +0x001 PageStealers     : Pos 4, 4 Bits
         +0x002 MemoryPriority   : UChar
         +0x003 WsleDeleted      : Pos 0, 1 Bit
         +0x003 VmExiting        : Pos 1, 1 Bit
         +0x003 ExpansionFailed  : Pos 2, 1 Bit
         +0x003 SvmEnabled       : Pos 3, 1 Bit
         +0x003 ForceAge         : Pos 4, 1 Bit
         +0x003 NewMaximum       : Pos 5, 1 Bit
         +0x003 CommitReleaseState : Pos 6, 2 Bits
      +0x0e0 ReleasedCommitDebt : Uint8B
      +0x0e8 WsSwapSupport    : Ptr64 Void
      +0x0f0 CommitReAcquireFailSupport : Ptr64 Void
   +0x5f0 MmProcessLinks   : _LIST_ENTRY
      +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x008 Blink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
   +0x600 ModifiedPageCount : Uint4B
   +0x604 ExitStatus       : Int4B
   +0x608 VadRoot          : _RTL_AVL_TREE
      +0x000 Root             : Ptr64 _RTL_BALANCED_NODE
         +0x000 Children         : [2] Ptr64 _RTL_BALANCED_NODE
         +0x000 Left             : Ptr64 _RTL_BALANCED_NODE
         +0x008 Right            : Ptr64 _RTL_BALANCED_NODE
         +0x010 Red              : Pos 0, 1 Bit
         +0x010 Balance          : Pos 0, 2 Bits
         +0x010 ParentValue      : Uint8B
   +0x610 VadHint          : Ptr64 Void
   +0x618 VadCount         : Uint8B
   +0x620 VadPhysicalPages : Uint8B
   +0x628 VadPhysicalPagesLimit : Uint8B
   +0x630 AlpcContext      : _ALPC_PROCESS_CONTEXT
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
   +0x650 TimerResolutionLink : _LIST_ENTRY
      +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x008 Blink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
   +0x660 TimerResolutionStackRecord : Ptr64 _PO_DIAG_STACK_RECORD
      +0x000 StackDepth       : Uint4B
      +0x008 Stack            : [1] Ptr64 Void
   +0x668 RequestedTimerResolution : Uint4B
   +0x66c SmallestTimerResolution : Uint4B
   +0x670 ExitTime         : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x678 InvertedFunctionTable : Ptr64 _INVERTED_FUNCTION_TABLE
      +0x000 CurrentSize      : Uint4B
      +0x004 MaximumSize      : Uint4B
      +0x008 Epoch            : Uint4B
      +0x00c Overflow         : UChar
      +0x010 TableEntry       : [256] _INVERTED_FUNCTION_TABLE_ENTRY
         +0x000 FunctionTable    : Ptr64 _IMAGE_RUNTIME_FUNCTION_ENTRY
         +0x000 DynamicTable     : Ptr64 _DYNAMIC_FUNCTION_TABLE
         +0x008 ImageBase        : Ptr64 Void
         +0x010 SizeOfImage      : Uint4B
         +0x014 SizeOfTable      : Uint4B
   +0x680 InvertedFunctionTableLock : _EX_PUSH_LOCK
      +0x000 Locked           : Pos 0, 1 Bit
      +0x000 Waiting          : Pos 1, 1 Bit
      +0x000 Waking           : Pos 2, 1 Bit
      +0x000 MultipleShared   : Pos 3, 1 Bit
      +0x000 Shared           : Pos 4, 60 Bits
      +0x000 Value            : Uint8B
      +0x000 Ptr              : Ptr64 Void
   +0x688 ActiveThreadsHighWatermark : Uint4B
   +0x68c LargePrivateVadCount : Uint4B
   +0x690 ThreadListLock   : _EX_PUSH_LOCK
      +0x000 Locked           : Pos 0, 1 Bit
      +0x000 Waiting          : Pos 1, 1 Bit
      +0x000 Waking           : Pos 2, 1 Bit
      +0x000 MultipleShared   : Pos 3, 1 Bit
      +0x000 Shared           : Pos 4, 60 Bits
      +0x000 Value            : Uint8B
      +0x000 Ptr              : Ptr64 Void
   +0x698 WnfContext       : Ptr64 Void
   +0x6a0 Spare0           : Uint8B
   +0x6a8 SignatureLevel   : UChar
   +0x6a9 SectionSignatureLevel : UChar
   +0x6aa Protection       : _PS_PROTECTION
      +0x000 Level            : UChar
      +0x000 Type             : Pos 0, 3 Bits
      +0x000 Audit            : Pos 3, 1 Bit
      +0x000 Signer           : Pos 4, 4 Bits
   +0x6ab HangCount        : UChar
   +0x6ac Flags3           : Uint4B
   +0x6ac Minimal          : Pos 0, 1 Bit
   +0x6ac ReplacingPageRoot : Pos 1, 1 Bit
   +0x6ac DisableNonSystemFonts : Pos 2, 1 Bit
   +0x6ac AuditNonSystemFontLoading : Pos 3, 1 Bit
   +0x6ac Crashed          : Pos 4, 1 Bit
   +0x6ac JobVadsAreTracked : Pos 5, 1 Bit
   +0x6ac VadTrackingDisabled : Pos 6, 1 Bit
   +0x6ac AuxiliaryProcess : Pos 7, 1 Bit
   +0x6ac SubsystemProcess : Pos 8, 1 Bit
   +0x6ac IndirectCpuSets  : Pos 9, 1 Bit
   +0x6ac InPrivate        : Pos 10, 1 Bit
   +0x6b0 DeviceAsid       : Int4B
   +0x6b8 SvmData          : Ptr64 Void
   +0x6c0 SvmProcessLock   : _EX_PUSH_LOCK
      +0x000 Locked           : Pos 0, 1 Bit
      +0x000 Waiting          : Pos 1, 1 Bit
      +0x000 Waking           : Pos 2, 1 Bit
      +0x000 MultipleShared   : Pos 3, 1 Bit
      +0x000 Shared           : Pos 4, 60 Bits
      +0x000 Value            : Uint8B
      +0x000 Ptr              : Ptr64 Void
   +0x6c8 SvmLock          : Uint8B
   +0x6d0 SvmProcessDeviceListHead : _LIST_ENTRY
      +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x008 Blink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
   +0x6e0 LastFreezeInterruptTime : Uint8B
   +0x6e8 DiskCounters     : Ptr64 _PROCESS_DISK_COUNTERS
      +0x000 BytesRead        : Uint8B
      +0x008 BytesWritten     : Uint8B
      +0x010 ReadOperationCount : Uint8B
      +0x018 WriteOperationCount : Uint8B
      +0x020 FlushOperationCount : Uint8B
   +0x6f0 PicoContext      : Ptr64 Void
   +0x6f8 TrustletIdentity : Uint8B
   +0x700 KeepAliveCounter : Uint4B
   +0x704 NoWakeKeepAliveCounter : Uint4B
   +0x708 HighPriorityFaultsAllowed : Uint4B
   +0x710 EnergyValues     : Ptr64 _PROCESS_ENERGY_VALUES
      +0x000 Cycles           : [4] [2] Uint8B
      +0x040 DiskEnergy       : Uint8B
      +0x048 NetworkTailEnergy : Uint8B
      +0x050 MBBTailEnergy    : Uint8B
      +0x058 NetworkTxRxBytes : Uint8B
      +0x060 MBBTxRxBytes     : Uint8B
      +0x068 Foreground       : Pos 0, 1 Bit
      +0x068 WindowInformation : Uint4B
      +0x06c PixelArea        : Uint4B
      +0x070 PixelReportTimestamp : Int8B
      +0x078 PixelTime        : Uint8B
      +0x080 ForegroundReportTimestamp : Int8B
      +0x088 ForegroundTime   : Uint8B
   +0x718 VmContext        : Ptr64 Void
   +0x720 Silo             : Ptr64 _ESILO
   +0x728 SiloEntry        : _LIST_ENTRY
      +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x008 Blink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
   +0x738 SequenceNumber   : Uint8B
   +0x740 CreateInterruptTime : Uint8B
   +0x748 CreateUnbiasedInterruptTime : Uint8B
   +0x750 TotalUnbiasedFrozenTime : Uint8B
   +0x758 LastAppStateUpdateTime : Uint8B
   +0x760 LastAppStateUptime : Pos 0, 61 Bits
   +0x760 LastAppState     : Pos 61, 3 Bits
   +0x768 SharedCommitCharge : Uint8B
   +0x770 SharedCommitLock : _EX_PUSH_LOCK
      +0x000 Locked           : Pos 0, 1 Bit
      +0x000 Waiting          : Pos 1, 1 Bit
      +0x000 Waking           : Pos 2, 1 Bit
      +0x000 MultipleShared   : Pos 3, 1 Bit
      +0x000 Shared           : Pos 4, 60 Bits
      +0x000 Value            : Uint8B
      +0x000 Ptr              : Ptr64 Void
   +0x778 SharedCommitLinks : _LIST_ENTRY
      +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x008 Blink            : Ptr64 _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
   +0x788 AllowedCpuSets   : Uint8B
   +0x790 DefaultCpuSets   : Uint8B
   +0x788 AllowedCpuSetsIndirect : Ptr64 Uint8B
   +0x790 DefaultCpuSetsIndirect : Ptr64 Uint8B
```