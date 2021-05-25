// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BCCLIENTPLUGIN_BCBlueprintRelayCallProxyBase_generated_h
#error "BCBlueprintRelayCallProxyBase.generated.h already included, missing '#pragma once' in BCBlueprintRelayCallProxyBase.h"
#endif
#define BCCLIENTPLUGIN_BCBlueprintRelayCallProxyBase_generated_h

#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_8_DELEGATE \
struct _Script_BCClientPlugin_eventBrainCloudRelayCallbackDelegate_Parms \
{ \
	TArray<uint8> data; \
}; \
static inline void FBrainCloudRelayCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& BrainCloudRelayCallbackDelegate, TArray<uint8> const& data) \
{ \
	_Script_BCClientPlugin_eventBrainCloudRelayCallbackDelegate_Parms Parms; \
	Parms.data=data; \
	BrainCloudRelayCallbackDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_13_SPARSE_DATA
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_13_RPC_WRAPPERS
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBCBlueprintRelayCallProxyBase(); \
	friend struct Z_Construct_UClass_UBCBlueprintRelayCallProxyBase_Statics; \
public: \
	DECLARE_CLASS(UBCBlueprintRelayCallProxyBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCBlueprintRelayCallProxyBase)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBCBlueprintRelayCallProxyBase(); \
	friend struct Z_Construct_UClass_UBCBlueprintRelayCallProxyBase_Statics; \
public: \
	DECLARE_CLASS(UBCBlueprintRelayCallProxyBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCBlueprintRelayCallProxyBase)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BCCLIENTPLUGIN_API UBCBlueprintRelayCallProxyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCBlueprintRelayCallProxyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCBlueprintRelayCallProxyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCBlueprintRelayCallProxyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCBlueprintRelayCallProxyBase(UBCBlueprintRelayCallProxyBase&&); \
	BCCLIENTPLUGIN_API UBCBlueprintRelayCallProxyBase(const UBCBlueprintRelayCallProxyBase&); \
public:


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCBlueprintRelayCallProxyBase(UBCBlueprintRelayCallProxyBase&&); \
	BCCLIENTPLUGIN_API UBCBlueprintRelayCallProxyBase(const UBCBlueprintRelayCallProxyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCBlueprintRelayCallProxyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCBlueprintRelayCallProxyBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCBlueprintRelayCallProxyBase)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_13_PRIVATE_PROPERTY_OFFSET
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_10_PROLOG
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_13_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_13_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_13_RPC_WRAPPERS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_13_INCLASS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_13_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_13_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_13_INCLASS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCCLIENTPLUGIN_API UClass* StaticClass<class UBCBlueprintRelayCallProxyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintRelayCallProxyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
