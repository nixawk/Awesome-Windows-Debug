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
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x030 TokenLock        : Ptr64 _ERESOURCE
      +0x000 SystemResourcesList : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x010 OwnerTable       : Ptr64 _OWNER_ENTRY
         +0x000 OwnerThread      : Uint8B
         +0x008 IoPriorityBoosted : Pos 0, 1 Bit
         +0x008 OwnerReferenced  : Pos 1, 1 Bit
         +0x008 OwnerCount       : Pos 2, 30 Bits
         +0x008 TableSize        : Uint4B
      +0x018 ActiveCount      : Int2B
      +0x01a Flag             : Uint2B
      +0x020 SharedWaiters    : Ptr64 _KSEMAPHORE
         +0x000 Header           : _DISPATCHER_HEADER
         +0x018 Limit            : Int4B
      +0x028 ExclusiveWaiters : Ptr64 _KEVENT
         +0x000 Header           : _DISPATCHER_HEADER
      +0x030 OwnerEntry       : _OWNER_ENTRY
         +0x000 OwnerThread      : Uint8B
         +0x008 IoPriorityBoosted : Pos 0, 1 Bit
         +0x008 OwnerReferenced  : Pos 1, 1 Bit
         +0x008 OwnerCount       : Pos 2, 30 Bits
         +0x008 TableSize        : Uint4B
      +0x040 ActiveEntries    : Uint4B
      +0x044 ContentionCount  : Uint4B
      +0x048 NumberOfSharedWaiters : Uint4B
      +0x04c NumberOfExclusiveWaiters : Uint4B
      +0x050 Reserved2        : Ptr64 Void
      +0x058 Address          : Ptr64 Void
      +0x058 CreatorBackTraceIndex : Uint8B
      +0x060 SpinLock         : Uint8B
   +0x038 ModifiedId       : _LUID
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
   +0x040 Privileges       : _SEP_TOKEN_PRIVILEGES
      +0x000 Present          : Uint8B
      +0x008 Enabled          : Uint8B
      +0x010 EnabledByDefault : Uint8B
   +0x058 AuditPolicy      : _SEP_AUDIT_POLICY
      +0x000 AdtTokenPolicy   : _TOKEN_AUDIT_POLICY
         +0x000 PerUserPolicy    : [27] UChar
      +0x01b PolicySetStatus  : UChar
   +0x074 SessionId        : Uint4B
   +0x078 UserAndGroupCount : Uint4B
   +0x07c RestrictedSidCount : Uint4B
   +0x080 VariableLength   : Uint4B
   +0x084 DynamicCharged   : Uint4B
   +0x088 DynamicAvailable : Uint4B
   +0x08c DefaultOwnerIndex : Uint4B
   +0x090 UserAndGroups    : Ptr64 _SID_AND_ATTRIBUTES
      +0x000 Sid              : Ptr64 Void
      +0x008 Attributes       : Uint4B
   +0x098 RestrictedSids   : Ptr64 _SID_AND_ATTRIBUTES
      +0x000 Sid              : Ptr64 Void
      +0x008 Attributes       : Uint4B
   +0x0a0 PrimaryGroup     : Ptr64 Void
   +0x0a8 DynamicPart      : Ptr64 Uint4B
   +0x0b0 DefaultDacl      : Ptr64 _ACL
      +0x000 AclRevision      : UChar
      +0x001 Sbz1             : UChar
      +0x002 AclSize          : Uint2B
      +0x004 AceCount         : Uint2B
      +0x006 Sbz2             : Uint2B
   +0x0b8 TokenType        : 
      TokenPrimary = 0n1
      TokenImpersonation = 0n2
   +0x0bc ImpersonationLevel : 
      SecurityAnonymous = 0n0
      SecurityIdentification = 0n1
      SecurityImpersonation = 0n2
      SecurityDelegation = 0n3
   +0x0c0 TokenFlags       : Uint4B
   +0x0c4 TokenInUse       : UChar
   +0x0c8 IntegrityLevelIndex : Uint4B
   +0x0cc MandatoryPolicy  : Uint4B
   +0x0d0 LogonSession     : Ptr64 _SEP_LOGON_SESSION_REFERENCES
      +0x000 Next             : Ptr64 _SEP_LOGON_SESSION_REFERENCES
         +0x000 Next             : Ptr64 _SEP_LOGON_SESSION_REFERENCES
         +0x008 LogonId          : _LUID
         +0x010 BuddyLogonId     : _LUID
         +0x018 ReferenceCount   : Uint4B
         +0x01c Flags            : Uint4B
         +0x020 pDeviceMap       : Ptr64 _DEVICE_MAP
         +0x028 Token            : Ptr64 Void
         +0x030 AccountName      : _UNICODE_STRING
         +0x040 AuthorityName    : _UNICODE_STRING
      +0x008 LogonId          : _LUID
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x010 BuddyLogonId     : _LUID
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x018 ReferenceCount   : Uint4B
      +0x01c Flags            : Uint4B
      +0x020 pDeviceMap       : Ptr64 _DEVICE_MAP
         +0x000 DosDevicesDirectory : Ptr64 _OBJECT_DIRECTORY
         +0x008 GlobalDosDevicesDirectory : Ptr64 _OBJECT_DIRECTORY
         +0x010 DosDevicesDirectoryHandle : Ptr64 Void
         +0x018 ReferenceCount   : Uint4B
         +0x01c DriveMap         : Uint4B
         +0x020 DriveType        : [32] UChar
      +0x028 Token            : Ptr64 Void
      +0x030 AccountName      : _UNICODE_STRING
         +0x000 Length           : Uint2B
         +0x002 MaximumLength    : Uint2B
         +0x008 Buffer           : Ptr64 Uint2B
      +0x040 AuthorityName    : _UNICODE_STRING
         +0x000 Length           : Uint2B
         +0x002 MaximumLength    : Uint2B
         +0x008 Buffer           : Ptr64 Uint2B
   +0x0d8 OriginatingLogonSession : _LUID
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
   +0x0e0 SidHash          : _SID_AND_ATTRIBUTES_HASH
      +0x000 SidCount         : Uint4B
      +0x008 SidAttr          : Ptr64 _SID_AND_ATTRIBUTES
         +0x000 Sid              : Ptr64 Void
         +0x008 Attributes       : Uint4B
      +0x010 Hash             : [32] Uint8B
   +0x1f0 RestrictedSidHash : _SID_AND_ATTRIBUTES_HASH
      +0x000 SidCount         : Uint4B
      +0x008 SidAttr          : Ptr64 _SID_AND_ATTRIBUTES
         +0x000 Sid              : Ptr64 Void
         +0x008 Attributes       : Uint4B
      +0x010 Hash             : [32] Uint8B
   +0x300 pSecurityAttributes : Ptr64 _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
      +0x000 SecurityAttributeCount : Uint4B
      +0x008 SecurityAttributesList : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x018 WorkingSecurityAttributeCount : Uint4B
      +0x020 WorkingSecurityAttributesList : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
   +0x308 VariablePart     : Uint8B
```