// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCGlobalAppProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCGlobalAppProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCGlobalAppProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCGlobalAppProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCGlobalAppProxy::execReadProperties)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloud);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalAppProxy**)Z_Param__Result=UBCGlobalAppProxy::ReadProperties(Z_Param_brainCloud);
		P_NATIVE_END;
	}
	void UBCGlobalAppProxy::StaticRegisterNativesUBCGlobalAppProxy()
	{
		UClass* Class = UBCGlobalAppProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadProperties", &UBCGlobalAppProxy::execReadProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCGlobalAppProxy_ReadProperties_Statics
	{
		struct BCGlobalAppProxy_eventReadProperties_Parms
		{
			UBrainCloudWrapper* brainCloud;
			UBCGlobalAppProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloud;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalAppProxy_ReadProperties_Statics::NewProp_brainCloud = { "brainCloud", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalAppProxy_eventReadProperties_Parms, brainCloud), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalAppProxy_ReadProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalAppProxy_eventReadProperties_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalAppProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalAppProxy_ReadProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalAppProxy_ReadProperties_Statics::NewProp_brainCloud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalAppProxy_ReadProperties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalAppProxy_ReadProperties_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global App" },
		{ "Comment", "/**\n    * Read game's global properties\n    *\n    * Service Name - GlobalApp\n    * Service Operation - ReadProperties\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalAppProxy.h" },
		{ "ToolTip", "Read game's global properties\n\nService Name - GlobalApp\nService Operation - ReadProperties" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalAppProxy_ReadProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalAppProxy, nullptr, "ReadProperties", nullptr, nullptr, sizeof(BCGlobalAppProxy_eventReadProperties_Parms), Z_Construct_UFunction_UBCGlobalAppProxy_ReadProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalAppProxy_ReadProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalAppProxy_ReadProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalAppProxy_ReadProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalAppProxy_ReadProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalAppProxy_ReadProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCGlobalAppProxy_NoRegister()
	{
		return UBCGlobalAppProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCGlobalAppProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCGlobalAppProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCGlobalAppProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCGlobalAppProxy_ReadProperties, "ReadProperties" }, // 1902809810
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCGlobalAppProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCGlobalAppProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalAppProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCGlobalAppProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCGlobalAppProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCGlobalAppProxy_Statics::ClassParams = {
		&UBCGlobalAppProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCGlobalAppProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCGlobalAppProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCGlobalAppProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCGlobalAppProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCGlobalAppProxy, 2976816244);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCGlobalAppProxy>()
	{
		return UBCGlobalAppProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCGlobalAppProxy(Z_Construct_UClass_UBCGlobalAppProxy, &UBCGlobalAppProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCGlobalAppProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCGlobalAppProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
