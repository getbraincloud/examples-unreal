// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCRTTProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCRTTProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRTTProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRTTProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_BCRTTConnectionType();
// End Cross Module References
	DEFINE_FUNCTION(UBCRTTProxy::execDeregisterAllRTTCallbacks)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCRTTProxy::DeregisterAllRTTCallbacks(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRTTProxy::execSetRTTHeartBeatSeconds)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCRTTProxy::SetRTTHeartBeatSeconds(Z_Param_brainCloudWrapper,Z_Param_in_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRTTProxy::execIsRTTEnabled)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBCRTTProxy::IsRTTEnabled(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRTTProxy::execDisableRTT)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCRTTProxy::DisableRTT(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRTTProxy::execEnableRTT)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_ENUM(BCRTTConnectionType,Z_Param_in_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCRTTProxy**)Z_Param__Result=UBCRTTProxy::EnableRTT(Z_Param_brainCloudWrapper,BCRTTConnectionType(Z_Param_in_type));
		P_NATIVE_END;
	}
	void UBCRTTProxy::StaticRegisterNativesUBCRTTProxy()
	{
		UClass* Class = UBCRTTProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeregisterAllRTTCallbacks", &UBCRTTProxy::execDeregisterAllRTTCallbacks },
			{ "DisableRTT", &UBCRTTProxy::execDisableRTT },
			{ "EnableRTT", &UBCRTTProxy::execEnableRTT },
			{ "IsRTTEnabled", &UBCRTTProxy::execIsRTTEnabled },
			{ "SetRTTHeartBeatSeconds", &UBCRTTProxy::execSetRTTHeartBeatSeconds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCRTTProxy_DeregisterAllRTTCallbacks_Statics
	{
		struct BCRTTProxy_eventDeregisterAllRTTCallbacks_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTProxy_DeregisterAllRTTCallbacks_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTProxy_eventDeregisterAllRTTCallbacks_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRTTProxy_DeregisterAllRTTCallbacks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTProxy_DeregisterAllRTTCallbacks_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRTTProxy_DeregisterAllRTTCallbacks_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|RTT" },
		{ "Comment", "/**\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRTTProxy_DeregisterAllRTTCallbacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRTTProxy, nullptr, "DeregisterAllRTTCallbacks", nullptr, nullptr, sizeof(BCRTTProxy_eventDeregisterAllRTTCallbacks_Parms), Z_Construct_UFunction_UBCRTTProxy_DeregisterAllRTTCallbacks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTProxy_DeregisterAllRTTCallbacks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRTTProxy_DeregisterAllRTTCallbacks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTProxy_DeregisterAllRTTCallbacks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRTTProxy_DeregisterAllRTTCallbacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRTTProxy_DeregisterAllRTTCallbacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRTTProxy_DisableRTT_Statics
	{
		struct BCRTTProxy_eventDisableRTT_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTProxy_DisableRTT_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTProxy_eventDisableRTT_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRTTProxy_DisableRTT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTProxy_DisableRTT_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRTTProxy_DisableRTT_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|RTT" },
		{ "Comment", "/*\n\x09* Disables Real Time event for this session.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTProxy.h" },
		{ "ToolTip", "* Disables Real Time event for this session." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRTTProxy_DisableRTT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRTTProxy, nullptr, "DisableRTT", nullptr, nullptr, sizeof(BCRTTProxy_eventDisableRTT_Parms), Z_Construct_UFunction_UBCRTTProxy_DisableRTT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTProxy_DisableRTT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRTTProxy_DisableRTT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTProxy_DisableRTT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRTTProxy_DisableRTT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRTTProxy_DisableRTT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRTTProxy_EnableRTT_Statics
	{
		struct BCRTTProxy_eventEnableRTT_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			BCRTTConnectionType in_type;
			UBCRTTProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_in_type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_in_type;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTProxy_EnableRTT_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTProxy_eventEnableRTT_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCRTTProxy_EnableRTT_Statics::NewProp_in_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCRTTProxy_EnableRTT_Statics::NewProp_in_type = { "in_type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTProxy_eventEnableRTT_Parms, in_type), Z_Construct_UEnum_BCClientPlugin_BCRTTConnectionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTProxy_EnableRTT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTProxy_eventEnableRTT_Parms, ReturnValue), Z_Construct_UClass_UBCRTTProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRTTProxy_EnableRTT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTProxy_EnableRTT_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTProxy_EnableRTT_Statics::NewProp_in_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTProxy_EnableRTT_Statics::NewProp_in_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTProxy_EnableRTT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRTTProxy_EnableRTT_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|RTT" },
		{ "Comment", "/*\n\x09* Enables Real Time event for this session.\n\x09* Real Time events are disabled by default. Usually events\n\x09* need to be polled using GET_EVENTS. By enabling this, events will\n\x09* be received instantly when they happen through a TCP connection to an Event Server.\n\x09*\n\x09* This function will first call requestClientConnection, then connect to the address\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTProxy.h" },
		{ "ToolTip", "* Enables Real Time event for this session.\n* Real Time events are disabled by default. Usually events\n* need to be polled using GET_EVENTS. By enabling this, events will\n* be received instantly when they happen through a TCP connection to an Event Server.\n*\n* This function will first call requestClientConnection, then connect to the address" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRTTProxy_EnableRTT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRTTProxy, nullptr, "EnableRTT", nullptr, nullptr, sizeof(BCRTTProxy_eventEnableRTT_Parms), Z_Construct_UFunction_UBCRTTProxy_EnableRTT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTProxy_EnableRTT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRTTProxy_EnableRTT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTProxy_EnableRTT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRTTProxy_EnableRTT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRTTProxy_EnableRTT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRTTProxy_IsRTTEnabled_Statics
	{
		struct BCRTTProxy_eventIsRTTEnabled_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTProxy_IsRTTEnabled_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTProxy_eventIsRTTEnabled_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCRTTProxy_IsRTTEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BCRTTProxy_eventIsRTTEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCRTTProxy_IsRTTEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCRTTProxy_eventIsRTTEnabled_Parms), &Z_Construct_UFunction_UBCRTTProxy_IsRTTEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRTTProxy_IsRTTEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTProxy_IsRTTEnabled_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTProxy_IsRTTEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRTTProxy_IsRTTEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|RTT" },
		{ "Comment", "/*\n\x09* Disables Real Time event for this session.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTProxy.h" },
		{ "ToolTip", "* Disables Real Time event for this session." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRTTProxy_IsRTTEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRTTProxy, nullptr, "IsRTTEnabled", nullptr, nullptr, sizeof(BCRTTProxy_eventIsRTTEnabled_Parms), Z_Construct_UFunction_UBCRTTProxy_IsRTTEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTProxy_IsRTTEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRTTProxy_IsRTTEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTProxy_IsRTTEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRTTProxy_IsRTTEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRTTProxy_IsRTTEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRTTProxy_SetRTTHeartBeatSeconds_Statics
	{
		struct BCRTTProxy_eventSetRTTHeartBeatSeconds_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 in_value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRTTProxy_SetRTTHeartBeatSeconds_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTProxy_eventSetRTTHeartBeatSeconds_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCRTTProxy_SetRTTHeartBeatSeconds_Statics::NewProp_in_value = { "in_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRTTProxy_eventSetRTTHeartBeatSeconds_Parms, in_value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRTTProxy_SetRTTHeartBeatSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTProxy_SetRTTHeartBeatSeconds_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRTTProxy_SetRTTHeartBeatSeconds_Statics::NewProp_in_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRTTProxy_SetRTTHeartBeatSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|RTT" },
		{ "Comment", "/**\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRTTProxy_SetRTTHeartBeatSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRTTProxy, nullptr, "SetRTTHeartBeatSeconds", nullptr, nullptr, sizeof(BCRTTProxy_eventSetRTTHeartBeatSeconds_Parms), Z_Construct_UFunction_UBCRTTProxy_SetRTTHeartBeatSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTProxy_SetRTTHeartBeatSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRTTProxy_SetRTTHeartBeatSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRTTProxy_SetRTTHeartBeatSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRTTProxy_SetRTTHeartBeatSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRTTProxy_SetRTTHeartBeatSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCRTTProxy_NoRegister()
	{
		return UBCRTTProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCRTTProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCRTTProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCRTTProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCRTTProxy_DeregisterAllRTTCallbacks, "DeregisterAllRTTCallbacks" }, // 3355560068
		{ &Z_Construct_UFunction_UBCRTTProxy_DisableRTT, "DisableRTT" }, // 2662516413
		{ &Z_Construct_UFunction_UBCRTTProxy_EnableRTT, "EnableRTT" }, // 2229914153
		{ &Z_Construct_UFunction_UBCRTTProxy_IsRTTEnabled, "IsRTTEnabled" }, // 583186041
		{ &Z_Construct_UFunction_UBCRTTProxy_SetRTTHeartBeatSeconds, "SetRTTHeartBeatSeconds" }, // 404664985
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCRTTProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCRTTProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRTTProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCRTTProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCRTTProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCRTTProxy_Statics::ClassParams = {
		&UBCRTTProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBCRTTProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCRTTProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCRTTProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCRTTProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCRTTProxy, 410087999);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCRTTProxy>()
	{
		return UBCRTTProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCRTTProxy(Z_Construct_UClass_UBCRTTProxy, &UBCRTTProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCRTTProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCRTTProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
