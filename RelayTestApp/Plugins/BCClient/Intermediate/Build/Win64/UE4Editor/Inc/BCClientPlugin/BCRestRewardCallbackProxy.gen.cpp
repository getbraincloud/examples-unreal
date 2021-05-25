// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCRestRewardCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCRestRewardCallbackProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRestRewardCallbackProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRestRewardCallbackProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintRestCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCRestRewardCallbackProxy::execDeregisterRewardCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCRestRewardCallbackProxy::DeregisterRewardCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRestRewardCallbackProxy::execRegisterRewardCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCRestRewardCallbackProxy**)Z_Param__Result=UBCRestRewardCallbackProxy::RegisterRewardCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	void UBCRestRewardCallbackProxy::StaticRegisterNativesUBCRestRewardCallbackProxy()
	{
		UClass* Class = UBCRestRewardCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeregisterRewardCallback", &UBCRestRewardCallbackProxy::execDeregisterRewardCallback },
			{ "RegisterRewardCallback", &UBCRestRewardCallbackProxy::execRegisterRewardCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCRestRewardCallbackProxy_DeregisterRewardCallback_Statics
	{
		struct BCRestRewardCallbackProxy_eventDeregisterRewardCallback_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRestRewardCallbackProxy_DeregisterRewardCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRestRewardCallbackProxy_eventDeregisterRewardCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRestRewardCallbackProxy_DeregisterRewardCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRestRewardCallbackProxy_DeregisterRewardCallback_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRestRewardCallbackProxy_DeregisterRewardCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* \x09\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRestRewardCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRestRewardCallbackProxy_DeregisterRewardCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRestRewardCallbackProxy, nullptr, "DeregisterRewardCallback", nullptr, nullptr, sizeof(BCRestRewardCallbackProxy_eventDeregisterRewardCallback_Parms), Z_Construct_UFunction_UBCRestRewardCallbackProxy_DeregisterRewardCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRestRewardCallbackProxy_DeregisterRewardCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRestRewardCallbackProxy_DeregisterRewardCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRestRewardCallbackProxy_DeregisterRewardCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRestRewardCallbackProxy_DeregisterRewardCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRestRewardCallbackProxy_DeregisterRewardCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRestRewardCallbackProxy_RegisterRewardCallback_Statics
	{
		struct BCRestRewardCallbackProxy_eventRegisterRewardCallback_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCRestRewardCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRestRewardCallbackProxy_RegisterRewardCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRestRewardCallbackProxy_eventRegisterRewardCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRestRewardCallbackProxy_RegisterRewardCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRestRewardCallbackProxy_eventRegisterRewardCallback_Parms, ReturnValue), Z_Construct_UClass_UBCRestRewardCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRestRewardCallbackProxy_RegisterRewardCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRestRewardCallbackProxy_RegisterRewardCallback_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRestRewardCallbackProxy_RegisterRewardCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRestRewardCallbackProxy_RegisterRewardCallback_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* \x09\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRestRewardCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRestRewardCallbackProxy_RegisterRewardCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRestRewardCallbackProxy, nullptr, "RegisterRewardCallback", nullptr, nullptr, sizeof(BCRestRewardCallbackProxy_eventRegisterRewardCallback_Parms), Z_Construct_UFunction_UBCRestRewardCallbackProxy_RegisterRewardCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRestRewardCallbackProxy_RegisterRewardCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRestRewardCallbackProxy_RegisterRewardCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRestRewardCallbackProxy_RegisterRewardCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRestRewardCallbackProxy_RegisterRewardCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRestRewardCallbackProxy_RegisterRewardCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCRestRewardCallbackProxy_NoRegister()
	{
		return UBCRestRewardCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCRestRewardCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCRestRewardCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintRestCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCRestRewardCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCRestRewardCallbackProxy_DeregisterRewardCallback, "DeregisterRewardCallback" }, // 740940501
		{ &Z_Construct_UFunction_UBCRestRewardCallbackProxy_RegisterRewardCallback, "RegisterRewardCallback" }, // 2321443360
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCRestRewardCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCRestRewardCallbackProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRestRewardCallbackProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCRestRewardCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCRestRewardCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCRestRewardCallbackProxy_Statics::ClassParams = {
		&UBCRestRewardCallbackProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCRestRewardCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCRestRewardCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCRestRewardCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCRestRewardCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCRestRewardCallbackProxy, 4203107301);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCRestRewardCallbackProxy>()
	{
		return UBCRestRewardCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCRestRewardCallbackProxy(Z_Construct_UClass_UBCRestRewardCallbackProxy, &UBCRestRewardCallbackProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCRestRewardCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCRestRewardCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
