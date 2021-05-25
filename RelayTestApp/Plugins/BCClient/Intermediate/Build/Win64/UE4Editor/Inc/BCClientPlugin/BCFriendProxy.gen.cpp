// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCFriendProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCFriendProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCFriendProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCFriendProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_EFriendPlatform();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_EBCAuthType();
// End Cross Module References
	DEFINE_FUNCTION(UBCFriendProxy::execReadFriendUserState)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_friendId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFriendProxy**)Z_Param__Result=UBCFriendProxy::ReadFriendUserState(Z_Param_brainCloudWrapper,Z_Param_friendId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFriendProxy::execGetUsersOnlineStatus)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_TARRAY_REF(FString,Z_Param_Out_profileIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFriendProxy**)Z_Param__Result=UBCFriendProxy::GetUsersOnlineStatus(Z_Param_brainCloudWrapper,Z_Param_Out_profileIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFriendProxy::execRemoveFriends)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_TARRAY_REF(FString,Z_Param_Out_profileIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFriendProxy**)Z_Param__Result=UBCFriendProxy::RemoveFriends(Z_Param_brainCloudWrapper,Z_Param_Out_profileIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFriendProxy::execAddFriends)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_TARRAY_REF(FString,Z_Param_Out_profileIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFriendProxy**)Z_Param__Result=UBCFriendProxy::AddFriends(Z_Param_brainCloudWrapper,Z_Param_Out_profileIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFriendProxy::execGetMySocialInfo)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_ENUM(EFriendPlatform,Z_Param_friendPlatform);
		P_GET_UBOOL(Z_Param_includeSummaryData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFriendProxy**)Z_Param__Result=UBCFriendProxy::GetMySocialInfo(Z_Param_brainCloudWrapper,EFriendPlatform(Z_Param_friendPlatform),Z_Param_includeSummaryData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFriendProxy::execListFriends)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_ENUM(EFriendPlatform,Z_Param_friendPlatform);
		P_GET_UBOOL(Z_Param_includeSummaryData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFriendProxy**)Z_Param__Result=UBCFriendProxy::ListFriends(Z_Param_brainCloudWrapper,EFriendPlatform(Z_Param_friendPlatform),Z_Param_includeSummaryData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFriendProxy::execFindUsersByUniversalIdStartingWith)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_searchText);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFriendProxy**)Z_Param__Result=UBCFriendProxy::FindUsersByUniversalIdStartingWith(Z_Param_brainCloudWrapper,Z_Param_searchText,Z_Param_maxResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFriendProxy::execFindUsersByNameStartingWith)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_searchText);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFriendProxy**)Z_Param__Result=UBCFriendProxy::FindUsersByNameStartingWith(Z_Param_brainCloudWrapper,Z_Param_searchText,Z_Param_maxResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFriendProxy::execFindUserByExactUniversalId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_searchText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFriendProxy**)Z_Param__Result=UBCFriendProxy::FindUserByExactUniversalId(Z_Param_brainCloudWrapper,Z_Param_searchText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFriendProxy::execFindUsersBySubstrName)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_searchText);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFriendProxy**)Z_Param__Result=UBCFriendProxy::FindUsersBySubstrName(Z_Param_brainCloudWrapper,Z_Param_searchText,Z_Param_maxResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFriendProxy::execFindUsersByExactName)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_searchText);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFriendProxy**)Z_Param__Result=UBCFriendProxy::FindUsersByExactName(Z_Param_brainCloudWrapper,Z_Param_searchText,Z_Param_maxResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFriendProxy::execReadFriendsEntities)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFriendProxy**)Z_Param__Result=UBCFriendProxy::ReadFriendsEntities(Z_Param_brainCloudWrapper,Z_Param_entityType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFriendProxy::execReadFriendEntity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FStrProperty,Z_Param_friendId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFriendProxy**)Z_Param__Result=UBCFriendProxy::ReadFriendEntity(Z_Param_brainCloudWrapper,Z_Param_entityId,Z_Param_friendId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFriendProxy::execGetSummaryDataForProfileId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFriendProxy**)Z_Param__Result=UBCFriendProxy::GetSummaryDataForProfileId(Z_Param_brainCloudWrapper,Z_Param_profileId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFriendProxy::execGetExternalIdForProfileId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_GET_PROPERTY(FStrProperty,Z_Param_authenticationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFriendProxy**)Z_Param__Result=UBCFriendProxy::GetExternalIdForProfileId(Z_Param_brainCloudWrapper,Z_Param_profileId,Z_Param_authenticationType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFriendProxy::execGetProfileInfoForExternalAuthId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_externalId);
		P_GET_PROPERTY(FStrProperty,Z_Param_externalAuthType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFriendProxy**)Z_Param__Result=UBCFriendProxy::GetProfileInfoForExternalAuthId(Z_Param_brainCloudWrapper,Z_Param_externalId,Z_Param_externalAuthType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFriendProxy::execGetProfileInfoForCredential)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_externalId);
		P_GET_ENUM(EBCAuthType,Z_Param_authenticationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFriendProxy**)Z_Param__Result=UBCFriendProxy::GetProfileInfoForCredential(Z_Param_brainCloudWrapper,Z_Param_externalId,EBCAuthType(Z_Param_authenticationType));
		P_NATIVE_END;
	}
	void UBCFriendProxy::StaticRegisterNativesUBCFriendProxy()
	{
		UClass* Class = UBCFriendProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFriends", &UBCFriendProxy::execAddFriends },
			{ "FindUserByExactUniversalId", &UBCFriendProxy::execFindUserByExactUniversalId },
			{ "FindUsersByExactName", &UBCFriendProxy::execFindUsersByExactName },
			{ "FindUsersByNameStartingWith", &UBCFriendProxy::execFindUsersByNameStartingWith },
			{ "FindUsersBySubstrName", &UBCFriendProxy::execFindUsersBySubstrName },
			{ "FindUsersByUniversalIdStartingWith", &UBCFriendProxy::execFindUsersByUniversalIdStartingWith },
			{ "GetExternalIdForProfileId", &UBCFriendProxy::execGetExternalIdForProfileId },
			{ "GetMySocialInfo", &UBCFriendProxy::execGetMySocialInfo },
			{ "GetProfileInfoForCredential", &UBCFriendProxy::execGetProfileInfoForCredential },
			{ "GetProfileInfoForExternalAuthId", &UBCFriendProxy::execGetProfileInfoForExternalAuthId },
			{ "GetSummaryDataForProfileId", &UBCFriendProxy::execGetSummaryDataForProfileId },
			{ "GetUsersOnlineStatus", &UBCFriendProxy::execGetUsersOnlineStatus },
			{ "ListFriends", &UBCFriendProxy::execListFriends },
			{ "ReadFriendEntity", &UBCFriendProxy::execReadFriendEntity },
			{ "ReadFriendsEntities", &UBCFriendProxy::execReadFriendsEntities },
			{ "ReadFriendUserState", &UBCFriendProxy::execReadFriendUserState },
			{ "RemoveFriends", &UBCFriendProxy::execRemoveFriends },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCFriendProxy_AddFriends_Statics
	{
		struct BCFriendProxy_eventAddFriends_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TArray<FString> profileIds;
			UBCFriendProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_profileIds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_AddFriends_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventAddFriends_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFriendProxy_AddFriends_Statics::NewProp_profileIds_Inner = { "profileIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_AddFriends_Statics::NewProp_profileIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCFriendProxy_AddFriends_Statics::NewProp_profileIds = { "profileIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventAddFriends_Parms, profileIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_AddFriends_Statics::NewProp_profileIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_AddFriends_Statics::NewProp_profileIds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_AddFriends_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventAddFriends_Parms, ReturnValue), Z_Construct_UClass_UBCFriendProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFriendProxy_AddFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_AddFriends_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_AddFriends_Statics::NewProp_profileIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_AddFriends_Statics::NewProp_profileIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_AddFriends_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_AddFriends_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Friend" },
		{ "Comment", "/**\n\x09* Links the current user and the specified users as brainCloud friends.\n\x09*\n\x09* Service Name - Friend\n\x09* Service Operation - ADD_FRIENDS\n\x09*\n\x09* Param - profileIds Collection of profile IDs.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFriendProxy.h" },
		{ "ToolTip", "Links the current user and the specified users as brainCloud friends.\n\nService Name - Friend\nService Operation - ADD_FRIENDS\n\nParam - profileIds Collection of profile IDs." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFriendProxy_AddFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFriendProxy, nullptr, "AddFriends", nullptr, nullptr, sizeof(BCFriendProxy_eventAddFriends_Parms), Z_Construct_UFunction_UBCFriendProxy_AddFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_AddFriends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_AddFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_AddFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFriendProxy_AddFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFriendProxy_AddFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFriendProxy_FindUserByExactUniversalId_Statics
	{
		struct BCFriendProxy_eventFindUserByExactUniversalId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString searchText;
			UBCFriendProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_searchText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_FindUserByExactUniversalId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventFindUserByExactUniversalId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_FindUserByExactUniversalId_Statics::NewProp_searchText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFriendProxy_FindUserByExactUniversalId_Statics::NewProp_searchText = { "searchText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventFindUserByExactUniversalId_Parms, searchText), METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_FindUserByExactUniversalId_Statics::NewProp_searchText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_FindUserByExactUniversalId_Statics::NewProp_searchText_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_FindUserByExactUniversalId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventFindUserByExactUniversalId_Parms, ReturnValue), Z_Construct_UClass_UBCFriendProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFriendProxy_FindUserByExactUniversalId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_FindUserByExactUniversalId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_FindUserByExactUniversalId_Statics::NewProp_searchText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_FindUserByExactUniversalId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_FindUserByExactUniversalId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Friend" },
		{ "Comment", "/**\n\x09* Retrieves profile information for the partial matches of the specified text.\n\x09*\n\x09* Service Name - Friend\n\x09* Service Operation - FIND_USER_BY_EXACT_UNIVERSAL_ID\n\x09*\n\x09* Param - searchText Universal ID text on which to search.\n\x09* Param - maxResults Maximum number of results to return. If there are more the message\n\x09*                    \"Too many results to return.\" is sent back instead of the users.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFriendProxy.h" },
		{ "ToolTip", "Retrieves profile information for the partial matches of the specified text.\n\nService Name - Friend\nService Operation - FIND_USER_BY_EXACT_UNIVERSAL_ID\n\nParam - searchText Universal ID text on which to search.\nParam - maxResults Maximum number of results to return. If there are more the message\n                   \"Too many results to return.\" is sent back instead of the users." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFriendProxy_FindUserByExactUniversalId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFriendProxy, nullptr, "FindUserByExactUniversalId", nullptr, nullptr, sizeof(BCFriendProxy_eventFindUserByExactUniversalId_Parms), Z_Construct_UFunction_UBCFriendProxy_FindUserByExactUniversalId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_FindUserByExactUniversalId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_FindUserByExactUniversalId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_FindUserByExactUniversalId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFriendProxy_FindUserByExactUniversalId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFriendProxy_FindUserByExactUniversalId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName_Statics
	{
		struct BCFriendProxy_eventFindUsersByExactName_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString searchText;
			int32 maxResults;
			UBCFriendProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_searchText;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxResults;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventFindUsersByExactName_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName_Statics::NewProp_searchText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName_Statics::NewProp_searchText = { "searchText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventFindUsersByExactName_Parms, searchText), METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName_Statics::NewProp_searchText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName_Statics::NewProp_searchText_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName_Statics::NewProp_maxResults = { "maxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventFindUsersByExactName_Parms, maxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventFindUsersByExactName_Parms, ReturnValue), Z_Construct_UClass_UBCFriendProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName_Statics::NewProp_searchText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName_Statics::NewProp_maxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Friend" },
		{ "Comment", "/**\n\x09* Finds a list of users matching the search text by performing an exact match search\n\x09*\n\x09* Service Name - friend\n\x09* Service Operation - FIND_USERS_BY_EXACT_NAME\n\x09*\n\x09* Param - searchText The string to search for.\n\x09* Param - maxResults  Maximum number of results to return.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFriendProxy.h" },
		{ "ToolTip", "Finds a list of users matching the search text by performing an exact match search\n\nService Name - friend\nService Operation - FIND_USERS_BY_EXACT_NAME\n\nParam - searchText The string to search for.\nParam - maxResults  Maximum number of results to return." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFriendProxy, nullptr, "FindUsersByExactName", nullptr, nullptr, sizeof(BCFriendProxy_eventFindUsersByExactName_Parms), Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith_Statics
	{
		struct BCFriendProxy_eventFindUsersByNameStartingWith_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString searchText;
			int32 maxResults;
			UBCFriendProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_searchText;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxResults;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventFindUsersByNameStartingWith_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith_Statics::NewProp_searchText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith_Statics::NewProp_searchText = { "searchText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventFindUsersByNameStartingWith_Parms, searchText), METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith_Statics::NewProp_searchText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith_Statics::NewProp_searchText_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith_Statics::NewProp_maxResults = { "maxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventFindUsersByNameStartingWith_Parms, maxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventFindUsersByNameStartingWith_Parms, ReturnValue), Z_Construct_UClass_UBCFriendProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith_Statics::NewProp_searchText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith_Statics::NewProp_maxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Friend" },
		{ "Comment", "/**\n\x09* Retrieves profiles for the partial matches of the specified Universal Id text.\n\x09*\n\x09* Service Name - Friend\n\x09* Service Operation - FIND_USERS_BY_NAME_STARTING_WITH\n\x09*\n\x09* Param - searchText Universal ID text on which to search.\n\x09* Param - maxResults Maximum number of results to return. If there are more the message\n\x09*                    \"Too many results to return.\" is sent back instead of the users.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFriendProxy.h" },
		{ "ToolTip", "Retrieves profiles for the partial matches of the specified Universal Id text.\n\nService Name - Friend\nService Operation - FIND_USERS_BY_NAME_STARTING_WITH\n\nParam - searchText Universal ID text on which to search.\nParam - maxResults Maximum number of results to return. If there are more the message\n                   \"Too many results to return.\" is sent back instead of the users." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFriendProxy, nullptr, "FindUsersByNameStartingWith", nullptr, nullptr, sizeof(BCFriendProxy_eventFindUsersByNameStartingWith_Parms), Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName_Statics
	{
		struct BCFriendProxy_eventFindUsersBySubstrName_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString searchText;
			int32 maxResults;
			UBCFriendProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_searchText;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxResults;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventFindUsersBySubstrName_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName_Statics::NewProp_searchText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName_Statics::NewProp_searchText = { "searchText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventFindUsersBySubstrName_Parms, searchText), METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName_Statics::NewProp_searchText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName_Statics::NewProp_searchText_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName_Statics::NewProp_maxResults = { "maxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventFindUsersBySubstrName_Parms, maxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventFindUsersBySubstrName_Parms, ReturnValue), Z_Construct_UClass_UBCFriendProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName_Statics::NewProp_searchText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName_Statics::NewProp_maxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Friend" },
		{ "Comment", "/**\n\x09* Finds a list of users matching the search text by performing a substring\n\x09* search of all user names.\n\x09*\n\x09* Service Name - friend\n\x09* Service Operation - FIND_USERS_BY_SUBSTR_NAME\n\x09*\n\x09* Param - searchText The string to search for.\n\x09* Param - maxResults  Maximum number of results to return.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFriendProxy.h" },
		{ "ToolTip", "Finds a list of users matching the search text by performing a substring\nsearch of all user names.\n\nService Name - friend\nService Operation - FIND_USERS_BY_SUBSTR_NAME\n\nParam - searchText The string to search for.\nParam - maxResults  Maximum number of results to return." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFriendProxy, nullptr, "FindUsersBySubstrName", nullptr, nullptr, sizeof(BCFriendProxy_eventFindUsersBySubstrName_Parms), Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith_Statics
	{
		struct BCFriendProxy_eventFindUsersByUniversalIdStartingWith_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString searchText;
			int32 maxResults;
			UBCFriendProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_searchText;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxResults;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventFindUsersByUniversalIdStartingWith_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith_Statics::NewProp_searchText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith_Statics::NewProp_searchText = { "searchText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventFindUsersByUniversalIdStartingWith_Parms, searchText), METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith_Statics::NewProp_searchText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith_Statics::NewProp_searchText_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith_Statics::NewProp_maxResults = { "maxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventFindUsersByUniversalIdStartingWith_Parms, maxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventFindUsersByUniversalIdStartingWith_Parms, ReturnValue), Z_Construct_UClass_UBCFriendProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith_Statics::NewProp_searchText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith_Statics::NewProp_maxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Friend" },
		{ "Comment", "/**\n\x09* Retrieves profiles for the partial matches of the specified Universal Id text.\n\x09*\n\x09* Service Name - Friend\n\x09* Service Operation - FIND_USERS_BY_UNIVERSAL_ID_STARTING_WITH\n\x09*\n\x09* Param - searchText Universal ID text on which to search.\n\x09* Param - maxResults Maximum number of results to return. If there are more the message\n\x09*                    \"Too many results to return.\" is sent back instead of the users.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFriendProxy.h" },
		{ "ToolTip", "Retrieves profiles for the partial matches of the specified Universal Id text.\n\nService Name - Friend\nService Operation - FIND_USERS_BY_UNIVERSAL_ID_STARTING_WITH\n\nParam - searchText Universal ID text on which to search.\nParam - maxResults Maximum number of results to return. If there are more the message\n                   \"Too many results to return.\" is sent back instead of the users." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFriendProxy, nullptr, "FindUsersByUniversalIdStartingWith", nullptr, nullptr, sizeof(BCFriendProxy_eventFindUsersByUniversalIdStartingWith_Parms), Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics
	{
		struct BCFriendProxy_eventGetExternalIdForProfileId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString profileId;
			FString authenticationType;
			UBCFriendProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_authenticationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_authenticationType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetExternalIdForProfileId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetExternalIdForProfileId_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::NewProp_profileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::NewProp_authenticationType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::NewProp_authenticationType = { "authenticationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetExternalIdForProfileId_Parms, authenticationType), METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::NewProp_authenticationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::NewProp_authenticationType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetExternalIdForProfileId_Parms, ReturnValue), Z_Construct_UClass_UBCFriendProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::NewProp_authenticationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Friend" },
		{ "Comment", "/**\n\x09* Retrieves the external ID for the specified user profile ID on the specified social platform.\n\x09*\n\x09* Param - profileId Profile ID.\n\x09* Param - authenticationType Associated authentication type.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFriendProxy.h" },
		{ "ToolTip", "Retrieves the external ID for the specified user profile ID on the specified social platform.\n\nParam - profileId Profile ID.\nParam - authenticationType Associated authentication type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFriendProxy, nullptr, "GetExternalIdForProfileId", nullptr, nullptr, sizeof(BCFriendProxy_eventGetExternalIdForProfileId_Parms), Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics
	{
		struct BCFriendProxy_eventGetMySocialInfo_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			EFriendPlatform friendPlatform;
			bool includeSummaryData;
			UBCFriendProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_friendPlatform_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_friendPlatform;
		static void NewProp_includeSummaryData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeSummaryData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetMySocialInfo_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics::NewProp_friendPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics::NewProp_friendPlatform = { "friendPlatform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetMySocialInfo_Parms, friendPlatform), Z_Construct_UEnum_BCClientPlugin_EFriendPlatform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics::NewProp_includeSummaryData_SetBit(void* Obj)
	{
		((BCFriendProxy_eventGetMySocialInfo_Parms*)Obj)->includeSummaryData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics::NewProp_includeSummaryData = { "includeSummaryData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCFriendProxy_eventGetMySocialInfo_Parms), &Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics::NewProp_includeSummaryData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetMySocialInfo_Parms, ReturnValue), Z_Construct_UClass_UBCFriendProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics::NewProp_friendPlatform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics::NewProp_friendPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics::NewProp_includeSummaryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Friend" },
		{ "Comment", "/**\n\x09* Retrieves the social information associated with the logged in user. Includes summary data if includeSummaryData is true.\n\x09*\n\x09* Service Name - Friend\n\x09* Service Operation - GET_MY_SOCIAL_INFO\n\x09*\n\x09* Param - friendPlatform Friend platform to query.\n\x09* Param - includeSummaryData  True if including summary data; false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFriendProxy.h" },
		{ "ToolTip", "Retrieves the social information associated with the logged in user. Includes summary data if includeSummaryData is true.\n\nService Name - Friend\nService Operation - GET_MY_SOCIAL_INFO\n\nParam - friendPlatform Friend platform to query.\nParam - includeSummaryData  True if including summary data; false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFriendProxy, nullptr, "GetMySocialInfo", nullptr, nullptr, sizeof(BCFriendProxy_eventGetMySocialInfo_Parms), Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics
	{
		struct BCFriendProxy_eventGetProfileInfoForCredential_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString externalId;
			EBCAuthType authenticationType;
			UBCFriendProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_externalId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_externalId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_authenticationType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_authenticationType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetProfileInfoForCredential_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::NewProp_externalId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::NewProp_externalId = { "externalId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetProfileInfoForCredential_Parms, externalId), METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::NewProp_externalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::NewProp_externalId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::NewProp_authenticationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::NewProp_authenticationType = { "authenticationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetProfileInfoForCredential_Parms, authenticationType), Z_Construct_UEnum_BCClientPlugin_EBCAuthType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetProfileInfoForCredential_Parms, ReturnValue), Z_Construct_UClass_UBCFriendProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::NewProp_externalId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::NewProp_authenticationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::NewProp_authenticationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Friend" },
		{ "Comment", "/**\n\x09* Retrieves profile information for the specified user.\n\x09*\n\x09* Service Name - friend\n\x09* Service Operation - GET_PROFILE_INFO_FOR_CREDENTIAL\n\x09*\n\x09* Param - externalId The users's external ID\n\x09* Param - authenticationType The authentication type of the user ID\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFriendProxy.h" },
		{ "ToolTip", "Retrieves profile information for the specified user.\n\nService Name - friend\nService Operation - GET_PROFILE_INFO_FOR_CREDENTIAL\n\nParam - externalId The users's external ID\nParam - authenticationType The authentication type of the user ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFriendProxy, nullptr, "GetProfileInfoForCredential", nullptr, nullptr, sizeof(BCFriendProxy_eventGetProfileInfoForCredential_Parms), Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics
	{
		struct BCFriendProxy_eventGetProfileInfoForExternalAuthId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString externalId;
			FString externalAuthType;
			UBCFriendProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_externalId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_externalId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_externalAuthType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_externalAuthType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetProfileInfoForExternalAuthId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::NewProp_externalId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::NewProp_externalId = { "externalId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetProfileInfoForExternalAuthId_Parms, externalId), METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::NewProp_externalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::NewProp_externalId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::NewProp_externalAuthType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::NewProp_externalAuthType = { "externalAuthType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetProfileInfoForExternalAuthId_Parms, externalAuthType), METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::NewProp_externalAuthType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::NewProp_externalAuthType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetProfileInfoForExternalAuthId_Parms, ReturnValue), Z_Construct_UClass_UBCFriendProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::NewProp_externalId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::NewProp_externalAuthType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Friend" },
		{ "Comment", "/**\n\x09* Retrieves profile information for the specified external auth user.\n\x09*\n\x09* Service Name - friend\n\x09* Service Operation - GET_PROFILE_INFO_FOR_EXTERNAL_AUTH_ID\n\x09*\n\x09* Param - externalId External ID of the user to find\n\x09* Param - externalAuthType The external authentication type used for this users's external ID\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFriendProxy.h" },
		{ "ToolTip", "Retrieves profile information for the specified external auth user.\n\nService Name - friend\nService Operation - GET_PROFILE_INFO_FOR_EXTERNAL_AUTH_ID\n\nParam - externalId External ID of the user to find\nParam - externalAuthType The external authentication type used for this users's external ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFriendProxy, nullptr, "GetProfileInfoForExternalAuthId", nullptr, nullptr, sizeof(BCFriendProxy_eventGetProfileInfoForExternalAuthId_Parms), Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFriendProxy_GetSummaryDataForProfileId_Statics
	{
		struct BCFriendProxy_eventGetSummaryDataForProfileId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString profileId;
			UBCFriendProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetSummaryDataForProfileId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetSummaryDataForProfileId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_GetSummaryDataForProfileId_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetSummaryDataForProfileId_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetSummaryDataForProfileId_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_GetSummaryDataForProfileId_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_GetSummaryDataForProfileId_Statics::NewProp_profileId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetSummaryDataForProfileId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetSummaryDataForProfileId_Parms, ReturnValue), Z_Construct_UClass_UBCFriendProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFriendProxy_GetSummaryDataForProfileId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetSummaryDataForProfileId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetSummaryDataForProfileId_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetSummaryDataForProfileId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_GetSummaryDataForProfileId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Friend" },
		{ "Comment", "/**\n\x09* Returns user state of a particular user.\n\x09*\n\x09* Service Name - Friend\n\x09* Service Operation - GET_SUMMARY_DATA_FOR_PROFILE_ID\n\x09*\n\x09* Param - profileId Profile Id of user to retrieve user state for.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFriendProxy.h" },
		{ "ToolTip", "Returns user state of a particular user.\n\nService Name - Friend\nService Operation - GET_SUMMARY_DATA_FOR_PROFILE_ID\n\nParam - profileId Profile Id of user to retrieve user state for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFriendProxy_GetSummaryDataForProfileId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFriendProxy, nullptr, "GetSummaryDataForProfileId", nullptr, nullptr, sizeof(BCFriendProxy_eventGetSummaryDataForProfileId_Parms), Z_Construct_UFunction_UBCFriendProxy_GetSummaryDataForProfileId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_GetSummaryDataForProfileId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_GetSummaryDataForProfileId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_GetSummaryDataForProfileId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFriendProxy_GetSummaryDataForProfileId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFriendProxy_GetSummaryDataForProfileId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus_Statics
	{
		struct BCFriendProxy_eventGetUsersOnlineStatus_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TArray<FString> profileIds;
			UBCFriendProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_profileIds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetUsersOnlineStatus_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus_Statics::NewProp_profileIds_Inner = { "profileIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus_Statics::NewProp_profileIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus_Statics::NewProp_profileIds = { "profileIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetUsersOnlineStatus_Parms, profileIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus_Statics::NewProp_profileIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus_Statics::NewProp_profileIds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventGetUsersOnlineStatus_Parms, ReturnValue), Z_Construct_UClass_UBCFriendProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus_Statics::NewProp_profileIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus_Statics::NewProp_profileIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Friend" },
		{ "Comment", "/**\n\x09* Get users online status\n\x09*\n\x09* Service Name - Friend\n\x09* Service Operation - GET_USERS_ONLINE_STATUS\n\x09*\n\x09* Param - profileIds Collection of profile IDs.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFriendProxy.h" },
		{ "ToolTip", "Get users online status\n\nService Name - Friend\nService Operation - GET_USERS_ONLINE_STATUS\n\nParam - profileIds Collection of profile IDs." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFriendProxy, nullptr, "GetUsersOnlineStatus", nullptr, nullptr, sizeof(BCFriendProxy_eventGetUsersOnlineStatus_Parms), Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics
	{
		struct BCFriendProxy_eventListFriends_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			EFriendPlatform friendPlatform;
			bool includeSummaryData;
			UBCFriendProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_friendPlatform_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_friendPlatform;
		static void NewProp_includeSummaryData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeSummaryData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventListFriends_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics::NewProp_friendPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics::NewProp_friendPlatform = { "friendPlatform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventListFriends_Parms, friendPlatform), Z_Construct_UEnum_BCClientPlugin_EFriendPlatform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics::NewProp_includeSummaryData_SetBit(void* Obj)
	{
		((BCFriendProxy_eventListFriends_Parms*)Obj)->includeSummaryData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics::NewProp_includeSummaryData = { "includeSummaryData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCFriendProxy_eventListFriends_Parms), &Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics::NewProp_includeSummaryData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventListFriends_Parms, ReturnValue), Z_Construct_UClass_UBCFriendProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics::NewProp_friendPlatform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics::NewProp_friendPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics::NewProp_includeSummaryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Friend" },
		{ "Comment", "/**\n\x09* Retrieves a list of user and friend platform information for all friends of the current user.\n\x09*\n\x09* Service Name - Friend\n\x09* Service Operation - LIST_FRIENDS\n\x09*\n\x09* Param - friendPlatform Friend platform to query.\n\x09* Param - includeSummaryData  True if including summary data; false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFriendProxy.h" },
		{ "ToolTip", "Retrieves a list of user and friend platform information for all friends of the current user.\n\nService Name - Friend\nService Operation - LIST_FRIENDS\n\nParam - friendPlatform Friend platform to query.\nParam - includeSummaryData  True if including summary data; false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFriendProxy, nullptr, "ListFriends", nullptr, nullptr, sizeof(BCFriendProxy_eventListFriends_Parms), Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFriendProxy_ListFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFriendProxy_ListFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics
	{
		struct BCFriendProxy_eventReadFriendEntity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityId;
			FString friendId;
			UBCFriendProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_friendId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_friendId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventReadFriendEntity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventReadFriendEntity_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::NewProp_entityId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::NewProp_friendId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::NewProp_friendId = { "friendId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventReadFriendEntity_Parms, friendId), METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::NewProp_friendId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::NewProp_friendId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventReadFriendEntity_Parms, ReturnValue), Z_Construct_UClass_UBCFriendProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::NewProp_friendId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Friend" },
		{ "Comment", "/**\n\x09* Returns a particular entity of a particular friend.\n\x09*\n\x09* Service Name - Friend\n\x09* Service Operation - ReadFriendEntity\n\x09*\n\x09* Param - entityId Id of entity to retrieve.\n\x09* Param - friendId Profile Id of friend who owns entity.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFriendProxy.h" },
		{ "ToolTip", "Returns a particular entity of a particular friend.\n\nService Name - Friend\nService Operation - ReadFriendEntity\n\nParam - entityId Id of entity to retrieve.\nParam - friendId Profile Id of friend who owns entity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFriendProxy, nullptr, "ReadFriendEntity", nullptr, nullptr, sizeof(BCFriendProxy_eventReadFriendEntity_Parms), Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFriendProxy_ReadFriendsEntities_Statics
	{
		struct BCFriendProxy_eventReadFriendsEntities_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			UBCFriendProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_ReadFriendsEntities_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventReadFriendsEntities_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_ReadFriendsEntities_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFriendProxy_ReadFriendsEntities_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventReadFriendsEntities_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_ReadFriendsEntities_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_ReadFriendsEntities_Statics::NewProp_entityType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_ReadFriendsEntities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventReadFriendsEntities_Parms, ReturnValue), Z_Construct_UClass_UBCFriendProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFriendProxy_ReadFriendsEntities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_ReadFriendsEntities_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_ReadFriendsEntities_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_ReadFriendsEntities_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_ReadFriendsEntities_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Friend" },
		{ "Comment", "/**\n\x09* Returns entities of all friends optionally based on type.\n\x09*\n\x09* Service Name - Friend\n\x09* Service Operation - ReadFriendsEntities\n\x09*\n\x09* Param - entityType Types of entities to retrieve.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFriendProxy.h" },
		{ "ToolTip", "Returns entities of all friends optionally based on type.\n\nService Name - Friend\nService Operation - ReadFriendsEntities\n\nParam - entityType Types of entities to retrieve." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFriendProxy_ReadFriendsEntities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFriendProxy, nullptr, "ReadFriendsEntities", nullptr, nullptr, sizeof(BCFriendProxy_eventReadFriendsEntities_Parms), Z_Construct_UFunction_UBCFriendProxy_ReadFriendsEntities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_ReadFriendsEntities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_ReadFriendsEntities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_ReadFriendsEntities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFriendProxy_ReadFriendsEntities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFriendProxy_ReadFriendsEntities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFriendProxy_ReadFriendUserState_Statics
	{
		struct BCFriendProxy_eventReadFriendUserState_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString friendId;
			UBCFriendProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_friendId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_friendId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_ReadFriendUserState_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventReadFriendUserState_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_ReadFriendUserState_Statics::NewProp_friendId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFriendProxy_ReadFriendUserState_Statics::NewProp_friendId = { "friendId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventReadFriendUserState_Parms, friendId), METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_ReadFriendUserState_Statics::NewProp_friendId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_ReadFriendUserState_Statics::NewProp_friendId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_ReadFriendUserState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventReadFriendUserState_Parms, ReturnValue), Z_Construct_UClass_UBCFriendProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFriendProxy_ReadFriendUserState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_ReadFriendUserState_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_ReadFriendUserState_Statics::NewProp_friendId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_ReadFriendUserState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_ReadFriendUserState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Friend" },
		{ "Comment", "/**\n\x09* Read a friend's user state.\n\x09*\n\x09* Service Name - PlayerState\n\x09* Service Operation - ReadFriendsPlayerState\n\x09*\n\x09* @param friendId Target friend\n\x09* @param callback Method to be invoked when the server response is received.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFriendProxy.h" },
		{ "ToolTip", "Read a friend's user state.\n\nService Name - PlayerState\nService Operation - ReadFriendsPlayerState\n\n@param friendId Target friend\n@param callback Method to be invoked when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFriendProxy_ReadFriendUserState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFriendProxy, nullptr, "ReadFriendUserState", nullptr, nullptr, sizeof(BCFriendProxy_eventReadFriendUserState_Parms), Z_Construct_UFunction_UBCFriendProxy_ReadFriendUserState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_ReadFriendUserState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_ReadFriendUserState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_ReadFriendUserState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFriendProxy_ReadFriendUserState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFriendProxy_ReadFriendUserState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFriendProxy_RemoveFriends_Statics
	{
		struct BCFriendProxy_eventRemoveFriends_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TArray<FString> profileIds;
			UBCFriendProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_profileIds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_RemoveFriends_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventRemoveFriends_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFriendProxy_RemoveFriends_Statics::NewProp_profileIds_Inner = { "profileIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_RemoveFriends_Statics::NewProp_profileIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCFriendProxy_RemoveFriends_Statics::NewProp_profileIds = { "profileIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventRemoveFriends_Parms, profileIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_RemoveFriends_Statics::NewProp_profileIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_RemoveFriends_Statics::NewProp_profileIds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFriendProxy_RemoveFriends_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFriendProxy_eventRemoveFriends_Parms, ReturnValue), Z_Construct_UClass_UBCFriendProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFriendProxy_RemoveFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_RemoveFriends_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_RemoveFriends_Statics::NewProp_profileIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_RemoveFriends_Statics::NewProp_profileIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFriendProxy_RemoveFriends_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFriendProxy_RemoveFriends_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Friend" },
		{ "Comment", "/**\n\x09* Unlinks the current user and the specified users as brainCloud friends.\n\x09*\n\x09* Service Name - Friend\n\x09* Service Operation - REMOVE_FRIENDS\n\x09*\n\x09* Param - profileIds Collection of profile IDs.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFriendProxy.h" },
		{ "ToolTip", "Unlinks the current user and the specified users as brainCloud friends.\n\nService Name - Friend\nService Operation - REMOVE_FRIENDS\n\nParam - profileIds Collection of profile IDs." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFriendProxy_RemoveFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFriendProxy, nullptr, "RemoveFriends", nullptr, nullptr, sizeof(BCFriendProxy_eventRemoveFriends_Parms), Z_Construct_UFunction_UBCFriendProxy_RemoveFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_RemoveFriends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFriendProxy_RemoveFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFriendProxy_RemoveFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFriendProxy_RemoveFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFriendProxy_RemoveFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCFriendProxy_NoRegister()
	{
		return UBCFriendProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCFriendProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCFriendProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCFriendProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCFriendProxy_AddFriends, "AddFriends" }, // 727168567
		{ &Z_Construct_UFunction_UBCFriendProxy_FindUserByExactUniversalId, "FindUserByExactUniversalId" }, // 346206359
		{ &Z_Construct_UFunction_UBCFriendProxy_FindUsersByExactName, "FindUsersByExactName" }, // 53384511
		{ &Z_Construct_UFunction_UBCFriendProxy_FindUsersByNameStartingWith, "FindUsersByNameStartingWith" }, // 4029758110
		{ &Z_Construct_UFunction_UBCFriendProxy_FindUsersBySubstrName, "FindUsersBySubstrName" }, // 3002031656
		{ &Z_Construct_UFunction_UBCFriendProxy_FindUsersByUniversalIdStartingWith, "FindUsersByUniversalIdStartingWith" }, // 4174683608
		{ &Z_Construct_UFunction_UBCFriendProxy_GetExternalIdForProfileId, "GetExternalIdForProfileId" }, // 4209236533
		{ &Z_Construct_UFunction_UBCFriendProxy_GetMySocialInfo, "GetMySocialInfo" }, // 2465438450
		{ &Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForCredential, "GetProfileInfoForCredential" }, // 2077628077
		{ &Z_Construct_UFunction_UBCFriendProxy_GetProfileInfoForExternalAuthId, "GetProfileInfoForExternalAuthId" }, // 310355396
		{ &Z_Construct_UFunction_UBCFriendProxy_GetSummaryDataForProfileId, "GetSummaryDataForProfileId" }, // 897927913
		{ &Z_Construct_UFunction_UBCFriendProxy_GetUsersOnlineStatus, "GetUsersOnlineStatus" }, // 4243296878
		{ &Z_Construct_UFunction_UBCFriendProxy_ListFriends, "ListFriends" }, // 1372760703
		{ &Z_Construct_UFunction_UBCFriendProxy_ReadFriendEntity, "ReadFriendEntity" }, // 819817986
		{ &Z_Construct_UFunction_UBCFriendProxy_ReadFriendsEntities, "ReadFriendsEntities" }, // 542293078
		{ &Z_Construct_UFunction_UBCFriendProxy_ReadFriendUserState, "ReadFriendUserState" }, // 2345079432
		{ &Z_Construct_UFunction_UBCFriendProxy_RemoveFriends, "RemoveFriends" }, // 2566778155
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCFriendProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCFriendProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFriendProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCFriendProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCFriendProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCFriendProxy_Statics::ClassParams = {
		&UBCFriendProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCFriendProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCFriendProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCFriendProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCFriendProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCFriendProxy, 1330436234);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCFriendProxy>()
	{
		return UBCFriendProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCFriendProxy(Z_Construct_UClass_UBCFriendProxy, &UBCFriendProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCFriendProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCFriendProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
