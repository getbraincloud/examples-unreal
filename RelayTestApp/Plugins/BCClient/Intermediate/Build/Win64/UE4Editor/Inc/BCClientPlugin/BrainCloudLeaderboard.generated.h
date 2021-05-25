// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BCCLIENTPLUGIN_BrainCloudLeaderboard_generated_h
#error "BrainCloudLeaderboard.generated.h already included, missing '#pragma once' in BrainCloudLeaderboard.h"
#endif
#define BCCLIENTPLUGIN_BrainCloudLeaderboard_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BrainCloudLeaderboard_h


#define FOREACH_ENUM_ESORTORDER(op) \
	op(ESortOrder::HIGH_TO_LOW) \
	op(ESortOrder::LOW_TO_HIGH) 

enum class ESortOrder : uint8;
template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<ESortOrder>();

#define FOREACH_ENUM_EROTATIONTYPE(op) \
	op(ERotationType::NEVER) \
	op(ERotationType::DAILY) \
	op(ERotationType::WEEKLY) \
	op(ERotationType::MONTHLY) \
	op(ERotationType::YEARLY) 

enum class ERotationType : uint8;
template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<ERotationType>();

#define FOREACH_ENUM_ESOCIALLEADERBOARDTYPE(op) \
	op(ESocialLeaderboardType::HIGH_VALUE) \
	op(ESocialLeaderboardType::CUMULATIVE) \
	op(ESocialLeaderboardType::LAST_VALUE) \
	op(ESocialLeaderboardType::LOW_VALUE) 

enum class ESocialLeaderboardType : uint8;
template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<ESocialLeaderboardType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
