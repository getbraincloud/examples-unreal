// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCRestFileCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCRestFileCallbackProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRestFileCallbackProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRestFileCallbackProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintRestCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCRestFileCallbackProxy::execDeregisterFileCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCRestFileCallbackProxy::DeregisterFileCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRestFileCallbackProxy::execRegisterFileCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCRestFileCallbackProxy**)Z_Param__Result=UBCRestFileCallbackProxy::RegisterFileCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	void UBCRestFileCallbackProxy::StaticRegisterNativesUBCRestFileCallbackProxy()
	{
		UClass* Class = UBCRestFileCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeregisterFileCallback", &UBCRestFileCallbackProxy::execDeregisterFileCallback },
			{ "RegisterFileCallback", &UBCRestFileCallbackProxy::execRegisterFileCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCRestFileCallbackProxy_DeregisterFileCallback_Statics
	{
		struct BCRestFileCallbackProxy_eventDeregisterFileCallback_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRestFileCallbackProxy_DeregisterFileCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRestFileCallbackProxy_eventDeregisterFileCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRestFileCallbackProxy_DeregisterFileCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRestFileCallbackProxy_DeregisterFileCallback_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRestFileCallbackProxy_DeregisterFileCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* \x09\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRestFileCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRestFileCallbackProxy_DeregisterFileCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRestFileCallbackProxy, nullptr, "DeregisterFileCallback", nullptr, nullptr, sizeof(BCRestFileCallbackProxy_eventDeregisterFileCallback_Parms), Z_Construct_UFunction_UBCRestFileCallbackProxy_DeregisterFileCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRestFileCallbackProxy_DeregisterFileCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRestFileCallbackProxy_DeregisterFileCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRestFileCallbackProxy_DeregisterFileCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRestFileCallbackProxy_DeregisterFileCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRestFileCallbackProxy_DeregisterFileCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRestFileCallbackProxy_RegisterFileCallback_Statics
	{
		struct BCRestFileCallbackProxy_eventRegisterFileCallback_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCRestFileCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRestFileCallbackProxy_RegisterFileCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRestFileCallbackProxy_eventRegisterFileCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRestFileCallbackProxy_RegisterFileCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRestFileCallbackProxy_eventRegisterFileCallback_Parms, ReturnValue), Z_Construct_UClass_UBCRestFileCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRestFileCallbackProxy_RegisterFileCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRestFileCallbackProxy_RegisterFileCallback_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRestFileCallbackProxy_RegisterFileCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRestFileCallbackProxy_RegisterFileCallback_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* \x09\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRestFileCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRestFileCallbackProxy_RegisterFileCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRestFileCallbackProxy, nullptr, "RegisterFileCallback", nullptr, nullptr, sizeof(BCRestFileCallbackProxy_eventRegisterFileCallback_Parms), Z_Construct_UFunction_UBCRestFileCallbackProxy_RegisterFileCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRestFileCallbackProxy_RegisterFileCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRestFileCallbackProxy_RegisterFileCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRestFileCallbackProxy_RegisterFileCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRestFileCallbackProxy_RegisterFileCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRestFileCallbackProxy_RegisterFileCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCRestFileCallbackProxy_NoRegister()
	{
		return UBCRestFileCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCRestFileCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCRestFileCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintRestCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCRestFileCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCRestFileCallbackProxy_DeregisterFileCallback, "DeregisterFileCallback" }, // 2027588353
		{ &Z_Construct_UFunction_UBCRestFileCallbackProxy_RegisterFileCallback, "RegisterFileCallback" }, // 4114292108
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCRestFileCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCRestFileCallbackProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRestFileCallbackProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCRestFileCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCRestFileCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCRestFileCallbackProxy_Statics::ClassParams = {
		&UBCRestFileCallbackProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCRestFileCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCRestFileCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCRestFileCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCRestFileCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCRestFileCallbackProxy, 3569693884);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCRestFileCallbackProxy>()
	{
		return UBCRestFileCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCRestFileCallbackProxy(Z_Construct_UClass_UBCRestFileCallbackProxy, &UBCRestFileCallbackProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCRestFileCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCRestFileCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
