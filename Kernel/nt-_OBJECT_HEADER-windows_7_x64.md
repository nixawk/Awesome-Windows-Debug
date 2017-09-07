```
kd> dt nt!_OBJECT_HEADER -r
   +0x000 PointerCount     : Int8B
   +0x008 HandleCount      : Int8B
   +0x008 NextToFree       : Ptr64 Void
   +0x010 Lock             : _EX_PUSH_LOCK
      +0x000 Locked           : Pos 0, 1 Bit
      +0x000 Waiting          : Pos 1, 1 Bit
      +0x000 Waking           : Pos 2, 1 Bit
      +0x000 MultipleShared   : Pos 3, 1 Bit
      +0x000 Shared           : Pos 4, 60 Bits
      +0x000 Value            : Uint8B
      +0x000 Ptr              : Ptr64 Void
   +0x018 TypeIndex        : UChar
   +0x019 TraceFlags       : UChar
   +0x01a InfoMask         : UChar
   +0x01b Flags            : UChar
   +0x020 ObjectCreateInfo : Ptr64 _OBJECT_CREATE_INFORMATION
      +0x000 Attributes       : Uint4B
      +0x008 RootDirectory    : Ptr64 Void
      +0x010 ProbeMode        : Char
      +0x014 PagedPoolCharge  : Uint4B
      +0x018 NonPagedPoolCharge : Uint4B
      +0x01c SecurityDescriptorCharge : Uint4B
      +0x020 SecurityDescriptor : Ptr64 Void
      +0x028 SecurityQos      : Ptr64 _SECURITY_QUALITY_OF_SERVICE
         +0x000 Length           : Uint4B
         +0x004 ImpersonationLevel : _SECURITY_IMPERSONATION_LEVEL
         +0x008 ContextTrackingMode : UChar
         +0x009 EffectiveOnly    : UChar
      +0x030 SecurityQualityOfService : _SECURITY_QUALITY_OF_SERVICE
         +0x000 Length           : Uint4B
         +0x004 ImpersonationLevel : _SECURITY_IMPERSONATION_LEVEL
         +0x008 ContextTrackingMode : UChar
         +0x009 EffectiveOnly    : UChar
   +0x020 QuotaBlockCharged : Ptr64 Void
   +0x028 SecurityDescriptor : Ptr64 Void
   +0x030 Body             : _QUAD
      +0x000 UseThisFieldToCopy : Int8B
      +0x000 DoNotUseThisField : Float
```