// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBrainCloudWrapper;
class UBCUserItemsProxy;
#ifdef BCCLIENTPLUGIN_BCUserItemsProxy_generated_h
#error "BCUserItemsProxy.generated.h already included, missing '#pragma once' in BCUserItemsProxy.h"
#endif
#define BCCLIENTPLUGIN_BCUserItemsProxy_generated_h

#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_12_SPARSE_DATA
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveUserItemFromBlockchain); \
	DECLARE_FUNCTION(execRefreshBlockchainUserItems); \
	DECLARE_FUNCTION(execPublishUserItemToBlockchain); \
	DECLARE_FUNCTION(execUseUserItem); \
	DECLARE_FUNCTION(execUpdateUserItemData); \
	DECLARE_FUNCTION(execSellUserItem); \
	DECLARE_FUNCTION(execReceiveUserItemFrom); \
	DECLARE_FUNCTION(execPurchaseUserItem); \
	DECLARE_FUNCTION(execGiveUserItemTo); \
	DECLARE_FUNCTION(execGetUserItem); \
	DECLARE_FUNCTION(execGetUserItemsPageOffset); \
	DECLARE_FUNCTION(execGetUserItemsPage); \
	DECLARE_FUNCTION(execDropUserItem); \
	DECLARE_FUNCTION(execAwardUserItem);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveUserItemFromBlockchain); \
	DECLARE_FUNCTION(execRefreshBlockchainUserItems); \
	DECLARE_FUNCTION(execPublishUserItemToBlockchain); \
	DECLARE_FUNCTION(execUseUserItem); \
	DECLARE_FUNCTION(execUpdateUserItemData); \
	DECLARE_FUNCTION(execSellUserItem); \
	DECLARE_FUNCTION(execReceiveUserItemFrom); \
	DECLARE_FUNCTION(execPurchaseUserItem); \
	DECLARE_FUNCTION(execGiveUserItemTo); \
	DECLARE_FUNCTION(execGetUserItem); \
	DECLARE_FUNCTION(execGetUserItemsPageOffset); \
	DECLARE_FUNCTION(execGetUserItemsPage); \
	DECLARE_FUNCTION(execDropUserItem); \
	DECLARE_FUNCTION(execAwardUserItem);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBCUserItemsProxy(); \
	friend struct Z_Construct_UClass_UBCUserItemsProxy_Statics; \
public: \
	DECLARE_CLASS(UBCUserItemsProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCUserItemsProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBCUserItemsProxy(); \
	friend struct Z_Construct_UClass_UBCUserItemsProxy_Statics; \
public: \
	DECLARE_CLASS(UBCUserItemsProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCUserItemsProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BCCLIENTPLUGIN_API UBCUserItemsProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCUserItemsProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCUserItemsProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCUserItemsProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCUserItemsProxy(UBCUserItemsProxy&&); \
	BCCLIENTPLUGIN_API UBCUserItemsProxy(const UBCUserItemsProxy&); \
public:


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCUserItemsProxy(UBCUserItemsProxy&&); \
	BCCLIENTPLUGIN_API UBCUserItemsProxy(const UBCUserItemsProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCUserItemsProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCUserItemsProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCUserItemsProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_12_PRIVATE_PROPERTY_OFFSET
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_9_PROLOG
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_12_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_12_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_12_RPC_WRAPPERS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_12_INCLASS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_12_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_12_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_12_INCLASS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCCLIENTPLUGIN_API UClass* StaticClass<class UBCUserItemsProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCUserItemsProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
