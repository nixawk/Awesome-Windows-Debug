```
kd> dt nt!_TOKEN -r
   +0x000 TokenSource      : _TOKEN_SOURCE
      +0x000 SourceName       : [8] Char
      +0x008 SourceIdentifier : _LUID
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
   +0x010 TokenId          : _LUID
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
   +0x018 AuthenticationId : _LUID
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
   +0x020 ParentTokenId    : _LUID
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
   +0x028 ExpirationTime   : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : __unnamed
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x030 TokenLock        : Ptr32 _ERESOURCE
      +0x000 SystemResourcesList : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x008 OwnerTable       : Ptr32 _OWNER_ENTRY
         +0x000 OwnerThread      : Uint4B
         +0x004 OwnerCount       : Int4B
         +0x004 TableSize        : Uint4B
      +0x00c ActiveCount      : Int2B
      +0x00e Flag             : Uint2B
      +0x010 SharedWaiters    : Ptr32 _KSEMAPHORE
         +0x000 Header           : _DISPATCHER_HEADER
         +0x010 Limit            : Int4B
      +0x014 ExclusiveWaiters : Ptr32 _KEVENT
         +0x000 Header           : _DISPATCHER_HEADER
      +0x018 OwnerThreads     : [2] _OWNER_ENTRY
         +0x000 OwnerThread      : Uint4B
         +0x004 OwnerCount       : Int4B
         +0x004 TableSize        : Uint4B
      +0x028 ContentionCount  : Uint4B
      +0x02c NumberOfSharedWaiters : Uint2B
      +0x02e NumberOfExclusiveWaiters : Uint2B
      +0x030 Address          : Ptr32 Void
      +0x030 CreatorBackTraceIndex : Uint4B
      +0x034 SpinLock         : Uint4B
   +0x038 AuditPolicy      : _SEP_AUDIT_POLICY
      +0x000 PolicyElements   : _SEP_AUDIT_POLICY_CATEGORIES
         +0x000 System           : Pos 0, 4 Bits
         +0x000 Logon            : Pos 4, 4 Bits
         +0x000 ObjectAccess     : Pos 8, 4 Bits
         +0x000 PrivilegeUse     : Pos 12, 4 Bits
         +0x000 DetailedTracking : Pos 16, 4 Bits
         +0x000 PolicyChange     : Pos 20, 4 Bits
         +0x000 AccountManagement : Pos 24, 4 Bits
         +0x000 DirectoryServiceAccess : Pos 28, 4 Bits
         +0x004 AccountLogon     : Pos 0, 4 Bits
      +0x000 PolicyOverlay    : _SEP_AUDIT_POLICY_OVERLAY
         +0x000 PolicyBits       : Pos 0, 36 Bits
         +0x000 SetBit           : Pos 36, 1 Bit
      +0x000 Overlay          : Uint8B
   +0x040 ModifiedId       : _LUID
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
   +0x048 SessionId        : Uint4B
   +0x04c UserAndGroupCount : Uint4B
   +0x050 RestrictedSidCount : Uint4B
   +0x054 PrivilegeCount   : Uint4B
   +0x058 VariableLength   : Uint4B
   +0x05c DynamicCharged   : Uint4B
   +0x060 DynamicAvailable : Uint4B
   +0x064 DefaultOwnerIndex : Uint4B
   +0x068 UserAndGroups    : Ptr32 _SID_AND_ATTRIBUTES
      +0x000 Sid              : Ptr32 Void
      +0x004 Attributes       : Uint4B
   +0x06c RestrictedSids   : Ptr32 _SID_AND_ATTRIBUTES
      +0x000 Sid              : Ptr32 Void
      +0x004 Attributes       : Uint4B
   +0x070 PrimaryGroup     : Ptr32 Void
   +0x074 Privileges       : Ptr32 _LUID_AND_ATTRIBUTES
      +0x000 Luid             : _LUID
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x008 Attributes       : Uint4B
   +0x078 DynamicPart      : Ptr32 Uint4B
   +0x07c DefaultDacl      : Ptr32 _ACL
      +0x000 AclRevision      : UChar
      +0x001 Sbz1             : UChar
      +0x002 AclSize          : Uint2B
      +0x004 AceCount         : Uint2B
      +0x006 Sbz2             : Uint2B
   +0x080 TokenType        : 
      TokenPrimary = 0n1
      TokenImpersonation = 0n2
   +0x084 ImpersonationLevel : 
      SecurityAnonymous = 0n0
      SecurityIdentification = 0n1
      SecurityImpersonation = 0n2
      SecurityDelegation = 0n3
   +0x088 TokenFlags       : Uint4B
   +0x08c TokenInUse       : UChar
   +0x090 ProxyData        : Ptr32 _SECURITY_TOKEN_PROXY_DATA
      +0x000 Length           : Uint4B
      +0x004 ProxyClass       : 
         ProxyFull = 0n0
         ProxyService = 0n1
         ProxyTree = 0n2
         ProxyDirectory = 0n3
      +0x008 PathInfo         : _UNICODE_STRING
         +0x000 Length           : Uint2B
         +0x002 MaximumLength    : Uint2B
         +0x004 Buffer           : Ptr32 Uint2B
      +0x010 ContainerMask    : Uint4B
      +0x014 ObjectMask       : Uint4B
   +0x094 AuditData        : Ptr32 _SECURITY_TOKEN_AUDIT_DATA
      +0x000 Length           : Uint4B
      +0x004 GrantMask        : Uint4B
      +0x008 DenyMask         : Uint4B
   +0x098 OriginatingLogonSession : _LUID
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
   +0x0a0 VariablePart     : Uint4B
```