// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BCCLIENTPLUGIN_BrainCloudClient_generated_h
#error "BrainCloudClient.generated.h already included, missing '#pragma once' in BrainCloudClient.h"
#endif
#define BCCLIENTPLUGIN_BrainCloudClient_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BrainCloudClient_h


#define FOREACH_ENUM_BCWEBSOCKETSTATUS(op) \
	op(BCWebsocketStatus::OPEN) \
	op(BCWebsocketStatus::CLOSED) \
	op(BCWebsocketStatus::MESSAGE) \
	op(BCWebsocketStatus::SOCKETERROR) \
	op(BCWebsocketStatus::NONE) 

enum class BCWebsocketStatus : uint8;
template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<BCWebsocketStatus>();

#define FOREACH_ENUM_BCRTTCONNECTIONSTATUS(op) \
	op(BCRTTConnectionStatus::CONNECTED) \
	op(BCRTTConnectionStatus::CONNECTING) \
	op(BCRTTConnectionStatus::DISCONNECTED) \
	op(BCRTTConnectionStatus::DISCONNECTING) 

enum class BCRTTConnectionStatus : uint8;
template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<BCRTTConnectionStatus>();

#define FOREACH_ENUM_BCRELAYCONNECTIONTYPE(op) \
	op(BCRelayConnectionType::WEBSOCKET) \
	op(BCRelayConnectionType::TCP) \
	op(BCRelayConnectionType::UDP) 

enum class BCRelayConnectionType : uint8;
template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<BCRelayConnectionType>();

#define FOREACH_ENUM_BCRTTCONNECTIONTYPE(op) \
	op(BCRTTConnectionType::WEBSOCKET) 

enum class BCRTTConnectionType : uint8;
template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<BCRTTConnectionType>();

#define FOREACH_ENUM_EBCUPDATETYPE(op) \
	op(eBCUpdateType::ALL) \
	op(eBCUpdateType::REST) \
	op(eBCUpdateType::RTT) \
	op(eBCUpdateType::RS) 

enum class eBCUpdateType : uint8;
template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<eBCUpdateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
