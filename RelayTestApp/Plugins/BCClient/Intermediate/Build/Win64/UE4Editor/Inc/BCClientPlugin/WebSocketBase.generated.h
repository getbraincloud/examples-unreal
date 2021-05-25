// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BCCLIENTPLUGIN_WebSocketBase_generated_h
#error "WebSocketBase.generated.h already included, missing '#pragma once' in WebSocketBase.h"
#endif
#define BCCLIENTPLUGIN_WebSocketBase_generated_h

#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_34_DELEGATE \
struct _Script_BCClientPlugin_eventWebSocketRecieve_Parms \
{ \
	TArray<uint8> data; \
}; \
static inline void FWebSocketRecieve_DelegateWrapper(const FMulticastScriptDelegate& WebSocketRecieve, const TArray<uint8>& data) \
{ \
	_Script_BCClientPlugin_eventWebSocketRecieve_Parms Parms; \
	Parms.data=data; \
	WebSocketRecieve.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_33_DELEGATE \
static inline void FWebSocketConnected_DelegateWrapper(const FMulticastScriptDelegate& WebSocketConnected) \
{ \
	WebSocketConnected.ProcessMulticastDelegate<UObject>(NULL); \
}


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_32_DELEGATE \
static inline void FWebSocketClosed_DelegateWrapper(const FMulticastScriptDelegate& WebSocketClosed) \
{ \
	WebSocketClosed.ProcessMulticastDelegate<UObject>(NULL); \
}


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_31_DELEGATE \
struct _Script_BCClientPlugin_eventWebSocketConnectError_Parms \
{ \
	FString error; \
}; \
static inline void FWebSocketConnectError_DelegateWrapper(const FMulticastScriptDelegate& WebSocketConnectError, const FString& error) \
{ \
	_Script_BCClientPlugin_eventWebSocketConnectError_Parms Parms; \
	Parms.error=error; \
	WebSocketConnectError.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_116_SPARSE_DATA
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_116_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execSendText);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execSendText);


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebSocketBase(); \
	friend struct Z_Construct_UClass_UWebSocketBase_Statics; \
public: \
	DECLARE_CLASS(UWebSocketBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), NO_API) \
	DECLARE_SERIALIZER(UWebSocketBase)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_116_INCLASS \
private: \
	static void StaticRegisterNativesUWebSocketBase(); \
	friend struct Z_Construct_UClass_UWebSocketBase_Statics; \
public: \
	DECLARE_CLASS(UWebSocketBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BCClientPlugin"), NO_API) \
	DECLARE_SERIALIZER(UWebSocketBase)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_116_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebSocketBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocketBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSocketBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSocketBase(UWebSocketBase&&); \
	NO_API UWebSocketBase(const UWebSocketBase&); \
public:


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_116_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSocketBase(UWebSocketBase&&); \
	NO_API UWebSocketBase(const UWebSocketBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSocketBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebSocketBase)


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_116_PRIVATE_PROPERTY_OFFSET
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_113_PROLOG
#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_116_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_116_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_116_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_116_RPC_WRAPPERS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_116_INCLASS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_116_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_116_PRIVATE_PROPERTY_OFFSET \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_116_SPARSE_DATA \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_116_INCLASS_NO_PURE_DECLS \
	RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BCCLIENTPLUGIN_API UClass* StaticClass<class UWebSocketBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RelayTestApp_Plugins_BCClient_Source_BCClientPlugin_Private_WebSocketBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
