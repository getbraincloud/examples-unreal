// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BCCLIENTPLUGIN_BCAuthType_generated_h
#error "BCAuthType.generated.h already included, missing '#pragma once' in BCAuthType.h"
#endif
#define BCCLIENTPLUGIN_BCAuthType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCAuthType_h


#define FOREACH_ENUM_EBCAUTHTYPE(op) \
	op(EBCAuthType::Anonymous) \
	op(EBCAuthType::Universal) \
	op(EBCAuthType::Email) \
	op(EBCAuthType::Facebook) \
	op(EBCAuthType::FacebookLimited) \
	op(EBCAuthType::Oculus) \
	op(EBCAuthType::PlaystationNetwork) \
	op(EBCAuthType::GameCenter) \
	op(EBCAuthType::Steam) \
	op(EBCAuthType::Google) \
	op(EBCAuthType::GoogleOpenId) \
	op(EBCAuthType::Apple) \
	op(EBCAuthType::Twitter) \
	op(EBCAuthType::Parse) \
	op(EBCAuthType::Handoff) \
	op(EBCAuthType::SettopHandoff) \
	op(EBCAuthType::External) \
	op(EBCAuthType::Unknown) 

enum class EBCAuthType : uint8;
template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<EBCAuthType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
