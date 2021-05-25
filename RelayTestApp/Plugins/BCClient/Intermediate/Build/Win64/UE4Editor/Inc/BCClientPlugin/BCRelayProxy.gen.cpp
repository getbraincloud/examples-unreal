// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCRelayProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCRelayProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRelayProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRelayProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_BCRelayConnectionType();
// End Cross Module References
	DEFINE_FUNCTION(UBCRelayProxy::execBCStringToBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_in_string);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UBCRelayProxy::BCStringToBytes(Z_Param_in_string);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRelayProxy::execBCBytesToString)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_in_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBCRelayProxy::BCBytesToString(Z_Param_Out_in_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRelayProxy::execSetPingInterval)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FFloatProperty,Z_Param_in_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCRelayProxy::SetPingInterval(Z_Param_brainCloudWrapper,Z_Param_in_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRelayProxy::execSend)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_in_message);
		P_GET_PROPERTY(FIntProperty,Z_Param_to_netId);
		P_GET_UBOOL(Z_Param_in_reliable);
		P_GET_UBOOL(Z_Param_in_ordered);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCRelayProxy::Send(Z_Param_brainCloudWrapper,Z_Param_Out_in_message,Z_Param_to_netId,Z_Param_in_reliable,Z_Param_in_ordered,Z_Param_in_channel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRelayProxy::execDeregisterDataCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCRelayProxy::DeregisterDataCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRelayProxy::execIsConnected)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBCRelayProxy::IsConnected(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRelayProxy::execDisconnect)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCRelayProxy::Disconnect(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRelayProxy::execConnect)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_ENUM(BCRelayConnectionType,Z_Param_in_connectionType);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_connectOptionsJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCRelayProxy**)Z_Param__Result=UBCRelayProxy::Connect(Z_Param_brainCloudWrapper,BCRelayConnectionType(Z_Param_in_connectionType),Z_Param_in_connectOptionsJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRelayProxy::execGetNetIdForProfileId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_profileId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNetIdForProfileId(Z_Param_brainCloudWrapper,Z_Param_in_profileId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRelayProxy::execGetProfileIdForNetId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_netId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetProfileIdForNetId(Z_Param_brainCloudWrapper,Z_Param_in_netId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRelayProxy::execNetId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=UBCRelayProxy::NetId(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRelayProxy::execPing)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UBCRelayProxy::Ping(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	void UBCRelayProxy::StaticRegisterNativesUBCRelayProxy()
	{
		UClass* Class = UBCRelayProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BCBytesToString", &UBCRelayProxy::execBCBytesToString },
			{ "BCStringToBytes", &UBCRelayProxy::execBCStringToBytes },
			{ "Connect", &UBCRelayProxy::execConnect },
			{ "DeregisterDataCallback", &UBCRelayProxy::execDeregisterDataCallback },
			{ "Disconnect", &UBCRelayProxy::execDisconnect },
			{ "GetNetIdForProfileId", &UBCRelayProxy::execGetNetIdForProfileId },
			{ "GetProfileIdForNetId", &UBCRelayProxy::execGetProfileIdForNetId },
			{ "IsConnected", &UBCRelayProxy::execIsConnected },
			{ "NetId", &UBCRelayProxy::execNetId },
			{ "Ping", &UBCRelayProxy::execPing },
			{ "Send", &UBCRelayProxy::execSend },
			{ "SetPingInterval", &UBCRelayProxy::execSetPingInterval },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCRelayProxy_BCBytesToString_Statics
	{
		struct BCRelayProxy_eventBCBytesToString_Parms
		{
			TArray<uint8> in_data;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_in_data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_in_data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCRelayProxy_BCBytesToString_Statics::NewProp_in_data_Inner = { "in_data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayProxy_BCBytesToString_Statics::NewProp_in_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCRelayProxy_BCBytesToString_Statics::NewProp_in_data = { "in_data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventBCBytesToString_Parms, in_data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCRelayProxy_BCBytesToString_Statics::NewProp_in_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_BCBytesToString_Statics::NewProp_in_data_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCRelayProxy_BCBytesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventBCBytesToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRelayProxy_BCBytesToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_BCBytesToString_Statics::NewProp_in_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_BCBytesToString_Statics::NewProp_in_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_BCBytesToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayProxy_BCBytesToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Relay" },
		{ "Comment", "/** \n \x09* Convert an array of bytes to a TCHAR\n \x09* @param In byte array values to convert\n \x09* @param Count number of bytes to convert\n \x09* @return Valid FString representing bytes.\n \x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRelayProxy.h" },
		{ "ToolTip", "Convert an array of bytes to a TCHAR\n@param In byte array values to convert\n@param Count number of bytes to convert\n@return Valid FString representing bytes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRelayProxy_BCBytesToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRelayProxy, nullptr, "BCBytesToString", nullptr, nullptr, sizeof(BCRelayProxy_eventBCBytesToString_Parms), Z_Construct_UFunction_UBCRelayProxy_BCBytesToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_BCBytesToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRelayProxy_BCBytesToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_BCBytesToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRelayProxy_BCBytesToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRelayProxy_BCBytesToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRelayProxy_BCStringToBytes_Statics
	{
		struct BCRelayProxy_eventBCStringToBytes_Parms
		{
			FString in_string;
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_string_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_string;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayProxy_BCStringToBytes_Statics::NewProp_in_string_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCRelayProxy_BCStringToBytes_Statics::NewProp_in_string = { "in_string", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventBCStringToBytes_Parms, in_string), METADATA_PARAMS(Z_Construct_UFunction_UBCRelayProxy_BCStringToBytes_Statics::NewProp_in_string_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_BCStringToBytes_Statics::NewProp_in_string_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCRelayProxy_BCStringToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCRelayProxy_BCStringToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventBCStringToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRelayProxy_BCStringToBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_BCStringToBytes_Statics::NewProp_in_string,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_BCStringToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_BCStringToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayProxy_BCStringToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Relay" },
		{ "Comment", "/** \n \x09* Convert FString of bytes into the byte array.\n \x09* @param in_string\x09\x09The FString of byte values\n \x09* @param in_maxBufferSize\x09Max buffer size of the out_bytes array, to prevent overflow\n \x09* @return\x09 Valid bytes from in_string\n \x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRelayProxy.h" },
		{ "ToolTip", "Convert FString of bytes into the byte array.\n@param in_string              The FString of byte values\n@param in_maxBufferSize       Max buffer size of the out_bytes array, to prevent overflow\n@return        Valid bytes from in_string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRelayProxy_BCStringToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRelayProxy, nullptr, "BCStringToBytes", nullptr, nullptr, sizeof(BCRelayProxy_eventBCStringToBytes_Parms), Z_Construct_UFunction_UBCRelayProxy_BCStringToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_BCStringToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRelayProxy_BCStringToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_BCStringToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRelayProxy_BCStringToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRelayProxy_BCStringToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRelayProxy_Connect_Statics
	{
		struct BCRelayProxy_eventConnect_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			BCRelayConnectionType in_connectionType;
			FString in_connectOptionsJson;
			UBCRelayProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_in_connectionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_in_connectionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_connectOptionsJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_connectOptionsJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventConnect_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::NewProp_in_connectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::NewProp_in_connectionType = { "in_connectionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventConnect_Parms, in_connectionType), Z_Construct_UEnum_BCClientPlugin_BCRelayConnectionType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::NewProp_in_connectOptionsJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::NewProp_in_connectOptionsJson = { "in_connectOptionsJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventConnect_Parms, in_connectOptionsJson), METADATA_PARAMS(Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::NewProp_in_connectOptionsJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::NewProp_in_connectOptionsJson_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventConnect_Parms, ReturnValue), Z_Construct_UClass_UBCRelayProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::NewProp_in_connectionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::NewProp_in_connectionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::NewProp_in_connectOptionsJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Relay" },
		{ "Comment", "/** \n \x09* Start off a connection, based off connection type to brainClouds Relay Servers.  \n\x09* Connect options come in from \"ROOM_ASSIGNED\" | \"ROOM_READY\" lobby callback\n\x09* @param in_connectionType \n    * @param in_options\n    * \x09     in_options[\"ssl\"] = false;\n    * \x09     in_options[\"host\"] = \"168.0.1.192\";\n    * \x09     in_options[\"port\"] = 9000;\n    * \x09     in_options[\"passcode\"] = \"somePasscode\"\n    * \x09     in_options[\"lobbyId\"] = \"55555:v5v:001\";\n\x09* \n    * @param callback\n \x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRelayProxy.h" },
		{ "ToolTip", "Start off a connection, based off connection type to brainClouds Relay Servers.\nConnect options come in from \"ROOM_ASSIGNED\" | \"ROOM_READY\" lobby callback\n@param in_connectionType\n@param in_options\n      in_options[\"ssl\"] = false;\n      in_options[\"host\"] = \"168.0.1.192\";\n      in_options[\"port\"] = 9000;\n      in_options[\"passcode\"] = \"somePasscode\"\n      in_options[\"lobbyId\"] = \"55555:v5v:001\";\n\n@param callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRelayProxy, nullptr, "Connect", nullptr, nullptr, sizeof(BCRelayProxy_eventConnect_Parms), Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRelayProxy_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRelayProxy_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRelayProxy_DeregisterDataCallback_Statics
	{
		struct BCRelayProxy_eventDeregisterDataCallback_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRelayProxy_DeregisterDataCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventDeregisterDataCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRelayProxy_DeregisterDataCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_DeregisterDataCallback_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayProxy_DeregisterDataCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Relay" },
		{ "Comment", "/** \n \x09*  Deregister the data callback\n \x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRelayProxy.h" },
		{ "ToolTip", "Deregister the data callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRelayProxy_DeregisterDataCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRelayProxy, nullptr, "DeregisterDataCallback", nullptr, nullptr, sizeof(BCRelayProxy_eventDeregisterDataCallback_Parms), Z_Construct_UFunction_UBCRelayProxy_DeregisterDataCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_DeregisterDataCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRelayProxy_DeregisterDataCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_DeregisterDataCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRelayProxy_DeregisterDataCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRelayProxy_DeregisterDataCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRelayProxy_Disconnect_Statics
	{
		struct BCRelayProxy_eventDisconnect_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRelayProxy_Disconnect_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventDisconnect_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRelayProxy_Disconnect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_Disconnect_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayProxy_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Relay" },
		{ "Comment", "/** \n \x09* Disables relay event for this session.\n \x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRelayProxy.h" },
		{ "ToolTip", "Disables relay event for this session." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRelayProxy_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRelayProxy, nullptr, "Disconnect", nullptr, nullptr, sizeof(BCRelayProxy_eventDisconnect_Parms), Z_Construct_UFunction_UBCRelayProxy_Disconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_Disconnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRelayProxy_Disconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRelayProxy_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRelayProxy_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRelayProxy_GetNetIdForProfileId_Statics
	{
		struct BCRelayProxy_eventGetNetIdForProfileId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_profileId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_profileId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRelayProxy_GetNetIdForProfileId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventGetNetIdForProfileId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayProxy_GetNetIdForProfileId_Statics::NewProp_in_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCRelayProxy_GetNetIdForProfileId_Statics::NewProp_in_profileId = { "in_profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventGetNetIdForProfileId_Parms, in_profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCRelayProxy_GetNetIdForProfileId_Statics::NewProp_in_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_GetNetIdForProfileId_Statics::NewProp_in_profileId_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCRelayProxy_GetNetIdForProfileId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventGetNetIdForProfileId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRelayProxy_GetNetIdForProfileId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_GetNetIdForProfileId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_GetNetIdForProfileId_Statics::NewProp_in_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_GetNetIdForProfileId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayProxy_GetNetIdForProfileId_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Relay" },
		{ "Comment", "/**\n\x09 * Returns the netId associated with a profileId.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRelayProxy.h" },
		{ "ToolTip", "Returns the netId associated with a profileId." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRelayProxy_GetNetIdForProfileId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRelayProxy, nullptr, "GetNetIdForProfileId", nullptr, nullptr, sizeof(BCRelayProxy_eventGetNetIdForProfileId_Parms), Z_Construct_UFunction_UBCRelayProxy_GetNetIdForProfileId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_GetNetIdForProfileId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRelayProxy_GetNetIdForProfileId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_GetNetIdForProfileId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRelayProxy_GetNetIdForProfileId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRelayProxy_GetNetIdForProfileId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRelayProxy_GetProfileIdForNetId_Statics
	{
		struct BCRelayProxy_eventGetProfileIdForNetId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 in_netId;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_in_netId;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRelayProxy_GetProfileIdForNetId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventGetProfileIdForNetId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCRelayProxy_GetProfileIdForNetId_Statics::NewProp_in_netId = { "in_netId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventGetProfileIdForNetId_Parms, in_netId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayProxy_GetProfileIdForNetId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCRelayProxy_GetProfileIdForNetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventGetProfileIdForNetId_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UBCRelayProxy_GetProfileIdForNetId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_GetProfileIdForNetId_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRelayProxy_GetProfileIdForNetId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_GetProfileIdForNetId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_GetProfileIdForNetId_Statics::NewProp_in_netId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_GetProfileIdForNetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayProxy_GetProfileIdForNetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Relay" },
		{ "Comment", "/**\n\x09 * Returns the profileId associated with a netId.\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRelayProxy.h" },
		{ "ToolTip", "Returns the profileId associated with a netId." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRelayProxy_GetProfileIdForNetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRelayProxy, nullptr, "GetProfileIdForNetId", nullptr, nullptr, sizeof(BCRelayProxy_eventGetProfileIdForNetId_Parms), Z_Construct_UFunction_UBCRelayProxy_GetProfileIdForNetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_GetProfileIdForNetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRelayProxy_GetProfileIdForNetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_GetProfileIdForNetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRelayProxy_GetProfileIdForNetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRelayProxy_GetProfileIdForNetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRelayProxy_IsConnected_Statics
	{
		struct BCRelayProxy_eventIsConnected_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRelayProxy_IsConnected_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventIsConnected_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCRelayProxy_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BCRelayProxy_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCRelayProxy_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCRelayProxy_eventIsConnected_Parms), &Z_Construct_UFunction_UBCRelayProxy_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRelayProxy_IsConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_IsConnected_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayProxy_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Relay" },
		{ "Comment", "/** \n \x09* Is Connected\n \x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRelayProxy.h" },
		{ "ToolTip", "Is Connected" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRelayProxy_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRelayProxy, nullptr, "IsConnected", nullptr, nullptr, sizeof(BCRelayProxy_eventIsConnected_Parms), Z_Construct_UFunction_UBCRelayProxy_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_IsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRelayProxy_IsConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRelayProxy_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRelayProxy_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRelayProxy_NetId_Statics
	{
		struct BCRelayProxy_eventNetId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRelayProxy_NetId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventNetId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCRelayProxy_NetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventNetId_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRelayProxy_NetId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_NetId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_NetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayProxy_NetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Relay" },
		{ "Comment", "/** \n \x09* NetId retrieved from the connected call\n \x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRelayProxy.h" },
		{ "ToolTip", "NetId retrieved from the connected call" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRelayProxy_NetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRelayProxy, nullptr, "NetId", nullptr, nullptr, sizeof(BCRelayProxy_eventNetId_Parms), Z_Construct_UFunction_UBCRelayProxy_NetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_NetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRelayProxy_NetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_NetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRelayProxy_NetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRelayProxy_NetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRelayProxy_Ping_Statics
	{
		struct BCRelayProxy_eventPing_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRelayProxy_Ping_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventPing_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UBCRelayProxy_Ping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventPing_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRelayProxy_Ping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_Ping_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_Ping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayProxy_Ping_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Relay" },
		{ "Comment", "/** \n \x09* Use SetPingInterval() in order to set the interval for which Ping is calculated\n\x09* does not average over the last N calls.  This is the value of the most recent Ping result\n \x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRelayProxy.h" },
		{ "ToolTip", "Use SetPingInterval() in order to set the interval for which Ping is calculated\ndoes not average over the last N calls.  This is the value of the most recent Ping result" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRelayProxy_Ping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRelayProxy, nullptr, "Ping", nullptr, nullptr, sizeof(BCRelayProxy_eventPing_Parms), Z_Construct_UFunction_UBCRelayProxy_Ping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_Ping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRelayProxy_Ping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_Ping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRelayProxy_Ping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRelayProxy_Ping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRelayProxy_Send_Statics
	{
		struct BCRelayProxy_eventSend_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TArray<uint8> in_message;
			int32 to_netId;
			bool in_reliable;
			bool in_ordered;
			int32 in_channel;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_in_message_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_message_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_in_message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_to_netId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_to_netId;
		static void NewProp_in_reliable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_in_reliable;
		static void NewProp_in_ordered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_in_ordered;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_in_channel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventSend_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_in_message_Inner = { "in_message", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_in_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_in_message = { "in_message", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventSend_Parms, in_message), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_in_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_in_message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_to_netId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_to_netId = { "to_netId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventSend_Parms, to_netId), METADATA_PARAMS(Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_to_netId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_to_netId_MetaData)) };
	void Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_in_reliable_SetBit(void* Obj)
	{
		((BCRelayProxy_eventSend_Parms*)Obj)->in_reliable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_in_reliable = { "in_reliable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCRelayProxy_eventSend_Parms), &Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_in_reliable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_in_ordered_SetBit(void* Obj)
	{
		((BCRelayProxy_eventSend_Parms*)Obj)->in_ordered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_in_ordered = { "in_ordered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCRelayProxy_eventSend_Parms), &Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_in_ordered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_in_channel = { "in_channel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventSend_Parms, in_channel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRelayProxy_Send_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_in_message_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_in_message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_to_netId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_in_reliable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_in_ordered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_Send_Statics::NewProp_in_channel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayProxy_Send_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Relay" },
		{ "Comment", "/** \x09\n \x09* Send byte array representation of data\n\x09* @param in_message : message to be sent\n    * @param to_netId : the net id to send to, -1 to relay to all\n\x09* @param in_reliable : send this reliably or not\n\x09* @param in_ordered : received this ordered or not\n\x09* @param in_channel : 0,1,2,3 (max of four channels)\n \x09*/" },
		{ "CPP_Default_in_channel", "0" },
		{ "CPP_Default_in_ordered", "true" },
		{ "CPP_Default_in_reliable", "true" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRelayProxy.h" },
		{ "ToolTip", "Send byte array representation of data\n@param in_message : message to be sent\n@param to_netId : the net id to send to, -1 to relay to all\n@param in_reliable : send this reliably or not\n@param in_ordered : received this ordered or not\n@param in_channel : 0,1,2,3 (max of four channels)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRelayProxy_Send_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRelayProxy, nullptr, "Send", nullptr, nullptr, sizeof(BCRelayProxy_eventSend_Parms), Z_Construct_UFunction_UBCRelayProxy_Send_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_Send_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRelayProxy_Send_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_Send_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRelayProxy_Send()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRelayProxy_Send_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRelayProxy_SetPingInterval_Statics
	{
		struct BCRelayProxy_eventSetPingInterval_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			float in_value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_in_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRelayProxy_SetPingInterval_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventSetPingInterval_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBCRelayProxy_SetPingInterval_Statics::NewProp_in_value = { "in_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayProxy_eventSetPingInterval_Parms, in_value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRelayProxy_SetPingInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_SetPingInterval_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayProxy_SetPingInterval_Statics::NewProp_in_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayProxy_SetPingInterval_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Relay" },
		{ "Comment", "/** \n \x09* Set the ping interval.\n \x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRelayProxy.h" },
		{ "ToolTip", "Set the ping interval." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRelayProxy_SetPingInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRelayProxy, nullptr, "SetPingInterval", nullptr, nullptr, sizeof(BCRelayProxy_eventSetPingInterval_Parms), Z_Construct_UFunction_UBCRelayProxy_SetPingInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_SetPingInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRelayProxy_SetPingInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayProxy_SetPingInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRelayProxy_SetPingInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRelayProxy_SetPingInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCRelayProxy_NoRegister()
	{
		return UBCRelayProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCRelayProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCRelayProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCRelayProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCRelayProxy_BCBytesToString, "BCBytesToString" }, // 545582631
		{ &Z_Construct_UFunction_UBCRelayProxy_BCStringToBytes, "BCStringToBytes" }, // 3930905924
		{ &Z_Construct_UFunction_UBCRelayProxy_Connect, "Connect" }, // 389088914
		{ &Z_Construct_UFunction_UBCRelayProxy_DeregisterDataCallback, "DeregisterDataCallback" }, // 3383265845
		{ &Z_Construct_UFunction_UBCRelayProxy_Disconnect, "Disconnect" }, // 1940145667
		{ &Z_Construct_UFunction_UBCRelayProxy_GetNetIdForProfileId, "GetNetIdForProfileId" }, // 4208708514
		{ &Z_Construct_UFunction_UBCRelayProxy_GetProfileIdForNetId, "GetProfileIdForNetId" }, // 3493076220
		{ &Z_Construct_UFunction_UBCRelayProxy_IsConnected, "IsConnected" }, // 4183612444
		{ &Z_Construct_UFunction_UBCRelayProxy_NetId, "NetId" }, // 2469674193
		{ &Z_Construct_UFunction_UBCRelayProxy_Ping, "Ping" }, // 599714183
		{ &Z_Construct_UFunction_UBCRelayProxy_Send, "Send" }, // 2657298758
		{ &Z_Construct_UFunction_UBCRelayProxy_SetPingInterval, "SetPingInterval" }, // 2583362445
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCRelayProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCRelayProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRelayProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCRelayProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCRelayProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCRelayProxy_Statics::ClassParams = {
		&UBCRelayProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCRelayProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCRelayProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCRelayProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCRelayProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCRelayProxy, 4267614647);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCRelayProxy>()
	{
		return UBCRelayProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCRelayProxy(Z_Construct_UClass_UBCRelayProxy, &UBCRelayProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCRelayProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCRelayProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
