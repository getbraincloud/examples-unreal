// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBrainCloudWrapper;
class UBCFriendProxy;
enum class EFriendPlatform : uint8;
enum class EBCAuthType : uint8;
#ifdef BCCLIENTPLUGIN_BCFriendProxy_generated_h
#error "BCFriendProxy.generated.h already included, missing '#pragma once' in BCFriendProxy.h"
#endif
#define BCCLIENTPLUGIN_BCFriendProxy_generated_h

#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_12_SPARSE_DATA
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReadFriendUserState); \
	DECLARE_FUNCTION(execGetUsersOnlineStatus); \
	DECLARE_FUNCTION(execRemoveFriends); \
	DECLARE_FUNCTION(execAddFriends); \
	DECLARE_FUNCTION(execGetMySocialInfo); \
	DECLARE_FUNCTION(execListFriends); \
	DECLARE_FUNCTION(execFindUsersByUniversalIdStartingWith); \
	DECLARE_FUNCTION(execFindUsersByNameStartingWith); \
	DECLARE_FUNCTION(execFindUserByExactUniversalId); \
	DECLARE_FUNCTION(execFindUsersBySubstrName); \
	DECLARE_FUNCTION(execFindUsersByExactName); \
	DECLARE_FUNCTION(execReadFriendsEntities); \
	DECLARE_FUNCTION(execReadFriendEntity); \
	DECLARE_FUNCTION(execGetSummaryDataForProfileId); \
	DECLARE_FUNCTION(execGetExternalIdForProfileId); \
	DECLARE_FUNCTION(execGetProfileInfoForExternalAuthId); \
	DECLARE_FUNCTION(execGetProfileInfoForCredential);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReadFriendUserState); \
	DECLARE_FUNCTION(execGetUsersOnlineStatus); \
	DECLARE_FUNCTION(execRemoveFriends); \
	DECLARE_FUNCTION(execAddFriends); \
	DECLARE_FUNCTION(execGetMySocialInfo); \
	DECLARE_FUNCTION(execListFriends); \
	DECLARE_FUNCTION(execFindUsersByUniversalIdStartingWith); \
	DECLARE_FUNCTION(execFindUsersByNameStartingWith); \
	DECLARE_FUNCTION(execFindUserByExactUniversalId); \
	DECLARE_FUNCTION(execFindUsersBySubstrName); \
	DECLARE_FUNCTION(execFindUsersByExactName); \
	DECLARE_FUNCTION(execReadFriendsEntities); \
	DECLARE_FUNCTION(execReadFriendEntity); \
	DECLARE_FUNCTION(execGetSummaryDataForProfileId); \
	DECLARE_FUNCTION(execGetExternalIdForProfileId); \
	DECLARE_FUNCTION(execGetProfileInfoForExternalAuthId); \
	DECLARE_FUNCTION(execGetProfileInfoForCredential);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBCFriendProxy(); \
	friend struct Z_Construct_UClass_UBCFriendProxy_Statics; \
public: \
	DECLARE_CLASS(UBCFriendProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCFriendProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBCFriendProxy(); \
	friend struct Z_Construct_UClass_UBCFriendProxy_Statics; \
public: \
	DECLARE_CLASS(UBCFriendProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCFriendProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BCCLIENTPLUGIN_API UBCFriendProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCFriendProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCFriendProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCFriendProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCFriendProxy(UBCFriendProxy&&); \
	BCCLIENTPLUGIN_API UBCFriendProxy(const UBCFriendProxy&); \
public:


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCFriendProxy(UBCFriendProxy&&); \
	BCCLIENTPLUGIN_API UBCFriendProxy(const UBCFriendProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCFriendProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCFriendProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCFriendProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_12_PRIVATE_PROPERTY_OFFSET
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_9_PROLOG
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_12_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_12_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_12_RPC_WRAPPERS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_12_INCLASS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_12_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_12_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_12_INCLASS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCCLIENTPLUGIN_API UClass* StaticClass<class UBCFriendProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCFriendProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
