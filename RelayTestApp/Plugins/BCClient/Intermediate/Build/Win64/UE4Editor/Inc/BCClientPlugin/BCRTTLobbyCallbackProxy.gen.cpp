// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCRTTLobbyCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCRTTLobbyCallbackProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRTTLobbyCallbackProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRTTLobbyCallbackProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintRTTCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCRTTLobbyCallbackProxy::execDeregisterRTTLobbyCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCRTTLobbyCallbackProxy::DeregisterRTTLobbyCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRTTLobbyCallbackProxy::execRegisterRTTLobbyCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCRTTLobbyCallbackProxy**)Z_Param__Result=UBCRTTLobbyCallbackProxy::RegisterRTTLobbyCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	void UBCRTTLobbyCallbackProxy::StaticRegisterNativesUBCRTTLobbyCallbackProxy()
	{
		UClass* Class = UBCRTTLobbyCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeregisterRTTLobbyCallback", &UBCRTTLobbyCallbackProxy::execDeregisterRTTLobbyCallback },
			{ "RegisterRTTLobbyCallback", &UBCRTTLobbyCallbackProxy::execRegisterRTTLobbyCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_DeregisterRTTLobbyCallback_Statics
	{
		struct BCRTTLobbyCallbackProxy_eventDeregisterRTTLobbyCallback_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_DeregisterRTTLobbyCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTLobbyCallbackProxy_eventDeregisterRTTLobbyCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_DeregisterRTTLobbyCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_DeregisterRTTLobbyCallback_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_DeregisterRTTLobbyCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|RTT" },
		{ "Comment", "/**\n\x09* \x09\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTLobbyCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_DeregisterRTTLobbyCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRTTLobbyCallbackProxy, nullptr, "DeregisterRTTLobbyCallback", nullptr, nullptr, sizeof(BCRTTLobbyCallbackProxy_eventDeregisterRTTLobbyCallback_Parms), Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_DeregisterRTTLobbyCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_DeregisterRTTLobbyCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_DeregisterRTTLobbyCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_DeregisterRTTLobbyCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_DeregisterRTTLobbyCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_DeregisterRTTLobbyCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_RegisterRTTLobbyCallback_Statics
	{
		struct BCRTTLobbyCallbackProxy_eventRegisterRTTLobbyCallback_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCRTTLobbyCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_RegisterRTTLobbyCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTLobbyCallbackProxy_eventRegisterRTTLobbyCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_RegisterRTTLobbyCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTLobbyCallbackProxy_eventRegisterRTTLobbyCallback_Parms, ReturnValue), Z_Construct_UClass_UBCRTTLobbyCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_RegisterRTTLobbyCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_RegisterRTTLobbyCallback_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_RegisterRTTLobbyCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_RegisterRTTLobbyCallback_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|RTT" },
		{ "Comment", "/**\n\x09* \x09\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTLobbyCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_RegisterRTTLobbyCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRTTLobbyCallbackProxy, nullptr, "RegisterRTTLobbyCallback", nullptr, nullptr, sizeof(BCRTTLobbyCallbackProxy_eventRegisterRTTLobbyCallback_Parms), Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_RegisterRTTLobbyCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_RegisterRTTLobbyCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_RegisterRTTLobbyCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_RegisterRTTLobbyCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_RegisterRTTLobbyCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_RegisterRTTLobbyCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCRTTLobbyCallbackProxy_NoRegister()
	{
		return UBCRTTLobbyCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCRTTLobbyCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCRTTLobbyCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintRTTCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCRTTLobbyCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_DeregisterRTTLobbyCallback, "DeregisterRTTLobbyCallback" }, // 2698857699
		{ &Z_Construct_UFunction_UBCRTTLobbyCallbackProxy_RegisterRTTLobbyCallback, "RegisterRTTLobbyCallback" }, // 3291366191
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCRTTLobbyCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCRTTLobbyCallbackProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTLobbyCallbackProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCRTTLobbyCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCRTTLobbyCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCRTTLobbyCallbackProxy_Statics::ClassParams = {
		&UBCRTTLobbyCallbackProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCRTTLobbyCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCRTTLobbyCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCRTTLobbyCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCRTTLobbyCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCRTTLobbyCallbackProxy, 666997717);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCRTTLobbyCallbackProxy>()
	{
		return UBCRTTLobbyCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCRTTLobbyCallbackProxy(Z_Construct_UClass_UBCRTTLobbyCallbackProxy, &UBCRTTLobbyCallbackProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCRTTLobbyCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCRTTLobbyCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
