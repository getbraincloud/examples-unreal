// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BCCLIENTPLUGIN_BrainCloudFriend_generated_h
#error "BrainCloudFriend.generated.h already included, missing '#pragma once' in BrainCloudFriend.h"
#endif
#define BCCLIENTPLUGIN_BrainCloudFriend_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BrainCloudFriend_h


#define FOREACH_ENUM_EFRIENDPLATFORM(op) \
	op(EFriendPlatform::ALL) \
	op(EFriendPlatform::BRAINCLOUD) \
	op(EFriendPlatform::FACEBOOK) 

enum class EFriendPlatform : uint8;
template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<EFriendPlatform>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
