// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCGlobalErrorCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCGlobalErrorCallbackProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCGlobalErrorCallbackProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCGlobalErrorCallbackProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintRestCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCGlobalErrorCallbackProxy::execDeregisterGlobalErrorCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCGlobalErrorCallbackProxy::DeregisterGlobalErrorCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalErrorCallbackProxy::execRegisterGlobalErrorCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalErrorCallbackProxy**)Z_Param__Result=UBCGlobalErrorCallbackProxy::RegisterGlobalErrorCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	void UBCGlobalErrorCallbackProxy::StaticRegisterNativesUBCGlobalErrorCallbackProxy()
	{
		UClass* Class = UBCGlobalErrorCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeregisterGlobalErrorCallback", &UBCGlobalErrorCallbackProxy::execDeregisterGlobalErrorCallback },
			{ "RegisterGlobalErrorCallback", &UBCGlobalErrorCallbackProxy::execRegisterGlobalErrorCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_DeregisterGlobalErrorCallback_Statics
	{
		struct BCGlobalErrorCallbackProxy_eventDeregisterGlobalErrorCallback_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_DeregisterGlobalErrorCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalErrorCallbackProxy_eventDeregisterGlobalErrorCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_DeregisterGlobalErrorCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_DeregisterGlobalErrorCallback_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_DeregisterGlobalErrorCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* \x09\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalErrorCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_DeregisterGlobalErrorCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalErrorCallbackProxy, nullptr, "DeregisterGlobalErrorCallback", nullptr, nullptr, sizeof(BCGlobalErrorCallbackProxy_eventDeregisterGlobalErrorCallback_Parms), Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_DeregisterGlobalErrorCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_DeregisterGlobalErrorCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_DeregisterGlobalErrorCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_DeregisterGlobalErrorCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_DeregisterGlobalErrorCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_DeregisterGlobalErrorCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_RegisterGlobalErrorCallback_Statics
	{
		struct BCGlobalErrorCallbackProxy_eventRegisterGlobalErrorCallback_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCGlobalErrorCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_RegisterGlobalErrorCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalErrorCallbackProxy_eventRegisterGlobalErrorCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_RegisterGlobalErrorCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalErrorCallbackProxy_eventRegisterGlobalErrorCallback_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalErrorCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_RegisterGlobalErrorCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_RegisterGlobalErrorCallback_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_RegisterGlobalErrorCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_RegisterGlobalErrorCallback_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* \x09\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalErrorCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_RegisterGlobalErrorCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalErrorCallbackProxy, nullptr, "RegisterGlobalErrorCallback", nullptr, nullptr, sizeof(BCGlobalErrorCallbackProxy_eventRegisterGlobalErrorCallback_Parms), Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_RegisterGlobalErrorCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_RegisterGlobalErrorCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_RegisterGlobalErrorCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_RegisterGlobalErrorCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_RegisterGlobalErrorCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_RegisterGlobalErrorCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCGlobalErrorCallbackProxy_NoRegister()
	{
		return UBCGlobalErrorCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCGlobalErrorCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCGlobalErrorCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintRestCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCGlobalErrorCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_DeregisterGlobalErrorCallback, "DeregisterGlobalErrorCallback" }, // 1830298197
		{ &Z_Construct_UFunction_UBCGlobalErrorCallbackProxy_RegisterGlobalErrorCallback, "RegisterGlobalErrorCallback" }, // 2013922792
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCGlobalErrorCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCGlobalErrorCallbackProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalErrorCallbackProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCGlobalErrorCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCGlobalErrorCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCGlobalErrorCallbackProxy_Statics::ClassParams = {
		&UBCGlobalErrorCallbackProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCGlobalErrorCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCGlobalErrorCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCGlobalErrorCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCGlobalErrorCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCGlobalErrorCallbackProxy, 3059487792);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCGlobalErrorCallbackProxy>()
	{
		return UBCGlobalErrorCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCGlobalErrorCallbackProxy(Z_Construct_UClass_UBCGlobalErrorCallbackProxy, &UBCGlobalErrorCallbackProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCGlobalErrorCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCGlobalErrorCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
