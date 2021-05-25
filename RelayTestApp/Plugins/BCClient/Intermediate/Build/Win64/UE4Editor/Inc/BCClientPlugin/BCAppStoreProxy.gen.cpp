// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCAppStoreProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCAppStoreProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCAppStoreProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCAppStoreProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCAppStoreProxy::execFinalizePurchase)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_storeId);
		P_GET_PROPERTY(FStrProperty,Z_Param_transactionId);
		P_GET_PROPERTY(FStrProperty,Z_Param_transactionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAppStoreProxy**)Z_Param__Result=UBCAppStoreProxy::FinalizePurchase(Z_Param_brainCloudWrapper,Z_Param_storeId,Z_Param_transactionId,Z_Param_transactionData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAppStoreProxy::execStartPurchase)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_storeId);
		P_GET_PROPERTY(FStrProperty,Z_Param_purchaseData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAppStoreProxy**)Z_Param__Result=UBCAppStoreProxy::StartPurchase(Z_Param_brainCloudWrapper,Z_Param_storeId,Z_Param_purchaseData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAppStoreProxy::execGetSalesInventoryByCategory)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_storeId);
		P_GET_PROPERTY(FStrProperty,Z_Param_userCurrency);
		P_GET_PROPERTY(FStrProperty,Z_Param_category);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAppStoreProxy**)Z_Param__Result=UBCAppStoreProxy::GetSalesInventoryByCategory(Z_Param_brainCloudWrapper,Z_Param_storeId,Z_Param_userCurrency,Z_Param_category);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAppStoreProxy::execGetSalesInventory)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_storeId);
		P_GET_PROPERTY(FStrProperty,Z_Param_userCurrency);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAppStoreProxy**)Z_Param__Result=UBCAppStoreProxy::GetSalesInventory(Z_Param_brainCloudWrapper,Z_Param_storeId,Z_Param_userCurrency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAppStoreProxy::execGetEligiblePromotions)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAppStoreProxy**)Z_Param__Result=UBCAppStoreProxy::GetEligiblePromotions(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAppStoreProxy::execVerifyPurchase)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_storeId);
		P_GET_PROPERTY(FStrProperty,Z_Param_receiptData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAppStoreProxy**)Z_Param__Result=UBCAppStoreProxy::VerifyPurchase(Z_Param_brainCloudWrapper,Z_Param_storeId,Z_Param_receiptData);
		P_NATIVE_END;
	}
	void UBCAppStoreProxy::StaticRegisterNativesUBCAppStoreProxy()
	{
		UClass* Class = UBCAppStoreProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinalizePurchase", &UBCAppStoreProxy::execFinalizePurchase },
			{ "GetEligiblePromotions", &UBCAppStoreProxy::execGetEligiblePromotions },
			{ "GetSalesInventory", &UBCAppStoreProxy::execGetSalesInventory },
			{ "GetSalesInventoryByCategory", &UBCAppStoreProxy::execGetSalesInventoryByCategory },
			{ "StartPurchase", &UBCAppStoreProxy::execStartPurchase },
			{ "VerifyPurchase", &UBCAppStoreProxy::execVerifyPurchase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics
	{
		struct BCAppStoreProxy_eventFinalizePurchase_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString storeId;
			FString transactionId;
			FString transactionData;
			UBCAppStoreProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_storeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_storeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transactionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_transactionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transactionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_transactionData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventFinalizePurchase_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::NewProp_storeId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::NewProp_storeId = { "storeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventFinalizePurchase_Parms, storeId), METADATA_PARAMS(Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::NewProp_storeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::NewProp_storeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::NewProp_transactionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::NewProp_transactionId = { "transactionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventFinalizePurchase_Parms, transactionId), METADATA_PARAMS(Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::NewProp_transactionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::NewProp_transactionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::NewProp_transactionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::NewProp_transactionData = { "transactionData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventFinalizePurchase_Parms, transactionData), METADATA_PARAMS(Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::NewProp_transactionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::NewProp_transactionData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventFinalizePurchase_Parms, ReturnValue), Z_Construct_UClass_UBCAppStoreProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::NewProp_storeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::NewProp_transactionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::NewProp_transactionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|AppStore" },
		{ "Comment", "/**\n    * Finalize A Two Staged Purchase Transaction\n    *\n    * Service Name - AppStore\n    * Service Operation - FinalizePurchase\n    *\n    * @param storeId The store platform. Valid stores are:\n    * - itunes\n    * - facebook\n    * - appworld\n    * - steam\n    * - windows\n    * - windowsPhone\n    * - googlePlay\n    * @param transactionId the transactionId returned from start Purchase\n    * @param transactionData specific data for purchasing 2 staged purchases\n    * @param in_callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAppStoreProxy.h" },
		{ "ToolTip", "Finalize A Two Staged Purchase Transaction\n\nService Name - AppStore\nService Operation - FinalizePurchase\n\n@param storeId The store platform. Valid stores are:\n- itunes\n- facebook\n- appworld\n- steam\n- windows\n- windowsPhone\n- googlePlay\n@param transactionId the transactionId returned from start Purchase\n@param transactionData specific data for purchasing 2 staged purchases\n@param in_callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAppStoreProxy, nullptr, "FinalizePurchase", nullptr, nullptr, sizeof(BCAppStoreProxy_eventFinalizePurchase_Parms), Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAppStoreProxy_GetEligiblePromotions_Statics
	{
		struct BCAppStoreProxy_eventGetEligiblePromotions_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCAppStoreProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_GetEligiblePromotions_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventGetEligiblePromotions_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_GetEligiblePromotions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventGetEligiblePromotions_Parms, ReturnValue), Z_Construct_UClass_UBCAppStoreProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAppStoreProxy_GetEligiblePromotions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_GetEligiblePromotions_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_GetEligiblePromotions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAppStoreProxy_GetEligiblePromotions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|AppStore" },
		{ "Comment", "/**\n    * Returns the eligible promotions for the player.\n    *\n    * Service Name - AppStore\n    * Service Operation - EligiblePromotions\n    *\n    * @param in_callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAppStoreProxy.h" },
		{ "ToolTip", "Returns the eligible promotions for the player.\n\nService Name - AppStore\nService Operation - EligiblePromotions\n\n@param in_callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAppStoreProxy_GetEligiblePromotions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAppStoreProxy, nullptr, "GetEligiblePromotions", nullptr, nullptr, sizeof(BCAppStoreProxy_eventGetEligiblePromotions_Parms), Z_Construct_UFunction_UBCAppStoreProxy_GetEligiblePromotions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_GetEligiblePromotions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAppStoreProxy_GetEligiblePromotions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_GetEligiblePromotions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAppStoreProxy_GetEligiblePromotions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAppStoreProxy_GetEligiblePromotions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics
	{
		struct BCAppStoreProxy_eventGetSalesInventory_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString storeId;
			FString userCurrency;
			UBCAppStoreProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_storeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_storeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userCurrency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userCurrency;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventGetSalesInventory_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::NewProp_storeId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::NewProp_storeId = { "storeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventGetSalesInventory_Parms, storeId), METADATA_PARAMS(Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::NewProp_storeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::NewProp_storeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::NewProp_userCurrency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::NewProp_userCurrency = { "userCurrency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventGetSalesInventory_Parms, userCurrency), METADATA_PARAMS(Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::NewProp_userCurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::NewProp_userCurrency_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventGetSalesInventory_Parms, ReturnValue), Z_Construct_UClass_UBCAppStoreProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::NewProp_storeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::NewProp_userCurrency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|AppStore" },
		{ "Comment", "/**\n    * Method gets the active sales inventory for the passed-in\n    * currency type.\n    *\n    * Service Name - AppStore\n    * Service Operation - GetInventory\n    *\n    * @param platform The store platform. Valid stores are:\n    * - itunes\n    * - facebook\n    * - appworld\n    * - steam\n    * - windows\n    * - windowsPhone\n    * - googlePlay\n    * @param userCurrency The currency type to retrieve the sales inventory for.\n    * @param in_callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAppStoreProxy.h" },
		{ "ToolTip", "Method gets the active sales inventory for the passed-in\ncurrency type.\n\nService Name - AppStore\nService Operation - GetInventory\n\n@param platform The store platform. Valid stores are:\n- itunes\n- facebook\n- appworld\n- steam\n- windows\n- windowsPhone\n- googlePlay\n@param userCurrency The currency type to retrieve the sales inventory for.\n@param in_callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAppStoreProxy, nullptr, "GetSalesInventory", nullptr, nullptr, sizeof(BCAppStoreProxy_eventGetSalesInventory_Parms), Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics
	{
		struct BCAppStoreProxy_eventGetSalesInventoryByCategory_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString storeId;
			FString userCurrency;
			FString category;
			UBCAppStoreProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_storeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_storeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userCurrency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userCurrency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_category;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventGetSalesInventoryByCategory_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::NewProp_storeId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::NewProp_storeId = { "storeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventGetSalesInventoryByCategory_Parms, storeId), METADATA_PARAMS(Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::NewProp_storeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::NewProp_storeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::NewProp_userCurrency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::NewProp_userCurrency = { "userCurrency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventGetSalesInventoryByCategory_Parms, userCurrency), METADATA_PARAMS(Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::NewProp_userCurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::NewProp_userCurrency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::NewProp_category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventGetSalesInventoryByCategory_Parms, category), METADATA_PARAMS(Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::NewProp_category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::NewProp_category_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventGetSalesInventoryByCategory_Parms, ReturnValue), Z_Construct_UClass_UBCAppStoreProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::NewProp_storeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::NewProp_userCurrency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::NewProp_category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|AppStore" },
		{ "Comment", "/**\n    * Method gets the active sales inventory for the passed-in\n    * currency type.\n    *\n    * Service Name - AppStore\n    * Service Operation - GetInventory\n    *\n    * @param storeId The store platform. Valid stores are:\n    * - itunes\n    * - facebook\n    * - appworld\n    * - steam\n    * - windows\n    * - windowsPhone\n    * - googlePlay\n    * @param userCurrency The currency type to retrieve the sales inventory for.\n    * @param category The product category\n    * @param in_callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAppStoreProxy.h" },
		{ "ToolTip", "Method gets the active sales inventory for the passed-in\ncurrency type.\n\nService Name - AppStore\nService Operation - GetInventory\n\n@param storeId The store platform. Valid stores are:\n- itunes\n- facebook\n- appworld\n- steam\n- windows\n- windowsPhone\n- googlePlay\n@param userCurrency The currency type to retrieve the sales inventory for.\n@param category The product category\n@param in_callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAppStoreProxy, nullptr, "GetSalesInventoryByCategory", nullptr, nullptr, sizeof(BCAppStoreProxy_eventGetSalesInventoryByCategory_Parms), Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics
	{
		struct BCAppStoreProxy_eventStartPurchase_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString storeId;
			FString purchaseData;
			UBCAppStoreProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_storeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_storeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_purchaseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_purchaseData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventStartPurchase_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::NewProp_storeId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::NewProp_storeId = { "storeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventStartPurchase_Parms, storeId), METADATA_PARAMS(Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::NewProp_storeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::NewProp_storeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::NewProp_purchaseData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::NewProp_purchaseData = { "purchaseData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventStartPurchase_Parms, purchaseData), METADATA_PARAMS(Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::NewProp_purchaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::NewProp_purchaseData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventStartPurchase_Parms, ReturnValue), Z_Construct_UClass_UBCAppStoreProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::NewProp_storeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::NewProp_purchaseData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|AppStore" },
		{ "Comment", "/**\n    * Start A Two Staged Purchase Transaction\n    *\n    * Service Name - AppStore\n    * Service Operation - StartPurchase\n    *\n    * @param storeId The store platform. Valid stores are:\n    * - itunes\n    * - facebook\n    * - appworld\n    * - steam\n    * - windows\n    * - windowsPhone\n    * - googlePlay\n    * @param purchaseData specific data for purchasing 2 staged purchases\n    * @param in_callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAppStoreProxy.h" },
		{ "ToolTip", "Start A Two Staged Purchase Transaction\n\nService Name - AppStore\nService Operation - StartPurchase\n\n@param storeId The store platform. Valid stores are:\n- itunes\n- facebook\n- appworld\n- steam\n- windows\n- windowsPhone\n- googlePlay\n@param purchaseData specific data for purchasing 2 staged purchases\n@param in_callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAppStoreProxy, nullptr, "StartPurchase", nullptr, nullptr, sizeof(BCAppStoreProxy_eventStartPurchase_Parms), Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics
	{
		struct BCAppStoreProxy_eventVerifyPurchase_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString storeId;
			FString receiptData;
			UBCAppStoreProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_storeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_storeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_receiptData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_receiptData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventVerifyPurchase_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::NewProp_storeId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::NewProp_storeId = { "storeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventVerifyPurchase_Parms, storeId), METADATA_PARAMS(Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::NewProp_storeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::NewProp_storeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::NewProp_receiptData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::NewProp_receiptData = { "receiptData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventVerifyPurchase_Parms, receiptData), METADATA_PARAMS(Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::NewProp_receiptData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::NewProp_receiptData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAppStoreProxy_eventVerifyPurchase_Parms, ReturnValue), Z_Construct_UClass_UBCAppStoreProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::NewProp_storeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::NewProp_receiptData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|AppStore" },
		{ "Comment", "/**\n    * Verifies that purchase was properly made at the store.\n    *\n    * Service Name - AppStore\n    * Service Operation - VerifyPurchase\n    *\n    * @param storeId The store platform. Valid stores are:\n    * - itunes\n    * - facebook\n    * - appworld\n    * - steam\n    * - windows\n    * - windowsPhone\n    * - googlePlay\n    * @param receiptData the specific store data required\n    * @param in_callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAppStoreProxy.h" },
		{ "ToolTip", "Verifies that purchase was properly made at the store.\n\nService Name - AppStore\nService Operation - VerifyPurchase\n\n@param storeId The store platform. Valid stores are:\n- itunes\n- facebook\n- appworld\n- steam\n- windows\n- windowsPhone\n- googlePlay\n@param receiptData the specific store data required\n@param in_callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAppStoreProxy, nullptr, "VerifyPurchase", nullptr, nullptr, sizeof(BCAppStoreProxy_eventVerifyPurchase_Parms), Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCAppStoreProxy_NoRegister()
	{
		return UBCAppStoreProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCAppStoreProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCAppStoreProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCAppStoreProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCAppStoreProxy_FinalizePurchase, "FinalizePurchase" }, // 2092892183
		{ &Z_Construct_UFunction_UBCAppStoreProxy_GetEligiblePromotions, "GetEligiblePromotions" }, // 1096720314
		{ &Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventory, "GetSalesInventory" }, // 832332267
		{ &Z_Construct_UFunction_UBCAppStoreProxy_GetSalesInventoryByCategory, "GetSalesInventoryByCategory" }, // 1097648890
		{ &Z_Construct_UFunction_UBCAppStoreProxy_StartPurchase, "StartPurchase" }, // 3810552206
		{ &Z_Construct_UFunction_UBCAppStoreProxy_VerifyPurchase, "VerifyPurchase" }, // 3513971279
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCAppStoreProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCAppStoreProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAppStoreProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCAppStoreProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCAppStoreProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCAppStoreProxy_Statics::ClassParams = {
		&UBCAppStoreProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCAppStoreProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCAppStoreProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCAppStoreProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCAppStoreProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCAppStoreProxy, 1288492850);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCAppStoreProxy>()
	{
		return UBCAppStoreProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCAppStoreProxy(Z_Construct_UClass_UBCAppStoreProxy, &UBCAppStoreProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCAppStoreProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCAppStoreProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
