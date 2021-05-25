// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCScriptProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCScriptProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCScriptProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCScriptProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
	DEFINE_FUNCTION(UBCScriptProxy::execGetScheduledCloudScripts)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_STRUCT(FDateTime,Z_Param_startDateInUTC);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCScriptProxy**)Z_Param__Result=UBCScriptProxy::GetScheduledCloudScripts(Z_Param_brainCloudWrapper,Z_Param_startDateInUTC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCScriptProxy::execGetRunningOrQueuedCloudScripts)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCScriptProxy**)Z_Param__Result=UBCScriptProxy::GetRunningOrQueuedCloudScripts(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCScriptProxy::execRunPeerScriptAsync)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_scriptName);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonScriptData);
		P_GET_PROPERTY(FStrProperty,Z_Param_peer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCScriptProxy**)Z_Param__Result=UBCScriptProxy::RunPeerScriptAsync(Z_Param_brainCloudWrapper,Z_Param_scriptName,Z_Param_jsonScriptData,Z_Param_peer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCScriptProxy::execRunPeerScript)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_scriptName);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonScriptData);
		P_GET_PROPERTY(FStrProperty,Z_Param_peer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCScriptProxy**)Z_Param__Result=UBCScriptProxy::RunPeerScript(Z_Param_brainCloudWrapper,Z_Param_scriptName,Z_Param_jsonScriptData,Z_Param_peer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCScriptProxy::execCancelScheduledScript)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_jobId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCScriptProxy**)Z_Param__Result=UBCScriptProxy::CancelScheduledScript(Z_Param_brainCloudWrapper,Z_Param_jobId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCScriptProxy::execRunParentScript)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_scriptName);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonScriptData);
		P_GET_PROPERTY(FStrProperty,Z_Param_parentLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCScriptProxy**)Z_Param__Result=UBCScriptProxy::RunParentScript(Z_Param_brainCloudWrapper,Z_Param_scriptName,Z_Param_jsonScriptData,Z_Param_parentLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCScriptProxy::execScheduleRunScriptMinutes)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_scriptName);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonScriptData);
		P_GET_PROPERTY(FIntProperty,Z_Param_minutesFromNow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCScriptProxy**)Z_Param__Result=UBCScriptProxy::ScheduleRunScriptMinutes(Z_Param_brainCloudWrapper,Z_Param_scriptName,Z_Param_jsonScriptData,Z_Param_minutesFromNow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCScriptProxy::execScheduleRunScriptMillisUTC)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_scriptName);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonScriptData);
		P_GET_PROPERTY(FInt64Property,Z_Param_startDateInUTC);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCScriptProxy**)Z_Param__Result=UBCScriptProxy::ScheduleRunScriptMillisUTC(Z_Param_brainCloudWrapper,Z_Param_scriptName,Z_Param_jsonScriptData,Z_Param_startDateInUTC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCScriptProxy::execRunScript)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_scriptName);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonScriptData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCScriptProxy**)Z_Param__Result=UBCScriptProxy::RunScript(Z_Param_brainCloudWrapper,Z_Param_scriptName,Z_Param_jsonScriptData);
		P_NATIVE_END;
	}
	void UBCScriptProxy::StaticRegisterNativesUBCScriptProxy()
	{
		UClass* Class = UBCScriptProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelScheduledScript", &UBCScriptProxy::execCancelScheduledScript },
			{ "GetRunningOrQueuedCloudScripts", &UBCScriptProxy::execGetRunningOrQueuedCloudScripts },
			{ "GetScheduledCloudScripts", &UBCScriptProxy::execGetScheduledCloudScripts },
			{ "RunParentScript", &UBCScriptProxy::execRunParentScript },
			{ "RunPeerScript", &UBCScriptProxy::execRunPeerScript },
			{ "RunPeerScriptAsync", &UBCScriptProxy::execRunPeerScriptAsync },
			{ "RunScript", &UBCScriptProxy::execRunScript },
			{ "ScheduleRunScriptMillisUTC", &UBCScriptProxy::execScheduleRunScriptMillisUTC },
			{ "ScheduleRunScriptMinutes", &UBCScriptProxy::execScheduleRunScriptMinutes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCScriptProxy_CancelScheduledScript_Statics
	{
		struct BCScriptProxy_eventCancelScheduledScript_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString jobId;
			UBCScriptProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jobId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jobId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCScriptProxy_CancelScheduledScript_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventCancelScheduledScript_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCScriptProxy_CancelScheduledScript_Statics::NewProp_jobId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCScriptProxy_CancelScheduledScript_Statics::NewProp_jobId = { "jobId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventCancelScheduledScript_Parms, jobId), METADATA_PARAMS(Z_Construct_UFunction_UBCScriptProxy_CancelScheduledScript_Statics::NewProp_jobId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_CancelScheduledScript_Statics::NewProp_jobId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCScriptProxy_CancelScheduledScript_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventCancelScheduledScript_Parms, ReturnValue), Z_Construct_UClass_UBCScriptProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCScriptProxy_CancelScheduledScript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_CancelScheduledScript_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_CancelScheduledScript_Statics::NewProp_jobId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_CancelScheduledScript_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCScriptProxy_CancelScheduledScript_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Cloud Script" },
		{ "Comment", "/**\n\x09* Cancels a scheduled cloud code script\n\x09*\n\x09* Service Name - Script\n\x09* Service Operation - CANCEL_SCHEDULED_SCRIPT\n\x09*\n\x09* Param - jobId ID of script job to cancel\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCScriptProxy.h" },
		{ "ToolTip", "Cancels a scheduled cloud code script\n\nService Name - Script\nService Operation - CANCEL_SCHEDULED_SCRIPT\n\nParam - jobId ID of script job to cancel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCScriptProxy_CancelScheduledScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCScriptProxy, nullptr, "CancelScheduledScript", nullptr, nullptr, sizeof(BCScriptProxy_eventCancelScheduledScript_Parms), Z_Construct_UFunction_UBCScriptProxy_CancelScheduledScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_CancelScheduledScript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCScriptProxy_CancelScheduledScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_CancelScheduledScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCScriptProxy_CancelScheduledScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCScriptProxy_CancelScheduledScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCScriptProxy_GetRunningOrQueuedCloudScripts_Statics
	{
		struct BCScriptProxy_eventGetRunningOrQueuedCloudScripts_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCScriptProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCScriptProxy_GetRunningOrQueuedCloudScripts_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventGetRunningOrQueuedCloudScripts_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCScriptProxy_GetRunningOrQueuedCloudScripts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventGetRunningOrQueuedCloudScripts_Parms, ReturnValue), Z_Construct_UClass_UBCScriptProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCScriptProxy_GetRunningOrQueuedCloudScripts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_GetRunningOrQueuedCloudScripts_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_GetRunningOrQueuedCloudScripts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCScriptProxy_GetRunningOrQueuedCloudScripts_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Cloud Script" },
		{ "Comment", "/**\n\x09* Retrieves scripts currently running or queued.\n\x09*\n\x09* Service Name - Script\n\x09* Service Operation - GET_RUNNING_OR_QUEUED_CLOUD_SCRIPTS\n\x09*\n\x09* @param callback The method to be invoked when the server response is received\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCScriptProxy.h" },
		{ "ToolTip", "Retrieves scripts currently running or queued.\n\nService Name - Script\nService Operation - GET_RUNNING_OR_QUEUED_CLOUD_SCRIPTS\n\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCScriptProxy_GetRunningOrQueuedCloudScripts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCScriptProxy, nullptr, "GetRunningOrQueuedCloudScripts", nullptr, nullptr, sizeof(BCScriptProxy_eventGetRunningOrQueuedCloudScripts_Parms), Z_Construct_UFunction_UBCScriptProxy_GetRunningOrQueuedCloudScripts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_GetRunningOrQueuedCloudScripts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCScriptProxy_GetRunningOrQueuedCloudScripts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_GetRunningOrQueuedCloudScripts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCScriptProxy_GetRunningOrQueuedCloudScripts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCScriptProxy_GetRunningOrQueuedCloudScripts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCScriptProxy_GetScheduledCloudScripts_Statics
	{
		struct BCScriptProxy_eventGetScheduledCloudScripts_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FDateTime startDateInUTC;
			UBCScriptProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_startDateInUTC;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCScriptProxy_GetScheduledCloudScripts_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventGetScheduledCloudScripts_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBCScriptProxy_GetScheduledCloudScripts_Statics::NewProp_startDateInUTC = { "startDateInUTC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventGetScheduledCloudScripts_Parms, startDateInUTC), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCScriptProxy_GetScheduledCloudScripts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventGetScheduledCloudScripts_Parms, ReturnValue), Z_Construct_UClass_UBCScriptProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCScriptProxy_GetScheduledCloudScripts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_GetScheduledCloudScripts_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_GetScheduledCloudScripts_Statics::NewProp_startDateInUTC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_GetScheduledCloudScripts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCScriptProxy_GetScheduledCloudScripts_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Cloud Script" },
		{ "Comment", "/**\n\x09* Retrieves scripts scheduled to run up to and including the specified start time (UTC in ms).\n\x09*\n\x09* Service Name - Script\n\x09* Service Operation - GET_SCHEDULED_CLOUD_SCRIPTS\n\x09* @param startDateUTC \n\x09* @param callback The method to be invoked when the server response is received\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCScriptProxy.h" },
		{ "ToolTip", "Retrieves scripts scheduled to run up to and including the specified start time (UTC in ms).\n\nService Name - Script\nService Operation - GET_SCHEDULED_CLOUD_SCRIPTS\n@param startDateUTC\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCScriptProxy_GetScheduledCloudScripts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCScriptProxy, nullptr, "GetScheduledCloudScripts", nullptr, nullptr, sizeof(BCScriptProxy_eventGetScheduledCloudScripts_Parms), Z_Construct_UFunction_UBCScriptProxy_GetScheduledCloudScripts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_GetScheduledCloudScripts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCScriptProxy_GetScheduledCloudScripts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_GetScheduledCloudScripts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCScriptProxy_GetScheduledCloudScripts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCScriptProxy_GetScheduledCloudScripts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCScriptProxy_RunParentScript_Statics
	{
		struct BCScriptProxy_eventRunParentScript_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString scriptName;
			FString jsonScriptData;
			FString parentLevel;
			UBCScriptProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_scriptName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonScriptData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_parentLevel;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCScriptProxy_RunParentScript_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventRunParentScript_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCScriptProxy_RunParentScript_Statics::NewProp_scriptName = { "scriptName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventRunParentScript_Parms, scriptName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCScriptProxy_RunParentScript_Statics::NewProp_jsonScriptData = { "jsonScriptData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventRunParentScript_Parms, jsonScriptData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCScriptProxy_RunParentScript_Statics::NewProp_parentLevel = { "parentLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventRunParentScript_Parms, parentLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCScriptProxy_RunParentScript_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventRunParentScript_Parms, ReturnValue), Z_Construct_UClass_UBCScriptProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCScriptProxy_RunParentScript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_RunParentScript_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_RunParentScript_Statics::NewProp_scriptName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_RunParentScript_Statics::NewProp_jsonScriptData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_RunParentScript_Statics::NewProp_parentLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_RunParentScript_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCScriptProxy_RunParentScript_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Cloud Script" },
		{ "Comment", "/**\n\x09* Run a cloud script in a parent app\n\x09*\n\x09* Service Name - Script\n\x09* Service Operation - RUN_PARENT_SCRIPT\n\x09*\n\x09* Param - scriptName The name of the script to be run\n\x09* Param - scriptData Data to be sent to the script in json format\n\x09* Param - parentLevel The level name of the parent to run the script from\n\x09* @see The API documentation site for more details on cloud code\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCScriptProxy.h" },
		{ "ToolTip", "Run a cloud script in a parent app\n\nService Name - Script\nService Operation - RUN_PARENT_SCRIPT\n\nParam - scriptName The name of the script to be run\nParam - scriptData Data to be sent to the script in json format\nParam - parentLevel The level name of the parent to run the script from\n@see The API documentation site for more details on cloud code" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCScriptProxy_RunParentScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCScriptProxy, nullptr, "RunParentScript", nullptr, nullptr, sizeof(BCScriptProxy_eventRunParentScript_Parms), Z_Construct_UFunction_UBCScriptProxy_RunParentScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_RunParentScript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCScriptProxy_RunParentScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_RunParentScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCScriptProxy_RunParentScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCScriptProxy_RunParentScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics
	{
		struct BCScriptProxy_eventRunPeerScript_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString scriptName;
			FString jsonScriptData;
			FString peer;
			UBCScriptProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scriptName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_scriptName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonScriptData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonScriptData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_peer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_peer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventRunPeerScript_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::NewProp_scriptName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::NewProp_scriptName = { "scriptName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventRunPeerScript_Parms, scriptName), METADATA_PARAMS(Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::NewProp_scriptName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::NewProp_scriptName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::NewProp_jsonScriptData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::NewProp_jsonScriptData = { "jsonScriptData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventRunPeerScript_Parms, jsonScriptData), METADATA_PARAMS(Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::NewProp_jsonScriptData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::NewProp_jsonScriptData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::NewProp_peer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::NewProp_peer = { "peer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventRunPeerScript_Parms, peer), METADATA_PARAMS(Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::NewProp_peer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::NewProp_peer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventRunPeerScript_Parms, ReturnValue), Z_Construct_UClass_UBCScriptProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::NewProp_scriptName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::NewProp_jsonScriptData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::NewProp_peer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Cloud Script" },
		{ "Comment", "/**\n\x09* Runs a script from the context of a peer\n\x09*\n\x09* Service Name - Script\n\x09* Service Operation - RUN_PEER_SCRIPT\n\x09*\n\x09* Param - scriptName The name of the script to be run\n\x09* Param - jsonScriptData Data to be sent to the script in json format\n\x09* Param - peer Peer the script belongs to\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCScriptProxy.h" },
		{ "ToolTip", "Runs a script from the context of a peer\n\nService Name - Script\nService Operation - RUN_PEER_SCRIPT\n\nParam - scriptName The name of the script to be run\nParam - jsonScriptData Data to be sent to the script in json format\nParam - peer Peer the script belongs to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCScriptProxy, nullptr, "RunPeerScript", nullptr, nullptr, sizeof(BCScriptProxy_eventRunPeerScript_Parms), Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCScriptProxy_RunPeerScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCScriptProxy_RunPeerScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics
	{
		struct BCScriptProxy_eventRunPeerScriptAsync_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString scriptName;
			FString jsonScriptData;
			FString peer;
			UBCScriptProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scriptName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_scriptName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonScriptData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonScriptData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_peer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_peer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventRunPeerScriptAsync_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::NewProp_scriptName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::NewProp_scriptName = { "scriptName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventRunPeerScriptAsync_Parms, scriptName), METADATA_PARAMS(Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::NewProp_scriptName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::NewProp_scriptName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::NewProp_jsonScriptData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::NewProp_jsonScriptData = { "jsonScriptData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventRunPeerScriptAsync_Parms, jsonScriptData), METADATA_PARAMS(Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::NewProp_jsonScriptData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::NewProp_jsonScriptData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::NewProp_peer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::NewProp_peer = { "peer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventRunPeerScriptAsync_Parms, peer), METADATA_PARAMS(Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::NewProp_peer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::NewProp_peer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventRunPeerScriptAsync_Parms, ReturnValue), Z_Construct_UClass_UBCScriptProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::NewProp_scriptName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::NewProp_jsonScriptData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::NewProp_peer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Cloud Script" },
		{ "Comment", "/**\n\x09* Runs a script asynchronously from the context of a peer\n\x09* This method does not wait for the script to complete before returning\n\x09*\n\x09* Service Name - Script\n\x09* Service Operation - RUN_PEER_SCRIPT_ASYNC\n\x09*\n\x09* Param - scriptName The name of the script to be run\n\x09* Param - jsonScriptData Data to be sent to the script in json format\n\x09* Param - peer Peer the script belongs to\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCScriptProxy.h" },
		{ "ToolTip", "Runs a script asynchronously from the context of a peer\nThis method does not wait for the script to complete before returning\n\nService Name - Script\nService Operation - RUN_PEER_SCRIPT_ASYNC\n\nParam - scriptName The name of the script to be run\nParam - jsonScriptData Data to be sent to the script in json format\nParam - peer Peer the script belongs to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCScriptProxy, nullptr, "RunPeerScriptAsync", nullptr, nullptr, sizeof(BCScriptProxy_eventRunPeerScriptAsync_Parms), Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCScriptProxy_RunScript_Statics
	{
		struct BCScriptProxy_eventRunScript_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString scriptName;
			FString jsonScriptData;
			UBCScriptProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_scriptName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonScriptData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCScriptProxy_RunScript_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventRunScript_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCScriptProxy_RunScript_Statics::NewProp_scriptName = { "scriptName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventRunScript_Parms, scriptName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCScriptProxy_RunScript_Statics::NewProp_jsonScriptData = { "jsonScriptData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventRunScript_Parms, jsonScriptData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCScriptProxy_RunScript_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventRunScript_Parms, ReturnValue), Z_Construct_UClass_UBCScriptProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCScriptProxy_RunScript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_RunScript_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_RunScript_Statics::NewProp_scriptName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_RunScript_Statics::NewProp_jsonScriptData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_RunScript_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCScriptProxy_RunScript_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Cloud Script" },
		{ "Comment", "/**\n\x09* Executes a script on the server.\n\x09*\n\x09* Service Name - Script\n\x09* Service Operation - Run\n\x09*\n\x09* Param - scriptName The name of the script to be run\n\x09* Param - jsonScriptData Data to be sent to the script in json format\n\x09* @see The API documentation site for more details on cloud code\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCScriptProxy.h" },
		{ "ToolTip", "Executes a script on the server.\n\nService Name - Script\nService Operation - Run\n\nParam - scriptName The name of the script to be run\nParam - jsonScriptData Data to be sent to the script in json format\n@see The API documentation site for more details on cloud code" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCScriptProxy_RunScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCScriptProxy, nullptr, "RunScript", nullptr, nullptr, sizeof(BCScriptProxy_eventRunScript_Parms), Z_Construct_UFunction_UBCScriptProxy_RunScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_RunScript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCScriptProxy_RunScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_RunScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCScriptProxy_RunScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCScriptProxy_RunScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC_Statics
	{
		struct BCScriptProxy_eventScheduleRunScriptMillisUTC_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString scriptName;
			FString jsonScriptData;
			int64 startDateInUTC;
			UBCScriptProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_scriptName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonScriptData;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_startDateInUTC;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventScheduleRunScriptMillisUTC_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC_Statics::NewProp_scriptName = { "scriptName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventScheduleRunScriptMillisUTC_Parms, scriptName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC_Statics::NewProp_jsonScriptData = { "jsonScriptData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventScheduleRunScriptMillisUTC_Parms, jsonScriptData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC_Statics::NewProp_startDateInUTC = { "startDateInUTC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventScheduleRunScriptMillisUTC_Parms, startDateInUTC), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventScheduleRunScriptMillisUTC_Parms, ReturnValue), Z_Construct_UClass_UBCScriptProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC_Statics::NewProp_scriptName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC_Statics::NewProp_jsonScriptData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC_Statics::NewProp_startDateInUTC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Cloud Script" },
		{ "Comment", "/**\n\x09* Allows cloud script executions to be scheduled\n\x09*\n\x09* Service Name - Script\n\x09* Service Operation - ScheduleCloudScript\n\x09*\n\x09* Param - scriptName The name of the script to be run\n\x09* Param - jsonScriptData Data to be sent to the script in json format\n\x09* Param - startDateInUTC The start date as a time struct\n\x09* @see The API documentation site for more details on cloud code\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCScriptProxy.h" },
		{ "ToolTip", "Allows cloud script executions to be scheduled\n\nService Name - Script\nService Operation - ScheduleCloudScript\n\nParam - scriptName The name of the script to be run\nParam - jsonScriptData Data to be sent to the script in json format\nParam - startDateInUTC The start date as a time struct\n@see The API documentation site for more details on cloud code" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCScriptProxy, nullptr, "ScheduleRunScriptMillisUTC", nullptr, nullptr, sizeof(BCScriptProxy_eventScheduleRunScriptMillisUTC_Parms), Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes_Statics
	{
		struct BCScriptProxy_eventScheduleRunScriptMinutes_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString scriptName;
			FString jsonScriptData;
			int32 minutesFromNow;
			UBCScriptProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_scriptName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonScriptData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_minutesFromNow;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventScheduleRunScriptMinutes_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes_Statics::NewProp_scriptName = { "scriptName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventScheduleRunScriptMinutes_Parms, scriptName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes_Statics::NewProp_jsonScriptData = { "jsonScriptData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventScheduleRunScriptMinutes_Parms, jsonScriptData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes_Statics::NewProp_minutesFromNow = { "minutesFromNow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventScheduleRunScriptMinutes_Parms, minutesFromNow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCScriptProxy_eventScheduleRunScriptMinutes_Parms, ReturnValue), Z_Construct_UClass_UBCScriptProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes_Statics::NewProp_scriptName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes_Statics::NewProp_jsonScriptData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes_Statics::NewProp_minutesFromNow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Cloud Script" },
		{ "Comment", "/**\n\x09* Allows cloud script executions to be scheduled\n\x09*\n\x09* Service Name - Script\n\x09* Service Operation - ScheduleCloudScript\n\x09*\n\x09* Param - scriptName The name of the script to be run\n\x09* Param - jsonScriptData Data to be sent to the script in json format\n\x09* Param - minutesFromNow Number of minutes from now to run script\n\x09* @see The API documentation site for more details on cloud code\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCScriptProxy.h" },
		{ "ToolTip", "Allows cloud script executions to be scheduled\n\nService Name - Script\nService Operation - ScheduleCloudScript\n\nParam - scriptName The name of the script to be run\nParam - jsonScriptData Data to be sent to the script in json format\nParam - minutesFromNow Number of minutes from now to run script\n@see The API documentation site for more details on cloud code" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCScriptProxy, nullptr, "ScheduleRunScriptMinutes", nullptr, nullptr, sizeof(BCScriptProxy_eventScheduleRunScriptMinutes_Parms), Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCScriptProxy_NoRegister()
	{
		return UBCScriptProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCScriptProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCScriptProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCScriptProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCScriptProxy_CancelScheduledScript, "CancelScheduledScript" }, // 2665725734
		{ &Z_Construct_UFunction_UBCScriptProxy_GetRunningOrQueuedCloudScripts, "GetRunningOrQueuedCloudScripts" }, // 680655654
		{ &Z_Construct_UFunction_UBCScriptProxy_GetScheduledCloudScripts, "GetScheduledCloudScripts" }, // 544008887
		{ &Z_Construct_UFunction_UBCScriptProxy_RunParentScript, "RunParentScript" }, // 3925182163
		{ &Z_Construct_UFunction_UBCScriptProxy_RunPeerScript, "RunPeerScript" }, // 460542089
		{ &Z_Construct_UFunction_UBCScriptProxy_RunPeerScriptAsync, "RunPeerScriptAsync" }, // 2604200237
		{ &Z_Construct_UFunction_UBCScriptProxy_RunScript, "RunScript" }, // 3740166319
		{ &Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMillisUTC, "ScheduleRunScriptMillisUTC" }, // 700566928
		{ &Z_Construct_UFunction_UBCScriptProxy_ScheduleRunScriptMinutes, "ScheduleRunScriptMinutes" }, // 1674941637
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCScriptProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCScriptProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCScriptProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCScriptProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCScriptProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCScriptProxy_Statics::ClassParams = {
		&UBCScriptProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCScriptProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCScriptProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCScriptProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCScriptProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCScriptProxy, 3379727433);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCScriptProxy>()
	{
		return UBCScriptProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCScriptProxy(Z_Construct_UClass_UBCScriptProxy, &UBCScriptProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCScriptProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCScriptProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
