// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCEventProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCEventProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCEventProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCEventProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCEventProxy::execGetEvents)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloud);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEventProxy**)Z_Param__Result=UBCEventProxy::GetEvents(Z_Param_brainCloud);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCEventProxy::execDeleteIncomingEvent)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_evId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEventProxy**)Z_Param__Result=UBCEventProxy::DeleteIncomingEvent(Z_Param_brainCloudWrapper,Z_Param_evId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCEventProxy::execUpdateIncomingEventData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_evId);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEventProxy**)Z_Param__Result=UBCEventProxy::UpdateIncomingEventData(Z_Param_brainCloudWrapper,Z_Param_evId,Z_Param_jsonEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCEventProxy::execSendEvent)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_toPlayerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_eventType);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEventProxy**)Z_Param__Result=UBCEventProxy::SendEvent(Z_Param_brainCloudWrapper,Z_Param_toPlayerId,Z_Param_eventType,Z_Param_jsonEventData);
		P_NATIVE_END;
	}
	void UBCEventProxy::StaticRegisterNativesUBCEventProxy()
	{
		UClass* Class = UBCEventProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteIncomingEvent", &UBCEventProxy::execDeleteIncomingEvent },
			{ "GetEvents", &UBCEventProxy::execGetEvents },
			{ "SendEvent", &UBCEventProxy::execSendEvent },
			{ "UpdateIncomingEventData", &UBCEventProxy::execUpdateIncomingEventData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCEventProxy_DeleteIncomingEvent_Statics
	{
		struct BCEventProxy_eventDeleteIncomingEvent_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString evId;
			UBCEventProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_evId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_evId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEventProxy_DeleteIncomingEvent_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEventProxy_eventDeleteIncomingEvent_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEventProxy_DeleteIncomingEvent_Statics::NewProp_evId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEventProxy_DeleteIncomingEvent_Statics::NewProp_evId = { "evId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEventProxy_eventDeleteIncomingEvent_Parms, evId), METADATA_PARAMS(Z_Construct_UFunction_UBCEventProxy_DeleteIncomingEvent_Statics::NewProp_evId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEventProxy_DeleteIncomingEvent_Statics::NewProp_evId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEventProxy_DeleteIncomingEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEventProxy_eventDeleteIncomingEvent_Parms, ReturnValue), Z_Construct_UClass_UBCEventProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEventProxy_DeleteIncomingEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEventProxy_DeleteIncomingEvent_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEventProxy_DeleteIncomingEvent_Statics::NewProp_evId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEventProxy_DeleteIncomingEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEventProxy_DeleteIncomingEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Event" },
		{ "Comment", "/**\n    * Delete an event out of the player's incoming mailbox.\n    *\n    * Service Name - Event\n    * Service Operation - DeleteIncoming\n    *\n    * Param - evId The event id\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEventProxy.h" },
		{ "ToolTip", "Delete an event out of the player's incoming mailbox.\n\nService Name - Event\nService Operation - DeleteIncoming\n\nParam - evId The event id" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEventProxy_DeleteIncomingEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEventProxy, nullptr, "DeleteIncomingEvent", nullptr, nullptr, sizeof(BCEventProxy_eventDeleteIncomingEvent_Parms), Z_Construct_UFunction_UBCEventProxy_DeleteIncomingEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEventProxy_DeleteIncomingEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEventProxy_DeleteIncomingEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEventProxy_DeleteIncomingEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEventProxy_DeleteIncomingEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEventProxy_DeleteIncomingEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCEventProxy_GetEvents_Statics
	{
		struct BCEventProxy_eventGetEvents_Parms
		{
			UBrainCloudWrapper* brainCloud;
			UBCEventProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloud;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEventProxy_GetEvents_Statics::NewProp_brainCloud = { "brainCloud", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEventProxy_eventGetEvents_Parms, brainCloud), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEventProxy_GetEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEventProxy_eventGetEvents_Parms, ReturnValue), Z_Construct_UClass_UBCEventProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEventProxy_GetEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEventProxy_GetEvents_Statics::NewProp_brainCloud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEventProxy_GetEvents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEventProxy_GetEvents_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Event" },
		{ "Comment", "/**\n    * Get the events currently queued for the player.\n    *\n    * Service Name - Event\n    * Service Operation - GetEvents\n    *\n    * Param - includeIncomingEvents Get events sent to the player\n    * Param - includeSentEvents Get events sent from the player\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEventProxy.h" },
		{ "ToolTip", "Get the events currently queued for the player.\n\nService Name - Event\nService Operation - GetEvents\n\nParam - includeIncomingEvents Get events sent to the player\nParam - includeSentEvents Get events sent from the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEventProxy_GetEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEventProxy, nullptr, "GetEvents", nullptr, nullptr, sizeof(BCEventProxy_eventGetEvents_Parms), Z_Construct_UFunction_UBCEventProxy_GetEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEventProxy_GetEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEventProxy_GetEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEventProxy_GetEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEventProxy_GetEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEventProxy_GetEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics
	{
		struct BCEventProxy_eventSendEvent_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString toPlayerId;
			FString eventType;
			FString jsonEventData;
			UBCEventProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_toPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_toPlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_eventType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonEventData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEventProxy_eventSendEvent_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::NewProp_toPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::NewProp_toPlayerId = { "toPlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEventProxy_eventSendEvent_Parms, toPlayerId), METADATA_PARAMS(Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::NewProp_toPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::NewProp_toPlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::NewProp_eventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEventProxy_eventSendEvent_Parms, eventType), METADATA_PARAMS(Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::NewProp_eventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::NewProp_eventType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::NewProp_jsonEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::NewProp_jsonEventData = { "jsonEventData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEventProxy_eventSendEvent_Parms, jsonEventData), METADATA_PARAMS(Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::NewProp_jsonEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::NewProp_jsonEventData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEventProxy_eventSendEvent_Parms, ReturnValue), Z_Construct_UClass_UBCEventProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::NewProp_toPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::NewProp_eventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::NewProp_jsonEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Event" },
		{ "Comment", "/**\n    * Sends an event to the designated player id with the attached json data.\n    * Any events that have been sent to a player will show up in their\n    * incoming event mailbox. If the in_recordLocally flag is set to true,\n    * a copy of this event (with the exact same event id) will be stored\n    * in the sending player's \"sent\" event mailbox.\n    *\n    * Note that the list of sent and incoming events for a player is returned\n    * in the \"ReadUserState\" call (in the BrainCloudPlayer module).\n    *\n    * Service Name - Event\n    * Service Operation - Send\n    *\n    * Param - toPlayerId The id of the player who is being sent the event\n    * Param - eventType The user-defined type of the event.\n    * Param - jsonEventData The user-defined data for this event encoded in JSON.\n    * user's sent events mailbox.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEventProxy.h" },
		{ "ToolTip", "Sends an event to the designated player id with the attached json data.\nAny events that have been sent to a player will show up in their\nincoming event mailbox. If the in_recordLocally flag is set to true,\na copy of this event (with the exact same event id) will be stored\nin the sending player's \"sent\" event mailbox.\n\nNote that the list of sent and incoming events for a player is returned\nin the \"ReadUserState\" call (in the BrainCloudPlayer module).\n\nService Name - Event\nService Operation - Send\n\nParam - toPlayerId The id of the player who is being sent the event\nParam - eventType The user-defined type of the event.\nParam - jsonEventData The user-defined data for this event encoded in JSON.\nuser's sent events mailbox." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEventProxy, nullptr, "SendEvent", nullptr, nullptr, sizeof(BCEventProxy_eventSendEvent_Parms), Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEventProxy_SendEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEventProxy_SendEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics
	{
		struct BCEventProxy_eventUpdateIncomingEventData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString evId;
			FString jsonEventData;
			UBCEventProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_evId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_evId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonEventData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEventProxy_eventUpdateIncomingEventData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::NewProp_evId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::NewProp_evId = { "evId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEventProxy_eventUpdateIncomingEventData_Parms, evId), METADATA_PARAMS(Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::NewProp_evId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::NewProp_evId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::NewProp_jsonEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::NewProp_jsonEventData = { "jsonEventData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEventProxy_eventUpdateIncomingEventData_Parms, jsonEventData), METADATA_PARAMS(Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::NewProp_jsonEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::NewProp_jsonEventData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEventProxy_eventUpdateIncomingEventData_Parms, ReturnValue), Z_Construct_UClass_UBCEventProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::NewProp_evId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::NewProp_jsonEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Event" },
		{ "Comment", "/**\n    * Updates an event in the player's incoming event mailbox.\n    *\n    * Service Name - Event\n    * Service Operation - UpdateEventData\n    *\n    * Param - evId The event id\n    * Param - jsonEventData The user-defined data for this event encoded in JSON.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEventProxy.h" },
		{ "ToolTip", "Updates an event in the player's incoming event mailbox.\n\nService Name - Event\nService Operation - UpdateEventData\n\nParam - evId The event id\nParam - jsonEventData The user-defined data for this event encoded in JSON." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEventProxy, nullptr, "UpdateIncomingEventData", nullptr, nullptr, sizeof(BCEventProxy_eventUpdateIncomingEventData_Parms), Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCEventProxy_NoRegister()
	{
		return UBCEventProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCEventProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCEventProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCEventProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCEventProxy_DeleteIncomingEvent, "DeleteIncomingEvent" }, // 811726746
		{ &Z_Construct_UFunction_UBCEventProxy_GetEvents, "GetEvents" }, // 2483345046
		{ &Z_Construct_UFunction_UBCEventProxy_SendEvent, "SendEvent" }, // 2138554246
		{ &Z_Construct_UFunction_UBCEventProxy_UpdateIncomingEventData, "UpdateIncomingEventData" }, // 3694841455
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCEventProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCEventProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEventProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCEventProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCEventProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCEventProxy_Statics::ClassParams = {
		&UBCEventProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCEventProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCEventProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCEventProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCEventProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCEventProxy, 1208342597);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCEventProxy>()
	{
		return UBCEventProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCEventProxy(Z_Construct_UClass_UBCEventProxy, &UBCEventProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCEventProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCEventProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
