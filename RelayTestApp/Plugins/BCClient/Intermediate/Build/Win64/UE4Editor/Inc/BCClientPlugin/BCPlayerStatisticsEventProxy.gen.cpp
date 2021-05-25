// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCPlayerStatisticsEventProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCPlayerStatisticsEventProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCPlayerStatisticsEventProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCPlayerStatisticsEventProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCPlayerStatisticsEventProxy::execTriggerStatsEvents)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStatisticsEventProxy**)Z_Param__Result=UBCPlayerStatisticsEventProxy::TriggerStatsEvents(Z_Param_brainCloudWrapper,Z_Param_jsonData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStatisticsEventProxy::execTriggerStatsEvent)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_eventName);
		P_GET_PROPERTY(FIntProperty,Z_Param_eventMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStatisticsEventProxy**)Z_Param__Result=UBCPlayerStatisticsEventProxy::TriggerStatsEvent(Z_Param_brainCloudWrapper,Z_Param_eventName,Z_Param_eventMultiplier);
		P_NATIVE_END;
	}
	void UBCPlayerStatisticsEventProxy::StaticRegisterNativesUBCPlayerStatisticsEventProxy()
	{
		UClass* Class = UBCPlayerStatisticsEventProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerStatsEvent", &UBCPlayerStatisticsEventProxy::execTriggerStatsEvent },
			{ "TriggerStatsEvents", &UBCPlayerStatisticsEventProxy::execTriggerStatsEvents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvent_Statics
	{
		struct BCPlayerStatisticsEventProxy_eventTriggerStatsEvent_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString eventName;
			int32 eventMultiplier;
			UBCPlayerStatisticsEventProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_eventName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_eventMultiplier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvent_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsEventProxy_eventTriggerStatsEvent_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvent_Statics::NewProp_eventName = { "eventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsEventProxy_eventTriggerStatsEvent_Parms, eventName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvent_Statics::NewProp_eventMultiplier = { "eventMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsEventProxy_eventTriggerStatsEvent_Parms, eventMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsEventProxy_eventTriggerStatsEvent_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStatisticsEventProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvent_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvent_Statics::NewProp_eventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvent_Statics::NewProp_eventMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player Statistics Event" },
		{ "Comment", "/**\n    * Trigger an event server side that will increase the users statistics.\n    * This may cause one or more awards to be sent back to the user -\n    * could be achievements, experience, etc. Achievements will be sent by this\n    * client library to the appropriate awards service (Apple Game Center, etc).\n    *\n    * This mechanism supercedes the PlayerStatisticsService API methods, since\n    * PlayerStatisticsService API method only update the raw statistics without\n    * triggering the rewards.\n    *\n    * Service Name - PlayerStatisticsEvent\n    * Service Operation - Trigger\n    *\n    * @see BrainCloudPlayerStatistics\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStatisticsEventProxy.h" },
		{ "ToolTip", "Trigger an event server side that will increase the users statistics.\nThis may cause one or more awards to be sent back to the user -\ncould be achievements, experience, etc. Achievements will be sent by this\nclient library to the appropriate awards service (Apple Game Center, etc).\n\nThis mechanism supercedes the PlayerStatisticsService API methods, since\nPlayerStatisticsService API method only update the raw statistics without\ntriggering the rewards.\n\nService Name - PlayerStatisticsEvent\nService Operation - Trigger\n\n@see BrainCloudPlayerStatistics" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStatisticsEventProxy, nullptr, "TriggerStatsEvent", nullptr, nullptr, sizeof(BCPlayerStatisticsEventProxy_eventTriggerStatsEvent_Parms), Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvents_Statics
	{
		struct BCPlayerStatisticsEventProxy_eventTriggerStatsEvents_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString jsonData;
			UBCPlayerStatisticsEventProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvents_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsEventProxy_eventTriggerStatsEvents_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvents_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsEventProxy_eventTriggerStatsEvents_Parms, jsonData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsEventProxy_eventTriggerStatsEvents_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStatisticsEventProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvents_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvents_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvents_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player Statistics Event" },
		{ "Comment", "/**\n    * See documentation for TriggerStatsEvent for more\n    * documentation.\n    *\n    * Service Name - PlayerStatisticsEvent\n    * Service Operation - TriggerMultiple\n    *\n    * Param - jsonData\n    *   [\n    *     {\n    *       \"eventName\": \"event1\",\n    *       \"eventMultiplier\": 1\n    *     },\n    *     {\n    *       \"eventName\": \"event2\",\n    *       \"eventMultiplier\": 1\n    *     }\n    *   ]\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStatisticsEventProxy.h" },
		{ "ToolTip", "See documentation for TriggerStatsEvent for more\ndocumentation.\n\nService Name - PlayerStatisticsEvent\nService Operation - TriggerMultiple\n\nParam - jsonData\n  [\n    {\n      \"eventName\": \"event1\",\n      \"eventMultiplier\": 1\n    },\n    {\n      \"eventName\": \"event2\",\n      \"eventMultiplier\": 1\n    }\n  ]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStatisticsEventProxy, nullptr, "TriggerStatsEvents", nullptr, nullptr, sizeof(BCPlayerStatisticsEventProxy_eventTriggerStatsEvents_Parms), Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCPlayerStatisticsEventProxy_NoRegister()
	{
		return UBCPlayerStatisticsEventProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCPlayerStatisticsEventProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCPlayerStatisticsEventProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCPlayerStatisticsEventProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvent, "TriggerStatsEvent" }, // 4123961608
		{ &Z_Construct_UFunction_UBCPlayerStatisticsEventProxy_TriggerStatsEvents, "TriggerStatsEvents" }, // 1825750639
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCPlayerStatisticsEventProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCPlayerStatisticsEventProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStatisticsEventProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCPlayerStatisticsEventProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCPlayerStatisticsEventProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCPlayerStatisticsEventProxy_Statics::ClassParams = {
		&UBCPlayerStatisticsEventProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCPlayerStatisticsEventProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCPlayerStatisticsEventProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCPlayerStatisticsEventProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCPlayerStatisticsEventProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCPlayerStatisticsEventProxy, 3841681421);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCPlayerStatisticsEventProxy>()
	{
		return UBCPlayerStatisticsEventProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCPlayerStatisticsEventProxy(Z_Construct_UClass_UBCPlayerStatisticsEventProxy, &UBCPlayerStatisticsEventProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCPlayerStatisticsEventProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCPlayerStatisticsEventProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
