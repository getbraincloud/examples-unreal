// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/WebSocketBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSocketBase() {}
// Cross Module References
	BCCLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketRecieve__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnected__DelegateSignature();
	BCCLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketClosed__DelegateSignature();
	BCCLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnectError__DelegateSignature();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UWebSocketBase_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UWebSocketBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketRecieve__DelegateSignature_Statics
	{
		struct _Script_BCClientPlugin_eventWebSocketRecieve_Parms
		{
			TArray<uint8> data;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketRecieve__DelegateSignature_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketRecieve__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BCClientPlugin_eventWebSocketRecieve_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketRecieve__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketRecieve__DelegateSignature_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketRecieve__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketRecieve__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/WebSocketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketRecieve__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin, nullptr, "WebSocketRecieve__DelegateSignature", nullptr, nullptr, sizeof(_Script_BCClientPlugin_eventWebSocketRecieve_Parms), Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketRecieve__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketRecieve__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketRecieve__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketRecieve__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketRecieve__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketRecieve__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnected__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/WebSocketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin, nullptr, "WebSocketConnected__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketClosed__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketClosed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/WebSocketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketClosed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin, nullptr, "WebSocketClosed__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketClosed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketClosed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketClosed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketClosed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnectError__DelegateSignature_Statics
	{
		struct _Script_BCClientPlugin_eventWebSocketConnectError_Parms
		{
			FString error;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_error_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_error;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnectError__DelegateSignature_Statics::NewProp_error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnectError__DelegateSignature_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BCClientPlugin_eventWebSocketConnectError_Parms, error), METADATA_PARAMS(Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnectError__DelegateSignature_Statics::NewProp_error_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnectError__DelegateSignature_Statics::NewProp_error_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnectError__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnectError__DelegateSignature_Statics::NewProp_error,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnectError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/WebSocketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnectError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin, nullptr, "WebSocketConnectError__DelegateSignature", nullptr, nullptr, sizeof(_Script_BCClientPlugin_eventWebSocketConnectError_Parms), Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnectError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnectError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnectError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnectError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnectError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnectError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UWebSocketBase::execClose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Close();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSocketBase::execSendText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendText(Z_Param_data);
		P_NATIVE_END;
	}
	void UWebSocketBase::StaticRegisterNativesUWebSocketBase()
	{
		UClass* Class = UWebSocketBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Close", &UWebSocketBase::execClose },
			{ "SendText", &UWebSocketBase::execSendText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSocketBase_Close_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBase_Close_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Private/WebSocketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketBase_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketBase, nullptr, "Close", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBase_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBase_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketBase_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketBase_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketBase_SendText_Statics
	{
		struct WebSocketBase_eventSendText_Parms
		{
			FString data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBase_SendText_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketBase_SendText_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketBase_eventSendText_Parms, data), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBase_SendText_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBase_SendText_Statics::NewProp_data_MetaData)) };
	void Z_Construct_UFunction_UWebSocketBase_SendText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WebSocketBase_eventSendText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSocketBase_SendText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebSocketBase_eventSendText_Parms), &Z_Construct_UFunction_UWebSocketBase_SendText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketBase_SendText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBase_SendText_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBase_SendText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBase_SendText_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Private/WebSocketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketBase_SendText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketBase, nullptr, "SendText", nullptr, nullptr, sizeof(WebSocketBase_eventSendText_Parms), Z_Construct_UFunction_UWebSocketBase_SendText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBase_SendText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBase_SendText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBase_SendText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketBase_SendText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketBase_SendText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSocketBase_NoRegister()
	{
		return UWebSocketBase::StaticClass();
	}
	struct Z_Construct_UClass_UWebSocketBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConnectError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClosed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClosed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConnectComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReceiveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceiveData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSocketBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSocketBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSocketBase_Close, "Close" }, // 4264057988
		{ &Z_Construct_UFunction_UWebSocketBase_SendText, "SendText" }, // 1560989617
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WebSocketBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/WebSocketBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketBase_Statics::NewProp_OnConnectError_MetaData[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Private/WebSocketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketBase_Statics::NewProp_OnConnectError = { "OnConnectError", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketBase, OnConnectError), Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnectError__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketBase_Statics::NewProp_OnConnectError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketBase_Statics::NewProp_OnConnectError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketBase_Statics::NewProp_OnClosed_MetaData[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Private/WebSocketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketBase_Statics::NewProp_OnClosed = { "OnClosed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketBase, OnClosed), Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketClosed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketBase_Statics::NewProp_OnClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketBase_Statics::NewProp_OnClosed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketBase_Statics::NewProp_OnConnectComplete_MetaData[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Private/WebSocketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketBase_Statics::NewProp_OnConnectComplete = { "OnConnectComplete", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketBase, OnConnectComplete), Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketBase_Statics::NewProp_OnConnectComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketBase_Statics::NewProp_OnConnectComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketBase_Statics::NewProp_OnReceiveData_MetaData[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Private/WebSocketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketBase_Statics::NewProp_OnReceiveData = { "OnReceiveData", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketBase, OnReceiveData), Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketRecieve__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketBase_Statics::NewProp_OnReceiveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketBase_Statics::NewProp_OnReceiveData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebSocketBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketBase_Statics::NewProp_OnConnectError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketBase_Statics::NewProp_OnClosed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketBase_Statics::NewProp_OnConnectComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketBase_Statics::NewProp_OnReceiveData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSocketBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSocketBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebSocketBase_Statics::ClassParams = {
		&UWebSocketBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWebSocketBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebSocketBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSocketBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebSocketBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSocketBase, 2109384063);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UWebSocketBase>()
	{
		return UWebSocketBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSocketBase(Z_Construct_UClass_UWebSocketBase, &UWebSocketBase::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UWebSocketBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
