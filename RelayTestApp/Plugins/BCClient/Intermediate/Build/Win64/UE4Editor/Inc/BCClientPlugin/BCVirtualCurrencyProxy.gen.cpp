// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCVirtualCurrencyProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCVirtualCurrencyProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCVirtualCurrencyProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCVirtualCurrencyProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCVirtualCurrencyProxy::execConsumeCurrency)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_currencyType);
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCVirtualCurrencyProxy**)Z_Param__Result=UBCVirtualCurrencyProxy::ConsumeCurrency(Z_Param_brainCloudWrapper,Z_Param_currencyType,Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCVirtualCurrencyProxy::execAwardCurrency)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_currencyType);
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCVirtualCurrencyProxy**)Z_Param__Result=UBCVirtualCurrencyProxy::AwardCurrency(Z_Param_brainCloudWrapper,Z_Param_currencyType,Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCVirtualCurrencyProxy::execResetCurrency)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCVirtualCurrencyProxy**)Z_Param__Result=UBCVirtualCurrencyProxy::ResetCurrency(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCVirtualCurrencyProxy::execGetPeerCurrency)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_vcId);
		P_GET_PROPERTY(FStrProperty,Z_Param_peerCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCVirtualCurrencyProxy**)Z_Param__Result=UBCVirtualCurrencyProxy::GetPeerCurrency(Z_Param_brainCloudWrapper,Z_Param_vcId,Z_Param_peerCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCVirtualCurrencyProxy::execGetParentCurrency)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_vcId);
		P_GET_PROPERTY(FStrProperty,Z_Param_levelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCVirtualCurrencyProxy**)Z_Param__Result=UBCVirtualCurrencyProxy::GetParentCurrency(Z_Param_brainCloudWrapper,Z_Param_vcId,Z_Param_levelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCVirtualCurrencyProxy::execGetCurrency)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_vcId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCVirtualCurrencyProxy**)Z_Param__Result=UBCVirtualCurrencyProxy::GetCurrency(Z_Param_brainCloudWrapper,Z_Param_vcId);
		P_NATIVE_END;
	}
	void UBCVirtualCurrencyProxy::StaticRegisterNativesUBCVirtualCurrencyProxy()
	{
		UClass* Class = UBCVirtualCurrencyProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AwardCurrency", &UBCVirtualCurrencyProxy::execAwardCurrency },
			{ "ConsumeCurrency", &UBCVirtualCurrencyProxy::execConsumeCurrency },
			{ "GetCurrency", &UBCVirtualCurrencyProxy::execGetCurrency },
			{ "GetParentCurrency", &UBCVirtualCurrencyProxy::execGetParentCurrency },
			{ "GetPeerCurrency", &UBCVirtualCurrencyProxy::execGetPeerCurrency },
			{ "ResetCurrency", &UBCVirtualCurrencyProxy::execResetCurrency },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency_Statics
	{
		struct BCVirtualCurrencyProxy_eventAwardCurrency_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString currencyType;
			int32 amount;
			UBCVirtualCurrencyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_currencyType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventAwardCurrency_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency_Statics::NewProp_currencyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency_Statics::NewProp_currencyType = { "currencyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventAwardCurrency_Parms, currencyType), METADATA_PARAMS(Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency_Statics::NewProp_currencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency_Statics::NewProp_currencyType_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventAwardCurrency_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventAwardCurrency_Parms, ReturnValue), Z_Construct_UClass_UBCVirtualCurrencyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency_Statics::NewProp_currencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|VirtualCurrency" },
		{ "Comment", "/**\n\x09  * @warning Method is recommended to be used in Cloud Code only for security\n\x09  *\n\x09  * For security reasons calling this API from the client is not recommended, and is rejected at the server by default. To over-ride, enable the 'Allow Currency Calls from Client\" compatibility setting in the Design Portal.\n\x09  */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCVirtualCurrencyProxy.h" },
		{ "ToolTip", "@warning Method is recommended to be used in Cloud Code only for security\n\nFor security reasons calling this API from the client is not recommended, and is rejected at the server by default. To over-ride, enable the 'Allow Currency Calls from Client\" compatibility setting in the Design Portal." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCVirtualCurrencyProxy, nullptr, "AwardCurrency", nullptr, nullptr, sizeof(BCVirtualCurrencyProxy_eventAwardCurrency_Parms), Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency_Statics
	{
		struct BCVirtualCurrencyProxy_eventConsumeCurrency_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString currencyType;
			int32 amount;
			UBCVirtualCurrencyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_currencyType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventConsumeCurrency_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency_Statics::NewProp_currencyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency_Statics::NewProp_currencyType = { "currencyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventConsumeCurrency_Parms, currencyType), METADATA_PARAMS(Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency_Statics::NewProp_currencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency_Statics::NewProp_currencyType_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventConsumeCurrency_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventConsumeCurrency_Parms, ReturnValue), Z_Construct_UClass_UBCVirtualCurrencyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency_Statics::NewProp_currencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|VirtualCurrency" },
		{ "Comment", "/**\n\x09  * @warning Method is recommended to be used in Cloud Code only for security\n\x09  *\n\x09  * For security reasons calling this API from the client is not recommended, and is rejected at the server by default. To over-ride, enable the 'Allow Currency Calls from Client\" compatibility setting in the Design Portal.\n\x09  */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCVirtualCurrencyProxy.h" },
		{ "ToolTip", "@warning Method is recommended to be used in Cloud Code only for security\n\nFor security reasons calling this API from the client is not recommended, and is rejected at the server by default. To over-ride, enable the 'Allow Currency Calls from Client\" compatibility setting in the Design Portal." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCVirtualCurrencyProxy, nullptr, "ConsumeCurrency", nullptr, nullptr, sizeof(BCVirtualCurrencyProxy_eventConsumeCurrency_Parms), Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetCurrency_Statics
	{
		struct BCVirtualCurrencyProxy_eventGetCurrency_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString vcId;
			UBCVirtualCurrencyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vcId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_vcId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetCurrency_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventGetCurrency_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetCurrency_Statics::NewProp_vcId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetCurrency_Statics::NewProp_vcId = { "vcId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventGetCurrency_Parms, vcId), METADATA_PARAMS(Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetCurrency_Statics::NewProp_vcId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetCurrency_Statics::NewProp_vcId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetCurrency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventGetCurrency_Parms, ReturnValue), Z_Construct_UClass_UBCVirtualCurrencyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetCurrency_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetCurrency_Statics::NewProp_vcId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetCurrency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetCurrency_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|VirtualCurrency" },
		{ "Comment", "/**\n    * Retrieve the user's currency account. Optional parameters: vcId (if retrieving all currencies).\n    *\n    * Service Name - VirtualCurrency\n    * Service Operation - GetCurrency\n    *\n    * @param vcId\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCVirtualCurrencyProxy.h" },
		{ "ToolTip", "Retrieve the user's currency account. Optional parameters: vcId (if retrieving all currencies).\n\nService Name - VirtualCurrency\nService Operation - GetCurrency\n\n@param vcId" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCVirtualCurrencyProxy, nullptr, "GetCurrency", nullptr, nullptr, sizeof(BCVirtualCurrencyProxy_eventGetCurrency_Parms), Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics
	{
		struct BCVirtualCurrencyProxy_eventGetParentCurrency_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString vcId;
			FString levelName;
			UBCVirtualCurrencyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vcId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_vcId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_levelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_levelName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventGetParentCurrency_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::NewProp_vcId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::NewProp_vcId = { "vcId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventGetParentCurrency_Parms, vcId), METADATA_PARAMS(Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::NewProp_vcId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::NewProp_vcId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::NewProp_levelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::NewProp_levelName = { "levelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventGetParentCurrency_Parms, levelName), METADATA_PARAMS(Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::NewProp_levelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::NewProp_levelName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventGetParentCurrency_Parms, ReturnValue), Z_Construct_UClass_UBCVirtualCurrencyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::NewProp_vcId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::NewProp_levelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|VirtualCurrency" },
		{ "Comment", "/**\n    * Retrieve the parent user's currency account. Optional parameters: vcId (if retrieving all currencies).\n    *\n    * Service Name - VirtualCurrency\n    * Service Operation - GetParentCurrency\n    *\n    * @param vcId\n    * @param levelName\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCVirtualCurrencyProxy.h" },
		{ "ToolTip", "Retrieve the parent user's currency account. Optional parameters: vcId (if retrieving all currencies).\n\nService Name - VirtualCurrency\nService Operation - GetParentCurrency\n\n@param vcId\n@param levelName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCVirtualCurrencyProxy, nullptr, "GetParentCurrency", nullptr, nullptr, sizeof(BCVirtualCurrencyProxy_eventGetParentCurrency_Parms), Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics
	{
		struct BCVirtualCurrencyProxy_eventGetPeerCurrency_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString vcId;
			FString peerCode;
			UBCVirtualCurrencyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vcId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_vcId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_peerCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_peerCode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventGetPeerCurrency_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::NewProp_vcId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::NewProp_vcId = { "vcId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventGetPeerCurrency_Parms, vcId), METADATA_PARAMS(Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::NewProp_vcId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::NewProp_vcId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::NewProp_peerCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::NewProp_peerCode = { "peerCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventGetPeerCurrency_Parms, peerCode), METADATA_PARAMS(Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::NewProp_peerCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::NewProp_peerCode_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventGetPeerCurrency_Parms, ReturnValue), Z_Construct_UClass_UBCVirtualCurrencyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::NewProp_vcId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::NewProp_peerCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|VirtualCurrency" },
		{ "Comment", "/**\n    * Retrieve the peer user's currency account. Optional parameters: vcId (if retrieving all currencies).\n    *\n    * Service Name - VirtualCurrency\n    * Service Operation - GetPeerCurrency\n    *\n    * @param vcId\n    * @param peerCode\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCVirtualCurrencyProxy.h" },
		{ "ToolTip", "Retrieve the peer user's currency account. Optional parameters: vcId (if retrieving all currencies).\n\nService Name - VirtualCurrency\nService Operation - GetPeerCurrency\n\n@param vcId\n@param peerCode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCVirtualCurrencyProxy, nullptr, "GetPeerCurrency", nullptr, nullptr, sizeof(BCVirtualCurrencyProxy_eventGetPeerCurrency_Parms), Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCVirtualCurrencyProxy_ResetCurrency_Statics
	{
		struct BCVirtualCurrencyProxy_eventResetCurrency_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCVirtualCurrencyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_ResetCurrency_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventResetCurrency_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_ResetCurrency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCVirtualCurrencyProxy_eventResetCurrency_Parms, ReturnValue), Z_Construct_UClass_UBCVirtualCurrencyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCVirtualCurrencyProxy_ResetCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_ResetCurrency_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCVirtualCurrencyProxy_ResetCurrency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCVirtualCurrencyProxy_ResetCurrency_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|VirtualCurrency" },
		{ "Comment", "/**\n    * Reset the player's currency to 0. \n    *\n    * Service Name - VirtualCurrency\n    * Service Operation - ResetCurrency\n    *\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCVirtualCurrencyProxy.h" },
		{ "ToolTip", "Reset the player's currency to 0.\n\nService Name - VirtualCurrency\nService Operation - ResetCurrency" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCVirtualCurrencyProxy_ResetCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCVirtualCurrencyProxy, nullptr, "ResetCurrency", nullptr, nullptr, sizeof(BCVirtualCurrencyProxy_eventResetCurrency_Parms), Z_Construct_UFunction_UBCVirtualCurrencyProxy_ResetCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCVirtualCurrencyProxy_ResetCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCVirtualCurrencyProxy_ResetCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCVirtualCurrencyProxy_ResetCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCVirtualCurrencyProxy_ResetCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCVirtualCurrencyProxy_ResetCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCVirtualCurrencyProxy_NoRegister()
	{
		return UBCVirtualCurrencyProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCVirtualCurrencyProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCVirtualCurrencyProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCVirtualCurrencyProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCVirtualCurrencyProxy_AwardCurrency, "AwardCurrency" }, // 4186791268
		{ &Z_Construct_UFunction_UBCVirtualCurrencyProxy_ConsumeCurrency, "ConsumeCurrency" }, // 2963515179
		{ &Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetCurrency, "GetCurrency" }, // 4075637773
		{ &Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetParentCurrency, "GetParentCurrency" }, // 4253749229
		{ &Z_Construct_UFunction_UBCVirtualCurrencyProxy_GetPeerCurrency, "GetPeerCurrency" }, // 2517124466
		{ &Z_Construct_UFunction_UBCVirtualCurrencyProxy_ResetCurrency, "ResetCurrency" }, // 3349531426
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCVirtualCurrencyProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCVirtualCurrencyProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCVirtualCurrencyProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCVirtualCurrencyProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCVirtualCurrencyProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCVirtualCurrencyProxy_Statics::ClassParams = {
		&UBCVirtualCurrencyProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCVirtualCurrencyProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCVirtualCurrencyProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCVirtualCurrencyProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCVirtualCurrencyProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCVirtualCurrencyProxy, 1637112022);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCVirtualCurrencyProxy>()
	{
		return UBCVirtualCurrencyProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCVirtualCurrencyProxy(Z_Construct_UClass_UBCVirtualCurrencyProxy, &UBCVirtualCurrencyProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCVirtualCurrencyProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCVirtualCurrencyProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
