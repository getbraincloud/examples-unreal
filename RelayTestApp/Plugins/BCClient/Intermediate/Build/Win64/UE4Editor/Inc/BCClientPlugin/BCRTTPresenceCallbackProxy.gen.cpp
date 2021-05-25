// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCRTTPresenceCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCRTTPresenceCallbackProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRTTPresenceCallbackProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRTTPresenceCallbackProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintRTTCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCRTTPresenceCallbackProxy::execDeregisterRTTPresenceCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCRTTPresenceCallbackProxy::DeregisterRTTPresenceCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRTTPresenceCallbackProxy::execRegisterRTTPresenceCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCRTTPresenceCallbackProxy**)Z_Param__Result=UBCRTTPresenceCallbackProxy::RegisterRTTPresenceCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	void UBCRTTPresenceCallbackProxy::StaticRegisterNativesUBCRTTPresenceCallbackProxy()
	{
		UClass* Class = UBCRTTPresenceCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeregisterRTTPresenceCallback", &UBCRTTPresenceCallbackProxy::execDeregisterRTTPresenceCallback },
			{ "RegisterRTTPresenceCallback", &UBCRTTPresenceCallbackProxy::execRegisterRTTPresenceCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_DeregisterRTTPresenceCallback_Statics
	{
		struct BCRTTPresenceCallbackProxy_eventDeregisterRTTPresenceCallback_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_DeregisterRTTPresenceCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTPresenceCallbackProxy_eventDeregisterRTTPresenceCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_DeregisterRTTPresenceCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_DeregisterRTTPresenceCallback_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_DeregisterRTTPresenceCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|RTT" },
		{ "Comment", "/**\n\x09* \x09\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTPresenceCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_DeregisterRTTPresenceCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRTTPresenceCallbackProxy, nullptr, "DeregisterRTTPresenceCallback", nullptr, nullptr, sizeof(BCRTTPresenceCallbackProxy_eventDeregisterRTTPresenceCallback_Parms), Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_DeregisterRTTPresenceCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_DeregisterRTTPresenceCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_DeregisterRTTPresenceCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_DeregisterRTTPresenceCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_DeregisterRTTPresenceCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_DeregisterRTTPresenceCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_RegisterRTTPresenceCallback_Statics
	{
		struct BCRTTPresenceCallbackProxy_eventRegisterRTTPresenceCallback_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCRTTPresenceCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_RegisterRTTPresenceCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTPresenceCallbackProxy_eventRegisterRTTPresenceCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_RegisterRTTPresenceCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTPresenceCallbackProxy_eventRegisterRTTPresenceCallback_Parms, ReturnValue), Z_Construct_UClass_UBCRTTPresenceCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_RegisterRTTPresenceCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_RegisterRTTPresenceCallback_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_RegisterRTTPresenceCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_RegisterRTTPresenceCallback_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|RTT" },
		{ "Comment", "/**\n\x09* \x09\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTPresenceCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_RegisterRTTPresenceCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRTTPresenceCallbackProxy, nullptr, "RegisterRTTPresenceCallback", nullptr, nullptr, sizeof(BCRTTPresenceCallbackProxy_eventRegisterRTTPresenceCallback_Parms), Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_RegisterRTTPresenceCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_RegisterRTTPresenceCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_RegisterRTTPresenceCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_RegisterRTTPresenceCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_RegisterRTTPresenceCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_RegisterRTTPresenceCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCRTTPresenceCallbackProxy_NoRegister()
	{
		return UBCRTTPresenceCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCRTTPresenceCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCRTTPresenceCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintRTTCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCRTTPresenceCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_DeregisterRTTPresenceCallback, "DeregisterRTTPresenceCallback" }, // 169403586
		{ &Z_Construct_UFunction_UBCRTTPresenceCallbackProxy_RegisterRTTPresenceCallback, "RegisterRTTPresenceCallback" }, // 903801811
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCRTTPresenceCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCRTTPresenceCallbackProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTPresenceCallbackProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCRTTPresenceCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCRTTPresenceCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCRTTPresenceCallbackProxy_Statics::ClassParams = {
		&UBCRTTPresenceCallbackProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCRTTPresenceCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCRTTPresenceCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCRTTPresenceCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCRTTPresenceCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCRTTPresenceCallbackProxy, 3602359467);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCRTTPresenceCallbackProxy>()
	{
		return UBCRTTPresenceCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCRTTPresenceCallbackProxy(Z_Construct_UClass_UBCRTTPresenceCallbackProxy, &UBCRTTPresenceCallbackProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCRTTPresenceCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCRTTPresenceCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
