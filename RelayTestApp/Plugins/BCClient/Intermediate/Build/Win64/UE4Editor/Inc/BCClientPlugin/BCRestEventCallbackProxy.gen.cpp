// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCRestEventCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCRestEventCallbackProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRestEventCallbackProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRestEventCallbackProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintRestCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCRestEventCallbackProxy::execDeregisterEventCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCRestEventCallbackProxy::DeregisterEventCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRestEventCallbackProxy::execRegisterEventCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCRestEventCallbackProxy**)Z_Param__Result=UBCRestEventCallbackProxy::RegisterEventCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	void UBCRestEventCallbackProxy::StaticRegisterNativesUBCRestEventCallbackProxy()
	{
		UClass* Class = UBCRestEventCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeregisterEventCallback", &UBCRestEventCallbackProxy::execDeregisterEventCallback },
			{ "RegisterEventCallback", &UBCRestEventCallbackProxy::execRegisterEventCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCRestEventCallbackProxy_DeregisterEventCallback_Statics
	{
		struct BCRestEventCallbackProxy_eventDeregisterEventCallback_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRestEventCallbackProxy_DeregisterEventCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRestEventCallbackProxy_eventDeregisterEventCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRestEventCallbackProxy_DeregisterEventCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRestEventCallbackProxy_DeregisterEventCallback_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRestEventCallbackProxy_DeregisterEventCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* \x09\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRestEventCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRestEventCallbackProxy_DeregisterEventCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRestEventCallbackProxy, nullptr, "DeregisterEventCallback", nullptr, nullptr, sizeof(BCRestEventCallbackProxy_eventDeregisterEventCallback_Parms), Z_Construct_UFunction_UBCRestEventCallbackProxy_DeregisterEventCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRestEventCallbackProxy_DeregisterEventCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRestEventCallbackProxy_DeregisterEventCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRestEventCallbackProxy_DeregisterEventCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRestEventCallbackProxy_DeregisterEventCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRestEventCallbackProxy_DeregisterEventCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRestEventCallbackProxy_RegisterEventCallback_Statics
	{
		struct BCRestEventCallbackProxy_eventRegisterEventCallback_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCRestEventCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRestEventCallbackProxy_RegisterEventCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRestEventCallbackProxy_eventRegisterEventCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRestEventCallbackProxy_RegisterEventCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRestEventCallbackProxy_eventRegisterEventCallback_Parms, ReturnValue), Z_Construct_UClass_UBCRestEventCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRestEventCallbackProxy_RegisterEventCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRestEventCallbackProxy_RegisterEventCallback_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRestEventCallbackProxy_RegisterEventCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRestEventCallbackProxy_RegisterEventCallback_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* \x09\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRestEventCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRestEventCallbackProxy_RegisterEventCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRestEventCallbackProxy, nullptr, "RegisterEventCallback", nullptr, nullptr, sizeof(BCRestEventCallbackProxy_eventRegisterEventCallback_Parms), Z_Construct_UFunction_UBCRestEventCallbackProxy_RegisterEventCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRestEventCallbackProxy_RegisterEventCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRestEventCallbackProxy_RegisterEventCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRestEventCallbackProxy_RegisterEventCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRestEventCallbackProxy_RegisterEventCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRestEventCallbackProxy_RegisterEventCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCRestEventCallbackProxy_NoRegister()
	{
		return UBCRestEventCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCRestEventCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCRestEventCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintRestCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCRestEventCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCRestEventCallbackProxy_DeregisterEventCallback, "DeregisterEventCallback" }, // 1427333690
		{ &Z_Construct_UFunction_UBCRestEventCallbackProxy_RegisterEventCallback, "RegisterEventCallback" }, // 4133141430
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCRestEventCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCRestEventCallbackProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRestEventCallbackProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCRestEventCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCRestEventCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCRestEventCallbackProxy_Statics::ClassParams = {
		&UBCRestEventCallbackProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCRestEventCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCRestEventCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCRestEventCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCRestEventCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCRestEventCallbackProxy, 2908668341);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCRestEventCallbackProxy>()
	{
		return UBCRestEventCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCRestEventCallbackProxy(Z_Construct_UClass_UBCRestEventCallbackProxy, &UBCRestEventCallbackProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCRestEventCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCRestEventCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
