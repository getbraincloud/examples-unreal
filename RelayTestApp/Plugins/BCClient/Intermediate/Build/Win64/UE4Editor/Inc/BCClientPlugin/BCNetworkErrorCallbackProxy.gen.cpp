// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCNetworkErrorCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCNetworkErrorCallbackProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCNetworkErrorCallbackProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCNetworkErrorCallbackProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintRestCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCNetworkErrorCallbackProxy::execDeregisterNetworkErrorCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCNetworkErrorCallbackProxy::DeregisterNetworkErrorCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCNetworkErrorCallbackProxy::execRegisterNetworkErrorCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCNetworkErrorCallbackProxy**)Z_Param__Result=UBCNetworkErrorCallbackProxy::RegisterNetworkErrorCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	void UBCNetworkErrorCallbackProxy::StaticRegisterNativesUBCNetworkErrorCallbackProxy()
	{
		UClass* Class = UBCNetworkErrorCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeregisterNetworkErrorCallback", &UBCNetworkErrorCallbackProxy::execDeregisterNetworkErrorCallback },
			{ "RegisterNetworkErrorCallback", &UBCNetworkErrorCallbackProxy::execRegisterNetworkErrorCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_DeregisterNetworkErrorCallback_Statics
	{
		struct BCNetworkErrorCallbackProxy_eventDeregisterNetworkErrorCallback_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_DeregisterNetworkErrorCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCNetworkErrorCallbackProxy_eventDeregisterNetworkErrorCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_DeregisterNetworkErrorCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_DeregisterNetworkErrorCallback_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_DeregisterNetworkErrorCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* \x09\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCNetworkErrorCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_DeregisterNetworkErrorCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCNetworkErrorCallbackProxy, nullptr, "DeregisterNetworkErrorCallback", nullptr, nullptr, sizeof(BCNetworkErrorCallbackProxy_eventDeregisterNetworkErrorCallback_Parms), Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_DeregisterNetworkErrorCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_DeregisterNetworkErrorCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_DeregisterNetworkErrorCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_DeregisterNetworkErrorCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_DeregisterNetworkErrorCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_DeregisterNetworkErrorCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_RegisterNetworkErrorCallback_Statics
	{
		struct BCNetworkErrorCallbackProxy_eventRegisterNetworkErrorCallback_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCNetworkErrorCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_RegisterNetworkErrorCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCNetworkErrorCallbackProxy_eventRegisterNetworkErrorCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_RegisterNetworkErrorCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCNetworkErrorCallbackProxy_eventRegisterNetworkErrorCallback_Parms, ReturnValue), Z_Construct_UClass_UBCNetworkErrorCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_RegisterNetworkErrorCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_RegisterNetworkErrorCallback_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_RegisterNetworkErrorCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_RegisterNetworkErrorCallback_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Client" },
		{ "Comment", "/**\n\x09* \x09\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCNetworkErrorCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_RegisterNetworkErrorCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCNetworkErrorCallbackProxy, nullptr, "RegisterNetworkErrorCallback", nullptr, nullptr, sizeof(BCNetworkErrorCallbackProxy_eventRegisterNetworkErrorCallback_Parms), Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_RegisterNetworkErrorCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_RegisterNetworkErrorCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_RegisterNetworkErrorCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_RegisterNetworkErrorCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_RegisterNetworkErrorCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_RegisterNetworkErrorCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCNetworkErrorCallbackProxy_NoRegister()
	{
		return UBCNetworkErrorCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCNetworkErrorCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCNetworkErrorCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintRestCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCNetworkErrorCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_DeregisterNetworkErrorCallback, "DeregisterNetworkErrorCallback" }, // 377604395
		{ &Z_Construct_UFunction_UBCNetworkErrorCallbackProxy_RegisterNetworkErrorCallback, "RegisterNetworkErrorCallback" }, // 1227115781
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCNetworkErrorCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCNetworkErrorCallbackProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCNetworkErrorCallbackProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCNetworkErrorCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCNetworkErrorCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCNetworkErrorCallbackProxy_Statics::ClassParams = {
		&UBCNetworkErrorCallbackProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCNetworkErrorCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCNetworkErrorCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCNetworkErrorCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCNetworkErrorCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCNetworkErrorCallbackProxy, 1924342990);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCNetworkErrorCallbackProxy>()
	{
		return UBCNetworkErrorCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCNetworkErrorCallbackProxy(Z_Construct_UClass_UBCNetworkErrorCallbackProxy, &UBCNetworkErrorCallbackProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCNetworkErrorCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCNetworkErrorCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
