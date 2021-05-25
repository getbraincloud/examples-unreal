// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Public/BCBlueprintCallProxyBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCBlueprintCallProxyBase() {}
// Cross Module References
	BCCLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudCallbackDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBC_ReturnData();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudCallbackDelegate__DelegateSignature_Statics
	{
		struct _Script_BCClientPlugin_eventBrainCloudCallbackDelegate_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudCallbackDelegate__DelegateSignature_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BCClientPlugin_eventBrainCloudCallbackDelegate_Parms, JsonData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudCallbackDelegate__DelegateSignature_Statics::NewProp_AdditionalData = { "AdditionalData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BCClientPlugin_eventBrainCloudCallbackDelegate_Parms, AdditionalData), Z_Construct_UScriptStruct_FBC_ReturnData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudCallbackDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudCallbackDelegate__DelegateSignature_Statics::NewProp_JsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudCallbackDelegate__DelegateSignature_Statics::NewProp_AdditionalData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCBlueprintCallProxyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudCallbackDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin, nullptr, "BrainCloudCallbackDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_BCClientPlugin_eventBrainCloudCallbackDelegate_Parms), Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudCallbackDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudCallbackDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudCallbackDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudCallbackDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FBC_ReturnData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BCCLIENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBC_ReturnData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBC_ReturnData, Z_Construct_UPackage__Script_BCClientPlugin(), TEXT("BC_ReturnData"), sizeof(FBC_ReturnData), Get_Z_Construct_UScriptStruct_FBC_ReturnData_Hash());
	}
	return Singleton;
}
template<> BCCLIENTPLUGIN_API UScriptStruct* StaticStruct<FBC_ReturnData>()
{
	return FBC_ReturnData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBC_ReturnData(FBC_ReturnData::StaticStruct, TEXT("/Script/BCClientPlugin"), TEXT("BC_ReturnData"), false, nullptr, nullptr);
static struct FScriptStruct_BCClientPlugin_StaticRegisterNativesFBC_ReturnData
{
	FScriptStruct_BCClientPlugin_StaticRegisterNativesFBC_ReturnData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BC_ReturnData")),new UScriptStruct::TCppStructOps<FBC_ReturnData>);
	}
} ScriptStruct_BCClientPlugin_StaticRegisterNativesFBC_ReturnData;
	struct Z_Construct_UScriptStruct_FBC_ReturnData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServiceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServiceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServiceOperation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServiceOperation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StatusCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReasonCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReasonCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBC_ReturnData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "BrainCloud" },
		{ "ModuleRelativePath", "Public/BCBlueprintCallProxyBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBC_ReturnData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewProp_ServiceName_MetaData[] = {
		{ "Category", "BC_ReturnData" },
		{ "ModuleRelativePath", "Public/BCBlueprintCallProxyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewProp_ServiceName = { "ServiceName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBC_ReturnData, ServiceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewProp_ServiceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewProp_ServiceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewProp_ServiceOperation_MetaData[] = {
		{ "Category", "BC_ReturnData" },
		{ "ModuleRelativePath", "Public/BCBlueprintCallProxyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewProp_ServiceOperation = { "ServiceOperation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBC_ReturnData, ServiceOperation), METADATA_PARAMS(Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewProp_ServiceOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewProp_ServiceOperation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewProp_StatusCode_MetaData[] = {
		{ "Category", "BC_ReturnData" },
		{ "ModuleRelativePath", "Public/BCBlueprintCallProxyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBC_ReturnData, StatusCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewProp_StatusCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewProp_StatusCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewProp_ReasonCode_MetaData[] = {
		{ "Category", "BC_ReturnData" },
		{ "ModuleRelativePath", "Public/BCBlueprintCallProxyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewProp_ReasonCode = { "ReasonCode", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBC_ReturnData, ReasonCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewProp_ReasonCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewProp_ReasonCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBC_ReturnData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewProp_ServiceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewProp_ServiceOperation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewProp_StatusCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBC_ReturnData_Statics::NewProp_ReasonCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBC_ReturnData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
		nullptr,
		&NewStructOps,
		"BC_ReturnData",
		sizeof(FBC_ReturnData),
		alignof(FBC_ReturnData),
		Z_Construct_UScriptStruct_FBC_ReturnData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBC_ReturnData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBC_ReturnData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBC_ReturnData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBC_ReturnData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBC_ReturnData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BCClientPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BC_ReturnData"), sizeof(FBC_ReturnData), Get_Z_Construct_UScriptStruct_FBC_ReturnData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBC_ReturnData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBC_ReturnData_Hash() { return 3449547194U; }
	void UBCBlueprintCallProxyBase::StaticRegisterNativesUBCBlueprintCallProxyBase()
	{
	}
	UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase_NoRegister()
	{
		return UBCBlueprintCallProxyBase::StaticClass();
	}
	struct Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BCBlueprintCallProxyBase.h" },
		{ "ModuleRelativePath", "Public/BCBlueprintCallProxyBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "//Response delegates\n" },
		{ "ModuleRelativePath", "Public/BCBlueprintCallProxyBase.h" },
		{ "ToolTip", "Response delegates" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBCBlueprintCallProxyBase, OnSuccess), Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics::NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/BCBlueprintCallProxyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBCBlueprintCallProxyBase, OnFailure), Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCBlueprintCallProxyBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics::ClassParams = {
		&UBCBlueprintCallProxyBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCBlueprintCallProxyBase, 313641652);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCBlueprintCallProxyBase>()
	{
		return UBCBlueprintCallProxyBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCBlueprintCallProxyBase(Z_Construct_UClass_UBCBlueprintCallProxyBase, &UBCBlueprintCallProxyBase::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCBlueprintCallProxyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCBlueprintCallProxyBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
