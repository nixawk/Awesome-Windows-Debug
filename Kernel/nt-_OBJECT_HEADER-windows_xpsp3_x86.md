```
kd> dt nt!_OBJECT_HEADER -r
   +0x000 PointerCount     : Int4B
   +0x004 HandleCount      : Int4B
   +0x004 NextToFree       : Ptr32 Void
   +0x008 Type             : Ptr32 _OBJECT_TYPE
      +0x000 Mutex            : _ERESOURCE
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
      +0x038 TypeList         : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x040 Name             : _UNICODE_STRING
         +0x000 Length           : Uint2B
         +0x002 MaximumLength    : Uint2B
         +0x004 Buffer           : Ptr32 Uint2B
      +0x048 DefaultObject    : Ptr32 Void
      +0x04c Index            : Uint4B
      +0x050 TotalNumberOfObjects : Uint4B
      +0x054 TotalNumberOfHandles : Uint4B
      +0x058 HighWaterNumberOfObjects : Uint4B
      +0x05c HighWaterNumberOfHandles : Uint4B
      +0x060 TypeInfo         : _OBJECT_TYPE_INITIALIZER
         +0x000 Length           : Uint2B
         +0x002 UseDefaultObject : UChar
         +0x003 CaseInsensitive  : UChar
         +0x004 InvalidAttributes : Uint4B
         +0x008 GenericMapping   : _GENERIC_MAPPING
         +0x018 ValidAccessMask  : Uint4B
         +0x01c SecurityRequired : UChar
         +0x01d MaintainHandleCount : UChar
         +0x01e MaintainTypeList : UChar
         +0x020 PoolType         : _POOL_TYPE
         +0x024 DefaultPagedPoolCharge : Uint4B
         +0x028 DefaultNonPagedPoolCharge : Uint4B
         +0x02c DumpProcedure    : Ptr32           void 
         +0x030 OpenProcedure    : Ptr32           long 
         +0x034 CloseProcedure   : Ptr32           void 
         +0x038 DeleteProcedure  : Ptr32           void 
         +0x03c ParseProcedure   : Ptr32           long 
         +0x040 SecurityProcedure : Ptr32           long 
         +0x044 QueryNameProcedure : Ptr32           long 
         +0x048 OkayToCloseProcedure : Ptr32           unsigned char 
      +0x0ac Key              : Uint4B
      +0x0b0 ObjectLocks      : [4] _ERESOURCE
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
   +0x00c NameInfoOffset   : UChar
   +0x00d HandleInfoOffset : UChar
   +0x00e QuotaInfoOffset  : UChar
   +0x00f Flags            : UChar
   +0x010 ObjectCreateInfo : Ptr32 _OBJECT_CREATE_INFORMATION
      +0x000 Attributes       : Uint4B
      +0x004 RootDirectory    : Ptr32 Void
      +0x008 ParseContext     : Ptr32 Void
      +0x00c ProbeMode        : Char
      +0x010 PagedPoolCharge  : Uint4B
      +0x014 NonPagedPoolCharge : Uint4B
      +0x018 SecurityDescriptorCharge : Uint4B
      +0x01c SecurityDescriptor : Ptr32 Void
      +0x020 SecurityQos      : Ptr32 _SECURITY_QUALITY_OF_SERVICE
         +0x000 Length           : Uint4B
         +0x004 ImpersonationLevel : _SECURITY_IMPERSONATION_LEVEL
         +0x008 ContextTrackingMode : UChar
         +0x009 EffectiveOnly    : UChar
      +0x024 SecurityQualityOfService : _SECURITY_QUALITY_OF_SERVICE
         +0x000 Length           : Uint4B
         +0x004 ImpersonationLevel : _SECURITY_IMPERSONATION_LEVEL
         +0x008 ContextTrackingMode : UChar
         +0x009 EffectiveOnly    : UChar
   +0x010 QuotaBlockCharged : Ptr32 Void
   +0x014 SecurityDescriptor : Ptr32 Void
   +0x018 Body             : _QUAD
      +0x000 DoNotUseThisField : Float
```