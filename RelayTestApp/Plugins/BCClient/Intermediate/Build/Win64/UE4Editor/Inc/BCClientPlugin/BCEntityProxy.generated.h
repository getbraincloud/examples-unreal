// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBrainCloudWrapper;
class UBCEntityProxy;
class UBrainCloudACL;
#ifdef BCCLIENTPLUGIN_BCEntityProxy_generated_h
#error "BCEntityProxy.generated.h already included, missing '#pragma once' in BCEntityProxy.h"
#endif
#define BCCLIENTPLUGIN_BCEntityProxy_generated_h

#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_12_SPARSE_DATA
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSharedEntitiesListForProfileId); \
	DECLARE_FUNCTION(execGetSharedEntitiesForProfileId); \
	DECLARE_FUNCTION(execGetSharedEntityForProfileId); \
	DECLARE_FUNCTION(execIncrementSharedUserEntityData); \
	DECLARE_FUNCTION(execIncrementUserEntityData); \
	DECLARE_FUNCTION(execGetPageOffset); \
	DECLARE_FUNCTION(execGetPage); \
	DECLARE_FUNCTION(execGetListCount); \
	DECLARE_FUNCTION(execGetList); \
	DECLARE_FUNCTION(execUpdateSharedEntity); \
	DECLARE_FUNCTION(execGetEntitiesByType); \
	DECLARE_FUNCTION(execDeleteSingleton); \
	DECLARE_FUNCTION(execDeleteEntity); \
	DECLARE_FUNCTION(execUpdateSingleton); \
	DECLARE_FUNCTION(execGetSingleton); \
	DECLARE_FUNCTION(execGetEntity); \
	DECLARE_FUNCTION(execUpdateEntity); \
	DECLARE_FUNCTION(execCreateEntity);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSharedEntitiesListForProfileId); \
	DECLARE_FUNCTION(execGetSharedEntitiesForProfileId); \
	DECLARE_FUNCTION(execGetSharedEntityForProfileId); \
	DECLARE_FUNCTION(execIncrementSharedUserEntityData); \
	DECLARE_FUNCTION(execIncrementUserEntityData); \
	DECLARE_FUNCTION(execGetPageOffset); \
	DECLARE_FUNCTION(execGetPage); \
	DECLARE_FUNCTION(execGetListCount); \
	DECLARE_FUNCTION(execGetList); \
	DECLARE_FUNCTION(execUpdateSharedEntity); \
	DECLARE_FUNCTION(execGetEntitiesByType); \
	DECLARE_FUNCTION(execDeleteSingleton); \
	DECLARE_FUNCTION(execDeleteEntity); \
	DECLARE_FUNCTION(execUpdateSingleton); \
	DECLARE_FUNCTION(execGetSingleton); \
	DECLARE_FUNCTION(execGetEntity); \
	DECLARE_FUNCTION(execUpdateEntity); \
	DECLARE_FUNCTION(execCreateEntity);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBCEntityProxy(); \
	friend struct Z_Construct_UClass_UBCEntityProxy_Statics; \
public: \
	DECLARE_CLASS(UBCEntityProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCEntityProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBCEntityProxy(); \
	friend struct Z_Construct_UClass_UBCEntityProxy_Statics; \
public: \
	DECLARE_CLASS(UBCEntityProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCEntityProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BCCLIENTPLUGIN_API UBCEntityProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCEntityProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCEntityProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCEntityProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCEntityProxy(UBCEntityProxy&&); \
	BCCLIENTPLUGIN_API UBCEntityProxy(const UBCEntityProxy&); \
public:


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCEntityProxy(UBCEntityProxy&&); \
	BCCLIENTPLUGIN_API UBCEntityProxy(const UBCEntityProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCEntityProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCEntityProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCEntityProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_12_PRIVATE_PROPERTY_OFFSET
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_9_PROLOG
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_12_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_12_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_12_RPC_WRAPPERS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_12_INCLASS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_12_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_12_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_12_INCLASS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCCLIENTPLUGIN_API UClass* StaticClass<class UBCEntityProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCEntityProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
