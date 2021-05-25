// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BCCLIENTPLUGIN_BCBlueprintRTTCallProxyBase_generated_h
#error "BCBlueprintRTTCallProxyBase.generated.h already included, missing '#pragma once' in BCBlueprintRTTCallProxyBase.h"
#endif
#define BCCLIENTPLUGIN_BCBlueprintRTTCallProxyBase_generated_h

#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_8_DELEGATE \
struct _Script_BCClientPlugin_eventBrainCloudRTTCallbackDelegate_Parms \
{ \
	FString JsonData; \
}; \
static inline void FBrainCloudRTTCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& BrainCloudRTTCallbackDelegate, const FString& JsonData) \
{ \
	_Script_BCClientPlugin_eventBrainCloudRTTCallbackDelegate_Parms Parms; \
	Parms.JsonData=JsonData; \
	BrainCloudRTTCallbackDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_13_SPARSE_DATA
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_13_RPC_WRAPPERS
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBCBlueprintRTTCallProxyBase(); \
	friend struct Z_Construct_UClass_UBCBlueprintRTTCallProxyBase_Statics; \
public: \
	DECLARE_CLASS(UBCBlueprintRTTCallProxyBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCBlueprintRTTCallProxyBase)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBCBlueprintRTTCallProxyBase(); \
	friend struct Z_Construct_UClass_UBCBlueprintRTTCallProxyBase_Statics; \
public: \
	DECLARE_CLASS(UBCBlueprintRTTCallProxyBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCBlueprintRTTCallProxyBase)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BCCLIENTPLUGIN_API UBCBlueprintRTTCallProxyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCBlueprintRTTCallProxyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCBlueprintRTTCallProxyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCBlueprintRTTCallProxyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCBlueprintRTTCallProxyBase(UBCBlueprintRTTCallProxyBase&&); \
	BCCLIENTPLUGIN_API UBCBlueprintRTTCallProxyBase(const UBCBlueprintRTTCallProxyBase&); \
public:


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCBlueprintRTTCallProxyBase(UBCBlueprintRTTCallProxyBase&&); \
	BCCLIENTPLUGIN_API UBCBlueprintRTTCallProxyBase(const UBCBlueprintRTTCallProxyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCBlueprintRTTCallProxyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCBlueprintRTTCallProxyBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCBlueprintRTTCallProxyBase)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_13_PRIVATE_PROPERTY_OFFSET
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_10_PROLOG
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_13_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_13_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_13_RPC_WRAPPERS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_13_INCLASS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_13_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_13_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_13_INCLASS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCCLIENTPLUGIN_API UClass* StaticClass<class UBCBlueprintRTTCallProxyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRTTCallProxyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
