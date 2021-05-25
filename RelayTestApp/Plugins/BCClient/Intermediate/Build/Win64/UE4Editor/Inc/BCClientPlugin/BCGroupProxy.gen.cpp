// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCGroupProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCGroupProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCGroupProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCGroupProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_ERole();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_EAutoJoinStrategy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudGroupACL_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCGroupProxy::execGetRandomGroupsMatching)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonWhere);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxReturn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::GetRandomGroupsMatching(Z_Param_brainCloudWrapper,Z_Param_jsonWhere,Z_Param_maxReturn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execUpdateGroupSummaryData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonSummaryData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::UpdateGroupSummaryData(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_version,Z_Param_jsonSummaryData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execSetGroupOpen)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_UBOOL(Z_Param_isOpenGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::SetGroupOpen(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_isOpenGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execUpdateGroupName)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::UpdateGroupName(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execUpdateGroupMember)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_GET_ENUM(ERole,Z_Param_role);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonAttributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::UpdateGroupMember(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_profileId,ERole(Z_Param_role),Z_Param_jsonAttributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execUpdateGroupEntityData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::UpdateGroupEntityData(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_entityId,Z_Param_version,Z_Param_jsonData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execUpdateGroupData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::UpdateGroupData(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_version,Z_Param_jsonData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execRemoveGroupMember)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::RemoveGroupMember(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_profileId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execRejectGroupJoinRequest)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::RejectGroupJoinRequest(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_profileId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execRejectGroupInvitation)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::RejectGroupInvitation(Z_Param_brainCloudWrapper,Z_Param_groupId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execReadGroupMembers)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::ReadGroupMembers(Z_Param_brainCloudWrapper,Z_Param_groupId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execReadGroupEntity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::ReadGroupEntity(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_entityId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execReadGroupEntitiesPageByOffset)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_context);
		P_GET_PROPERTY(FIntProperty,Z_Param_pageOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::ReadGroupEntitiesPageByOffset(Z_Param_brainCloudWrapper,Z_Param_context,Z_Param_pageOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execReadGroupEntitiesPage)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::ReadGroupEntitiesPage(Z_Param_brainCloudWrapper,Z_Param_jsonContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execReadGroupData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::ReadGroupData(Z_Param_brainCloudWrapper,Z_Param_groupId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execReadGroup)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::ReadGroup(Z_Param_brainCloudWrapper,Z_Param_groupId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execListGroupsWithMember)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::ListGroupsWithMember(Z_Param_brainCloudWrapper,Z_Param_profileId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execListGroupsPageByOffset)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_context);
		P_GET_PROPERTY(FIntProperty,Z_Param_pageOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::ListGroupsPageByOffset(Z_Param_brainCloudWrapper,Z_Param_context,Z_Param_pageOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execListGroupsPage)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::ListGroupsPage(Z_Param_brainCloudWrapper,Z_Param_jsonContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execLeaveGroup)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::LeaveGroup(Z_Param_brainCloudWrapper,Z_Param_groupId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execJoinGroup)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::JoinGroup(Z_Param_brainCloudWrapper,Z_Param_groupId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execInviteGroupMember)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_GET_ENUM(ERole,Z_Param_role);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonAttributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::InviteGroupMember(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_profileId,ERole(Z_Param_role),Z_Param_jsonAttributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execIncrementGroupEntityData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::IncrementGroupEntityData(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_entityId,Z_Param_jsonData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execIncrementGroupData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::IncrementGroupData(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_jsonData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execGetMyGroups)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::GetMyGroups(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execDeleteGroupEntity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::DeleteGroupEntity(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_entityId,Z_Param_version);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execDeleteGroup)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::DeleteGroup(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_version);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execCreateGroupEntity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_UBOOL(Z_Param_isOwnedByGroupMember);
		P_GET_OBJECT(UBrainCloudGroupACL,Z_Param_acl);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::CreateGroupEntity(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_entityType,Z_Param_isOwnedByGroupMember,Z_Param_acl,Z_Param_jsonData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execCreateGroupWithSummaryData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FStrProperty,Z_Param_type);
		P_GET_UBOOL(Z_Param_isOpenGroup);
		P_GET_OBJECT(UBrainCloudGroupACL,Z_Param_acl);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonOwnerAttributes);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonDefaultMemberAttributes);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonSummaryData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::CreateGroupWithSummaryData(Z_Param_brainCloudWrapper,Z_Param_name,Z_Param_type,Z_Param_isOpenGroup,Z_Param_acl,Z_Param_jsonData,Z_Param_jsonOwnerAttributes,Z_Param_jsonDefaultMemberAttributes,Z_Param_jsonSummaryData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execCreateGroup)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FStrProperty,Z_Param_type);
		P_GET_UBOOL(Z_Param_isOpenGroup);
		P_GET_OBJECT(UBrainCloudGroupACL,Z_Param_acl);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonOwnerAttributes);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonDefaultMemberAttributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::CreateGroup(Z_Param_brainCloudWrapper,Z_Param_name,Z_Param_type,Z_Param_isOpenGroup,Z_Param_acl,Z_Param_jsonData,Z_Param_jsonOwnerAttributes,Z_Param_jsonDefaultMemberAttributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execCancelGroupInvitation)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::CancelGroupInvitation(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_profileId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execAutoJoinGroupMulti)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_TARRAY_REF(FString,Z_Param_Out_groupTypes);
		P_GET_ENUM(EAutoJoinStrategy,Z_Param_autoJoinStrategy);
		P_GET_PROPERTY(FStrProperty,Z_Param_dataQueryJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::AutoJoinGroupMulti(Z_Param_brainCloudWrapper,Z_Param_Out_groupTypes,EAutoJoinStrategy(Z_Param_autoJoinStrategy),Z_Param_dataQueryJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execAutoJoinGroup)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupType);
		P_GET_ENUM(EAutoJoinStrategy,Z_Param_autoJoinStrategy);
		P_GET_PROPERTY(FStrProperty,Z_Param_dataQueryJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::AutoJoinGroup(Z_Param_brainCloudWrapper,Z_Param_groupType,EAutoJoinStrategy(Z_Param_autoJoinStrategy),Z_Param_dataQueryJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execApproveGroupJoinRequest)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_GET_ENUM(ERole,Z_Param_role);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonAttributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::ApproveGroupJoinRequest(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_profileId,ERole(Z_Param_role),Z_Param_jsonAttributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execAddGroupMember)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_GET_ENUM(ERole,Z_Param_role);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonAttributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::AddGroupMember(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_profileId,ERole(Z_Param_role),Z_Param_jsonAttributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGroupProxy::execAcceptGroupInvitation)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGroupProxy**)Z_Param__Result=UBCGroupProxy::AcceptGroupInvitation(Z_Param_brainCloudWrapper,Z_Param_groupId);
		P_NATIVE_END;
	}
	void UBCGroupProxy::StaticRegisterNativesUBCGroupProxy()
	{
		UClass* Class = UBCGroupProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptGroupInvitation", &UBCGroupProxy::execAcceptGroupInvitation },
			{ "AddGroupMember", &UBCGroupProxy::execAddGroupMember },
			{ "ApproveGroupJoinRequest", &UBCGroupProxy::execApproveGroupJoinRequest },
			{ "AutoJoinGroup", &UBCGroupProxy::execAutoJoinGroup },
			{ "AutoJoinGroupMulti", &UBCGroupProxy::execAutoJoinGroupMulti },
			{ "CancelGroupInvitation", &UBCGroupProxy::execCancelGroupInvitation },
			{ "CreateGroup", &UBCGroupProxy::execCreateGroup },
			{ "CreateGroupEntity", &UBCGroupProxy::execCreateGroupEntity },
			{ "CreateGroupWithSummaryData", &UBCGroupProxy::execCreateGroupWithSummaryData },
			{ "DeleteGroup", &UBCGroupProxy::execDeleteGroup },
			{ "DeleteGroupEntity", &UBCGroupProxy::execDeleteGroupEntity },
			{ "GetMyGroups", &UBCGroupProxy::execGetMyGroups },
			{ "GetRandomGroupsMatching", &UBCGroupProxy::execGetRandomGroupsMatching },
			{ "IncrementGroupData", &UBCGroupProxy::execIncrementGroupData },
			{ "IncrementGroupEntityData", &UBCGroupProxy::execIncrementGroupEntityData },
			{ "InviteGroupMember", &UBCGroupProxy::execInviteGroupMember },
			{ "JoinGroup", &UBCGroupProxy::execJoinGroup },
			{ "LeaveGroup", &UBCGroupProxy::execLeaveGroup },
			{ "ListGroupsPage", &UBCGroupProxy::execListGroupsPage },
			{ "ListGroupsPageByOffset", &UBCGroupProxy::execListGroupsPageByOffset },
			{ "ListGroupsWithMember", &UBCGroupProxy::execListGroupsWithMember },
			{ "ReadGroup", &UBCGroupProxy::execReadGroup },
			{ "ReadGroupData", &UBCGroupProxy::execReadGroupData },
			{ "ReadGroupEntitiesPage", &UBCGroupProxy::execReadGroupEntitiesPage },
			{ "ReadGroupEntitiesPageByOffset", &UBCGroupProxy::execReadGroupEntitiesPageByOffset },
			{ "ReadGroupEntity", &UBCGroupProxy::execReadGroupEntity },
			{ "ReadGroupMembers", &UBCGroupProxy::execReadGroupMembers },
			{ "RejectGroupInvitation", &UBCGroupProxy::execRejectGroupInvitation },
			{ "RejectGroupJoinRequest", &UBCGroupProxy::execRejectGroupJoinRequest },
			{ "RemoveGroupMember", &UBCGroupProxy::execRemoveGroupMember },
			{ "SetGroupOpen", &UBCGroupProxy::execSetGroupOpen },
			{ "UpdateGroupData", &UBCGroupProxy::execUpdateGroupData },
			{ "UpdateGroupEntityData", &UBCGroupProxy::execUpdateGroupEntityData },
			{ "UpdateGroupMember", &UBCGroupProxy::execUpdateGroupMember },
			{ "UpdateGroupName", &UBCGroupProxy::execUpdateGroupName },
			{ "UpdateGroupSummaryData", &UBCGroupProxy::execUpdateGroupSummaryData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCGroupProxy_AcceptGroupInvitation_Statics
	{
		struct BCGroupProxy_eventAcceptGroupInvitation_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_AcceptGroupInvitation_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventAcceptGroupInvitation_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_AcceptGroupInvitation_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_AcceptGroupInvitation_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventAcceptGroupInvitation_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_AcceptGroupInvitation_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_AcceptGroupInvitation_Statics::NewProp_groupId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_AcceptGroupInvitation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventAcceptGroupInvitation_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_AcceptGroupInvitation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AcceptGroupInvitation_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AcceptGroupInvitation_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AcceptGroupInvitation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_AcceptGroupInvitation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Accept an outstanding invitation to join the group.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - ACCEPT_GROUP_INVITATION\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Accept an outstanding invitation to join the group.\n\nService Name - group\nService Operation - ACCEPT_GROUP_INVITATION\n\nParam - groupId ID of the group." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_AcceptGroupInvitation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "AcceptGroupInvitation", nullptr, nullptr, sizeof(BCGroupProxy_eventAcceptGroupInvitation_Parms), Z_Construct_UFunction_UBCGroupProxy_AcceptGroupInvitation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_AcceptGroupInvitation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_AcceptGroupInvitation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_AcceptGroupInvitation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_AcceptGroupInvitation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_AcceptGroupInvitation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics
	{
		struct BCGroupProxy_eventAddGroupMember_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			FString profileId;
			ERole role;
			FString jsonAttributes;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_role_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_role;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonAttributes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventAddGroupMember_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventAddGroupMember_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_groupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventAddGroupMember_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_profileId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventAddGroupMember_Parms, role), Z_Construct_UEnum_BCClientPlugin_ERole, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_jsonAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_jsonAttributes = { "jsonAttributes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventAddGroupMember_Parms, jsonAttributes), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_jsonAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_jsonAttributes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventAddGroupMember_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_jsonAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Add a member to the group.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - ADD_GROUP_MEMBER\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 * Param - profileId Profile ID of the member being added.\n\x09 * Param - role Role of the member being added.\n\x09 * Param - jsonAttributes Attributes of the member being added.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Add a member to the group.\n\nService Name - group\nService Operation - ADD_GROUP_MEMBER\n\nParam - groupId ID of the group.\nParam - profileId Profile ID of the member being added.\nParam - role Role of the member being added.\nParam - jsonAttributes Attributes of the member being added." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "AddGroupMember", nullptr, nullptr, sizeof(BCGroupProxy_eventAddGroupMember_Parms), Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_AddGroupMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_AddGroupMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics
	{
		struct BCGroupProxy_eventApproveGroupJoinRequest_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			FString profileId;
			ERole role;
			FString jsonAttributes;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_role_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_role;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonAttributes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventApproveGroupJoinRequest_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventApproveGroupJoinRequest_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_groupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventApproveGroupJoinRequest_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_profileId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventApproveGroupJoinRequest_Parms, role), Z_Construct_UEnum_BCClientPlugin_ERole, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_jsonAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_jsonAttributes = { "jsonAttributes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventApproveGroupJoinRequest_Parms, jsonAttributes), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_jsonAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_jsonAttributes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventApproveGroupJoinRequest_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_jsonAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Approve an outstanding request to join the group.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - APPROVE_GROUP_JOIN_REQUEST\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 * Param - profileId Profile ID of the invitation being deleted.\n\x09 * Param - role Role of the member being invited.\n\x09 * Param - jsonAttributes Attributes of the member being invited.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Approve an outstanding request to join the group.\n\nService Name - group\nService Operation - APPROVE_GROUP_JOIN_REQUEST\n\nParam - groupId ID of the group.\nParam - profileId Profile ID of the invitation being deleted.\nParam - role Role of the member being invited.\nParam - jsonAttributes Attributes of the member being invited." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "ApproveGroupJoinRequest", nullptr, nullptr, sizeof(BCGroupProxy_eventApproveGroupJoinRequest_Parms), Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics
	{
		struct BCGroupProxy_eventAutoJoinGroup_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupType;
			EAutoJoinStrategy autoJoinStrategy;
			FString dataQueryJson;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_autoJoinStrategy_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_autoJoinStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dataQueryJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dataQueryJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventAutoJoinGroup_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::NewProp_groupType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::NewProp_groupType = { "groupType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventAutoJoinGroup_Parms, groupType), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::NewProp_groupType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::NewProp_groupType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::NewProp_autoJoinStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::NewProp_autoJoinStrategy = { "autoJoinStrategy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventAutoJoinGroup_Parms, autoJoinStrategy), Z_Construct_UEnum_BCClientPlugin_EAutoJoinStrategy, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::NewProp_dataQueryJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::NewProp_dataQueryJson = { "dataQueryJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventAutoJoinGroup_Parms, dataQueryJson), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::NewProp_dataQueryJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::NewProp_dataQueryJson_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventAutoJoinGroup_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::NewProp_groupType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::NewProp_autoJoinStrategy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::NewProp_autoJoinStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::NewProp_dataQueryJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09* Automatically join an open group that matches the search criteria and has space available.\n\x09*\n\x09* Service Name - group\n\x09* Service Operation - AUTO_JOIN_GROUP\n\x09*\n\x09* Param - groupType Name of the associated group type.\n\x09* Param - autoJoinStrategy Selection strategy to employ when there are multiple matches\n\x09* Param - dataQueryJson Query parameters (optional)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Automatically join an open group that matches the search criteria and has space available.\n\nService Name - group\nService Operation - AUTO_JOIN_GROUP\n\nParam - groupType Name of the associated group type.\nParam - autoJoinStrategy Selection strategy to employ when there are multiple matches\nParam - dataQueryJson Query parameters (optional)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "AutoJoinGroup", nullptr, nullptr, sizeof(BCGroupProxy_eventAutoJoinGroup_Parms), Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics
	{
		struct BCGroupProxy_eventAutoJoinGroupMulti_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TArray<FString> groupTypes;
			EAutoJoinStrategy autoJoinStrategy;
			FString dataQueryJson;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_groupTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_autoJoinStrategy_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_autoJoinStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dataQueryJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dataQueryJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventAutoJoinGroupMulti_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::NewProp_groupTypes_Inner = { "groupTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::NewProp_groupTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::NewProp_groupTypes = { "groupTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventAutoJoinGroupMulti_Parms, groupTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::NewProp_groupTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::NewProp_groupTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::NewProp_autoJoinStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::NewProp_autoJoinStrategy = { "autoJoinStrategy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventAutoJoinGroupMulti_Parms, autoJoinStrategy), Z_Construct_UEnum_BCClientPlugin_EAutoJoinStrategy, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::NewProp_dataQueryJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::NewProp_dataQueryJson = { "dataQueryJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventAutoJoinGroupMulti_Parms, dataQueryJson), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::NewProp_dataQueryJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::NewProp_dataQueryJson_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventAutoJoinGroupMulti_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::NewProp_groupTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::NewProp_groupTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::NewProp_autoJoinStrategy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::NewProp_autoJoinStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::NewProp_dataQueryJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09* Automatically join an open group that matches the search criteria and has space available.\n\x09*\n\x09* Service Name - group\n\x09* Service Operation - AUTO_JOIN_GROUP_MULTI\n\x09*\n\x09* Param - groupType Name of the associated group type.\n\x09* Param - autoJoinStrategy Selection strategy to employ when there are multiple matches\n\x09* Param - dataQueryJson Query parameters (optional)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Automatically join an open group that matches the search criteria and has space available.\n\nService Name - group\nService Operation - AUTO_JOIN_GROUP_MULTI\n\nParam - groupType Name of the associated group type.\nParam - autoJoinStrategy Selection strategy to employ when there are multiple matches\nParam - dataQueryJson Query parameters (optional)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "AutoJoinGroupMulti", nullptr, nullptr, sizeof(BCGroupProxy_eventAutoJoinGroupMulti_Parms), Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics
	{
		struct BCGroupProxy_eventCancelGroupInvitation_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			FString profileId;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCancelGroupInvitation_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCancelGroupInvitation_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::NewProp_groupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCancelGroupInvitation_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::NewProp_profileId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCancelGroupInvitation_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Cancel an outstanding invitation to the group.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - CANCEL_GROUP_INVITATION\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 * Param - profileId Profile ID of the invitation being deleted.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Cancel an outstanding invitation to the group.\n\nService Name - group\nService Operation - CANCEL_GROUP_INVITATION\n\nParam - groupId ID of the group.\nParam - profileId Profile ID of the invitation being deleted." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "CancelGroupInvitation", nullptr, nullptr, sizeof(BCGroupProxy_eventCancelGroupInvitation_Parms), Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics
	{
		struct BCGroupProxy_eventCreateGroup_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString name;
			FString type;
			bool isOpenGroup;
			UBrainCloudGroupACL* acl;
			FString jsonData;
			FString jsonOwnerAttributes;
			FString jsonDefaultMemberAttributes;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_type;
		static void NewProp_isOpenGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOpenGroup;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_acl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonOwnerAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonOwnerAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonDefaultMemberAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonDefaultMemberAttributes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroup_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroup_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroup_Parms, type), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_type_MetaData)) };
	void Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_isOpenGroup_SetBit(void* Obj)
	{
		((BCGroupProxy_eventCreateGroup_Parms*)Obj)->isOpenGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_isOpenGroup = { "isOpenGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCGroupProxy_eventCreateGroup_Parms), &Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_isOpenGroup_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_acl = { "acl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroup_Parms, acl), Z_Construct_UClass_UBrainCloudGroupACL_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_jsonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroup_Parms, jsonData), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_jsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_jsonData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_jsonOwnerAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_jsonOwnerAttributes = { "jsonOwnerAttributes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroup_Parms, jsonOwnerAttributes), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_jsonOwnerAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_jsonOwnerAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_jsonDefaultMemberAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_jsonDefaultMemberAttributes = { "jsonDefaultMemberAttributes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroup_Parms, jsonDefaultMemberAttributes), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_jsonDefaultMemberAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_jsonDefaultMemberAttributes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroup_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_isOpenGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_acl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_jsonOwnerAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_jsonDefaultMemberAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Create a group.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - CREATE_GROUP\n\x09 *\n\x09 * Param - name Name of the group.\n\x09 * Param - groupType Name of the type of group.\n\x09 * Param - isOpenGroup true if group is open; false if closed.\n\x09 * Param - acl The group's access control list. A null ACL implies default.\n\x09 * Param - jsonOwnerAttributes Attributes for the group owner (current player).\n\x09 * Param - jsonDefaultMemberAttributes Default attributes for group members.\n\x09 * Param - jsonData Custom application data.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Create a group.\n\nService Name - group\nService Operation - CREATE_GROUP\n\nParam - name Name of the group.\nParam - groupType Name of the type of group.\nParam - isOpenGroup true if group is open; false if closed.\nParam - acl The group's access control list. A null ACL implies default.\nParam - jsonOwnerAttributes Attributes for the group owner (current player).\nParam - jsonDefaultMemberAttributes Default attributes for group members.\nParam - jsonData Custom application data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "CreateGroup", nullptr, nullptr, sizeof(BCGroupProxy_eventCreateGroup_Parms), Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_CreateGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_CreateGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics
	{
		struct BCGroupProxy_eventCreateGroupEntity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			FString entityType;
			bool isOwnedByGroupMember;
			UBrainCloudGroupACL* acl;
			FString jsonData;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
		static void NewProp_isOwnedByGroupMember_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOwnedByGroupMember;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_acl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroupEntity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroupEntity_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_groupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroupEntity_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_entityType_MetaData)) };
	void Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_isOwnedByGroupMember_SetBit(void* Obj)
	{
		((BCGroupProxy_eventCreateGroupEntity_Parms*)Obj)->isOwnedByGroupMember = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_isOwnedByGroupMember = { "isOwnedByGroupMember", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCGroupProxy_eventCreateGroupEntity_Parms), &Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_isOwnedByGroupMember_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_acl = { "acl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroupEntity_Parms, acl), Z_Construct_UClass_UBrainCloudGroupACL_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_jsonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroupEntity_Parms, jsonData), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_jsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_jsonData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroupEntity_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_isOwnedByGroupMember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_acl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Create a group entity.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - CREATE_GROUP_ENTITY\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 * Param - isOwnedByGroupMember true if entity is owned by a member; false if owned by the entire group.\n\x09 * Param - entityType Type of the group entity.\n\x09 * Param - acl Access control list for the group entity.\n\x09 * Param - jsonData Custom application data.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Create a group entity.\n\nService Name - group\nService Operation - CREATE_GROUP_ENTITY\n\nParam - groupId ID of the group.\nParam - isOwnedByGroupMember true if entity is owned by a member; false if owned by the entire group.\nParam - entityType Type of the group entity.\nParam - acl Access control list for the group entity.\nParam - jsonData Custom application data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "CreateGroupEntity", nullptr, nullptr, sizeof(BCGroupProxy_eventCreateGroupEntity_Parms), Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics
	{
		struct BCGroupProxy_eventCreateGroupWithSummaryData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString name;
			FString type;
			bool isOpenGroup;
			UBrainCloudGroupACL* acl;
			FString jsonData;
			FString jsonOwnerAttributes;
			FString jsonDefaultMemberAttributes;
			FString jsonSummaryData;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_type;
		static void NewProp_isOpenGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOpenGroup;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_acl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonOwnerAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonOwnerAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonDefaultMemberAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonDefaultMemberAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonSummaryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonSummaryData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroupWithSummaryData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroupWithSummaryData_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroupWithSummaryData_Parms, type), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_type_MetaData)) };
	void Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_isOpenGroup_SetBit(void* Obj)
	{
		((BCGroupProxy_eventCreateGroupWithSummaryData_Parms*)Obj)->isOpenGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_isOpenGroup = { "isOpenGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCGroupProxy_eventCreateGroupWithSummaryData_Parms), &Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_isOpenGroup_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_acl = { "acl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroupWithSummaryData_Parms, acl), Z_Construct_UClass_UBrainCloudGroupACL_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_jsonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroupWithSummaryData_Parms, jsonData), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_jsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_jsonData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_jsonOwnerAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_jsonOwnerAttributes = { "jsonOwnerAttributes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroupWithSummaryData_Parms, jsonOwnerAttributes), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_jsonOwnerAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_jsonOwnerAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_jsonDefaultMemberAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_jsonDefaultMemberAttributes = { "jsonDefaultMemberAttributes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroupWithSummaryData_Parms, jsonDefaultMemberAttributes), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_jsonDefaultMemberAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_jsonDefaultMemberAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_jsonSummaryData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_jsonSummaryData = { "jsonSummaryData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroupWithSummaryData_Parms, jsonSummaryData), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_jsonSummaryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_jsonSummaryData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventCreateGroupWithSummaryData_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_isOpenGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_acl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_jsonOwnerAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_jsonDefaultMemberAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_jsonSummaryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Create a group with summary data.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - CREATE_GROUP\n\x09 *\n\x09 * Param - name Name of the group.\n\x09 * Param - groupType Name of the type of group.\n\x09 * Param - isOpenGroup true if group is open; false if closed.\n\x09 * Param - acl The group's access control list. A null ACL implies default.\n\x09 * Param - jsonOwnerAttributes Attributes for the group owner (current player).\n\x09 * Param - jsonDefaultMemberAttributes Default attributes for group members.\n\x09 * Param - jsonData Custom application data.\n\x09 * Param - jsonSummaryData Custom application data.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Create a group with summary data.\n\nService Name - group\nService Operation - CREATE_GROUP\n\nParam - name Name of the group.\nParam - groupType Name of the type of group.\nParam - isOpenGroup true if group is open; false if closed.\nParam - acl The group's access control list. A null ACL implies default.\nParam - jsonOwnerAttributes Attributes for the group owner (current player).\nParam - jsonDefaultMemberAttributes Default attributes for group members.\nParam - jsonData Custom application data.\nParam - jsonSummaryData Custom application data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "CreateGroupWithSummaryData", nullptr, nullptr, sizeof(BCGroupProxy_eventCreateGroupWithSummaryData_Parms), Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_DeleteGroup_Statics
	{
		struct BCGroupProxy_eventDeleteGroup_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			int32 version;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_DeleteGroup_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventDeleteGroup_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_DeleteGroup_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_DeleteGroup_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventDeleteGroup_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_DeleteGroup_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_DeleteGroup_Statics::NewProp_groupId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCGroupProxy_DeleteGroup_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventDeleteGroup_Parms, version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_DeleteGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventDeleteGroup_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_DeleteGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_DeleteGroup_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_DeleteGroup_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_DeleteGroup_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_DeleteGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_DeleteGroup_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Delete a group.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - DELETE_GROUP\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Delete a group.\n\nService Name - group\nService Operation - DELETE_GROUP\n\nParam - groupId ID of the group." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_DeleteGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "DeleteGroup", nullptr, nullptr, sizeof(BCGroupProxy_eventDeleteGroup_Parms), Z_Construct_UFunction_UBCGroupProxy_DeleteGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_DeleteGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_DeleteGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_DeleteGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_DeleteGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_DeleteGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics
	{
		struct BCGroupProxy_eventDeleteGroupEntity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			FString entityId;
			int32 version;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventDeleteGroupEntity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventDeleteGroupEntity_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::NewProp_groupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventDeleteGroupEntity_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::NewProp_entityId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventDeleteGroupEntity_Parms, version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventDeleteGroupEntity_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Delete a group entity.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - DELETE_GROUP_ENTITY\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 * Param - entityId ID of the entity.\n\x09 * Param - version The current version of the group entity (for concurrency checking).\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Delete a group entity.\n\nService Name - group\nService Operation - DELETE_GROUP_ENTITY\n\nParam - groupId ID of the group.\nParam - entityId ID of the entity.\nParam - version The current version of the group entity (for concurrency checking)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "DeleteGroupEntity", nullptr, nullptr, sizeof(BCGroupProxy_eventDeleteGroupEntity_Parms), Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_GetMyGroups_Statics
	{
		struct BCGroupProxy_eventGetMyGroups_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_GetMyGroups_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventGetMyGroups_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_GetMyGroups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventGetMyGroups_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_GetMyGroups_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_GetMyGroups_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_GetMyGroups_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_GetMyGroups_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Read information on groups to which the current player belongs.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - GET_MY_GROUPS\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Read information on groups to which the current player belongs.\n\nService Name - group\nService Operation - GET_MY_GROUPS" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_GetMyGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "GetMyGroups", nullptr, nullptr, sizeof(BCGroupProxy_eventGetMyGroups_Parms), Z_Construct_UFunction_UBCGroupProxy_GetMyGroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_GetMyGroups_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_GetMyGroups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_GetMyGroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_GetMyGroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_GetMyGroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching_Statics
	{
		struct BCGroupProxy_eventGetRandomGroupsMatching_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString jsonWhere;
			int32 maxReturn;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonWhere_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonWhere;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxReturn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventGetRandomGroupsMatching_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching_Statics::NewProp_jsonWhere_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching_Statics::NewProp_jsonWhere = { "jsonWhere", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventGetRandomGroupsMatching_Parms, jsonWhere), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching_Statics::NewProp_jsonWhere_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching_Statics::NewProp_jsonWhere_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching_Statics::NewProp_maxReturn = { "maxReturn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventGetRandomGroupsMatching_Parms, maxReturn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventGetRandomGroupsMatching_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching_Statics::NewProp_jsonWhere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching_Statics::NewProp_maxReturn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n     * Get a list of up to maxReturn randomly selected groups from the server based on where condition\n     *\n     * Service Name - group\n     * Service Operation - GET_RANDOM_GROUPS_MATCHING\n     *\n     * @param jsonWhere where to search.\n     * @param maxReturn #of groups to search \n     * @param callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Get a list of up to maxReturn randomly selected groups from the server based on where condition\n\nService Name - group\nService Operation - GET_RANDOM_GROUPS_MATCHING\n\n@param jsonWhere where to search.\n@param maxReturn #of groups to search\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "GetRandomGroupsMatching", nullptr, nullptr, sizeof(BCGroupProxy_eventGetRandomGroupsMatching_Parms), Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics
	{
		struct BCGroupProxy_eventIncrementGroupData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			FString jsonData;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventIncrementGroupData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventIncrementGroupData_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::NewProp_groupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::NewProp_jsonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventIncrementGroupData_Parms, jsonData), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::NewProp_jsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::NewProp_jsonData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventIncrementGroupData_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Increment elements for the group's data field.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - INCREMENT_GROUP_DATA\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 * Param - jsonData Partial data map with incremental values.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Increment elements for the group's data field.\n\nService Name - group\nService Operation - INCREMENT_GROUP_DATA\n\nParam - groupId ID of the group.\nParam - jsonData Partial data map with incremental values." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "IncrementGroupData", nullptr, nullptr, sizeof(BCGroupProxy_eventIncrementGroupData_Parms), Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics
	{
		struct BCGroupProxy_eventIncrementGroupEntityData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			FString entityId;
			FString jsonData;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventIncrementGroupEntityData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventIncrementGroupEntityData_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::NewProp_groupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventIncrementGroupEntityData_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::NewProp_entityId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::NewProp_jsonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventIncrementGroupEntityData_Parms, jsonData), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::NewProp_jsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::NewProp_jsonData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventIncrementGroupEntityData_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Increment elements for the group entity's data field.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - INCREMENT_GROUP_ENTITY_DATA\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 * Param - entityId ID of the entity.\n\x09 * Param - jsonData Partial data map with incremental values.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Increment elements for the group entity's data field.\n\nService Name - group\nService Operation - INCREMENT_GROUP_ENTITY_DATA\n\nParam - groupId ID of the group.\nParam - entityId ID of the entity.\nParam - jsonData Partial data map with incremental values." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "IncrementGroupEntityData", nullptr, nullptr, sizeof(BCGroupProxy_eventIncrementGroupEntityData_Parms), Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics
	{
		struct BCGroupProxy_eventInviteGroupMember_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			FString profileId;
			ERole role;
			FString jsonAttributes;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_role_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_role;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonAttributes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventInviteGroupMember_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventInviteGroupMember_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_groupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventInviteGroupMember_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_profileId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventInviteGroupMember_Parms, role), Z_Construct_UEnum_BCClientPlugin_ERole, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_jsonAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_jsonAttributes = { "jsonAttributes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventInviteGroupMember_Parms, jsonAttributes), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_jsonAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_jsonAttributes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventInviteGroupMember_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_jsonAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Invite a member to the group.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - INVITE_GROUP_MEMBER\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 * Param - profileId Profile ID of the member being invited.\n\x09 * Param - role Role of the member being invited.\n\x09 * Param - jsonAttributes Attributes of the member being invited.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Invite a member to the group.\n\nService Name - group\nService Operation - INVITE_GROUP_MEMBER\n\nParam - groupId ID of the group.\nParam - profileId Profile ID of the member being invited.\nParam - role Role of the member being invited.\nParam - jsonAttributes Attributes of the member being invited." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "InviteGroupMember", nullptr, nullptr, sizeof(BCGroupProxy_eventInviteGroupMember_Parms), Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_JoinGroup_Statics
	{
		struct BCGroupProxy_eventJoinGroup_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_JoinGroup_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventJoinGroup_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_JoinGroup_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_JoinGroup_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventJoinGroup_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_JoinGroup_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_JoinGroup_Statics::NewProp_groupId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_JoinGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventJoinGroup_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_JoinGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_JoinGroup_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_JoinGroup_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_JoinGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_JoinGroup_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Join an open group or request to join a closed group.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - JOIN_GROUP\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Join an open group or request to join a closed group.\n\nService Name - group\nService Operation - JOIN_GROUP\n\nParam - groupId ID of the group." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_JoinGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "JoinGroup", nullptr, nullptr, sizeof(BCGroupProxy_eventJoinGroup_Parms), Z_Construct_UFunction_UBCGroupProxy_JoinGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_JoinGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_JoinGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_JoinGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_JoinGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_JoinGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_LeaveGroup_Statics
	{
		struct BCGroupProxy_eventLeaveGroup_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_LeaveGroup_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventLeaveGroup_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_LeaveGroup_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_LeaveGroup_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventLeaveGroup_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_LeaveGroup_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_LeaveGroup_Statics::NewProp_groupId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_LeaveGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventLeaveGroup_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_LeaveGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_LeaveGroup_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_LeaveGroup_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_LeaveGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_LeaveGroup_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Leave a group in which the player is a member.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - LEAVE_GROUP\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Leave a group in which the player is a member.\n\nService Name - group\nService Operation - LEAVE_GROUP\n\nParam - groupId ID of the group." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_LeaveGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "LeaveGroup", nullptr, nullptr, sizeof(BCGroupProxy_eventLeaveGroup_Parms), Z_Construct_UFunction_UBCGroupProxy_LeaveGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_LeaveGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_LeaveGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_LeaveGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_LeaveGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_LeaveGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_ListGroupsPage_Statics
	{
		struct BCGroupProxy_eventListGroupsPage_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString jsonContext;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonContext;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_ListGroupsPage_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventListGroupsPage_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ListGroupsPage_Statics::NewProp_jsonContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_ListGroupsPage_Statics::NewProp_jsonContext = { "jsonContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventListGroupsPage_Parms, jsonContext), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ListGroupsPage_Statics::NewProp_jsonContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ListGroupsPage_Statics::NewProp_jsonContext_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_ListGroupsPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventListGroupsPage_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_ListGroupsPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ListGroupsPage_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ListGroupsPage_Statics::NewProp_jsonContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ListGroupsPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ListGroupsPage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Read a page of group information.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - LIST_GROUPS_PAGE\n\x09 *\n\x09 * Param - context Query context.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Read a page of group information.\n\nService Name - group\nService Operation - LIST_GROUPS_PAGE\n\nParam - context Query context." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_ListGroupsPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "ListGroupsPage", nullptr, nullptr, sizeof(BCGroupProxy_eventListGroupsPage_Parms), Z_Construct_UFunction_UBCGroupProxy_ListGroupsPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ListGroupsPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ListGroupsPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ListGroupsPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_ListGroupsPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_ListGroupsPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset_Statics
	{
		struct BCGroupProxy_eventListGroupsPageByOffset_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString context;
			int32 pageOffset;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_pageOffset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventListGroupsPageByOffset_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset_Statics::NewProp_context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventListGroupsPageByOffset_Parms, context), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset_Statics::NewProp_context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset_Statics::NewProp_context_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset_Statics::NewProp_pageOffset = { "pageOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventListGroupsPageByOffset_Parms, pageOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventListGroupsPageByOffset_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset_Statics::NewProp_context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset_Statics::NewProp_pageOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Read a page of group information.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - LIST_GROUPS_PAGE_BY_OFFSET\n\x09 *\n\x09 * Param - encodedContext Encoded reference query context.\n\x09 * Param - offset Number of pages by which to offset the query.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Read a page of group information.\n\nService Name - group\nService Operation - LIST_GROUPS_PAGE_BY_OFFSET\n\nParam - encodedContext Encoded reference query context.\nParam - offset Number of pages by which to offset the query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "ListGroupsPageByOffset", nullptr, nullptr, sizeof(BCGroupProxy_eventListGroupsPageByOffset_Parms), Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_ListGroupsWithMember_Statics
	{
		struct BCGroupProxy_eventListGroupsWithMember_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString profileId;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_ListGroupsWithMember_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventListGroupsWithMember_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ListGroupsWithMember_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_ListGroupsWithMember_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventListGroupsWithMember_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ListGroupsWithMember_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ListGroupsWithMember_Statics::NewProp_profileId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_ListGroupsWithMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventListGroupsWithMember_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_ListGroupsWithMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ListGroupsWithMember_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ListGroupsWithMember_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ListGroupsWithMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ListGroupsWithMember_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Read information on groups to which the specified player belongs.  Access is subject to restrictions.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - LIST_GROUPS_WITH_MEMBER\n\x09 *\n\x09 * Param - profileId\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Read information on groups to which the specified player belongs.  Access is subject to restrictions.\n\nService Name - group\nService Operation - LIST_GROUPS_WITH_MEMBER\n\nParam - profileId" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_ListGroupsWithMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "ListGroupsWithMember", nullptr, nullptr, sizeof(BCGroupProxy_eventListGroupsWithMember_Parms), Z_Construct_UFunction_UBCGroupProxy_ListGroupsWithMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ListGroupsWithMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ListGroupsWithMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ListGroupsWithMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_ListGroupsWithMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_ListGroupsWithMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_ReadGroup_Statics
	{
		struct BCGroupProxy_eventReadGroup_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_ReadGroup_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventReadGroup_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ReadGroup_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_ReadGroup_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventReadGroup_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ReadGroup_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ReadGroup_Statics::NewProp_groupId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_ReadGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventReadGroup_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_ReadGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ReadGroup_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ReadGroup_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ReadGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ReadGroup_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Read the specified group.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - READ_GROUP\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Read the specified group.\n\nService Name - group\nService Operation - READ_GROUP\n\nParam - groupId ID of the group." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_ReadGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "ReadGroup", nullptr, nullptr, sizeof(BCGroupProxy_eventReadGroup_Parms), Z_Construct_UFunction_UBCGroupProxy_ReadGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ReadGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ReadGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ReadGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_ReadGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_ReadGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_ReadGroupData_Statics
	{
		struct BCGroupProxy_eventReadGroupData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventReadGroupData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ReadGroupData_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupData_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventReadGroupData_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ReadGroupData_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ReadGroupData_Statics::NewProp_groupId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventReadGroupData_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_ReadGroupData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ReadGroupData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ReadGroupData_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ReadGroupData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ReadGroupData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09* Read the specified group's data.\n\x09*\n\x09* Service Name - group\n\x09* Service Operation - READ_GROUP_DATA\n\x09*\n\x09* Param - groupId ID of the group.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Read the specified group's data.\n\nService Name - group\nService Operation - READ_GROUP_DATA\n\nParam - groupId ID of the group." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "ReadGroupData", nullptr, nullptr, sizeof(BCGroupProxy_eventReadGroupData_Parms), Z_Construct_UFunction_UBCGroupProxy_ReadGroupData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ReadGroupData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ReadGroupData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ReadGroupData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_ReadGroupData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_ReadGroupData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPage_Statics
	{
		struct BCGroupProxy_eventReadGroupEntitiesPage_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString jsonContext;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonContext;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPage_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventReadGroupEntitiesPage_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPage_Statics::NewProp_jsonContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPage_Statics::NewProp_jsonContext = { "jsonContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventReadGroupEntitiesPage_Parms, jsonContext), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPage_Statics::NewProp_jsonContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPage_Statics::NewProp_jsonContext_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventReadGroupEntitiesPage_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPage_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPage_Statics::NewProp_jsonContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Read a page of group entity information.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - READ_GROUP_ENTITIES_PAGE\n\x09 *\n\x09 * Param - context Query context.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Read a page of group entity information.\n\nService Name - group\nService Operation - READ_GROUP_ENTITIES_PAGE\n\nParam - context Query context." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "ReadGroupEntitiesPage", nullptr, nullptr, sizeof(BCGroupProxy_eventReadGroupEntitiesPage_Parms), Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset_Statics
	{
		struct BCGroupProxy_eventReadGroupEntitiesPageByOffset_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString context;
			int32 pageOffset;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_pageOffset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventReadGroupEntitiesPageByOffset_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset_Statics::NewProp_context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventReadGroupEntitiesPageByOffset_Parms, context), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset_Statics::NewProp_context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset_Statics::NewProp_context_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset_Statics::NewProp_pageOffset = { "pageOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventReadGroupEntitiesPageByOffset_Parms, pageOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventReadGroupEntitiesPageByOffset_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset_Statics::NewProp_context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset_Statics::NewProp_pageOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Read a page of group entity information.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - READ_GROUP_ENTITIES_PAGE_BY_OFFSET\n\x09 *\n\x09 * Param - encodedContext Encoded reference query context.\n\x09 * Param - offset Number of pages by which to offset the query.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Read a page of group entity information.\n\nService Name - group\nService Operation - READ_GROUP_ENTITIES_PAGE_BY_OFFSET\n\nParam - encodedContext Encoded reference query context.\nParam - offset Number of pages by which to offset the query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "ReadGroupEntitiesPageByOffset", nullptr, nullptr, sizeof(BCGroupProxy_eventReadGroupEntitiesPageByOffset_Parms), Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics
	{
		struct BCGroupProxy_eventReadGroupEntity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			FString entityId;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventReadGroupEntity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventReadGroupEntity_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::NewProp_groupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventReadGroupEntity_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::NewProp_entityId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventReadGroupEntity_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Read the specified group entity.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - READ_GROUP_ENTITY\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 * Param - entityId ID of the entity.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Read the specified group entity.\n\nService Name - group\nService Operation - READ_GROUP_ENTITY\n\nParam - groupId ID of the group.\nParam - entityId ID of the entity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "ReadGroupEntity", nullptr, nullptr, sizeof(BCGroupProxy_eventReadGroupEntity_Parms), Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_ReadGroupMembers_Statics
	{
		struct BCGroupProxy_eventReadGroupMembers_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupMembers_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventReadGroupMembers_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ReadGroupMembers_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupMembers_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventReadGroupMembers_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ReadGroupMembers_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ReadGroupMembers_Statics::NewProp_groupId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventReadGroupMembers_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_ReadGroupMembers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ReadGroupMembers_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ReadGroupMembers_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_ReadGroupMembers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_ReadGroupMembers_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Read the members of the group.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - READ_MEMBERS_OF_GROUP\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Read the members of the group.\n\nService Name - group\nService Operation - READ_MEMBERS_OF_GROUP\n\nParam - groupId ID of the group." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_ReadGroupMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "ReadGroupMembers", nullptr, nullptr, sizeof(BCGroupProxy_eventReadGroupMembers_Parms), Z_Construct_UFunction_UBCGroupProxy_ReadGroupMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ReadGroupMembers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_ReadGroupMembers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_ReadGroupMembers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_ReadGroupMembers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_ReadGroupMembers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_RejectGroupInvitation_Statics
	{
		struct BCGroupProxy_eventRejectGroupInvitation_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_RejectGroupInvitation_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventRejectGroupInvitation_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_RejectGroupInvitation_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_RejectGroupInvitation_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventRejectGroupInvitation_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_RejectGroupInvitation_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_RejectGroupInvitation_Statics::NewProp_groupId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_RejectGroupInvitation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventRejectGroupInvitation_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_RejectGroupInvitation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_RejectGroupInvitation_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_RejectGroupInvitation_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_RejectGroupInvitation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_RejectGroupInvitation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Reject an outstanding invitation to join the group.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - REJECT_GROUP_INVITATION\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Reject an outstanding invitation to join the group.\n\nService Name - group\nService Operation - REJECT_GROUP_INVITATION\n\nParam - groupId ID of the group." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_RejectGroupInvitation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "RejectGroupInvitation", nullptr, nullptr, sizeof(BCGroupProxy_eventRejectGroupInvitation_Parms), Z_Construct_UFunction_UBCGroupProxy_RejectGroupInvitation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_RejectGroupInvitation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_RejectGroupInvitation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_RejectGroupInvitation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_RejectGroupInvitation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_RejectGroupInvitation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics
	{
		struct BCGroupProxy_eventRejectGroupJoinRequest_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			FString profileId;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventRejectGroupJoinRequest_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventRejectGroupJoinRequest_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::NewProp_groupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventRejectGroupJoinRequest_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::NewProp_profileId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventRejectGroupJoinRequest_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Reject an outstanding request to join the group.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - REJECT_GROUP_JOIN_REQUEST\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 * Param - profileId Profile ID of the invitation being deleted.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Reject an outstanding request to join the group.\n\nService Name - group\nService Operation - REJECT_GROUP_JOIN_REQUEST\n\nParam - groupId ID of the group.\nParam - profileId Profile ID of the invitation being deleted." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "RejectGroupJoinRequest", nullptr, nullptr, sizeof(BCGroupProxy_eventRejectGroupJoinRequest_Parms), Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics
	{
		struct BCGroupProxy_eventRemoveGroupMember_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			FString profileId;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventRemoveGroupMember_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventRemoveGroupMember_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::NewProp_groupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventRemoveGroupMember_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::NewProp_profileId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventRemoveGroupMember_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Remove a member from the group.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - REMOVE_GROUP_MEMBER\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 * Param - profileId Profile ID of the member being deleted.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Remove a member from the group.\n\nService Name - group\nService Operation - REMOVE_GROUP_MEMBER\n\nParam - groupId ID of the group.\nParam - profileId Profile ID of the member being deleted." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "RemoveGroupMember", nullptr, nullptr, sizeof(BCGroupProxy_eventRemoveGroupMember_Parms), Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics
	{
		struct BCGroupProxy_eventSetGroupOpen_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			bool isOpenGroup;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static void NewProp_isOpenGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOpenGroup;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventSetGroupOpen_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventSetGroupOpen_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::NewProp_groupId_MetaData)) };
	void Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::NewProp_isOpenGroup_SetBit(void* Obj)
	{
		((BCGroupProxy_eventSetGroupOpen_Parms*)Obj)->isOpenGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::NewProp_isOpenGroup = { "isOpenGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCGroupProxy_eventSetGroupOpen_Parms), &Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::NewProp_isOpenGroup_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventSetGroupOpen_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::NewProp_isOpenGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n     * Set whether a group is open true or false\n     *\n     * Service Name - group\n     * Service Operation - SET_GROUP_OPEN\n     *\n     * @param groupId ID of the group.\n     * @param isOpenGroup whether its open or not\n     * @param callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Set whether a group is open true or false\n\nService Name - group\nService Operation - SET_GROUP_OPEN\n\n@param groupId ID of the group.\n@param isOpenGroup whether its open or not\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "SetGroupOpen", nullptr, nullptr, sizeof(BCGroupProxy_eventSetGroupOpen_Parms), Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics
	{
		struct BCGroupProxy_eventUpdateGroupData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			int32 version;
			FString jsonData;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupData_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::NewProp_groupId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupData_Parms, version), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::NewProp_jsonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupData_Parms, jsonData), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::NewProp_jsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::NewProp_jsonData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupData_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Updates a group's data.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - UPDATE_GROUP_DATA\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 * Param - version Version to verify.\n\x09 * Param - jsonData Data to apply.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Updates a group's data.\n\nService Name - group\nService Operation - UPDATE_GROUP_DATA\n\nParam - groupId ID of the group.\nParam - version Version to verify.\nParam - jsonData Data to apply." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "UpdateGroupData", nullptr, nullptr, sizeof(BCGroupProxy_eventUpdateGroupData_Parms), Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics
	{
		struct BCGroupProxy_eventUpdateGroupEntityData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			FString entityId;
			int32 version;
			FString jsonData;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupEntityData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupEntityData_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_groupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupEntityData_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_entityId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupEntityData_Parms, version), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_jsonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupEntityData_Parms, jsonData), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_jsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_jsonData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupEntityData_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Update a group entity.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - UPDATE_GROUP_ENTITY_DATA\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 * Param - entityId ID of the entity.\n\x09 * Param - version The current version of the group entity (for concurrency checking).\n\x09 * Param - jsonData Custom application data.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Update a group entity.\n\nService Name - group\nService Operation - UPDATE_GROUP_ENTITY_DATA\n\nParam - groupId ID of the group.\nParam - entityId ID of the entity.\nParam - version The current version of the group entity (for concurrency checking).\nParam - jsonData Custom application data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "UpdateGroupEntityData", nullptr, nullptr, sizeof(BCGroupProxy_eventUpdateGroupEntityData_Parms), Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics
	{
		struct BCGroupProxy_eventUpdateGroupMember_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			FString profileId;
			ERole role;
			FString jsonAttributes;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_role_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_role;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonAttributes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupMember_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupMember_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_groupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupMember_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_profileId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupMember_Parms, role), Z_Construct_UEnum_BCClientPlugin_ERole, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_jsonAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_jsonAttributes = { "jsonAttributes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupMember_Parms, jsonAttributes), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_jsonAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_jsonAttributes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupMember_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_jsonAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Update a member of the group.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - UPDATE_GROUP_MEMBER\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 * Param - profileId Profile ID of the member being updated.\n\x09 * Param - role Role of the member being updated (optional).\n\x09 * Param - jsonAttributes Attributes of the member being updated (optional).\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Update a member of the group.\n\nService Name - group\nService Operation - UPDATE_GROUP_MEMBER\n\nParam - groupId ID of the group.\nParam - profileId Profile ID of the member being updated.\nParam - role Role of the member being updated (optional).\nParam - jsonAttributes Attributes of the member being updated (optional)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "UpdateGroupMember", nullptr, nullptr, sizeof(BCGroupProxy_eventUpdateGroupMember_Parms), Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics
	{
		struct BCGroupProxy_eventUpdateGroupName_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			FString name;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupName_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupName_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::NewProp_groupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupName_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupName_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n\x09 * Updates a group's name.\n\x09 *\n\x09 * Service Name - group\n\x09 * Service Operation - UPDATE_GROUP_NAME\n\x09 *\n\x09 * Param - groupId ID of the group.\n\x09 * Param - name Name to apply.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Updates a group's name.\n\nService Name - group\nService Operation - UPDATE_GROUP_NAME\n\nParam - groupId ID of the group.\nParam - name Name to apply." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "UpdateGroupName", nullptr, nullptr, sizeof(BCGroupProxy_eventUpdateGroupName_Parms), Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics
	{
		struct BCGroupProxy_eventUpdateGroupSummaryData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			int32 version;
			FString jsonSummaryData;
			UBCGroupProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonSummaryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonSummaryData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupSummaryData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupSummaryData_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::NewProp_groupId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupSummaryData_Parms, version), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::NewProp_jsonSummaryData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::NewProp_jsonSummaryData = { "jsonSummaryData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupSummaryData_Parms, jsonSummaryData), METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::NewProp_jsonSummaryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::NewProp_jsonSummaryData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGroupProxy_eventUpdateGroupSummaryData_Parms, ReturnValue), Z_Construct_UClass_UBCGroupProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::NewProp_jsonSummaryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Group" },
		{ "Comment", "/**\n     * Update a froup's summary data\n     *\n     * Service Name - group\n     * Service Operation - UPDATE_GROUP_SUMMARY_DATA\n     *\n     * @param groupId ID of the group.\n     * @param version the version\n     * @param jsonSummaryData custom application data \n     * @param callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ToolTip", "Update a froup's summary data\n\nService Name - group\nService Operation - UPDATE_GROUP_SUMMARY_DATA\n\n@param groupId ID of the group.\n@param version the version\n@param jsonSummaryData custom application data\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGroupProxy, nullptr, "UpdateGroupSummaryData", nullptr, nullptr, sizeof(BCGroupProxy_eventUpdateGroupSummaryData_Parms), Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCGroupProxy_NoRegister()
	{
		return UBCGroupProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCGroupProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCGroupProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCGroupProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCGroupProxy_AcceptGroupInvitation, "AcceptGroupInvitation" }, // 2123151447
		{ &Z_Construct_UFunction_UBCGroupProxy_AddGroupMember, "AddGroupMember" }, // 1608365943
		{ &Z_Construct_UFunction_UBCGroupProxy_ApproveGroupJoinRequest, "ApproveGroupJoinRequest" }, // 4250307149
		{ &Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroup, "AutoJoinGroup" }, // 987563280
		{ &Z_Construct_UFunction_UBCGroupProxy_AutoJoinGroupMulti, "AutoJoinGroupMulti" }, // 3602198691
		{ &Z_Construct_UFunction_UBCGroupProxy_CancelGroupInvitation, "CancelGroupInvitation" }, // 4071240160
		{ &Z_Construct_UFunction_UBCGroupProxy_CreateGroup, "CreateGroup" }, // 3359961894
		{ &Z_Construct_UFunction_UBCGroupProxy_CreateGroupEntity, "CreateGroupEntity" }, // 3999192180
		{ &Z_Construct_UFunction_UBCGroupProxy_CreateGroupWithSummaryData, "CreateGroupWithSummaryData" }, // 3943346808
		{ &Z_Construct_UFunction_UBCGroupProxy_DeleteGroup, "DeleteGroup" }, // 604046460
		{ &Z_Construct_UFunction_UBCGroupProxy_DeleteGroupEntity, "DeleteGroupEntity" }, // 2275683156
		{ &Z_Construct_UFunction_UBCGroupProxy_GetMyGroups, "GetMyGroups" }, // 3729209379
		{ &Z_Construct_UFunction_UBCGroupProxy_GetRandomGroupsMatching, "GetRandomGroupsMatching" }, // 1547499742
		{ &Z_Construct_UFunction_UBCGroupProxy_IncrementGroupData, "IncrementGroupData" }, // 412232854
		{ &Z_Construct_UFunction_UBCGroupProxy_IncrementGroupEntityData, "IncrementGroupEntityData" }, // 970284726
		{ &Z_Construct_UFunction_UBCGroupProxy_InviteGroupMember, "InviteGroupMember" }, // 489473718
		{ &Z_Construct_UFunction_UBCGroupProxy_JoinGroup, "JoinGroup" }, // 3871971373
		{ &Z_Construct_UFunction_UBCGroupProxy_LeaveGroup, "LeaveGroup" }, // 467980904
		{ &Z_Construct_UFunction_UBCGroupProxy_ListGroupsPage, "ListGroupsPage" }, // 691510816
		{ &Z_Construct_UFunction_UBCGroupProxy_ListGroupsPageByOffset, "ListGroupsPageByOffset" }, // 4212298335
		{ &Z_Construct_UFunction_UBCGroupProxy_ListGroupsWithMember, "ListGroupsWithMember" }, // 322471394
		{ &Z_Construct_UFunction_UBCGroupProxy_ReadGroup, "ReadGroup" }, // 1492624509
		{ &Z_Construct_UFunction_UBCGroupProxy_ReadGroupData, "ReadGroupData" }, // 556096764
		{ &Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPage, "ReadGroupEntitiesPage" }, // 2435842780
		{ &Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntitiesPageByOffset, "ReadGroupEntitiesPageByOffset" }, // 158289441
		{ &Z_Construct_UFunction_UBCGroupProxy_ReadGroupEntity, "ReadGroupEntity" }, // 3417621451
		{ &Z_Construct_UFunction_UBCGroupProxy_ReadGroupMembers, "ReadGroupMembers" }, // 735494749
		{ &Z_Construct_UFunction_UBCGroupProxy_RejectGroupInvitation, "RejectGroupInvitation" }, // 3536797776
		{ &Z_Construct_UFunction_UBCGroupProxy_RejectGroupJoinRequest, "RejectGroupJoinRequest" }, // 1641676767
		{ &Z_Construct_UFunction_UBCGroupProxy_RemoveGroupMember, "RemoveGroupMember" }, // 3731696103
		{ &Z_Construct_UFunction_UBCGroupProxy_SetGroupOpen, "SetGroupOpen" }, // 4092851959
		{ &Z_Construct_UFunction_UBCGroupProxy_UpdateGroupData, "UpdateGroupData" }, // 1167778185
		{ &Z_Construct_UFunction_UBCGroupProxy_UpdateGroupEntityData, "UpdateGroupEntityData" }, // 446837125
		{ &Z_Construct_UFunction_UBCGroupProxy_UpdateGroupMember, "UpdateGroupMember" }, // 3355387446
		{ &Z_Construct_UFunction_UBCGroupProxy_UpdateGroupName, "UpdateGroupName" }, // 1676520760
		{ &Z_Construct_UFunction_UBCGroupProxy_UpdateGroupSummaryData, "UpdateGroupSummaryData" }, // 3930015429
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCGroupProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCGroupProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGroupProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCGroupProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCGroupProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCGroupProxy_Statics::ClassParams = {
		&UBCGroupProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBCGroupProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCGroupProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCGroupProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCGroupProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCGroupProxy, 369748930);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCGroupProxy>()
	{
		return UBCGroupProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCGroupProxy(Z_Construct_UClass_UBCGroupProxy, &UBCGroupProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCGroupProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCGroupProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
