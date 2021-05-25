// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Public/BCBlueprintRestCallProxyBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCBlueprintRestCallProxyBase() {}
// Cross Module References
	BCCLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRestCallbackDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBC_ReturnData();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintRestCallProxyBase_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintRestCallProxyBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRestCallbackDelegate__DelegateSignature_Statics
	{
		struct _Script_BCClientPlugin_eventBrainCloudRestCallbackDelegate_Parms
		{
			FString JsonData;
			FBC_ReturnData AdditionalData;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionalData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRestCallbackDelegate__DelegateSignature_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BCClientPlugin_eventBrainCloudRestCallbackDelegate_Parms, JsonData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRestCallbackDelegate__DelegateSignature_Statics::NewProp_AdditionalData = { "AdditionalData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BCClientPlugin_eventBrainCloudRestCallbackDelegate_Parms, AdditionalData), Z_Construct_UScriptStruct_FBC_ReturnData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRestCallbackDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRestCallbackDelegate__DelegateSignature_Statics::NewProp_JsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRestCallbackDelegate__DelegateSignature_Statics::NewProp_AdditionalData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRestCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCBlueprintRestCallProxyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRestCallbackDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin, nullptr, "BrainCloudRestCallbackDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_BCClientPlugin_eventBrainCloudRestCallbackDelegate_Parms), Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRestCallbackDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRestCallbackDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRestCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRestCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRestCallbackDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRestCallbackDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UBCBlueprintRestCallProxyBase::StaticRegisterNativesUBCBlueprintRestCallProxyBase()
	{
	}
	UClass* Z_Construct_UClass_UBCBlueprintRestCallProxyBase_NoRegister()
	{
		return UBCBlueprintRestCallProxyBase::StaticClass();
	}
	struct Z_Construct_UClass_UBCBlueprintRestCallProxyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCBlueprintRestCallProxyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCBlueprintRestCallProxyBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BCBlueprintRestCallProxyBase.h" },
		{ "ModuleRelativePath", "Public/BCBlueprintRestCallProxyBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCBlueprintRestCallProxyBase_Statics::NewProp_OnCallback_MetaData[] = {
		{ "Comment", "//Response delegates\n" },
		{ "ModuleRelativePath", "Public/BCBlueprintRestCallProxyBase.h" },
		{ "ToolTip", "Response delegates" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBCBlueprintRestCallProxyBase_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBCBlueprintRestCallProxyBase, OnCallback), Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRestCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBCBlueprintRestCallProxyBase_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBCBlueprintRestCallProxyBase_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBCBlueprintRestCallProxyBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBCBlueprintRestCallProxyBase_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCBlueprintRestCallProxyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCBlueprintRestCallProxyBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCBlueprintRestCallProxyBase_Statics::ClassParams = {
		&UBCBlueprintRestCallProxyBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBCBlueprintRestCallProxyBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBCBlueprintRestCallProxyBase_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBCBlueprintRestCallProxyBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCBlueprintRestCallProxyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCBlueprintRestCallProxyBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCBlueprintRestCallProxyBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCBlueprintRestCallProxyBase, 1566682012);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCBlueprintRestCallProxyBase>()
	{
		return UBCBlueprintRestCallProxyBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCBlueprintRestCallProxyBase(Z_Construct_UClass_UBCBlueprintRestCallProxyBase, &UBCBlueprintRestCallProxyBase::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCBlueprintRestCallProxyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCBlueprintRestCallProxyBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
