// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCDataStreamProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCDataStreamProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCDataStreamProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCDataStreamProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCDataStreamProxy::execSubmitCrashReport)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_crashType);
		P_GET_PROPERTY(FStrProperty,Z_Param_errorMsg);
		P_GET_PROPERTY(FStrProperty,Z_Param_crashJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_crashLog);
		P_GET_PROPERTY(FStrProperty,Z_Param_userName);
		P_GET_PROPERTY(FStrProperty,Z_Param_userEmail);
		P_GET_PROPERTY(FStrProperty,Z_Param_userNotes);
		P_GET_UBOOL(Z_Param_userSubmitted);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCDataStreamProxy**)Z_Param__Result=UBCDataStreamProxy::SubmitCrashReport(Z_Param_brainCloudWrapper,Z_Param_crashType,Z_Param_errorMsg,Z_Param_crashJson,Z_Param_crashLog,Z_Param_userName,Z_Param_userEmail,Z_Param_userNotes,Z_Param_userSubmitted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCDataStreamProxy::execCustomTrackEvent)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_eventName);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonEventProperties);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCDataStreamProxy**)Z_Param__Result=UBCDataStreamProxy::CustomTrackEvent(Z_Param_brainCloudWrapper,Z_Param_eventName,Z_Param_jsonEventProperties);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCDataStreamProxy::execCustomScreenEvent)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_eventName);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonEventProperties);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCDataStreamProxy**)Z_Param__Result=UBCDataStreamProxy::CustomScreenEvent(Z_Param_brainCloudWrapper,Z_Param_eventName,Z_Param_jsonEventProperties);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCDataStreamProxy::execCustomPageEvent)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_eventName);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonEventProperties);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCDataStreamProxy**)Z_Param__Result=UBCDataStreamProxy::CustomPageEvent(Z_Param_brainCloudWrapper,Z_Param_eventName,Z_Param_jsonEventProperties);
		P_NATIVE_END;
	}
	void UBCDataStreamProxy::StaticRegisterNativesUBCDataStreamProxy()
	{
		UClass* Class = UBCDataStreamProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CustomPageEvent", &UBCDataStreamProxy::execCustomPageEvent },
			{ "CustomScreenEvent", &UBCDataStreamProxy::execCustomScreenEvent },
			{ "CustomTrackEvent", &UBCDataStreamProxy::execCustomTrackEvent },
			{ "SubmitCrashReport", &UBCDataStreamProxy::execSubmitCrashReport },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics
	{
		struct BCDataStreamProxy_eventCustomPageEvent_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString eventName;
			FString jsonEventProperties;
			UBCDataStreamProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_eventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonEventProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonEventProperties;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventCustomPageEvent_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::NewProp_eventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::NewProp_eventName = { "eventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventCustomPageEvent_Parms, eventName), METADATA_PARAMS(Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::NewProp_eventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::NewProp_eventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::NewProp_jsonEventProperties_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::NewProp_jsonEventProperties = { "jsonEventProperties", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventCustomPageEvent_Parms, jsonEventProperties), METADATA_PARAMS(Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::NewProp_jsonEventProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::NewProp_jsonEventProperties_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventCustomPageEvent_Parms, ReturnValue), Z_Construct_UClass_UBCDataStreamProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::NewProp_eventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::NewProp_jsonEventProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|DataStream" },
		{ "Comment", "/**\n    * Creates custom data stream page event\n    *\n    * Param - eventName Name of event\n    * Param - eventProperties Properties of event\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCDataStreamProxy.h" },
		{ "ToolTip", "Creates custom data stream page event\n\nParam - eventName Name of event\nParam - eventProperties Properties of event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCDataStreamProxy, nullptr, "CustomPageEvent", nullptr, nullptr, sizeof(BCDataStreamProxy_eventCustomPageEvent_Parms), Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics
	{
		struct BCDataStreamProxy_eventCustomScreenEvent_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString eventName;
			FString jsonEventProperties;
			UBCDataStreamProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_eventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonEventProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonEventProperties;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventCustomScreenEvent_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::NewProp_eventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::NewProp_eventName = { "eventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventCustomScreenEvent_Parms, eventName), METADATA_PARAMS(Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::NewProp_eventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::NewProp_eventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::NewProp_jsonEventProperties_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::NewProp_jsonEventProperties = { "jsonEventProperties", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventCustomScreenEvent_Parms, jsonEventProperties), METADATA_PARAMS(Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::NewProp_jsonEventProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::NewProp_jsonEventProperties_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventCustomScreenEvent_Parms, ReturnValue), Z_Construct_UClass_UBCDataStreamProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::NewProp_eventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::NewProp_jsonEventProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|DataStream" },
		{ "Comment", "/**\n    * Creates custom data stream screen event\n    *\n    * Param - eventName Name of event\n    * Param - eventProperties Properties of event\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCDataStreamProxy.h" },
		{ "ToolTip", "Creates custom data stream screen event\n\nParam - eventName Name of event\nParam - eventProperties Properties of event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCDataStreamProxy, nullptr, "CustomScreenEvent", nullptr, nullptr, sizeof(BCDataStreamProxy_eventCustomScreenEvent_Parms), Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics
	{
		struct BCDataStreamProxy_eventCustomTrackEvent_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString eventName;
			FString jsonEventProperties;
			UBCDataStreamProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_eventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonEventProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonEventProperties;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventCustomTrackEvent_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::NewProp_eventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::NewProp_eventName = { "eventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventCustomTrackEvent_Parms, eventName), METADATA_PARAMS(Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::NewProp_eventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::NewProp_eventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::NewProp_jsonEventProperties_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::NewProp_jsonEventProperties = { "jsonEventProperties", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventCustomTrackEvent_Parms, jsonEventProperties), METADATA_PARAMS(Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::NewProp_jsonEventProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::NewProp_jsonEventProperties_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventCustomTrackEvent_Parms, ReturnValue), Z_Construct_UClass_UBCDataStreamProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::NewProp_eventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::NewProp_jsonEventProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|DataStream" },
		{ "Comment", "/**\n    * Creates custom data stream track event\n    *\n    * Param - eventName Name of event\n    * Param - eventProperties Properties of event\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCDataStreamProxy.h" },
		{ "ToolTip", "Creates custom data stream track event\n\nParam - eventName Name of event\nParam - eventProperties Properties of event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCDataStreamProxy, nullptr, "CustomTrackEvent", nullptr, nullptr, sizeof(BCDataStreamProxy_eventCustomTrackEvent_Parms), Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics
	{
		struct BCDataStreamProxy_eventSubmitCrashReport_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString crashType;
			FString errorMsg;
			FString crashJson;
			FString crashLog;
			FString userName;
			FString userEmail;
			FString userNotes;
			bool userSubmitted;
			UBCDataStreamProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_crashType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_crashType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errorMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_crashJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_crashJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_crashLog_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_crashLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userEmail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userEmail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userNotes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userNotes;
		static void NewProp_userSubmitted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_userSubmitted;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventSubmitCrashReport_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_crashType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_crashType = { "crashType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventSubmitCrashReport_Parms, crashType), METADATA_PARAMS(Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_crashType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_crashType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_errorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_errorMsg = { "errorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventSubmitCrashReport_Parms, errorMsg), METADATA_PARAMS(Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_errorMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_errorMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_crashJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_crashJson = { "crashJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventSubmitCrashReport_Parms, crashJson), METADATA_PARAMS(Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_crashJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_crashJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_crashLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_crashLog = { "crashLog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventSubmitCrashReport_Parms, crashLog), METADATA_PARAMS(Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_crashLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_crashLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_userName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_userName = { "userName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventSubmitCrashReport_Parms, userName), METADATA_PARAMS(Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_userName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_userName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_userEmail_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_userEmail = { "userEmail", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventSubmitCrashReport_Parms, userEmail), METADATA_PARAMS(Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_userEmail_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_userEmail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_userNotes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_userNotes = { "userNotes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventSubmitCrashReport_Parms, userNotes), METADATA_PARAMS(Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_userNotes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_userNotes_MetaData)) };
	void Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_userSubmitted_SetBit(void* Obj)
	{
		((BCDataStreamProxy_eventSubmitCrashReport_Parms*)Obj)->userSubmitted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_userSubmitted = { "userSubmitted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCDataStreamProxy_eventSubmitCrashReport_Parms), &Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_userSubmitted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCDataStreamProxy_eventSubmitCrashReport_Parms, ReturnValue), Z_Construct_UClass_UBCDataStreamProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_crashType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_errorMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_crashJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_crashLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_userName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_userEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_userNotes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_userSubmitted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|DataStream" },
		{ "Comment", "/**\n     * Send crash report\n     *\n     * @param crashType String the type of crash\n     * @param errosMsg String the message to send\n     * @param crashJson Json the fields of the crash\n     * @param crashLog String log data\n     * @param userName\n     * @param userEmail\n     * @param userNotes\n     * @param userSubmitted\n     * @param callback The callback object\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCDataStreamProxy.h" },
		{ "ToolTip", "Send crash report\n\n@param crashType String the type of crash\n@param errosMsg String the message to send\n@param crashJson Json the fields of the crash\n@param crashLog String log data\n@param userName\n@param userEmail\n@param userNotes\n@param userSubmitted\n@param callback The callback object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCDataStreamProxy, nullptr, "SubmitCrashReport", nullptr, nullptr, sizeof(BCDataStreamProxy_eventSubmitCrashReport_Parms), Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCDataStreamProxy_NoRegister()
	{
		return UBCDataStreamProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCDataStreamProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCDataStreamProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCDataStreamProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCDataStreamProxy_CustomPageEvent, "CustomPageEvent" }, // 83784028
		{ &Z_Construct_UFunction_UBCDataStreamProxy_CustomScreenEvent, "CustomScreenEvent" }, // 1379043455
		{ &Z_Construct_UFunction_UBCDataStreamProxy_CustomTrackEvent, "CustomTrackEvent" }, // 272613692
		{ &Z_Construct_UFunction_UBCDataStreamProxy_SubmitCrashReport, "SubmitCrashReport" }, // 3351103406
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCDataStreamProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCDataStreamProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCDataStreamProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCDataStreamProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCDataStreamProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCDataStreamProxy_Statics::ClassParams = {
		&UBCDataStreamProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCDataStreamProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCDataStreamProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCDataStreamProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCDataStreamProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCDataStreamProxy, 1543613523);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCDataStreamProxy>()
	{
		return UBCDataStreamProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCDataStreamProxy(Z_Construct_UClass_UBCDataStreamProxy, &UBCDataStreamProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCDataStreamProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCDataStreamProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
