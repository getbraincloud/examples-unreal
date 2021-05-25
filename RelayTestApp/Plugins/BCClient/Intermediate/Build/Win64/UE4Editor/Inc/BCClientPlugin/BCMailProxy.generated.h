// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBrainCloudWrapper;
class UBCMailProxy;
#ifdef BCCLIENTPLUGIN_BCMailProxy_generated_h
#error "BCMailProxy.generated.h already included, missing '#pragma once' in BCMailProxy.h"
#endif
#define BCCLIENTPLUGIN_BCMailProxy_generated_h

#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_11_SPARSE_DATA
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendAdvancedEmailByAddress); \
	DECLARE_FUNCTION(execSendAdvancedEmail); \
	DECLARE_FUNCTION(execSendBasicEmail);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendAdvancedEmailByAddress); \
	DECLARE_FUNCTION(execSendAdvancedEmail); \
	DECLARE_FUNCTION(execSendBasicEmail);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBCMailProxy(); \
	friend struct Z_Construct_UClass_UBCMailProxy_Statics; \
public: \
	DECLARE_CLASS(UBCMailProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCMailProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUBCMailProxy(); \
	friend struct Z_Construct_UClass_UBCMailProxy_Statics; \
public: \
	DECLARE_CLASS(UBCMailProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCMailProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BCCLIENTPLUGIN_API UBCMailProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCMailProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCMailProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCMailProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCMailProxy(UBCMailProxy&&); \
	BCCLIENTPLUGIN_API UBCMailProxy(const UBCMailProxy&); \
public:


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCMailProxy(UBCMailProxy&&); \
	BCCLIENTPLUGIN_API UBCMailProxy(const UBCMailProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCMailProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCMailProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCMailProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_11_PRIVATE_PROPERTY_OFFSET
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_8_PROLOG
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_11_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_11_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_11_RPC_WRAPPERS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_11_INCLASS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_11_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_11_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_11_INCLASS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCCLIENTPLUGIN_API UClass* StaticClass<class UBCMailProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCMailProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
