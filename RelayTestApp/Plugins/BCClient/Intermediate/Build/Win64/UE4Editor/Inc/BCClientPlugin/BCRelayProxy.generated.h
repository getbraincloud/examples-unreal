// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBrainCloudWrapper;
enum class BCRelayConnectionType : uint8;
class UBCRelayProxy;
#ifdef BCCLIENTPLUGIN_BCRelayProxy_generated_h
#error "BCRelayProxy.generated.h already included, missing '#pragma once' in BCRelayProxy.h"
#endif
#define BCCLIENTPLUGIN_BCRelayProxy_generated_h

#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_12_SPARSE_DATA
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBCStringToBytes); \
	DECLARE_FUNCTION(execBCBytesToString); \
	DECLARE_FUNCTION(execSetPingInterval); \
	DECLARE_FUNCTION(execSend); \
	DECLARE_FUNCTION(execDeregisterDataCallback); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execGetNetIdForProfileId); \
	DECLARE_FUNCTION(execGetProfileIdForNetId); \
	DECLARE_FUNCTION(execNetId); \
	DECLARE_FUNCTION(execPing);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBCStringToBytes); \
	DECLARE_FUNCTION(execBCBytesToString); \
	DECLARE_FUNCTION(execSetPingInterval); \
	DECLARE_FUNCTION(execSend); \
	DECLARE_FUNCTION(execDeregisterDataCallback); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execGetNetIdForProfileId); \
	DECLARE_FUNCTION(execGetProfileIdForNetId); \
	DECLARE_FUNCTION(execNetId); \
	DECLARE_FUNCTION(execPing);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBCRelayProxy(); \
	friend struct Z_Construct_UClass_UBCRelayProxy_Statics; \
public: \
	DECLARE_CLASS(UBCRelayProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCRelayProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBCRelayProxy(); \
	friend struct Z_Construct_UClass_UBCRelayProxy_Statics; \
public: \
	DECLARE_CLASS(UBCRelayProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCRelayProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BCCLIENTPLUGIN_API UBCRelayProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCRelayProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCRelayProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCRelayProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCRelayProxy(UBCRelayProxy&&); \
	BCCLIENTPLUGIN_API UBCRelayProxy(const UBCRelayProxy&); \
public:


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCRelayProxy(UBCRelayProxy&&); \
	BCCLIENTPLUGIN_API UBCRelayProxy(const UBCRelayProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCRelayProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCRelayProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCRelayProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_12_PRIVATE_PROPERTY_OFFSET
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_9_PROLOG
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_12_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_12_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_12_RPC_WRAPPERS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_12_INCLASS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_12_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_12_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_12_INCLASS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCCLIENTPLUGIN_API UClass* StaticClass<class UBCRelayProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCRelayProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
