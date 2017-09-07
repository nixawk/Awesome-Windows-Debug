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
      +0x01a ReservedLowFlags : UChar
      +0x01b WaiterPriority   : UChar
      +0x020 SharedWaiters    : _KWAIT_CHAIN
         +0x000 Head             : _SINGLE_LIST_ENTRY
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
         +0x000 PerUserPolicy    : [30] UChar
      +0x01e PolicySetStatus  : UChar
   +0x078 SessionId        : Uint4B
   +0x07c UserAndGroupCount : Uint4B
   +0x080 RestrictedSidCount : Uint4B
   +0x084 VariableLength   : Uint4B
   +0x088 DynamicCharged   : Uint4B
   +0x08c DynamicAvailable : Uint4B
   +0x090 DefaultOwnerIndex : Uint4B
   +0x098 UserAndGroups    : Ptr64 _SID_AND_ATTRIBUTES
      +0x000 Sid              : Ptr64 Void
      +0x008 Attributes       : Uint4B
   +0x0a0 RestrictedSids   : Ptr64 _SID_AND_ATTRIBUTES
      +0x000 Sid              : Ptr64 Void
      +0x008 Attributes       : Uint4B
   +0x0a8 PrimaryGroup     : Ptr64 Void
   +0x0b0 DynamicPart      : Ptr64 Uint4B
   +0x0b8 DefaultDacl      : Ptr64 _ACL
      +0x000 AclRevision      : UChar
      +0x001 Sbz1             : UChar
      +0x002 AclSize          : Uint2B
      +0x004 AceCount         : Uint2B
      +0x006 Sbz2             : Uint2B
   +0x0c0 TokenType        : 
      TokenPrimary = 0n1
      TokenImpersonation = 0n2
   +0x0c4 ImpersonationLevel : 
      SecurityAnonymous = 0n0
      SecurityIdentification = 0n1
      SecurityImpersonation = 0n2
      SecurityDelegation = 0n3
   +0x0c8 TokenFlags       : Uint4B
   +0x0cc TokenInUse       : UChar
   +0x0d0 IntegrityLevelIndex : Uint4B
   +0x0d4 MandatoryPolicy  : Uint4B
   +0x0d8 LogonSession     : Ptr64 _SEP_LOGON_SESSION_REFERENCES
      +0x000 Next             : Ptr64 _SEP_LOGON_SESSION_REFERENCES
         +0x000 Next             : Ptr64 _SEP_LOGON_SESSION_REFERENCES
         +0x008 LogonId          : _LUID
         +0x010 BuddyLogonId     : _LUID
         +0x018 ReferenceCount   : Int8B
         +0x020 Flags            : Uint4B
         +0x028 pDeviceMap       : Ptr64 _DEVICE_MAP
         +0x030 Token            : Ptr64 Void
         +0x038 AccountName      : _UNICODE_STRING
         +0x048 AuthorityName    : _UNICODE_STRING
         +0x058 LowBoxHandlesTable : _SEP_LOWBOX_HANDLES_TABLE
         +0x068 SharedDataLock   : _EX_PUSH_LOCK
         +0x070 SharedClaimAttributes : Ptr64 _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION
         +0x078 SharedSidValues  : Ptr64 _SEP_SID_VALUES_BLOCK
         +0x080 RevocationBlock  : _OB_HANDLE_REVOCATION_BLOCK
         +0x0a0 ServerSilo       : Ptr64 _ESILO
      +0x008 LogonId          : _LUID
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x010 BuddyLogonId     : _LUID
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x018 ReferenceCount   : Int8B
      +0x020 Flags            : Uint4B
      +0x028 pDeviceMap       : Ptr64 _DEVICE_MAP
         +0x000 DosDevicesDirectory : Ptr64 _OBJECT_DIRECTORY
         +0x008 GlobalDosDevicesDirectory : Ptr64 _OBJECT_DIRECTORY
         +0x010 DosDevicesDirectoryHandle : Ptr64 Void
         +0x018 ReferenceCount   : Int4B
         +0x01c DriveMap         : Uint4B
         +0x020 DriveType        : [32] UChar
      +0x030 Token            : Ptr64 Void
      +0x038 AccountName      : _UNICODE_STRING
         +0x000 Length           : Uint2B
         +0x002 MaximumLength    : Uint2B
         +0x008 Buffer           : Ptr64 Uint2B
      +0x048 AuthorityName    : _UNICODE_STRING
         +0x000 Length           : Uint2B
         +0x002 MaximumLength    : Uint2B
         +0x008 Buffer           : Ptr64 Uint2B
      +0x058 LowBoxHandlesTable : _SEP_LOWBOX_HANDLES_TABLE
         +0x000 Lock             : _EX_PUSH_LOCK
         +0x008 HashTable        : Ptr64 _RTL_DYNAMIC_HASH_TABLE
      +0x068 SharedDataLock   : _EX_PUSH_LOCK
         +0x000 Locked           : Pos 0, 1 Bit
         +0x000 Waiting          : Pos 1, 1 Bit
         +0x000 Waking           : Pos 2, 1 Bit
         +0x000 MultipleShared   : Pos 3, 1 Bit
         +0x000 Shared           : Pos 4, 60 Bits
         +0x000 Value            : Uint8B
         +0x000 Ptr              : Ptr64 Void
      +0x070 SharedClaimAttributes : Ptr64 _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION
         +0x000 DeviceGroupsCount : Uint4B
         +0x008 pDeviceGroups    : Ptr64 _SID_AND_ATTRIBUTES
         +0x010 RestrictedDeviceGroupsCount : Uint4B
         +0x018 pRestrictedDeviceGroups : Ptr64 _SID_AND_ATTRIBUTES
         +0x020 DeviceGroupsHash : _SID_AND_ATTRIBUTES_HASH
         +0x130 RestrictedDeviceGroupsHash : _SID_AND_ATTRIBUTES_HASH
         +0x240 pUserSecurityAttributes : Ptr64 _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
         +0x248 pDeviceSecurityAttributes : Ptr64 _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
         +0x250 pRestrictedUserSecurityAttributes : Ptr64 _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
         +0x258 pRestrictedDeviceSecurityAttributes : Ptr64 _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
      +0x078 SharedSidValues  : Ptr64 _SEP_SID_VALUES_BLOCK
         +0x000 BlockLength      : Uint4B
         +0x008 ReferenceCount   : Int8B
         +0x010 SidCount         : Uint4B
         +0x018 SidValuesStart   : Uint8B
      +0x080 RevocationBlock  : _OB_HANDLE_REVOCATION_BLOCK
         +0x000 RevocationInfos  : _LIST_ENTRY
         +0x010 Lock             : _EX_PUSH_LOCK
         +0x018 Rundown          : _EX_RUNDOWN_REF
      +0x0a0 ServerSilo       : Ptr64 _ESILO
   +0x0e0 OriginatingLogonSession : _LUID
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
   +0x0e8 SidHash          : _SID_AND_ATTRIBUTES_HASH
      +0x000 SidCount         : Uint4B
      +0x008 SidAttr          : Ptr64 _SID_AND_ATTRIBUTES
         +0x000 Sid              : Ptr64 Void
         +0x008 Attributes       : Uint4B
      +0x010 Hash             : [32] Uint8B
   +0x1f8 RestrictedSidHash : _SID_AND_ATTRIBUTES_HASH
      +0x000 SidCount         : Uint4B
      +0x008 SidAttr          : Ptr64 _SID_AND_ATTRIBUTES
         +0x000 Sid              : Ptr64 Void
         +0x008 Attributes       : Uint4B
      +0x010 Hash             : [32] Uint8B
   +0x308 pSecurityAttributes : Ptr64 _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
      +0x000 SecurityAttributeCount : Uint4B
      +0x008 SecurityAttributesList : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
      +0x018 WorkingSecurityAttributeCount : Uint4B
      +0x020 WorkingSecurityAttributesList : _LIST_ENTRY
         +0x000 Flink            : Ptr64 _LIST_ENTRY
         +0x008 Blink            : Ptr64 _LIST_ENTRY
   +0x310 Package          : Ptr64 Void
   +0x318 Capabilities     : Ptr64 _SID_AND_ATTRIBUTES
      +0x000 Sid              : Ptr64 Void
      +0x008 Attributes       : Uint4B
   +0x320 CapabilityCount  : Uint4B
   +0x328 CapabilitiesHash : _SID_AND_ATTRIBUTES_HASH
      +0x000 SidCount         : Uint4B
      +0x008 SidAttr          : Ptr64 _SID_AND_ATTRIBUTES
         +0x000 Sid              : Ptr64 Void
         +0x008 Attributes       : Uint4B
      +0x010 Hash             : [32] Uint8B
   +0x438 LowboxNumberEntry : Ptr64 _SEP_LOWBOX_NUMBER_ENTRY
      +0x000 HashEntry        : _RTL_DYNAMIC_HASH_TABLE_ENTRY
         +0x000 Linkage          : _LIST_ENTRY
         +0x010 Signature        : Uint8B
      +0x018 ReferenceCount   : Int8B
      +0x020 PackageSid       : Ptr64 Void
      +0x028 LowboxNumber     : Uint4B
      +0x030 AtomTable        : Ptr64 Void
   +0x440 LowboxHandlesEntry : Ptr64 _SEP_LOWBOX_HANDLES_ENTRY
      +0x000 HashEntry        : _RTL_DYNAMIC_HASH_TABLE_ENTRY
         +0x000 Linkage          : _LIST_ENTRY
         +0x010 Signature        : Uint8B
      +0x018 ReferenceCount   : Int8B
      +0x020 PackageSid       : Ptr64 Void
      +0x028 HandleCount      : Uint4B
      +0x030 Handles          : Ptr64 Ptr64 Void
   +0x448 pClaimAttributes : Ptr64 _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION
      +0x000 DeviceGroupsCount : Uint4B
      +0x008 pDeviceGroups    : Ptr64 _SID_AND_ATTRIBUTES
         +0x000 Sid              : Ptr64 Void
         +0x008 Attributes       : Uint4B
      +0x010 RestrictedDeviceGroupsCount : Uint4B
      +0x018 pRestrictedDeviceGroups : Ptr64 _SID_AND_ATTRIBUTES
         +0x000 Sid              : Ptr64 Void
         +0x008 Attributes       : Uint4B
      +0x020 DeviceGroupsHash : _SID_AND_ATTRIBUTES_HASH
         +0x000 SidCount         : Uint4B
         +0x008 SidAttr          : Ptr64 _SID_AND_ATTRIBUTES
         +0x010 Hash             : [32] Uint8B
      +0x130 RestrictedDeviceGroupsHash : _SID_AND_ATTRIBUTES_HASH
         +0x000 SidCount         : Uint4B
         +0x008 SidAttr          : Ptr64 _SID_AND_ATTRIBUTES
         +0x010 Hash             : [32] Uint8B
      +0x240 pUserSecurityAttributes : Ptr64 _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
         +0x000 SecurityAttributeCount : Uint4B
         +0x008 SecurityAttributesList : _LIST_ENTRY
         +0x018 WorkingSecurityAttributeCount : Uint4B
         +0x020 WorkingSecurityAttributesList : _LIST_ENTRY
      +0x248 pDeviceSecurityAttributes : Ptr64 _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
         +0x000 SecurityAttributeCount : Uint4B
         +0x008 SecurityAttributesList : _LIST_ENTRY
         +0x018 WorkingSecurityAttributeCount : Uint4B
         +0x020 WorkingSecurityAttributesList : _LIST_ENTRY
      +0x250 pRestrictedUserSecurityAttributes : Ptr64 _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
         +0x000 SecurityAttributeCount : Uint4B
         +0x008 SecurityAttributesList : _LIST_ENTRY
         +0x018 WorkingSecurityAttributeCount : Uint4B
         +0x020 WorkingSecurityAttributesList : _LIST_ENTRY
      +0x258 pRestrictedDeviceSecurityAttributes : Ptr64 _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
         +0x000 SecurityAttributeCount : Uint4B
         +0x008 SecurityAttributesList : _LIST_ENTRY
         +0x018 WorkingSecurityAttributeCount : Uint4B
         +0x020 WorkingSecurityAttributesList : _LIST_ENTRY
   +0x450 TrustLevelSid    : Ptr64 Void
   +0x458 TrustLinkedToken : Ptr64 _TOKEN
      +0x000 TokenSource      : _TOKEN_SOURCE
         +0x000 SourceName       : [8] Char
         +0x008 SourceIdentifier : _LUID
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
         +0x000 QuadPart         : Int8B
      +0x030 TokenLock        : Ptr64 _ERESOURCE
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
      +0x038 ModifiedId       : _LUID
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x040 Privileges       : _SEP_TOKEN_PRIVILEGES
         +0x000 Present          : Uint8B
         +0x008 Enabled          : Uint8B
         +0x010 EnabledByDefault : Uint8B
      +0x058 AuditPolicy      : _SEP_AUDIT_POLICY
         +0x000 AdtTokenPolicy   : _TOKEN_AUDIT_POLICY
         +0x01e PolicySetStatus  : UChar
      +0x078 SessionId        : Uint4B
      +0x07c UserAndGroupCount : Uint4B
      +0x080 RestrictedSidCount : Uint4B
      +0x084 VariableLength   : Uint4B
      +0x088 DynamicCharged   : Uint4B
      +0x08c DynamicAvailable : Uint4B
      +0x090 DefaultOwnerIndex : Uint4B
      +0x098 UserAndGroups    : Ptr64 _SID_AND_ATTRIBUTES
         +0x000 Sid              : Ptr64 Void
         +0x008 Attributes       : Uint4B
      +0x0a0 RestrictedSids   : Ptr64 _SID_AND_ATTRIBUTES
         +0x000 Sid              : Ptr64 Void
         +0x008 Attributes       : Uint4B
      +0x0a8 PrimaryGroup     : Ptr64 Void
      +0x0b0 DynamicPart      : Ptr64 Uint4B
      +0x0b8 DefaultDacl      : Ptr64 _ACL
         +0x000 AclRevision      : UChar
         +0x001 Sbz1             : UChar
         +0x002 AclSize          : Uint2B
         +0x004 AceCount         : Uint2B
         +0x006 Sbz2             : Uint2B
      +0x0c0 TokenType        : 
         TokenPrimary = 0n1
         TokenImpersonation = 0n2
      +0x0c4 ImpersonationLevel : 
         SecurityAnonymous = 0n0
         SecurityIdentification = 0n1
         SecurityImpersonation = 0n2
         SecurityDelegation = 0n3
      +0x0c8 TokenFlags       : Uint4B
      +0x0cc TokenInUse       : UChar
      +0x0d0 IntegrityLevelIndex : Uint4B
      +0x0d4 MandatoryPolicy  : Uint4B
      +0x0d8 LogonSession     : Ptr64 _SEP_LOGON_SESSION_REFERENCES
         +0x000 Next             : Ptr64 _SEP_LOGON_SESSION_REFERENCES
         +0x008 LogonId          : _LUID
         +0x010 BuddyLogonId     : _LUID
         +0x018 ReferenceCount   : Int8B
         +0x020 Flags            : Uint4B
         +0x028 pDeviceMap       : Ptr64 _DEVICE_MAP
         +0x030 Token            : Ptr64 Void
         +0x038 AccountName      : _UNICODE_STRING
         +0x048 AuthorityName    : _UNICODE_STRING
         +0x058 LowBoxHandlesTable : _SEP_LOWBOX_HANDLES_TABLE
         +0x068 SharedDataLock   : _EX_PUSH_LOCK
         +0x070 SharedClaimAttributes : Ptr64 _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION
         +0x078 SharedSidValues  : Ptr64 _SEP_SID_VALUES_BLOCK
         +0x080 RevocationBlock  : _OB_HANDLE_REVOCATION_BLOCK
         +0x0a0 ServerSilo       : Ptr64 _ESILO
      +0x0e0 OriginatingLogonSession : _LUID
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x0e8 SidHash          : _SID_AND_ATTRIBUTES_HASH
         +0x000 SidCount         : Uint4B
         +0x008 SidAttr          : Ptr64 _SID_AND_ATTRIBUTES
         +0x010 Hash             : [32] Uint8B
      +0x1f8 RestrictedSidHash : _SID_AND_ATTRIBUTES_HASH
         +0x000 SidCount         : Uint4B
         +0x008 SidAttr          : Ptr64 _SID_AND_ATTRIBUTES
         +0x010 Hash             : [32] Uint8B
      +0x308 pSecurityAttributes : Ptr64 _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
         +0x000 SecurityAttributeCount : Uint4B
         +0x008 SecurityAttributesList : _LIST_ENTRY
         +0x018 WorkingSecurityAttributeCount : Uint4B
         +0x020 WorkingSecurityAttributesList : _LIST_ENTRY
      +0x310 Package          : Ptr64 Void
      +0x318 Capabilities     : Ptr64 _SID_AND_ATTRIBUTES
         +0x000 Sid              : Ptr64 Void
         +0x008 Attributes       : Uint4B
      +0x320 CapabilityCount  : Uint4B
      +0x328 CapabilitiesHash : _SID_AND_ATTRIBUTES_HASH
         +0x000 SidCount         : Uint4B
         +0x008 SidAttr          : Ptr64 _SID_AND_ATTRIBUTES
         +0x010 Hash             : [32] Uint8B
      +0x438 LowboxNumberEntry : Ptr64 _SEP_LOWBOX_NUMBER_ENTRY
         +0x000 HashEntry        : _RTL_DYNAMIC_HASH_TABLE_ENTRY
         +0x018 ReferenceCount   : Int8B
         +0x020 PackageSid       : Ptr64 Void
         +0x028 LowboxNumber     : Uint4B
         +0x030 AtomTable        : Ptr64 Void
      +0x440 LowboxHandlesEntry : Ptr64 _SEP_LOWBOX_HANDLES_ENTRY
         +0x000 HashEntry        : _RTL_DYNAMIC_HASH_TABLE_ENTRY
         +0x018 ReferenceCount   : Int8B
         +0x020 PackageSid       : Ptr64 Void
         +0x028 HandleCount      : Uint4B
         +0x030 Handles          : Ptr64 Ptr64 Void
      +0x448 pClaimAttributes : Ptr64 _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION
         +0x000 DeviceGroupsCount : Uint4B
         +0x008 pDeviceGroups    : Ptr64 _SID_AND_ATTRIBUTES
         +0x010 RestrictedDeviceGroupsCount : Uint4B
         +0x018 pRestrictedDeviceGroups : Ptr64 _SID_AND_ATTRIBUTES
         +0x020 DeviceGroupsHash : _SID_AND_ATTRIBUTES_HASH
         +0x130 RestrictedDeviceGroupsHash : _SID_AND_ATTRIBUTES_HASH
         +0x240 pUserSecurityAttributes : Ptr64 _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
         +0x248 pDeviceSecurityAttributes : Ptr64 _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
         +0x250 pRestrictedUserSecurityAttributes : Ptr64 _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
         +0x258 pRestrictedDeviceSecurityAttributes : Ptr64 _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
      +0x450 TrustLevelSid    : Ptr64 Void
      +0x458 TrustLinkedToken : Ptr64 _TOKEN
         +0x000 TokenSource      : _TOKEN_SOURCE
         +0x010 TokenId          : _LUID
         +0x018 AuthenticationId : _LUID
         +0x020 ParentTokenId    : _LUID
         +0x028 ExpirationTime   : _LARGE_INTEGER
         +0x030 TokenLock        : Ptr64 _ERESOURCE
         +0x038 ModifiedId       : _LUID
         +0x040 Privileges       : _SEP_TOKEN_PRIVILEGES
         +0x058 AuditPolicy      : _SEP_AUDIT_POLICY
         +0x078 SessionId        : Uint4B
         +0x07c UserAndGroupCount : Uint4B
         +0x080 RestrictedSidCount : Uint4B
         +0x084 VariableLength   : Uint4B
         +0x088 DynamicCharged   : Uint4B
         +0x08c DynamicAvailable : Uint4B
         +0x090 DefaultOwnerIndex : Uint4B
         +0x098 UserAndGroups    : Ptr64 _SID_AND_ATTRIBUTES
         +0x0a0 RestrictedSids   : Ptr64 _SID_AND_ATTRIBUTES
         +0x0a8 PrimaryGroup     : Ptr64 Void
         +0x0b0 DynamicPart      : Ptr64 Uint4B
         +0x0b8 DefaultDacl      : Ptr64 _ACL
         +0x0c0 TokenType        : _TOKEN_TYPE
         +0x0c4 ImpersonationLevel : _SECURITY_IMPERSONATION_LEVEL
         +0x0c8 TokenFlags       : Uint4B
         +0x0cc TokenInUse       : UChar
         +0x0d0 IntegrityLevelIndex : Uint4B
         +0x0d4 MandatoryPolicy  : Uint4B
         +0x0d8 LogonSession     : Ptr64 _SEP_LOGON_SESSION_REFERENCES
         +0x0e0 OriginatingLogonSession : _LUID
         +0x0e8 SidHash          : _SID_AND_ATTRIBUTES_HASH
         +0x1f8 RestrictedSidHash : _SID_AND_ATTRIBUTES_HASH
         +0x308 pSecurityAttributes : Ptr64 _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
         +0x310 Package          : Ptr64 Void
         +0x318 Capabilities     : Ptr64 _SID_AND_ATTRIBUTES
         +0x320 CapabilityCount  : Uint4B
         +0x328 CapabilitiesHash : _SID_AND_ATTRIBUTES_HASH
         +0x438 LowboxNumberEntry : Ptr64 _SEP_LOWBOX_NUMBER_ENTRY
         +0x440 LowboxHandlesEntry : Ptr64 _SEP_LOWBOX_HANDLES_ENTRY
         +0x448 pClaimAttributes : Ptr64 _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION
         +0x450 TrustLevelSid    : Ptr64 Void
         +0x458 TrustLinkedToken : Ptr64 _TOKEN
         +0x460 IntegrityLevelSidValue : Ptr64 Void
         +0x468 TokenSidValues   : Ptr64 _SEP_SID_VALUES_BLOCK
         +0x470 VariablePart     : Uint8B
      +0x460 IntegrityLevelSidValue : Ptr64 Void
      +0x468 TokenSidValues   : Ptr64 _SEP_SID_VALUES_BLOCK
         +0x000 BlockLength      : Uint4B
         +0x008 ReferenceCount   : Int8B
         +0x010 SidCount         : Uint4B
         +0x018 SidValuesStart   : Uint8B
      +0x470 VariablePart     : Uint8B
   +0x460 IntegrityLevelSidValue : Ptr64 Void
   +0x468 TokenSidValues   : Ptr64 _SEP_SID_VALUES_BLOCK
      +0x000 BlockLength      : Uint4B
      +0x008 ReferenceCount   : Int8B
      +0x010 SidCount         : Uint4B
      +0x018 SidValuesStart   : Uint8B
   +0x470 VariablePart     : Uint8B
```