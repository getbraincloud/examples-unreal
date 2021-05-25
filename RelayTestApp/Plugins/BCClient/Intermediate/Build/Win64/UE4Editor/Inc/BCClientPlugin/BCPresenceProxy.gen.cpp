// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCPresenceProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCPresenceProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCPresenceProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCPresenceProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCPresenceProxy::execUpdateActivity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_activity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPresenceProxy**)Z_Param__Result=UBCPresenceProxy::UpdateActivity(Z_Param_brainCloudWrapper,Z_Param_activity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPresenceProxy::execStopListening)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPresenceProxy**)Z_Param__Result=UBCPresenceProxy::StopListening(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPresenceProxy::execSetVisibility)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPresenceProxy**)Z_Param__Result=UBCPresenceProxy::SetVisibility(Z_Param_brainCloudWrapper,Z_Param_visible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPresenceProxy::execRegisterListenersForProfiles)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_TARRAY_REF(FString,Z_Param_Out_profileIds);
		P_GET_UBOOL(Z_Param_biderectional);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPresenceProxy**)Z_Param__Result=UBCPresenceProxy::RegisterListenersForProfiles(Z_Param_brainCloudWrapper,Z_Param_Out_profileIds,Z_Param_biderectional);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPresenceProxy::execRegisterListenersForGroup)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_UBOOL(Z_Param_biderectional);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPresenceProxy**)Z_Param__Result=UBCPresenceProxy::RegisterListenersForGroup(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_biderectional);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPresenceProxy::execRegisterListenersForFriends)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_platform);
		P_GET_UBOOL(Z_Param_biderectional);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPresenceProxy**)Z_Param__Result=UBCPresenceProxy::RegisterListenersForFriends(Z_Param_brainCloudWrapper,Z_Param_platform,Z_Param_biderectional);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPresenceProxy::execGetPresenceOfUsers)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_TARRAY_REF(FString,Z_Param_Out_profileIds);
		P_GET_UBOOL(Z_Param_includeOffline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPresenceProxy**)Z_Param__Result=UBCPresenceProxy::GetPresenceOfUsers(Z_Param_brainCloudWrapper,Z_Param_Out_profileIds,Z_Param_includeOffline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPresenceProxy::execGetPresenceOfGroup)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_UBOOL(Z_Param_includeOffline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPresenceProxy**)Z_Param__Result=UBCPresenceProxy::GetPresenceOfGroup(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_includeOffline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPresenceProxy::execGetPresenceOfFriends)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_platform);
		P_GET_UBOOL(Z_Param_includeOffline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPresenceProxy**)Z_Param__Result=UBCPresenceProxy::GetPresenceOfFriends(Z_Param_brainCloudWrapper,Z_Param_platform,Z_Param_includeOffline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPresenceProxy::execForcePush)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPresenceProxy**)Z_Param__Result=UBCPresenceProxy::ForcePush(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	void UBCPresenceProxy::StaticRegisterNativesUBCPresenceProxy()
	{
		UClass* Class = UBCPresenceProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForcePush", &UBCPresenceProxy::execForcePush },
			{ "GetPresenceOfFriends", &UBCPresenceProxy::execGetPresenceOfFriends },
			{ "GetPresenceOfGroup", &UBCPresenceProxy::execGetPresenceOfGroup },
			{ "GetPresenceOfUsers", &UBCPresenceProxy::execGetPresenceOfUsers },
			{ "RegisterListenersForFriends", &UBCPresenceProxy::execRegisterListenersForFriends },
			{ "RegisterListenersForGroup", &UBCPresenceProxy::execRegisterListenersForGroup },
			{ "RegisterListenersForProfiles", &UBCPresenceProxy::execRegisterListenersForProfiles },
			{ "SetVisibility", &UBCPresenceProxy::execSetVisibility },
			{ "StopListening", &UBCPresenceProxy::execStopListening },
			{ "UpdateActivity", &UBCPresenceProxy::execUpdateActivity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCPresenceProxy_ForcePush_Statics
	{
		struct BCPresenceProxy_eventForcePush_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCPresenceProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPresenceProxy_ForcePush_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventForcePush_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPresenceProxy_ForcePush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventForcePush_Parms, ReturnValue), Z_Construct_UClass_UBCPresenceProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPresenceProxy_ForcePush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_ForcePush_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_ForcePush_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPresenceProxy_ForcePush_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Presence" },
		{ "Comment", "/**\n* Force an RTT presence update to all listeners of the caller.\n*\n* Service Name - Presence\n* Service Operation - FORCE_PUSH\n*\n*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPresenceProxy.h" },
		{ "ToolTip", "Force an RTT presence update to all listeners of the caller.\n\nService Name - Presence\nService Operation - FORCE_PUSH" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPresenceProxy_ForcePush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPresenceProxy, nullptr, "ForcePush", nullptr, nullptr, sizeof(BCPresenceProxy_eventForcePush_Parms), Z_Construct_UFunction_UBCPresenceProxy_ForcePush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_ForcePush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPresenceProxy_ForcePush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_ForcePush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPresenceProxy_ForcePush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPresenceProxy_ForcePush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics
	{
		struct BCPresenceProxy_eventGetPresenceOfFriends_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString platform;
			bool includeOffline;
			UBCPresenceProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_platform;
		static void NewProp_includeOffline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeOffline;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventGetPresenceOfFriends_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::NewProp_platform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::NewProp_platform = { "platform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventGetPresenceOfFriends_Parms, platform), METADATA_PARAMS(Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::NewProp_platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::NewProp_platform_MetaData)) };
	void Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::NewProp_includeOffline_SetBit(void* Obj)
	{
		((BCPresenceProxy_eventGetPresenceOfFriends_Parms*)Obj)->includeOffline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::NewProp_includeOffline = { "includeOffline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCPresenceProxy_eventGetPresenceOfFriends_Parms), &Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::NewProp_includeOffline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventGetPresenceOfFriends_Parms, ReturnValue), Z_Construct_UClass_UBCPresenceProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::NewProp_platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::NewProp_includeOffline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Presence" },
		{ "Comment", "/**\n* Gets the presence data for the given <platform>. Can be one of \"all\",\n* \"brainCloud\", or \"facebook\". Will not include offline profiles\n* unless <includeOffline> is set to true.\n*\n* Service Name - Presence\n* Service Operation - GET_PRESENCE_OF_FRIENDS\n* \n* @param platform The store platform, valid stored: all, brainCloud, facebook\n* @param includeOffline Will not include offline profiles unless includeOffline is set to true.\n*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPresenceProxy.h" },
		{ "ToolTip", "Gets the presence data for the given <platform>. Can be one of \"all\",\n\"brainCloud\", or \"facebook\". Will not include offline profiles\nunless <includeOffline> is set to true.\n\nService Name - Presence\nService Operation - GET_PRESENCE_OF_FRIENDS\n\n@param platform The store platform, valid stored: all, brainCloud, facebook\n@param includeOffline Will not include offline profiles unless includeOffline is set to true." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPresenceProxy, nullptr, "GetPresenceOfFriends", nullptr, nullptr, sizeof(BCPresenceProxy_eventGetPresenceOfFriends_Parms), Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics
	{
		struct BCPresenceProxy_eventGetPresenceOfGroup_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			bool includeOffline;
			UBCPresenceProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static void NewProp_includeOffline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeOffline;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventGetPresenceOfGroup_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventGetPresenceOfGroup_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::NewProp_groupId_MetaData)) };
	void Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::NewProp_includeOffline_SetBit(void* Obj)
	{
		((BCPresenceProxy_eventGetPresenceOfGroup_Parms*)Obj)->includeOffline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::NewProp_includeOffline = { "includeOffline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCPresenceProxy_eventGetPresenceOfGroup_Parms), &Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::NewProp_includeOffline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventGetPresenceOfGroup_Parms, ReturnValue), Z_Construct_UClass_UBCPresenceProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::NewProp_includeOffline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Presence" },
		{ "Comment", "/**\n* Gets the presence data for the given <groupId>. Will not include\n* offline profiles unless <includeOffline> is set to true.\n*\n* Service Name - Presence\n* Service Operation - GET_PRESENCE_OF_GROUP\n* \n* @param groupId th eid for the gorup\n* @param includeOffline Will not include offline profiles unless includeOffline is set to true.\n* @param callback The method to be invoked when the server response is received \n*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPresenceProxy.h" },
		{ "ToolTip", "Gets the presence data for the given <groupId>. Will not include\noffline profiles unless <includeOffline> is set to true.\n\nService Name - Presence\nService Operation - GET_PRESENCE_OF_GROUP\n\n@param groupId th eid for the gorup\n@param includeOffline Will not include offline profiles unless includeOffline is set to true.\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPresenceProxy, nullptr, "GetPresenceOfGroup", nullptr, nullptr, sizeof(BCPresenceProxy_eventGetPresenceOfGroup_Parms), Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics
	{
		struct BCPresenceProxy_eventGetPresenceOfUsers_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TArray<FString> profileIds;
			bool includeOffline;
			UBCPresenceProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_profileIds;
		static void NewProp_includeOffline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeOffline;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventGetPresenceOfUsers_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::NewProp_profileIds_Inner = { "profileIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::NewProp_profileIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::NewProp_profileIds = { "profileIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventGetPresenceOfUsers_Parms, profileIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::NewProp_profileIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::NewProp_profileIds_MetaData)) };
	void Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::NewProp_includeOffline_SetBit(void* Obj)
	{
		((BCPresenceProxy_eventGetPresenceOfUsers_Parms*)Obj)->includeOffline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::NewProp_includeOffline = { "includeOffline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCPresenceProxy_eventGetPresenceOfUsers_Parms), &Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::NewProp_includeOffline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventGetPresenceOfUsers_Parms, ReturnValue), Z_Construct_UClass_UBCPresenceProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::NewProp_profileIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::NewProp_profileIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::NewProp_includeOffline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Presence" },
		{ "Comment", "/**\n* Gets the presence data for the given <profileIds>. Will not include\n* offline profiles unless <includeOffline> is set to true.\n*\n* Service Name - Presence\n* Service Operation - GET_PRESENCE_OF_USERS\n* \n* @param groupId the id for the group\n* @param includeOffline Will not include offline profiles unless includeOffline is set to true.\n* @param callback The method to be invoked when the server response is received \n*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPresenceProxy.h" },
		{ "ToolTip", "Gets the presence data for the given <profileIds>. Will not include\noffline profiles unless <includeOffline> is set to true.\n\nService Name - Presence\nService Operation - GET_PRESENCE_OF_USERS\n\n@param groupId the id for the group\n@param includeOffline Will not include offline profiles unless includeOffline is set to true.\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPresenceProxy, nullptr, "GetPresenceOfUsers", nullptr, nullptr, sizeof(BCPresenceProxy_eventGetPresenceOfUsers_Parms), Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics
	{
		struct BCPresenceProxy_eventRegisterListenersForFriends_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString platform;
			bool biderectional;
			UBCPresenceProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_platform;
		static void NewProp_biderectional_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_biderectional;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventRegisterListenersForFriends_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::NewProp_platform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::NewProp_platform = { "platform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventRegisterListenersForFriends_Parms, platform), METADATA_PARAMS(Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::NewProp_platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::NewProp_platform_MetaData)) };
	void Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::NewProp_biderectional_SetBit(void* Obj)
	{
		((BCPresenceProxy_eventRegisterListenersForFriends_Parms*)Obj)->biderectional = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::NewProp_biderectional = { "biderectional", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCPresenceProxy_eventRegisterListenersForFriends_Parms), &Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::NewProp_biderectional_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventRegisterListenersForFriends_Parms, ReturnValue), Z_Construct_UClass_UBCPresenceProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::NewProp_platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::NewProp_biderectional,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Presence" },
		{ "Comment", "/**\n* Registers the caller for RTT presence updates from friends for the\n* given <platform>. Can be one of \"all\", \"brainCloud\", or \"facebook\".\n* If <bidirectional> is set to true, then also registers the targeted\n* users for presence updates from the caller.\n*\n* Service Name - Presence\n* Service Operation - REGISTER_LISTENERS_FOR_FRIENDS\n* \n* @param platform The store platform, valid stored: all, brainCloud, facebook\n* @param bidirectional Allows registration of target user for presence update\n* @param callback The method to be invoked when the server response is received \n*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPresenceProxy.h" },
		{ "ToolTip", "Registers the caller for RTT presence updates from friends for the\ngiven <platform>. Can be one of \"all\", \"brainCloud\", or \"facebook\".\nIf <bidirectional> is set to true, then also registers the targeted\nusers for presence updates from the caller.\n\nService Name - Presence\nService Operation - REGISTER_LISTENERS_FOR_FRIENDS\n\n@param platform The store platform, valid stored: all, brainCloud, facebook\n@param bidirectional Allows registration of target user for presence update\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPresenceProxy, nullptr, "RegisterListenersForFriends", nullptr, nullptr, sizeof(BCPresenceProxy_eventRegisterListenersForFriends_Parms), Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics
	{
		struct BCPresenceProxy_eventRegisterListenersForGroup_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			bool biderectional;
			UBCPresenceProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static void NewProp_biderectional_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_biderectional;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventRegisterListenersForGroup_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventRegisterListenersForGroup_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::NewProp_groupId_MetaData)) };
	void Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::NewProp_biderectional_SetBit(void* Obj)
	{
		((BCPresenceProxy_eventRegisterListenersForGroup_Parms*)Obj)->biderectional = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::NewProp_biderectional = { "biderectional", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCPresenceProxy_eventRegisterListenersForGroup_Parms), &Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::NewProp_biderectional_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventRegisterListenersForGroup_Parms, ReturnValue), Z_Construct_UClass_UBCPresenceProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::NewProp_biderectional,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Presence" },
		{ "Comment", "/**\n* Registers the caller for RTT presence updates from the members of\n* the given <groupId>. Caller must be a member of said group. If\n* <bidirectional> is set to true, then also registers the targeted\n* users for presence updates from the caller.\n*\n* Service Name - Presence\n* Service Operation - REGISTER_LISTENERS_FOR_GROUP\n* \n* @param groupId the id for the group\n* @param bidirectional Allows registration of target user for presence update\n* @param callback The method to be invoked when the server response is received \n*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPresenceProxy.h" },
		{ "ToolTip", "Registers the caller for RTT presence updates from the members of\nthe given <groupId>. Caller must be a member of said group. If\n<bidirectional> is set to true, then also registers the targeted\nusers for presence updates from the caller.\n\nService Name - Presence\nService Operation - REGISTER_LISTENERS_FOR_GROUP\n\n@param groupId the id for the group\n@param bidirectional Allows registration of target user for presence update\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPresenceProxy, nullptr, "RegisterListenersForGroup", nullptr, nullptr, sizeof(BCPresenceProxy_eventRegisterListenersForGroup_Parms), Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics
	{
		struct BCPresenceProxy_eventRegisterListenersForProfiles_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TArray<FString> profileIds;
			bool biderectional;
			UBCPresenceProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_profileIds;
		static void NewProp_biderectional_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_biderectional;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventRegisterListenersForProfiles_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::NewProp_profileIds_Inner = { "profileIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::NewProp_profileIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::NewProp_profileIds = { "profileIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventRegisterListenersForProfiles_Parms, profileIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::NewProp_profileIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::NewProp_profileIds_MetaData)) };
	void Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::NewProp_biderectional_SetBit(void* Obj)
	{
		((BCPresenceProxy_eventRegisterListenersForProfiles_Parms*)Obj)->biderectional = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::NewProp_biderectional = { "biderectional", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCPresenceProxy_eventRegisterListenersForProfiles_Parms), &Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::NewProp_biderectional_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventRegisterListenersForProfiles_Parms, ReturnValue), Z_Construct_UClass_UBCPresenceProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::NewProp_profileIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::NewProp_profileIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::NewProp_biderectional,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Presence" },
		{ "Comment", "/**\n* Registers the caller for RTT presence updates for the given\n* <profileIds>. If <bidirectional> is set to true, then also registers\n* the targeted users for presence updates from the caller.\n*\n* Service Name - Presence\n* Service Operation - REGISTER_LISTENERS_FOR_PROFILES\n* \n* @param profileIds The store platform, valid stored: all, brainCloud, facebook\n* @param bidirectional Allows registration of target user for presence update\n* @param callback The method to be invoked when the server response is received \n*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPresenceProxy.h" },
		{ "ToolTip", "Registers the caller for RTT presence updates for the given\n<profileIds>. If <bidirectional> is set to true, then also registers\nthe targeted users for presence updates from the caller.\n\nService Name - Presence\nService Operation - REGISTER_LISTENERS_FOR_PROFILES\n\n@param profileIds The store platform, valid stored: all, brainCloud, facebook\n@param bidirectional Allows registration of target user for presence update\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPresenceProxy, nullptr, "RegisterListenersForProfiles", nullptr, nullptr, sizeof(BCPresenceProxy_eventRegisterListenersForProfiles_Parms), Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPresenceProxy_SetVisibility_Statics
	{
		struct BCPresenceProxy_eventSetVisibility_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool visible;
			UBCPresenceProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPresenceProxy_SetVisibility_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventSetVisibility_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCPresenceProxy_SetVisibility_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((BCPresenceProxy_eventSetVisibility_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCPresenceProxy_SetVisibility_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCPresenceProxy_eventSetVisibility_Parms), &Z_Construct_UFunction_UBCPresenceProxy_SetVisibility_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPresenceProxy_SetVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventSetVisibility_Parms, ReturnValue), Z_Construct_UClass_UBCPresenceProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPresenceProxy_SetVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_SetVisibility_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_SetVisibility_Statics::NewProp_visible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_SetVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPresenceProxy_SetVisibility_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Presence" },
		{ "Comment", "/**\n* Update the presence data visible field for the caller.\n*\n* Service Name - Presence\n* Service Operation - SET_VISIBILITY\n* \n* @param visible is the player visible to others.\n* @param callback The method to be invoked when the server response is received \n*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPresenceProxy.h" },
		{ "ToolTip", "Update the presence data visible field for the caller.\n\nService Name - Presence\nService Operation - SET_VISIBILITY\n\n@param visible is the player visible to others.\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPresenceProxy_SetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPresenceProxy, nullptr, "SetVisibility", nullptr, nullptr, sizeof(BCPresenceProxy_eventSetVisibility_Parms), Z_Construct_UFunction_UBCPresenceProxy_SetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_SetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPresenceProxy_SetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_SetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPresenceProxy_SetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPresenceProxy_SetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPresenceProxy_StopListening_Statics
	{
		struct BCPresenceProxy_eventStopListening_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCPresenceProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPresenceProxy_StopListening_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventStopListening_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPresenceProxy_StopListening_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventStopListening_Parms, ReturnValue), Z_Construct_UClass_UBCPresenceProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPresenceProxy_StopListening_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_StopListening_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_StopListening_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPresenceProxy_StopListening_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Presence" },
		{ "Comment", "/**\n* Stops the caller from receiving RTT presence updates. Does not\n* affect the broadcasting of *their* presence updates to other\n* listeners.\n*\n* Service Name - Presence\n* Service Operation - STOP_LISTENING\n* \n* @param callback The method to be invoked when the server response is received \n*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPresenceProxy.h" },
		{ "ToolTip", "Stops the caller from receiving RTT presence updates. Does not\naffect the broadcasting of *their* presence updates to other\nlisteners.\n\nService Name - Presence\nService Operation - STOP_LISTENING\n\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPresenceProxy_StopListening_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPresenceProxy, nullptr, "StopListening", nullptr, nullptr, sizeof(BCPresenceProxy_eventStopListening_Parms), Z_Construct_UFunction_UBCPresenceProxy_StopListening_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_StopListening_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPresenceProxy_StopListening_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_StopListening_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPresenceProxy_StopListening()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPresenceProxy_StopListening_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPresenceProxy_UpdateActivity_Statics
	{
		struct BCPresenceProxy_eventUpdateActivity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString activity;
			UBCPresenceProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_activity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_activity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPresenceProxy_UpdateActivity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventUpdateActivity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPresenceProxy_UpdateActivity_Statics::NewProp_activity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPresenceProxy_UpdateActivity_Statics::NewProp_activity = { "activity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventUpdateActivity_Parms, activity), METADATA_PARAMS(Z_Construct_UFunction_UBCPresenceProxy_UpdateActivity_Statics::NewProp_activity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_UpdateActivity_Statics::NewProp_activity_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPresenceProxy_UpdateActivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPresenceProxy_eventUpdateActivity_Parms, ReturnValue), Z_Construct_UClass_UBCPresenceProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPresenceProxy_UpdateActivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_UpdateActivity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_UpdateActivity_Statics::NewProp_activity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPresenceProxy_UpdateActivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPresenceProxy_UpdateActivity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Presence" },
		{ "Comment", "/**\n* Update the presence data activity field for the caller.\n*\n* Service Name - Presence\n* Service Operation - UPDATE_ACTIVITY\n* \n* @param activity current activity \n* @param callback The method to be invoked when the server response is received \n*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPresenceProxy.h" },
		{ "ToolTip", "Update the presence data activity field for the caller.\n\nService Name - Presence\nService Operation - UPDATE_ACTIVITY\n\n@param activity current activity\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPresenceProxy_UpdateActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPresenceProxy, nullptr, "UpdateActivity", nullptr, nullptr, sizeof(BCPresenceProxy_eventUpdateActivity_Parms), Z_Construct_UFunction_UBCPresenceProxy_UpdateActivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_UpdateActivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPresenceProxy_UpdateActivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPresenceProxy_UpdateActivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPresenceProxy_UpdateActivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPresenceProxy_UpdateActivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCPresenceProxy_NoRegister()
	{
		return UBCPresenceProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCPresenceProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCPresenceProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCPresenceProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCPresenceProxy_ForcePush, "ForcePush" }, // 3340862810
		{ &Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfFriends, "GetPresenceOfFriends" }, // 3680342135
		{ &Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfGroup, "GetPresenceOfGroup" }, // 2274522421
		{ &Z_Construct_UFunction_UBCPresenceProxy_GetPresenceOfUsers, "GetPresenceOfUsers" }, // 1281645089
		{ &Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForFriends, "RegisterListenersForFriends" }, // 3544725915
		{ &Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForGroup, "RegisterListenersForGroup" }, // 404943482
		{ &Z_Construct_UFunction_UBCPresenceProxy_RegisterListenersForProfiles, "RegisterListenersForProfiles" }, // 2653213424
		{ &Z_Construct_UFunction_UBCPresenceProxy_SetVisibility, "SetVisibility" }, // 2827733497
		{ &Z_Construct_UFunction_UBCPresenceProxy_StopListening, "StopListening" }, // 464170859
		{ &Z_Construct_UFunction_UBCPresenceProxy_UpdateActivity, "UpdateActivity" }, // 629106925
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCPresenceProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCPresenceProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPresenceProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCPresenceProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCPresenceProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCPresenceProxy_Statics::ClassParams = {
		&UBCPresenceProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCPresenceProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCPresenceProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCPresenceProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCPresenceProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCPresenceProxy, 1711834081);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCPresenceProxy>()
	{
		return UBCPresenceProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCPresenceProxy(Z_Construct_UClass_UBCPresenceProxy, &UBCPresenceProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCPresenceProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCPresenceProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
