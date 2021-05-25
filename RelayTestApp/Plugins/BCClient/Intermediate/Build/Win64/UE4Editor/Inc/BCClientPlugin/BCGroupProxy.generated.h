// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBrainCloudWrapper;
class UBCGroupProxy;
enum class ERole : uint8;
class UBrainCloudGroupACL;
enum class EAutoJoinStrategy : uint8;
#ifdef BCCLIENTPLUGIN_BCGroupProxy_generated_h
#error "BCGroupProxy.generated.h already included, missing '#pragma once' in BCGroupProxy.h"
#endif
#define BCCLIENTPLUGIN_BCGroupProxy_generated_h

#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_14_SPARSE_DATA
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRandomGroupsMatching); \
	DECLARE_FUNCTION(execUpdateGroupSummaryData); \
	DECLARE_FUNCTION(execSetGroupOpen); \
	DECLARE_FUNCTION(execUpdateGroupName); \
	DECLARE_FUNCTION(execUpdateGroupMember); \
	DECLARE_FUNCTION(execUpdateGroupEntityData); \
	DECLARE_FUNCTION(execUpdateGroupData); \
	DECLARE_FUNCTION(execRemoveGroupMember); \
	DECLARE_FUNCTION(execRejectGroupJoinRequest); \
	DECLARE_FUNCTION(execRejectGroupInvitation); \
	DECLARE_FUNCTION(execReadGroupMembers); \
	DECLARE_FUNCTION(execReadGroupEntity); \
	DECLARE_FUNCTION(execReadGroupEntitiesPageByOffset); \
	DECLARE_FUNCTION(execReadGroupEntitiesPage); \
	DECLARE_FUNCTION(execReadGroupData); \
	DECLARE_FUNCTION(execReadGroup); \
	DECLARE_FUNCTION(execListGroupsWithMember); \
	DECLARE_FUNCTION(execListGroupsPageByOffset); \
	DECLARE_FUNCTION(execListGroupsPage); \
	DECLARE_FUNCTION(execLeaveGroup); \
	DECLARE_FUNCTION(execJoinGroup); \
	DECLARE_FUNCTION(execInviteGroupMember); \
	DECLARE_FUNCTION(execIncrementGroupEntityData); \
	DECLARE_FUNCTION(execIncrementGroupData); \
	DECLARE_FUNCTION(execGetMyGroups); \
	DECLARE_FUNCTION(execDeleteGroupEntity); \
	DECLARE_FUNCTION(execDeleteGroup); \
	DECLARE_FUNCTION(execCreateGroupEntity); \
	DECLARE_FUNCTION(execCreateGroupWithSummaryData); \
	DECLARE_FUNCTION(execCreateGroup); \
	DECLARE_FUNCTION(execCancelGroupInvitation); \
	DECLARE_FUNCTION(execAutoJoinGroupMulti); \
	DECLARE_FUNCTION(execAutoJoinGroup); \
	DECLARE_FUNCTION(execApproveGroupJoinRequest); \
	DECLARE_FUNCTION(execAddGroupMember); \
	DECLARE_FUNCTION(execAcceptGroupInvitation);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRandomGroupsMatching); \
	DECLARE_FUNCTION(execUpdateGroupSummaryData); \
	DECLARE_FUNCTION(execSetGroupOpen); \
	DECLARE_FUNCTION(execUpdateGroupName); \
	DECLARE_FUNCTION(execUpdateGroupMember); \
	DECLARE_FUNCTION(execUpdateGroupEntityData); \
	DECLARE_FUNCTION(execUpdateGroupData); \
	DECLARE_FUNCTION(execRemoveGroupMember); \
	DECLARE_FUNCTION(execRejectGroupJoinRequest); \
	DECLARE_FUNCTION(execRejectGroupInvitation); \
	DECLARE_FUNCTION(execReadGroupMembers); \
	DECLARE_FUNCTION(execReadGroupEntity); \
	DECLARE_FUNCTION(execReadGroupEntitiesPageByOffset); \
	DECLARE_FUNCTION(execReadGroupEntitiesPage); \
	DECLARE_FUNCTION(execReadGroupData); \
	DECLARE_FUNCTION(execReadGroup); \
	DECLARE_FUNCTION(execListGroupsWithMember); \
	DECLARE_FUNCTION(execListGroupsPageByOffset); \
	DECLARE_FUNCTION(execListGroupsPage); \
	DECLARE_FUNCTION(execLeaveGroup); \
	DECLARE_FUNCTION(execJoinGroup); \
	DECLARE_FUNCTION(execInviteGroupMember); \
	DECLARE_FUNCTION(execIncrementGroupEntityData); \
	DECLARE_FUNCTION(execIncrementGroupData); \
	DECLARE_FUNCTION(execGetMyGroups); \
	DECLARE_FUNCTION(execDeleteGroupEntity); \
	DECLARE_FUNCTION(execDeleteGroup); \
	DECLARE_FUNCTION(execCreateGroupEntity); \
	DECLARE_FUNCTION(execCreateGroupWithSummaryData); \
	DECLARE_FUNCTION(execCreateGroup); \
	DECLARE_FUNCTION(execCancelGroupInvitation); \
	DECLARE_FUNCTION(execAutoJoinGroupMulti); \
	DECLARE_FUNCTION(execAutoJoinGroup); \
	DECLARE_FUNCTION(execApproveGroupJoinRequest); \
	DECLARE_FUNCTION(execAddGroupMember); \
	DECLARE_FUNCTION(execAcceptGroupInvitation);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBCGroupProxy(); \
	friend struct Z_Construct_UClass_UBCGroupProxy_Statics; \
public: \
	DECLARE_CLASS(UBCGroupProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCGroupProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUBCGroupProxy(); \
	friend struct Z_Construct_UClass_UBCGroupProxy_Statics; \
public: \
	DECLARE_CLASS(UBCGroupProxy, UBCBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCGroupProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BCCLIENTPLUGIN_API UBCGroupProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCGroupProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCGroupProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCGroupProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCGroupProxy(UBCGroupProxy&&); \
	BCCLIENTPLUGIN_API UBCGroupProxy(const UBCGroupProxy&); \
public:


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCGroupProxy(UBCGroupProxy&&); \
	BCCLIENTPLUGIN_API UBCGroupProxy(const UBCGroupProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCGroupProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCGroupProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCGroupProxy)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_14_PRIVATE_PROPERTY_OFFSET
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_11_PROLOG
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_14_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_14_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_14_RPC_WRAPPERS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_14_INCLASS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_14_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_14_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_14_INCLASS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCCLIENTPLUGIN_API UClass* StaticClass<class UBCGroupProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_BlueprintProxies_BCGroupProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
