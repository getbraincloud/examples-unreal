// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBrainCloudWrapper;
 
#ifdef BCCLIENTPLUGIN_BCClientProxy_generated_h
#error "BCClientProxy.generated.h already included, missing '#pragma once' in BCClientProxy.h"
#endif
#define BCCLIENTPLUGIN_BCClientProxy_generated_h

#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_11_SPARSE_DATA
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverrideLanguageCode); \
	DECLARE_FUNCTION(execOverrideCountryCode); \
	DECLARE_FUNCTION(execInsertEndOfMessageBundleMarker); \
	DECLARE_FUNCTION(execFlushCachedMessages); \
	DECLARE_FUNCTION(execRetryCachedMessages); \
	DECLARE_FUNCTION(execEnableNetworkErrorMessageCaching); \
	DECLARE_FUNCTION(execGetAuthenticationPacketTimeout); \
	DECLARE_FUNCTION(execGetPacketTimeouts); \
	DECLARE_FUNCTION(execGetEventServer); \
	DECLARE_FUNCTION(execGetRTTConnectionId); \
	DECLARE_FUNCTION(execGetProfileId); \
	DECLARE_FUNCTION(execGetBrainCloudClientVersion); \
	DECLARE_FUNCTION(execGetReleasePlatform); \
	DECLARE_FUNCTION(execGetSessionId); \
	DECLARE_FUNCTION(execGetAppId); \
	DECLARE_FUNCTION(execSetErrorCallbackOn202Status); \
	DECLARE_FUNCTION(execSetOldStyleStatusMessageErrorCallback); \
	DECLARE_FUNCTION(execSetUploadLowTransferRateThreshold); \
	DECLARE_FUNCTION(execGetUploadLowTransferRateThreshold); \
	DECLARE_FUNCTION(execSetUploadLowTransferRateTimeout); \
	DECLARE_FUNCTION(execGetUploadLowTransferRateTimeout); \
	DECLARE_FUNCTION(execSetAuthenticationPacketTimeout); \
	DECLARE_FUNCTION(execSetPacketTimeoutsToDefault); \
	DECLARE_FUNCTION(execSetPacketTimeouts); \
	DECLARE_FUNCTION(execSetHeartbeatInterval); \
	DECLARE_FUNCTION(execHeartbeat); \
	DECLARE_FUNCTION(execResetCommunication); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execIsAuthenticated); \
	DECLARE_FUNCTION(execEnableLogging); \
	DECLARE_FUNCTION(execRunCallbacks); \
	DECLARE_FUNCTION(execInitializeIdentity); \
	DECLARE_FUNCTION(execInitializeWithApps); \
	DECLARE_FUNCTION(execInitialize);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverrideLanguageCode); \
	DECLARE_FUNCTION(execOverrideCountryCode); \
	DECLARE_FUNCTION(execInsertEndOfMessageBundleMarker); \
	DECLARE_FUNCTION(execFlushCachedMessages); \
	DECLARE_FUNCTION(execRetryCachedMessages); \
	DECLARE_FUNCTION(execEnableNetworkErrorMessageCaching); \
	DECLARE_FUNCTION(execGetAuthenticationPacketTimeout); \
	DECLARE_FUNCTION(execGetPacketTimeouts); \
	DECLARE_FUNCTION(execGetEventServer); \
	DECLARE_FUNCTION(execGetRTTConnectionId); \
	DECLARE_FUNCTION(execGetProfileId); \
	DECLARE_FUNCTION(execGetBrainCloudClientVersion); \
	DECLARE_FUNCTION(execGetReleasePlatform); \
	DECLARE_FUNCTION(execGetSessionId); \
	DECLARE_FUNCTION(execGetAppId); \
	DECLARE_FUNCTION(execSetErrorCallbackOn202Status); \
	DECLARE_FUNCTION(execSetOldStyleStatusMessageErrorCallback); \
	DECLARE_FUNCTION(execSetUploadLowTransferRateThreshold); \
	DECLARE_FUNCTION(execGetUploadLowTransferRateThreshold); \
	DECLARE_FUNCTION(execSetUploadLowTransferRateTimeout); \
	DECLARE_FUNCTION(execGetUploadLowTransferRateTimeout); \
	DECLARE_FUNCTION(execSetAuthenticationPacketTimeout); \
	DECLARE_FUNCTION(execSetPacketTimeoutsToDefault); \
	DECLARE_FUNCTION(execSetPacketTimeouts); \
	DECLARE_FUNCTION(execSetHeartbeatInterval); \
	DECLARE_FUNCTION(execHeartbeat); \
	DECLARE_FUNCTION(execResetCommunication); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execIsAuthenticated); \
	DECLARE_FUNCTION(execEnableLogging); \
	DECLARE_FUNCTION(execRunCallbacks); \
	DECLARE_FUNCTION(execInitializeIdentity); \
	DECLARE_FUNCTION(execInitializeWithApps); \
	DECLARE_FUNCTION(execInitialize);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBCClientProxy(); \
	friend struct Z_Construct_UClass_UBCClientProxy_Statics; \
public: \
	DECLARE_CLASS(UBCClientProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCClientProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUBCClientProxy(); \
	friend struct Z_Construct_UClass_UBCClientProxy_Statics; \
public: \
	DECLARE_CLASS(UBCClientProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCClientProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BCCLIENTPLUGIN_API UBCClientProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCClientProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCClientProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCClientProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCClientProxy(UBCClientProxy&&); \
	BCCLIENTPLUGIN_API UBCClientProxy(const UBCClientProxy&); \
public:


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCClientProxy(UBCClientProxy&&); \
	BCCLIENTPLUGIN_API UBCClientProxy(const UBCClientProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCClientProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCClientProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCClientProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_11_PRIVATE_PROPERTY_OFFSET
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_8_PROLOG
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_11_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_11_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_11_RPC_WRAPPERS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_11_INCLASS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_11_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_11_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_11_INCLASS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCCLIENTPLUGIN_API UClass* StaticClass<class UBCClientProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCClientProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
