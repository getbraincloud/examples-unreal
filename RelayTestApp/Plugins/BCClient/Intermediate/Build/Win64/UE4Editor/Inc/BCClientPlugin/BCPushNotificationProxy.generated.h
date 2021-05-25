// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBrainCloudWrapper;
class UBCPushNotificationProxy;
enum class EBCPlatform : uint8;
#ifdef BCCLIENTPLUGIN_BCPushNotificationProxy_generated_h
#error "BCPushNotificationProxy.generated.h already included, missing '#pragma once' in BCPushNotificationProxy.h"
#endif
#define BCCLIENTPLUGIN_BCPushNotificationProxy_generated_h

#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_13_SPARSE_DATA
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendNormalizedPushNotificationBatch); \
	DECLARE_FUNCTION(execSendNormalizedPushNotification); \
	DECLARE_FUNCTION(execScheduleRichPushNotificationMinutes); \
	DECLARE_FUNCTION(execScheduleRichPushNotificationUTC); \
	DECLARE_FUNCTION(execScheduleNormalizedPushNotificationMinutes); \
	DECLARE_FUNCTION(execScheduleNormalizedPushNotificationUTC); \
	DECLARE_FUNCTION(execSendRawPushNotificationToGroup); \
	DECLARE_FUNCTION(execSendRawPushNotificationBatch); \
	DECLARE_FUNCTION(execSendRawPushNotification); \
	DECLARE_FUNCTION(execScheduleRawPushNotificationMinutes); \
	DECLARE_FUNCTION(execScheduleRawPushNotificationUTC); \
	DECLARE_FUNCTION(execSendNormalizedPushNotificationToGroup); \
	DECLARE_FUNCTION(execSendTemplatedPushNotificationToGroup); \
	DECLARE_FUNCTION(execSendRichPushNotificationWithParams); \
	DECLARE_FUNCTION(execSendRichPushNotification); \
	DECLARE_FUNCTION(execSendSimplePushNotification); \
	DECLARE_FUNCTION(execRegisterPushNotificationDeviceToken); \
	DECLARE_FUNCTION(execDeregisterPushNotificationDeviceToken); \
	DECLARE_FUNCTION(execDeregisterAllPushNotificationDeviceTokens);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendNormalizedPushNotificationBatch); \
	DECLARE_FUNCTION(execSendNormalizedPushNotification); \
	DECLARE_FUNCTION(execScheduleRichPushNotificationMinutes); \
	DECLARE_FUNCTION(execScheduleRichPushNotificationUTC); \
	DECLARE_FUNCTION(execScheduleNormalizedPushNotificationMinutes); \
	DECLARE_FUNCTION(execScheduleNormalizedPushNotificationUTC); \
	DECLARE_FUNCTION(execSendRawPushNotificationToGroup); \
	DECLARE_FUNCTION(execSendRawPushNotificationBatch); \
	DECLARE_FUNCTION(execSendRawPushNotification); \
	DECLARE_FUNCTION(execScheduleRawPushNotificationMinutes); \
	DECLARE_FUNCTION(execScheduleRawPushNotificationUTC); \
	DECLARE_FUNCTION(execSendNormalizedPushNotificationToGroup); \
	DECLARE_FUNCTION(execSendTemplatedPushNotificationToGroup); \
	DECLARE_FUNCTION(execSendRichPushNotificationWithParams); \
	DECLARE_FUNCTION(execSendRichPushNotification); \
	DECLARE_FUNCTION(execSendSimplePushNotification); \
	DECLARE_FUNCTION(execRegisterPushNotificationDeviceToken); \
	DECLARE_FUNCTION(execDeregisterPushNotificationDeviceToken); \
	DECLARE_FUNCTION(execDeregisterAllPushNotificationDeviceTokens);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBCPushNotificationProxy(); \
	friend struct Z_Construct_UClass_UBCPushNotificationProxy_Statics; \
public: \
	DECLARE_CLASS(UBCPushNotificationProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCPushNotificationProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBCPushNotificationProxy(); \
	friend struct Z_Construct_UClass_UBCPushNotificationProxy_Statics; \
public: \
	DECLARE_CLASS(UBCPushNotificationProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCPushNotificationProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BCCLIENTPLUGIN_API UBCPushNotificationProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCPushNotificationProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCPushNotificationProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCPushNotificationProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCPushNotificationProxy(UBCPushNotificationProxy&&); \
	BCCLIENTPLUGIN_API UBCPushNotificationProxy(const UBCPushNotificationProxy&); \
public:


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCPushNotificationProxy(UBCPushNotificationProxy&&); \
	BCCLIENTPLUGIN_API UBCPushNotificationProxy(const UBCPushNotificationProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCPushNotificationProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCPushNotificationProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCPushNotificationProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_13_PRIVATE_PROPERTY_OFFSET
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_10_PROLOG
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_13_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_13_RPC_WRAPPERS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_13_INCLASS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_13_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_13_INCLASS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCCLIENTPLUGIN_API UClass* StaticClass<class UBCPushNotificationProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCPushNotificationProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
