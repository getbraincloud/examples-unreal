// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCRelayCommsProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCRelayCommsProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRelayCommsProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRelayCommsProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UBCRelayCommsProxy::execWebSocket_OnError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_in_error);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WebSocket_OnError(Z_Param_in_error);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRelayCommsProxy::execWebSocket_OnMessage)
	{
		P_GET_TARRAY(uint8,Z_Param_in_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WebSocket_OnMessage(Z_Param_in_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRelayCommsProxy::execWebsocket_OnOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Websocket_OnOpen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRelayCommsProxy::execWebSocket_OnClose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WebSocket_OnClose();
		P_NATIVE_END;
	}
	void UBCRelayCommsProxy::StaticRegisterNativesUBCRelayCommsProxy()
	{
		UClass* Class = UBCRelayCommsProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WebSocket_OnClose", &UBCRelayCommsProxy::execWebSocket_OnClose },
			{ "WebSocket_OnError", &UBCRelayCommsProxy::execWebSocket_OnError },
			{ "WebSocket_OnMessage", &UBCRelayCommsProxy::execWebSocket_OnMessage },
			{ "Websocket_OnOpen", &UBCRelayCommsProxy::execWebsocket_OnOpen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnClose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnClose_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// expose web socket functions\n" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRelayCommsProxy.h" },
		{ "ToolTip", "expose web socket functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRelayCommsProxy, nullptr, "WebSocket_OnClose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnClose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnClose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnClose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnClose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnError_Statics
	{
		struct BCRelayCommsProxy_eventWebSocket_OnError_Parms
		{
			FString in_error;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_error_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_error;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnError_Statics::NewProp_in_error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnError_Statics::NewProp_in_error = { "in_error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayCommsProxy_eventWebSocket_OnError_Parms, in_error), METADATA_PARAMS(Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnError_Statics::NewProp_in_error_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnError_Statics::NewProp_in_error_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnError_Statics::NewProp_in_error,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRelayCommsProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRelayCommsProxy, nullptr, "WebSocket_OnError", nullptr, nullptr, sizeof(BCRelayCommsProxy_eventWebSocket_OnError_Parms), Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnMessage_Statics
	{
		struct BCRelayCommsProxy_eventWebSocket_OnMessage_Parms
		{
			TArray<uint8> in_data;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_in_data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_in_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnMessage_Statics::NewProp_in_data_Inner = { "in_data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnMessage_Statics::NewProp_in_data = { "in_data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRelayCommsProxy_eventWebSocket_OnMessage_Parms, in_data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnMessage_Statics::NewProp_in_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnMessage_Statics::NewProp_in_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRelayCommsProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRelayCommsProxy, nullptr, "WebSocket_OnMessage", nullptr, nullptr, sizeof(BCRelayCommsProxy_eventWebSocket_OnMessage_Parms), Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRelayCommsProxy_Websocket_OnOpen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRelayCommsProxy_Websocket_OnOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRelayCommsProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRelayCommsProxy_Websocket_OnOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRelayCommsProxy, nullptr, "Websocket_OnOpen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRelayCommsProxy_Websocket_OnOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRelayCommsProxy_Websocket_OnOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRelayCommsProxy_Websocket_OnOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRelayCommsProxy_Websocket_OnOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCRelayCommsProxy_NoRegister()
	{
		return UBCRelayCommsProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCRelayCommsProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCRelayCommsProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCRelayCommsProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnClose, "WebSocket_OnClose" }, // 4162091856
		{ &Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnError, "WebSocket_OnError" }, // 2861674670
		{ &Z_Construct_UFunction_UBCRelayCommsProxy_WebSocket_OnMessage, "WebSocket_OnMessage" }, // 1790465562
		{ &Z_Construct_UFunction_UBCRelayCommsProxy_Websocket_OnOpen, "Websocket_OnOpen" }, // 3711071962
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCRelayCommsProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCRelayCommsProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRelayCommsProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCRelayCommsProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCRelayCommsProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCRelayCommsProxy_Statics::ClassParams = {
		&UBCRelayCommsProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCRelayCommsProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCRelayCommsProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCRelayCommsProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCRelayCommsProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCRelayCommsProxy, 774016735);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCRelayCommsProxy>()
	{
		return UBCRelayCommsProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCRelayCommsProxy(Z_Construct_UClass_UBCRelayCommsProxy, &UBCRelayCommsProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCRelayCommsProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCRelayCommsProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
