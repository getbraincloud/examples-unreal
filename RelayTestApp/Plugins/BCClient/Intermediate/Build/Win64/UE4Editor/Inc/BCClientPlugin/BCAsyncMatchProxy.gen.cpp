// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCAsyncMatchProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCAsyncMatchProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCAsyncMatchProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCAsyncMatchProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCAsyncMatchProxy::execCompleteMatchWithSummaryData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_ownerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_matchId);
		P_GET_PROPERTY(FStrProperty,Z_Param_pushContent);
		P_GET_PROPERTY(FStrProperty,Z_Param_summary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAsyncMatchProxy**)Z_Param__Result=UBCAsyncMatchProxy::CompleteMatchWithSummaryData(Z_Param_brainCloudWrapper,Z_Param_ownerId,Z_Param_matchId,Z_Param_pushContent,Z_Param_summary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAsyncMatchProxy::execAbandonMatchWithSummaryData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_ownerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_matchId);
		P_GET_PROPERTY(FStrProperty,Z_Param_pushContent);
		P_GET_PROPERTY(FStrProperty,Z_Param_summary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAsyncMatchProxy**)Z_Param__Result=UBCAsyncMatchProxy::AbandonMatchWithSummaryData(Z_Param_brainCloudWrapper,Z_Param_ownerId,Z_Param_matchId,Z_Param_pushContent,Z_Param_summary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAsyncMatchProxy::execDeleteMatch)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_ownerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_matchId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAsyncMatchProxy**)Z_Param__Result=UBCAsyncMatchProxy::DeleteMatch(Z_Param_brainCloudWrapper,Z_Param_ownerId,Z_Param_matchId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAsyncMatchProxy::execAbandonMatch)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_ownerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_matchId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAsyncMatchProxy**)Z_Param__Result=UBCAsyncMatchProxy::AbandonMatch(Z_Param_brainCloudWrapper,Z_Param_ownerId,Z_Param_matchId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAsyncMatchProxy::execFindCompleteMatches)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAsyncMatchProxy**)Z_Param__Result=UBCAsyncMatchProxy::FindCompleteMatches(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAsyncMatchProxy::execFindMatches)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAsyncMatchProxy**)Z_Param__Result=UBCAsyncMatchProxy::FindMatches(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAsyncMatchProxy::execReadMatchHistory)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_ownerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_matchId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAsyncMatchProxy**)Z_Param__Result=UBCAsyncMatchProxy::ReadMatchHistory(Z_Param_brainCloudWrapper,Z_Param_ownerId,Z_Param_matchId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAsyncMatchProxy::execReadMatch)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_ownerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_matchId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAsyncMatchProxy**)Z_Param__Result=UBCAsyncMatchProxy::ReadMatch(Z_Param_brainCloudWrapper,Z_Param_ownerId,Z_Param_matchId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAsyncMatchProxy::execCompleteMatch)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_ownerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_matchId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAsyncMatchProxy**)Z_Param__Result=UBCAsyncMatchProxy::CompleteMatch(Z_Param_brainCloudWrapper,Z_Param_ownerId,Z_Param_matchId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAsyncMatchProxy::execUpdateMatchSummaryData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_ownerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_matchId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonSummary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAsyncMatchProxy**)Z_Param__Result=UBCAsyncMatchProxy::UpdateMatchSummaryData(Z_Param_brainCloudWrapper,Z_Param_ownerId,Z_Param_matchId,Z_Param_version,Z_Param_jsonSummary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAsyncMatchProxy::execSubmitTurn)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_ownerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_matchId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonMatchState);
		P_GET_PROPERTY(FStrProperty,Z_Param_pushNotificationMessage);
		P_GET_PROPERTY(FStrProperty,Z_Param_nextPlayer);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonSummary);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonStatistics);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAsyncMatchProxy**)Z_Param__Result=UBCAsyncMatchProxy::SubmitTurn(Z_Param_brainCloudWrapper,Z_Param_ownerId,Z_Param_matchId,Z_Param_version,Z_Param_jsonMatchState,Z_Param_pushNotificationMessage,Z_Param_nextPlayer,Z_Param_jsonSummary,Z_Param_jsonStatistics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAsyncMatchProxy::execCreateMatchWithInitialTurn)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonOpponentIds);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonMatchState);
		P_GET_PROPERTY(FStrProperty,Z_Param_pushNotificationMessage);
		P_GET_PROPERTY(FStrProperty,Z_Param_nextPlayer);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonSummary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAsyncMatchProxy**)Z_Param__Result=UBCAsyncMatchProxy::CreateMatchWithInitialTurn(Z_Param_brainCloudWrapper,Z_Param_jsonOpponentIds,Z_Param_jsonMatchState,Z_Param_pushNotificationMessage,Z_Param_nextPlayer,Z_Param_jsonSummary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAsyncMatchProxy::execCreateMatch)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonOpponentIds);
		P_GET_PROPERTY(FStrProperty,Z_Param_pushNotificationMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAsyncMatchProxy**)Z_Param__Result=UBCAsyncMatchProxy::CreateMatch(Z_Param_brainCloudWrapper,Z_Param_jsonOpponentIds,Z_Param_pushNotificationMessage);
		P_NATIVE_END;
	}
	void UBCAsyncMatchProxy::StaticRegisterNativesUBCAsyncMatchProxy()
	{
		UClass* Class = UBCAsyncMatchProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbandonMatch", &UBCAsyncMatchProxy::execAbandonMatch },
			{ "AbandonMatchWithSummaryData", &UBCAsyncMatchProxy::execAbandonMatchWithSummaryData },
			{ "CompleteMatch", &UBCAsyncMatchProxy::execCompleteMatch },
			{ "CompleteMatchWithSummaryData", &UBCAsyncMatchProxy::execCompleteMatchWithSummaryData },
			{ "CreateMatch", &UBCAsyncMatchProxy::execCreateMatch },
			{ "CreateMatchWithInitialTurn", &UBCAsyncMatchProxy::execCreateMatchWithInitialTurn },
			{ "DeleteMatch", &UBCAsyncMatchProxy::execDeleteMatch },
			{ "FindCompleteMatches", &UBCAsyncMatchProxy::execFindCompleteMatches },
			{ "FindMatches", &UBCAsyncMatchProxy::execFindMatches },
			{ "ReadMatch", &UBCAsyncMatchProxy::execReadMatch },
			{ "ReadMatchHistory", &UBCAsyncMatchProxy::execReadMatchHistory },
			{ "SubmitTurn", &UBCAsyncMatchProxy::execSubmitTurn },
			{ "UpdateMatchSummaryData", &UBCAsyncMatchProxy::execUpdateMatchSummaryData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatch_Statics
	{
		struct BCAsyncMatchProxy_eventAbandonMatch_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString ownerId;
			FString matchId;
			UBCAsyncMatchProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ownerId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_matchId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatch_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventAbandonMatch_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatch_Statics::NewProp_ownerId = { "ownerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventAbandonMatch_Parms, ownerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatch_Statics::NewProp_matchId = { "matchId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventAbandonMatch_Parms, matchId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventAbandonMatch_Parms, ReturnValue), Z_Construct_UClass_UBCAsyncMatchProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatch_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatch_Statics::NewProp_ownerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatch_Statics::NewProp_matchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatch_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Async Match" },
		{ "Comment", "/**\n    * Marks the given match as abandoned.\n    *\n    * Service Name - AsyncMatch\n    * Service Operation - Abandon\n    *\n    * The JSON returned in the callback is as follows:\n    * {\n    *     \"status\": 200,\n    *     \"data\": {}\n    * }\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAsyncMatchProxy.h" },
		{ "ToolTip", "Marks the given match as abandoned.\n\nService Name - AsyncMatch\nService Operation - Abandon\n\nThe JSON returned in the callback is as follows:\n{\n    \"status\": 200,\n    \"data\": {}\n}" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAsyncMatchProxy, nullptr, "AbandonMatch", nullptr, nullptr, sizeof(BCAsyncMatchProxy_eventAbandonMatch_Parms), Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics
	{
		struct BCAsyncMatchProxy_eventAbandonMatchWithSummaryData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString ownerId;
			FString matchId;
			FString pushContent;
			FString summary;
			UBCAsyncMatchProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ownerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ownerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_matchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_matchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pushContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pushContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_summary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_summary;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventAbandonMatchWithSummaryData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_ownerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_ownerId = { "ownerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventAbandonMatchWithSummaryData_Parms, ownerId), METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_ownerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_ownerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_matchId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_matchId = { "matchId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventAbandonMatchWithSummaryData_Parms, matchId), METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_matchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_matchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_pushContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_pushContent = { "pushContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventAbandonMatchWithSummaryData_Parms, pushContent), METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_pushContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_pushContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_summary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_summary = { "summary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventAbandonMatchWithSummaryData_Parms, summary), METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_summary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_summary_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventAbandonMatchWithSummaryData_Parms, ReturnValue), Z_Construct_UClass_UBCAsyncMatchProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_ownerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_matchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_pushContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_summary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Async Match" },
		{ "Comment", "/**\n    * Marks the given match as abandoned. This call can send a notification message.\n    *\n    * Service Name - AsyncMatch\n    * Service Operation - ABANDON_MATCH_WITH_SUMMARY_DATA\n    *\n    * @param ownerId   Match owner identifier\n    * @param matchId   Match identifier\n    * @param pushContent\n    * @param summary\n    * @param callback  Optional instance of IServerCallback to call when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAsyncMatchProxy.h" },
		{ "ToolTip", "Marks the given match as abandoned. This call can send a notification message.\n\nService Name - AsyncMatch\nService Operation - ABANDON_MATCH_WITH_SUMMARY_DATA\n\n@param ownerId   Match owner identifier\n@param matchId   Match identifier\n@param pushContent\n@param summary\n@param callback  Optional instance of IServerCallback to call when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAsyncMatchProxy, nullptr, "AbandonMatchWithSummaryData", nullptr, nullptr, sizeof(BCAsyncMatchProxy_eventAbandonMatchWithSummaryData_Parms), Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatch_Statics
	{
		struct BCAsyncMatchProxy_eventCompleteMatch_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString ownerId;
			FString matchId;
			UBCAsyncMatchProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ownerId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_matchId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatch_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCompleteMatch_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatch_Statics::NewProp_ownerId = { "ownerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCompleteMatch_Parms, ownerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatch_Statics::NewProp_matchId = { "matchId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCompleteMatch_Parms, matchId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCompleteMatch_Parms, ReturnValue), Z_Construct_UClass_UBCAsyncMatchProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatch_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatch_Statics::NewProp_ownerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatch_Statics::NewProp_matchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatch_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Async Match" },
		{ "Comment", "/**\n    * Marks the given match as complete.\n    *\n    * Service Name - AsyncMatch\n    * Service Operation - Complete\n    *\n    * Param - ownerId Match owner identifier\n    * Param - matchId Match identifier\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAsyncMatchProxy.h" },
		{ "ToolTip", "Marks the given match as complete.\n\nService Name - AsyncMatch\nService Operation - Complete\n\nParam - ownerId Match owner identifier\nParam - matchId Match identifier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAsyncMatchProxy, nullptr, "CompleteMatch", nullptr, nullptr, sizeof(BCAsyncMatchProxy_eventCompleteMatch_Parms), Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics
	{
		struct BCAsyncMatchProxy_eventCompleteMatchWithSummaryData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString ownerId;
			FString matchId;
			FString pushContent;
			FString summary;
			UBCAsyncMatchProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ownerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ownerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_matchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_matchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pushContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pushContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_summary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_summary;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCompleteMatchWithSummaryData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_ownerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_ownerId = { "ownerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCompleteMatchWithSummaryData_Parms, ownerId), METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_ownerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_ownerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_matchId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_matchId = { "matchId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCompleteMatchWithSummaryData_Parms, matchId), METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_matchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_matchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_pushContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_pushContent = { "pushContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCompleteMatchWithSummaryData_Parms, pushContent), METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_pushContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_pushContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_summary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_summary = { "summary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCompleteMatchWithSummaryData_Parms, summary), METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_summary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_summary_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCompleteMatchWithSummaryData_Parms, ReturnValue), Z_Construct_UClass_UBCAsyncMatchProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_ownerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_matchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_pushContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_summary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Async Match" },
		{ "Comment", "/**\n    * Marks the given match as complete. This call can send a notification message.\n    * \n    * Service Name - AsyncMatch\n    * Service Operation - COMPLETE_MATCH_WITH_SUMMARY_DATA\n    *\n    * @param ownerId   Match owner identifier\n    * @param matchId   Match identifier\n    * @param pushContent\n    * @param summary\n    * @param callback  Optional instance of IServerCallback to call when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAsyncMatchProxy.h" },
		{ "ToolTip", "Marks the given match as complete. This call can send a notification message.\n\nService Name - AsyncMatch\nService Operation - COMPLETE_MATCH_WITH_SUMMARY_DATA\n\n@param ownerId   Match owner identifier\n@param matchId   Match identifier\n@param pushContent\n@param summary\n@param callback  Optional instance of IServerCallback to call when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAsyncMatchProxy, nullptr, "CompleteMatchWithSummaryData", nullptr, nullptr, sizeof(BCAsyncMatchProxy_eventCompleteMatchWithSummaryData_Parms), Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatch_Statics
	{
		struct BCAsyncMatchProxy_eventCreateMatch_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString jsonOpponentIds;
			FString pushNotificationMessage;
			UBCAsyncMatchProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonOpponentIds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pushNotificationMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatch_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCreateMatch_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatch_Statics::NewProp_jsonOpponentIds = { "jsonOpponentIds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCreateMatch_Parms, jsonOpponentIds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatch_Statics::NewProp_pushNotificationMessage = { "pushNotificationMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCreateMatch_Parms, pushNotificationMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCreateMatch_Parms, ReturnValue), Z_Construct_UClass_UBCAsyncMatchProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatch_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatch_Statics::NewProp_jsonOpponentIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatch_Statics::NewProp_pushNotificationMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatch_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Async Match" },
		{ "Comment", "/**\n    * Creates an instance of an asynchronous match.\n    *\n    * Service Name - AsyncMatch\n    * Service Operation - Create\n    *\n    * Param - jsonOpponentIds  JSON string identifying the opponent platform and id for this match.\n    *\n    * Platforms are identified as:\n    * BC - a brainCloud profile id\n    * FB - a Facebook id\n    *\n    * An example of this string would be:\n    * [\n    *     {\n    *         \"platform\": \"BC\",\n    *         \"id\": \"some-braincloud-profile\"\n    *     },\n    *     {\n    *         \"platform\": \"FB\",\n    *         \"id\": \"some-facebook-id\"\n    *     }\n    * ]\n    *\n    * Param - pushNotificationMessage Optional push notification message to send to the other party.\n    *  Refer to the Push Notification functions for the syntax required.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAsyncMatchProxy.h" },
		{ "ToolTip", "Creates an instance of an asynchronous match.\n\nService Name - AsyncMatch\nService Operation - Create\n\nParam - jsonOpponentIds  JSON string identifying the opponent platform and id for this match.\n\nPlatforms are identified as:\nBC - a brainCloud profile id\nFB - a Facebook id\n\nAn example of this string would be:\n[\n    {\n        \"platform\": \"BC\",\n        \"id\": \"some-braincloud-profile\"\n    },\n    {\n        \"platform\": \"FB\",\n        \"id\": \"some-facebook-id\"\n    }\n]\n\nParam - pushNotificationMessage Optional push notification message to send to the other party.\n Refer to the Push Notification functions for the syntax required." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAsyncMatchProxy, nullptr, "CreateMatch", nullptr, nullptr, sizeof(BCAsyncMatchProxy_eventCreateMatch_Parms), Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics
	{
		struct BCAsyncMatchProxy_eventCreateMatchWithInitialTurn_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString jsonOpponentIds;
			FString jsonMatchState;
			FString pushNotificationMessage;
			FString nextPlayer;
			FString jsonSummary;
			UBCAsyncMatchProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonOpponentIds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonMatchState;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pushNotificationMessage;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nextPlayer;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonSummary;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCreateMatchWithInitialTurn_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::NewProp_jsonOpponentIds = { "jsonOpponentIds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCreateMatchWithInitialTurn_Parms, jsonOpponentIds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::NewProp_jsonMatchState = { "jsonMatchState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCreateMatchWithInitialTurn_Parms, jsonMatchState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::NewProp_pushNotificationMessage = { "pushNotificationMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCreateMatchWithInitialTurn_Parms, pushNotificationMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::NewProp_nextPlayer = { "nextPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCreateMatchWithInitialTurn_Parms, nextPlayer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::NewProp_jsonSummary = { "jsonSummary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCreateMatchWithInitialTurn_Parms, jsonSummary), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventCreateMatchWithInitialTurn_Parms, ReturnValue), Z_Construct_UClass_UBCAsyncMatchProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::NewProp_jsonOpponentIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::NewProp_jsonMatchState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::NewProp_pushNotificationMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::NewProp_nextPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::NewProp_jsonSummary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Async Match" },
		{ "Comment", "/**\n    * Creates an instance of an asynchronous match with an initial turn.\n    *\n    * Service Name - AsyncMatch\n    * Service Operation - Create\n    *\n    * Param - jsonOpponentIds  JSON string identifying the opponent platform and id for this match.\n    *\n    * Platforms are identified as:\n    * BC - a brainCloud profile id\n    * FB - a Facebook id\n    *\n    * An exmaple of this string would be:\n    * [\n    *     {\n    *         \"platform\": \"BC\",\n    *         \"id\": \"some-braincloud-profile\"\n    *     },\n    *     {\n    *         \"platform\": \"FB\",\n    *         \"id\": \"some-facebook-id\"\n    *     }\n    * ]\n    *\n    * Param - jsonMatchState    JSON string blob provided by the caller\n    * Param - pushNotificationMessage Optional push notification message to send to the other party.\n    * Refer to the Push Notification functions for the syntax required.\n    * Param - nextPlayer Optionally, force the next player player to be a specific player\n    * Param - jsonSummary Optional JSON string defining what the other player will see as a summary of the game when listing their games\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAsyncMatchProxy.h" },
		{ "ToolTip", "Creates an instance of an asynchronous match with an initial turn.\n\nService Name - AsyncMatch\nService Operation - Create\n\nParam - jsonOpponentIds  JSON string identifying the opponent platform and id for this match.\n\nPlatforms are identified as:\nBC - a brainCloud profile id\nFB - a Facebook id\n\nAn exmaple of this string would be:\n[\n    {\n        \"platform\": \"BC\",\n        \"id\": \"some-braincloud-profile\"\n    },\n    {\n        \"platform\": \"FB\",\n        \"id\": \"some-facebook-id\"\n    }\n]\n\nParam - jsonMatchState    JSON string blob provided by the caller\nParam - pushNotificationMessage Optional push notification message to send to the other party.\nRefer to the Push Notification functions for the syntax required.\nParam - nextPlayer Optionally, force the next player player to be a specific player\nParam - jsonSummary Optional JSON string defining what the other player will see as a summary of the game when listing their games" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAsyncMatchProxy, nullptr, "CreateMatchWithInitialTurn", nullptr, nullptr, sizeof(BCAsyncMatchProxy_eventCreateMatchWithInitialTurn_Parms), Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAsyncMatchProxy_DeleteMatch_Statics
	{
		struct BCAsyncMatchProxy_eventDeleteMatch_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString ownerId;
			FString matchId;
			UBCAsyncMatchProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ownerId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_matchId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_DeleteMatch_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventDeleteMatch_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_DeleteMatch_Statics::NewProp_ownerId = { "ownerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventDeleteMatch_Parms, ownerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_DeleteMatch_Statics::NewProp_matchId = { "matchId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventDeleteMatch_Parms, matchId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_DeleteMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventDeleteMatch_Parms, ReturnValue), Z_Construct_UClass_UBCAsyncMatchProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAsyncMatchProxy_DeleteMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_DeleteMatch_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_DeleteMatch_Statics::NewProp_ownerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_DeleteMatch_Statics::NewProp_matchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_DeleteMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_DeleteMatch_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Async Match" },
		{ "Comment", "/**\n    * Removes the match and match history from the server. DEBUG ONLY, in production it is recommended\n    *   the user leave it as completed.\n    *\n    * Service Name - AsyncMatch\n    * Service Operation - Delete\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAsyncMatchProxy.h" },
		{ "ToolTip", "Removes the match and match history from the server. DEBUG ONLY, in production it is recommended\n  the user leave it as completed.\n\nService Name - AsyncMatch\nService Operation - Delete" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAsyncMatchProxy_DeleteMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAsyncMatchProxy, nullptr, "DeleteMatch", nullptr, nullptr, sizeof(BCAsyncMatchProxy_eventDeleteMatch_Parms), Z_Construct_UFunction_UBCAsyncMatchProxy_DeleteMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_DeleteMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_DeleteMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_DeleteMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAsyncMatchProxy_DeleteMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAsyncMatchProxy_DeleteMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAsyncMatchProxy_FindCompleteMatches_Statics
	{
		struct BCAsyncMatchProxy_eventFindCompleteMatches_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCAsyncMatchProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_FindCompleteMatches_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventFindCompleteMatches_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_FindCompleteMatches_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventFindCompleteMatches_Parms, ReturnValue), Z_Construct_UClass_UBCAsyncMatchProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAsyncMatchProxy_FindCompleteMatches_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_FindCompleteMatches_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_FindCompleteMatches_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_FindCompleteMatches_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Async Match" },
		{ "Comment", "/**\n    * Returns all matches that are in a COMPLETE state for which the player is involved.\n    *\n    * Service Name - AsyncMatch\n    * Service Operation - FindMatchesCompleted\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAsyncMatchProxy.h" },
		{ "ToolTip", "Returns all matches that are in a COMPLETE state for which the player is involved.\n\nService Name - AsyncMatch\nService Operation - FindMatchesCompleted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAsyncMatchProxy_FindCompleteMatches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAsyncMatchProxy, nullptr, "FindCompleteMatches", nullptr, nullptr, sizeof(BCAsyncMatchProxy_eventFindCompleteMatches_Parms), Z_Construct_UFunction_UBCAsyncMatchProxy_FindCompleteMatches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_FindCompleteMatches_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_FindCompleteMatches_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_FindCompleteMatches_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAsyncMatchProxy_FindCompleteMatches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAsyncMatchProxy_FindCompleteMatches_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAsyncMatchProxy_FindMatches_Statics
	{
		struct BCAsyncMatchProxy_eventFindMatches_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCAsyncMatchProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_FindMatches_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventFindMatches_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_FindMatches_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventFindMatches_Parms, ReturnValue), Z_Construct_UClass_UBCAsyncMatchProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAsyncMatchProxy_FindMatches_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_FindMatches_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_FindMatches_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_FindMatches_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Async Match" },
		{ "Comment", "/**\n    * Returns all matches that are NOT in a COMPLETE state for which the player is involved.\n    *\n    * Service Name - AsyncMatch\n    * Service Operation - FindMatches\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAsyncMatchProxy.h" },
		{ "ToolTip", "Returns all matches that are NOT in a COMPLETE state for which the player is involved.\n\nService Name - AsyncMatch\nService Operation - FindMatches" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAsyncMatchProxy_FindMatches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAsyncMatchProxy, nullptr, "FindMatches", nullptr, nullptr, sizeof(BCAsyncMatchProxy_eventFindMatches_Parms), Z_Construct_UFunction_UBCAsyncMatchProxy_FindMatches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_FindMatches_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_FindMatches_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_FindMatches_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAsyncMatchProxy_FindMatches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAsyncMatchProxy_FindMatches_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatch_Statics
	{
		struct BCAsyncMatchProxy_eventReadMatch_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString ownerId;
			FString matchId;
			UBCAsyncMatchProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ownerId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_matchId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatch_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventReadMatch_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatch_Statics::NewProp_ownerId = { "ownerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventReadMatch_Parms, ownerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatch_Statics::NewProp_matchId = { "matchId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventReadMatch_Parms, matchId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventReadMatch_Parms, ReturnValue), Z_Construct_UClass_UBCAsyncMatchProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatch_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatch_Statics::NewProp_ownerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatch_Statics::NewProp_matchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatch_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Async Match" },
		{ "Comment", "/**\n    * Returns the current state of the given match.\n    *\n    * Service Name - AsyncMatch\n    * Service Operation - ReadMatch\n    *\n    * Param - ownerId   Match owner identifier\n    * Param - matchId   Match identifier\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAsyncMatchProxy.h" },
		{ "ToolTip", "Returns the current state of the given match.\n\nService Name - AsyncMatch\nService Operation - ReadMatch\n\nParam - ownerId   Match owner identifier\nParam - matchId   Match identifier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAsyncMatchProxy, nullptr, "ReadMatch", nullptr, nullptr, sizeof(BCAsyncMatchProxy_eventReadMatch_Parms), Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatchHistory_Statics
	{
		struct BCAsyncMatchProxy_eventReadMatchHistory_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString ownerId;
			FString matchId;
			UBCAsyncMatchProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ownerId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_matchId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatchHistory_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventReadMatchHistory_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatchHistory_Statics::NewProp_ownerId = { "ownerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventReadMatchHistory_Parms, ownerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatchHistory_Statics::NewProp_matchId = { "matchId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventReadMatchHistory_Parms, matchId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatchHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventReadMatchHistory_Parms, ReturnValue), Z_Construct_UClass_UBCAsyncMatchProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatchHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatchHistory_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatchHistory_Statics::NewProp_ownerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatchHistory_Statics::NewProp_matchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatchHistory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatchHistory_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Async Match" },
		{ "Comment", "/**\n    * Returns the match history of the given match.\n    *\n    * Service Name - AsyncMatch\n    * Service Operation - ReadMatchHistory\n    *\n    * Param - ownerId   Match owner identifier\n    * Param - matchId   Match identifier\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAsyncMatchProxy.h" },
		{ "ToolTip", "Returns the match history of the given match.\n\nService Name - AsyncMatch\nService Operation - ReadMatchHistory\n\nParam - ownerId   Match owner identifier\nParam - matchId   Match identifier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatchHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAsyncMatchProxy, nullptr, "ReadMatchHistory", nullptr, nullptr, sizeof(BCAsyncMatchProxy_eventReadMatchHistory_Parms), Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatchHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatchHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatchHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatchHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatchHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatchHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics
	{
		struct BCAsyncMatchProxy_eventSubmitTurn_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString ownerId;
			FString matchId;
			int32 version;
			FString jsonMatchState;
			FString pushNotificationMessage;
			FString nextPlayer;
			FString jsonSummary;
			FString jsonStatistics;
			UBCAsyncMatchProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ownerId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_matchId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonMatchState;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pushNotificationMessage;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nextPlayer;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonSummary;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonStatistics;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventSubmitTurn_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::NewProp_ownerId = { "ownerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventSubmitTurn_Parms, ownerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::NewProp_matchId = { "matchId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventSubmitTurn_Parms, matchId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventSubmitTurn_Parms, version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::NewProp_jsonMatchState = { "jsonMatchState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventSubmitTurn_Parms, jsonMatchState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::NewProp_pushNotificationMessage = { "pushNotificationMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventSubmitTurn_Parms, pushNotificationMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::NewProp_nextPlayer = { "nextPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventSubmitTurn_Parms, nextPlayer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::NewProp_jsonSummary = { "jsonSummary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventSubmitTurn_Parms, jsonSummary), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::NewProp_jsonStatistics = { "jsonStatistics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventSubmitTurn_Parms, jsonStatistics), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventSubmitTurn_Parms, ReturnValue), Z_Construct_UClass_UBCAsyncMatchProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::NewProp_ownerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::NewProp_matchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::NewProp_jsonMatchState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::NewProp_pushNotificationMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::NewProp_nextPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::NewProp_jsonSummary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::NewProp_jsonStatistics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Async Match" },
		{ "Comment", "/**\n    * Submits a turn for the given match.\n    *\n    * Service Name - AsyncMatch\n    * Service Operation - SubmitTurn\n    *\n    * Param - ownerId Match owner identfier\n    * Param - matchId Match identifier\n    * Param - version Game state version to ensure turns are submitted once and in order\n    * Param - jsonMatchState JSON string provided by the caller\n    * Param - pushNotificationMessage Optional push notification message to send to the other party.\n    *  Refer to the Push Notification functions for the syntax required.\n    * Param - nextPlayer Optionally, force the next player player to be a specific player\n    * Param - jsonSummary Optional JSON string that other players will see as a summary of the game when listing their games\n    * Param - jsonStatistics Optional JSON string blob provided by the caller\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAsyncMatchProxy.h" },
		{ "ToolTip", "Submits a turn for the given match.\n\nService Name - AsyncMatch\nService Operation - SubmitTurn\n\nParam - ownerId Match owner identfier\nParam - matchId Match identifier\nParam - version Game state version to ensure turns are submitted once and in order\nParam - jsonMatchState JSON string provided by the caller\nParam - pushNotificationMessage Optional push notification message to send to the other party.\n Refer to the Push Notification functions for the syntax required.\nParam - nextPlayer Optionally, force the next player player to be a specific player\nParam - jsonSummary Optional JSON string that other players will see as a summary of the game when listing their games\nParam - jsonStatistics Optional JSON string blob provided by the caller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAsyncMatchProxy, nullptr, "SubmitTurn", nullptr, nullptr, sizeof(BCAsyncMatchProxy_eventSubmitTurn_Parms), Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics
	{
		struct BCAsyncMatchProxy_eventUpdateMatchSummaryData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString ownerId;
			FString matchId;
			int32 version;
			FString jsonSummary;
			UBCAsyncMatchProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ownerId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_matchId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonSummary;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventUpdateMatchSummaryData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics::NewProp_ownerId = { "ownerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventUpdateMatchSummaryData_Parms, ownerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics::NewProp_matchId = { "matchId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventUpdateMatchSummaryData_Parms, matchId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventUpdateMatchSummaryData_Parms, version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics::NewProp_jsonSummary = { "jsonSummary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventUpdateMatchSummaryData_Parms, jsonSummary), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAsyncMatchProxy_eventUpdateMatchSummaryData_Parms, ReturnValue), Z_Construct_UClass_UBCAsyncMatchProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics::NewProp_ownerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics::NewProp_matchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics::NewProp_jsonSummary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Async Match" },
		{ "Comment", "/**\n    * Allows the current player (only) to update Summary data without having to submit a whole turn.\n    *\n    * Service Name - AsyncMatch\n    * Service Operation - UpdateMatchSummary\n    *\n    * Param - ownerId Match owner identfier\n    * Param - matchId Match identifier\n    * Param - version Game state version to ensure turns are submitted once and in order\n    * Param - jsonSummary JSON string that other players will see as a summary of the game when listing their games\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAsyncMatchProxy.h" },
		{ "ToolTip", "Allows the current player (only) to update Summary data without having to submit a whole turn.\n\nService Name - AsyncMatch\nService Operation - UpdateMatchSummary\n\nParam - ownerId Match owner identfier\nParam - matchId Match identifier\nParam - version Game state version to ensure turns are submitted once and in order\nParam - jsonSummary JSON string that other players will see as a summary of the game when listing their games" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAsyncMatchProxy, nullptr, "UpdateMatchSummaryData", nullptr, nullptr, sizeof(BCAsyncMatchProxy_eventUpdateMatchSummaryData_Parms), Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCAsyncMatchProxy_NoRegister()
	{
		return UBCAsyncMatchProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCAsyncMatchProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCAsyncMatchProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCAsyncMatchProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatch, "AbandonMatch" }, // 3867261200
		{ &Z_Construct_UFunction_UBCAsyncMatchProxy_AbandonMatchWithSummaryData, "AbandonMatchWithSummaryData" }, // 3890134450
		{ &Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatch, "CompleteMatch" }, // 320728109
		{ &Z_Construct_UFunction_UBCAsyncMatchProxy_CompleteMatchWithSummaryData, "CompleteMatchWithSummaryData" }, // 1109409195
		{ &Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatch, "CreateMatch" }, // 2660598519
		{ &Z_Construct_UFunction_UBCAsyncMatchProxy_CreateMatchWithInitialTurn, "CreateMatchWithInitialTurn" }, // 1621570774
		{ &Z_Construct_UFunction_UBCAsyncMatchProxy_DeleteMatch, "DeleteMatch" }, // 4236262547
		{ &Z_Construct_UFunction_UBCAsyncMatchProxy_FindCompleteMatches, "FindCompleteMatches" }, // 4040642938
		{ &Z_Construct_UFunction_UBCAsyncMatchProxy_FindMatches, "FindMatches" }, // 1060518214
		{ &Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatch, "ReadMatch" }, // 1563959923
		{ &Z_Construct_UFunction_UBCAsyncMatchProxy_ReadMatchHistory, "ReadMatchHistory" }, // 3806334602
		{ &Z_Construct_UFunction_UBCAsyncMatchProxy_SubmitTurn, "SubmitTurn" }, // 2121648218
		{ &Z_Construct_UFunction_UBCAsyncMatchProxy_UpdateMatchSummaryData, "UpdateMatchSummaryData" }, // 2763159222
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCAsyncMatchProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCAsyncMatchProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAsyncMatchProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCAsyncMatchProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCAsyncMatchProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCAsyncMatchProxy_Statics::ClassParams = {
		&UBCAsyncMatchProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCAsyncMatchProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCAsyncMatchProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCAsyncMatchProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCAsyncMatchProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCAsyncMatchProxy, 2205323838);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCAsyncMatchProxy>()
	{
		return UBCAsyncMatchProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCAsyncMatchProxy(Z_Construct_UClass_UBCAsyncMatchProxy, &UBCAsyncMatchProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCAsyncMatchProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCAsyncMatchProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
