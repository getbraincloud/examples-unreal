// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBrainCloudWrapper;
class UBCAuthenticationProxy;
#ifdef BCCLIENTPLUGIN_BCAuthenticationProxy_generated_h
#error "BCAuthenticationProxy.generated.h already included, missing '#pragma once' in BCAuthenticationProxy.h"
#endif
#define BCCLIENTPLUGIN_BCAuthenticationProxy_generated_h

#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_11_SPARSE_DATA
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetProfileId); \
	DECLARE_FUNCTION(execSetAnonymousId); \
	DECLARE_FUNCTION(execGetProfileId); \
	DECLARE_FUNCTION(execGetAnonymousId); \
	DECLARE_FUNCTION(execResetUniversalIdPasswordAdvancedWithExpiry); \
	DECLARE_FUNCTION(execResetUniversalIdPasswordWithExpiry); \
	DECLARE_FUNCTION(execResetUniversalIdPasswordAdvanced); \
	DECLARE_FUNCTION(execResetUniversalIdPassword); \
	DECLARE_FUNCTION(execResetEmailPasswordAdvancedWithExpiry); \
	DECLARE_FUNCTION(execResetEmailPasswordWithExpiry); \
	DECLARE_FUNCTION(execResetEmailPasswordAdvanced); \
	DECLARE_FUNCTION(execResetEmailPassword); \
	DECLARE_FUNCTION(execAuthenticateExternal); \
	DECLARE_FUNCTION(execAuthenticateSettopHandoff); \
	DECLARE_FUNCTION(execAuthenticateHandoff); \
	DECLARE_FUNCTION(execAuthenticateParse); \
	DECLARE_FUNCTION(execAuthenticateTwitter); \
	DECLARE_FUNCTION(execAuthenticateApple); \
	DECLARE_FUNCTION(execAuthenticateGoogleOpenId); \
	DECLARE_FUNCTION(execAuthenticateGoogle); \
	DECLARE_FUNCTION(execAuthenticateSteam); \
	DECLARE_FUNCTION(execAuthenticateUniversal); \
	DECLARE_FUNCTION(execAuthenticateEmailPassword); \
	DECLARE_FUNCTION(execAuthenticateGameCenter); \
	DECLARE_FUNCTION(execAuthenticatePlaystationNetwork); \
	DECLARE_FUNCTION(execAuthenticateOculus); \
	DECLARE_FUNCTION(execAuthenticateFacebookLimited); \
	DECLARE_FUNCTION(execAuthenticateFacebook); \
	DECLARE_FUNCTION(execAuthenticateAnonymous); \
	DECLARE_FUNCTION(execClearSavedProfileId); \
	DECLARE_FUNCTION(execGenerateAnonymousId); \
	DECLARE_FUNCTION(execInitialize);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetProfileId); \
	DECLARE_FUNCTION(execSetAnonymousId); \
	DECLARE_FUNCTION(execGetProfileId); \
	DECLARE_FUNCTION(execGetAnonymousId); \
	DECLARE_FUNCTION(execResetUniversalIdPasswordAdvancedWithExpiry); \
	DECLARE_FUNCTION(execResetUniversalIdPasswordWithExpiry); \
	DECLARE_FUNCTION(execResetUniversalIdPasswordAdvanced); \
	DECLARE_FUNCTION(execResetUniversalIdPassword); \
	DECLARE_FUNCTION(execResetEmailPasswordAdvancedWithExpiry); \
	DECLARE_FUNCTION(execResetEmailPasswordWithExpiry); \
	DECLARE_FUNCTION(execResetEmailPasswordAdvanced); \
	DECLARE_FUNCTION(execResetEmailPassword); \
	DECLARE_FUNCTION(execAuthenticateExternal); \
	DECLARE_FUNCTION(execAuthenticateSettopHandoff); \
	DECLARE_FUNCTION(execAuthenticateHandoff); \
	DECLARE_FUNCTION(execAuthenticateParse); \
	DECLARE_FUNCTION(execAuthenticateTwitter); \
	DECLARE_FUNCTION(execAuthenticateApple); \
	DECLARE_FUNCTION(execAuthenticateGoogleOpenId); \
	DECLARE_FUNCTION(execAuthenticateGoogle); \
	DECLARE_FUNCTION(execAuthenticateSteam); \
	DECLARE_FUNCTION(execAuthenticateUniversal); \
	DECLARE_FUNCTION(execAuthenticateEmailPassword); \
	DECLARE_FUNCTION(execAuthenticateGameCenter); \
	DECLARE_FUNCTION(execAuthenticatePlaystationNetwork); \
	DECLARE_FUNCTION(execAuthenticateOculus); \
	DECLARE_FUNCTION(execAuthenticateFacebookLimited); \
	DECLARE_FUNCTION(execAuthenticateFacebook); \
	DECLARE_FUNCTION(execAuthenticateAnonymous); \
	DECLARE_FUNCTION(execClearSavedProfileId); \
	DECLARE_FUNCTION(execGenerateAnonymousId); \
	DECLARE_FUNCTION(execInitialize);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBCAuthenticationProxy(); \
	friend struct Z_Construct_UClass_UBCAuthenticationProxy_Statics; \
public: \
	DECLARE_CLASS(UBCAuthenticationProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCAuthenticationProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUBCAuthenticationProxy(); \
	friend struct Z_Construct_UClass_UBCAuthenticationProxy_Statics; \
public: \
	DECLARE_CLASS(UBCAuthenticationProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCAuthenticationProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BCCLIENTPLUGIN_API UBCAuthenticationProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCAuthenticationProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCAuthenticationProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCAuthenticationProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCAuthenticationProxy(UBCAuthenticationProxy&&); \
	BCCLIENTPLUGIN_API UBCAuthenticationProxy(const UBCAuthenticationProxy&); \
public:


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCAuthenticationProxy(UBCAuthenticationProxy&&); \
	BCCLIENTPLUGIN_API UBCAuthenticationProxy(const UBCAuthenticationProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCAuthenticationProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCAuthenticationProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCAuthenticationProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_11_PRIVATE_PROPERTY_OFFSET
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_8_PROLOG
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_11_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_11_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_11_RPC_WRAPPERS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_11_INCLASS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_11_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_11_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_11_INCLASS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCCLIENTPLUGIN_API UClass* StaticClass<class UBCAuthenticationProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCAuthenticationProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
