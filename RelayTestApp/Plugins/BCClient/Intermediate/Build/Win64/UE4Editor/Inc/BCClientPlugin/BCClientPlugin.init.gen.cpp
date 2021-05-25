// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCClientPlugin_init() {}
	BCCLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudCallbackDelegate__DelegateSignature();
	BCCLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRelayCallbackDelegate__DelegateSignature();
	BCCLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRestCallbackDelegate__DelegateSignature();
	BCCLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRTTCallbackDelegate__DelegateSignature();
	BCCLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnectError__DelegateSignature();
	BCCLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketClosed__DelegateSignature();
	BCCLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnected__DelegateSignature();
	BCCLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketRecieve__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudCallbackDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRelayCallbackDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRestCallbackDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BCClientPlugin_BrainCloudRTTCallbackDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnectError__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketClosed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketConnected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BCClientPlugin_WebSocketRecieve__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/BCClientPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6D39636F,
				0x95EEC0B1,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
