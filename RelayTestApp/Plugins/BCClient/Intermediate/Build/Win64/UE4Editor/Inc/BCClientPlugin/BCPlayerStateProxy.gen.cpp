// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCPlayerStateProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCPlayerStateProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCPlayerStateProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCPlayerStateProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCPlayerStateProxy::execUpdateLanguageCode)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_languageCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStateProxy**)Z_Param__Result=UBCPlayerStateProxy::UpdateLanguageCode(Z_Param_brainCloudWrapper,Z_Param_languageCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStateProxy::execUpdateTimeZoneOffset)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeZoneOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStateProxy**)Z_Param__Result=UBCPlayerStateProxy::UpdateTimeZoneOffset(Z_Param_brainCloudWrapper,Z_Param_timeZoneOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStateProxy::execSetUserStatus)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_statusName);
		P_GET_PROPERTY(FIntProperty,Z_Param_durationSecs);
		P_GET_PROPERTY(FStrProperty,Z_Param_details);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStateProxy**)Z_Param__Result=UBCPlayerStateProxy::SetUserStatus(Z_Param_brainCloudWrapper,Z_Param_statusName,Z_Param_durationSecs,Z_Param_details);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStateProxy::execGetUserStatus)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_statusName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStateProxy**)Z_Param__Result=UBCPlayerStateProxy::GetUserStatus(Z_Param_brainCloudWrapper,Z_Param_statusName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStateProxy::execExtendUserStatus)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_statusName);
		P_GET_PROPERTY(FIntProperty,Z_Param_additionalSecs);
		P_GET_PROPERTY(FStrProperty,Z_Param_details);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStateProxy**)Z_Param__Result=UBCPlayerStateProxy::ExtendUserStatus(Z_Param_brainCloudWrapper,Z_Param_statusName,Z_Param_additionalSecs,Z_Param_details);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStateProxy::execClearUserStatus)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_statusName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStateProxy**)Z_Param__Result=UBCPlayerStateProxy::ClearUserStatus(Z_Param_brainCloudWrapper,Z_Param_statusName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStateProxy::execUpdateContactEmail)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_contactEmail);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStateProxy**)Z_Param__Result=UBCPlayerStateProxy::UpdateContactEmail(Z_Param_brainCloudWrapper,Z_Param_contactEmail);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStateProxy::execUpdateUserPictureUrl)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_pictureUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStateProxy**)Z_Param__Result=UBCPlayerStateProxy::UpdateUserPictureUrl(Z_Param_brainCloudWrapper,Z_Param_pictureUrl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStateProxy::execRemoveAttributes)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_TARRAY_REF(FString,Z_Param_Out_attributeNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStateProxy**)Z_Param__Result=UBCPlayerStateProxy::RemoveAttributes(Z_Param_brainCloudWrapper,Z_Param_Out_attributeNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStateProxy::execUpdateAttributes)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonAttributes);
		P_GET_UBOOL(Z_Param_wipeExisting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStateProxy**)Z_Param__Result=UBCPlayerStateProxy::UpdateAttributes(Z_Param_brainCloudWrapper,Z_Param_jsonAttributes,Z_Param_wipeExisting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStateProxy::execGetAttributes)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStateProxy**)Z_Param__Result=UBCPlayerStateProxy::GetAttributes(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStateProxy::execUpdateSummaryFriendData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonSummaryData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStateProxy**)Z_Param__Result=UBCPlayerStateProxy::UpdateSummaryFriendData(Z_Param_brainCloudWrapper,Z_Param_jsonSummaryData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStateProxy::execUpdateName)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStateProxy**)Z_Param__Result=UBCPlayerStateProxy::UpdateName(Z_Param_brainCloudWrapper,Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStateProxy::execUpdateUserName)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_userName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStateProxy**)Z_Param__Result=UBCPlayerStateProxy::UpdateUserName(Z_Param_brainCloudWrapper,Z_Param_userName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStateProxy::execLogout)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStateProxy**)Z_Param__Result=UBCPlayerStateProxy::Logout(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStateProxy::execResetUserState)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStateProxy**)Z_Param__Result=UBCPlayerStateProxy::ResetUserState(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStateProxy::execDeleteUser)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStateProxy**)Z_Param__Result=UBCPlayerStateProxy::DeleteUser(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStateProxy::execReadUserState)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStateProxy**)Z_Param__Result=UBCPlayerStateProxy::ReadUserState(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	void UBCPlayerStateProxy::StaticRegisterNativesUBCPlayerStateProxy()
	{
		UClass* Class = UBCPlayerStateProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearUserStatus", &UBCPlayerStateProxy::execClearUserStatus },
			{ "DeleteUser", &UBCPlayerStateProxy::execDeleteUser },
			{ "ExtendUserStatus", &UBCPlayerStateProxy::execExtendUserStatus },
			{ "GetAttributes", &UBCPlayerStateProxy::execGetAttributes },
			{ "GetUserStatus", &UBCPlayerStateProxy::execGetUserStatus },
			{ "Logout", &UBCPlayerStateProxy::execLogout },
			{ "ReadUserState", &UBCPlayerStateProxy::execReadUserState },
			{ "RemoveAttributes", &UBCPlayerStateProxy::execRemoveAttributes },
			{ "ResetUserState", &UBCPlayerStateProxy::execResetUserState },
			{ "SetUserStatus", &UBCPlayerStateProxy::execSetUserStatus },
			{ "UpdateAttributes", &UBCPlayerStateProxy::execUpdateAttributes },
			{ "UpdateContactEmail", &UBCPlayerStateProxy::execUpdateContactEmail },
			{ "UpdateLanguageCode", &UBCPlayerStateProxy::execUpdateLanguageCode },
			{ "UpdateName", &UBCPlayerStateProxy::execUpdateName },
			{ "UpdateSummaryFriendData", &UBCPlayerStateProxy::execUpdateSummaryFriendData },
			{ "UpdateTimeZoneOffset", &UBCPlayerStateProxy::execUpdateTimeZoneOffset },
			{ "UpdateUserName", &UBCPlayerStateProxy::execUpdateUserName },
			{ "UpdateUserPictureUrl", &UBCPlayerStateProxy::execUpdateUserPictureUrl },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCPlayerStateProxy_ClearUserStatus_Statics
	{
		struct BCPlayerStateProxy_eventClearUserStatus_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString statusName;
			UBCPlayerStateProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_statusName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_ClearUserStatus_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventClearUserStatus_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_ClearUserStatus_Statics::NewProp_statusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_ClearUserStatus_Statics::NewProp_statusName = { "statusName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventClearUserStatus_Parms, statusName), METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_ClearUserStatus_Statics::NewProp_statusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_ClearUserStatus_Statics::NewProp_statusName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_ClearUserStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventClearUserStatus_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStateProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStateProxy_ClearUserStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_ClearUserStatus_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_ClearUserStatus_Statics::NewProp_statusName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_ClearUserStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_ClearUserStatus_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player State" },
		{ "Comment", "/**\n    * Delete's the specified status\n    *\n    * Service Name - PlayerState\n    * Service Operation - CLEAR_USER_STATUS\n    *\n    * @param statusName a status name of the user\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStateProxy.h" },
		{ "ToolTip", "Delete's the specified status\n\nService Name - PlayerState\nService Operation - CLEAR_USER_STATUS\n\n@param statusName a status name of the user\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStateProxy_ClearUserStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStateProxy, nullptr, "ClearUserStatus", nullptr, nullptr, sizeof(BCPlayerStateProxy_eventClearUserStatus_Parms), Z_Construct_UFunction_UBCPlayerStateProxy_ClearUserStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_ClearUserStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_ClearUserStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_ClearUserStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStateProxy_ClearUserStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStateProxy_ClearUserStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStateProxy_DeleteUser_Statics
	{
		struct BCPlayerStateProxy_eventDeleteUser_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCPlayerStateProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_DeleteUser_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventDeleteUser_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_DeleteUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventDeleteUser_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStateProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStateProxy_DeleteUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_DeleteUser_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_DeleteUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_DeleteUser_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player State" },
		{ "Comment", "/**\n    * Completely deletes the user record and all data fully owned\n    * by the user. After calling this method, the user will need\n    * to re-authenticate and create a new profile.\n    * This is mostly used for debugging/qa.\n    *\n    * Service Name - PlayerState\n    * Service Operation - FullReset\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStateProxy.h" },
		{ "ToolTip", "Completely deletes the user record and all data fully owned\nby the user. After calling this method, the user will need\nto re-authenticate and create a new profile.\nThis is mostly used for debugging/qa.\n\nService Name - PlayerState\nService Operation - FullReset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStateProxy_DeleteUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStateProxy, nullptr, "DeleteUser", nullptr, nullptr, sizeof(BCPlayerStateProxy_eventDeleteUser_Parms), Z_Construct_UFunction_UBCPlayerStateProxy_DeleteUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_DeleteUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_DeleteUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_DeleteUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStateProxy_DeleteUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStateProxy_DeleteUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics
	{
		struct BCPlayerStateProxy_eventExtendUserStatus_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString statusName;
			int32 additionalSecs;
			FString details;
			UBCPlayerStateProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_statusName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_additionalSecs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_details_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_details;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventExtendUserStatus_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::NewProp_statusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::NewProp_statusName = { "statusName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventExtendUserStatus_Parms, statusName), METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::NewProp_statusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::NewProp_statusName_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::NewProp_additionalSecs = { "additionalSecs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventExtendUserStatus_Parms, additionalSecs), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::NewProp_details_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::NewProp_details = { "details", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventExtendUserStatus_Parms, details), METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::NewProp_details_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::NewProp_details_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventExtendUserStatus_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStateProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::NewProp_statusName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::NewProp_additionalSecs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::NewProp_details,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player State" },
		{ "Comment", "/**\n    * Stack user's statuses\n    *\n    * Service Name - PlayerState\n    * Service Operation - EXTEND_USER_STATUS\n    *\n    * @param statusName a status name of the user\n    * @param additionalSecs time\n    * @param details json of details of user status\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStateProxy.h" },
		{ "ToolTip", "Stack user's statuses\n\nService Name - PlayerState\nService Operation - EXTEND_USER_STATUS\n\n@param statusName a status name of the user\n@param additionalSecs time\n@param details json of details of user status\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStateProxy, nullptr, "ExtendUserStatus", nullptr, nullptr, sizeof(BCPlayerStateProxy_eventExtendUserStatus_Parms), Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStateProxy_GetAttributes_Statics
	{
		struct BCPlayerStateProxy_eventGetAttributes_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCPlayerStateProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_GetAttributes_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventGetAttributes_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_GetAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventGetAttributes_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStateProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStateProxy_GetAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_GetAttributes_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_GetAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_GetAttributes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player State" },
		{ "Comment", "/**\n    * Retrieve the user's attributes.\n    *\n    * Service Name - PlayerState\n    * Service Operation - GetAttributes\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStateProxy.h" },
		{ "ToolTip", "Retrieve the user's attributes.\n\nService Name - PlayerState\nService Operation - GetAttributes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStateProxy_GetAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStateProxy, nullptr, "GetAttributes", nullptr, nullptr, sizeof(BCPlayerStateProxy_eventGetAttributes_Parms), Z_Construct_UFunction_UBCPlayerStateProxy_GetAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_GetAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_GetAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_GetAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStateProxy_GetAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStateProxy_GetAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStateProxy_GetUserStatus_Statics
	{
		struct BCPlayerStateProxy_eventGetUserStatus_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString statusName;
			UBCPlayerStateProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_statusName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_GetUserStatus_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventGetUserStatus_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_GetUserStatus_Statics::NewProp_statusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_GetUserStatus_Statics::NewProp_statusName = { "statusName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventGetUserStatus_Parms, statusName), METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_GetUserStatus_Statics::NewProp_statusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_GetUserStatus_Statics::NewProp_statusName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_GetUserStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventGetUserStatus_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStateProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStateProxy_GetUserStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_GetUserStatus_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_GetUserStatus_Statics::NewProp_statusName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_GetUserStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_GetUserStatus_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player State" },
		{ "Comment", "/**\n    * Get user status\n    *\n    * Service Name - PlayerState\n    * Service Operation - GET_USER_STATUS\n    *\n    * @param statusName a status name of the user\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStateProxy.h" },
		{ "ToolTip", "Get user status\n\nService Name - PlayerState\nService Operation - GET_USER_STATUS\n\n@param statusName a status name of the user\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStateProxy_GetUserStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStateProxy, nullptr, "GetUserStatus", nullptr, nullptr, sizeof(BCPlayerStateProxy_eventGetUserStatus_Parms), Z_Construct_UFunction_UBCPlayerStateProxy_GetUserStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_GetUserStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_GetUserStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_GetUserStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStateProxy_GetUserStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStateProxy_GetUserStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStateProxy_Logout_Statics
	{
		struct BCPlayerStateProxy_eventLogout_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCPlayerStateProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_Logout_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventLogout_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_Logout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventLogout_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStateProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStateProxy_Logout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_Logout_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_Logout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_Logout_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player State" },
		{ "Comment", "/**\n    * Logs user out of server.\n    *\n    * Service Name - PlayerState\n    * Service Operation - Logout\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStateProxy.h" },
		{ "ToolTip", "Logs user out of server.\n\nService Name - PlayerState\nService Operation - Logout" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStateProxy_Logout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStateProxy, nullptr, "Logout", nullptr, nullptr, sizeof(BCPlayerStateProxy_eventLogout_Parms), Z_Construct_UFunction_UBCPlayerStateProxy_Logout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_Logout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_Logout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_Logout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStateProxy_Logout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStateProxy_Logout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStateProxy_ReadUserState_Statics
	{
		struct BCPlayerStateProxy_eventReadUserState_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCPlayerStateProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_ReadUserState_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventReadUserState_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_ReadUserState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventReadUserState_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStateProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStateProxy_ReadUserState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_ReadUserState_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_ReadUserState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_ReadUserState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player State" },
		{ "Comment", "/**\n    * Read the state of the currently logged in user.\n    * This method returns a JSON object describing most of the\n    * user's data: entities, statistics, level, currency.\n    * Apps will typically call this method after authenticating to get an\n    * up-to-date view of the user's data.\n    *\n    * Service Name - PlayerState\n    * Service Operation - Read\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStateProxy.h" },
		{ "ToolTip", "Read the state of the currently logged in user.\nThis method returns a JSON object describing most of the\nuser's data: entities, statistics, level, currency.\nApps will typically call this method after authenticating to get an\nup-to-date view of the user's data.\n\nService Name - PlayerState\nService Operation - Read" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStateProxy_ReadUserState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStateProxy, nullptr, "ReadUserState", nullptr, nullptr, sizeof(BCPlayerStateProxy_eventReadUserState_Parms), Z_Construct_UFunction_UBCPlayerStateProxy_ReadUserState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_ReadUserState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_ReadUserState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_ReadUserState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStateProxy_ReadUserState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStateProxy_ReadUserState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes_Statics
	{
		struct BCPlayerStateProxy_eventRemoveAttributes_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TArray<FString> attributeNames;
			UBCPlayerStateProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_attributeNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attributeNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_attributeNames;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventRemoveAttributes_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes_Statics::NewProp_attributeNames_Inner = { "attributeNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes_Statics::NewProp_attributeNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes_Statics::NewProp_attributeNames = { "attributeNames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventRemoveAttributes_Parms, attributeNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes_Statics::NewProp_attributeNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes_Statics::NewProp_attributeNames_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventRemoveAttributes_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStateProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes_Statics::NewProp_attributeNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes_Statics::NewProp_attributeNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player State" },
		{ "Comment", "/**\n    * Remove user's attributes.\n    *\n    * Service Name - PlayerState\n    * Service Operation - RemoveAttributes\n    *\n    * Param - attributeNames Array of attribute names.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStateProxy.h" },
		{ "ToolTip", "Remove user's attributes.\n\nService Name - PlayerState\nService Operation - RemoveAttributes\n\nParam - attributeNames Array of attribute names." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStateProxy, nullptr, "RemoveAttributes", nullptr, nullptr, sizeof(BCPlayerStateProxy_eventRemoveAttributes_Parms), Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStateProxy_ResetUserState_Statics
	{
		struct BCPlayerStateProxy_eventResetUserState_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCPlayerStateProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_ResetUserState_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventResetUserState_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_ResetUserState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventResetUserState_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStateProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStateProxy_ResetUserState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_ResetUserState_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_ResetUserState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_ResetUserState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player State" },
		{ "Comment", "/**\n    * This method will delete *most* data for the currently logged in user.\n    * Data which is not deleted includes: currency, credentials, and\n    * purchase transactions. ResetUser is different from DeleteUser in that\n    * the user record will continue to exist after the reset (so the user\n    * does not need to re-authenticate).\n    *\n    * Service Name - PlayerState\n    * Service Operation - DataReset\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStateProxy.h" },
		{ "ToolTip", "This method will delete *most* data for the currently logged in user.\nData which is not deleted includes: currency, credentials, and\npurchase transactions. ResetUser is different from DeleteUser in that\nthe user record will continue to exist after the reset (so the user\ndoes not need to re-authenticate).\n\nService Name - PlayerState\nService Operation - DataReset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStateProxy_ResetUserState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStateProxy, nullptr, "ResetUserState", nullptr, nullptr, sizeof(BCPlayerStateProxy_eventResetUserState_Parms), Z_Construct_UFunction_UBCPlayerStateProxy_ResetUserState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_ResetUserState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_ResetUserState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_ResetUserState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStateProxy_ResetUserState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStateProxy_ResetUserState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics
	{
		struct BCPlayerStateProxy_eventSetUserStatus_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString statusName;
			int32 durationSecs;
			FString details;
			UBCPlayerStateProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_statusName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_durationSecs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_details_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_details;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventSetUserStatus_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::NewProp_statusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::NewProp_statusName = { "statusName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventSetUserStatus_Parms, statusName), METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::NewProp_statusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::NewProp_statusName_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::NewProp_durationSecs = { "durationSecs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventSetUserStatus_Parms, durationSecs), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::NewProp_details_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::NewProp_details = { "details", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventSetUserStatus_Parms, details), METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::NewProp_details_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::NewProp_details_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventSetUserStatus_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStateProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::NewProp_statusName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::NewProp_durationSecs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::NewProp_details,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player State" },
		{ "Comment", "/**\n    * Get user status\n    *\n    * Service Name - PlayerState\n    * Service Operation - GET_USER_STATUS\n    *\n    * @param statusName a status name of the user\n    * @param durationSecs the time\n    * @param details the user details\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStateProxy.h" },
		{ "ToolTip", "Get user status\n\nService Name - PlayerState\nService Operation - GET_USER_STATUS\n\n@param statusName a status name of the user\n@param durationSecs the time\n@param details the user details\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStateProxy, nullptr, "SetUserStatus", nullptr, nullptr, sizeof(BCPlayerStateProxy_eventSetUserStatus_Parms), Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes_Statics
	{
		struct BCPlayerStateProxy_eventUpdateAttributes_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString jsonAttributes;
			bool wipeExisting;
			UBCPlayerStateProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonAttributes;
		static void NewProp_wipeExisting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wipeExisting;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateAttributes_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes_Statics::NewProp_jsonAttributes = { "jsonAttributes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateAttributes_Parms, jsonAttributes), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes_Statics::NewProp_wipeExisting_SetBit(void* Obj)
	{
		((BCPlayerStateProxy_eventUpdateAttributes_Parms*)Obj)->wipeExisting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes_Statics::NewProp_wipeExisting = { "wipeExisting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCPlayerStateProxy_eventUpdateAttributes_Parms), &Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes_Statics::NewProp_wipeExisting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateAttributes_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStateProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes_Statics::NewProp_jsonAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes_Statics::NewProp_wipeExisting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player State" },
		{ "Comment", "/**\n    * Update user's attributes.\n    *\n    * Service Name - PlayerState\n    * Service Operation - UpdateAttributes\n    *\n    * Param - jsonAttributes Single layer json string that is a set of key-value pairs\n    * Param - wipeExisting Whether to wipe existing attributes prior to update.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStateProxy.h" },
		{ "ToolTip", "Update user's attributes.\n\nService Name - PlayerState\nService Operation - UpdateAttributes\n\nParam - jsonAttributes Single layer json string that is a set of key-value pairs\nParam - wipeExisting Whether to wipe existing attributes prior to update." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStateProxy, nullptr, "UpdateAttributes", nullptr, nullptr, sizeof(BCPlayerStateProxy_eventUpdateAttributes_Parms), Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStateProxy_UpdateContactEmail_Statics
	{
		struct BCPlayerStateProxy_eventUpdateContactEmail_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString contactEmail;
			UBCPlayerStateProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_contactEmail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_contactEmail;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateContactEmail_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateContactEmail_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_UpdateContactEmail_Statics::NewProp_contactEmail_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateContactEmail_Statics::NewProp_contactEmail = { "contactEmail", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateContactEmail_Parms, contactEmail), METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateContactEmail_Statics::NewProp_contactEmail_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateContactEmail_Statics::NewProp_contactEmail_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateContactEmail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateContactEmail_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStateProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStateProxy_UpdateContactEmail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateContactEmail_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateContactEmail_Statics::NewProp_contactEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateContactEmail_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_UpdateContactEmail_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player State" },
		{ "Comment", "/**\n    * Update the user's contact email.\n    * Note this is unrelated to email authentication.\n    *\n    * Service Name - PlayerState\n    * Service Operation - UPDATE_CONTACT_EMAIL\n    *\n    * Param - contactEmail Updated email\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStateProxy.h" },
		{ "ToolTip", "Update the user's contact email.\nNote this is unrelated to email authentication.\n\nService Name - PlayerState\nService Operation - UPDATE_CONTACT_EMAIL\n\nParam - contactEmail Updated email" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateContactEmail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStateProxy, nullptr, "UpdateContactEmail", nullptr, nullptr, sizeof(BCPlayerStateProxy_eventUpdateContactEmail_Parms), Z_Construct_UFunction_UBCPlayerStateProxy_UpdateContactEmail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateContactEmail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateContactEmail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateContactEmail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStateProxy_UpdateContactEmail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStateProxy_UpdateContactEmail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStateProxy_UpdateLanguageCode_Statics
	{
		struct BCPlayerStateProxy_eventUpdateLanguageCode_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString languageCode;
			UBCPlayerStateProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_languageCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_languageCode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateLanguageCode_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateLanguageCode_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_UpdateLanguageCode_Statics::NewProp_languageCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateLanguageCode_Statics::NewProp_languageCode = { "languageCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateLanguageCode_Parms, languageCode), METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateLanguageCode_Statics::NewProp_languageCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateLanguageCode_Statics::NewProp_languageCode_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateLanguageCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateLanguageCode_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStateProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStateProxy_UpdateLanguageCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateLanguageCode_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateLanguageCode_Statics::NewProp_languageCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateLanguageCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_UpdateLanguageCode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player State" },
		{ "Comment", "/**\n    * Update user's language code preference on their profile.\n    *\n    * Service Name - PlayerState\n    * Service Operation - UPDATE_LANGUAGE_CODE\n    *\n    * @param languageCode the offset\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStateProxy.h" },
		{ "ToolTip", "Update user's language code preference on their profile.\n\nService Name - PlayerState\nService Operation - UPDATE_LANGUAGE_CODE\n\n@param languageCode the offset\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateLanguageCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStateProxy, nullptr, "UpdateLanguageCode", nullptr, nullptr, sizeof(BCPlayerStateProxy_eventUpdateLanguageCode_Parms), Z_Construct_UFunction_UBCPlayerStateProxy_UpdateLanguageCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateLanguageCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateLanguageCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateLanguageCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStateProxy_UpdateLanguageCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStateProxy_UpdateLanguageCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStateProxy_UpdateName_Statics
	{
		struct BCPlayerStateProxy_eventUpdateName_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString name;
			UBCPlayerStateProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateName_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateName_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateName_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateName_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStateProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStateProxy_UpdateName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateName_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateName_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_UpdateName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player State" },
		{ "Comment", "/**\n    * @deprecated Use updateUserName instead - to be removed September 2021\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStateProxy.h" },
		{ "ToolTip", "@deprecated Use updateUserName instead - to be removed September 2021" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStateProxy, nullptr, "UpdateName", nullptr, nullptr, sizeof(BCPlayerStateProxy_eventUpdateName_Parms), Z_Construct_UFunction_UBCPlayerStateProxy_UpdateName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStateProxy_UpdateName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStateProxy_UpdateName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStateProxy_UpdateSummaryFriendData_Statics
	{
		struct BCPlayerStateProxy_eventUpdateSummaryFriendData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString jsonSummaryData;
			UBCPlayerStateProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateSummaryFriendData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateSummaryFriendData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_UpdateSummaryFriendData_Statics::NewProp_jsonSummaryData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateSummaryFriendData_Statics::NewProp_jsonSummaryData = { "jsonSummaryData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateSummaryFriendData_Parms, jsonSummaryData), METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateSummaryFriendData_Statics::NewProp_jsonSummaryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateSummaryFriendData_Statics::NewProp_jsonSummaryData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateSummaryFriendData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateSummaryFriendData_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStateProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStateProxy_UpdateSummaryFriendData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateSummaryFriendData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateSummaryFriendData_Statics::NewProp_jsonSummaryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateSummaryFriendData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_UpdateSummaryFriendData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player State" },
		{ "Comment", "/**\n    * Updates the \"friend summary data\" associated with the logged in player.\n    * Some operations will return this summary data. For instance the social\n    * leaderboards will return the user's score in the leaderboard along\n    * with the friend summary data. Generally this data is used to provide\n    * a quick overview of the user without requiring a separate API call\n    * to read their public stats or entity data.\n    *\n    * Service Name - PlayerState\n    * Service Operation - UpdateSummary\n    *\n    * Param - jsonSummaryData A JSON string defining the summary data.\n    * For example:\n    * {\n    *   \"xp\":123,\n    *   \"level\":12,\n    *   \"highScore\":45123\n    * }\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStateProxy.h" },
		{ "ToolTip", "Updates the \"friend summary data\" associated with the logged in player.\nSome operations will return this summary data. For instance the social\nleaderboards will return the user's score in the leaderboard along\nwith the friend summary data. Generally this data is used to provide\na quick overview of the user without requiring a separate API call\nto read their public stats or entity data.\n\nService Name - PlayerState\nService Operation - UpdateSummary\n\nParam - jsonSummaryData A JSON string defining the summary data.\nFor example:\n{\n  \"xp\":123,\n  \"level\":12,\n  \"highScore\":45123\n}" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateSummaryFriendData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStateProxy, nullptr, "UpdateSummaryFriendData", nullptr, nullptr, sizeof(BCPlayerStateProxy_eventUpdateSummaryFriendData_Parms), Z_Construct_UFunction_UBCPlayerStateProxy_UpdateSummaryFriendData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateSummaryFriendData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateSummaryFriendData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateSummaryFriendData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStateProxy_UpdateSummaryFriendData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStateProxy_UpdateSummaryFriendData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStateProxy_UpdateTimeZoneOffset_Statics
	{
		struct BCPlayerStateProxy_eventUpdateTimeZoneOffset_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 timeZoneOffset;
			UBCPlayerStateProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeZoneOffset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateTimeZoneOffset_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateTimeZoneOffset_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateTimeZoneOffset_Statics::NewProp_timeZoneOffset = { "timeZoneOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateTimeZoneOffset_Parms, timeZoneOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateTimeZoneOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateTimeZoneOffset_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStateProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStateProxy_UpdateTimeZoneOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateTimeZoneOffset_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateTimeZoneOffset_Statics::NewProp_timeZoneOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateTimeZoneOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_UpdateTimeZoneOffset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player State" },
		{ "Comment", "/**\n    * Update user's time zone offset preference on their profile\n    *\n    * Service Name - PlayerState\n    * Service Operation - UPDATE_TIMEZONE_OFFSET\n    *\n    * @param timeZoneOffset the offset\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStateProxy.h" },
		{ "ToolTip", "Update user's time zone offset preference on their profile\n\nService Name - PlayerState\nService Operation - UPDATE_TIMEZONE_OFFSET\n\n@param timeZoneOffset the offset\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateTimeZoneOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStateProxy, nullptr, "UpdateTimeZoneOffset", nullptr, nullptr, sizeof(BCPlayerStateProxy_eventUpdateTimeZoneOffset_Parms), Z_Construct_UFunction_UBCPlayerStateProxy_UpdateTimeZoneOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateTimeZoneOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateTimeZoneOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateTimeZoneOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStateProxy_UpdateTimeZoneOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStateProxy_UpdateTimeZoneOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserName_Statics
	{
		struct BCPlayerStateProxy_eventUpdateUserName_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString userName;
			UBCPlayerStateProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserName_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateUserName_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserName_Statics::NewProp_userName = { "userName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateUserName_Parms, userName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateUserName_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStateProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserName_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserName_Statics::NewProp_userName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player State" },
		{ "Comment", "/**\n    * Sets the user's name.\n    *\n    * Service Name - playerState\n    * Service Operation - UPDATE_NAME\n    *\n    * Param - name The name of the user\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStateProxy.h" },
		{ "ToolTip", "Sets the user's name.\n\nService Name - playerState\nService Operation - UPDATE_NAME\n\nParam - name The name of the user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStateProxy, nullptr, "UpdateUserName", nullptr, nullptr, sizeof(BCPlayerStateProxy_eventUpdateUserName_Parms), Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserPictureUrl_Statics
	{
		struct BCPlayerStateProxy_eventUpdateUserPictureUrl_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString pictureUrl;
			UBCPlayerStateProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pictureUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pictureUrl;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserPictureUrl_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateUserPictureUrl_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserPictureUrl_Statics::NewProp_pictureUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserPictureUrl_Statics::NewProp_pictureUrl = { "pictureUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateUserPictureUrl_Parms, pictureUrl), METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserPictureUrl_Statics::NewProp_pictureUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserPictureUrl_Statics::NewProp_pictureUrl_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserPictureUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStateProxy_eventUpdateUserPictureUrl_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStateProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserPictureUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserPictureUrl_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserPictureUrl_Statics::NewProp_pictureUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserPictureUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserPictureUrl_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player State" },
		{ "Comment", "/**\n    * Update user picture URL.\n    *\n    * Service Name - PlayerState\n    * Service Operation - UPDATE_PICTURE_URL\n    *\n    * Param - pictureUrl URL to apply\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStateProxy.h" },
		{ "ToolTip", "Update user picture URL.\n\nService Name - PlayerState\nService Operation - UPDATE_PICTURE_URL\n\nParam - pictureUrl URL to apply" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserPictureUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStateProxy, nullptr, "UpdateUserPictureUrl", nullptr, nullptr, sizeof(BCPlayerStateProxy_eventUpdateUserPictureUrl_Parms), Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserPictureUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserPictureUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserPictureUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserPictureUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserPictureUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserPictureUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCPlayerStateProxy_NoRegister()
	{
		return UBCPlayerStateProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCPlayerStateProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCPlayerStateProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCPlayerStateProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCPlayerStateProxy_ClearUserStatus, "ClearUserStatus" }, // 2010671245
		{ &Z_Construct_UFunction_UBCPlayerStateProxy_DeleteUser, "DeleteUser" }, // 1510335066
		{ &Z_Construct_UFunction_UBCPlayerStateProxy_ExtendUserStatus, "ExtendUserStatus" }, // 3351585063
		{ &Z_Construct_UFunction_UBCPlayerStateProxy_GetAttributes, "GetAttributes" }, // 1254809432
		{ &Z_Construct_UFunction_UBCPlayerStateProxy_GetUserStatus, "GetUserStatus" }, // 3719513677
		{ &Z_Construct_UFunction_UBCPlayerStateProxy_Logout, "Logout" }, // 938828132
		{ &Z_Construct_UFunction_UBCPlayerStateProxy_ReadUserState, "ReadUserState" }, // 1549638988
		{ &Z_Construct_UFunction_UBCPlayerStateProxy_RemoveAttributes, "RemoveAttributes" }, // 3296069468
		{ &Z_Construct_UFunction_UBCPlayerStateProxy_ResetUserState, "ResetUserState" }, // 3710539467
		{ &Z_Construct_UFunction_UBCPlayerStateProxy_SetUserStatus, "SetUserStatus" }, // 330053130
		{ &Z_Construct_UFunction_UBCPlayerStateProxy_UpdateAttributes, "UpdateAttributes" }, // 327501585
		{ &Z_Construct_UFunction_UBCPlayerStateProxy_UpdateContactEmail, "UpdateContactEmail" }, // 4086832760
		{ &Z_Construct_UFunction_UBCPlayerStateProxy_UpdateLanguageCode, "UpdateLanguageCode" }, // 2333584597
		{ &Z_Construct_UFunction_UBCPlayerStateProxy_UpdateName, "UpdateName" }, // 768835083
		{ &Z_Construct_UFunction_UBCPlayerStateProxy_UpdateSummaryFriendData, "UpdateSummaryFriendData" }, // 2942751862
		{ &Z_Construct_UFunction_UBCPlayerStateProxy_UpdateTimeZoneOffset, "UpdateTimeZoneOffset" }, // 1963560195
		{ &Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserName, "UpdateUserName" }, // 2507702021
		{ &Z_Construct_UFunction_UBCPlayerStateProxy_UpdateUserPictureUrl, "UpdateUserPictureUrl" }, // 996279165
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCPlayerStateProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCPlayerStateProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStateProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCPlayerStateProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCPlayerStateProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCPlayerStateProxy_Statics::ClassParams = {
		&UBCPlayerStateProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCPlayerStateProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCPlayerStateProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCPlayerStateProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCPlayerStateProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCPlayerStateProxy, 1278322219);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCPlayerStateProxy>()
	{
		return UBCPlayerStateProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCPlayerStateProxy(Z_Construct_UClass_UBCPlayerStateProxy, &UBCPlayerStateProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCPlayerStateProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCPlayerStateProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
