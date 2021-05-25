// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCLeaderboardProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCLeaderboardProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCLeaderboardProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCLeaderboardProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_ESortOrder();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_ESocialLeaderboardType();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_ERotationType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
	DEFINE_FUNCTION(UBCLeaderboardProxy::execGetGroupLeaderboardViewByVersion)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FIntProperty,Z_Param_versionId);
		P_GET_ENUM(ESortOrder,Z_Param_sortOrder);
		P_GET_PROPERTY(FIntProperty,Z_Param_beforeCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_afterCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::GetGroupLeaderboardViewByVersion(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_groupId,Z_Param_versionId,ESortOrder(Z_Param_sortOrder),Z_Param_beforeCount,Z_Param_afterCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execGetGroupLeaderboardView)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_ENUM(ESortOrder,Z_Param_sortOrder);
		P_GET_PROPERTY(FIntProperty,Z_Param_beforeCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_afterCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::GetGroupLeaderboardView(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_groupId,ESortOrder(Z_Param_sortOrder),Z_Param_beforeCount,Z_Param_afterCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execRemoveGroupScore)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FIntProperty,Z_Param_score);
		P_GET_PROPERTY(FIntProperty,Z_Param_versionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::RemoveGroupScore(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_groupId,Z_Param_score,Z_Param_versionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execPostScoreToGroupLeaderboard)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FIntProperty,Z_Param_score);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonOtherData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::PostScoreToGroupLeaderboard(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_groupId,Z_Param_score,Z_Param_jsonOtherData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execGetPlayerScoresFromLeaderboards)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_TARRAY(FString,Z_Param_leaderboardIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::GetPlayerScoresFromLeaderboards(Z_Param_brainCloudWrapper,Z_Param_leaderboardIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execGetPlayerScores)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FIntProperty,Z_Param_versionId);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::GetPlayerScores(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_versionId,Z_Param_maxResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execGetPlayerScore)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FIntProperty,Z_Param_versionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::GetPlayerScore(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_versionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execListAllLeaderboards)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::ListAllLeaderboards(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execGetPlayersSocialLeaderboardByVersion)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_TARRAY(FString,Z_Param_profileIds);
		P_GET_PROPERTY(FIntProperty,Z_Param_versionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::GetPlayersSocialLeaderboardByVersion(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_profileIds,Z_Param_versionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execGetPlayersSocialLeaderboard)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_TARRAY(FString,Z_Param_profileIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::GetPlayersSocialLeaderboard(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_profileIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execGetGroupSocialLeaderboardByVersion)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FIntProperty,Z_Param_versionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::GetGroupSocialLeaderboardByVersion(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_groupId,Z_Param_versionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execGetGroupSocialLeaderboard)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::GetGroupSocialLeaderboard(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_groupId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execRemovePlayerScore)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FIntProperty,Z_Param_versionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::RemovePlayerScore(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_versionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execPostScoreToDynamicLeaderboardDaysUTC)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FIntProperty,Z_Param_score);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_GET_ENUM(ESocialLeaderboardType,Z_Param_leaderboardType);
		P_GET_PROPERTY(FInt64Property,Z_Param_rotationStart);
		P_GET_PROPERTY(FIntProperty,Z_Param_retainedCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_numDaysToRotate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::PostScoreToDynamicLeaderboardDaysUTC(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_score,Z_Param_jsonData,ESocialLeaderboardType(Z_Param_leaderboardType),Z_Param_rotationStart,Z_Param_retainedCount,Z_Param_numDaysToRotate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execPostScoreToDynamicLeaderboardDays)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FIntProperty,Z_Param_score);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_GET_ENUM(ESocialLeaderboardType,Z_Param_leaderboardType);
		P_GET_STRUCT(FDateTime,Z_Param_rotationStart);
		P_GET_PROPERTY(FIntProperty,Z_Param_retainedCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_numDaysToRotate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::PostScoreToDynamicLeaderboardDays(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_score,Z_Param_jsonData,ESocialLeaderboardType(Z_Param_leaderboardType),Z_Param_rotationStart,Z_Param_retainedCount,Z_Param_numDaysToRotate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execPostScoreToDynamicGroupLeaderboardUTC)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FIntProperty,Z_Param_score);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_GET_ENUM(ESocialLeaderboardType,Z_Param_leaderboardType);
		P_GET_ENUM(ERotationType,Z_Param_rotationType);
		P_GET_PROPERTY(FInt64Property,Z_Param_rotationStart);
		P_GET_PROPERTY(FIntProperty,Z_Param_retainedCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::PostScoreToDynamicGroupLeaderboardUTC(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_groupId,Z_Param_score,Z_Param_jsonData,ESocialLeaderboardType(Z_Param_leaderboardType),ERotationType(Z_Param_rotationType),Z_Param_rotationStart,Z_Param_retainedCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execPostScoreToDynamicGroupLeaderboard)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FIntProperty,Z_Param_score);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_GET_ENUM(ESocialLeaderboardType,Z_Param_leaderboardType);
		P_GET_ENUM(ERotationType,Z_Param_rotationType);
		P_GET_STRUCT(FDateTime,Z_Param_rotationStart);
		P_GET_PROPERTY(FIntProperty,Z_Param_retainedCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::PostScoreToDynamicGroupLeaderboard(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_groupId,Z_Param_score,Z_Param_jsonData,ESocialLeaderboardType(Z_Param_leaderboardType),ERotationType(Z_Param_rotationType),Z_Param_rotationStart,Z_Param_retainedCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execPostScoreToDynamicLeaderboardUTC)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FIntProperty,Z_Param_score);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_GET_ENUM(ESocialLeaderboardType,Z_Param_leaderboardType);
		P_GET_ENUM(ERotationType,Z_Param_rotationType);
		P_GET_PROPERTY(FInt64Property,Z_Param_rotationStart);
		P_GET_PROPERTY(FIntProperty,Z_Param_retainedCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::PostScoreToDynamicLeaderboardUTC(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_score,Z_Param_jsonData,ESocialLeaderboardType(Z_Param_leaderboardType),ERotationType(Z_Param_rotationType),Z_Param_rotationStart,Z_Param_retainedCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execPostScoreToDynamicLeaderboard)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FIntProperty,Z_Param_score);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_GET_ENUM(ESocialLeaderboardType,Z_Param_leaderboardType);
		P_GET_ENUM(ERotationType,Z_Param_rotationType);
		P_GET_STRUCT(FDateTime,Z_Param_rotationStart);
		P_GET_PROPERTY(FIntProperty,Z_Param_retainedCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::PostScoreToDynamicLeaderboard(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_score,Z_Param_jsonData,ESocialLeaderboardType(Z_Param_leaderboardType),ERotationType(Z_Param_rotationType),Z_Param_rotationStart,Z_Param_retainedCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execPostScore)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_PROPERTY(FIntProperty,Z_Param_score);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::PostScore(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_score,Z_Param_jsonData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execGetGlobalLeaderboardVersions)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::GetGlobalLeaderboardVersions(Z_Param_brainCloudWrapper,Z_Param_leaderboardId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execGetGlobalLeaderboardEntryCount)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::GetGlobalLeaderboardEntryCount(Z_Param_brainCloudWrapper,Z_Param_leaderboardId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execGetGlobalLeaderboardViewByVersion)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_ENUM(ESortOrder,Z_Param_sortOrder);
		P_GET_PROPERTY(FIntProperty,Z_Param_beforeCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_afterCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_versionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::GetGlobalLeaderboardViewByVersion(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,ESortOrder(Z_Param_sortOrder),Z_Param_beforeCount,Z_Param_afterCount,Z_Param_versionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execGetGlobalLeaderboardView)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_ENUM(ESortOrder,Z_Param_sortOrder);
		P_GET_PROPERTY(FIntProperty,Z_Param_beforeCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_afterCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::GetGlobalLeaderboardView(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,ESortOrder(Z_Param_sortOrder),Z_Param_beforeCount,Z_Param_afterCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execGetGlobalLeaderboardPageByVersion)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_ENUM(ESortOrder,Z_Param_sortOrder);
		P_GET_PROPERTY(FIntProperty,Z_Param_startIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_endIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_versionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::GetGlobalLeaderboardPageByVersion(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,ESortOrder(Z_Param_sortOrder),Z_Param_startIndex,Z_Param_endIndex,Z_Param_versionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execGetGlobalLeaderboardPage)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_ENUM(ESortOrder,Z_Param_sortOrder);
		P_GET_PROPERTY(FIntProperty,Z_Param_startIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_endIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::GetGlobalLeaderboardPage(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,ESortOrder(Z_Param_sortOrder),Z_Param_startIndex,Z_Param_endIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execGetMultiSocialLeaderboard)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_TARRAY_REF(FString,Z_Param_Out_leaderboardIds);
		P_GET_PROPERTY(FIntProperty,Z_Param_leaderboardResultCount);
		P_GET_UBOOL(Z_Param_replaceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::GetMultiSocialLeaderboard(Z_Param_brainCloudWrapper,Z_Param_Out_leaderboardIds,Z_Param_leaderboardResultCount,Z_Param_replaceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execGetSocialLeaderboardByVersion)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_UBOOL(Z_Param_replaceName);
		P_GET_PROPERTY(FIntProperty,Z_Param_versionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::GetSocialLeaderboardByVersion(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_replaceName,Z_Param_versionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLeaderboardProxy::execGetSocialLeaderboard)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardId);
		P_GET_UBOOL(Z_Param_replaceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLeaderboardProxy**)Z_Param__Result=UBCLeaderboardProxy::GetSocialLeaderboard(Z_Param_brainCloudWrapper,Z_Param_leaderboardId,Z_Param_replaceName);
		P_NATIVE_END;
	}
	void UBCLeaderboardProxy::StaticRegisterNativesUBCLeaderboardProxy()
	{
		UClass* Class = UBCLeaderboardProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGlobalLeaderboardEntryCount", &UBCLeaderboardProxy::execGetGlobalLeaderboardEntryCount },
			{ "GetGlobalLeaderboardPage", &UBCLeaderboardProxy::execGetGlobalLeaderboardPage },
			{ "GetGlobalLeaderboardPageByVersion", &UBCLeaderboardProxy::execGetGlobalLeaderboardPageByVersion },
			{ "GetGlobalLeaderboardVersions", &UBCLeaderboardProxy::execGetGlobalLeaderboardVersions },
			{ "GetGlobalLeaderboardView", &UBCLeaderboardProxy::execGetGlobalLeaderboardView },
			{ "GetGlobalLeaderboardViewByVersion", &UBCLeaderboardProxy::execGetGlobalLeaderboardViewByVersion },
			{ "GetGroupLeaderboardView", &UBCLeaderboardProxy::execGetGroupLeaderboardView },
			{ "GetGroupLeaderboardViewByVersion", &UBCLeaderboardProxy::execGetGroupLeaderboardViewByVersion },
			{ "GetGroupSocialLeaderboard", &UBCLeaderboardProxy::execGetGroupSocialLeaderboard },
			{ "GetGroupSocialLeaderboardByVersion", &UBCLeaderboardProxy::execGetGroupSocialLeaderboardByVersion },
			{ "GetMultiSocialLeaderboard", &UBCLeaderboardProxy::execGetMultiSocialLeaderboard },
			{ "GetPlayerScore", &UBCLeaderboardProxy::execGetPlayerScore },
			{ "GetPlayerScores", &UBCLeaderboardProxy::execGetPlayerScores },
			{ "GetPlayerScoresFromLeaderboards", &UBCLeaderboardProxy::execGetPlayerScoresFromLeaderboards },
			{ "GetPlayersSocialLeaderboard", &UBCLeaderboardProxy::execGetPlayersSocialLeaderboard },
			{ "GetPlayersSocialLeaderboardByVersion", &UBCLeaderboardProxy::execGetPlayersSocialLeaderboardByVersion },
			{ "GetSocialLeaderboard", &UBCLeaderboardProxy::execGetSocialLeaderboard },
			{ "GetSocialLeaderboardByVersion", &UBCLeaderboardProxy::execGetSocialLeaderboardByVersion },
			{ "ListAllLeaderboards", &UBCLeaderboardProxy::execListAllLeaderboards },
			{ "PostScore", &UBCLeaderboardProxy::execPostScore },
			{ "PostScoreToDynamicGroupLeaderboard", &UBCLeaderboardProxy::execPostScoreToDynamicGroupLeaderboard },
			{ "PostScoreToDynamicGroupLeaderboardUTC", &UBCLeaderboardProxy::execPostScoreToDynamicGroupLeaderboardUTC },
			{ "PostScoreToDynamicLeaderboard", &UBCLeaderboardProxy::execPostScoreToDynamicLeaderboard },
			{ "PostScoreToDynamicLeaderboardDays", &UBCLeaderboardProxy::execPostScoreToDynamicLeaderboardDays },
			{ "PostScoreToDynamicLeaderboardDaysUTC", &UBCLeaderboardProxy::execPostScoreToDynamicLeaderboardDaysUTC },
			{ "PostScoreToDynamicLeaderboardUTC", &UBCLeaderboardProxy::execPostScoreToDynamicLeaderboardUTC },
			{ "PostScoreToGroupLeaderboard", &UBCLeaderboardProxy::execPostScoreToGroupLeaderboard },
			{ "RemoveGroupScore", &UBCLeaderboardProxy::execRemoveGroupScore },
			{ "RemovePlayerScore", &UBCLeaderboardProxy::execRemovePlayerScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardEntryCount_Statics
	{
		struct BCLeaderboardProxy_eventGetGlobalLeaderboardEntryCount_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardEntryCount_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardEntryCount_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardEntryCount_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardEntryCount_Parms, leaderboardId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardEntryCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardEntryCount_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardEntryCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardEntryCount_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardEntryCount_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardEntryCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardEntryCount_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Gets the number of entries in a global leaderboard\n\x09*\n\x09* Param - leaderboardId The id of the leaderboard to retrieve.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Gets the number of entries in a global leaderboard\n\nParam - leaderboardId The id of the leaderboard to retrieve." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardEntryCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "GetGlobalLeaderboardEntryCount", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventGetGlobalLeaderboardEntryCount_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardEntryCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardEntryCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardEntryCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardEntryCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardEntryCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardEntryCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics
	{
		struct BCLeaderboardProxy_eventGetGlobalLeaderboardPage_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			ESortOrder sortOrder;
			int32 startIndex;
			int32 endIndex;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_sortOrder_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_sortOrder;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_endIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardPage_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardPage_Parms, leaderboardId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::NewProp_sortOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::NewProp_sortOrder = { "sortOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardPage_Parms, sortOrder), Z_Construct_UEnum_BCClientPlugin_ESortOrder, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::NewProp_startIndex = { "startIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardPage_Parms, startIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::NewProp_endIndex = { "endIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardPage_Parms, endIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardPage_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::NewProp_sortOrder_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::NewProp_sortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::NewProp_startIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::NewProp_endIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Method returns a page of global leaderboard results.\n\x09*\n\x09* Leaderboards entries contain the player's score and optionally, some user-defined\n\x09* data associated with the score.\n\x09*\n\x09* Note: This method allows the client to retrieve pages from within the global leaderboard list\n\x09*\n\x09* Service Name - SocialLeaderboard\n\x09* Service Operation - GetGlobalLeaderboardPage\n\x09*\n\x09* Param - leaderboardId The id of the leaderboard to retrieve.\n\x09* Param - sort Sort key Sort order of page.\n\x09* Param - startIndex The index at which to start the page.\n\x09* Param - endIndex The index at which to end the page.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Method returns a page of global leaderboard results.\n\nLeaderboards entries contain the player's score and optionally, some user-defined\ndata associated with the score.\n\nNote: This method allows the client to retrieve pages from within the global leaderboard list\n\nService Name - SocialLeaderboard\nService Operation - GetGlobalLeaderboardPage\n\nParam - leaderboardId The id of the leaderboard to retrieve.\nParam - sort Sort key Sort order of page.\nParam - startIndex The index at which to start the page.\nParam - endIndex The index at which to end the page." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "GetGlobalLeaderboardPage", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventGetGlobalLeaderboardPage_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics
	{
		struct BCLeaderboardProxy_eventGetGlobalLeaderboardPageByVersion_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			ESortOrder sortOrder;
			int32 startIndex;
			int32 endIndex;
			int32 versionId;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_sortOrder_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_sortOrder;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_endIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_versionId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardPageByVersion_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardPageByVersion_Parms, leaderboardId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::NewProp_sortOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::NewProp_sortOrder = { "sortOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardPageByVersion_Parms, sortOrder), Z_Construct_UEnum_BCClientPlugin_ESortOrder, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::NewProp_startIndex = { "startIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardPageByVersion_Parms, startIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::NewProp_endIndex = { "endIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardPageByVersion_Parms, endIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::NewProp_versionId = { "versionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardPageByVersion_Parms, versionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardPageByVersion_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::NewProp_sortOrder_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::NewProp_sortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::NewProp_startIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::NewProp_endIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::NewProp_versionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Method returns a page of global leaderboard results.\n\x09* By using a non-current version id, the user can retrieve a historial leaderboard.\n\x09* See GetGlobalLeaderboardVersions method to retrieve the version id.\n\x09*\n\x09* Service Name - SocialLeaderboard\n\x09* Service Operation - GetGlobalLeaderboardPage\n\x09*\n\x09* Param - leaderboardId The id of the leaderboard to retrieve.\n\x09* Param - sort Sort key Sort order of page.\n\x09* Param - startIndex The index at which to start the page.\n\x09* Param - endIndex The index at which to end the page.\n\x09* Param - versionId The historical version to retrieve.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Method returns a page of global leaderboard results.\nBy using a non-current version id, the user can retrieve a historial leaderboard.\nSee GetGlobalLeaderboardVersions method to retrieve the version id.\n\nService Name - SocialLeaderboard\nService Operation - GetGlobalLeaderboardPage\n\nParam - leaderboardId The id of the leaderboard to retrieve.\nParam - sort Sort key Sort order of page.\nParam - startIndex The index at which to start the page.\nParam - endIndex The index at which to end the page.\nParam - versionId The historical version to retrieve." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "GetGlobalLeaderboardPageByVersion", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventGetGlobalLeaderboardPageByVersion_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardVersions_Statics
	{
		struct BCLeaderboardProxy_eventGetGlobalLeaderboardVersions_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardVersions_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardVersions_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardVersions_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardVersions_Parms, leaderboardId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardVersions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardVersions_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardVersions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardVersions_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardVersions_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardVersions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardVersions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/** Gets the global leaderboard versions.\n\x09*\n\x09* Service Name - SocialLeaderboard\n\x09* Service Operation - GetGlobalLeaderboardVersions\n\x09*\n\x09* Param - leaderboardId The leaderboard\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Gets the global leaderboard versions.\n\nService Name - SocialLeaderboard\nService Operation - GetGlobalLeaderboardVersions\n\nParam - leaderboardId The leaderboard" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardVersions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "GetGlobalLeaderboardVersions", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventGetGlobalLeaderboardVersions_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardVersions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardVersions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardVersions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardVersions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardVersions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardVersions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics
	{
		struct BCLeaderboardProxy_eventGetGlobalLeaderboardView_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			ESortOrder sortOrder;
			int32 beforeCount;
			int32 afterCount;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_sortOrder_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_sortOrder;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_beforeCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_afterCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardView_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardView_Parms, leaderboardId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::NewProp_sortOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::NewProp_sortOrder = { "sortOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardView_Parms, sortOrder), Z_Construct_UEnum_BCClientPlugin_ESortOrder, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::NewProp_beforeCount = { "beforeCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardView_Parms, beforeCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::NewProp_afterCount = { "afterCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardView_Parms, afterCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardView_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::NewProp_sortOrder_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::NewProp_sortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::NewProp_beforeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::NewProp_afterCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Method returns a view of global leaderboard results that centers on the current player.\n\x09*\n\x09* Leaderboards entries contain the player's score and optionally, some user-defined\n\x09* data associated with the score.\n\x09*\n\x09* Service Name - SocialLeaderboard\n\x09* Service Operation - GetGlobalLeaderboardView\n\x09*\n\x09* Param - leaderboardId The id of the leaderboard to retrieve.\n\x09* Param - sort Sort key Sort order of page.\n\x09* Param - beforeCount The count of number of players before the current player to include.\n\x09* Param - afterCount The count of number of players after the current player to include.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Method returns a view of global leaderboard results that centers on the current player.\n\nLeaderboards entries contain the player's score and optionally, some user-defined\ndata associated with the score.\n\nService Name - SocialLeaderboard\nService Operation - GetGlobalLeaderboardView\n\nParam - leaderboardId The id of the leaderboard to retrieve.\nParam - sort Sort key Sort order of page.\nParam - beforeCount The count of number of players before the current player to include.\nParam - afterCount The count of number of players after the current player to include." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "GetGlobalLeaderboardView", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventGetGlobalLeaderboardView_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics
	{
		struct BCLeaderboardProxy_eventGetGlobalLeaderboardViewByVersion_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			ESortOrder sortOrder;
			int32 beforeCount;
			int32 afterCount;
			int32 versionId;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_sortOrder_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_sortOrder;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_beforeCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_afterCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_versionId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardViewByVersion_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardViewByVersion_Parms, leaderboardId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::NewProp_sortOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::NewProp_sortOrder = { "sortOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardViewByVersion_Parms, sortOrder), Z_Construct_UEnum_BCClientPlugin_ESortOrder, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::NewProp_beforeCount = { "beforeCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardViewByVersion_Parms, beforeCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::NewProp_afterCount = { "afterCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardViewByVersion_Parms, afterCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::NewProp_versionId = { "versionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardViewByVersion_Parms, versionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGlobalLeaderboardViewByVersion_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::NewProp_sortOrder_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::NewProp_sortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::NewProp_beforeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::NewProp_afterCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::NewProp_versionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Method returns a view of global leaderboard results that centers on the current player.\n\x09* By using a non-current version id, the user can retrieve a historial leaderboard.\n\x09* See GetGlobalLeaderboardVersions method to retrieve the version id.\n\x09*\n\x09* Service Name - SocialLeaderboard\n\x09* Service Operation - GetGlobalLeaderboardView\n\x09*\n\x09* Param - leaderboardId The id of the leaderboard to retrieve.\n\x09* Param - sort Sort key Sort order of page.\n\x09* Param - beforeCount The count of number of players before the current player to include.\n\x09* Param - afterCount The count of number of players after the current player to include.\n\x09* Param - versionId The historical version to retrieve.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Method returns a view of global leaderboard results that centers on the current player.\nBy using a non-current version id, the user can retrieve a historial leaderboard.\nSee GetGlobalLeaderboardVersions method to retrieve the version id.\n\nService Name - SocialLeaderboard\nService Operation - GetGlobalLeaderboardView\n\nParam - leaderboardId The id of the leaderboard to retrieve.\nParam - sort Sort key Sort order of page.\nParam - beforeCount The count of number of players before the current player to include.\nParam - afterCount The count of number of players after the current player to include.\nParam - versionId The historical version to retrieve." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "GetGlobalLeaderboardViewByVersion", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventGetGlobalLeaderboardViewByVersion_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics
	{
		struct BCLeaderboardProxy_eventGetGroupLeaderboardView_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			FString groupId;
			ESortOrder sortOrder;
			int32 beforeCount;
			int32 afterCount;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_sortOrder_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_sortOrder;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_beforeCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_afterCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupLeaderboardView_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupLeaderboardView_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_leaderboardId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupLeaderboardView_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_groupId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_sortOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_sortOrder = { "sortOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupLeaderboardView_Parms, sortOrder), Z_Construct_UEnum_BCClientPlugin_ESortOrder, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_beforeCount = { "beforeCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupLeaderboardView_Parms, beforeCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_afterCount = { "afterCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupLeaderboardView_Parms, afterCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupLeaderboardView_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_sortOrder_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_sortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_beforeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_afterCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Retrieve a view of the group leaderboardsurrounding the current group.\n\x09*\n\x09* Service Name - leaderboard\n\x09* Service Operation - GET_GROUP_LEADERBOARD_VIEW\n\x09*\n\x09* @param in_leaderboardId A collection of leaderboardIds to retrieve scores from\n\x09* @param in_groupId the groups Id\n\x09* @param in_sortOrder the sort order\n\x09* @param in_beforeCount count of players before current player to include\n\x09* @param in_afterCount count of players after current player to include\n\x09* @param in_callback The method to be invoked when the server response is received\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Retrieve a view of the group leaderboardsurrounding the current group.\n\nService Name - leaderboard\nService Operation - GET_GROUP_LEADERBOARD_VIEW\n\n@param in_leaderboardId A collection of leaderboardIds to retrieve scores from\n@param in_groupId the groups Id\n@param in_sortOrder the sort order\n@param in_beforeCount count of players before current player to include\n@param in_afterCount count of players after current player to include\n@param in_callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "GetGroupLeaderboardView", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventGetGroupLeaderboardView_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics
	{
		struct BCLeaderboardProxy_eventGetGroupLeaderboardViewByVersion_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			FString groupId;
			int32 versionId;
			ESortOrder sortOrder;
			int32 beforeCount;
			int32 afterCount;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_versionId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_sortOrder_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_sortOrder;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_beforeCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_afterCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupLeaderboardViewByVersion_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupLeaderboardViewByVersion_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_leaderboardId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupLeaderboardViewByVersion_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_groupId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_versionId = { "versionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupLeaderboardViewByVersion_Parms, versionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_sortOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_sortOrder = { "sortOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupLeaderboardViewByVersion_Parms, sortOrder), Z_Construct_UEnum_BCClientPlugin_ESortOrder, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_beforeCount = { "beforeCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupLeaderboardViewByVersion_Parms, beforeCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_afterCount = { "afterCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupLeaderboardViewByVersion_Parms, afterCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupLeaderboardViewByVersion_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_versionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_sortOrder_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_sortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_beforeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_afterCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Retrieve a view of the group leaderboard surrounding the current group by the version\n\x09*\n\x09* Service Name - leaderboard\n\x09* Service Operation - GET_GROUP_LEADERBOARD_VIEW\n\x09*\n\x09* @param in_leaderboardId A collection of leaderboardIds to retrieve scores from\n\x09* @param in_groupId the groups Id\n\x09* @param in_versionId the version\n\x09* @param in_sortOrder the sort order\n\x09* @param in_beforeCount count of players before current player to include\n\x09* @param in_afterCount count of players after current player to include\n\x09* @param in_callback The method to be invoked when the server response is received\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Retrieve a view of the group leaderboard surrounding the current group by the version\n\nService Name - leaderboard\nService Operation - GET_GROUP_LEADERBOARD_VIEW\n\n@param in_leaderboardId A collection of leaderboardIds to retrieve scores from\n@param in_groupId the groups Id\n@param in_versionId the version\n@param in_sortOrder the sort order\n@param in_beforeCount count of players before current player to include\n@param in_afterCount count of players after current player to include\n@param in_callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "GetGroupLeaderboardViewByVersion", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventGetGroupLeaderboardViewByVersion_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics
	{
		struct BCLeaderboardProxy_eventGetGroupSocialLeaderboard_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			FString groupId;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupSocialLeaderboard_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupSocialLeaderboard_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::NewProp_leaderboardId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupSocialLeaderboard_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::NewProp_groupId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupSocialLeaderboard_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Retrieve the social leaderboard for a group.\n\x09*\n\x09* Param - leaderboardId The leaderboard to retrieve\n\x09* Param - groupId The ID of the group\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Retrieve the social leaderboard for a group.\n\nParam - leaderboardId The leaderboard to retrieve\nParam - groupId The ID of the group" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "GetGroupSocialLeaderboard", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventGetGroupSocialLeaderboard_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics
	{
		struct BCLeaderboardProxy_eventGetGroupSocialLeaderboardByVersion_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			FString groupId;
			int32 versionId;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_versionId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupSocialLeaderboardByVersion_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupSocialLeaderboardByVersion_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::NewProp_leaderboardId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupSocialLeaderboardByVersion_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::NewProp_groupId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::NewProp_versionId = { "versionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupSocialLeaderboardByVersion_Parms, versionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetGroupSocialLeaderboardByVersion_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::NewProp_versionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Retrieve the social leaderboard for a group by its version.\n\x09*\n\x09* Param - leaderboardId The leaderboard to retrieve\n\x09* Param - groupId The ID of the group\n\x09* Param - versionId the version\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Retrieve the social leaderboard for a group by its version.\n\nParam - leaderboardId The leaderboard to retrieve\nParam - groupId The ID of the group\nParam - versionId the version" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "GetGroupSocialLeaderboardByVersion", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventGetGroupSocialLeaderboardByVersion_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics
	{
		struct BCLeaderboardProxy_eventGetMultiSocialLeaderboard_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TArray<FString> leaderboardIds;
			int32 leaderboardResultCount;
			bool replaceName;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_leaderboardIds;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_leaderboardResultCount;
		static void NewProp_replaceName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_replaceName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetMultiSocialLeaderboard_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::NewProp_leaderboardIds_Inner = { "leaderboardIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::NewProp_leaderboardIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::NewProp_leaderboardIds = { "leaderboardIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetMultiSocialLeaderboard_Parms, leaderboardIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::NewProp_leaderboardIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::NewProp_leaderboardIds_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::NewProp_leaderboardResultCount = { "leaderboardResultCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetMultiSocialLeaderboard_Parms, leaderboardResultCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::NewProp_replaceName_SetBit(void* Obj)
	{
		((BCLeaderboardProxy_eventGetMultiSocialLeaderboard_Parms*)Obj)->replaceName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::NewProp_replaceName = { "replaceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCLeaderboardProxy_eventGetMultiSocialLeaderboard_Parms), &Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::NewProp_replaceName_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetMultiSocialLeaderboard_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::NewProp_leaderboardIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::NewProp_leaderboardIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::NewProp_leaderboardResultCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::NewProp_replaceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Reads multiple social leaderboards.\n\x09*\n\x09* Param - leaderboardIds Collection of leaderboard IDs.\n\x09* Param - leaderboardResultCount Maximum count of entries to return for each leaderboard.\n\x09* Param - replaceName If true, the currently logged in player's name will be replaced\n\x09* by the string \"You\".\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Reads multiple social leaderboards.\n\nParam - leaderboardIds Collection of leaderboard IDs.\nParam - leaderboardResultCount Maximum count of entries to return for each leaderboard.\nParam - replaceName If true, the currently logged in player's name will be replaced\nby the string \"You\"." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "GetMultiSocialLeaderboard", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventGetMultiSocialLeaderboard_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore_Statics
	{
		struct BCLeaderboardProxy_eventGetPlayerScore_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			int32 versionId;
			UBCLeaderboardProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayerScore_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayerScore_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore_Statics::NewProp_leaderboardId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore_Statics::NewProp_versionId = { "versionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayerScore_Parms, versionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayerScore_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore_Statics::NewProp_versionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Gets a player's score from a leaderboard\n\x09*\n\x09* Service Name - leaderboard\n\x09* Service Operation - GET_PLAYER_SCORE\n\x09*\n\x09* Param - leaderboardId The leaderboard ID\n\x09* Param - versionId The version of the leaderboard. Use -1 for current.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Gets a player's score from a leaderboard\n\nService Name - leaderboard\nService Operation - GET_PLAYER_SCORE\n\nParam - leaderboardId The leaderboard ID\nParam - versionId The version of the leaderboard. Use -1 for current." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "GetPlayerScore", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventGetPlayerScore_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics
	{
		struct BCLeaderboardProxy_eventGetPlayerScores_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			int32 versionId;
			int32 maxResults;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_versionId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxResults;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayerScores_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayerScores_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::NewProp_leaderboardId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::NewProp_versionId = { "versionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayerScores_Parms, versionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::NewProp_maxResults = { "maxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayerScores_Parms, maxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayerScores_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::NewProp_versionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::NewProp_maxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Gets a player's beat scores from a leaderboard\n\x09*\n\x09* Service Name - leaderboard\n\x09* Service Operation - GET_PLAYER_SCORES\n\x09*\n\x09* Param - leaderboardId The leaderboard ID\n\x09* Param - versionId The version of the leaderboard. Use -1 for current.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Gets a player's beat scores from a leaderboard\n\nService Name - leaderboard\nService Operation - GET_PLAYER_SCORES\n\nParam - leaderboardId The leaderboard ID\nParam - versionId The version of the leaderboard. Use -1 for current." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "GetPlayerScores", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventGetPlayerScores_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards_Statics
	{
		struct BCLeaderboardProxy_eventGetPlayerScoresFromLeaderboards_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TArray<FString> leaderboardIds;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_leaderboardIds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayerScoresFromLeaderboards_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards_Statics::NewProp_leaderboardIds_Inner = { "leaderboardIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards_Statics::NewProp_leaderboardIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards_Statics::NewProp_leaderboardIds = { "leaderboardIds", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayerScoresFromLeaderboards_Parms, leaderboardIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards_Statics::NewProp_leaderboardIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards_Statics::NewProp_leaderboardIds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayerScoresFromLeaderboards_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards_Statics::NewProp_leaderboardIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards_Statics::NewProp_leaderboardIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Gets a player's score from multiple leaderboards\n\x09*\n\x09* Service Name - leaderboard\n\x09* Service Operation - GET_PLAYER_SCORES_FROM_LEADERBOARDS\n\x09*\n\x09* @Param - leaderboardIds A collection of leaderboardIds to retrieve scores from\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Gets a player's score from multiple leaderboards\n\nService Name - leaderboard\nService Operation - GET_PLAYER_SCORES_FROM_LEADERBOARDS\n\n@Param - leaderboardIds A collection of leaderboardIds to retrieve scores from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "GetPlayerScoresFromLeaderboards", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventGetPlayerScoresFromLeaderboards_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics
	{
		struct BCLeaderboardProxy_eventGetPlayersSocialLeaderboard_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			TArray<FString> profileIds;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_profileIds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayersSocialLeaderboard_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayersSocialLeaderboard_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::NewProp_leaderboardId_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::NewProp_profileIds_Inner = { "profileIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::NewProp_profileIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::NewProp_profileIds = { "profileIds", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayersSocialLeaderboard_Parms, profileIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::NewProp_profileIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::NewProp_profileIds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayersSocialLeaderboard_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::NewProp_profileIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::NewProp_profileIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Retrieve the social leaderboard for a list of players.\n\x09*\n\x09* Param - leaderboardId The leaderboard to retrieve\n\x09* Param - profileIds The IDs of the players\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Retrieve the social leaderboard for a list of players.\n\nParam - leaderboardId The leaderboard to retrieve\nParam - profileIds The IDs of the players" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "GetPlayersSocialLeaderboard", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventGetPlayersSocialLeaderboard_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics
	{
		struct BCLeaderboardProxy_eventGetPlayersSocialLeaderboardByVersion_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			TArray<FString> profileIds;
			int32 versionId;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_profileIds;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_versionId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayersSocialLeaderboardByVersion_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayersSocialLeaderboardByVersion_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::NewProp_leaderboardId_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::NewProp_profileIds_Inner = { "profileIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::NewProp_profileIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::NewProp_profileIds = { "profileIds", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayersSocialLeaderboardByVersion_Parms, profileIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::NewProp_profileIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::NewProp_profileIds_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::NewProp_versionId = { "versionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayersSocialLeaderboardByVersion_Parms, versionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetPlayersSocialLeaderboardByVersion_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::NewProp_profileIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::NewProp_profileIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::NewProp_versionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Retrieve the social leaderboard for a list of players.\n\x09*\n\x09* Param - leaderboardId The leaderboard to retrieve\n\x09* Param - profileIds The IDs of the players\n\x09* Param - versionId the version\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Retrieve the social leaderboard for a list of players.\n\nParam - leaderboardId The leaderboard to retrieve\nParam - profileIds The IDs of the players\nParam - versionId the version" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "GetPlayersSocialLeaderboardByVersion", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventGetPlayersSocialLeaderboardByVersion_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard_Statics
	{
		struct BCLeaderboardProxy_eventGetSocialLeaderboard_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			bool replaceName;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static void NewProp_replaceName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_replaceName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetSocialLeaderboard_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetSocialLeaderboard_Parms, leaderboardId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard_Statics::NewProp_replaceName_SetBit(void* Obj)
	{
		((BCLeaderboardProxy_eventGetSocialLeaderboard_Parms*)Obj)->replaceName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard_Statics::NewProp_replaceName = { "replaceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCLeaderboardProxy_eventGetSocialLeaderboard_Parms), &Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard_Statics::NewProp_replaceName_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetSocialLeaderboard_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard_Statics::NewProp_replaceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Method returns the social leaderboard. A player's social leaderboard is\n\x09* comprised of players who are recognized as being your friend.\n\x09* For now, this applies solely to Facebook connected players who are\n\x09* friends with the logged in player (who also must be Facebook connected).\n\x09* In the future this will expand to other identification means (such as\n\x09* Game Centre, Google circles etc).\n\x09*\n\x09* Leaderboards entries contain the player's score and optionally, some user-defined\n\x09* data associated with the score. The currently logged in player will also\n\x09* be returned in the social leaderboard.\n\x09*\n\x09* Note: If no friends have played the game, the bestScore, createdAt, updatedAt\n\x09* will contain NULL.\n\x09*\n\x09* Param - leaderboardId The id of the leaderboard to retrieve\n\x09* Param - replaceName If true, the currently logged in player's name will be replaced\n\x09* by the string \"You\".\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Method returns the social leaderboard. A player's social leaderboard is\ncomprised of players who are recognized as being your friend.\nFor now, this applies solely to Facebook connected players who are\nfriends with the logged in player (who also must be Facebook connected).\nIn the future this will expand to other identification means (such as\nGame Centre, Google circles etc).\n\nLeaderboards entries contain the player's score and optionally, some user-defined\ndata associated with the score. The currently logged in player will also\nbe returned in the social leaderboard.\n\nNote: If no friends have played the game, the bestScore, createdAt, updatedAt\nwill contain NULL.\n\nParam - leaderboardId The id of the leaderboard to retrieve\nParam - replaceName If true, the currently logged in player's name will be replaced\nby the string \"You\"." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "GetSocialLeaderboard", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventGetSocialLeaderboard_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics
	{
		struct BCLeaderboardProxy_eventGetSocialLeaderboardByVersion_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			bool replaceName;
			int32 versionId;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static void NewProp_replaceName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_replaceName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_versionId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetSocialLeaderboardByVersion_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetSocialLeaderboardByVersion_Parms, leaderboardId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics::NewProp_replaceName_SetBit(void* Obj)
	{
		((BCLeaderboardProxy_eventGetSocialLeaderboardByVersion_Parms*)Obj)->replaceName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics::NewProp_replaceName = { "replaceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCLeaderboardProxy_eventGetSocialLeaderboardByVersion_Parms), &Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics::NewProp_replaceName_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics::NewProp_versionId = { "versionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetSocialLeaderboardByVersion_Parms, versionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventGetSocialLeaderboardByVersion_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics::NewProp_replaceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics::NewProp_versionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Method returns the social leaderboard by its version. A player's social leaderboard is\n\x09* comprised of players who are recognized as being your friend.\n\x09* For now, this applies solely to Facebook connected players who are\n\x09* friends with the logged in player (who also must be Facebook connected).\n\x09* In the future this will expand to other identification means (such as\n\x09* Game Centre, Google circles etc).\n\x09*\n\x09* Leaderboards entries contain the player's score and optionally, some user-defined\n\x09* data associated with the score. The currently logged in player will also\n\x09* be returned in the social leaderboard.\n\x09*\n\x09* Note: If no friends have played the game, the bestScore, createdAt, updatedAt\n\x09* will contain NULL.\n\x09*\n\x09* Param - leaderboardId The id of the leaderboard to retrieve\n\x09* Param - replaceName If true, the currently logged in player's name will be replaced\n\x09* Param - versionId the version\n\x09* by the string \"You\".\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Method returns the social leaderboard by its version. A player's social leaderboard is\ncomprised of players who are recognized as being your friend.\nFor now, this applies solely to Facebook connected players who are\nfriends with the logged in player (who also must be Facebook connected).\nIn the future this will expand to other identification means (such as\nGame Centre, Google circles etc).\n\nLeaderboards entries contain the player's score and optionally, some user-defined\ndata associated with the score. The currently logged in player will also\nbe returned in the social leaderboard.\n\nNote: If no friends have played the game, the bestScore, createdAt, updatedAt\nwill contain NULL.\n\nParam - leaderboardId The id of the leaderboard to retrieve\nParam - replaceName If true, the currently logged in player's name will be replaced\nParam - versionId the version\nby the string \"You\"." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "GetSocialLeaderboardByVersion", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventGetSocialLeaderboardByVersion_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_ListAllLeaderboards_Statics
	{
		struct BCLeaderboardProxy_eventListAllLeaderboards_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_ListAllLeaderboards_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventListAllLeaderboards_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_ListAllLeaderboards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventListAllLeaderboards_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_ListAllLeaderboards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_ListAllLeaderboards_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_ListAllLeaderboards_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_ListAllLeaderboards_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Retrieve a list of all leaderboards\n\x09*\n\x09* Service Name - leaderboard\n\x09* Service Operation - LIST_ALL_LEADERBOARDS\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Retrieve a list of all leaderboards\n\nService Name - leaderboard\nService Operation - LIST_ALL_LEADERBOARDS" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_ListAllLeaderboards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "ListAllLeaderboards", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventListAllLeaderboards_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_ListAllLeaderboards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_ListAllLeaderboards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_ListAllLeaderboards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_ListAllLeaderboards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_ListAllLeaderboards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_ListAllLeaderboards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_PostScore_Statics
	{
		struct BCLeaderboardProxy_eventPostScore_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			int32 score;
			FString jsonData;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_score;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScore_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScore_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScore_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScore_Parms, leaderboardId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScore_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScore_Parms, score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScore_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScore_Parms, jsonData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScore_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_PostScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScore_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScore_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScore_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScore_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_PostScore_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Post the players score to the given social leaderboard.\n\x09* You can optionally send a user-defined json string of data\n\x09* with the posted score. This string could include information\n\x09* relevant to the posted score.\n\x09*\n\x09* Note that the behaviour of posting a score can be modified in\n\x09* the brainCloud portal. By default, the server will only keep\n\x09* the player's best score.\n\x09*\n\x09* Param - leaderboardId The leaderboard to post to\n\x09* Param - score The score to post\n\x09* Param - data Optional user-defined data to post with the score\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Post the players score to the given social leaderboard.\nYou can optionally send a user-defined json string of data\nwith the posted score. This string could include information\nrelevant to the posted score.\n\nNote that the behaviour of posting a score can be modified in\nthe brainCloud portal. By default, the server will only keep\nthe player's best score.\n\nParam - leaderboardId The leaderboard to post to\nParam - score The score to post\nParam - data Optional user-defined data to post with the score" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "PostScore", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventPostScore_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_PostScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_PostScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_PostScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_PostScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics
	{
		struct BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboard_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			FString groupId;
			int32 score;
			FString jsonData;
			ESocialLeaderboardType leaderboardType;
			ERotationType rotationType;
			FDateTime rotationStart;
			int32 retainedCount;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_score;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_leaderboardType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_leaderboardType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rotationType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_rotationType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotationStart;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_retainedCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboard_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboard_Parms, leaderboardId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboard_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_groupId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboard_Parms, score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboard_Parms, jsonData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_leaderboardType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_leaderboardType = { "leaderboardType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboard_Parms, leaderboardType), Z_Construct_UEnum_BCClientPlugin_ESocialLeaderboardType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_rotationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_rotationType = { "rotationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboard_Parms, rotationType), Z_Construct_UEnum_BCClientPlugin_ERotationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_rotationStart = { "rotationStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboard_Parms, rotationStart), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_retainedCount = { "retainedCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboard_Parms, retainedCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboard_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_leaderboardType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_leaderboardType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_rotationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_rotationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_rotationStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_retainedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09 * @deprecated Please use PostScoreToDynamicGroupLeaderboardUTC instead. Will be removed March 2021\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "@deprecated Please use PostScoreToDynamicGroupLeaderboardUTC instead. Will be removed March 2021" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "PostScoreToDynamicGroupLeaderboard", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboard_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics
	{
		struct BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboardUTC_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			FString groupId;
			int32 score;
			FString jsonData;
			ESocialLeaderboardType leaderboardType;
			ERotationType rotationType;
			int64 rotationStart;
			int32 retainedCount;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_score;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_leaderboardType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_leaderboardType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rotationType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_rotationType;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_rotationStart;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_retainedCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboardUTC_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboardUTC_Parms, leaderboardId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboardUTC_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_groupId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboardUTC_Parms, score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboardUTC_Parms, jsonData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_leaderboardType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_leaderboardType = { "leaderboardType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboardUTC_Parms, leaderboardType), Z_Construct_UEnum_BCClientPlugin_ESocialLeaderboardType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_rotationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_rotationType = { "rotationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboardUTC_Parms, rotationType), Z_Construct_UEnum_BCClientPlugin_ERotationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_rotationStart = { "rotationStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboardUTC_Parms, rotationStart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_retainedCount = { "retainedCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboardUTC_Parms, retainedCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboardUTC_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_leaderboardType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_leaderboardType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_rotationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_rotationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_rotationStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_retainedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Post the players score to the given social leaderboard.\n\x09* Pass leaderboard config data to dynamically create if necessary.\n\x09* You can optionally send a user-defined json string of data\n\x09* with the posted score. This string could include information\n\x09* relevant to the posted score.\n\x09*\n\x09* Service Name - SocialLeaderboard\n\x09* Service Operation - PostScoreDynamic\n\x09*\n\x09* Param - leaderboardId The leaderboard to post to\n\x09* Param - in_groupId the groups Id\n\x09* Param - score The score to post\n\x09* Param - data Optional user-defined data to post with the score\n\x09* Param - leaderboardType leaderboard type\n\x09* Param - rotationType Type of rotation\n\x09* Param - rotationStart Date to start rotation calculations (Date is converted to \"dd-mm-yyyy hh:mm\" format)\n\x09* Param - retainedCount How many rotations to keep\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Post the players score to the given social leaderboard.\nPass leaderboard config data to dynamically create if necessary.\nYou can optionally send a user-defined json string of data\nwith the posted score. This string could include information\nrelevant to the posted score.\n\nService Name - SocialLeaderboard\nService Operation - PostScoreDynamic\n\nParam - leaderboardId The leaderboard to post to\nParam - in_groupId the groups Id\nParam - score The score to post\nParam - data Optional user-defined data to post with the score\nParam - leaderboardType leaderboard type\nParam - rotationType Type of rotation\nParam - rotationStart Date to start rotation calculations (Date is converted to \"dd-mm-yyyy hh:mm\" format)\nParam - retainedCount How many rotations to keep" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "PostScoreToDynamicGroupLeaderboardUTC", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventPostScoreToDynamicGroupLeaderboardUTC_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics
	{
		struct BCLeaderboardProxy_eventPostScoreToDynamicLeaderboard_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			int32 score;
			FString jsonData;
			ESocialLeaderboardType leaderboardType;
			ERotationType rotationType;
			FDateTime rotationStart;
			int32 retainedCount;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_score;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_leaderboardType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_leaderboardType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rotationType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_rotationType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotationStart;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_retainedCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboard_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboard_Parms, leaderboardId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboard_Parms, score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboard_Parms, jsonData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_leaderboardType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_leaderboardType = { "leaderboardType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboard_Parms, leaderboardType), Z_Construct_UEnum_BCClientPlugin_ESocialLeaderboardType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_rotationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_rotationType = { "rotationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboard_Parms, rotationType), Z_Construct_UEnum_BCClientPlugin_ERotationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_rotationStart = { "rotationStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboard_Parms, rotationStart), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_retainedCount = { "retainedCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboard_Parms, retainedCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboard_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_leaderboardType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_leaderboardType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_rotationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_rotationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_rotationStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_retainedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09 * @deprecated Please use PostScoreToDynamicLeaderboardUTC instead. Will be removed March 2021\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "@deprecated Please use PostScoreToDynamicLeaderboardUTC instead. Will be removed March 2021" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "PostScoreToDynamicLeaderboard", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboard_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics
	{
		struct BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDays_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			int32 score;
			FString jsonData;
			ESocialLeaderboardType leaderboardType;
			FDateTime rotationStart;
			int32 retainedCount;
			int32 numDaysToRotate;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_score;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_leaderboardType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_leaderboardType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotationStart;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_retainedCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numDaysToRotate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDays_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDays_Parms, leaderboardId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDays_Parms, score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDays_Parms, jsonData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::NewProp_leaderboardType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::NewProp_leaderboardType = { "leaderboardType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDays_Parms, leaderboardType), Z_Construct_UEnum_BCClientPlugin_ESocialLeaderboardType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::NewProp_rotationStart = { "rotationStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDays_Parms, rotationStart), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::NewProp_retainedCount = { "retainedCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDays_Parms, retainedCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::NewProp_numDaysToRotate = { "numDaysToRotate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDays_Parms, numDaysToRotate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDays_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::NewProp_leaderboardType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::NewProp_leaderboardType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::NewProp_rotationStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::NewProp_retainedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::NewProp_numDaysToRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09 * @deprecated Please use PostScoreToDynamicLeaderboardDaysUTC instead. Will be removed March 2021\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "@deprecated Please use PostScoreToDynamicLeaderboardDaysUTC instead. Will be removed March 2021" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "PostScoreToDynamicLeaderboardDays", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDays_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics
	{
		struct BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDaysUTC_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			int32 score;
			FString jsonData;
			ESocialLeaderboardType leaderboardType;
			int64 rotationStart;
			int32 retainedCount;
			int32 numDaysToRotate;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_score;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_leaderboardType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_leaderboardType;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_rotationStart;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_retainedCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numDaysToRotate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDaysUTC_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDaysUTC_Parms, leaderboardId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDaysUTC_Parms, score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDaysUTC_Parms, jsonData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::NewProp_leaderboardType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::NewProp_leaderboardType = { "leaderboardType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDaysUTC_Parms, leaderboardType), Z_Construct_UEnum_BCClientPlugin_ESocialLeaderboardType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::NewProp_rotationStart = { "rotationStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDaysUTC_Parms, rotationStart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::NewProp_retainedCount = { "retainedCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDaysUTC_Parms, retainedCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::NewProp_numDaysToRotate = { "numDaysToRotate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDaysUTC_Parms, numDaysToRotate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDaysUTC_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::NewProp_leaderboardType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::NewProp_leaderboardType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::NewProp_rotationStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::NewProp_retainedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::NewProp_numDaysToRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Post the players score to the given social leaderboard.\n\x09* Pass leaderboard config data to dynamically create if necessary.\n\x09* You can optionally send a user-defined json string of data\n\x09* with the posted score. This string could include information\n\x09* relevant to the posted score.\n\x09*\n\x09* Service Name - SocialLeaderboard\n\x09* Service Operation - PostScoreDynamic\n\x09*\n\x09* Param - leaderboardId The leaderboard to post to\n\x09* Param - score The score to post\n\x09* Param - data Optional user-defined data to post with the score\n\x09* Param - leaderboardType leaderboard type\n\x09* Param - rotationType Type of rotation\n\x09* Param - rotationStart Date to start rotation calculations (Date is converted to \"dd-mm-yyyy hh:mm\" format)\n\x09* Param - retainedCount How many rotations to keep\n\x09* Param - numDaysToRotate How many days between each rotation\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Post the players score to the given social leaderboard.\nPass leaderboard config data to dynamically create if necessary.\nYou can optionally send a user-defined json string of data\nwith the posted score. This string could include information\nrelevant to the posted score.\n\nService Name - SocialLeaderboard\nService Operation - PostScoreDynamic\n\nParam - leaderboardId The leaderboard to post to\nParam - score The score to post\nParam - data Optional user-defined data to post with the score\nParam - leaderboardType leaderboard type\nParam - rotationType Type of rotation\nParam - rotationStart Date to start rotation calculations (Date is converted to \"dd-mm-yyyy hh:mm\" format)\nParam - retainedCount How many rotations to keep\nParam - numDaysToRotate How many days between each rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "PostScoreToDynamicLeaderboardDaysUTC", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardDaysUTC_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics
	{
		struct BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardUTC_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			int32 score;
			FString jsonData;
			ESocialLeaderboardType leaderboardType;
			ERotationType rotationType;
			int64 rotationStart;
			int32 retainedCount;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_score;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_leaderboardType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_leaderboardType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rotationType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_rotationType;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_rotationStart;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_retainedCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardUTC_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardUTC_Parms, leaderboardId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardUTC_Parms, score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardUTC_Parms, jsonData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_leaderboardType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_leaderboardType = { "leaderboardType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardUTC_Parms, leaderboardType), Z_Construct_UEnum_BCClientPlugin_ESocialLeaderboardType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_rotationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_rotationType = { "rotationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardUTC_Parms, rotationType), Z_Construct_UEnum_BCClientPlugin_ERotationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_rotationStart = { "rotationStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardUTC_Parms, rotationStart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_retainedCount = { "retainedCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardUTC_Parms, retainedCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardUTC_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_leaderboardType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_leaderboardType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_rotationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_rotationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_rotationStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_retainedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Post the players score to the given social leaderboard.\n\x09* Pass leaderboard config data to dynamically create if necessary.\n\x09* You can optionally send a user-defined json string of data\n\x09* with the posted score. This string could include information\n\x09* relevant to the posted score.\n\x09*\n\x09* Service Name - SocialLeaderboard\n\x09* Service Operation - PostScoreDynamic\n\x09*\n\x09* Param - leaderboardId The leaderboard to post to\n\x09* Param - score The score to post\n\x09* Param - data Optional user-defined data to post with the score\n\x09* Param - leaderboardType leaderboard type\n\x09* Param - rotationType Type of rotation\n\x09* Param - rotationStart Date to start rotation calculations (Date is converted to \"dd-mm-yyyy hh:mm\" format)\n\x09* Param - retainedCount How many rotations to keep\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Post the players score to the given social leaderboard.\nPass leaderboard config data to dynamically create if necessary.\nYou can optionally send a user-defined json string of data\nwith the posted score. This string could include information\nrelevant to the posted score.\n\nService Name - SocialLeaderboard\nService Operation - PostScoreDynamic\n\nParam - leaderboardId The leaderboard to post to\nParam - score The score to post\nParam - data Optional user-defined data to post with the score\nParam - leaderboardType leaderboard type\nParam - rotationType Type of rotation\nParam - rotationStart Date to start rotation calculations (Date is converted to \"dd-mm-yyyy hh:mm\" format)\nParam - retainedCount How many rotations to keep" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "PostScoreToDynamicLeaderboardUTC", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventPostScoreToDynamicLeaderboardUTC_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics
	{
		struct BCLeaderboardProxy_eventPostScoreToGroupLeaderboard_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			FString groupId;
			int32 score;
			FString jsonOtherData;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonOtherData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonOtherData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToGroupLeaderboard_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToGroupLeaderboard_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_leaderboardId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToGroupLeaderboard_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_groupId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToGroupLeaderboard_Parms, score), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_jsonOtherData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_jsonOtherData = { "jsonOtherData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToGroupLeaderboard_Parms, jsonOtherData), METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_jsonOtherData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_jsonOtherData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventPostScoreToGroupLeaderboard_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_jsonOtherData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Posts score to groups leaderboard - Note the user must be a member of the group\n\x09*\n\x09* Service Name - leaderboard\n\x09* Service Operation - POST_GROUP_SCORE\n\x09*\n\x09* @param in_leaderboardId A collection of leaderboardIds to retrieve scores from\n\x09* @param in_groupId the groups Id\n\x09* @param in_score the score you wish to post\n\x09* @param in_jsonData extra json Data\n\x09* @param in_callback The method to be invoked when the server response is received\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Posts score to groups leaderboard - Note the user must be a member of the group\n\nService Name - leaderboard\nService Operation - POST_GROUP_SCORE\n\n@param in_leaderboardId A collection of leaderboardIds to retrieve scores from\n@param in_groupId the groups Id\n@param in_score the score you wish to post\n@param in_jsonData extra json Data\n@param in_callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "PostScoreToGroupLeaderboard", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventPostScoreToGroupLeaderboard_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics
	{
		struct BCLeaderboardProxy_eventRemoveGroupScore_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			FString groupId;
			int32 score;
			int32 versionId;
			UBCLeaderboardProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_score;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_versionId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventRemoveGroupScore_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventRemoveGroupScore_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::NewProp_leaderboardId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventRemoveGroupScore_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::NewProp_groupId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventRemoveGroupScore_Parms, score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::NewProp_versionId = { "versionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventRemoveGroupScore_Parms, versionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventRemoveGroupScore_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::NewProp_versionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Removes score from group leaderboard\n\x09*\n\x09* Service Name - leaderboard\n\x09* Service Operation - REMOVE_GROUP_SCORE\n\x09*\n\x09* @param in_leaderboardId A collection of leaderboardIds to retrieve scores from\n\x09* @param in_groupId the groups Id\n\x09* @param in_versionId the score you wish to post\n\x09* @param in_callback The method to be invoked when the server response is received\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Removes score from group leaderboard\n\nService Name - leaderboard\nService Operation - REMOVE_GROUP_SCORE\n\n@param in_leaderboardId A collection of leaderboardIds to retrieve scores from\n@param in_groupId the groups Id\n@param in_versionId the score you wish to post\n@param in_callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "RemoveGroupScore", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventRemoveGroupScore_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore_Statics
	{
		struct BCLeaderboardProxy_eventRemovePlayerScore_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString leaderboardId;
			int32 versionId;
			UBCLeaderboardProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventRemovePlayerScore_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore_Statics::NewProp_leaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore_Statics::NewProp_leaderboardId = { "leaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventRemovePlayerScore_Parms, leaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore_Statics::NewProp_leaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore_Statics::NewProp_leaderboardId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore_Statics::NewProp_versionId = { "versionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventRemovePlayerScore_Parms, versionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLeaderboardProxy_eventRemovePlayerScore_Parms, ReturnValue), Z_Construct_UClass_UBCLeaderboardProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore_Statics::NewProp_leaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore_Statics::NewProp_versionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Leaderboard" },
		{ "Comment", "/**\n\x09* Removes a player's score from the leaderboard\n\x09*\n\x09* Service Name - leaderboard\n\x09* Service Operation - REMOVE_PLAYER_SCORE\n\x09*\n\x09* Param - leaderboardId The leaderboard ID\n\x09* Param - versionId The version of the leaderboard\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ToolTip", "Removes a player's score from the leaderboard\n\nService Name - leaderboard\nService Operation - REMOVE_PLAYER_SCORE\n\nParam - leaderboardId The leaderboard ID\nParam - versionId The version of the leaderboard" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLeaderboardProxy, nullptr, "RemovePlayerScore", nullptr, nullptr, sizeof(BCLeaderboardProxy_eventRemovePlayerScore_Parms), Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCLeaderboardProxy_NoRegister()
	{
		return UBCLeaderboardProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCLeaderboardProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCLeaderboardProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCLeaderboardProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardEntryCount, "GetGlobalLeaderboardEntryCount" }, // 1832542832
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPage, "GetGlobalLeaderboardPage" }, // 1190279427
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardPageByVersion, "GetGlobalLeaderboardPageByVersion" }, // 4151786314
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardVersions, "GetGlobalLeaderboardVersions" }, // 3045168485
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardView, "GetGlobalLeaderboardView" }, // 18690000
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_GetGlobalLeaderboardViewByVersion, "GetGlobalLeaderboardViewByVersion" }, // 893034234
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardView, "GetGroupLeaderboardView" }, // 1739404330
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupLeaderboardViewByVersion, "GetGroupLeaderboardViewByVersion" }, // 2186611899
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboard, "GetGroupSocialLeaderboard" }, // 917238087
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_GetGroupSocialLeaderboardByVersion, "GetGroupSocialLeaderboardByVersion" }, // 864640998
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_GetMultiSocialLeaderboard, "GetMultiSocialLeaderboard" }, // 110832109
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScore, "GetPlayerScore" }, // 1271533392
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScores, "GetPlayerScores" }, // 3879557035
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayerScoresFromLeaderboards, "GetPlayerScoresFromLeaderboards" }, // 3554908131
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboard, "GetPlayersSocialLeaderboard" }, // 3693662500
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_GetPlayersSocialLeaderboardByVersion, "GetPlayersSocialLeaderboardByVersion" }, // 3834356785
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboard, "GetSocialLeaderboard" }, // 887923812
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_GetSocialLeaderboardByVersion, "GetSocialLeaderboardByVersion" }, // 1188998505
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_ListAllLeaderboards, "ListAllLeaderboards" }, // 772098643
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_PostScore, "PostScore" }, // 29275755
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboard, "PostScoreToDynamicGroupLeaderboard" }, // 1323603544
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicGroupLeaderboardUTC, "PostScoreToDynamicGroupLeaderboardUTC" }, // 3583249994
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboard, "PostScoreToDynamicLeaderboard" }, // 2627061859
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDays, "PostScoreToDynamicLeaderboardDays" }, // 1822090107
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardDaysUTC, "PostScoreToDynamicLeaderboardDaysUTC" }, // 2582033731
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToDynamicLeaderboardUTC, "PostScoreToDynamicLeaderboardUTC" }, // 3084609265
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_PostScoreToGroupLeaderboard, "PostScoreToGroupLeaderboard" }, // 535461759
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_RemoveGroupScore, "RemoveGroupScore" }, // 258623850
		{ &Z_Construct_UFunction_UBCLeaderboardProxy_RemovePlayerScore, "RemovePlayerScore" }, // 1098375904
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCLeaderboardProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLeaderboardProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCLeaderboardProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCLeaderboardProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCLeaderboardProxy_Statics::ClassParams = {
		&UBCLeaderboardProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCLeaderboardProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCLeaderboardProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCLeaderboardProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCLeaderboardProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCLeaderboardProxy, 3732824725);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCLeaderboardProxy>()
	{
		return UBCLeaderboardProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCLeaderboardProxy(Z_Construct_UClass_UBCLeaderboardProxy, &UBCLeaderboardProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCLeaderboardProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCLeaderboardProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
