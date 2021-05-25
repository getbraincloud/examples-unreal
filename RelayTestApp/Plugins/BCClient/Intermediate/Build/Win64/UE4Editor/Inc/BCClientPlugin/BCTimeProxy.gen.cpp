// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCTimeProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCTimeProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCTimeProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCTimeProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCTimeProxy::execReadServerTime)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloud);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCTimeProxy**)Z_Param__Result=UBCTimeProxy::ReadServerTime(Z_Param_brainCloud);
		P_NATIVE_END;
	}
	void UBCTimeProxy::StaticRegisterNativesUBCTimeProxy()
	{
		UClass* Class = UBCTimeProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadServerTime", &UBCTimeProxy::execReadServerTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCTimeProxy_ReadServerTime_Statics
	{
		struct BCTimeProxy_eventReadServerTime_Parms
		{
			UBrainCloudWrapper* brainCloud;
			UBCTimeProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloud;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTimeProxy_ReadServerTime_Statics::NewProp_brainCloud = { "brainCloud", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTimeProxy_eventReadServerTime_Parms, brainCloud), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTimeProxy_ReadServerTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTimeProxy_eventReadServerTime_Parms, ReturnValue), Z_Construct_UClass_UBCTimeProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCTimeProxy_ReadServerTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTimeProxy_ReadServerTime_Statics::NewProp_brainCloud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTimeProxy_ReadServerTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTimeProxy_ReadServerTime_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Time" },
		{ "Comment", "/**Url\n    * Method returns the server time in UTC. This is in UNIX millis time format.\n    * For instance 1396378241893 represents 2014-04-01 2:50:41.893 in GMT-4.\n    *\n    * Service Name - Time\n    * Service Operation - Read\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTimeProxy.h" },
		{ "ToolTip", "Url\nMethod returns the server time in UTC. This is in UNIX millis time format.\nFor instance 1396378241893 represents 2014-04-01 2:50:41.893 in GMT-4.\n\nService Name - Time\nService Operation - Read" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCTimeProxy_ReadServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCTimeProxy, nullptr, "ReadServerTime", nullptr, nullptr, sizeof(BCTimeProxy_eventReadServerTime_Parms), Z_Construct_UFunction_UBCTimeProxy_ReadServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTimeProxy_ReadServerTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCTimeProxy_ReadServerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTimeProxy_ReadServerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCTimeProxy_ReadServerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCTimeProxy_ReadServerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCTimeProxy_NoRegister()
	{
		return UBCTimeProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCTimeProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCTimeProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCTimeProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCTimeProxy_ReadServerTime, "ReadServerTime" }, // 775205621
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCTimeProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCTimeProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTimeProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCTimeProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCTimeProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCTimeProxy_Statics::ClassParams = {
		&UBCTimeProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCTimeProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCTimeProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCTimeProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCTimeProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCTimeProxy, 1495880456);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCTimeProxy>()
	{
		return UBCTimeProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCTimeProxy(Z_Construct_UClass_UBCTimeProxy, &UBCTimeProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCTimeProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCTimeProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
