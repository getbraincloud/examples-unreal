// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCUserItemsProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCUserItemsProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCUserItemsProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCUserItemsProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCUserItemsProxy::execRemoveUserItemFromBlockchain)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_itemId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCUserItemsProxy**)Z_Param__Result=UBCUserItemsProxy::RemoveUserItemFromBlockchain(Z_Param_brainCloudWrapper,Z_Param_itemId,Z_Param_version);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCUserItemsProxy::execRefreshBlockchainUserItems)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCUserItemsProxy**)Z_Param__Result=UBCUserItemsProxy::RefreshBlockchainUserItems(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCUserItemsProxy::execPublishUserItemToBlockchain)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_itemId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCUserItemsProxy**)Z_Param__Result=UBCUserItemsProxy::PublishUserItemToBlockchain(Z_Param_brainCloudWrapper,Z_Param_itemId,Z_Param_version);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCUserItemsProxy::execUseUserItem)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_itemId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_GET_PROPERTY(FStrProperty,Z_Param_newItemData);
		P_GET_UBOOL(Z_Param_includeDef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCUserItemsProxy**)Z_Param__Result=UBCUserItemsProxy::UseUserItem(Z_Param_brainCloudWrapper,Z_Param_itemId,Z_Param_version,Z_Param_newItemData,Z_Param_includeDef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCUserItemsProxy::execUpdateUserItemData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_itemId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_GET_PROPERTY(FStrProperty,Z_Param_newItemData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCUserItemsProxy**)Z_Param__Result=UBCUserItemsProxy::UpdateUserItemData(Z_Param_brainCloudWrapper,Z_Param_itemId,Z_Param_version,Z_Param_newItemData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCUserItemsProxy::execSellUserItem)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_itemId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_GET_PROPERTY(FIntProperty,Z_Param_quantity);
		P_GET_PROPERTY(FStrProperty,Z_Param_shopId);
		P_GET_UBOOL(Z_Param_includeDef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCUserItemsProxy**)Z_Param__Result=UBCUserItemsProxy::SellUserItem(Z_Param_brainCloudWrapper,Z_Param_itemId,Z_Param_version,Z_Param_quantity,Z_Param_shopId,Z_Param_includeDef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCUserItemsProxy::execReceiveUserItemFrom)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_GET_PROPERTY(FStrProperty,Z_Param_itemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCUserItemsProxy**)Z_Param__Result=UBCUserItemsProxy::ReceiveUserItemFrom(Z_Param_brainCloudWrapper,Z_Param_profileId,Z_Param_itemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCUserItemsProxy::execPurchaseUserItem)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_defId);
		P_GET_PROPERTY(FIntProperty,Z_Param_quantity);
		P_GET_PROPERTY(FStrProperty,Z_Param_shopId);
		P_GET_UBOOL(Z_Param_includeDef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCUserItemsProxy**)Z_Param__Result=UBCUserItemsProxy::PurchaseUserItem(Z_Param_brainCloudWrapper,Z_Param_defId,Z_Param_quantity,Z_Param_shopId,Z_Param_includeDef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCUserItemsProxy::execGiveUserItemTo)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_GET_PROPERTY(FStrProperty,Z_Param_itemId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_GET_PROPERTY(FIntProperty,Z_Param_quantity);
		P_GET_UBOOL(Z_Param_immediate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCUserItemsProxy**)Z_Param__Result=UBCUserItemsProxy::GiveUserItemTo(Z_Param_brainCloudWrapper,Z_Param_profileId,Z_Param_itemId,Z_Param_version,Z_Param_quantity,Z_Param_immediate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCUserItemsProxy::execGetUserItem)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_itemId);
		P_GET_UBOOL(Z_Param_includeDef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCUserItemsProxy**)Z_Param__Result=UBCUserItemsProxy::GetUserItem(Z_Param_brainCloudWrapper,Z_Param_itemId,Z_Param_includeDef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCUserItemsProxy::execGetUserItemsPageOffset)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_context);
		P_GET_PROPERTY(FIntProperty,Z_Param_pageOffset);
		P_GET_UBOOL(Z_Param_includeDef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCUserItemsProxy**)Z_Param__Result=UBCUserItemsProxy::GetUserItemsPageOffset(Z_Param_brainCloudWrapper,Z_Param_context,Z_Param_pageOffset,Z_Param_includeDef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCUserItemsProxy::execGetUserItemsPage)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_context);
		P_GET_UBOOL(Z_Param_includeDef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCUserItemsProxy**)Z_Param__Result=UBCUserItemsProxy::GetUserItemsPage(Z_Param_brainCloudWrapper,Z_Param_context,Z_Param_includeDef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCUserItemsProxy::execDropUserItem)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_itemId);
		P_GET_PROPERTY(FIntProperty,Z_Param_quantity);
		P_GET_UBOOL(Z_Param_includeDef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCUserItemsProxy**)Z_Param__Result=UBCUserItemsProxy::DropUserItem(Z_Param_brainCloudWrapper,Z_Param_itemId,Z_Param_quantity,Z_Param_includeDef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCUserItemsProxy::execAwardUserItem)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_defId);
		P_GET_PROPERTY(FIntProperty,Z_Param_quantity);
		P_GET_UBOOL(Z_Param_includeDef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCUserItemsProxy**)Z_Param__Result=UBCUserItemsProxy::AwardUserItem(Z_Param_brainCloudWrapper,Z_Param_defId,Z_Param_quantity,Z_Param_includeDef);
		P_NATIVE_END;
	}
	void UBCUserItemsProxy::StaticRegisterNativesUBCUserItemsProxy()
	{
		UClass* Class = UBCUserItemsProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AwardUserItem", &UBCUserItemsProxy::execAwardUserItem },
			{ "DropUserItem", &UBCUserItemsProxy::execDropUserItem },
			{ "GetUserItem", &UBCUserItemsProxy::execGetUserItem },
			{ "GetUserItemsPage", &UBCUserItemsProxy::execGetUserItemsPage },
			{ "GetUserItemsPageOffset", &UBCUserItemsProxy::execGetUserItemsPageOffset },
			{ "GiveUserItemTo", &UBCUserItemsProxy::execGiveUserItemTo },
			{ "PublishUserItemToBlockchain", &UBCUserItemsProxy::execPublishUserItemToBlockchain },
			{ "PurchaseUserItem", &UBCUserItemsProxy::execPurchaseUserItem },
			{ "ReceiveUserItemFrom", &UBCUserItemsProxy::execReceiveUserItemFrom },
			{ "RefreshBlockchainUserItems", &UBCUserItemsProxy::execRefreshBlockchainUserItems },
			{ "RemoveUserItemFromBlockchain", &UBCUserItemsProxy::execRemoveUserItemFromBlockchain },
			{ "SellUserItem", &UBCUserItemsProxy::execSellUserItem },
			{ "UpdateUserItemData", &UBCUserItemsProxy::execUpdateUserItemData },
			{ "UseUserItem", &UBCUserItemsProxy::execUseUserItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics
	{
		struct BCUserItemsProxy_eventAwardUserItem_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString defId;
			int32 quantity;
			bool includeDef;
			UBCUserItemsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_defId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_quantity;
		static void NewProp_includeDef_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeDef;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventAwardUserItem_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::NewProp_defId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::NewProp_defId = { "defId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventAwardUserItem_Parms, defId), METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::NewProp_defId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::NewProp_defId_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventAwardUserItem_Parms, quantity), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::NewProp_includeDef_SetBit(void* Obj)
	{
		((BCUserItemsProxy_eventAwardUserItem_Parms*)Obj)->includeDef = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::NewProp_includeDef = { "includeDef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCUserItemsProxy_eventAwardUserItem_Parms), &Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::NewProp_includeDef_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventAwardUserItem_Parms, ReturnValue), Z_Construct_UClass_UBCUserItemsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::NewProp_defId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::NewProp_quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::NewProp_includeDef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|UserItems" },
		{ "Comment", "/*\n    * Allows item(s) to be awarded to a user without collecting\n\x09* the purchase amount. If includeDef is true, response \n\x09* includes associated itemDef with language fields limited\n\x09* to the current or default language.\n    *\n    * Service Name - UserItems\n    * Service Operation - AWARD_USER_ITEM\n    *\n    * @param defId\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCUserItemsProxy.h" },
		{ "ToolTip", "* Allows item(s) to be awarded to a user without collecting\n   * the purchase amount. If includeDef is true, response\n   * includes associated itemDef with language fields limited\n   * to the current or default language.\n*\n* Service Name - UserItems\n* Service Operation - AWARD_USER_ITEM\n*\n* @param defId\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCUserItemsProxy, nullptr, "AwardUserItem", nullptr, nullptr, sizeof(BCUserItemsProxy_eventAwardUserItem_Parms), Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics
	{
		struct BCUserItemsProxy_eventDropUserItem_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString itemId;
			int32 quantity;
			bool includeDef;
			UBCUserItemsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_quantity;
		static void NewProp_includeDef_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeDef;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventDropUserItem_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::NewProp_itemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventDropUserItem_Parms, itemId), METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::NewProp_itemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::NewProp_itemId_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventDropUserItem_Parms, quantity), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::NewProp_includeDef_SetBit(void* Obj)
	{
		((BCUserItemsProxy_eventDropUserItem_Parms*)Obj)->includeDef = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::NewProp_includeDef = { "includeDef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCUserItemsProxy_eventDropUserItem_Parms), &Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::NewProp_includeDef_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventDropUserItem_Parms, ReturnValue), Z_Construct_UClass_UBCUserItemsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::NewProp_itemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::NewProp_quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::NewProp_includeDef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|UserItems" },
		{ "Comment", "/*\n    * Allows a quantity of a specified user item to be dropped, \n    * without any recovery of the money paid for the item. If any \n    * quantity of the user item remains, it will be returned, potentially \n    * with the associated itemDef (with language fields limited to the \n    * current or default language).\n    *\n    * Service Name - UserItems\n    * Service Operation - DROP_USER_ITEM\n    *\n    * @param itemId\n    * @param quantity\n    * @param includeDef\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCUserItemsProxy.h" },
		{ "ToolTip", "* Allows a quantity of a specified user item to be dropped,\n* without any recovery of the money paid for the item. If any\n* quantity of the user item remains, it will be returned, potentially\n* with the associated itemDef (with language fields limited to the\n* current or default language).\n*\n* Service Name - UserItems\n* Service Operation - DROP_USER_ITEM\n*\n* @param itemId\n* @param quantity\n* @param includeDef\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCUserItemsProxy, nullptr, "DropUserItem", nullptr, nullptr, sizeof(BCUserItemsProxy_eventDropUserItem_Parms), Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics
	{
		struct BCUserItemsProxy_eventGetUserItem_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString itemId;
			bool includeDef;
			UBCUserItemsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemId;
		static void NewProp_includeDef_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeDef;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventGetUserItem_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::NewProp_itemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventGetUserItem_Parms, itemId), METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::NewProp_itemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::NewProp_itemId_MetaData)) };
	void Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::NewProp_includeDef_SetBit(void* Obj)
	{
		((BCUserItemsProxy_eventGetUserItem_Parms*)Obj)->includeDef = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::NewProp_includeDef = { "includeDef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCUserItemsProxy_eventGetUserItem_Parms), &Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::NewProp_includeDef_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventGetUserItem_Parms, ReturnValue), Z_Construct_UClass_UBCUserItemsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::NewProp_itemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::NewProp_includeDef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|UserItems" },
		{ "Comment", "/*\n    * Retrieves the identified user item from the server.\n    * If includeDef is true, response includes associated\n    * itemDef with language fields limited to the current \n    * or default language.\n    *\n    * Service Name - UserItems\n    * Service Operation - GET_USER_ITEM\n    *\n    * @param itemId\n    * @param includeDef\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCUserItemsProxy.h" },
		{ "ToolTip", "* Retrieves the identified user item from the server.\n* If includeDef is true, response includes associated\n* itemDef with language fields limited to the current\n* or default language.\n*\n* Service Name - UserItems\n* Service Operation - GET_USER_ITEM\n*\n* @param itemId\n* @param includeDef\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCUserItemsProxy, nullptr, "GetUserItem", nullptr, nullptr, sizeof(BCUserItemsProxy_eventGetUserItem_Parms), Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics
	{
		struct BCUserItemsProxy_eventGetUserItemsPage_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString context;
			bool includeDef;
			UBCUserItemsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_context;
		static void NewProp_includeDef_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeDef;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventGetUserItemsPage_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::NewProp_context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventGetUserItemsPage_Parms, context), METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::NewProp_context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::NewProp_context_MetaData)) };
	void Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::NewProp_includeDef_SetBit(void* Obj)
	{
		((BCUserItemsProxy_eventGetUserItemsPage_Parms*)Obj)->includeDef = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::NewProp_includeDef = { "includeDef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCUserItemsProxy_eventGetUserItemsPage_Parms), &Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::NewProp_includeDef_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventGetUserItemsPage_Parms, ReturnValue), Z_Construct_UClass_UBCUserItemsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::NewProp_context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::NewProp_includeDef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|UserItems" },
		{ "Comment", "/*\n    * Retrieves the page of user's inventory from the server \n    * based on the context. If includeDef is true, response includes\n    * associated itemDef with each user item, with language fields \n    * limited to the current or default language.\n    *\n    * Service Name - UserItems\n    * Service Operation - GET_USER_ITEMS_PAGE\n    *\n    * @param criteria\n    * @param includeDef\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCUserItemsProxy.h" },
		{ "ToolTip", "* Retrieves the page of user's inventory from the server\n* based on the context. If includeDef is true, response includes\n* associated itemDef with each user item, with language fields\n* limited to the current or default language.\n*\n* Service Name - UserItems\n* Service Operation - GET_USER_ITEMS_PAGE\n*\n* @param criteria\n* @param includeDef\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCUserItemsProxy, nullptr, "GetUserItemsPage", nullptr, nullptr, sizeof(BCUserItemsProxy_eventGetUserItemsPage_Parms), Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics
	{
		struct BCUserItemsProxy_eventGetUserItemsPageOffset_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString context;
			int32 pageOffset;
			bool includeDef;
			UBCUserItemsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_pageOffset;
		static void NewProp_includeDef_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeDef;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventGetUserItemsPageOffset_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::NewProp_context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventGetUserItemsPageOffset_Parms, context), METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::NewProp_context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::NewProp_context_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::NewProp_pageOffset = { "pageOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventGetUserItemsPageOffset_Parms, pageOffset), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::NewProp_includeDef_SetBit(void* Obj)
	{
		((BCUserItemsProxy_eventGetUserItemsPageOffset_Parms*)Obj)->includeDef = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::NewProp_includeDef = { "includeDef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCUserItemsProxy_eventGetUserItemsPageOffset_Parms), &Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::NewProp_includeDef_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventGetUserItemsPageOffset_Parms, ReturnValue), Z_Construct_UClass_UBCUserItemsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::NewProp_context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::NewProp_pageOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::NewProp_includeDef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|UserItems" },
		{ "Comment", "/*\n    * Retrieves the page of user's inventory \n    * from the server based on the encoded context. \n    * If includeDef is true, response includes associated \n    * itemDef with each user item, with language fields limited \n    * to the current or default language.\n    *\n    * Service Name - UserItems\n    * Service Operation - GET_USER_ITEMS_PAGE_OFFSET\n    *\n    * @param criteria\n    * @param pageOffset\n    * @param includeDef\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCUserItemsProxy.h" },
		{ "ToolTip", "* Retrieves the page of user's inventory\n* from the server based on the encoded context.\n* If includeDef is true, response includes associated\n* itemDef with each user item, with language fields limited\n* to the current or default language.\n*\n* Service Name - UserItems\n* Service Operation - GET_USER_ITEMS_PAGE_OFFSET\n*\n* @param criteria\n* @param pageOffset\n* @param includeDef\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCUserItemsProxy, nullptr, "GetUserItemsPageOffset", nullptr, nullptr, sizeof(BCUserItemsProxy_eventGetUserItemsPageOffset_Parms), Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics
	{
		struct BCUserItemsProxy_eventGiveUserItemTo_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString profileId;
			FString itemId;
			int32 version;
			int32 quantity;
			bool immediate;
			UBCUserItemsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_quantity;
		static void NewProp_immediate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_immediate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventGiveUserItemTo_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventGiveUserItemTo_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_profileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_itemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventGiveUserItemTo_Parms, itemId), METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_itemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_itemId_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventGiveUserItemTo_Parms, version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventGiveUserItemTo_Parms, quantity), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_immediate_SetBit(void* Obj)
	{
		((BCUserItemsProxy_eventGiveUserItemTo_Parms*)Obj)->immediate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_immediate = { "immediate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCUserItemsProxy_eventGiveUserItemTo_Parms), &Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_immediate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventGiveUserItemTo_Parms, ReturnValue), Z_Construct_UClass_UBCUserItemsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_itemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_immediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|UserItems" },
		{ "Comment", "/*\n    * Gifts item to the specified player.\n    *\n    * Service Name - UserItems\n    * Service Operation - GIVE_USER_ITEM_TO\n    *\n    * @param itemId\n    * @param includeDef\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCUserItemsProxy.h" },
		{ "ToolTip", "* Gifts item to the specified player.\n*\n* Service Name - UserItems\n* Service Operation - GIVE_USER_ITEM_TO\n*\n* @param itemId\n* @param includeDef\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCUserItemsProxy, nullptr, "GiveUserItemTo", nullptr, nullptr, sizeof(BCUserItemsProxy_eventGiveUserItemTo_Parms), Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain_Statics
	{
		struct BCUserItemsProxy_eventPublishUserItemToBlockchain_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString itemId;
			int32 version;
			UBCUserItemsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventPublishUserItemToBlockchain_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain_Statics::NewProp_itemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventPublishUserItemToBlockchain_Parms, itemId), METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain_Statics::NewProp_itemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain_Statics::NewProp_itemId_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventPublishUserItemToBlockchain_Parms, version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventPublishUserItemToBlockchain_Parms, ReturnValue), Z_Construct_UClass_UBCUserItemsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain_Statics::NewProp_itemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|UserItems" },
		{ "Comment", "/*\n    * Publishes the specified item to the item management attached blockchain. Results are reported asynchronously via an RTT event.\n    *\n    * Service Name - UserItems\n    * Service Operation - PUBLISH_USER_ITEM_TO_BLOCKCHAIN\n    *\n    * @param itemId\n    * @param version\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCUserItemsProxy.h" },
		{ "ToolTip", "* Publishes the specified item to the item management attached blockchain. Results are reported asynchronously via an RTT event.\n*\n* Service Name - UserItems\n* Service Operation - PUBLISH_USER_ITEM_TO_BLOCKCHAIN\n*\n* @param itemId\n* @param version\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCUserItemsProxy, nullptr, "PublishUserItemToBlockchain", nullptr, nullptr, sizeof(BCUserItemsProxy_eventPublishUserItemToBlockchain_Parms), Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics
	{
		struct BCUserItemsProxy_eventPurchaseUserItem_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString defId;
			int32 quantity;
			FString shopId;
			bool includeDef;
			UBCUserItemsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_defId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_quantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shopId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_shopId;
		static void NewProp_includeDef_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeDef;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventPurchaseUserItem_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::NewProp_defId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::NewProp_defId = { "defId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventPurchaseUserItem_Parms, defId), METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::NewProp_defId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::NewProp_defId_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventPurchaseUserItem_Parms, quantity), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::NewProp_shopId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::NewProp_shopId = { "shopId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventPurchaseUserItem_Parms, shopId), METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::NewProp_shopId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::NewProp_shopId_MetaData)) };
	void Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::NewProp_includeDef_SetBit(void* Obj)
	{
		((BCUserItemsProxy_eventPurchaseUserItem_Parms*)Obj)->includeDef = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::NewProp_includeDef = { "includeDef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCUserItemsProxy_eventPurchaseUserItem_Parms), &Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::NewProp_includeDef_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventPurchaseUserItem_Parms, ReturnValue), Z_Construct_UClass_UBCUserItemsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::NewProp_defId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::NewProp_quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::NewProp_shopId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::NewProp_includeDef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|UserItems" },
		{ "Comment", "/*\n    * Gifts item to the specified player.\n    *\n    * Service Name - UserItems\n    * Service Operation - PURCHASE_USER_ITEM\n    *\n    * @param itemId\n    * @param includeDef\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCUserItemsProxy.h" },
		{ "ToolTip", "* Gifts item to the specified player.\n*\n* Service Name - UserItems\n* Service Operation - PURCHASE_USER_ITEM\n*\n* @param itemId\n* @param includeDef\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCUserItemsProxy, nullptr, "PurchaseUserItem", nullptr, nullptr, sizeof(BCUserItemsProxy_eventPurchaseUserItem_Parms), Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics
	{
		struct BCUserItemsProxy_eventReceiveUserItemFrom_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString profileId;
			FString itemId;
			UBCUserItemsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventReceiveUserItemFrom_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventReceiveUserItemFrom_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::NewProp_profileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::NewProp_itemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventReceiveUserItemFrom_Parms, itemId), METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::NewProp_itemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::NewProp_itemId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventReceiveUserItemFrom_Parms, ReturnValue), Z_Construct_UClass_UBCUserItemsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::NewProp_itemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|UserItems" },
		{ "Comment", "/*\n    * Retrieves and transfers the gift item from the specified player, \n    * who must have previously called giveUserItemTo.\n    *\n    * Service Name - UserItems\n    * Service Operation - RECEIVE_USER_ITEM_FROM\n    *\n    * @param profileId\n    * @param itemId\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCUserItemsProxy.h" },
		{ "ToolTip", "* Retrieves and transfers the gift item from the specified player,\n* who must have previously called giveUserItemTo.\n*\n* Service Name - UserItems\n* Service Operation - RECEIVE_USER_ITEM_FROM\n*\n* @param profileId\n* @param itemId\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCUserItemsProxy, nullptr, "ReceiveUserItemFrom", nullptr, nullptr, sizeof(BCUserItemsProxy_eventReceiveUserItemFrom_Parms), Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCUserItemsProxy_RefreshBlockchainUserItems_Statics
	{
		struct BCUserItemsProxy_eventRefreshBlockchainUserItems_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCUserItemsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_RefreshBlockchainUserItems_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventRefreshBlockchainUserItems_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_RefreshBlockchainUserItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventRefreshBlockchainUserItems_Parms, ReturnValue), Z_Construct_UClass_UBCUserItemsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCUserItemsProxy_RefreshBlockchainUserItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_RefreshBlockchainUserItems_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_RefreshBlockchainUserItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_RefreshBlockchainUserItems_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|UserItems" },
		{ "Comment", "/*\n    * Syncs the caller's user items with the item management attached blockchain. Results are reported asynchronously via an RTT event.\n    *\n    * Service Name - UserItems\n    * Service Operation - REFRESH_BLOCKCHAIN_USER_ITEMS\n    *\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCUserItemsProxy.h" },
		{ "ToolTip", "* Syncs the caller's user items with the item management attached blockchain. Results are reported asynchronously via an RTT event.\n*\n* Service Name - UserItems\n* Service Operation - REFRESH_BLOCKCHAIN_USER_ITEMS\n*\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCUserItemsProxy_RefreshBlockchainUserItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCUserItemsProxy, nullptr, "RefreshBlockchainUserItems", nullptr, nullptr, sizeof(BCUserItemsProxy_eventRefreshBlockchainUserItems_Parms), Z_Construct_UFunction_UBCUserItemsProxy_RefreshBlockchainUserItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_RefreshBlockchainUserItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_RefreshBlockchainUserItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_RefreshBlockchainUserItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCUserItemsProxy_RefreshBlockchainUserItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCUserItemsProxy_RefreshBlockchainUserItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain_Statics
	{
		struct BCUserItemsProxy_eventRemoveUserItemFromBlockchain_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString itemId;
			int32 version;
			UBCUserItemsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventRemoveUserItemFromBlockchain_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain_Statics::NewProp_itemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventRemoveUserItemFromBlockchain_Parms, itemId), METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain_Statics::NewProp_itemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain_Statics::NewProp_itemId_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventRemoveUserItemFromBlockchain_Parms, version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventRemoveUserItemFromBlockchain_Parms, ReturnValue), Z_Construct_UClass_UBCUserItemsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain_Statics::NewProp_itemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|UserItems" },
		{ "Comment", "/*\n    * Removes the specified item from the item management attached blockchain. Results are reported asynchronously via an RTT event.    *\n    * Service Name - UserItems\n    * Service Operation - REMOVE_USER_ITEM_FROM_BLOCKCHAIN\n    *\n    * @param itemId\n    * @param version\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCUserItemsProxy.h" },
		{ "ToolTip", "* Removes the specified item from the item management attached blockchain. Results are reported asynchronously via an RTT event.    *\n* Service Name - UserItems\n* Service Operation - REMOVE_USER_ITEM_FROM_BLOCKCHAIN\n*\n* @param itemId\n* @param version\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCUserItemsProxy, nullptr, "RemoveUserItemFromBlockchain", nullptr, nullptr, sizeof(BCUserItemsProxy_eventRemoveUserItemFromBlockchain_Parms), Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics
	{
		struct BCUserItemsProxy_eventSellUserItem_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString itemId;
			int32 version;
			int32 quantity;
			FString shopId;
			bool includeDef;
			UBCUserItemsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_quantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shopId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_shopId;
		static void NewProp_includeDef_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeDef;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventSellUserItem_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_itemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventSellUserItem_Parms, itemId), METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_itemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_itemId_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventSellUserItem_Parms, version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventSellUserItem_Parms, quantity), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_shopId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_shopId = { "shopId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventSellUserItem_Parms, shopId), METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_shopId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_shopId_MetaData)) };
	void Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_includeDef_SetBit(void* Obj)
	{
		((BCUserItemsProxy_eventSellUserItem_Parms*)Obj)->includeDef = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_includeDef = { "includeDef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCUserItemsProxy_eventSellUserItem_Parms), &Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_includeDef_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventSellUserItem_Parms, ReturnValue), Z_Construct_UClass_UBCUserItemsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_itemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_shopId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_includeDef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|UserItems" },
		{ "Comment", "/*\n    * Allows a quantity of a specified user item to be sold. \n    * If any quantity of the user item remains, \n    * it will be returned, potentially with the associated \n    * itemDef (with language fields limited to the current \n    * or default language), along with the currency refunded \n    * and currency balances.\n    *\n    * Service Name - UserItems\n    * Service Operation - SELL_USER_ITEM\n    *\n    * @param itemId\n    * @param version\n    * @param quantity\n    * @param shopId\n    * @param includeDef\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCUserItemsProxy.h" },
		{ "ToolTip", "* Allows a quantity of a specified user item to be sold.\n* If any quantity of the user item remains,\n* it will be returned, potentially with the associated\n* itemDef (with language fields limited to the current\n* or default language), along with the currency refunded\n* and currency balances.\n*\n* Service Name - UserItems\n* Service Operation - SELL_USER_ITEM\n*\n* @param itemId\n* @param version\n* @param quantity\n* @param shopId\n* @param includeDef\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCUserItemsProxy, nullptr, "SellUserItem", nullptr, nullptr, sizeof(BCUserItemsProxy_eventSellUserItem_Parms), Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics
	{
		struct BCUserItemsProxy_eventUpdateUserItemData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString itemId;
			int32 version;
			FString newItemData;
			UBCUserItemsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_newItemData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventUpdateUserItemData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::NewProp_itemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventUpdateUserItemData_Parms, itemId), METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::NewProp_itemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::NewProp_itemId_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventUpdateUserItemData_Parms, version), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::NewProp_newItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::NewProp_newItemData = { "newItemData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventUpdateUserItemData_Parms, newItemData), METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::NewProp_newItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::NewProp_newItemData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventUpdateUserItemData_Parms, ReturnValue), Z_Construct_UClass_UBCUserItemsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::NewProp_itemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::NewProp_newItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|UserItems" },
		{ "Comment", "/*\n    * Updates the item data on the specified user item.\n    *\n    * Service Name - UserItems\n    * Service Operation - UPDATE_USER_ITEM_DATA\n    *\n    * @param itemId\n    * @param version\n    * @param newItemData\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCUserItemsProxy.h" },
		{ "ToolTip", "* Updates the item data on the specified user item.\n*\n* Service Name - UserItems\n* Service Operation - UPDATE_USER_ITEM_DATA\n*\n* @param itemId\n* @param version\n* @param newItemData\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCUserItemsProxy, nullptr, "UpdateUserItemData", nullptr, nullptr, sizeof(BCUserItemsProxy_eventUpdateUserItemData_Parms), Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics
	{
		struct BCUserItemsProxy_eventUseUserItem_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString itemId;
			int32 version;
			FString newItemData;
			bool includeDef;
			UBCUserItemsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_newItemData;
		static void NewProp_includeDef_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeDef;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventUseUserItem_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::NewProp_itemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventUseUserItem_Parms, itemId), METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::NewProp_itemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::NewProp_itemId_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventUseUserItem_Parms, version), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::NewProp_newItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::NewProp_newItemData = { "newItemData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventUseUserItem_Parms, newItemData), METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::NewProp_newItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::NewProp_newItemData_MetaData)) };
	void Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::NewProp_includeDef_SetBit(void* Obj)
	{
		((BCUserItemsProxy_eventUseUserItem_Parms*)Obj)->includeDef = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::NewProp_includeDef = { "includeDef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCUserItemsProxy_eventUseUserItem_Parms), &Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::NewProp_includeDef_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCUserItemsProxy_eventUseUserItem_Parms, ReturnValue), Z_Construct_UClass_UBCUserItemsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::NewProp_itemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::NewProp_newItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::NewProp_includeDef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|UserItems" },
		{ "Comment", "/*\n    * Uses the specified item, potentially consuming it.\n    *\n    * Service Name - UserItems\n    * Service Operation - USE_USER_ITEM\n    *\n    * @param itemId\n    * @param version\n    * @param newItemData\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCUserItemsProxy.h" },
		{ "ToolTip", "* Uses the specified item, potentially consuming it.\n*\n* Service Name - UserItems\n* Service Operation - USE_USER_ITEM\n*\n* @param itemId\n* @param version\n* @param newItemData\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCUserItemsProxy, nullptr, "UseUserItem", nullptr, nullptr, sizeof(BCUserItemsProxy_eventUseUserItem_Parms), Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCUserItemsProxy_NoRegister()
	{
		return UBCUserItemsProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCUserItemsProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCUserItemsProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCUserItemsProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCUserItemsProxy_AwardUserItem, "AwardUserItem" }, // 3730429959
		{ &Z_Construct_UFunction_UBCUserItemsProxy_DropUserItem, "DropUserItem" }, // 3537639642
		{ &Z_Construct_UFunction_UBCUserItemsProxy_GetUserItem, "GetUserItem" }, // 3999977453
		{ &Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPage, "GetUserItemsPage" }, // 1448253715
		{ &Z_Construct_UFunction_UBCUserItemsProxy_GetUserItemsPageOffset, "GetUserItemsPageOffset" }, // 633332588
		{ &Z_Construct_UFunction_UBCUserItemsProxy_GiveUserItemTo, "GiveUserItemTo" }, // 1683966846
		{ &Z_Construct_UFunction_UBCUserItemsProxy_PublishUserItemToBlockchain, "PublishUserItemToBlockchain" }, // 3864463983
		{ &Z_Construct_UFunction_UBCUserItemsProxy_PurchaseUserItem, "PurchaseUserItem" }, // 2710810523
		{ &Z_Construct_UFunction_UBCUserItemsProxy_ReceiveUserItemFrom, "ReceiveUserItemFrom" }, // 78297047
		{ &Z_Construct_UFunction_UBCUserItemsProxy_RefreshBlockchainUserItems, "RefreshBlockchainUserItems" }, // 3099968902
		{ &Z_Construct_UFunction_UBCUserItemsProxy_RemoveUserItemFromBlockchain, "RemoveUserItemFromBlockchain" }, // 1587093003
		{ &Z_Construct_UFunction_UBCUserItemsProxy_SellUserItem, "SellUserItem" }, // 1772541612
		{ &Z_Construct_UFunction_UBCUserItemsProxy_UpdateUserItemData, "UpdateUserItemData" }, // 2673407584
		{ &Z_Construct_UFunction_UBCUserItemsProxy_UseUserItem, "UseUserItem" }, // 1123750799
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCUserItemsProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCUserItemsProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCUserItemsProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCUserItemsProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCUserItemsProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCUserItemsProxy_Statics::ClassParams = {
		&UBCUserItemsProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCUserItemsProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCUserItemsProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCUserItemsProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCUserItemsProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCUserItemsProxy, 3525880932);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCUserItemsProxy>()
	{
		return UBCUserItemsProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCUserItemsProxy(Z_Construct_UClass_UBCUserItemsProxy, &UBCUserItemsProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCUserItemsProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCUserItemsProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
