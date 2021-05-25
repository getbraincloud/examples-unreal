// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCRTTEventCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCRTTEventCallbackProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRTTEventCallbackProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRTTEventCallbackProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintRTTCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCRTTEventCallbackProxy::execDeregisterRTTEventCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCRTTEventCallbackProxy::DeregisterRTTEventCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRTTEventCallbackProxy::execRegisterRTTEventCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCRTTEventCallbackProxy**)Z_Param__Result=UBCRTTEventCallbackProxy::RegisterRTTEventCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	void UBCRTTEventCallbackProxy::StaticRegisterNativesUBCRTTEventCallbackProxy()
	{
		UClass* Class = UBCRTTEventCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeregisterRTTEventCallback", &UBCRTTEventCallbackProxy::execDeregisterRTTEventCallback },
			{ "RegisterRTTEventCallback", &UBCRTTEventCallbackProxy::execRegisterRTTEventCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCRTTEventCallbackProxy_DeregisterRTTEventCallback_Statics
	{
		struct BCRTTEventCallbackProxy_eventDeregisterRTTEventCallback_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTEventCallbackProxy_DeregisterRTTEventCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTEventCallbackProxy_eventDeregisterRTTEventCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRTTEventCallbackProxy_DeregisterRTTEventCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTEventCallbackProxy_DeregisterRTTEventCallback_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRTTEventCallbackProxy_DeregisterRTTEventCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|RTT" },
		{ "Comment", "/**\n\x09* \x09\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTEventCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRTTEventCallbackProxy_DeregisterRTTEventCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRTTEventCallbackProxy, nullptr, "DeregisterRTTEventCallback", nullptr, nullptr, sizeof(BCRTTEventCallbackProxy_eventDeregisterRTTEventCallback_Parms), Z_Construct_UFunction_UBCRTTEventCallbackProxy_DeregisterRTTEventCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTEventCallbackProxy_DeregisterRTTEventCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRTTEventCallbackProxy_DeregisterRTTEventCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTEventCallbackProxy_DeregisterRTTEventCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRTTEventCallbackProxy_DeregisterRTTEventCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRTTEventCallbackProxy_DeregisterRTTEventCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRTTEventCallbackProxy_RegisterRTTEventCallback_Statics
	{
		struct BCRTTEventCallbackProxy_eventRegisterRTTEventCallback_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCRTTEventCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTEventCallbackProxy_RegisterRTTEventCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTEventCallbackProxy_eventRegisterRTTEventCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTEventCallbackProxy_RegisterRTTEventCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTEventCallbackProxy_eventRegisterRTTEventCallback_Parms, ReturnValue), Z_Construct_UClass_UBCRTTEventCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRTTEventCallbackProxy_RegisterRTTEventCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTEventCallbackProxy_RegisterRTTEventCallback_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTEventCallbackProxy_RegisterRTTEventCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRTTEventCallbackProxy_RegisterRTTEventCallback_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|RTT" },
		{ "Comment", "/**\n\x09* \x09\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTEventCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRTTEventCallbackProxy_RegisterRTTEventCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRTTEventCallbackProxy, nullptr, "RegisterRTTEventCallback", nullptr, nullptr, sizeof(BCRTTEventCallbackProxy_eventRegisterRTTEventCallback_Parms), Z_Construct_UFunction_UBCRTTEventCallbackProxy_RegisterRTTEventCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTEventCallbackProxy_RegisterRTTEventCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRTTEventCallbackProxy_RegisterRTTEventCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTEventCallbackProxy_RegisterRTTEventCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRTTEventCallbackProxy_RegisterRTTEventCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRTTEventCallbackProxy_RegisterRTTEventCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCRTTEventCallbackProxy_NoRegister()
	{
		return UBCRTTEventCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCRTTEventCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCRTTEventCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintRTTCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCRTTEventCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCRTTEventCallbackProxy_DeregisterRTTEventCallback, "DeregisterRTTEventCallback" }, // 1281623666
		{ &Z_Construct_UFunction_UBCRTTEventCallbackProxy_RegisterRTTEventCallback, "RegisterRTTEventCallback" }, // 4260086540
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCRTTEventCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCRTTEventCallbackProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTEventCallbackProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCRTTEventCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCRTTEventCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCRTTEventCallbackProxy_Statics::ClassParams = {
		&UBCRTTEventCallbackProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCRTTEventCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCRTTEventCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCRTTEventCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCRTTEventCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCRTTEventCallbackProxy, 3693018344);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCRTTEventCallbackProxy>()
	{
		return UBCRTTEventCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCRTTEventCallbackProxy(Z_Construct_UClass_UBCRTTEventCallbackProxy, &UBCRTTEventCallbackProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCRTTEventCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCRTTEventCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
