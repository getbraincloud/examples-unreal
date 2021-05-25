// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCRTTMessagingCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCRTTMessagingCallbackProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRTTMessagingCallbackProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRTTMessagingCallbackProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintRTTCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCRTTMessagingCallbackProxy::execDeregisterRTTMessagingCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCRTTMessagingCallbackProxy::DeregisterRTTMessagingCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRTTMessagingCallbackProxy::execRegisterRTTMessagingCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCRTTMessagingCallbackProxy**)Z_Param__Result=UBCRTTMessagingCallbackProxy::RegisterRTTMessagingCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	void UBCRTTMessagingCallbackProxy::StaticRegisterNativesUBCRTTMessagingCallbackProxy()
	{
		UClass* Class = UBCRTTMessagingCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeregisterRTTMessagingCallback", &UBCRTTMessagingCallbackProxy::execDeregisterRTTMessagingCallback },
			{ "RegisterRTTMessagingCallback", &UBCRTTMessagingCallbackProxy::execRegisterRTTMessagingCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_DeregisterRTTMessagingCallback_Statics
	{
		struct BCRTTMessagingCallbackProxy_eventDeregisterRTTMessagingCallback_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_DeregisterRTTMessagingCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTMessagingCallbackProxy_eventDeregisterRTTMessagingCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_DeregisterRTTMessagingCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_DeregisterRTTMessagingCallback_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_DeregisterRTTMessagingCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|RTT" },
		{ "Comment", "/**\n\x09* \x09\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTMessagingCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_DeregisterRTTMessagingCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRTTMessagingCallbackProxy, nullptr, "DeregisterRTTMessagingCallback", nullptr, nullptr, sizeof(BCRTTMessagingCallbackProxy_eventDeregisterRTTMessagingCallback_Parms), Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_DeregisterRTTMessagingCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_DeregisterRTTMessagingCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_DeregisterRTTMessagingCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_DeregisterRTTMessagingCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_DeregisterRTTMessagingCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_DeregisterRTTMessagingCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_RegisterRTTMessagingCallback_Statics
	{
		struct BCRTTMessagingCallbackProxy_eventRegisterRTTMessagingCallback_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCRTTMessagingCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_RegisterRTTMessagingCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTMessagingCallbackProxy_eventRegisterRTTMessagingCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_RegisterRTTMessagingCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTMessagingCallbackProxy_eventRegisterRTTMessagingCallback_Parms, ReturnValue), Z_Construct_UClass_UBCRTTMessagingCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_RegisterRTTMessagingCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_RegisterRTTMessagingCallback_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_RegisterRTTMessagingCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_RegisterRTTMessagingCallback_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|RTT" },
		{ "Comment", "/**\n\x09* \x09\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTMessagingCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_RegisterRTTMessagingCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRTTMessagingCallbackProxy, nullptr, "RegisterRTTMessagingCallback", nullptr, nullptr, sizeof(BCRTTMessagingCallbackProxy_eventRegisterRTTMessagingCallback_Parms), Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_RegisterRTTMessagingCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_RegisterRTTMessagingCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_RegisterRTTMessagingCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_RegisterRTTMessagingCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_RegisterRTTMessagingCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_RegisterRTTMessagingCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCRTTMessagingCallbackProxy_NoRegister()
	{
		return UBCRTTMessagingCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCRTTMessagingCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCRTTMessagingCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintRTTCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCRTTMessagingCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_DeregisterRTTMessagingCallback, "DeregisterRTTMessagingCallback" }, // 2919753119
		{ &Z_Construct_UFunction_UBCRTTMessagingCallbackProxy_RegisterRTTMessagingCallback, "RegisterRTTMessagingCallback" }, // 70203360
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCRTTMessagingCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCRTTMessagingCallbackProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTMessagingCallbackProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCRTTMessagingCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCRTTMessagingCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCRTTMessagingCallbackProxy_Statics::ClassParams = {
		&UBCRTTMessagingCallbackProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCRTTMessagingCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCRTTMessagingCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCRTTMessagingCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCRTTMessagingCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCRTTMessagingCallbackProxy, 3903726713);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCRTTMessagingCallbackProxy>()
	{
		return UBCRTTMessagingCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCRTTMessagingCallbackProxy(Z_Construct_UClass_UBCRTTMessagingCallbackProxy, &UBCRTTMessagingCallbackProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCRTTMessagingCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCRTTMessagingCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
