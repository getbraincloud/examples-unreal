// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBrainCloudWrapper;
class UBCWrapperProxy;
 
#ifdef BCCLIENTPLUGIN_BCWrapperProxy_generated_h
#error "BCWrapperProxy.generated.h already included, missing '#pragma once' in BCWrapperProxy.h"
#endif
#define BCCLIENTPLUGIN_BCWrapperProxy_generated_h

#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_15_SPARSE_DATA
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStoredAnonymousId); \
	DECLARE_FUNCTION(execSetStoredAnonymousId); \
	DECLARE_FUNCTION(execGetStoredProfileId); \
	DECLARE_FUNCTION(execSetStoredProfileId); \
	DECLARE_FUNCTION(execResetUniversalIdPasswordAdvancedWithExpiry); \
	DECLARE_FUNCTION(execResetUniversalIdPasswordWithExpiry); \
	DECLARE_FUNCTION(execResetUniversalIdPasswordAdvanced); \
	DECLARE_FUNCTION(execResetUniversalIdPassword); \
	DECLARE_FUNCTION(execResetEmailPasswordAdvancedWithExpiry); \
	DECLARE_FUNCTION(execResetEmailPasswordWithExpiry); \
	DECLARE_FUNCTION(execResetEmailPasswordAdvanced); \
	DECLARE_FUNCTION(execResetEmailPassword); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateUniversal); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateTwitter); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateSteam); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateApple); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateGoogleOpenId); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateGoogle); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateGameCenter); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateOculus); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateFacebookLimited); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateFacebook); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateExternal); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateEmailPassword); \
	DECLARE_FUNCTION(execAuthenticateSettopHandoff); \
	DECLARE_FUNCTION(execAuthenticateHandoff); \
	DECLARE_FUNCTION(execAuthenticateUniversal); \
	DECLARE_FUNCTION(execAuthenticateTwitter); \
	DECLARE_FUNCTION(execAuthenticateSteam); \
	DECLARE_FUNCTION(execAuthenticateApple); \
	DECLARE_FUNCTION(execAuthenticateGoogleOpenId); \
	DECLARE_FUNCTION(execAuthenticateGoogle); \
	DECLARE_FUNCTION(execAuthenticateGameCenter); \
	DECLARE_FUNCTION(execAuthenticatePlaystationNetwork); \
	DECLARE_FUNCTION(execAuthenticateOculus); \
	DECLARE_FUNCTION(execAuthenticateFacebookLimited); \
	DECLARE_FUNCTION(execAuthenticateFacebook); \
	DECLARE_FUNCTION(execAuthenticateExternal); \
	DECLARE_FUNCTION(execAuthenticateEmailPassword); \
	DECLARE_FUNCTION(execAuthenticateAnonymous); \
	DECLARE_FUNCTION(execInitializeWithApps); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execSetAlwaysAllowProfileSwitch); \
	DECLARE_FUNCTION(execClearDefaultBrainCloudInstance); \
	DECLARE_FUNCTION(execSetDefaultBrainCloudInstance); \
	DECLARE_FUNCTION(execCreateBrainCloudWrapper);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStoredAnonymousId); \
	DECLARE_FUNCTION(execSetStoredAnonymousId); \
	DECLARE_FUNCTION(execGetStoredProfileId); \
	DECLARE_FUNCTION(execSetStoredProfileId); \
	DECLARE_FUNCTION(execResetUniversalIdPasswordAdvancedWithExpiry); \
	DECLARE_FUNCTION(execResetUniversalIdPasswordWithExpiry); \
	DECLARE_FUNCTION(execResetUniversalIdPasswordAdvanced); \
	DECLARE_FUNCTION(execResetUniversalIdPassword); \
	DECLARE_FUNCTION(execResetEmailPasswordAdvancedWithExpiry); \
	DECLARE_FUNCTION(execResetEmailPasswordWithExpiry); \
	DECLARE_FUNCTION(execResetEmailPasswordAdvanced); \
	DECLARE_FUNCTION(execResetEmailPassword); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateUniversal); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateTwitter); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateSteam); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateApple); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateGoogleOpenId); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateGoogle); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateGameCenter); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateOculus); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateFacebookLimited); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateFacebook); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateExternal); \
	DECLARE_FUNCTION(execSmartSwitchAuthenticateEmailPassword); \
	DECLARE_FUNCTION(execAuthenticateSettopHandoff); \
	DECLARE_FUNCTION(execAuthenticateHandoff); \
	DECLARE_FUNCTION(execAuthenticateUniversal); \
	DECLARE_FUNCTION(execAuthenticateTwitter); \
	DECLARE_FUNCTION(execAuthenticateSteam); \
	DECLARE_FUNCTION(execAuthenticateApple); \
	DECLARE_FUNCTION(execAuthenticateGoogleOpenId); \
	DECLARE_FUNCTION(execAuthenticateGoogle); \
	DECLARE_FUNCTION(execAuthenticateGameCenter); \
	DECLARE_FUNCTION(execAuthenticatePlaystationNetwork); \
	DECLARE_FUNCTION(execAuthenticateOculus); \
	DECLARE_FUNCTION(execAuthenticateFacebookLimited); \
	DECLARE_FUNCTION(execAuthenticateFacebook); \
	DECLARE_FUNCTION(execAuthenticateExternal); \
	DECLARE_FUNCTION(execAuthenticateEmailPassword); \
	DECLARE_FUNCTION(execAuthenticateAnonymous); \
	DECLARE_FUNCTION(execInitializeWithApps); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execSetAlwaysAllowProfileSwitch); \
	DECLARE_FUNCTION(execClearDefaultBrainCloudInstance); \
	DECLARE_FUNCTION(execSetDefaultBrainCloudInstance); \
	DECLARE_FUNCTION(execCreateBrainCloudWrapper);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBCWrapperProxy(); \
	friend struct Z_Construct_UClass_UBCWrapperProxy_Statics; \
public: \
	DECLARE_CLASS(UBCWrapperProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBCWrapperProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBCWrapperProxy(); \
	friend struct Z_Construct_UClass_UBCWrapperProxy_Statics; \
public: \
	DECLARE_CLASS(UBCWrapperProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBCWrapperProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBCWrapperProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCWrapperProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBCWrapperProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCWrapperProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBCWrapperProxy(UBCWrapperProxy&&); \
	NO_API UBCWrapperProxy(const UBCWrapperProxy&); \
public:


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBCWrapperProxy(UBCWrapperProxy&&); \
	NO_API UBCWrapperProxy(const UBCWrapperProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBCWrapperProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCWrapperProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCWrapperProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_15_PRIVATE_PROPERTY_OFFSET
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_12_PROLOG
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_15_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_15_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_15_RPC_WRAPPERS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_15_INCLASS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_15_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_15_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_15_INCLASS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCCLIENTPLUGIN_API UClass* StaticClass<class UBCWrapperProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCWrapperProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
