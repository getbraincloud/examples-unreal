// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BCCLIENTPLUGIN_BrainCloudGroup_generated_h
#error "BrainCloudGroup.generated.h already included, missing '#pragma once' in BrainCloudGroup.h"
#endif
#define BCCLIENTPLUGIN_BrainCloudGroup_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BrainCloudGroup_h


#define FOREACH_ENUM_EAUTOJOINSTRATEGY(op) \
	op(EAutoJoinStrategy::JoinFirstGroup) \
	op(EAutoJoinStrategy::JoinRandomGroup) 

enum class EAutoJoinStrategy : uint8;
template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<EAutoJoinStrategy>();

#define FOREACH_ENUM_EROLE(op) \
	op(ERole::OWNER) \
	op(ERole::ADMIN) \
	op(ERole::MEMBER) \
	op(ERole::OTHER) 

enum class ERole : uint8;
template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<ERole>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
