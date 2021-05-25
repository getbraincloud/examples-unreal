// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCClientProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCClientProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCClientProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCClientProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCClientProxy::execOverrideLanguageCode)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_languageCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::OverrideLanguageCode(Z_Param_brainCloudWrapper,Z_Param_languageCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execOverrideCountryCode)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_countryCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::OverrideCountryCode(Z_Param_brainCloudWrapper,Z_Param_countryCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execInsertEndOfMessageBundleMarker)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::InsertEndOfMessageBundleMarker(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execFlushCachedMessages)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_sendApiErrorCallbacks);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::FlushCachedMessages(Z_Param_brainCloudWrapper,Z_Param_sendApiErrorCallbacks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execRetryCachedMessages)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::RetryCachedMessages(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execEnableNetworkErrorMessageCaching)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::EnableNetworkErrorMessageCaching(Z_Param_brainCloudWrapper,Z_Param_enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execGetAuthenticationPacketTimeout)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UBCClientProxy::GetAuthenticationPacketTimeout(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execGetPacketTimeouts)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetPacketTimeouts(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execGetEventServer)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBCClientProxy::GetEventServer(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execGetRTTConnectionId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBCClientProxy::GetRTTConnectionId(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execGetProfileId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBCClientProxy::GetProfileId(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execGetBrainCloudClientVersion)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBCClientProxy::GetBrainCloudClientVersion(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execGetReleasePlatform)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBCClientProxy::GetReleasePlatform(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execGetSessionId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBCClientProxy::GetSessionId(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execGetAppId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBCClientProxy::GetAppId(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execSetErrorCallbackOn202Status)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_isError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::SetErrorCallbackOn202Status(Z_Param_brainCloudWrapper,Z_Param_isError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execSetOldStyleStatusMessageErrorCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::SetOldStyleStatusMessageErrorCallback(Z_Param_brainCloudWrapper,Z_Param_enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execSetUploadLowTransferRateThreshold)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FIntProperty,Z_Param_bytesPerSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::SetUploadLowTransferRateThreshold(Z_Param_brainCloudWrapper,Z_Param_bytesPerSec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execGetUploadLowTransferRateThreshold)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UBCClientProxy::GetUploadLowTransferRateThreshold(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execSetUploadLowTransferRateTimeout)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeoutSecs);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::SetUploadLowTransferRateTimeout(Z_Param_brainCloudWrapper,Z_Param_timeoutSecs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execGetUploadLowTransferRateTimeout)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UBCClientProxy::GetUploadLowTransferRateTimeout(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execSetAuthenticationPacketTimeout)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeoutSecs);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::SetAuthenticationPacketTimeout(Z_Param_brainCloudWrapper,Z_Param_timeoutSecs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execSetPacketTimeoutsToDefault)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::SetPacketTimeoutsToDefault(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execSetPacketTimeouts)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_TARRAY_REF(int32,Z_Param_Out_timeouts);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::SetPacketTimeouts(Z_Param_brainCloudWrapper,Z_Param_Out_timeouts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execSetHeartbeatInterval)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FIntProperty,Z_Param_intervalInMilliseconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::SetHeartbeatInterval(Z_Param_brainCloudWrapper,Z_Param_intervalInMilliseconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execHeartbeat)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::Heartbeat(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execResetCommunication)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::ResetCommunication(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execIsInitialized)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBCClientProxy::IsInitialized(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execIsAuthenticated)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBCClientProxy::IsAuthenticated(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execEnableLogging)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_shouldEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::EnableLogging(Z_Param_brainCloudWrapper,Z_Param_shouldEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execRunCallbacks)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::RunCallbacks(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execInitializeIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_GET_PROPERTY(FStrProperty,Z_Param_anonymousId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::InitializeIdentity(Z_Param_brainCloudWrapper,Z_Param_profileId,Z_Param_anonymousId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execInitializeWithApps)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_secretMap);
		P_GET_PROPERTY(FStrProperty,Z_Param_serverUrl);
		P_GET_PROPERTY(FStrProperty,Z_Param_appId);
		P_GET_PROPERTY(FStrProperty,Z_Param_version);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::InitializeWithApps(Z_Param_brainCloudWrapper,Z_Param_Out_secretMap,Z_Param_serverUrl,Z_Param_appId,Z_Param_version);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCClientProxy::execInitialize)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_serverUrl);
		P_GET_PROPERTY(FStrProperty,Z_Param_secretKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_appId);
		P_GET_PROPERTY(FStrProperty,Z_Param_version);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCClientProxy::Initialize(Z_Param_brainCloudWrapper,Z_Param_serverUrl,Z_Param_secretKey,Z_Param_appId,Z_Param_version);
		P_NATIVE_END;
	}
	void UBCClientProxy::StaticRegisterNativesUBCClientProxy()
	{
		UClass* Class = UBCClientProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableLogging", &UBCClientProxy::execEnableLogging },
			{ "EnableNetworkErrorMessageCaching", &UBCClientProxy::execEnableNetworkErrorMessageCaching },
			{ "FlushCachedMessages", &UBCClientProxy::execFlushCachedMessages },
			{ "GetAppId", &UBCClientProxy::execGetAppId },
			{ "GetAuthenticationPacketTimeout", &UBCClientProxy::execGetAuthenticationPacketTimeout },
			{ "GetBrainCloudClientVersion", &UBCClientProxy::execGetBrainCloudClientVersion },
			{ "GetEventServer", &UBCClientProxy::execGetEventServer },
			{ "GetPacketTimeouts", &UBCClientProxy::execGetPacketTimeouts },
			{ "GetProfileId", &UBCClientProxy::execGetProfileId },
			{ "GetReleasePlatform", &UBCClientProxy::execGetReleasePlatform },
			{ "GetRTTConnectionId", &UBCClientProxy::execGetRTTConnectionId },
			{ "GetSessionId", &UBCClientProxy::execGetSessionId },
			{ "GetUploadLowTransferRateThreshold", &UBCClientProxy::execGetUploadLowTransferRateThreshold },
			{ "GetUploadLowTransferRateTimeout", &UBCClientProxy::execGetUploadLowTransferRateTimeout },
			{ "Heartbeat", &UBCClientProxy::execHeartbeat },
			{ "Initialize", &UBCClientProxy::execInitialize },
			{ "InitializeIdentity", &UBCClientProxy::execInitializeIdentity },
			{ "InitializeWithApps", &UBCClientProxy::execInitializeWithApps },
			{ "InsertEndOfMessageBundleMarker", &UBCClientProxy::execInsertEndOfMessageBundleMarker },
			{ "IsAuthenticated", &UBCClientProxy::execIsAuthenticated },
			{ "IsInitialized", &UBCClientProxy::execIsInitialized },
			{ "OverrideCountryCode", &UBCClientProxy::execOverrideCountryCode },
			{ "OverrideLanguageCode", &UBCClientProxy::execOverrideLanguageCode },
			{ "ResetCommunication", &UBCClientProxy::execResetCommunication },
			{ "RetryCachedMessages", &UBCClientProxy::execRetryCachedMessages },
			{ "RunCallbacks", &UBCClientProxy::execRunCallbacks },
			{ "SetAuthenticationPacketTimeout", &UBCClientProxy::execSetAuthenticationPacketTimeout },
			{ "SetErrorCallbackOn202Status", &UBCClientProxy::execSetErrorCallbackOn202Status },
			{ "SetHeartbeatInterval", &UBCClientProxy::execSetHeartbeatInterval },
			{ "SetOldStyleStatusMessageErrorCallback", &UBCClientProxy::execSetOldStyleStatusMessageErrorCallback },
			{ "SetPacketTimeouts", &UBCClientProxy::execSetPacketTimeouts },
			{ "SetPacketTimeoutsToDefault", &UBCClientProxy::execSetPacketTimeoutsToDefault },
			{ "SetUploadLowTransferRateThreshold", &UBCClientProxy::execSetUploadLowTransferRateThreshold },
			{ "SetUploadLowTransferRateTimeout", &UBCClientProxy::execSetUploadLowTransferRateTimeout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCClientProxy_EnableLogging_Statics
	{
		struct BCClientProxy_eventEnableLogging_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool shouldEnable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_shouldEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_EnableLogging_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventEnableLogging_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCClientProxy_EnableLogging_Statics::NewProp_shouldEnable_SetBit(void* Obj)
	{
		((BCClientProxy_eventEnableLogging_Parms*)Obj)->shouldEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCClientProxy_EnableLogging_Statics::NewProp_shouldEnable = { "shouldEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCClientProxy_eventEnableLogging_Parms), &Z_Construct_UFunction_UBCClientProxy_EnableLogging_Statics::NewProp_shouldEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_EnableLogging_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_EnableLogging_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_EnableLogging_Statics::NewProp_shouldEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_EnableLogging_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Set to true to enable logging packets to the output log\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Set to true to enable logging packets to the output log" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_EnableLogging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "EnableLogging", nullptr, nullptr, sizeof(BCClientProxy_eventEnableLogging_Parms), Z_Construct_UFunction_UBCClientProxy_EnableLogging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_EnableLogging_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_EnableLogging_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_EnableLogging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_EnableLogging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_EnableLogging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_EnableNetworkErrorMessageCaching_Statics
	{
		struct BCClientProxy_eventEnableNetworkErrorMessageCaching_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool enabled;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_EnableNetworkErrorMessageCaching_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventEnableNetworkErrorMessageCaching_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCClientProxy_EnableNetworkErrorMessageCaching_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((BCClientProxy_eventEnableNetworkErrorMessageCaching_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCClientProxy_EnableNetworkErrorMessageCaching_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCClientProxy_eventEnableNetworkErrorMessageCaching_Parms), &Z_Construct_UFunction_UBCClientProxy_EnableNetworkErrorMessageCaching_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_EnableNetworkErrorMessageCaching_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_EnableNetworkErrorMessageCaching_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_EnableNetworkErrorMessageCaching_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_EnableNetworkErrorMessageCaching_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Enables the message caching upon network error, which is disabled by default.\n\x09* Once enabled, if a client side network error is encountered\n\x09* (i.e. brainCloud server is unreachable presumably due to the client\n\x09* network being down) the sdk will do the following:\n\x09*\n\x09* 1 - cache the currently queued messages to brainCloud\n\x09* 2 - call the network error callback\n\x09* 3 - then expect the app to call either:\n\x09*     a) retryCachedMessages() to retry sending to brainCloud\n\x09*     b) flushCachedMessages() to dump all messages in the queue.\n\x09*\n\x09* Between steps 2 & 3, the app can prompt the user to retry connecting\n\x09* to brainCloud to determine whether to follow path 3a or 3b.\n\x09*\n\x09* Note that if path 3a is followed, and another network error is encountered,\n\x09* the process will begin all over again from step 1.\n\x09*\n\x09* WARNING - the brainCloud sdk will cache *all* api calls sent\n\x09* when a network error is encountered if this mechanism is enabled.\n\x09* This effectively freezes all communication with brainCloud.\n\x09* Apps must call either retryCachedMessages() or flushCachedMessages()\n\x09* for the brainCloud SDK to resume sending messages.\n\x09* resetCommunication() will also clear the message cache.\n\x09*\n\x09* Param - enabled True if message should be cached on timeout\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Enables the message caching upon network error, which is disabled by default.\nOnce enabled, if a client side network error is encountered\n(i.e. brainCloud server is unreachable presumably due to the client\nnetwork being down) the sdk will do the following:\n\n1 - cache the currently queued messages to brainCloud\n2 - call the network error callback\n3 - then expect the app to call either:\n    a) retryCachedMessages() to retry sending to brainCloud\n    b) flushCachedMessages() to dump all messages in the queue.\n\nBetween steps 2 & 3, the app can prompt the user to retry connecting\nto brainCloud to determine whether to follow path 3a or 3b.\n\nNote that if path 3a is followed, and another network error is encountered,\nthe process will begin all over again from step 1.\n\nWARNING - the brainCloud sdk will cache *all* api calls sent\nwhen a network error is encountered if this mechanism is enabled.\nThis effectively freezes all communication with brainCloud.\nApps must call either retryCachedMessages() or flushCachedMessages()\nfor the brainCloud SDK to resume sending messages.\nresetCommunication() will also clear the message cache.\n\nParam - enabled True if message should be cached on timeout" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_EnableNetworkErrorMessageCaching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "EnableNetworkErrorMessageCaching", nullptr, nullptr, sizeof(BCClientProxy_eventEnableNetworkErrorMessageCaching_Parms), Z_Construct_UFunction_UBCClientProxy_EnableNetworkErrorMessageCaching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_EnableNetworkErrorMessageCaching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_EnableNetworkErrorMessageCaching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_EnableNetworkErrorMessageCaching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_EnableNetworkErrorMessageCaching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_EnableNetworkErrorMessageCaching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_FlushCachedMessages_Statics
	{
		struct BCClientProxy_eventFlushCachedMessages_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool sendApiErrorCallbacks;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_sendApiErrorCallbacks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_sendApiErrorCallbacks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_FlushCachedMessages_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventFlushCachedMessages_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCClientProxy_FlushCachedMessages_Statics::NewProp_sendApiErrorCallbacks_SetBit(void* Obj)
	{
		((BCClientProxy_eventFlushCachedMessages_Parms*)Obj)->sendApiErrorCallbacks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCClientProxy_FlushCachedMessages_Statics::NewProp_sendApiErrorCallbacks = { "sendApiErrorCallbacks", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCClientProxy_eventFlushCachedMessages_Parms), &Z_Construct_UFunction_UBCClientProxy_FlushCachedMessages_Statics::NewProp_sendApiErrorCallbacks_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_FlushCachedMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_FlushCachedMessages_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_FlushCachedMessages_Statics::NewProp_sendApiErrorCallbacks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_FlushCachedMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Flushes the cached messages to resume api call processing. This will dump\n\x09* all of the cached messages in the queue.\n\x09*\n\x09* Param - sendApiErrorCallbacks If set to true API error callbacks will\n\x09* be called for every cached message with statusCode CLIENT_NETWORK_ERROR\n\x09* and reasonCode CLIENT_NETWORK_ERROR_TIMEOUT.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Flushes the cached messages to resume api call processing. This will dump\nall of the cached messages in the queue.\n\nParam - sendApiErrorCallbacks If set to true API error callbacks will\nbe called for every cached message with statusCode CLIENT_NETWORK_ERROR\nand reasonCode CLIENT_NETWORK_ERROR_TIMEOUT." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_FlushCachedMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "FlushCachedMessages", nullptr, nullptr, sizeof(BCClientProxy_eventFlushCachedMessages_Parms), Z_Construct_UFunction_UBCClientProxy_FlushCachedMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_FlushCachedMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_FlushCachedMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_FlushCachedMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_FlushCachedMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_FlushCachedMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_GetAppId_Statics
	{
		struct BCClientProxy_eventGetAppId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_GetAppId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetAppId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_GetAppId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCClientProxy_GetAppId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetAppId_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_GetAppId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetAppId_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_GetAppId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetAppId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetAppId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_GetAppId_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_GetAppId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "GetAppId", nullptr, nullptr, sizeof(BCClientProxy_eventGetAppId_Parms), Z_Construct_UFunction_UBCClientProxy_GetAppId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetAppId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_GetAppId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetAppId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_GetAppId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_GetAppId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_GetAuthenticationPacketTimeout_Statics
	{
		struct BCClientProxy_eventGetAuthenticationPacketTimeout_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_GetAuthenticationPacketTimeout_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetAuthenticationPacketTimeout_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCClientProxy_GetAuthenticationPacketTimeout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetAuthenticationPacketTimeout_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_GetAuthenticationPacketTimeout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetAuthenticationPacketTimeout_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetAuthenticationPacketTimeout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_GetAuthenticationPacketTimeout_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Gets the authentication packet timeout which is tracked separately\n\x09* from all other packets. Note that authentication packets are never\n\x09* retried and so this value represents the total time a client would\n\x09* wait to receive a reply to an authentication api call. By default\n\x09* this timeout is set to 15 seconds.\n\x09*\n\x09* Return - The timeout in seconds\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Gets the authentication packet timeout which is tracked separately\nfrom all other packets. Note that authentication packets are never\nretried and so this value represents the total time a client would\nwait to receive a reply to an authentication api call. By default\nthis timeout is set to 15 seconds.\n\nReturn - The timeout in seconds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_GetAuthenticationPacketTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "GetAuthenticationPacketTimeout", nullptr, nullptr, sizeof(BCClientProxy_eventGetAuthenticationPacketTimeout_Parms), Z_Construct_UFunction_UBCClientProxy_GetAuthenticationPacketTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetAuthenticationPacketTimeout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_GetAuthenticationPacketTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetAuthenticationPacketTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_GetAuthenticationPacketTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_GetAuthenticationPacketTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_GetBrainCloudClientVersion_Statics
	{
		struct BCClientProxy_eventGetBrainCloudClientVersion_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_GetBrainCloudClientVersion_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetBrainCloudClientVersion_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_GetBrainCloudClientVersion_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCClientProxy_GetBrainCloudClientVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetBrainCloudClientVersion_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_GetBrainCloudClientVersion_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetBrainCloudClientVersion_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_GetBrainCloudClientVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetBrainCloudClientVersion_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetBrainCloudClientVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_GetBrainCloudClientVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_GetBrainCloudClientVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "GetBrainCloudClientVersion", nullptr, nullptr, sizeof(BCClientProxy_eventGetBrainCloudClientVersion_Parms), Z_Construct_UFunction_UBCClientProxy_GetBrainCloudClientVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetBrainCloudClientVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_GetBrainCloudClientVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetBrainCloudClientVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_GetBrainCloudClientVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_GetBrainCloudClientVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_GetEventServer_Statics
	{
		struct BCClientProxy_eventGetEventServer_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_GetEventServer_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetEventServer_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_GetEventServer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCClientProxy_GetEventServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetEventServer_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_GetEventServer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetEventServer_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_GetEventServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetEventServer_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetEventServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_GetEventServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_GetEventServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "GetEventServer", nullptr, nullptr, sizeof(BCClientProxy_eventGetEventServer_Parms), Z_Construct_UFunction_UBCClientProxy_GetEventServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetEventServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_GetEventServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetEventServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_GetEventServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_GetEventServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_GetPacketTimeouts_Statics
	{
		struct BCClientProxy_eventGetPacketTimeouts_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_GetPacketTimeouts_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetPacketTimeouts_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCClientProxy_GetPacketTimeouts_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_GetPacketTimeouts_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCClientProxy_GetPacketTimeouts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetPacketTimeouts_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_GetPacketTimeouts_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetPacketTimeouts_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_GetPacketTimeouts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetPacketTimeouts_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetPacketTimeouts_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetPacketTimeouts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_GetPacketTimeouts_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Returns the list of packet timeouts.\n\x09*\n\x09* Return - the list of packet timeouts.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Returns the list of packet timeouts.\n\nReturn - the list of packet timeouts." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_GetPacketTimeouts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "GetPacketTimeouts", nullptr, nullptr, sizeof(BCClientProxy_eventGetPacketTimeouts_Parms), Z_Construct_UFunction_UBCClientProxy_GetPacketTimeouts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetPacketTimeouts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_GetPacketTimeouts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetPacketTimeouts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_GetPacketTimeouts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_GetPacketTimeouts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_GetProfileId_Statics
	{
		struct BCClientProxy_eventGetProfileId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_GetProfileId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetProfileId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_GetProfileId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCClientProxy_GetProfileId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetProfileId_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_GetProfileId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetProfileId_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_GetProfileId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetProfileId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetProfileId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_GetProfileId_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_GetProfileId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "GetProfileId", nullptr, nullptr, sizeof(BCClientProxy_eventGetProfileId_Parms), Z_Construct_UFunction_UBCClientProxy_GetProfileId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetProfileId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_GetProfileId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetProfileId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_GetProfileId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_GetProfileId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_GetReleasePlatform_Statics
	{
		struct BCClientProxy_eventGetReleasePlatform_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_GetReleasePlatform_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetReleasePlatform_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_GetReleasePlatform_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCClientProxy_GetReleasePlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetReleasePlatform_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_GetReleasePlatform_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetReleasePlatform_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_GetReleasePlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetReleasePlatform_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetReleasePlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_GetReleasePlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_GetReleasePlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "GetReleasePlatform", nullptr, nullptr, sizeof(BCClientProxy_eventGetReleasePlatform_Parms), Z_Construct_UFunction_UBCClientProxy_GetReleasePlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetReleasePlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_GetReleasePlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetReleasePlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_GetReleasePlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_GetReleasePlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_GetRTTConnectionId_Statics
	{
		struct BCClientProxy_eventGetRTTConnectionId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_GetRTTConnectionId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetRTTConnectionId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_GetRTTConnectionId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCClientProxy_GetRTTConnectionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetRTTConnectionId_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_GetRTTConnectionId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetRTTConnectionId_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_GetRTTConnectionId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetRTTConnectionId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetRTTConnectionId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_GetRTTConnectionId_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_GetRTTConnectionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "GetRTTConnectionId", nullptr, nullptr, sizeof(BCClientProxy_eventGetRTTConnectionId_Parms), Z_Construct_UFunction_UBCClientProxy_GetRTTConnectionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetRTTConnectionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_GetRTTConnectionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetRTTConnectionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_GetRTTConnectionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_GetRTTConnectionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_GetSessionId_Statics
	{
		struct BCClientProxy_eventGetSessionId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_GetSessionId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetSessionId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_GetSessionId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCClientProxy_GetSessionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetSessionId_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_GetSessionId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetSessionId_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_GetSessionId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetSessionId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetSessionId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_GetSessionId_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_GetSessionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "GetSessionId", nullptr, nullptr, sizeof(BCClientProxy_eventGetSessionId_Parms), Z_Construct_UFunction_UBCClientProxy_GetSessionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetSessionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_GetSessionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetSessionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_GetSessionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_GetSessionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateThreshold_Statics
	{
		struct BCClientProxy_eventGetUploadLowTransferRateThreshold_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateThreshold_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetUploadLowTransferRateThreshold_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetUploadLowTransferRateThreshold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateThreshold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateThreshold_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Returns the low transfer rate threshold in bytes/sec\n\x09*\n\x09* Return - The low transfer rate threshold in bytes/sec\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Returns the low transfer rate threshold in bytes/sec\n\nReturn - The low transfer rate threshold in bytes/sec" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "GetUploadLowTransferRateThreshold", nullptr, nullptr, sizeof(BCClientProxy_eventGetUploadLowTransferRateThreshold_Parms), Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateTimeout_Statics
	{
		struct BCClientProxy_eventGetUploadLowTransferRateTimeout_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateTimeout_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetUploadLowTransferRateTimeout_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateTimeout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventGetUploadLowTransferRateTimeout_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateTimeout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateTimeout_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateTimeout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateTimeout_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Returns the low transfer rate timeout in secs\n\x09*\n\x09* Return - The low transfer rate timeout in secs\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Returns the low transfer rate timeout in secs\n\nReturn - The low transfer rate timeout in secs" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "GetUploadLowTransferRateTimeout", nullptr, nullptr, sizeof(BCClientProxy_eventGetUploadLowTransferRateTimeout_Parms), Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateTimeout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_Heartbeat_Statics
	{
		struct BCClientProxy_eventHeartbeat_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_Heartbeat_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventHeartbeat_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_Heartbeat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_Heartbeat_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_Heartbeat_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Send an empty message to the server, which essentially polls the\n\x09* server for any new events to send to this client.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Send an empty message to the server, which essentially polls the\nserver for any new events to send to this client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_Heartbeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "Heartbeat", nullptr, nullptr, sizeof(BCClientProxy_eventHeartbeat_Parms), Z_Construct_UFunction_UBCClientProxy_Heartbeat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_Heartbeat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_Heartbeat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_Heartbeat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_Heartbeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_Heartbeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_Initialize_Statics
	{
		struct BCClientProxy_eventInitialize_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString serverUrl;
			FString secretKey;
			FString appId;
			FString version;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_serverUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_secretKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_secretKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_appId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_appId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_version_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventInitialize_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_serverUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_serverUrl = { "serverUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventInitialize_Parms, serverUrl), METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_serverUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_serverUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_secretKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_secretKey = { "secretKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventInitialize_Parms, secretKey), METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_secretKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_secretKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_appId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_appId = { "appId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventInitialize_Parms, appId), METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_appId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_appId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_version_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventInitialize_Parms, version), METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_version_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_serverUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_secretKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_appId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::NewProp_version,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Method initializes the BrainCloudClient.\n\x09*\n\x09* Param - serverURL The url to the brainCloud server\n\x09* Param - secretKey The secret key for your app\n\x09* Param - appId The app's id\n\x09* Param - version The app's version\n\x09*/" },
		{ "CPP_Default_appId", "" },
		{ "CPP_Default_secretKey", "" },
		{ "CPP_Default_serverUrl", "https://sharedprod.braincloudservers.com/dispatcherv2" },
		{ "CPP_Default_version", "1.0.0" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Method initializes the BrainCloudClient.\n\nParam - serverURL The url to the brainCloud server\nParam - secretKey The secret key for your app\nParam - appId The app's id\nParam - version The app's version" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "Initialize", nullptr, nullptr, sizeof(BCClientProxy_eventInitialize_Parms), Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics
	{
		struct BCClientProxy_eventInitializeIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString profileId;
			FString anonymousId;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_anonymousId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_anonymousId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventInitializeIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventInitializeIdentity_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics::NewProp_profileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics::NewProp_anonymousId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics::NewProp_anonymousId = { "anonymousId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventInitializeIdentity_Parms, anonymousId), METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics::NewProp_anonymousId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics::NewProp_anonymousId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics::NewProp_anonymousId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Initialize - initializes the identity service with the saved\n\x09* anonymous installation id and most recently used profile id\n\x09*\n\x09* Param - profileId The id of the profile id that was most recently used by the app (on this device)\n\x09* Param - anonymousId  The anonymous installation id that was generated for this device\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Initialize - initializes the identity service with the saved\nanonymous installation id and most recently used profile id\n\nParam - profileId The id of the profile id that was most recently used by the app (on this device)\nParam - anonymousId  The anonymous installation id that was generated for this device" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "InitializeIdentity", nullptr, nullptr, sizeof(BCClientProxy_eventInitializeIdentity_Parms), Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_InitializeIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_InitializeIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics
	{
		struct BCClientProxy_eventInitializeWithApps_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TMap<FString,FString> secretMap;
			FString serverUrl;
			FString appId;
			FString version;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_secretMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_secretMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_secretMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_secretMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_serverUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_appId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_appId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_version_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventInitializeWithApps_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_secretMap_ValueProp = { "secretMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_secretMap_Key_KeyProp = { "secretMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_secretMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_secretMap = { "secretMap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventInitializeWithApps_Parms, secretMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_secretMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_secretMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_serverUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_serverUrl = { "serverUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventInitializeWithApps_Parms, serverUrl), METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_serverUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_serverUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_appId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_appId = { "appId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventInitializeWithApps_Parms, appId), METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_appId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_appId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_version_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventInitializeWithApps_Parms, version), METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_version_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_secretMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_secretMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_secretMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_serverUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_appId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::NewProp_version,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Method initializes the BrainCloudClient.\n\x09*\n\x09* Param - serverURL The url to the brainCloud server\n\x09* Param - secretMap The map of appId to secret\n\x09* Param - appId The app's id\n\x09* Param - version The app's version\n\x09*/" },
		{ "CPP_Default_appId", "" },
		{ "CPP_Default_serverUrl", "https://sharedprod.braincloudservers.com/dispatcherv2" },
		{ "CPP_Default_version", "1.0.0" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Method initializes the BrainCloudClient.\n\nParam - serverURL The url to the brainCloud server\nParam - secretMap The map of appId to secret\nParam - appId The app's id\nParam - version The app's version" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "InitializeWithApps", nullptr, nullptr, sizeof(BCClientProxy_eventInitializeWithApps_Parms), Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_InitializeWithApps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_InitializeWithApps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_InsertEndOfMessageBundleMarker_Statics
	{
		struct BCClientProxy_eventInsertEndOfMessageBundleMarker_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_InsertEndOfMessageBundleMarker_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventInsertEndOfMessageBundleMarker_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_InsertEndOfMessageBundleMarker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_InsertEndOfMessageBundleMarker_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_InsertEndOfMessageBundleMarker_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Inserts a marker which will tell the brainCloud comms layer\n\x09* to close the message bundle off at this point. Any messages queued\n\x09* before this method was called will likely be bundled together in\n\x09* the next send to the server.\n\x09*\n\x09* To ensure that only a single message is sent to the server you would\n\x09* do something like this:\n\x09*\n\x09* InsertEndOfMessageBundleMarker()\n\x09* SomeApiCall()\n\x09* InsertEndOfMessageBundleMarker()\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Inserts a marker which will tell the brainCloud comms layer\nto close the message bundle off at this point. Any messages queued\nbefore this method was called will likely be bundled together in\nthe next send to the server.\n\nTo ensure that only a single message is sent to the server you would\ndo something like this:\n\nInsertEndOfMessageBundleMarker()\nSomeApiCall()\nInsertEndOfMessageBundleMarker()" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_InsertEndOfMessageBundleMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "InsertEndOfMessageBundleMarker", nullptr, nullptr, sizeof(BCClientProxy_eventInsertEndOfMessageBundleMarker_Parms), Z_Construct_UFunction_UBCClientProxy_InsertEndOfMessageBundleMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_InsertEndOfMessageBundleMarker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_InsertEndOfMessageBundleMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_InsertEndOfMessageBundleMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_InsertEndOfMessageBundleMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_InsertEndOfMessageBundleMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_IsAuthenticated_Statics
	{
		struct BCClientProxy_eventIsAuthenticated_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_IsAuthenticated_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventIsAuthenticated_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCClientProxy_IsAuthenticated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BCClientProxy_eventIsAuthenticated_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCClientProxy_IsAuthenticated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCClientProxy_eventIsAuthenticated_Parms), &Z_Construct_UFunction_UBCClientProxy_IsAuthenticated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_IsAuthenticated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_IsAuthenticated_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_IsAuthenticated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_IsAuthenticated_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Returns whether the client is authenticated with the brainCloud server.\n\x09*\n\x09* Return - True if authenticated, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Returns whether the client is authenticated with the brainCloud server.\n\nReturn - True if authenticated, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_IsAuthenticated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "IsAuthenticated", nullptr, nullptr, sizeof(BCClientProxy_eventIsAuthenticated_Parms), Z_Construct_UFunction_UBCClientProxy_IsAuthenticated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_IsAuthenticated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_IsAuthenticated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_IsAuthenticated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_IsAuthenticated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_IsAuthenticated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_IsInitialized_Statics
	{
		struct BCClientProxy_eventIsInitialized_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_IsInitialized_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventIsInitialized_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCClientProxy_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BCClientProxy_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCClientProxy_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCClientProxy_eventIsInitialized_Parms), &Z_Construct_UFunction_UBCClientProxy_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_IsInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_IsInitialized_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_IsInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_IsInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Returns whether the client is initialized.\n\x09*\n\x09* Return - True if initialized, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Returns whether the client is initialized.\n\nReturn - True if initialized, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_IsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "IsInitialized", nullptr, nullptr, sizeof(BCClientProxy_eventIsInitialized_Parms), Z_Construct_UFunction_UBCClientProxy_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_IsInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_IsInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_IsInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_IsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_IsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_OverrideCountryCode_Statics
	{
		struct BCClientProxy_eventOverrideCountryCode_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString countryCode;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_countryCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_countryCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_OverrideCountryCode_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventOverrideCountryCode_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_OverrideCountryCode_Statics::NewProp_countryCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCClientProxy_OverrideCountryCode_Statics::NewProp_countryCode = { "countryCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventOverrideCountryCode_Parms, countryCode), METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_OverrideCountryCode_Statics::NewProp_countryCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_OverrideCountryCode_Statics::NewProp_countryCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_OverrideCountryCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_OverrideCountryCode_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_OverrideCountryCode_Statics::NewProp_countryCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_OverrideCountryCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Sets the country code sent to brainCloud when a user authenticates.\n\x09* Will override any auto detected country.\n\x09* Param - countryCode ISO 3166-1 two-letter country code\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Sets the country code sent to brainCloud when a user authenticates.\nWill override any auto detected country.\nParam - countryCode ISO 3166-1 two-letter country code" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_OverrideCountryCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "OverrideCountryCode", nullptr, nullptr, sizeof(BCClientProxy_eventOverrideCountryCode_Parms), Z_Construct_UFunction_UBCClientProxy_OverrideCountryCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_OverrideCountryCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_OverrideCountryCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_OverrideCountryCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_OverrideCountryCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_OverrideCountryCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_OverrideLanguageCode_Statics
	{
		struct BCClientProxy_eventOverrideLanguageCode_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString languageCode;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_languageCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_languageCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_OverrideLanguageCode_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventOverrideLanguageCode_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_OverrideLanguageCode_Statics::NewProp_languageCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCClientProxy_OverrideLanguageCode_Statics::NewProp_languageCode = { "languageCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventOverrideLanguageCode_Parms, languageCode), METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_OverrideLanguageCode_Statics::NewProp_languageCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_OverrideLanguageCode_Statics::NewProp_languageCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_OverrideLanguageCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_OverrideLanguageCode_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_OverrideLanguageCode_Statics::NewProp_languageCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_OverrideLanguageCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Sets the language code sent to brainCloud when a user authenticates.\n\x09* If the language is set to a non-ISO 639-1 standard value the game default will be used instead.\n\x09* Will override any auto detected language.\n\x09* Param - languageCode ISO 639-1 two-letter language code\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Sets the language code sent to brainCloud when a user authenticates.\nIf the language is set to a non-ISO 639-1 standard value the game default will be used instead.\nWill override any auto detected language.\nParam - languageCode ISO 639-1 two-letter language code" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_OverrideLanguageCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "OverrideLanguageCode", nullptr, nullptr, sizeof(BCClientProxy_eventOverrideLanguageCode_Parms), Z_Construct_UFunction_UBCClientProxy_OverrideLanguageCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_OverrideLanguageCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_OverrideLanguageCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_OverrideLanguageCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_OverrideLanguageCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_OverrideLanguageCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_ResetCommunication_Statics
	{
		struct BCClientProxy_eventResetCommunication_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_ResetCommunication_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventResetCommunication_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_ResetCommunication_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_ResetCommunication_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_ResetCommunication_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Clears any pending messages from communication library.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Clears any pending messages from communication library." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_ResetCommunication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "ResetCommunication", nullptr, nullptr, sizeof(BCClientProxy_eventResetCommunication_Parms), Z_Construct_UFunction_UBCClientProxy_ResetCommunication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_ResetCommunication_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_ResetCommunication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_ResetCommunication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_ResetCommunication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_ResetCommunication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_RetryCachedMessages_Statics
	{
		struct BCClientProxy_eventRetryCachedMessages_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_RetryCachedMessages_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventRetryCachedMessages_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_RetryCachedMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_RetryCachedMessages_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_RetryCachedMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/** \n\x09* Attempts to resend any cached messages. If no messages are in the cache,\n\x09* this method does nothing.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Attempts to resend any cached messages. If no messages are in the cache,\nthis method does nothing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_RetryCachedMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "RetryCachedMessages", nullptr, nullptr, sizeof(BCClientProxy_eventRetryCachedMessages_Parms), Z_Construct_UFunction_UBCClientProxy_RetryCachedMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_RetryCachedMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_RetryCachedMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_RetryCachedMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_RetryCachedMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_RetryCachedMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_RunCallbacks_Statics
	{
		struct BCClientProxy_eventRunCallbacks_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_RunCallbacks_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventRunCallbacks_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_RunCallbacks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_RunCallbacks_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_RunCallbacks_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Run callbacks, to be called once per frame from your main thread\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Run callbacks, to be called once per frame from your main thread" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_RunCallbacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "RunCallbacks", nullptr, nullptr, sizeof(BCClientProxy_eventRunCallbacks_Parms), Z_Construct_UFunction_UBCClientProxy_RunCallbacks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_RunCallbacks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_RunCallbacks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_RunCallbacks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_RunCallbacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_RunCallbacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_SetAuthenticationPacketTimeout_Statics
	{
		struct BCClientProxy_eventSetAuthenticationPacketTimeout_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 timeoutSecs;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeoutSecs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_SetAuthenticationPacketTimeout_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventSetAuthenticationPacketTimeout_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCClientProxy_SetAuthenticationPacketTimeout_Statics::NewProp_timeoutSecs = { "timeoutSecs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventSetAuthenticationPacketTimeout_Parms, timeoutSecs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_SetAuthenticationPacketTimeout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_SetAuthenticationPacketTimeout_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_SetAuthenticationPacketTimeout_Statics::NewProp_timeoutSecs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_SetAuthenticationPacketTimeout_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Sets the authentication packet timeout which is tracked separately\n\x09* from all other packets. Note that authentication packets are never\n\x09* retried and so this value represents the total time a client would\n\x09* wait to receive a reply to an authentication api call. By default\n\x09* this timeout is set to 15 seconds.\n\x09*\n\x09* Param - timeoutSecs The timeout in seconds\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Sets the authentication packet timeout which is tracked separately\nfrom all other packets. Note that authentication packets are never\nretried and so this value represents the total time a client would\nwait to receive a reply to an authentication api call. By default\nthis timeout is set to 15 seconds.\n\nParam - timeoutSecs The timeout in seconds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_SetAuthenticationPacketTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "SetAuthenticationPacketTimeout", nullptr, nullptr, sizeof(BCClientProxy_eventSetAuthenticationPacketTimeout_Parms), Z_Construct_UFunction_UBCClientProxy_SetAuthenticationPacketTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_SetAuthenticationPacketTimeout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_SetAuthenticationPacketTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_SetAuthenticationPacketTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_SetAuthenticationPacketTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_SetAuthenticationPacketTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_SetErrorCallbackOn202Status_Statics
	{
		struct BCClientProxy_eventSetErrorCallbackOn202Status_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool isError;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_isError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_SetErrorCallbackOn202Status_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventSetErrorCallbackOn202Status_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCClientProxy_SetErrorCallbackOn202Status_Statics::NewProp_isError_SetBit(void* Obj)
	{
		((BCClientProxy_eventSetErrorCallbackOn202Status_Parms*)Obj)->isError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCClientProxy_SetErrorCallbackOn202Status_Statics::NewProp_isError = { "isError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCClientProxy_eventSetErrorCallbackOn202Status_Parms), &Z_Construct_UFunction_UBCClientProxy_SetErrorCallbackOn202Status_Statics::NewProp_isError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_SetErrorCallbackOn202Status_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_SetErrorCallbackOn202Status_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_SetErrorCallbackOn202Status_Statics::NewProp_isError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_SetErrorCallbackOn202Status_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Sets whether the error callback is triggered when a 202 status\n\x09* is received from the server. By default this is true and should\n\x09* only be set to false for backward compatibility.\n\x09*\n\x09* Param - isError If set to true, 202 is treated as an error\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Sets whether the error callback is triggered when a 202 status\nis received from the server. By default this is true and should\nonly be set to false for backward compatibility.\n\nParam - isError If set to true, 202 is treated as an error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_SetErrorCallbackOn202Status_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "SetErrorCallbackOn202Status", nullptr, nullptr, sizeof(BCClientProxy_eventSetErrorCallbackOn202Status_Parms), Z_Construct_UFunction_UBCClientProxy_SetErrorCallbackOn202Status_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_SetErrorCallbackOn202Status_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_SetErrorCallbackOn202Status_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_SetErrorCallbackOn202Status_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_SetErrorCallbackOn202Status()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_SetErrorCallbackOn202Status_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_SetHeartbeatInterval_Statics
	{
		struct BCClientProxy_eventSetHeartbeatInterval_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 intervalInMilliseconds;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_intervalInMilliseconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_SetHeartbeatInterval_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventSetHeartbeatInterval_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCClientProxy_SetHeartbeatInterval_Statics::NewProp_intervalInMilliseconds = { "intervalInMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventSetHeartbeatInterval_Parms, intervalInMilliseconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_SetHeartbeatInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_SetHeartbeatInterval_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_SetHeartbeatInterval_Statics::NewProp_intervalInMilliseconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_SetHeartbeatInterval_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Set an interval in ms for which the BrainCloud will contact the server\n\x09* and receive any pending events\n\x09* Param - intervalInMilliseconds - The time between heartbeats in milliseconds\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Set an interval in ms for which the BrainCloud will contact the server\nand receive any pending events\nParam - intervalInMilliseconds - The time between heartbeats in milliseconds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_SetHeartbeatInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "SetHeartbeatInterval", nullptr, nullptr, sizeof(BCClientProxy_eventSetHeartbeatInterval_Parms), Z_Construct_UFunction_UBCClientProxy_SetHeartbeatInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_SetHeartbeatInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_SetHeartbeatInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_SetHeartbeatInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_SetHeartbeatInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_SetHeartbeatInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_SetOldStyleStatusMessageErrorCallback_Statics
	{
		struct BCClientProxy_eventSetOldStyleStatusMessageErrorCallback_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool enabled;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_SetOldStyleStatusMessageErrorCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventSetOldStyleStatusMessageErrorCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCClientProxy_SetOldStyleStatusMessageErrorCallback_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((BCClientProxy_eventSetOldStyleStatusMessageErrorCallback_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCClientProxy_SetOldStyleStatusMessageErrorCallback_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCClientProxy_eventSetOldStyleStatusMessageErrorCallback_Parms), &Z_Construct_UFunction_UBCClientProxy_SetOldStyleStatusMessageErrorCallback_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_SetOldStyleStatusMessageErrorCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_SetOldStyleStatusMessageErrorCallback_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_SetOldStyleStatusMessageErrorCallback_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_SetOldStyleStatusMessageErrorCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Sets the error callback to return the status message instead of the\n\x09* error json string. This flag is used to conform to pre-2.17 client\n\x09* behaviour.\n\x09*\n\x09* Param - enabled If set to true, enable\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Sets the error callback to return the status message instead of the\nerror json string. This flag is used to conform to pre-2.17 client\nbehaviour.\n\nParam - enabled If set to true, enable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_SetOldStyleStatusMessageErrorCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "SetOldStyleStatusMessageErrorCallback", nullptr, nullptr, sizeof(BCClientProxy_eventSetOldStyleStatusMessageErrorCallback_Parms), Z_Construct_UFunction_UBCClientProxy_SetOldStyleStatusMessageErrorCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_SetOldStyleStatusMessageErrorCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_SetOldStyleStatusMessageErrorCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_SetOldStyleStatusMessageErrorCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_SetOldStyleStatusMessageErrorCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_SetOldStyleStatusMessageErrorCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_SetPacketTimeouts_Statics
	{
		struct BCClientProxy_eventSetPacketTimeouts_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TArray<int32> timeouts;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeouts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeouts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_timeouts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_SetPacketTimeouts_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventSetPacketTimeouts_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCClientProxy_SetPacketTimeouts_Statics::NewProp_timeouts_Inner = { "timeouts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_SetPacketTimeouts_Statics::NewProp_timeouts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCClientProxy_SetPacketTimeouts_Statics::NewProp_timeouts = { "timeouts", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventSetPacketTimeouts_Parms, timeouts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_SetPacketTimeouts_Statics::NewProp_timeouts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_SetPacketTimeouts_Statics::NewProp_timeouts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_SetPacketTimeouts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_SetPacketTimeouts_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_SetPacketTimeouts_Statics::NewProp_timeouts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_SetPacketTimeouts_Statics::NewProp_timeouts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_SetPacketTimeouts_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Sets the packet timeouts using a list of integers that\n\x09* represent timeout values in seconds for each packet retry. The\n\x09* first item in the list represents the timeout for the first packet\n\x09* attempt, the second for the second packet attempt, and so on.\n\x09*\n\x09* The number of entries in this array determines how many packet\n\x09* retries will occur.\n\x09*\n\x09* By default, the packet timeout array is {10, 10, 10}\n\x09*\n\x09* Param - timeouts - An array of packet timeouts.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Sets the packet timeouts using a list of integers that\nrepresent timeout values in seconds for each packet retry. The\nfirst item in the list represents the timeout for the first packet\nattempt, the second for the second packet attempt, and so on.\n\nThe number of entries in this array determines how many packet\nretries will occur.\n\nBy default, the packet timeout array is {10, 10, 10}\n\nParam - timeouts - An array of packet timeouts." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_SetPacketTimeouts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "SetPacketTimeouts", nullptr, nullptr, sizeof(BCClientProxy_eventSetPacketTimeouts_Parms), Z_Construct_UFunction_UBCClientProxy_SetPacketTimeouts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_SetPacketTimeouts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_SetPacketTimeouts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_SetPacketTimeouts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_SetPacketTimeouts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_SetPacketTimeouts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_SetPacketTimeoutsToDefault_Statics
	{
		struct BCClientProxy_eventSetPacketTimeoutsToDefault_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_SetPacketTimeoutsToDefault_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventSetPacketTimeoutsToDefault_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_SetPacketTimeoutsToDefault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_SetPacketTimeoutsToDefault_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_SetPacketTimeoutsToDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Sets the packet timeouts back to the default ie {10, 10, 10}\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Sets the packet timeouts back to the default ie {10, 10, 10}" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_SetPacketTimeoutsToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "SetPacketTimeoutsToDefault", nullptr, nullptr, sizeof(BCClientProxy_eventSetPacketTimeoutsToDefault_Parms), Z_Construct_UFunction_UBCClientProxy_SetPacketTimeoutsToDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_SetPacketTimeoutsToDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_SetPacketTimeoutsToDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_SetPacketTimeoutsToDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_SetPacketTimeoutsToDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_SetPacketTimeoutsToDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateThreshold_Statics
	{
		struct BCClientProxy_eventSetUploadLowTransferRateThreshold_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 bytesPerSec;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bytesPerSec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateThreshold_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventSetUploadLowTransferRateThreshold_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateThreshold_Statics::NewProp_bytesPerSec = { "bytesPerSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventSetUploadLowTransferRateThreshold_Parms, bytesPerSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateThreshold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateThreshold_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateThreshold_Statics::NewProp_bytesPerSec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Sets the low transfer rate threshold of an upload in bytes/sec.\n\x09* If the transfer rate dips below the given threshold longer\n\x09* than the specified timeout, the transfer will fail.\n\x09* By default this is set to 50 bytes/sec. Note that this setting\n\x09* only works on platforms that use libcurl (non-windows and win32 but\n\x09* not windows store or phone apps).\n\x09*\n\x09* Param - bytesPerSec The low transfer rate threshold in bytes/sec\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Sets the low transfer rate threshold of an upload in bytes/sec.\nIf the transfer rate dips below the given threshold longer\nthan the specified timeout, the transfer will fail.\nBy default this is set to 50 bytes/sec. Note that this setting\nonly works on platforms that use libcurl (non-windows and win32 but\nnot windows store or phone apps).\n\nParam - bytesPerSec The low transfer rate threshold in bytes/sec" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "SetUploadLowTransferRateThreshold", nullptr, nullptr, sizeof(BCClientProxy_eventSetUploadLowTransferRateThreshold_Parms), Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateTimeout_Statics
	{
		struct BCClientProxy_eventSetUploadLowTransferRateTimeout_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 timeoutSecs;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeoutSecs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateTimeout_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventSetUploadLowTransferRateTimeout_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateTimeout_Statics::NewProp_timeoutSecs = { "timeoutSecs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCClientProxy_eventSetUploadLowTransferRateTimeout_Parms, timeoutSecs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateTimeout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateTimeout_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateTimeout_Statics::NewProp_timeoutSecs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateTimeout_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* Sets the timeout in seconds of a low speed upload\n\x09* (ie transfer rate which is underneath the low transfer rate threshold).\n\x09* By default this is set to 120 secs. Setting this value to 0 will\n\x09* turn off the timeout.\n\x09*\n\x09* Param - timeoutSecs The timeout in secs\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ToolTip", "Sets the timeout in seconds of a low speed upload\n(ie transfer rate which is underneath the low transfer rate threshold).\nBy default this is set to 120 secs. Setting this value to 0 will\nturn off the timeout.\n\nParam - timeoutSecs The timeout in secs" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCClientProxy, nullptr, "SetUploadLowTransferRateTimeout", nullptr, nullptr, sizeof(BCClientProxy_eventSetUploadLowTransferRateTimeout_Parms), Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateTimeout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCClientProxy_NoRegister()
	{
		return UBCClientProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCClientProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCClientProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCClientProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCClientProxy_EnableLogging, "EnableLogging" }, // 3127812127
		{ &Z_Construct_UFunction_UBCClientProxy_EnableNetworkErrorMessageCaching, "EnableNetworkErrorMessageCaching" }, // 2120887089
		{ &Z_Construct_UFunction_UBCClientProxy_FlushCachedMessages, "FlushCachedMessages" }, // 1713935933
		{ &Z_Construct_UFunction_UBCClientProxy_GetAppId, "GetAppId" }, // 2677591625
		{ &Z_Construct_UFunction_UBCClientProxy_GetAuthenticationPacketTimeout, "GetAuthenticationPacketTimeout" }, // 3481107665
		{ &Z_Construct_UFunction_UBCClientProxy_GetBrainCloudClientVersion, "GetBrainCloudClientVersion" }, // 2511331403
		{ &Z_Construct_UFunction_UBCClientProxy_GetEventServer, "GetEventServer" }, // 1801231353
		{ &Z_Construct_UFunction_UBCClientProxy_GetPacketTimeouts, "GetPacketTimeouts" }, // 2973572994
		{ &Z_Construct_UFunction_UBCClientProxy_GetProfileId, "GetProfileId" }, // 3973570071
		{ &Z_Construct_UFunction_UBCClientProxy_GetReleasePlatform, "GetReleasePlatform" }, // 914912086
		{ &Z_Construct_UFunction_UBCClientProxy_GetRTTConnectionId, "GetRTTConnectionId" }, // 2946701696
		{ &Z_Construct_UFunction_UBCClientProxy_GetSessionId, "GetSessionId" }, // 1432776710
		{ &Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateThreshold, "GetUploadLowTransferRateThreshold" }, // 2269093714
		{ &Z_Construct_UFunction_UBCClientProxy_GetUploadLowTransferRateTimeout, "GetUploadLowTransferRateTimeout" }, // 1868700548
		{ &Z_Construct_UFunction_UBCClientProxy_Heartbeat, "Heartbeat" }, // 965554472
		{ &Z_Construct_UFunction_UBCClientProxy_Initialize, "Initialize" }, // 251017747
		{ &Z_Construct_UFunction_UBCClientProxy_InitializeIdentity, "InitializeIdentity" }, // 2731212818
		{ &Z_Construct_UFunction_UBCClientProxy_InitializeWithApps, "InitializeWithApps" }, // 97789951
		{ &Z_Construct_UFunction_UBCClientProxy_InsertEndOfMessageBundleMarker, "InsertEndOfMessageBundleMarker" }, // 2765925646
		{ &Z_Construct_UFunction_UBCClientProxy_IsAuthenticated, "IsAuthenticated" }, // 1280999030
		{ &Z_Construct_UFunction_UBCClientProxy_IsInitialized, "IsInitialized" }, // 2450778068
		{ &Z_Construct_UFunction_UBCClientProxy_OverrideCountryCode, "OverrideCountryCode" }, // 3953368152
		{ &Z_Construct_UFunction_UBCClientProxy_OverrideLanguageCode, "OverrideLanguageCode" }, // 2309085200
		{ &Z_Construct_UFunction_UBCClientProxy_ResetCommunication, "ResetCommunication" }, // 1427442883
		{ &Z_Construct_UFunction_UBCClientProxy_RetryCachedMessages, "RetryCachedMessages" }, // 3701062857
		{ &Z_Construct_UFunction_UBCClientProxy_RunCallbacks, "RunCallbacks" }, // 2993702541
		{ &Z_Construct_UFunction_UBCClientProxy_SetAuthenticationPacketTimeout, "SetAuthenticationPacketTimeout" }, // 2698064239
		{ &Z_Construct_UFunction_UBCClientProxy_SetErrorCallbackOn202Status, "SetErrorCallbackOn202Status" }, // 3547052427
		{ &Z_Construct_UFunction_UBCClientProxy_SetHeartbeatInterval, "SetHeartbeatInterval" }, // 2945856692
		{ &Z_Construct_UFunction_UBCClientProxy_SetOldStyleStatusMessageErrorCallback, "SetOldStyleStatusMessageErrorCallback" }, // 1477478582
		{ &Z_Construct_UFunction_UBCClientProxy_SetPacketTimeouts, "SetPacketTimeouts" }, // 2185204160
		{ &Z_Construct_UFunction_UBCClientProxy_SetPacketTimeoutsToDefault, "SetPacketTimeoutsToDefault" }, // 3809569893
		{ &Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateThreshold, "SetUploadLowTransferRateThreshold" }, // 1621506630
		{ &Z_Construct_UFunction_UBCClientProxy_SetUploadLowTransferRateTimeout, "SetUploadLowTransferRateTimeout" }, // 1965599892
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCClientProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCClientProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCClientProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCClientProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCClientProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCClientProxy_Statics::ClassParams = {
		&UBCClientProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCClientProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCClientProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCClientProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCClientProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCClientProxy, 914813869);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCClientProxy>()
	{
		return UBCClientProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCClientProxy(Z_Construct_UClass_UBCClientProxy, &UBCClientProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCClientProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCClientProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
