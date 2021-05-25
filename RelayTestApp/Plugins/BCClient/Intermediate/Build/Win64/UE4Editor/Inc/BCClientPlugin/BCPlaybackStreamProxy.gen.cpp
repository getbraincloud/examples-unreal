// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCPlaybackStreamProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCPlaybackStreamProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCPlaybackStreamProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCPlaybackStreamProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCPlaybackStreamProxy::execGetRecentStreamsForTargetPlayer)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_targetPlayerId);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxNumStreams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlaybackStreamProxy**)Z_Param__Result=UBCPlaybackStreamProxy::GetRecentStreamsForTargetPlayer(Z_Param_brainCloudWrapper,Z_Param_targetPlayerId,Z_Param_maxNumStreams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlaybackStreamProxy::execGetRecentStreamsForInitiatingPlayer)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_initiatingPlayerId);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxNumStreams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlaybackStreamProxy**)Z_Param__Result=UBCPlaybackStreamProxy::GetRecentStreamsForInitiatingPlayer(Z_Param_brainCloudWrapper,Z_Param_initiatingPlayerId,Z_Param_maxNumStreams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlaybackStreamProxy::execAddEvent)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_playbackStreamId);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonEventData);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonSummary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlaybackStreamProxy**)Z_Param__Result=UBCPlaybackStreamProxy::AddEvent(Z_Param_brainCloudWrapper,Z_Param_playbackStreamId,Z_Param_jsonEventData,Z_Param_jsonSummary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlaybackStreamProxy::execDeleteStream)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_playbackStreamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlaybackStreamProxy**)Z_Param__Result=UBCPlaybackStreamProxy::DeleteStream(Z_Param_brainCloudWrapper,Z_Param_playbackStreamId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlaybackStreamProxy::execEndStream)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_playbackStreamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlaybackStreamProxy**)Z_Param__Result=UBCPlaybackStreamProxy::EndStream(Z_Param_brainCloudWrapper,Z_Param_playbackStreamId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlaybackStreamProxy::execReadStream)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_playbackStreamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlaybackStreamProxy**)Z_Param__Result=UBCPlaybackStreamProxy::ReadStream(Z_Param_brainCloudWrapper,Z_Param_playbackStreamId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlaybackStreamProxy::execStartStream)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_targetPlayerId);
		P_GET_UBOOL(Z_Param_includeSharedData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlaybackStreamProxy**)Z_Param__Result=UBCPlaybackStreamProxy::StartStream(Z_Param_brainCloudWrapper,Z_Param_targetPlayerId,Z_Param_includeSharedData);
		P_NATIVE_END;
	}
	void UBCPlaybackStreamProxy::StaticRegisterNativesUBCPlaybackStreamProxy()
	{
		UClass* Class = UBCPlaybackStreamProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEvent", &UBCPlaybackStreamProxy::execAddEvent },
			{ "DeleteStream", &UBCPlaybackStreamProxy::execDeleteStream },
			{ "EndStream", &UBCPlaybackStreamProxy::execEndStream },
			{ "GetRecentStreamsForInitiatingPlayer", &UBCPlaybackStreamProxy::execGetRecentStreamsForInitiatingPlayer },
			{ "GetRecentStreamsForTargetPlayer", &UBCPlaybackStreamProxy::execGetRecentStreamsForTargetPlayer },
			{ "ReadStream", &UBCPlaybackStreamProxy::execReadStream },
			{ "StartStream", &UBCPlaybackStreamProxy::execStartStream },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics
	{
		struct BCPlaybackStreamProxy_eventAddEvent_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString playbackStreamId;
			FString jsonEventData;
			FString jsonSummary;
			UBCPlaybackStreamProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playbackStreamId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playbackStreamId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonSummary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonSummary;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventAddEvent_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::NewProp_playbackStreamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::NewProp_playbackStreamId = { "playbackStreamId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventAddEvent_Parms, playbackStreamId), METADATA_PARAMS(Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::NewProp_playbackStreamId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::NewProp_playbackStreamId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::NewProp_jsonEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::NewProp_jsonEventData = { "jsonEventData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventAddEvent_Parms, jsonEventData), METADATA_PARAMS(Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::NewProp_jsonEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::NewProp_jsonEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::NewProp_jsonSummary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::NewProp_jsonSummary = { "jsonSummary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventAddEvent_Parms, jsonSummary), METADATA_PARAMS(Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::NewProp_jsonSummary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::NewProp_jsonSummary_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventAddEvent_Parms, ReturnValue), Z_Construct_UClass_UBCPlaybackStreamProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::NewProp_playbackStreamId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::NewProp_jsonEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::NewProp_jsonSummary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Playback Stream" },
		{ "Comment", "/**\n    * Adds a stream event\n    *\n    * Service Name - PlaybackStream\n    * Service Operation - AddEvent\n    *\n    * Param - playbackStreamId Identifies the stream to read\n    * Param - jsonEventData Describes the event\n    * Param - jsonSummary Current summary data as of this event\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlaybackStreamProxy.h" },
		{ "ToolTip", "Adds a stream event\n\nService Name - PlaybackStream\nService Operation - AddEvent\n\nParam - playbackStreamId Identifies the stream to read\nParam - jsonEventData Describes the event\nParam - jsonSummary Current summary data as of this event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlaybackStreamProxy, nullptr, "AddEvent", nullptr, nullptr, sizeof(BCPlaybackStreamProxy_eventAddEvent_Parms), Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlaybackStreamProxy_DeleteStream_Statics
	{
		struct BCPlaybackStreamProxy_eventDeleteStream_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString playbackStreamId;
			UBCPlaybackStreamProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playbackStreamId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playbackStreamId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_DeleteStream_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventDeleteStream_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlaybackStreamProxy_DeleteStream_Statics::NewProp_playbackStreamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_DeleteStream_Statics::NewProp_playbackStreamId = { "playbackStreamId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventDeleteStream_Parms, playbackStreamId), METADATA_PARAMS(Z_Construct_UFunction_UBCPlaybackStreamProxy_DeleteStream_Statics::NewProp_playbackStreamId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_DeleteStream_Statics::NewProp_playbackStreamId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_DeleteStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventDeleteStream_Parms, ReturnValue), Z_Construct_UClass_UBCPlaybackStreamProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlaybackStreamProxy_DeleteStream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_DeleteStream_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_DeleteStream_Statics::NewProp_playbackStreamId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_DeleteStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlaybackStreamProxy_DeleteStream_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Playback Stream" },
		{ "Comment", "/**\n    * Deletes a stream\n    *\n    * Service Name - PlaybackStream\n    * Service Operation - DeleteStream\n    *\n    * Param - playbackStreamId Identifies the stream to delete\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlaybackStreamProxy.h" },
		{ "ToolTip", "Deletes a stream\n\nService Name - PlaybackStream\nService Operation - DeleteStream\n\nParam - playbackStreamId Identifies the stream to delete" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlaybackStreamProxy_DeleteStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlaybackStreamProxy, nullptr, "DeleteStream", nullptr, nullptr, sizeof(BCPlaybackStreamProxy_eventDeleteStream_Parms), Z_Construct_UFunction_UBCPlaybackStreamProxy_DeleteStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_DeleteStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlaybackStreamProxy_DeleteStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_DeleteStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlaybackStreamProxy_DeleteStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlaybackStreamProxy_DeleteStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlaybackStreamProxy_EndStream_Statics
	{
		struct BCPlaybackStreamProxy_eventEndStream_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString playbackStreamId;
			UBCPlaybackStreamProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playbackStreamId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playbackStreamId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_EndStream_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventEndStream_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlaybackStreamProxy_EndStream_Statics::NewProp_playbackStreamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_EndStream_Statics::NewProp_playbackStreamId = { "playbackStreamId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventEndStream_Parms, playbackStreamId), METADATA_PARAMS(Z_Construct_UFunction_UBCPlaybackStreamProxy_EndStream_Statics::NewProp_playbackStreamId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_EndStream_Statics::NewProp_playbackStreamId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_EndStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventEndStream_Parms, ReturnValue), Z_Construct_UClass_UBCPlaybackStreamProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlaybackStreamProxy_EndStream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_EndStream_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_EndStream_Statics::NewProp_playbackStreamId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_EndStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlaybackStreamProxy_EndStream_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Playback Stream" },
		{ "Comment", "/**\n    * Ends a stream\n    *\n    * Service Name - PlaybackStream\n    * Service Operation - EndStream\n    *\n    * Param - playbackStreamId Identifies the stream to read\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlaybackStreamProxy.h" },
		{ "ToolTip", "Ends a stream\n\nService Name - PlaybackStream\nService Operation - EndStream\n\nParam - playbackStreamId Identifies the stream to read" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlaybackStreamProxy_EndStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlaybackStreamProxy, nullptr, "EndStream", nullptr, nullptr, sizeof(BCPlaybackStreamProxy_eventEndStream_Parms), Z_Construct_UFunction_UBCPlaybackStreamProxy_EndStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_EndStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlaybackStreamProxy_EndStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_EndStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlaybackStreamProxy_EndStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlaybackStreamProxy_EndStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer_Statics
	{
		struct BCPlaybackStreamProxy_eventGetRecentStreamsForInitiatingPlayer_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString initiatingPlayerId;
			int32 maxNumStreams;
			UBCPlaybackStreamProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initiatingPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_initiatingPlayerId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxNumStreams;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventGetRecentStreamsForInitiatingPlayer_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer_Statics::NewProp_initiatingPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer_Statics::NewProp_initiatingPlayerId = { "initiatingPlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventGetRecentStreamsForInitiatingPlayer_Parms, initiatingPlayerId), METADATA_PARAMS(Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer_Statics::NewProp_initiatingPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer_Statics::NewProp_initiatingPlayerId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer_Statics::NewProp_maxNumStreams = { "maxNumStreams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventGetRecentStreamsForInitiatingPlayer_Parms, maxNumStreams), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventGetRecentStreamsForInitiatingPlayer_Parms, ReturnValue), Z_Construct_UClass_UBCPlaybackStreamProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer_Statics::NewProp_initiatingPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer_Statics::NewProp_maxNumStreams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Playback Stream" },
		{ "Comment", "/**\n\x09* Gets recent stream summaries for initiating player\n\x09*\n\x09* Service Name - PlaybackStream\n\x09* Service Operation - GetRecentStreamsForInitiatingPlayer\n\x09*\n\x09* Param - initiatingPlayerId The player that started the stream\n\x09* Param - maxNumStreams The max number of streams to query\n\x09* Param - callback The callback.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlaybackStreamProxy.h" },
		{ "ToolTip", "Gets recent stream summaries for initiating player\n\nService Name - PlaybackStream\nService Operation - GetRecentStreamsForInitiatingPlayer\n\nParam - initiatingPlayerId The player that started the stream\nParam - maxNumStreams The max number of streams to query\nParam - callback The callback." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlaybackStreamProxy, nullptr, "GetRecentStreamsForInitiatingPlayer", nullptr, nullptr, sizeof(BCPlaybackStreamProxy_eventGetRecentStreamsForInitiatingPlayer_Parms), Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer_Statics
	{
		struct BCPlaybackStreamProxy_eventGetRecentStreamsForTargetPlayer_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString targetPlayerId;
			int32 maxNumStreams;
			UBCPlaybackStreamProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_targetPlayerId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxNumStreams;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventGetRecentStreamsForTargetPlayer_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer_Statics::NewProp_targetPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer_Statics::NewProp_targetPlayerId = { "targetPlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventGetRecentStreamsForTargetPlayer_Parms, targetPlayerId), METADATA_PARAMS(Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer_Statics::NewProp_targetPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer_Statics::NewProp_targetPlayerId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer_Statics::NewProp_maxNumStreams = { "maxNumStreams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventGetRecentStreamsForTargetPlayer_Parms, maxNumStreams), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventGetRecentStreamsForTargetPlayer_Parms, ReturnValue), Z_Construct_UClass_UBCPlaybackStreamProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer_Statics::NewProp_targetPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer_Statics::NewProp_maxNumStreams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Playback Stream" },
		{ "Comment", "/**\n\x09* Gets recent stream summaries for target player\n\x09*\n\x09* Service Name - PlaybackStream\n\x09* Service Operation - GetRecentStreamsForTargetPlayer\n\x09*\n\x09* Param - targetPlayerId The player that was target of the stream\n\x09* Param - maxNumStreams The max number of streams to query\n\x09* Param - callback The callback.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlaybackStreamProxy.h" },
		{ "ToolTip", "Gets recent stream summaries for target player\n\nService Name - PlaybackStream\nService Operation - GetRecentStreamsForTargetPlayer\n\nParam - targetPlayerId The player that was target of the stream\nParam - maxNumStreams The max number of streams to query\nParam - callback The callback." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlaybackStreamProxy, nullptr, "GetRecentStreamsForTargetPlayer", nullptr, nullptr, sizeof(BCPlaybackStreamProxy_eventGetRecentStreamsForTargetPlayer_Parms), Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlaybackStreamProxy_ReadStream_Statics
	{
		struct BCPlaybackStreamProxy_eventReadStream_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString playbackStreamId;
			UBCPlaybackStreamProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playbackStreamId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playbackStreamId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_ReadStream_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventReadStream_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlaybackStreamProxy_ReadStream_Statics::NewProp_playbackStreamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_ReadStream_Statics::NewProp_playbackStreamId = { "playbackStreamId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventReadStream_Parms, playbackStreamId), METADATA_PARAMS(Z_Construct_UFunction_UBCPlaybackStreamProxy_ReadStream_Statics::NewProp_playbackStreamId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_ReadStream_Statics::NewProp_playbackStreamId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_ReadStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventReadStream_Parms, ReturnValue), Z_Construct_UClass_UBCPlaybackStreamProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlaybackStreamProxy_ReadStream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_ReadStream_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_ReadStream_Statics::NewProp_playbackStreamId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_ReadStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlaybackStreamProxy_ReadStream_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Playback Stream" },
		{ "Comment", "/**\n    * Reads a stream\n    *\n    * Service Name - PlaybackStream\n    * Service Operation - ReadStream\n    *\n    * Param - playbackStreamId Identifies the stream to read\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlaybackStreamProxy.h" },
		{ "ToolTip", "Reads a stream\n\nService Name - PlaybackStream\nService Operation - ReadStream\n\nParam - playbackStreamId Identifies the stream to read" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlaybackStreamProxy_ReadStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlaybackStreamProxy, nullptr, "ReadStream", nullptr, nullptr, sizeof(BCPlaybackStreamProxy_eventReadStream_Parms), Z_Construct_UFunction_UBCPlaybackStreamProxy_ReadStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_ReadStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlaybackStreamProxy_ReadStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_ReadStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlaybackStreamProxy_ReadStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlaybackStreamProxy_ReadStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics
	{
		struct BCPlaybackStreamProxy_eventStartStream_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString targetPlayerId;
			bool includeSharedData;
			UBCPlaybackStreamProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_targetPlayerId;
		static void NewProp_includeSharedData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeSharedData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventStartStream_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::NewProp_targetPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::NewProp_targetPlayerId = { "targetPlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventStartStream_Parms, targetPlayerId), METADATA_PARAMS(Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::NewProp_targetPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::NewProp_targetPlayerId_MetaData)) };
	void Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::NewProp_includeSharedData_SetBit(void* Obj)
	{
		((BCPlaybackStreamProxy_eventStartStream_Parms*)Obj)->includeSharedData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::NewProp_includeSharedData = { "includeSharedData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCPlaybackStreamProxy_eventStartStream_Parms), &Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::NewProp_includeSharedData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlaybackStreamProxy_eventStartStream_Parms, ReturnValue), Z_Construct_UClass_UBCPlaybackStreamProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::NewProp_targetPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::NewProp_includeSharedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Playback Stream" },
		{ "Comment", "/**\n    * Starts a stream\n    *\n    * Service Name - PlaybackStream\n    * Service Operation - StartStream\n    *\n    * Param - targetPlayerId The player to start a stream with\n    * Param - includeSharedData Whether to include shared data in the stream\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlaybackStreamProxy.h" },
		{ "ToolTip", "Starts a stream\n\nService Name - PlaybackStream\nService Operation - StartStream\n\nParam - targetPlayerId The player to start a stream with\nParam - includeSharedData Whether to include shared data in the stream" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlaybackStreamProxy, nullptr, "StartStream", nullptr, nullptr, sizeof(BCPlaybackStreamProxy_eventStartStream_Parms), Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCPlaybackStreamProxy_NoRegister()
	{
		return UBCPlaybackStreamProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCPlaybackStreamProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCPlaybackStreamProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCPlaybackStreamProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCPlaybackStreamProxy_AddEvent, "AddEvent" }, // 2920510095
		{ &Z_Construct_UFunction_UBCPlaybackStreamProxy_DeleteStream, "DeleteStream" }, // 3182828449
		{ &Z_Construct_UFunction_UBCPlaybackStreamProxy_EndStream, "EndStream" }, // 706368149
		{ &Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForInitiatingPlayer, "GetRecentStreamsForInitiatingPlayer" }, // 1790154043
		{ &Z_Construct_UFunction_UBCPlaybackStreamProxy_GetRecentStreamsForTargetPlayer, "GetRecentStreamsForTargetPlayer" }, // 424903328
		{ &Z_Construct_UFunction_UBCPlaybackStreamProxy_ReadStream, "ReadStream" }, // 1881712737
		{ &Z_Construct_UFunction_UBCPlaybackStreamProxy_StartStream, "StartStream" }, // 4070770258
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCPlaybackStreamProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCPlaybackStreamProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlaybackStreamProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCPlaybackStreamProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCPlaybackStreamProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCPlaybackStreamProxy_Statics::ClassParams = {
		&UBCPlaybackStreamProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCPlaybackStreamProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCPlaybackStreamProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCPlaybackStreamProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCPlaybackStreamProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCPlaybackStreamProxy, 2915197548);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCPlaybackStreamProxy>()
	{
		return UBCPlaybackStreamProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCPlaybackStreamProxy(Z_Construct_UClass_UBCPlaybackStreamProxy, &UBCPlaybackStreamProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCPlaybackStreamProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCPlaybackStreamProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
