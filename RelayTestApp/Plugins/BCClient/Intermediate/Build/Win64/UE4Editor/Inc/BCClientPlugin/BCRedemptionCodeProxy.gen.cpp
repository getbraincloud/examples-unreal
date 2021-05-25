// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCRedemptionCodeProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCRedemptionCodeProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRedemptionCodeProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCRedemptionCodeProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCRedemptionCodeProxy::execGetRedeemedCodes)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_codeType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCRedemptionCodeProxy**)Z_Param__Result=UBCRedemptionCodeProxy::GetRedeemedCodes(Z_Param_brainCloudWrapper,Z_Param_codeType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCRedemptionCodeProxy::execRedeemCode)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_scanCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_codeType);
		P_GET_PROPERTY(FStrProperty,Z_Param_customRedemptionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCRedemptionCodeProxy**)Z_Param__Result=UBCRedemptionCodeProxy::RedeemCode(Z_Param_brainCloudWrapper,Z_Param_scanCode,Z_Param_codeType,Z_Param_customRedemptionInfo);
		P_NATIVE_END;
	}
	void UBCRedemptionCodeProxy::StaticRegisterNativesUBCRedemptionCodeProxy()
	{
		UClass* Class = UBCRedemptionCodeProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRedeemedCodes", &UBCRedemptionCodeProxy::execGetRedeemedCodes },
			{ "RedeemCode", &UBCRedemptionCodeProxy::execRedeemCode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCRedemptionCodeProxy_GetRedeemedCodes_Statics
	{
		struct BCRedemptionCodeProxy_eventGetRedeemedCodes_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString codeType;
			UBCRedemptionCodeProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_codeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_codeType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRedemptionCodeProxy_GetRedeemedCodes_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRedemptionCodeProxy_eventGetRedeemedCodes_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRedemptionCodeProxy_GetRedeemedCodes_Statics::NewProp_codeType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCRedemptionCodeProxy_GetRedeemedCodes_Statics::NewProp_codeType = { "codeType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRedemptionCodeProxy_eventGetRedeemedCodes_Parms, codeType), METADATA_PARAMS(Z_Construct_UFunction_UBCRedemptionCodeProxy_GetRedeemedCodes_Statics::NewProp_codeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRedemptionCodeProxy_GetRedeemedCodes_Statics::NewProp_codeType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRedemptionCodeProxy_GetRedeemedCodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRedemptionCodeProxy_eventGetRedeemedCodes_Parms, ReturnValue), Z_Construct_UClass_UBCRedemptionCodeProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRedemptionCodeProxy_GetRedeemedCodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRedemptionCodeProxy_GetRedeemedCodes_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRedemptionCodeProxy_GetRedeemedCodes_Statics::NewProp_codeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRedemptionCodeProxy_GetRedeemedCodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRedemptionCodeProxy_GetRedeemedCodes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Redemption Code" },
		{ "Comment", "/**\n    * Retrieve the codes already redeemed by player.\n    *\n    * Service Name - RedemptionCode\n    * Service Operation - GET_REDEEMED_CODES\n    *\n    * Param - in_codeType Optional - The type of codes to retrieve. Returns all codes if left unspecified.\n    * Param - in_callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRedemptionCodeProxy.h" },
		{ "ToolTip", "Retrieve the codes already redeemed by player.\n\nService Name - RedemptionCode\nService Operation - GET_REDEEMED_CODES\n\nParam - in_codeType Optional - The type of codes to retrieve. Returns all codes if left unspecified.\nParam - in_callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRedemptionCodeProxy_GetRedeemedCodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRedemptionCodeProxy, nullptr, "GetRedeemedCodes", nullptr, nullptr, sizeof(BCRedemptionCodeProxy_eventGetRedeemedCodes_Parms), Z_Construct_UFunction_UBCRedemptionCodeProxy_GetRedeemedCodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRedemptionCodeProxy_GetRedeemedCodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRedemptionCodeProxy_GetRedeemedCodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRedemptionCodeProxy_GetRedeemedCodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRedemptionCodeProxy_GetRedeemedCodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRedemptionCodeProxy_GetRedeemedCodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics
	{
		struct BCRedemptionCodeProxy_eventRedeemCode_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString scanCode;
			FString codeType;
			FString customRedemptionInfo;
			UBCRedemptionCodeProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scanCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_scanCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_codeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_codeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customRedemptionInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_customRedemptionInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRedemptionCodeProxy_eventRedeemCode_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::NewProp_scanCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::NewProp_scanCode = { "scanCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRedemptionCodeProxy_eventRedeemCode_Parms, scanCode), METADATA_PARAMS(Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::NewProp_scanCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::NewProp_scanCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::NewProp_codeType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::NewProp_codeType = { "codeType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRedemptionCodeProxy_eventRedeemCode_Parms, codeType), METADATA_PARAMS(Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::NewProp_codeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::NewProp_codeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::NewProp_customRedemptionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::NewProp_customRedemptionInfo = { "customRedemptionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRedemptionCodeProxy_eventRedeemCode_Parms, customRedemptionInfo), METADATA_PARAMS(Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::NewProp_customRedemptionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::NewProp_customRedemptionInfo_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCRedemptionCodeProxy_eventRedeemCode_Parms, ReturnValue), Z_Construct_UClass_UBCRedemptionCodeProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::NewProp_scanCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::NewProp_codeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::NewProp_customRedemptionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Redemption Code" },
		{ "Comment", "/**\n    * Redeem a code.\n    *\n    * Service Name - RedemptionCode\n    * Service Operation - REDEEM_CODE\n    *\n    * Param - scanCode The code to redeem\n    * Param - codeType The type of code\n    * Param - customRedemptionInfo Optional - A JSON string containing custom redemption data\n    * Param - callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRedemptionCodeProxy.h" },
		{ "ToolTip", "Redeem a code.\n\nService Name - RedemptionCode\nService Operation - REDEEM_CODE\n\nParam - scanCode The code to redeem\nParam - codeType The type of code\nParam - customRedemptionInfo Optional - A JSON string containing custom redemption data\nParam - callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCRedemptionCodeProxy, nullptr, "RedeemCode", nullptr, nullptr, sizeof(BCRedemptionCodeProxy_eventRedeemCode_Parms), Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCRedemptionCodeProxy_NoRegister()
	{
		return UBCRedemptionCodeProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCRedemptionCodeProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCRedemptionCodeProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCRedemptionCodeProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCRedemptionCodeProxy_GetRedeemedCodes, "GetRedeemedCodes" }, // 1275190601
		{ &Z_Construct_UFunction_UBCRedemptionCodeProxy_RedeemCode, "RedeemCode" }, // 1169612536
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCRedemptionCodeProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCRedemptionCodeProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCRedemptionCodeProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCRedemptionCodeProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCRedemptionCodeProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCRedemptionCodeProxy_Statics::ClassParams = {
		&UBCRedemptionCodeProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCRedemptionCodeProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCRedemptionCodeProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCRedemptionCodeProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCRedemptionCodeProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCRedemptionCodeProxy, 2124878059);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCRedemptionCodeProxy>()
	{
		return UBCRedemptionCodeProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCRedemptionCodeProxy(Z_Construct_UClass_UBCRedemptionCodeProxy, &UBCRedemptionCodeProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCRedemptionCodeProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCRedemptionCodeProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
