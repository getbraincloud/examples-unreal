// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCRTTChatCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCRTTChatCallbackProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRTTChatCallbackProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRTTChatCallbackProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintRTTCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCRTTChatCallbackProxy::execDeregisterRTTChatCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCRTTChatCallbackProxy::DeregisterRTTChatCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRTTChatCallbackProxy::execRegisterRTTChatCallback)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCRTTChatCallbackProxy**)Z_Param__Result=UBCRTTChatCallbackProxy::RegisterRTTChatCallback(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	void UBCRTTChatCallbackProxy::StaticRegisterNativesUBCRTTChatCallbackProxy()
	{
		UClass* Class = UBCRTTChatCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeregisterRTTChatCallback", &UBCRTTChatCallbackProxy::execDeregisterRTTChatCallback },
			{ "RegisterRTTChatCallback", &UBCRTTChatCallbackProxy::execRegisterRTTChatCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCRTTChatCallbackProxy_DeregisterRTTChatCallback_Statics
	{
		struct BCRTTChatCallbackProxy_eventDeregisterRTTChatCallback_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTChatCallbackProxy_DeregisterRTTChatCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTChatCallbackProxy_eventDeregisterRTTChatCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRTTChatCallbackProxy_DeregisterRTTChatCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTChatCallbackProxy_DeregisterRTTChatCallback_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRTTChatCallbackProxy_DeregisterRTTChatCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|RTT" },
		{ "Comment", "/**\n\x09* \x09\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTChatCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRTTChatCallbackProxy_DeregisterRTTChatCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRTTChatCallbackProxy, nullptr, "DeregisterRTTChatCallback", nullptr, nullptr, sizeof(BCRTTChatCallbackProxy_eventDeregisterRTTChatCallback_Parms), Z_Construct_UFunction_UBCRTTChatCallbackProxy_DeregisterRTTChatCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTChatCallbackProxy_DeregisterRTTChatCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRTTChatCallbackProxy_DeregisterRTTChatCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTChatCallbackProxy_DeregisterRTTChatCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRTTChatCallbackProxy_DeregisterRTTChatCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRTTChatCallbackProxy_DeregisterRTTChatCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRTTChatCallbackProxy_RegisterRTTChatCallback_Statics
	{
		struct BCRTTChatCallbackProxy_eventRegisterRTTChatCallback_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCRTTChatCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTChatCallbackProxy_RegisterRTTChatCallback_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTChatCallbackProxy_eventRegisterRTTChatCallback_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTChatCallbackProxy_RegisterRTTChatCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTChatCallbackProxy_eventRegisterRTTChatCallback_Parms, ReturnValue), Z_Construct_UClass_UBCRTTChatCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRTTChatCallbackProxy_RegisterRTTChatCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTChatCallbackProxy_RegisterRTTChatCallback_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTChatCallbackProxy_RegisterRTTChatCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRTTChatCallbackProxy_RegisterRTTChatCallback_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|RTT" },
		{ "Comment", "/**\n\x09* \x09\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTChatCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRTTChatCallbackProxy_RegisterRTTChatCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRTTChatCallbackProxy, nullptr, "RegisterRTTChatCallback", nullptr, nullptr, sizeof(BCRTTChatCallbackProxy_eventRegisterRTTChatCallback_Parms), Z_Construct_UFunction_UBCRTTChatCallbackProxy_RegisterRTTChatCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTChatCallbackProxy_RegisterRTTChatCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRTTChatCallbackProxy_RegisterRTTChatCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTChatCallbackProxy_RegisterRTTChatCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRTTChatCallbackProxy_RegisterRTTChatCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRTTChatCallbackProxy_RegisterRTTChatCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCRTTChatCallbackProxy_NoRegister()
	{
		return UBCRTTChatCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCRTTChatCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCRTTChatCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintRTTCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCRTTChatCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCRTTChatCallbackProxy_DeregisterRTTChatCallback, "DeregisterRTTChatCallback" }, // 1729519675
		{ &Z_Construct_UFunction_UBCRTTChatCallbackProxy_RegisterRTTChatCallback, "RegisterRTTChatCallback" }, // 2577731294
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCRTTChatCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCRTTChatCallbackProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTChatCallbackProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCRTTChatCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCRTTChatCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCRTTChatCallbackProxy_Statics::ClassParams = {
		&UBCRTTChatCallbackProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCRTTChatCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCRTTChatCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCRTTChatCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCRTTChatCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCRTTChatCallbackProxy, 3142039647);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCRTTChatCallbackProxy>()
	{
		return UBCRTTChatCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCRTTChatCallbackProxy(Z_Construct_UClass_UBCRTTChatCallbackProxy, &UBCRTTChatCallbackProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCRTTChatCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCRTTChatCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
