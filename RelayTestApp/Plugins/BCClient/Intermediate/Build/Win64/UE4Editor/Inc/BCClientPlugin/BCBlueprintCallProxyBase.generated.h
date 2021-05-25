// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBC_ReturnData;
#ifdef BCCLIENTPLUGIN_BCBlueprintCallProxyBase_generated_h
#error "BCBlueprintCallProxyBase.generated.h already included, missing '#pragma once' in BCBlueprintCallProxyBase.h"
#endif
#define BCCLIENTPLUGIN_BCBlueprintCallProxyBase_generated_h

#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBC_ReturnData_Statics; \
	BCCLIENTPLUGIN_API static class UScriptStruct* StaticStruct();


template<> BCCLIENTPLUGIN_API UScriptStruct* StaticStruct<struct FBC_ReturnData>();

#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_36_DELEGATE \
struct _Script_BCClientPlugin_eventBrainCloudCallbackDelegate_Parms \
{ \
	FString JsonData; \
	FBC_ReturnData AdditionalData; \
}; \
static inline void FBrainCloudCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& BrainCloudCallbackDelegate, const FString& JsonData, FBC_ReturnData AdditionalData) \
{ \
	_Script_BCClientPlugin_eventBrainCloudCallbackDelegate_Parms Parms; \
	Parms.JsonData=JsonData; \
	Parms.AdditionalData=AdditionalData; \
	BrainCloudCallbackDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_41_SPARSE_DATA
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_41_RPC_WRAPPERS
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBCBlueprintCallProxyBase(); \
	friend struct Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics; \
public: \
	DECLARE_CLASS(UBCBlueprintCallProxyBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCBlueprintCallProxyBase)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUBCBlueprintCallProxyBase(); \
	friend struct Z_Construct_UClass_UBCBlueprintCallProxyBase_Statics; \
public: \
	DECLARE_CLASS(UBCBlueprintCallProxyBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), BCCLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UBCBlueprintCallProxyBase)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BCCLIENTPLUGIN_API UBCBlueprintCallProxyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCBlueprintCallProxyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCBlueprintCallProxyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCBlueprintCallProxyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCBlueprintCallProxyBase(UBCBlueprintCallProxyBase&&); \
	BCCLIENTPLUGIN_API UBCBlueprintCallProxyBase(const UBCBlueprintCallProxyBase&); \
public:


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BCCLIENTPLUGIN_API UBCBlueprintCallProxyBase(UBCBlueprintCallProxyBase&&); \
	BCCLIENTPLUGIN_API UBCBlueprintCallProxyBase(const UBCBlueprintCallProxyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BCCLIENTPLUGIN_API, UBCBlueprintCallProxyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCBlueprintCallProxyBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBCBlueprintCallProxyBase)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_41_PRIVATE_PROPERTY_OFFSET
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_38_PROLOG
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_41_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_41_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_41_RPC_WRAPPERS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_41_INCLASS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_41_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_41_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_41_INCLASS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCCLIENTPLUGIN_API UClass* StaticClass<class UBCBlueprintCallProxyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Public_BCBlueprintCallProxyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
