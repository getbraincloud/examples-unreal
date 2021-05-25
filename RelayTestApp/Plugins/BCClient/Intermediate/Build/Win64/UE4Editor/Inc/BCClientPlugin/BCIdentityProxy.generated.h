// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBrainCloudWrapper;
class UBCIdentityProxy;
enum class EBCAuthType : uint8;
#ifdef BCCLIENTPLUGIN_BCIdentityProxy_generated_h
#error "BCIdentityProxy.generated.h already included, missing '#pragma once' in BCIdentityProxy.h"
#endif
#define BCCLIENTPLUGIN_BCIdentityProxy_generated_h

#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_12_SPARSE_DATA
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateUniversalIdLogin); \
	DECLARE_FUNCTION(execAttachNonLoginUniversalId); \
	DECLARE_FUNCTION(execGetPeerProfiles); \
	DECLARE_FUNCTION(execDetachPeer); \
	DECLARE_FUNCTION(execAttachPeerProfile); \
	DECLARE_FUNCTION(execDetachParent); \
	DECLARE_FUNCTION(execAttachParentWithIdentity); \
	DECLARE_FUNCTION(execChangeEmailIdentity); \
	DECLARE_FUNCTION(execRefreshIdentity); \
	DECLARE_FUNCTION(execGetExpiredIdentities); \
	DECLARE_FUNCTION(execGetIdentities); \
	DECLARE_FUNCTION(execGetChildProfiles); \
	DECLARE_FUNCTION(execSwitchToParentProfile); \
	DECLARE_FUNCTION(execSwitchToSingletonChildProfile); \
	DECLARE_FUNCTION(execSwitchToChildProfile); \
	DECLARE_FUNCTION(execDetachParseIdentity); \
	DECLARE_FUNCTION(execMergeParseIdentity); \
	DECLARE_FUNCTION(execAttachParseIdentity); \
	DECLARE_FUNCTION(execDetachTwitterIdentity); \
	DECLARE_FUNCTION(execMergeTwitterIdentity); \
	DECLARE_FUNCTION(execAttachTwitterIdentity); \
	DECLARE_FUNCTION(execDetachAppleIdentity); \
	DECLARE_FUNCTION(execMergeAppleIdentity); \
	DECLARE_FUNCTION(execAttachAppleIdentity); \
	DECLARE_FUNCTION(execDetachGoogleOpenIdIdentity); \
	DECLARE_FUNCTION(execMergeGoogleOpenIdIdentity); \
	DECLARE_FUNCTION(execAttachGoogleOpenIdIdentity); \
	DECLARE_FUNCTION(execDetachGoogleIdentity); \
	DECLARE_FUNCTION(execMergeGoogleIdentity); \
	DECLARE_FUNCTION(execAttachGoogleIdentity); \
	DECLARE_FUNCTION(execDetachSteamIdentity); \
	DECLARE_FUNCTION(execMergeSteamIdentity); \
	DECLARE_FUNCTION(execAttachSteamIdentity); \
	DECLARE_FUNCTION(execDetachUniversalIdentity); \
	DECLARE_FUNCTION(execMergeUniversalIdentity); \
	DECLARE_FUNCTION(execAttachUniversalIdentity); \
	DECLARE_FUNCTION(execDetachEmailIdentity); \
	DECLARE_FUNCTION(execMergeEmailIdentity); \
	DECLARE_FUNCTION(execAttachEmailIdentity); \
	DECLARE_FUNCTION(execDetachGameCenterIdentity); \
	DECLARE_FUNCTION(execMergeGameCenterIdentity); \
	DECLARE_FUNCTION(execAttachGameCenterIdentity); \
	DECLARE_FUNCTION(execDetachPlaystationNetworkIdentity); \
	DECLARE_FUNCTION(execMergePlaystationNetworkIdentity); \
	DECLARE_FUNCTION(execAttachPlaystationNetworkIdentity); \
	DECLARE_FUNCTION(execDetachOculusIdentity); \
	DECLARE_FUNCTION(execMergeOculusIdentity); \
	DECLARE_FUNCTION(execAttachOculusIdentity); \
	DECLARE_FUNCTION(execDetachFacebookLimitedIdentity); \
	DECLARE_FUNCTION(execMergeFacebookLimitedIdentity); \
	DECLARE_FUNCTION(execAttachFacebookLimitedIdentity); \
	DECLARE_FUNCTION(execDetachFacebookIdentity); \
	DECLARE_FUNCTION(execMergeFacebookIdentity); \
	DECLARE_FUNCTION(execAttachFacebookIdentity); \
	DECLARE_FUNCTION(execDetachBlockchainIdentity); \
	DECLARE_FUNCTION(execAttachBlockchainIdentity);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateUniversalIdLogin); \
	DECLARE_FUNCTION(execAttachNonLoginUniversalId); \
	DECLARE_FUNCTION(execGetPeerProfiles); \
	DECLARE_FUNCTION(execDetachPeer); \
	DECLARE_FUNCTION(execAttachPeerProfile); \
	DECLARE_FUNCTION(execDetachParent); \
	DECLARE_FUNCTION(execAttachParentWithIdentity); \
	DECLARE_FUNCTION(execChangeEmailIdentity); \
	DECLARE_FUNCTION(execRefreshIdentity); \
	DECLARE_FUNCTION(execGetExpiredIdentities); \
	DECLARE_FUNCTION(execGetIdentities); \
	DECLARE_FUNCTION(execGetChildProfiles); \
	DECLARE_FUNCTION(execSwitchToParentProfile); \
	DECLARE_FUNCTION(execSwitchToSingletonChildProfile); \
	DECLARE_FUNCTION(execSwitchToChildProfile); \
	DECLARE_FUNCTION(execDetachParseIdentity); \
	DECLARE_FUNCTION(execMergeParseIdentity); \
	DECLARE_FUNCTION(execAttachParseIdentity); \
	DECLARE_FUNCTION(execDetachTwitterIdentity); \
	DECLARE_FUNCTION(execMergeTwitterIdentity); \
	DECLARE_FUNCTION(execAttachTwitterIdentity); \
	DECLARE_FUNCTION(execDetachAppleIdentity); \
	DECLARE_FUNCTION(execMergeAppleIdentity); \
	DECLARE_FUNCTION(execAttachAppleIdentity); \
	DECLARE_FUNCTION(execDetachGoogleOpenIdIdentity); \
	DECLARE_FUNCTION(execMergeGoogleOpenIdIdentity); \
	DECLARE_FUNCTION(execAttachGoogleOpenIdIdentity); \
	DECLARE_FUNCTION(execDetachGoogleIdentity); \
	DECLARE_FUNCTION(execMergeGoogleIdentity); \
	DECLARE_FUNCTION(execAttachGoogleIdentity); \
	DECLARE_FUNCTION(execDetachSteamIdentity); \
	DECLARE_FUNCTION(execMergeSteamIdentity); \
	DECLARE_FUNCTION(execAttachSteamIdentity); \
	DECLARE_FUNCTION(execDetachUniversalIdentity); \
	DECLARE_FUNCTION(execMergeUniversalIdentity); \
	DECLARE_FUNCTION(execAttachUniversalIdentity); \
	DECLARE_FUNCTION(execDetachEmailIdentity); \
	DECLARE_FUNCTION(execMergeEmailIdentity); \
	DECLARE_FUNCTION(execAttachEmailIdentity); \
	DECLARE_FUNCTION(execDetachGameCenterIdentity); \
	DECLARE_FUNCTION(execMergeGameCenterIdentity); \
	DECLARE_FUNCTION(execAttachGameCenterIdentity); \
	DECLARE_FUNCTION(execDetachPlaystationNetworkIdentity); \
	DECLARE_FUNCTION(execMergePlaystationNetworkIdentity); \
	DECLARE_FUNCTION(execAttachPlaystationNetworkIdentity); \
	DECLARE_FUNCTION(execDetachOculusIdentity); \
	DECLARE_FUNCTION(execMergeOculusIdentity); \
	DECLARE_FUNCTION(execAttachOculusIdentity); \
	DECLARE_FUNCTION(execDetachFacebookLimitedIdentity); \
	DECLARE_FUNCTION(execMergeFacebookLimitedIdentity); \
	DECLARE_FUNCTION(execAttachFacebookLimitedIdentity); \
	DECLARE_FUNCTION(execDetachFacebookIdentity); \
	DECLARE_FUNCTION(execMergeFacebookIdentity); \
	DECLARE_FUNCTION(execAttachFacebookIdentity); \
	DECLARE_FUNCTION(execDetachBlockchainIdentity); \
	DECLARE_FUNCTION(execAttachBlockchainIdentity);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBCIdentityProxy(); \
	friend struct Z_Construct_UClass_UBCIdentityProxy_Statics; \
public: \
	DECLARE_CLASS(UBCIdentityProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCIdentityProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBCIdentityProxy(); \
	friend struct Z_Construct_UClass_UBCIdentityProxy_Statics; \
public: \
	DECLARE_CLASS(UBCIdentityProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCIdentityProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BCCLIENTPLUGIN_API UBCIdentityProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCIdentityProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCIdentityProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCIdentityProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCIdentityProxy(UBCIdentityProxy&&); \
	BCCLIENTPLUGIN_API UBCIdentityProxy(const UBCIdentityProxy&); \
public:


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCIdentityProxy(UBCIdentityProxy&&); \
	BCCLIENTPLUGIN_API UBCIdentityProxy(const UBCIdentityProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCIdentityProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCIdentityProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCIdentityProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_12_PRIVATE_PROPERTY_OFFSET
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_9_PROLOG
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_12_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_12_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_12_RPC_WRAPPERS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_12_INCLASS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_12_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_12_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_12_INCLASS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCCLIENTPLUGIN_API UClass* StaticClass<class UBCIdentityProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCIdentityProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
