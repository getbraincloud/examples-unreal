// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBC_ReturnData;
#ifdef BCCLIENTPLUGIN_BCBlueprintRestCallProxyBase_generated_h
#error "BCBlueprintRestCallProxyBase.generated.h already included, missing '#pragma once' in BCBlueprintRestCallProxyBase.h"
#endif
#define BCCLIENTPLUGIN_BCBlueprintRestCallProxyBase_generated_h

#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_13_DELEGATE \
struct _Script_BCClientPlugin_eventBrainCloudRestCallbackDelegate_Parms \
{ \
	FString JsonData; \
	FBC_ReturnData AdditionalData; \
}; \
static inline void FBrainCloudRestCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& BrainCloudRestCallbackDelegate, const FString& JsonData, FBC_ReturnData AdditionalData) \
{ \
	_Script_BCClientPlugin_eventBrainCloudRestCallbackDelegate_Parms Parms; \
	Parms.JsonData=JsonData; \
	Parms.AdditionalData=AdditionalData; \
	BrainCloudRestCallbackDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_18_SPARSE_DATA
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_18_RPC_WRAPPERS
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBCBlueprintRestCallProxyBase(); \
	friend struct Z_Construct_UClass_UBCBlueprintRestCallProxyBase_Statics; \
public: \
	DECLARE_CLASS(UBCBlueprintRestCallProxyBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCBlueprintRestCallProxyBase)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUBCBlueprintRestCallProxyBase(); \
	friend struct Z_Construct_UClass_UBCBlueprintRestCallProxyBase_Statics; \
public: \
	DECLARE_CLASS(UBCBlueprintRestCallProxyBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCBlueprintRestCallProxyBase)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BCCLIENTPLUGIN_API UBCBlueprintRestCallProxyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCBlueprintRestCallProxyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCBlueprintRestCallProxyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCBlueprintRestCallProxyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCBlueprintRestCallProxyBase(UBCBlueprintRestCallProxyBase&&); \
	BCCLIENTPLUGIN_API UBCBlueprintRestCallProxyBase(const UBCBlueprintRestCallProxyBase&); \
public:


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCBlueprintRestCallProxyBase(UBCBlueprintRestCallProxyBase&&); \
	BCCLIENTPLUGIN_API UBCBlueprintRestCallProxyBase(const UBCBlueprintRestCallProxyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCBlueprintRestCallProxyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCBlueprintRestCallProxyBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCBlueprintRestCallProxyBase)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_18_PRIVATE_PROPERTY_OFFSET
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_15_PROLOG
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_18_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_18_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_18_RPC_WRAPPERS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_18_INCLASS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_18_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_18_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_18_INCLASS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCCLIENTPLUGIN_API UClass* StaticClass<class UBCBlueprintRestCallProxyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRestCallProxyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
