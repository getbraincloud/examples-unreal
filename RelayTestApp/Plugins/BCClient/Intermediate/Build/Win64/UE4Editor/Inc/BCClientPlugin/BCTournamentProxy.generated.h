// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBrainCloudWrapper;
class UBCTournamentProxy;
enum class ESortOrder : uint8;
struct FDateTime;
#ifdef BCCLIENTPLUGIN_BCTournamentProxy_generated_h
#error "BCTournamentProxy.generated.h already included, missing '#pragma once' in BCTournamentProxy.h"
#endif
#define BCCLIENTPLUGIN_BCTournamentProxy_generated_h

#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_11_SPARSE_DATA
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execViewReward); \
	DECLARE_FUNCTION(execViewCurrentReward); \
	DECLARE_FUNCTION(execPostTournamentScoreWithResultsUTC); \
	DECLARE_FUNCTION(execPostTournamentScoreUTC); \
	DECLARE_FUNCTION(execPostTournamentScoreWithResults); \
	DECLARE_FUNCTION(execPostTournamentScore); \
	DECLARE_FUNCTION(execLeaveTournament); \
	DECLARE_FUNCTION(execJoinTournament); \
	DECLARE_FUNCTION(execLeaveDivisionInstance); \
	DECLARE_FUNCTION(execJoinDivision); \
	DECLARE_FUNCTION(execGetMyDivisions); \
	DECLARE_FUNCTION(execGetDivisionInfo); \
	DECLARE_FUNCTION(execGetTournamentStatus); \
	DECLARE_FUNCTION(execClaimTournamentReward);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execViewReward); \
	DECLARE_FUNCTION(execViewCurrentReward); \
	DECLARE_FUNCTION(execPostTournamentScoreWithResultsUTC); \
	DECLARE_FUNCTION(execPostTournamentScoreUTC); \
	DECLARE_FUNCTION(execPostTournamentScoreWithResults); \
	DECLARE_FUNCTION(execPostTournamentScore); \
	DECLARE_FUNCTION(execLeaveTournament); \
	DECLARE_FUNCTION(execJoinTournament); \
	DECLARE_FUNCTION(execLeaveDivisionInstance); \
	DECLARE_FUNCTION(execJoinDivision); \
	DECLARE_FUNCTION(execGetMyDivisions); \
	DECLARE_FUNCTION(execGetDivisionInfo); \
	DECLARE_FUNCTION(execGetTournamentStatus); \
	DECLARE_FUNCTION(execClaimTournamentReward);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBCTournamentProxy(); \
	friend struct Z_Construct_UClass_UBCTournamentProxy_Statics; \
public: \
	DECLARE_CLASS(UBCTournamentProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCTournamentProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUBCTournamentProxy(); \
	friend struct Z_Construct_UClass_UBCTournamentProxy_Statics; \
public: \
	DECLARE_CLASS(UBCTournamentProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCTournamentProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BCCLIENTPLUGIN_API UBCTournamentProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCTournamentProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCTournamentProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCTournamentProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCTournamentProxy(UBCTournamentProxy&&); \
	BCCLIENTPLUGIN_API UBCTournamentProxy(const UBCTournamentProxy&); \
public:


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCTournamentProxy(UBCTournamentProxy&&); \
	BCCLIENTPLUGIN_API UBCTournamentProxy(const UBCTournamentProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCTournamentProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCTournamentProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCTournamentProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_11_PRIVATE_PROPERTY_OFFSET
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_8_PROLOG
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_11_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_11_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_11_RPC_WRAPPERS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_11_INCLASS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_11_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_11_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_11_INCLASS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCCLIENTPLUGIN_API UClass* StaticClass<class UBCTournamentProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCTournamentProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
