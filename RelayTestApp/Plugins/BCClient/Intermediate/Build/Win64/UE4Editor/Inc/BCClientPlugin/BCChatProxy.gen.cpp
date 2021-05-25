// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCChatProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCChatProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCChatProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCChatProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCChatProxy::execUpdateChatMessage)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_channelId);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_messageId);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_version);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_plain);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_jsonRich);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCChatProxy**)Z_Param__Result=UBCChatProxy::UpdateChatMessage(Z_Param_brainCloudWrapper,Z_Param_in_channelId,Z_Param_in_messageId,Z_Param_in_version,Z_Param_in_plain,Z_Param_in_jsonRich);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCChatProxy::execPostChatMessageSimple)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_channelId);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_plain);
		P_GET_UBOOL(Z_Param_in_recordInHistory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCChatProxy**)Z_Param__Result=UBCChatProxy::PostChatMessageSimple(Z_Param_brainCloudWrapper,Z_Param_in_channelId,Z_Param_in_plain,Z_Param_in_recordInHistory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCChatProxy::execPostChatMessage)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_channelId);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_plain);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_jsonRich);
		P_GET_UBOOL(Z_Param_in_recordInHistory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCChatProxy**)Z_Param__Result=UBCChatProxy::PostChatMessage(Z_Param_brainCloudWrapper,Z_Param_in_channelId,Z_Param_in_plain,Z_Param_in_jsonRich,Z_Param_in_recordInHistory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCChatProxy::execGetSubscribedChannels)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_channelType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCChatProxy**)Z_Param__Result=UBCChatProxy::GetSubscribedChannels(Z_Param_brainCloudWrapper,Z_Param_in_channelType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCChatProxy::execGetRecentChatMessages)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_channelId);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_maxToReturn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCChatProxy**)Z_Param__Result=UBCChatProxy::GetRecentChatMessages(Z_Param_brainCloudWrapper,Z_Param_in_channelId,Z_Param_in_maxToReturn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCChatProxy::execGetChatMessage)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_channelId);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_messageId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCChatProxy**)Z_Param__Result=UBCChatProxy::GetChatMessage(Z_Param_brainCloudWrapper,Z_Param_in_channelId,Z_Param_in_messageId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCChatProxy::execGetChannelInfo)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_channelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCChatProxy**)Z_Param__Result=UBCChatProxy::GetChannelInfo(Z_Param_brainCloudWrapper,Z_Param_in_channelId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCChatProxy::execGetChannelId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_channelType);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_channelSubId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCChatProxy**)Z_Param__Result=UBCChatProxy::GetChannelId(Z_Param_brainCloudWrapper,Z_Param_in_channelType,Z_Param_in_channelSubId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCChatProxy::execDeleteChatMessage)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_channelId);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_messageId);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_version);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCChatProxy**)Z_Param__Result=UBCChatProxy::DeleteChatMessage(Z_Param_brainCloudWrapper,Z_Param_in_channelId,Z_Param_in_messageId,Z_Param_in_version);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCChatProxy::execChannelDisconnect)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_channelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCChatProxy**)Z_Param__Result=UBCChatProxy::ChannelDisconnect(Z_Param_brainCloudWrapper,Z_Param_in_channelId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCChatProxy::execChannelConnect)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_channelId);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_maxToReturn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCChatProxy**)Z_Param__Result=UBCChatProxy::ChannelConnect(Z_Param_brainCloudWrapper,Z_Param_in_channelId,Z_Param_in_maxToReturn);
		P_NATIVE_END;
	}
	void UBCChatProxy::StaticRegisterNativesUBCChatProxy()
	{
		UClass* Class = UBCChatProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChannelConnect", &UBCChatProxy::execChannelConnect },
			{ "ChannelDisconnect", &UBCChatProxy::execChannelDisconnect },
			{ "DeleteChatMessage", &UBCChatProxy::execDeleteChatMessage },
			{ "GetChannelId", &UBCChatProxy::execGetChannelId },
			{ "GetChannelInfo", &UBCChatProxy::execGetChannelInfo },
			{ "GetChatMessage", &UBCChatProxy::execGetChatMessage },
			{ "GetRecentChatMessages", &UBCChatProxy::execGetRecentChatMessages },
			{ "GetSubscribedChannels", &UBCChatProxy::execGetSubscribedChannels },
			{ "PostChatMessage", &UBCChatProxy::execPostChatMessage },
			{ "PostChatMessageSimple", &UBCChatProxy::execPostChatMessageSimple },
			{ "UpdateChatMessage", &UBCChatProxy::execUpdateChatMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCChatProxy_ChannelConnect_Statics
	{
		struct BCChatProxy_eventChannelConnect_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_channelId;
			int32 in_maxToReturn;
			UBCChatProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_channelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_channelId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_maxToReturn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_ChannelConnect_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventChannelConnect_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_ChannelConnect_Statics::NewProp_in_channelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCChatProxy_ChannelConnect_Statics::NewProp_in_channelId = { "in_channelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventChannelConnect_Parms, in_channelId), METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_ChannelConnect_Statics::NewProp_in_channelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_ChannelConnect_Statics::NewProp_in_channelId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCChatProxy_ChannelConnect_Statics::NewProp_in_maxToReturn = { "in_maxToReturn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventChannelConnect_Parms, in_maxToReturn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_ChannelConnect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventChannelConnect_Parms, ReturnValue), Z_Construct_UClass_UBCChatProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCChatProxy_ChannelConnect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_ChannelConnect_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_ChannelConnect_Statics::NewProp_in_channelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_ChannelConnect_Statics::NewProp_in_maxToReturn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_ChannelConnect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_ChannelConnect_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Chat" },
		{ "Comment", "/**\n    * Registers a listener for incoming events from <channelId>. \n    * Also returns a list of <maxReturn> recent messages from history.\n    * \n    * Service Name - chat\n\x09* Service Operation - CHANNEL_CONNECT\n    *\n    * @param in_channelId The channelId to connect to\n\x09* @param in_maxToReturn Maximum number of messages to return.\n\x09* @param in_callback Method to be invoked when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCChatProxy.h" },
		{ "ToolTip", "Registers a listener for incoming events from <channelId>.\nAlso returns a list of <maxReturn> recent messages from history.\n\nService Name - chat\nService Operation - CHANNEL_CONNECT\n\n@param in_channelId The channelId to connect to\n@param in_maxToReturn Maximum number of messages to return.\n@param in_callback Method to be invoked when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCChatProxy_ChannelConnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCChatProxy, nullptr, "ChannelConnect", nullptr, nullptr, sizeof(BCChatProxy_eventChannelConnect_Parms), Z_Construct_UFunction_UBCChatProxy_ChannelConnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_ChannelConnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_ChannelConnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_ChannelConnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCChatProxy_ChannelConnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCChatProxy_ChannelConnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCChatProxy_ChannelDisconnect_Statics
	{
		struct BCChatProxy_eventChannelDisconnect_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_channelId;
			UBCChatProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_channelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_channelId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_ChannelDisconnect_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventChannelDisconnect_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_ChannelDisconnect_Statics::NewProp_in_channelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCChatProxy_ChannelDisconnect_Statics::NewProp_in_channelId = { "in_channelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventChannelDisconnect_Parms, in_channelId), METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_ChannelDisconnect_Statics::NewProp_in_channelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_ChannelDisconnect_Statics::NewProp_in_channelId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_ChannelDisconnect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventChannelDisconnect_Parms, ReturnValue), Z_Construct_UClass_UBCChatProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCChatProxy_ChannelDisconnect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_ChannelDisconnect_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_ChannelDisconnect_Statics::NewProp_in_channelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_ChannelDisconnect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_ChannelDisconnect_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Chat" },
		{ "Comment", "/**\n    * Unregisters a listener for incoming events from <channelId>.\n    * \n    * Service Name - chat\n\x09* Service Operation - CHANNEL_DISCONNECT\n    *\n    * @param in_channelId The channelId to disconnect from\n\x09* @param in_callback Method to be invoked when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCChatProxy.h" },
		{ "ToolTip", "Unregisters a listener for incoming events from <channelId>.\n\nService Name - chat\nService Operation - CHANNEL_DISCONNECT\n\n@param in_channelId The channelId to disconnect from\n@param in_callback Method to be invoked when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCChatProxy_ChannelDisconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCChatProxy, nullptr, "ChannelDisconnect", nullptr, nullptr, sizeof(BCChatProxy_eventChannelDisconnect_Parms), Z_Construct_UFunction_UBCChatProxy_ChannelDisconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_ChannelDisconnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_ChannelDisconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_ChannelDisconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCChatProxy_ChannelDisconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCChatProxy_ChannelDisconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics
	{
		struct BCChatProxy_eventDeleteChatMessage_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_channelId;
			FString in_messageId;
			int32 in_version;
			UBCChatProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_channelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_channelId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_messageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_messageId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_version;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventDeleteChatMessage_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::NewProp_in_channelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::NewProp_in_channelId = { "in_channelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventDeleteChatMessage_Parms, in_channelId), METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::NewProp_in_channelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::NewProp_in_channelId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::NewProp_in_messageId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::NewProp_in_messageId = { "in_messageId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventDeleteChatMessage_Parms, in_messageId), METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::NewProp_in_messageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::NewProp_in_messageId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::NewProp_in_version = { "in_version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventDeleteChatMessage_Parms, in_version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventDeleteChatMessage_Parms, ReturnValue), Z_Construct_UClass_UBCChatProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::NewProp_in_channelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::NewProp_in_messageId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::NewProp_in_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Chat" },
		{ "Comment", "/**\n    * Delete a chat message. <version> \n    * \n    * Service Name - chat\n\x09* Service Operation - DELETE_CHAT_MESSAGE\n    *\n    * @param in_channelId The channelId to delete the message from\n    * @param in_messageId The messagedId of the message to delete\n    * @param in_version The version of the message to delete, must match the latest or pass -1 to bypass version check.\n\x09* @param in_callback Method to be invoked when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCChatProxy.h" },
		{ "ToolTip", "Delete a chat message. <version>\n\nService Name - chat\nService Operation - DELETE_CHAT_MESSAGE\n\n@param in_channelId The channelId to delete the message from\n@param in_messageId The messagedId of the message to delete\n@param in_version The version of the message to delete, must match the latest or pass -1 to bypass version check.\n@param in_callback Method to be invoked when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCChatProxy, nullptr, "DeleteChatMessage", nullptr, nullptr, sizeof(BCChatProxy_eventDeleteChatMessage_Parms), Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics
	{
		struct BCChatProxy_eventGetChannelId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_channelType;
			FString in_channelSubId;
			UBCChatProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_channelType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_channelType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_channelSubId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_channelSubId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventGetChannelId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::NewProp_in_channelType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::NewProp_in_channelType = { "in_channelType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventGetChannelId_Parms, in_channelType), METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::NewProp_in_channelType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::NewProp_in_channelType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::NewProp_in_channelSubId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::NewProp_in_channelSubId = { "in_channelSubId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventGetChannelId_Parms, in_channelSubId), METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::NewProp_in_channelSubId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::NewProp_in_channelSubId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventGetChannelId_Parms, ReturnValue), Z_Construct_UClass_UBCChatProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::NewProp_in_channelType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::NewProp_in_channelSubId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Chat" },
		{ "Comment", "/**\n    * Gets the channelId for the given <channelType> and <channelSubId>. .\n    * \n    * Service Name - chat\n\x09* Service Operation - GET_CHANNEL_ID\n    *\n    * @param in_channelType The in_channelType of the channelId to retrieve, must be one of \"gl\"(GlobalChannelType) or \"gr\"(GroupChannelType)\n    * @param in_channelSubId The in_channelSubId of the channelId to retrieve\n\x09* @param in_callback Method to be invoked when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCChatProxy.h" },
		{ "ToolTip", "Gets the channelId for the given <channelType> and <channelSubId>. .\n\nService Name - chat\nService Operation - GET_CHANNEL_ID\n\n@param in_channelType The in_channelType of the channelId to retrieve, must be one of \"gl\"(GlobalChannelType) or \"gr\"(GroupChannelType)\n@param in_channelSubId The in_channelSubId of the channelId to retrieve\n@param in_callback Method to be invoked when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCChatProxy, nullptr, "GetChannelId", nullptr, nullptr, sizeof(BCChatProxy_eventGetChannelId_Parms), Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCChatProxy_GetChannelId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCChatProxy_GetChannelId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCChatProxy_GetChannelInfo_Statics
	{
		struct BCChatProxy_eventGetChannelInfo_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_channelId;
			UBCChatProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_channelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_channelId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_GetChannelInfo_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventGetChannelInfo_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_GetChannelInfo_Statics::NewProp_in_channelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCChatProxy_GetChannelInfo_Statics::NewProp_in_channelId = { "in_channelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventGetChannelInfo_Parms, in_channelId), METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_GetChannelInfo_Statics::NewProp_in_channelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_GetChannelInfo_Statics::NewProp_in_channelId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_GetChannelInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventGetChannelInfo_Parms, ReturnValue), Z_Construct_UClass_UBCChatProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCChatProxy_GetChannelInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_GetChannelInfo_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_GetChannelInfo_Statics::NewProp_in_channelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_GetChannelInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_GetChannelInfo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Chat" },
		{ "Comment", "/**\n    * Gets description info and activity stats for channel <channelId>.\n    * Note that numMsgs and listeners only returned for non-global groups.\n    * Only callable for channels the user is a member of.\n    * \n    * Service Name - chat\n\x09* Service Operation - GET_CHANNEL_INFO\n    *\n    * @param in_channelId The channelId to delete the message from\n\x09* @param in_callback Method to be invoked when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCChatProxy.h" },
		{ "ToolTip", "Gets description info and activity stats for channel <channelId>.\nNote that numMsgs and listeners only returned for non-global groups.\nOnly callable for channels the user is a member of.\n\nService Name - chat\nService Operation - GET_CHANNEL_INFO\n\n@param in_channelId The channelId to delete the message from\n@param in_callback Method to be invoked when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCChatProxy_GetChannelInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCChatProxy, nullptr, "GetChannelInfo", nullptr, nullptr, sizeof(BCChatProxy_eventGetChannelInfo_Parms), Z_Construct_UFunction_UBCChatProxy_GetChannelInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_GetChannelInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_GetChannelInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_GetChannelInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCChatProxy_GetChannelInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCChatProxy_GetChannelInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics
	{
		struct BCChatProxy_eventGetChatMessage_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_channelId;
			FString in_messageId;
			UBCChatProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_channelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_channelId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_messageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_messageId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventGetChatMessage_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::NewProp_in_channelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::NewProp_in_channelId = { "in_channelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventGetChatMessage_Parms, in_channelId), METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::NewProp_in_channelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::NewProp_in_channelId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::NewProp_in_messageId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::NewProp_in_messageId = { "in_messageId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventGetChatMessage_Parms, in_messageId), METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::NewProp_in_messageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::NewProp_in_messageId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventGetChatMessage_Parms, ReturnValue), Z_Construct_UClass_UBCChatProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::NewProp_in_channelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::NewProp_in_messageId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Chat" },
		{ "Comment", "/**\n    * Gets a populated chat object (normally for editing).\n    * \n    * Service Name - chat\n\x09* Service Operation - GET_CHAT_MESSAGE\n    *\n    * @param in_channelId The channelId of the message to retrieve\n    * @param in_messageId The messagedId of the message to retrieve\n\x09* @param in_callback Method to be invoked when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCChatProxy.h" },
		{ "ToolTip", "Gets a populated chat object (normally for editing).\n\nService Name - chat\nService Operation - GET_CHAT_MESSAGE\n\n@param in_channelId The channelId of the message to retrieve\n@param in_messageId The messagedId of the message to retrieve\n@param in_callback Method to be invoked when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCChatProxy, nullptr, "GetChatMessage", nullptr, nullptr, sizeof(BCChatProxy_eventGetChatMessage_Parms), Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCChatProxy_GetChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCChatProxy_GetChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages_Statics
	{
		struct BCChatProxy_eventGetRecentChatMessages_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_channelId;
			int32 in_maxToReturn;
			UBCChatProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_channelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_channelId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_maxToReturn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventGetRecentChatMessages_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages_Statics::NewProp_in_channelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages_Statics::NewProp_in_channelId = { "in_channelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventGetRecentChatMessages_Parms, in_channelId), METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages_Statics::NewProp_in_channelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages_Statics::NewProp_in_channelId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages_Statics::NewProp_in_maxToReturn = { "in_maxToReturn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventGetRecentChatMessages_Parms, in_maxToReturn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventGetRecentChatMessages_Parms, ReturnValue), Z_Construct_UClass_UBCChatProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages_Statics::NewProp_in_channelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages_Statics::NewProp_in_maxToReturn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Chat" },
		{ "Comment", "/**\n    * Get a list of <maxReturn> messages from history of channel <channelId>\n    * \n    * Service Name - chat\n\x09* Service Operation - GET_RECENT_CHAT_MESSAGES\n    *\n    * @param in_channelId The channelId to get recent chat history to\n\x09* @param in_maxToReturn Maximum number of messages to return.\n\x09* @param in_callback Method to be invoked when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCChatProxy.h" },
		{ "ToolTip", "Get a list of <maxReturn> messages from history of channel <channelId>\n\nService Name - chat\nService Operation - GET_RECENT_CHAT_MESSAGES\n\n@param in_channelId The channelId to get recent chat history to\n@param in_maxToReturn Maximum number of messages to return.\n@param in_callback Method to be invoked when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCChatProxy, nullptr, "GetRecentChatMessages", nullptr, nullptr, sizeof(BCChatProxy_eventGetRecentChatMessages_Parms), Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCChatProxy_GetSubscribedChannels_Statics
	{
		struct BCChatProxy_eventGetSubscribedChannels_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_channelType;
			UBCChatProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_channelType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_channelType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_GetSubscribedChannels_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventGetSubscribedChannels_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_GetSubscribedChannels_Statics::NewProp_in_channelType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCChatProxy_GetSubscribedChannels_Statics::NewProp_in_channelType = { "in_channelType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventGetSubscribedChannels_Parms, in_channelType), METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_GetSubscribedChannels_Statics::NewProp_in_channelType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_GetSubscribedChannels_Statics::NewProp_in_channelType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_GetSubscribedChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventGetSubscribedChannels_Parms, ReturnValue), Z_Construct_UClass_UBCChatProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCChatProxy_GetSubscribedChannels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_GetSubscribedChannels_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_GetSubscribedChannels_Statics::NewProp_in_channelType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_GetSubscribedChannels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_GetSubscribedChannels_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Chat" },
		{ "Comment", "/**\n    * Gets a list of the channels of type <channelType> that the user has access to.\n    * \n    * Service Name - chat\n\x09* Service Operation - GET_SUBSCRIBED_CHANNELS\n    *\n    * @param in_channelType The in_channelType of the channelIds to retrieve, must be one of \"gl\"(GlobalChannelType) or \"gr\"(GroupChannelType)\n\x09* @param in_callback Method to be invoked when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCChatProxy.h" },
		{ "ToolTip", "Gets a list of the channels of type <channelType> that the user has access to.\n\nService Name - chat\nService Operation - GET_SUBSCRIBED_CHANNELS\n\n@param in_channelType The in_channelType of the channelIds to retrieve, must be one of \"gl\"(GlobalChannelType) or \"gr\"(GroupChannelType)\n@param in_callback Method to be invoked when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCChatProxy_GetSubscribedChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCChatProxy, nullptr, "GetSubscribedChannels", nullptr, nullptr, sizeof(BCChatProxy_eventGetSubscribedChannels_Parms), Z_Construct_UFunction_UBCChatProxy_GetSubscribedChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_GetSubscribedChannels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_GetSubscribedChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_GetSubscribedChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCChatProxy_GetSubscribedChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCChatProxy_GetSubscribedChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics
	{
		struct BCChatProxy_eventPostChatMessage_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_channelId;
			FString in_plain;
			FString in_jsonRich;
			bool in_recordInHistory;
			UBCChatProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_channelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_channelId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_plain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_plain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_jsonRich_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_jsonRich;
		static void NewProp_in_recordInHistory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_in_recordInHistory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventPostChatMessage_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_in_channelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_in_channelId = { "in_channelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventPostChatMessage_Parms, in_channelId), METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_in_channelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_in_channelId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_in_plain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_in_plain = { "in_plain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventPostChatMessage_Parms, in_plain), METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_in_plain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_in_plain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_in_jsonRich_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_in_jsonRich = { "in_jsonRich", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventPostChatMessage_Parms, in_jsonRich), METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_in_jsonRich_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_in_jsonRich_MetaData)) };
	void Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_in_recordInHistory_SetBit(void* Obj)
	{
		((BCChatProxy_eventPostChatMessage_Parms*)Obj)->in_recordInHistory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_in_recordInHistory = { "in_recordInHistory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCChatProxy_eventPostChatMessage_Parms), &Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_in_recordInHistory_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventPostChatMessage_Parms, ReturnValue), Z_Construct_UClass_UBCChatProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_in_channelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_in_plain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_in_jsonRich,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_in_recordInHistory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Chat" },
		{ "Comment", "/**\n    * Send a potentially rich chat message.\n    * \n    * Service Name - chat\n\x09* Service Operation - POST_CHAT_MESSAGE\n    *\n    * @param in_channelId The channelId to post the chat message to\n    * @param in_plain The plain text message asscociated with the chat message\n    * @param in_jsonRich The json string to associate with the chat message\n    * @param in_recordInHistory Whether to record the message in history, or to only send it to currently active participants\n\x09* @param in_callback Method to be invoked when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCChatProxy.h" },
		{ "ToolTip", "Send a potentially rich chat message.\n\nService Name - chat\nService Operation - POST_CHAT_MESSAGE\n\n@param in_channelId The channelId to post the chat message to\n@param in_plain The plain text message asscociated with the chat message\n@param in_jsonRich The json string to associate with the chat message\n@param in_recordInHistory Whether to record the message in history, or to only send it to currently active participants\n@param in_callback Method to be invoked when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCChatProxy, nullptr, "PostChatMessage", nullptr, nullptr, sizeof(BCChatProxy_eventPostChatMessage_Parms), Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCChatProxy_PostChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCChatProxy_PostChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics
	{
		struct BCChatProxy_eventPostChatMessageSimple_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_channelId;
			FString in_plain;
			bool in_recordInHistory;
			UBCChatProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_channelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_channelId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_plain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_plain;
		static void NewProp_in_recordInHistory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_in_recordInHistory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventPostChatMessageSimple_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::NewProp_in_channelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::NewProp_in_channelId = { "in_channelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventPostChatMessageSimple_Parms, in_channelId), METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::NewProp_in_channelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::NewProp_in_channelId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::NewProp_in_plain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::NewProp_in_plain = { "in_plain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventPostChatMessageSimple_Parms, in_plain), METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::NewProp_in_plain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::NewProp_in_plain_MetaData)) };
	void Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::NewProp_in_recordInHistory_SetBit(void* Obj)
	{
		((BCChatProxy_eventPostChatMessageSimple_Parms*)Obj)->in_recordInHistory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::NewProp_in_recordInHistory = { "in_recordInHistory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCChatProxy_eventPostChatMessageSimple_Parms), &Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::NewProp_in_recordInHistory_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventPostChatMessageSimple_Parms, ReturnValue), Z_Construct_UClass_UBCChatProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::NewProp_in_channelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::NewProp_in_plain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::NewProp_in_recordInHistory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Chat" },
		{ "Comment", "/**\n    * Sends a plain-text chat message.\n    * \n    * Service Name - chat\n\x09* Service Operation - POST_CHAT_MESSAGE_SIMPLE\n    *\n    * @param in_channelId The channelId to post the chat message to\n    * @param in_plain The plain text message asscociated with the chat message\n    * @param in_recordInHistory Whether to record the message in history, or to only send it to currently active participants\n\x09* @param in_callback Method to be invoked when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCChatProxy.h" },
		{ "ToolTip", "Sends a plain-text chat message.\n\nService Name - chat\nService Operation - POST_CHAT_MESSAGE_SIMPLE\n\n@param in_channelId The channelId to post the chat message to\n@param in_plain The plain text message asscociated with the chat message\n@param in_recordInHistory Whether to record the message in history, or to only send it to currently active participants\n@param in_callback Method to be invoked when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCChatProxy, nullptr, "PostChatMessageSimple", nullptr, nullptr, sizeof(BCChatProxy_eventPostChatMessageSimple_Parms), Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics
	{
		struct BCChatProxy_eventUpdateChatMessage_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_channelId;
			FString in_messageId;
			int32 in_version;
			FString in_plain;
			FString in_jsonRich;
			UBCChatProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_channelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_channelId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_messageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_messageId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_plain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_plain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_jsonRich_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_jsonRich;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventUpdateChatMessage_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_channelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_channelId = { "in_channelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventUpdateChatMessage_Parms, in_channelId), METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_channelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_channelId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_messageId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_messageId = { "in_messageId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventUpdateChatMessage_Parms, in_messageId), METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_messageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_messageId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_version = { "in_version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventUpdateChatMessage_Parms, in_version), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_plain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_plain = { "in_plain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventUpdateChatMessage_Parms, in_plain), METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_plain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_plain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_jsonRich_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_jsonRich = { "in_jsonRich", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventUpdateChatMessage_Parms, in_jsonRich), METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_jsonRich_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_jsonRich_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCChatProxy_eventUpdateChatMessage_Parms, ReturnValue), Z_Construct_UClass_UBCChatProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_channelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_messageId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_plain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_in_jsonRich,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Chat" },
		{ "Comment", "/**\n    * Update a chat message. <content> must contain at least a \"plain\" field for plain-text messaging. <version> must match the latest or pass -1 to bypass version check.\n    * \n    * Service Name - chat\n\x09* Service Operation - UPDATE_CHAT_MESSAGE\n    *\n    * @param in_channelId The channelId of the chat message to update\n    * @param in_messageId The messagedId of the message to update\n    * @param in_version The version of the message to update, must match the latest or pass -1 to bypass version check.\n    * @param in_plain The plain text message asscociated with the chat message\n    * @param in_jsonRich The json string to associate with the chat message\n    * @param in_recordInHistory Whether to record the message in history, or to only send it to currently active participants\n\x09* @param in_callback Method to be invoked when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCChatProxy.h" },
		{ "ToolTip", "Update a chat message. <content> must contain at least a \"plain\" field for plain-text messaging. <version> must match the latest or pass -1 to bypass version check.\n\nService Name - chat\nService Operation - UPDATE_CHAT_MESSAGE\n\n@param in_channelId The channelId of the chat message to update\n@param in_messageId The messagedId of the message to update\n@param in_version The version of the message to update, must match the latest or pass -1 to bypass version check.\n@param in_plain The plain text message asscociated with the chat message\n@param in_jsonRich The json string to associate with the chat message\n@param in_recordInHistory Whether to record the message in history, or to only send it to currently active participants\n@param in_callback Method to be invoked when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCChatProxy, nullptr, "UpdateChatMessage", nullptr, nullptr, sizeof(BCChatProxy_eventUpdateChatMessage_Parms), Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCChatProxy_NoRegister()
	{
		return UBCChatProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCChatProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCChatProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCChatProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCChatProxy_ChannelConnect, "ChannelConnect" }, // 2967983343
		{ &Z_Construct_UFunction_UBCChatProxy_ChannelDisconnect, "ChannelDisconnect" }, // 2769653342
		{ &Z_Construct_UFunction_UBCChatProxy_DeleteChatMessage, "DeleteChatMessage" }, // 3242511305
		{ &Z_Construct_UFunction_UBCChatProxy_GetChannelId, "GetChannelId" }, // 551693533
		{ &Z_Construct_UFunction_UBCChatProxy_GetChannelInfo, "GetChannelInfo" }, // 787546319
		{ &Z_Construct_UFunction_UBCChatProxy_GetChatMessage, "GetChatMessage" }, // 2743907238
		{ &Z_Construct_UFunction_UBCChatProxy_GetRecentChatMessages, "GetRecentChatMessages" }, // 3371389396
		{ &Z_Construct_UFunction_UBCChatProxy_GetSubscribedChannels, "GetSubscribedChannels" }, // 144167263
		{ &Z_Construct_UFunction_UBCChatProxy_PostChatMessage, "PostChatMessage" }, // 595303548
		{ &Z_Construct_UFunction_UBCChatProxy_PostChatMessageSimple, "PostChatMessageSimple" }, // 3954900269
		{ &Z_Construct_UFunction_UBCChatProxy_UpdateChatMessage, "UpdateChatMessage" }, // 230032013
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCChatProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCChatProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCChatProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCChatProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCChatProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCChatProxy_Statics::ClassParams = {
		&UBCChatProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCChatProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCChatProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCChatProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCChatProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCChatProxy, 2865125474);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCChatProxy>()
	{
		return UBCChatProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCChatProxy(Z_Construct_UClass_UBCChatProxy, &UBCChatProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCChatProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCChatProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
