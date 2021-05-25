// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BCCLIENTPLUGIN_BCPlatform_generated_h
#error "BCPlatform.generated.h already included, missing '#pragma once' in BCPlatform.h"
#endif
#define BCCLIENTPLUGIN_BCPlatform_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCPlatform_h


#define FOREACH_ENUM_EBCPLATFORM(op) \
	op(EBCPlatform::GOOGLE_PLAY_ANDROID) \
	op(EBCPlatform::AMAZON_ANDROID) \
	op(EBCPlatform::BLACKBERRY) \
	op(EBCPlatform::FACEBOOK) \
	op(EBCPlatform::OCULUS) \
	op(EBCPlatform::PLAYSTATIONNETWORK) \
	op(EBCPlatform::IOS) \
	op(EBCPlatform::LINUX_PLATFORM) \
	op(EBCPlatform::MAC) \
	op(EBCPlatform::WEB) \
	op(EBCPlatform::WINDOWS) \
	op(EBCPlatform::WINDOWS_PHONE) \
	op(EBCPlatform::XBOX_360) \
	op(EBCPlatform::PS3) \
	op(EBCPlatform::XBOX_ONE) \
	op(EBCPlatform::PS4) \
	op(EBCPlatform::WATCH_OS) \
	op(EBCPlatform::WII) \
	op(EBCPlatform::PS_VITA) \
	op(EBCPlatform::TIZEN) \
	op(EBCPlatform::ROKU) \
	op(EBCPlatform::UNKNOWN) 

enum class EBCPlatform : uint8;
template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<EBCPlatform>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
