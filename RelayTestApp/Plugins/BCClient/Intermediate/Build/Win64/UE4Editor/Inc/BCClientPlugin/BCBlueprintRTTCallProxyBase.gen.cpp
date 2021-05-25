// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Public/BCBlueprintRTTCallProxyBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCBlueprintRTTCallProxyBase() {}
// Cross Module References
	BCCLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRTTCallbackDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintRTTCallProxyBase_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintRTTCallProxyBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRTTCallbackDelegate__DelegateSignature_Statics
	{
		struct _Script_BCClientPlugin_eventBrainCloudRTTCallbackDelegate_Parms
		{
			FString JsonData;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRTTCallbackDelegate__DelegateSignature_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BCClientPlugin_eventBrainCloudRTTCallbackDelegate_Parms, JsonData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRTTCallbackDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRTTCallbackDelegate__DelegateSignature_Statics::NewProp_JsonData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRTTCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCBlueprintRTTCallProxyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRTTCallbackDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin, nullptr, "BrainCloudRTTCallbackDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_BCClientPlugin_eventBrainCloudRTTCallbackDelegate_Parms), Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRTTCallbackDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRTTCallbackDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRTTCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRTTCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRTTCallbackDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRTTCallbackDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UBCBlueprintRTTCallProxyBase::StaticRegisterNativesUBCBlueprintRTTCallProxyBase()
	{
	}
	UClass* Z_Construct_UClass_UBCBlueprintRTTCallProxyBase_NoRegister()
	{
		return UBCBlueprintRTTCallProxyBase::StaticClass();
	}
	struct Z_Construct_UClass_UBCBlueprintRTTCallProxyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRTTCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRTTCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCBlueprintRTTCallProxyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCBlueprintRTTCallProxyBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BCBlueprintRTTCallProxyBase.h" },
		{ "ModuleRelativePath", "Public/BCBlueprintRTTCallProxyBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCBlueprintRTTCallProxyBase_Statics::NewProp_OnRTTCallback_MetaData[] = {
		{ "Comment", "//Response delegates\n" },
		{ "ModuleRelativePath", "Public/BCBlueprintRTTCallProxyBase.h" },
		{ "ToolTip", "Response delegates" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBCBlueprintRTTCallProxyBase_Statics::NewProp_OnRTTCallback = { "OnRTTCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBCBlueprintRTTCallProxyBase, OnRTTCallback), Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRTTCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBCBlueprintRTTCallProxyBase_Statics::NewProp_OnRTTCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBCBlueprintRTTCallProxyBase_Statics::NewProp_OnRTTCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBCBlueprintRTTCallProxyBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBCBlueprintRTTCallProxyBase_Statics::NewProp_OnRTTCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCBlueprintRTTCallProxyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCBlueprintRTTCallProxyBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCBlueprintRTTCallProxyBase_Statics::ClassParams = {
		&UBCBlueprintRTTCallProxyBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBCBlueprintRTTCallProxyBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBCBlueprintRTTCallProxyBase_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBCBlueprintRTTCallProxyBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCBlueprintRTTCallProxyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCBlueprintRTTCallProxyBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCBlueprintRTTCallProxyBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCBlueprintRTTCallProxyBase, 1450945859);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCBlueprintRTTCallProxyBase>()
	{
		return UBCBlueprintRTTCallProxyBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCBlueprintRTTCallProxyBase(Z_Construct_UClass_UBCBlueprintRTTCallProxyBase, &UBCBlueprintRTTCallProxyBase::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCBlueprintRTTCallProxyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCBlueprintRTTCallProxyBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
