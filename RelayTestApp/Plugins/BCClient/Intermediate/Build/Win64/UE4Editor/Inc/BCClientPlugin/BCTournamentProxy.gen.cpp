// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCTournamentProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCTournamentProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCTournamentProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCTournamentProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_ESortOrder();
// End Cross Module References
	DEFINE_FUNCTION(UBCTournamentProxy::execViewReward)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloud);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FIntProperty,Z_Param_versionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCTournamentProxy**)Z_Param__Result=UBCTournamentProxy::ViewReward(Z_Param_brainCloud,Z_Param_leaderboardId,Z_Param_versionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCTournamentProxy::execViewCurrentReward)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCTournamentProxy**)Z_Param__Result=UBCTournamentProxy::ViewCurrentReward(Z_Param_brainCloudWrapper,Z_Param_leaderboardId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCTournamentProxy::execPostTournamentScoreWithResultsUTC)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FIntProperty,Z_Param_score);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_GET_PROPERTY(FInt64Property,Z_Param_roundStartedTime);
		P_GET_ENUM(ESortOrder,Z_Param_sort);
		P_GET_PROPERTY(FIntProperty,Z_Param_beforeCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_afterCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_initialScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCTournamentProxy**)Z_Param__Result=UBCTournamentProxy::PostTournamentScoreWithResultsUTC(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_score,Z_Param_jsonData,Z_Param_roundStartedTime,ESortOrder(Z_Param_sort),Z_Param_beforeCount,Z_Param_afterCount,Z_Param_initialScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCTournamentProxy::execPostTournamentScoreUTC)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FIntProperty,Z_Param_score);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_GET_PROPERTY(FInt64Property,Z_Param_roundStartTimeUTC);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCTournamentProxy**)Z_Param__Result=UBCTournamentProxy::PostTournamentScoreUTC(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_score,Z_Param_jsonData,Z_Param_roundStartTimeUTC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCTournamentProxy::execPostTournamentScoreWithResults)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FIntProperty,Z_Param_score);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_GET_STRUCT(FDateTime,Z_Param_roundStartedTime);
		P_GET_ENUM(ESortOrder,Z_Param_sort);
		P_GET_PROPERTY(FIntProperty,Z_Param_beforeCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_afterCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_initialScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCTournamentProxy**)Z_Param__Result=UBCTournamentProxy::PostTournamentScoreWithResults(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_score,Z_Param_jsonData,Z_Param_roundStartedTime,ESortOrder(Z_Param_sort),Z_Param_beforeCount,Z_Param_afterCount,Z_Param_initialScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCTournamentProxy::execPostTournamentScore)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FIntProperty,Z_Param_score);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_GET_STRUCT(FDateTime,Z_Param_roundStartedTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCTournamentProxy**)Z_Param__Result=UBCTournamentProxy::PostTournamentScore(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_score,Z_Param_jsonData,Z_Param_roundStartedTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCTournamentProxy::execLeaveTournament)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCTournamentProxy**)Z_Param__Result=UBCTournamentProxy::LeaveTournament(Z_Param_brainCloudWrapper,Z_Param_leaderboardId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCTournamentProxy::execJoinTournament)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FStrProperty,Z_Param_tournamentCode);
		P_GET_PROPERTY(FIntProperty,Z_Param_initialScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCTournamentProxy**)Z_Param__Result=UBCTournamentProxy::JoinTournament(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_tournamentCode,Z_Param_initialScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCTournamentProxy::execLeaveDivisionInstance)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCTournamentProxy**)Z_Param__Result=UBCTournamentProxy::LeaveDivisionInstance(Z_Param_brainCloudWrapper,Z_Param_leaderboardId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCTournamentProxy::execJoinDivision)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_divSetId);
		P_GET_PROPERTY(FStrProperty,Z_Param_tournamentCode);
		P_GET_PROPERTY(FIntProperty,Z_Param_initialScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCTournamentProxy**)Z_Param__Result=UBCTournamentProxy::JoinDivision(Z_Param_brainCloudWrapper,Z_Param_divSetId,Z_Param_tournamentCode,Z_Param_initialScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCTournamentProxy::execGetMyDivisions)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCTournamentProxy**)Z_Param__Result=UBCTournamentProxy::GetMyDivisions(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCTournamentProxy::execGetDivisionInfo)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_divSetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCTournamentProxy**)Z_Param__Result=UBCTournamentProxy::GetDivisionInfo(Z_Param_brainCloudWrapper,Z_Param_divSetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCTournamentProxy::execGetTournamentStatus)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FIntProperty,Z_Param_versionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCTournamentProxy**)Z_Param__Result=UBCTournamentProxy::GetTournamentStatus(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_versionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCTournamentProxy::execClaimTournamentReward)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FIntProperty,Z_Param_versionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCTournamentProxy**)Z_Param__Result=UBCTournamentProxy::ClaimTournamentReward(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_versionId);
		P_NATIVE_END;
	}
	void UBCTournamentProxy::StaticRegisterNativesUBCTournamentProxy()
	{
		UClass* Class = UBCTournamentProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClaimTournamentReward", &UBCTournamentProxy::execClaimTournamentReward },
			{ "GetDivisionInfo", &UBCTournamentProxy::execGetDivisionInfo },
			{ "GetMyDivisions", &UBCTournamentProxy::execGetMyDivisions },
			{ "GetTournamentStatus", &UBCTournamentProxy::execGetTournamentStatus },
			{ "JoinDivision", &UBCTournamentProxy::execJoinDivision },
			{ "JoinTournament", &UBCTournamentProxy::execJoinTournament },
			{ "LeaveDivisionInstance", &UBCTournamentProxy::execLeaveDivisionInstance },
			{ "LeaveTournament", &UBCTournamentProxy::execLeaveTournament },
			{ "PostTournamentScore", &UBCTournamentProxy::execPostTournamentScore },
			{ "PostTournamentScoreUTC", &UBCTournamentProxy::execPostTournamentScoreUTC },
			{ "PostTournamentScoreWithResults", &UBCTournamentProxy::execPostTournamentScoreWithResults },
			{ "PostTournamentScoreWithResultsUTC", &UBCTournamentProxy::execPostTournamentScoreWithResultsUTC },
			{ "ViewCurrentReward", &UBCTournamentProxy::execViewCurrentReward },
			{ "ViewReward", &UBCTournamentProxy::execViewReward },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward_Statics
	{
		struct BCTournamentProxy_eventClaimTournamentReward_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			int32 versionId;
			UBCTournamentProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_versionId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventClaimTournamentReward_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventClaimTournamentReward_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward_Statics::NewProp_leaderboardId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward_Statics::NewProp_versionId = { "versionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventClaimTournamentReward_Parms, versionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventClaimTournamentReward_Parms, ReturnValue), Z_Construct_UClass_UBCTournamentProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward_Statics::NewProp_versionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Tournament" },
		{ "Comment", "/**\n\x09* Processes any outstanding rewards for the given player\n\x09*\n\x09* Service Name - tournament\n\x09* Service Operation - CLAIM_TOURNAMENT_REWARD\n\x09*\n\x09* Param - leaderboardId The leaderboard for the tournament\n\x09* Param - versionId Version of the tournament. Use -1 for the latest version.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTournamentProxy.h" },
		{ "ToolTip", "Processes any outstanding rewards for the given player\n\nService Name - tournament\nService Operation - CLAIM_TOURNAMENT_REWARD\n\nParam - leaderboardId The leaderboard for the tournament\nParam - versionId Version of the tournament. Use -1 for the latest version." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCTournamentProxy, nullptr, "ClaimTournamentReward", nullptr, nullptr, sizeof(BCTournamentProxy_eventClaimTournamentReward_Parms), Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCTournamentProxy_GetDivisionInfo_Statics
	{
		struct BCTournamentProxy_eventGetDivisionInfo_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString divSetId;
			UBCTournamentProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_divSetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_divSetId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_GetDivisionInfo_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventGetDivisionInfo_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_GetDivisionInfo_Statics::NewProp_divSetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCTournamentProxy_GetDivisionInfo_Statics::NewProp_divSetId = { "divSetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventGetDivisionInfo_Parms, divSetId), METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_GetDivisionInfo_Statics::NewProp_divSetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_GetDivisionInfo_Statics::NewProp_divSetId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_GetDivisionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventGetDivisionInfo_Parms, ReturnValue), Z_Construct_UClass_UBCTournamentProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCTournamentProxy_GetDivisionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_GetDivisionInfo_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_GetDivisionInfo_Statics::NewProp_divSetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_GetDivisionInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_GetDivisionInfo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Tournament" },
		{ "Comment", "/**\n\x09* Get the status of a division\n\x09*\n\x09* Service Name - tournament\n\x09* Service Operation - GET_DIVISION_INFO\n\x09*\n\x09* @param divSetId The id for the division\n\x09* @param callback The method to be invoked when the server response is received\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTournamentProxy.h" },
		{ "ToolTip", "Get the status of a division\n\nService Name - tournament\nService Operation - GET_DIVISION_INFO\n\n@param divSetId The id for the division\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCTournamentProxy_GetDivisionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCTournamentProxy, nullptr, "GetDivisionInfo", nullptr, nullptr, sizeof(BCTournamentProxy_eventGetDivisionInfo_Parms), Z_Construct_UFunction_UBCTournamentProxy_GetDivisionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_GetDivisionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_GetDivisionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_GetDivisionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCTournamentProxy_GetDivisionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCTournamentProxy_GetDivisionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCTournamentProxy_GetMyDivisions_Statics
	{
		struct BCTournamentProxy_eventGetMyDivisions_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCTournamentProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_GetMyDivisions_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventGetMyDivisions_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_GetMyDivisions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventGetMyDivisions_Parms, ReturnValue), Z_Construct_UClass_UBCTournamentProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCTournamentProxy_GetMyDivisions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_GetMyDivisions_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_GetMyDivisions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_GetMyDivisions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Tournament" },
		{ "Comment", "/**\n\x09* Returns list of player's recently active divisions\n\x09*\n\x09* Service Name - tournament\n\x09* Service Operation - GET_MY_DIVISIONS\n\x09*\n\x09* @param callback The method to be invoked when the server response is received\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTournamentProxy.h" },
		{ "ToolTip", "Returns list of player's recently active divisions\n\nService Name - tournament\nService Operation - GET_MY_DIVISIONS\n\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCTournamentProxy_GetMyDivisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCTournamentProxy, nullptr, "GetMyDivisions", nullptr, nullptr, sizeof(BCTournamentProxy_eventGetMyDivisions_Parms), Z_Construct_UFunction_UBCTournamentProxy_GetMyDivisions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_GetMyDivisions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_GetMyDivisions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_GetMyDivisions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCTournamentProxy_GetMyDivisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCTournamentProxy_GetMyDivisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus_Statics
	{
		struct BCTournamentProxy_eventGetTournamentStatus_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			int32 versionId;
			UBCTournamentProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_versionId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventGetTournamentStatus_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventGetTournamentStatus_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus_Statics::NewProp_leaderboardId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus_Statics::NewProp_versionId = { "versionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventGetTournamentStatus_Parms, versionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventGetTournamentStatus_Parms, ReturnValue), Z_Construct_UClass_UBCTournamentProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus_Statics::NewProp_versionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Tournament" },
		{ "Comment", "/**\n\x09* Get tournament status associated with a leaderboard\n\x09*\n\x09* Service Name - tournament\n\x09* Service Operation - GET_TOURNAMENT_STATUS\n\x09*\n\x09* Param - leaderboardId The leaderboard for the tournament\n\x09* Param - versionId Version of the tournament. Use -1 for the latest version.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTournamentProxy.h" },
		{ "ToolTip", "Get tournament status associated with a leaderboard\n\nService Name - tournament\nService Operation - GET_TOURNAMENT_STATUS\n\nParam - leaderboardId The leaderboard for the tournament\nParam - versionId Version of the tournament. Use -1 for the latest version." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCTournamentProxy, nullptr, "GetTournamentStatus", nullptr, nullptr, sizeof(BCTournamentProxy_eventGetTournamentStatus_Parms), Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics
	{
		struct BCTournamentProxy_eventJoinDivision_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString divSetId;
			FString tournamentCode;
			int32 initialScore;
			UBCTournamentProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_divSetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_divSetId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tournamentCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tournamentCode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_initialScore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventJoinDivision_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::NewProp_divSetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::NewProp_divSetId = { "divSetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventJoinDivision_Parms, divSetId), METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::NewProp_divSetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::NewProp_divSetId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::NewProp_tournamentCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::NewProp_tournamentCode = { "tournamentCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventJoinDivision_Parms, tournamentCode), METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::NewProp_tournamentCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::NewProp_tournamentCode_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::NewProp_initialScore = { "initialScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventJoinDivision_Parms, initialScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventJoinDivision_Parms, ReturnValue), Z_Construct_UClass_UBCTournamentProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::NewProp_divSetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::NewProp_tournamentCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::NewProp_initialScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Tournament" },
		{ "Comment", "/**\n\x09* Join the specified division.\n\x09* If joining requires a fee, it is possible to fail at joining the division\n\x09*\n\x09* Service Name - tournament\n\x09* Service Operation - JOIN_DIVISION\n\x09*\n\x09* @param divSetId The id for the division\n\x09* @param tournamentCode Tournament to join\n\x09* @param initialScore The initial score for players first joining a tournament\n\x09*\x09\x09\x09\x09\x09\x09 Usually 0, unless leaderboard is LOW_VALUE\n\x09* @param callback The method to be invoked when the server response is received\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTournamentProxy.h" },
		{ "ToolTip", "Join the specified division.\nIf joining requires a fee, it is possible to fail at joining the division\n\nService Name - tournament\nService Operation - JOIN_DIVISION\n\n@param divSetId The id for the division\n@param tournamentCode Tournament to join\n@param initialScore The initial score for players first joining a tournament\n                                               Usually 0, unless leaderboard is LOW_VALUE\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCTournamentProxy, nullptr, "JoinDivision", nullptr, nullptr, sizeof(BCTournamentProxy_eventJoinDivision_Parms), Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCTournamentProxy_JoinDivision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCTournamentProxy_JoinDivision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics
	{
		struct BCTournamentProxy_eventJoinTournament_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			FString tournamentCode;
			int32 initialScore;
			UBCTournamentProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tournamentCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tournamentCode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_initialScore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventJoinTournament_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventJoinTournament_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::NewProp_leaderboardId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::NewProp_tournamentCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::NewProp_tournamentCode = { "tournamentCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventJoinTournament_Parms, tournamentCode), METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::NewProp_tournamentCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::NewProp_tournamentCode_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::NewProp_initialScore = { "initialScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventJoinTournament_Parms, initialScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventJoinTournament_Parms, ReturnValue), Z_Construct_UClass_UBCTournamentProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::NewProp_tournamentCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::NewProp_initialScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Tournament" },
		{ "Comment", "/**\n\x09* Join the specified tournament.\n\x09* Any entry fees will be automatically collected.\n\x09*\n\x09* Service Name - tournament\n\x09* Service Operation - JOIN_TOURNAMENT\n\x09*\n\x09* Param - leaderboardId The leaderboard for the tournament\n\x09* Param - tournamentCode Tournament to join\n\x09* Param - initialScore Initial score for the user\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTournamentProxy.h" },
		{ "ToolTip", "Join the specified tournament.\nAny entry fees will be automatically collected.\n\nService Name - tournament\nService Operation - JOIN_TOURNAMENT\n\nParam - leaderboardId The leaderboard for the tournament\nParam - tournamentCode Tournament to join\nParam - initialScore Initial score for the user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCTournamentProxy, nullptr, "JoinTournament", nullptr, nullptr, sizeof(BCTournamentProxy_eventJoinTournament_Parms), Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCTournamentProxy_JoinTournament()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCTournamentProxy_JoinTournament_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCTournamentProxy_LeaveDivisionInstance_Statics
	{
		struct BCTournamentProxy_eventLeaveDivisionInstance_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			UBCTournamentProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_LeaveDivisionInstance_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventLeaveDivisionInstance_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_LeaveDivisionInstance_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCTournamentProxy_LeaveDivisionInstance_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventLeaveDivisionInstance_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_LeaveDivisionInstance_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_LeaveDivisionInstance_Statics::NewProp_leaderboardId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_LeaveDivisionInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventLeaveDivisionInstance_Parms, ReturnValue), Z_Construct_UClass_UBCTournamentProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCTournamentProxy_LeaveDivisionInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_LeaveDivisionInstance_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_LeaveDivisionInstance_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_LeaveDivisionInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_LeaveDivisionInstance_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Tournament" },
		{ "Comment", "/**\n\x09* Removes player from division instance\n\x09* Also removes division instance from player's division list\n\x09*\n\x09* Service Name - tournament\n\x09* Service Operation - LEAVE_DIVISION_INSTANCE\n\x09*\n\x09* @param leaderboardId The leaderboard for the tournament\n\x09* @param callback The method to be invoked when the server response is received\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTournamentProxy.h" },
		{ "ToolTip", "Removes player from division instance\nAlso removes division instance from player's division list\n\nService Name - tournament\nService Operation - LEAVE_DIVISION_INSTANCE\n\n@param leaderboardId The leaderboard for the tournament\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCTournamentProxy_LeaveDivisionInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCTournamentProxy, nullptr, "LeaveDivisionInstance", nullptr, nullptr, sizeof(BCTournamentProxy_eventLeaveDivisionInstance_Parms), Z_Construct_UFunction_UBCTournamentProxy_LeaveDivisionInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_LeaveDivisionInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_LeaveDivisionInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_LeaveDivisionInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCTournamentProxy_LeaveDivisionInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCTournamentProxy_LeaveDivisionInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCTournamentProxy_LeaveTournament_Statics
	{
		struct BCTournamentProxy_eventLeaveTournament_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			UBCTournamentProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_LeaveTournament_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventLeaveTournament_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_LeaveTournament_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCTournamentProxy_LeaveTournament_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventLeaveTournament_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_LeaveTournament_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_LeaveTournament_Statics::NewProp_leaderboardId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_LeaveTournament_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventLeaveTournament_Parms, ReturnValue), Z_Construct_UClass_UBCTournamentProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCTournamentProxy_LeaveTournament_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_LeaveTournament_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_LeaveTournament_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_LeaveTournament_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_LeaveTournament_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Tournament" },
		{ "Comment", "/**\n\x09* Removes player's score from tournament leaderboard\n\x09*\n\x09* Service Name - tournament\n\x09* Service Operation - LEAVE_TOURNAMENT\n\x09*\n\x09* Param - leaderboardId The leaderboard for the tournament\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTournamentProxy.h" },
		{ "ToolTip", "Removes player's score from tournament leaderboard\n\nService Name - tournament\nService Operation - LEAVE_TOURNAMENT\n\nParam - leaderboardId The leaderboard for the tournament" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCTournamentProxy_LeaveTournament_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCTournamentProxy, nullptr, "LeaveTournament", nullptr, nullptr, sizeof(BCTournamentProxy_eventLeaveTournament_Parms), Z_Construct_UFunction_UBCTournamentProxy_LeaveTournament_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_LeaveTournament_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_LeaveTournament_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_LeaveTournament_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCTournamentProxy_LeaveTournament()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCTournamentProxy_LeaveTournament_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics
	{
		struct BCTournamentProxy_eventPostTournamentScore_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			int32 score;
			FString jsonData;
			FDateTime roundStartedTime;
			UBCTournamentProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roundStartedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_roundStartedTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScore_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScore_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_leaderboardId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScore_Parms, score), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_jsonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScore_Parms, jsonData), METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_jsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_jsonData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_roundStartedTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_roundStartedTime = { "roundStartedTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScore_Parms, roundStartedTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_roundStartedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_roundStartedTime_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScore_Parms, ReturnValue), Z_Construct_UClass_UBCTournamentProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_roundStartedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Tournament" },
		{ "Comment", "/**\n\x09* @deprecated will be removed March 2021, Use postTournamentScoreUTC instead\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTournamentProxy.h" },
		{ "ToolTip", "@deprecated will be removed March 2021, Use postTournamentScoreUTC instead" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCTournamentProxy, nullptr, "PostTournamentScore", nullptr, nullptr, sizeof(BCTournamentProxy_eventPostTournamentScore_Parms), Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics
	{
		struct BCTournamentProxy_eventPostTournamentScoreUTC_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			int32 score;
			FString jsonData;
			int64 roundStartTimeUTC;
			UBCTournamentProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_roundStartTimeUTC;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreUTC_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreUTC_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::NewProp_leaderboardId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreUTC_Parms, score), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::NewProp_jsonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreUTC_Parms, jsonData), METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::NewProp_jsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::NewProp_jsonData_MetaData)) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::NewProp_roundStartTimeUTC = { "roundStartTimeUTC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreUTC_Parms, roundStartTimeUTC), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreUTC_Parms, ReturnValue), Z_Construct_UClass_UBCTournamentProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::NewProp_roundStartTimeUTC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Tournament" },
		{ "Comment", "/**\n\x09* Post the users score to the leaderboard\n\x09*\n\x09* Service Name - tournament\n\x09* Service Operation - POST_TOURNAMENT_SCORE\n\x09*\n\x09* Param - leaderboardId The leaderboard for the tournament\n\x09* Param - score The score to post\n\x09* Param - jsonData Optional data attached to the leaderboard entry\n\x09* Param - roundStartTimeUTC Time the user started the match resulting in the score being posted in UTC.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTournamentProxy.h" },
		{ "ToolTip", "Post the users score to the leaderboard\n\nService Name - tournament\nService Operation - POST_TOURNAMENT_SCORE\n\nParam - leaderboardId The leaderboard for the tournament\nParam - score The score to post\nParam - jsonData Optional data attached to the leaderboard entry\nParam - roundStartTimeUTC Time the user started the match resulting in the score being posted in UTC." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCTournamentProxy, nullptr, "PostTournamentScoreUTC", nullptr, nullptr, sizeof(BCTournamentProxy_eventPostTournamentScoreUTC_Parms), Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics
	{
		struct BCTournamentProxy_eventPostTournamentScoreWithResults_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			int32 score;
			FString jsonData;
			FDateTime roundStartedTime;
			ESortOrder sort;
			int32 beforeCount;
			int32 afterCount;
			float initialScore;
			UBCTournamentProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roundStartedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_roundStartedTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_sort_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_sort;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_beforeCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_afterCount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_initialScore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreWithResults_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreWithResults_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_leaderboardId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreWithResults_Parms, score), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_jsonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreWithResults_Parms, jsonData), METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_jsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_jsonData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_roundStartedTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_roundStartedTime = { "roundStartedTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreWithResults_Parms, roundStartedTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_roundStartedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_roundStartedTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_sort_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_sort = { "sort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreWithResults_Parms, sort), Z_Construct_UEnum_BCClientPlugin_ESortOrder, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_beforeCount = { "beforeCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreWithResults_Parms, beforeCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_afterCount = { "afterCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreWithResults_Parms, afterCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_initialScore = { "initialScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreWithResults_Parms, initialScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreWithResults_Parms, ReturnValue), Z_Construct_UClass_UBCTournamentProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_roundStartedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_sort_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_sort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_beforeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_afterCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_initialScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Tournament" },
		{ "Comment", "/**\n\x09* @deprecated will be removed March 2021, Use postTournamentScoreWithResultsUTC instead\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTournamentProxy.h" },
		{ "ToolTip", "@deprecated will be removed March 2021, Use postTournamentScoreWithResultsUTC instead" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCTournamentProxy, nullptr, "PostTournamentScoreWithResults", nullptr, nullptr, sizeof(BCTournamentProxy_eventPostTournamentScoreWithResults_Parms), Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics
	{
		struct BCTournamentProxy_eventPostTournamentScoreWithResultsUTC_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			int32 score;
			FString jsonData;
			int64 roundStartedTime;
			ESortOrder sort;
			int32 beforeCount;
			int32 afterCount;
			float initialScore;
			UBCTournamentProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_roundStartedTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_sort_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_sort;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_beforeCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_afterCount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_initialScore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreWithResultsUTC_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreWithResultsUTC_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_leaderboardId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreWithResultsUTC_Parms, score), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_jsonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreWithResultsUTC_Parms, jsonData), METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_jsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_jsonData_MetaData)) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_roundStartedTime = { "roundStartedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreWithResultsUTC_Parms, roundStartedTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_sort_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_sort = { "sort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreWithResultsUTC_Parms, sort), Z_Construct_UEnum_BCClientPlugin_ESortOrder, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_beforeCount = { "beforeCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreWithResultsUTC_Parms, beforeCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_afterCount = { "afterCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreWithResultsUTC_Parms, afterCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_initialScore = { "initialScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreWithResultsUTC_Parms, initialScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventPostTournamentScoreWithResultsUTC_Parms, ReturnValue), Z_Construct_UClass_UBCTournamentProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_roundStartedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_sort_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_sort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_beforeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_afterCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_initialScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Tournament" },
		{ "Comment", "/**\n\x09* Post the users score to the leaderboard and the result for the score\n\x09*\n\x09* Service Name - tournament\n\x09* Service Operation - POST_TOURNAMENT_SCORE_WITH_RESULTS\n\x09*\n\x09* @param leaderboardId The leaderboard for the tournament\n\x09* @param score The score to post\n\x09* @param jsonData Optional data attached to the leaderboard entry\n\x09* @param roundStartedTime Time the user started the match resulting in the score being posted in UTC.\n\x09* @param sort the sorting type\n\x09* @param beforeCount \n\x09* @param afterCount\n\x09* @param initialScore\n\x09* @param callback The method to be invoked when the server response is received\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTournamentProxy.h" },
		{ "ToolTip", "Post the users score to the leaderboard and the result for the score\n\nService Name - tournament\nService Operation - POST_TOURNAMENT_SCORE_WITH_RESULTS\n\n@param leaderboardId The leaderboard for the tournament\n@param score The score to post\n@param jsonData Optional data attached to the leaderboard entry\n@param roundStartedTime Time the user started the match resulting in the score being posted in UTC.\n@param sort the sorting type\n@param beforeCount\n@param afterCount\n@param initialScore\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCTournamentProxy, nullptr, "PostTournamentScoreWithResultsUTC", nullptr, nullptr, sizeof(BCTournamentProxy_eventPostTournamentScoreWithResultsUTC_Parms), Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCTournamentProxy_ViewCurrentReward_Statics
	{
		struct BCTournamentProxy_eventViewCurrentReward_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			UBCTournamentProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_ViewCurrentReward_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventViewCurrentReward_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_ViewCurrentReward_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCTournamentProxy_ViewCurrentReward_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventViewCurrentReward_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_ViewCurrentReward_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_ViewCurrentReward_Statics::NewProp_leaderboardId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_ViewCurrentReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventViewCurrentReward_Parms, ReturnValue), Z_Construct_UClass_UBCTournamentProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCTournamentProxy_ViewCurrentReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_ViewCurrentReward_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_ViewCurrentReward_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_ViewCurrentReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_ViewCurrentReward_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Tournament" },
		{ "Comment", "/**\n\x09* Returns the user's expected reward based on the current scores\n\x09*\n\x09* Service Name - tournament\n\x09* Service Operation - VIEW_CURRENT_REWARD\n\x09*\n\x09* Param - leaderboardId The leaderboard for the tournament\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTournamentProxy.h" },
		{ "ToolTip", "Returns the user's expected reward based on the current scores\n\nService Name - tournament\nService Operation - VIEW_CURRENT_REWARD\n\nParam - leaderboardId The leaderboard for the tournament" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCTournamentProxy_ViewCurrentReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCTournamentProxy, nullptr, "ViewCurrentReward", nullptr, nullptr, sizeof(BCTournamentProxy_eventViewCurrentReward_Parms), Z_Construct_UFunction_UBCTournamentProxy_ViewCurrentReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_ViewCurrentReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_ViewCurrentReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_ViewCurrentReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCTournamentProxy_ViewCurrentReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCTournamentProxy_ViewCurrentReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCTournamentProxy_ViewReward_Statics
	{
		struct BCTournamentProxy_eventViewReward_Parms
		{
			UBrainCloudWrapper* brainCloud;
			FString leaderboardId;
			int32 versionId;
			UBCTournamentProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloud;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_versionId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_ViewReward_Statics::NewProp_brainCloud = { "brainCloud", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventViewReward_Parms, brainCloud), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_ViewReward_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCTournamentProxy_ViewReward_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventViewReward_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_ViewReward_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_ViewReward_Statics::NewProp_leaderboardId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCTournamentProxy_ViewReward_Statics::NewProp_versionId = { "versionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventViewReward_Parms, versionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCTournamentProxy_ViewReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTournamentProxy_eventViewReward_Parms, ReturnValue), Z_Construct_UClass_UBCTournamentProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCTournamentProxy_ViewReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_ViewReward_Statics::NewProp_brainCloud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_ViewReward_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_ViewReward_Statics::NewProp_versionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTournamentProxy_ViewReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTournamentProxy_ViewReward_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Tournament" },
		{ "Comment", "/**\n\x09* Returns the user's reward from a finished tournament\n\x09*\n\x09* Service Name - tournament\n\x09* Service Operation - VIEW_REWARD\n\x09*\n\x09* Param - leaderboardId The leaderboard for the tournament\n\x09* Param - versionId Version of the tournament. Use -1 for the latest version.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTournamentProxy.h" },
		{ "ToolTip", "Returns the user's reward from a finished tournament\n\nService Name - tournament\nService Operation - VIEW_REWARD\n\nParam - leaderboardId The leaderboard for the tournament\nParam - versionId Version of the tournament. Use -1 for the latest version." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCTournamentProxy_ViewReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCTournamentProxy, nullptr, "ViewReward", nullptr, nullptr, sizeof(BCTournamentProxy_eventViewReward_Parms), Z_Construct_UFunction_UBCTournamentProxy_ViewReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_ViewReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCTournamentProxy_ViewReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTournamentProxy_ViewReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCTournamentProxy_ViewReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCTournamentProxy_ViewReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCTournamentProxy_NoRegister()
	{
		return UBCTournamentProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCTournamentProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCTournamentProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCTournamentProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCTournamentProxy_ClaimTournamentReward, "ClaimTournamentReward" }, // 3035631679
		{ &Z_Construct_UFunction_UBCTournamentProxy_GetDivisionInfo, "GetDivisionInfo" }, // 2367549506
		{ &Z_Construct_UFunction_UBCTournamentProxy_GetMyDivisions, "GetMyDivisions" }, // 3442066343
		{ &Z_Construct_UFunction_UBCTournamentProxy_GetTournamentStatus, "GetTournamentStatus" }, // 1967423297
		{ &Z_Construct_UFunction_UBCTournamentProxy_JoinDivision, "JoinDivision" }, // 1998613604
		{ &Z_Construct_UFunction_UBCTournamentProxy_JoinTournament, "JoinTournament" }, // 4037816046
		{ &Z_Construct_UFunction_UBCTournamentProxy_LeaveDivisionInstance, "LeaveDivisionInstance" }, // 397477855
		{ &Z_Construct_UFunction_UBCTournamentProxy_LeaveTournament, "LeaveTournament" }, // 1750065739
		{ &Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScore, "PostTournamentScore" }, // 1378646705
		{ &Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreUTC, "PostTournamentScoreUTC" }, // 2815384963
		{ &Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResults, "PostTournamentScoreWithResults" }, // 3311358412
		{ &Z_Construct_UFunction_UBCTournamentProxy_PostTournamentScoreWithResultsUTC, "PostTournamentScoreWithResultsUTC" }, // 3315042409
		{ &Z_Construct_UFunction_UBCTournamentProxy_ViewCurrentReward, "ViewCurrentReward" }, // 4090619044
		{ &Z_Construct_UFunction_UBCTournamentProxy_ViewReward, "ViewReward" }, // 1100795990
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCTournamentProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCTournamentProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTournamentProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCTournamentProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCTournamentProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCTournamentProxy_Statics::ClassParams = {
		&UBCTournamentProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCTournamentProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCTournamentProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCTournamentProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCTournamentProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCTournamentProxy, 2340061682);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCTournamentProxy>()
	{
		return UBCTournamentProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCTournamentProxy(Z_Construct_UClass_UBCTournamentProxy, &UBCTournamentProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCTournamentProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCTournamentProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
