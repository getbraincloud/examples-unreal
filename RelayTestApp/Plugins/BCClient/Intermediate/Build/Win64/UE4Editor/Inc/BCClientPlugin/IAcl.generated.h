// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BCCLIENTPLUGIN_IAcl_generated_h
#error "IAcl.generated.h already included, missing '#pragma once' in IAcl.h"
#endif
#define BCCLIENTPLUGIN_IAcl_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_IAcl_h


#define FOREACH_ENUM_EACL(op) \
	op(EAcl::NONE) \
	op(EAcl::READ_ONLY) \
	op(EAcl::READ_WRITE) 

enum class EAcl : uint8;
template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<EAcl>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
