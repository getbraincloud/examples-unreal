// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBrainCloudWrapper;
enum class ESortOrder : uint8;
class UBCLeaderboardProxy;
enum class ESocialLeaderboardType : uint8;
struct FDateTime;
enum class ERotationType : uint8;
#ifdef BCCLIENTPLUGIN_BCLeaderboardProxy_generated_h
#error "BCLeaderboardProxy.generated.h already included, missing '#pragma once' in BCLeaderboardProxy.h"
#endif
#define BCCLIENTPLUGIN_BCLeaderboardProxy_generated_h

#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_13_SPARSE_DATA
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGroupLeaderboardViewByVersion); \
	DECLARE_FUNCTION(execGetGroupLeaderboardView); \
	DECLARE_FUNCTION(execRemoveGroupScore); \
	DECLARE_FUNCTION(execPostScoreToGroupLeaderboard); \
	DECLARE_FUNCTION(execGetPlayerScoresFromLeaderboards); \
	DECLARE_FUNCTION(execGetPlayerScores); \
	DECLARE_FUNCTION(execGetPlayerScore); \
	DECLARE_FUNCTION(execListAllLeaderboards); \
	DECLARE_FUNCTION(execGetPlayersSocialLeaderboardByVersion); \
	DECLARE_FUNCTION(execGetPlayersSocialLeaderboard); \
	DECLARE_FUNCTION(execGetGroupSocialLeaderboardByVersion); \
	DECLARE_FUNCTION(execGetGroupSocialLeaderboard); \
	DECLARE_FUNCTION(execRemovePlayerScore); \
	DECLARE_FUNCTION(execPostScoreToDynamicLeaderboardDaysUTC); \
	DECLARE_FUNCTION(execPostScoreToDynamicLeaderboardDays); \
	DECLARE_FUNCTION(execPostScoreToDynamicGroupLeaderboardUTC); \
	DECLARE_FUNCTION(execPostScoreToDynamicGroupLeaderboard); \
	DECLARE_FUNCTION(execPostScoreToDynamicLeaderboardUTC); \
	DECLARE_FUNCTION(execPostScoreToDynamicLeaderboard); \
	DECLARE_FUNCTION(execPostScore); \
	DECLARE_FUNCTION(execGetGlobalLeaderboardVersions); \
	DECLARE_FUNCTION(execGetGlobalLeaderboardEntryCount); \
	DECLARE_FUNCTION(execGetGlobalLeaderboardViewByVersion); \
	DECLARE_FUNCTION(execGetGlobalLeaderboardView); \
	DECLARE_FUNCTION(execGetGlobalLeaderboardPageByVersion); \
	DECLARE_FUNCTION(execGetGlobalLeaderboardPage); \
	DECLARE_FUNCTION(execGetMultiSocialLeaderboard); \
	DECLARE_FUNCTION(execGetSocialLeaderboardByVersion); \
	DECLARE_FUNCTION(execGetSocialLeaderboard);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGroupLeaderboardViewByVersion); \
	DECLARE_FUNCTION(execGetGroupLeaderboardView); \
	DECLARE_FUNCTION(execRemoveGroupScore); \
	DECLARE_FUNCTION(execPostScoreToGroupLeaderboard); \
	DECLARE_FUNCTION(execGetPlayerScoresFromLeaderboards); \
	DECLARE_FUNCTION(execGetPlayerScores); \
	DECLARE_FUNCTION(execGetPlayerScore); \
	DECLARE_FUNCTION(execListAllLeaderboards); \
	DECLARE_FUNCTION(execGetPlayersSocialLeaderboardByVersion); \
	DECLARE_FUNCTION(execGetPlayersSocialLeaderboard); \
	DECLARE_FUNCTION(execGetGroupSocialLeaderboardByVersion); \
	DECLARE_FUNCTION(execGetGroupSocialLeaderboard); \
	DECLARE_FUNCTION(execRemovePlayerScore); \
	DECLARE_FUNCTION(execPostScoreToDynamicLeaderboardDaysUTC); \
	DECLARE_FUNCTION(execPostScoreToDynamicLeaderboardDays); \
	DECLARE_FUNCTION(execPostScoreToDynamicGroupLeaderboardUTC); \
	DECLARE_FUNCTION(execPostScoreToDynamicGroupLeaderboard); \
	DECLARE_FUNCTION(execPostScoreToDynamicLeaderboardUTC); \
	DECLARE_FUNCTION(execPostScoreToDynamicLeaderboard); \
	DECLARE_FUNCTION(execPostScore); \
	DECLARE_FUNCTION(execGetGlobalLeaderboardVersions); \
	DECLARE_FUNCTION(execGetGlobalLeaderboardEntryCount); \
	DECLARE_FUNCTION(execGetGlobalLeaderboardViewByVersion); \
	DECLARE_FUNCTION(execGetGlobalLeaderboardView); \
	DECLARE_FUNCTION(execGetGlobalLeaderboardPageByVersion); \
	DECLARE_FUNCTION(execGetGlobalLeaderboardPage); \
	DECLARE_FUNCTION(execGetMultiSocialLeaderboard); \
	DECLARE_FUNCTION(execGetSocialLeaderboardByVersion); \
	DECLARE_FUNCTION(execGetSocialLeaderboard);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBCLeaderboardProxy(); \
	friend struct Z_Construct_UClass_UBCLeaderboardProxy_Statics; \
public: \
	DECLARE_CLASS(UBCLeaderboardProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCLeaderboardProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBCLeaderboardProxy(); \
	friend struct Z_Construct_UClass_UBCLeaderboardProxy_Statics; \
public: \
	DECLARE_CLASS(UBCLeaderboardProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCLeaderboardProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BCCLIENTPLUGIN_API UBCLeaderboardProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCLeaderboardProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCLeaderboardProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCLeaderboardProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCLeaderboardProxy(UBCLeaderboardProxy&&); \
	BCCLIENTPLUGIN_API UBCLeaderboardProxy(const UBCLeaderboardProxy&); \
public:


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCLeaderboardProxy(UBCLeaderboardProxy&&); \
	BCCLIENTPLUGIN_API UBCLeaderboardProxy(const UBCLeaderboardProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCLeaderboardProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCLeaderboardProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCLeaderboardProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_13_PRIVATE_PROPERTY_OFFSET
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_10_PROLOG
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_13_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_13_RPC_WRAPPERS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_13_INCLASS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_13_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_13_INCLASS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCCLIENTPLUGIN_API UClass* StaticClass<class UBCLeaderboardProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCLeaderboardProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
