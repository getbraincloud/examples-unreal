// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCItemCatalogProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCItemCatalogProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCItemCatalogProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCItemCatalogProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCItemCatalogProxy::execGetCatalogItemsPageOffset)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_context);
		P_GET_PROPERTY(FIntProperty,Z_Param_pageOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCItemCatalogProxy**)Z_Param__Result=UBCItemCatalogProxy::GetCatalogItemsPageOffset(Z_Param_brainCloudWrapper,Z_Param_context,Z_Param_pageOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCItemCatalogProxy::execGetCatalogItemsPage)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCItemCatalogProxy**)Z_Param__Result=UBCItemCatalogProxy::GetCatalogItemsPage(Z_Param_brainCloudWrapper,Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCItemCatalogProxy::execGetCatalogItemDefinition)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_defId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCItemCatalogProxy**)Z_Param__Result=UBCItemCatalogProxy::GetCatalogItemDefinition(Z_Param_brainCloudWrapper,Z_Param_defId);
		P_NATIVE_END;
	}
	void UBCItemCatalogProxy::StaticRegisterNativesUBCItemCatalogProxy()
	{
		UClass* Class = UBCItemCatalogProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCatalogItemDefinition", &UBCItemCatalogProxy::execGetCatalogItemDefinition },
			{ "GetCatalogItemsPage", &UBCItemCatalogProxy::execGetCatalogItemsPage },
			{ "GetCatalogItemsPageOffset", &UBCItemCatalogProxy::execGetCatalogItemsPageOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemDefinition_Statics
	{
		struct BCItemCatalogProxy_eventGetCatalogItemDefinition_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString defId;
			UBCItemCatalogProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_defId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemDefinition_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCItemCatalogProxy_eventGetCatalogItemDefinition_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemDefinition_Statics::NewProp_defId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemDefinition_Statics::NewProp_defId = { "defId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCItemCatalogProxy_eventGetCatalogItemDefinition_Parms, defId), METADATA_PARAMS(Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemDefinition_Statics::NewProp_defId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemDefinition_Statics::NewProp_defId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCItemCatalogProxy_eventGetCatalogItemDefinition_Parms, ReturnValue), Z_Construct_UClass_UBCItemCatalogProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemDefinition_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemDefinition_Statics::NewProp_defId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemDefinition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemDefinition_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|ItemCatalog" },
		{ "Comment", "/*\n\x09 * Reads an existing item definition from the \n     * server, with language fields limited to the\n     * current or default language.\n\x09 *\n\x09 * Service Name - ItemCatalog\n\x09 * Service Operation - GET_CATALOG_ITEM_DEFINITION\n\x09 *\n\x09 * @param defId\n\x09 * @param callback The method to be invoked when the server response is received\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCItemCatalogProxy.h" },
		{ "ToolTip", "* Reads an existing item definition from the\n* server, with language fields limited to the\n* current or default language.\n*\n* Service Name - ItemCatalog\n* Service Operation - GET_CATALOG_ITEM_DEFINITION\n*\n* @param defId\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCItemCatalogProxy, nullptr, "GetCatalogItemDefinition", nullptr, nullptr, sizeof(BCItemCatalogProxy_eventGetCatalogItemDefinition_Parms), Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemDefinition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemDefinition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemDefinition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemDefinition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemDefinition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPage_Statics
	{
		struct BCItemCatalogProxy_eventGetCatalogItemsPage_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString context;
			UBCItemCatalogProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPage_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCItemCatalogProxy_eventGetCatalogItemsPage_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPage_Statics::NewProp_context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPage_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCItemCatalogProxy_eventGetCatalogItemsPage_Parms, context), METADATA_PARAMS(Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPage_Statics::NewProp_context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPage_Statics::NewProp_context_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCItemCatalogProxy_eventGetCatalogItemsPage_Parms, ReturnValue), Z_Construct_UClass_UBCItemCatalogProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPage_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPage_Statics::NewProp_context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|ItemCatalog" },
		{ "Comment", "/*\n\x09 * Retrieves page of catalog items from the server, \n     * with language fields limited to the text for the \n     * current or default language.\n\x09 *\n\x09 * Service Name - ItemCatalog\n\x09 * Service Operation - GET_CATALOG_ITEMS_PAGE\n\x09 *\n\x09 * @param context\n\x09 * @param callback The method to be invoked when the server response is received\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCItemCatalogProxy.h" },
		{ "ToolTip", "* Retrieves page of catalog items from the server,\n* with language fields limited to the text for the\n* current or default language.\n*\n* Service Name - ItemCatalog\n* Service Operation - GET_CATALOG_ITEMS_PAGE\n*\n* @param context\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCItemCatalogProxy, nullptr, "GetCatalogItemsPage", nullptr, nullptr, sizeof(BCItemCatalogProxy_eventGetCatalogItemsPage_Parms), Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset_Statics
	{
		struct BCItemCatalogProxy_eventGetCatalogItemsPageOffset_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString context;
			int32 pageOffset;
			UBCItemCatalogProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_pageOffset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCItemCatalogProxy_eventGetCatalogItemsPageOffset_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset_Statics::NewProp_context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCItemCatalogProxy_eventGetCatalogItemsPageOffset_Parms, context), METADATA_PARAMS(Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset_Statics::NewProp_context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset_Statics::NewProp_context_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset_Statics::NewProp_pageOffset = { "pageOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCItemCatalogProxy_eventGetCatalogItemsPageOffset_Parms, pageOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCItemCatalogProxy_eventGetCatalogItemsPageOffset_Parms, ReturnValue), Z_Construct_UClass_UBCItemCatalogProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset_Statics::NewProp_context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset_Statics::NewProp_pageOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|ItemCatalog" },
		{ "Comment", "/*\n     *Gets the page of catalog items from the \n     *server based on the encoded context and \n     *specified page offset, with language fields \n     *limited to the text for the current or default \n     *language.\n\x09 *\n\x09 * Service Name - ItemCatalog\n\x09 * Service Operation - GET_CATALOG_ITEMS_PAGE_OFFSET\n\x09 *\n\x09 * @param context\n\x09 * @param callback The method to be invoked when the server response is received\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCItemCatalogProxy.h" },
		{ "ToolTip", "*Gets the page of catalog items from the\n*server based on the encoded context and\n*specified page offset, with language fields\n*limited to the text for the current or default\n*language.\n   *\n   * Service Name - ItemCatalog\n   * Service Operation - GET_CATALOG_ITEMS_PAGE_OFFSET\n   *\n   * @param context\n   * @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCItemCatalogProxy, nullptr, "GetCatalogItemsPageOffset", nullptr, nullptr, sizeof(BCItemCatalogProxy_eventGetCatalogItemsPageOffset_Parms), Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCItemCatalogProxy_NoRegister()
	{
		return UBCItemCatalogProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCItemCatalogProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCItemCatalogProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCItemCatalogProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemDefinition, "GetCatalogItemDefinition" }, // 1332201762
		{ &Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPage, "GetCatalogItemsPage" }, // 1031465125
		{ &Z_Construct_UFunction_UBCItemCatalogProxy_GetCatalogItemsPageOffset, "GetCatalogItemsPageOffset" }, // 2241078764
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCItemCatalogProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCItemCatalogProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCItemCatalogProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCItemCatalogProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCItemCatalogProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCItemCatalogProxy_Statics::ClassParams = {
		&UBCItemCatalogProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCItemCatalogProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCItemCatalogProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCItemCatalogProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCItemCatalogProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCItemCatalogProxy, 1273509305);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCItemCatalogProxy>()
	{
		return UBCItemCatalogProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCItemCatalogProxy(Z_Construct_UClass_UBCItemCatalogProxy, &UBCItemCatalogProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCItemCatalogProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCItemCatalogProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
