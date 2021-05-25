// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCS3HandlingProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCS3HandlingProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCS3HandlingProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCS3HandlingProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCS3HandlingProxy::execGetCDNUrl)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_fileId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCS3HandlingProxy**)Z_Param__Result=UBCS3HandlingProxy::GetCDNUrl(Z_Param_brainCloudWrapper,Z_Param_fileId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCS3HandlingProxy::execGetFileList)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_category);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCS3HandlingProxy**)Z_Param__Result=UBCS3HandlingProxy::GetFileList(Z_Param_brainCloudWrapper,Z_Param_category);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCS3HandlingProxy::execGetUpdatedFiles)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_category);
		P_GET_PROPERTY(FStrProperty,Z_Param_fileDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCS3HandlingProxy**)Z_Param__Result=UBCS3HandlingProxy::GetUpdatedFiles(Z_Param_brainCloudWrapper,Z_Param_category,Z_Param_fileDetails);
		P_NATIVE_END;
	}
	void UBCS3HandlingProxy::StaticRegisterNativesUBCS3HandlingProxy()
	{
		UClass* Class = UBCS3HandlingProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCDNUrl", &UBCS3HandlingProxy::execGetCDNUrl },
			{ "GetFileList", &UBCS3HandlingProxy::execGetFileList },
			{ "GetUpdatedFiles", &UBCS3HandlingProxy::execGetUpdatedFiles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCS3HandlingProxy_GetCDNUrl_Statics
	{
		struct BCS3HandlingProxy_eventGetCDNUrl_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString fileId;
			UBCS3HandlingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fileId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCS3HandlingProxy_GetCDNUrl_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCS3HandlingProxy_eventGetCDNUrl_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCS3HandlingProxy_GetCDNUrl_Statics::NewProp_fileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCS3HandlingProxy_GetCDNUrl_Statics::NewProp_fileId = { "fileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCS3HandlingProxy_eventGetCDNUrl_Parms, fileId), METADATA_PARAMS(Z_Construct_UFunction_UBCS3HandlingProxy_GetCDNUrl_Statics::NewProp_fileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCS3HandlingProxy_GetCDNUrl_Statics::NewProp_fileId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCS3HandlingProxy_GetCDNUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCS3HandlingProxy_eventGetCDNUrl_Parms, ReturnValue), Z_Construct_UClass_UBCS3HandlingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCS3HandlingProxy_GetCDNUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCS3HandlingProxy_GetCDNUrl_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCS3HandlingProxy_GetCDNUrl_Statics::NewProp_fileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCS3HandlingProxy_GetCDNUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCS3HandlingProxy_GetCDNUrl_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|S3 Handling" },
		{ "Comment", "/**\n\x09* Returns the CDN url for a file\n\x09*\n\x09* Param - fileId ID of file\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCS3HandlingProxy.h" },
		{ "ToolTip", "Returns the CDN url for a file\n\nParam - fileId ID of file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCS3HandlingProxy_GetCDNUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCS3HandlingProxy, nullptr, "GetCDNUrl", nullptr, nullptr, sizeof(BCS3HandlingProxy_eventGetCDNUrl_Parms), Z_Construct_UFunction_UBCS3HandlingProxy_GetCDNUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCS3HandlingProxy_GetCDNUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCS3HandlingProxy_GetCDNUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCS3HandlingProxy_GetCDNUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCS3HandlingProxy_GetCDNUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCS3HandlingProxy_GetCDNUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCS3HandlingProxy_GetFileList_Statics
	{
		struct BCS3HandlingProxy_eventGetFileList_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString category;
			UBCS3HandlingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_category;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCS3HandlingProxy_GetFileList_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCS3HandlingProxy_eventGetFileList_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCS3HandlingProxy_GetFileList_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCS3HandlingProxy_eventGetFileList_Parms, category), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCS3HandlingProxy_GetFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCS3HandlingProxy_eventGetFileList_Parms, ReturnValue), Z_Construct_UClass_UBCS3HandlingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCS3HandlingProxy_GetFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCS3HandlingProxy_GetFileList_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCS3HandlingProxy_GetFileList_Statics::NewProp_category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCS3HandlingProxy_GetFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCS3HandlingProxy_GetFileList_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|S3 Handling" },
		{ "Comment", "/*\n    * Retrieves the details of custom files stored on the server\n    *\n    * Service Name - S3Handling\n    * Service Operation - GetFileList\n    *\n    * Param - category  Category of files to retrieve\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCS3HandlingProxy.h" },
		{ "ToolTip", "* Retrieves the details of custom files stored on the server\n*\n* Service Name - S3Handling\n* Service Operation - GetFileList\n*\n* Param - category  Category of files to retrieve" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCS3HandlingProxy_GetFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCS3HandlingProxy, nullptr, "GetFileList", nullptr, nullptr, sizeof(BCS3HandlingProxy_eventGetFileList_Parms), Z_Construct_UFunction_UBCS3HandlingProxy_GetFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCS3HandlingProxy_GetFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCS3HandlingProxy_GetFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCS3HandlingProxy_GetFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCS3HandlingProxy_GetFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCS3HandlingProxy_GetFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCS3HandlingProxy_GetUpdatedFiles_Statics
	{
		struct BCS3HandlingProxy_eventGetUpdatedFiles_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString category;
			FString fileDetails;
			UBCS3HandlingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_category;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fileDetails;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCS3HandlingProxy_GetUpdatedFiles_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCS3HandlingProxy_eventGetUpdatedFiles_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCS3HandlingProxy_GetUpdatedFiles_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCS3HandlingProxy_eventGetUpdatedFiles_Parms, category), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCS3HandlingProxy_GetUpdatedFiles_Statics::NewProp_fileDetails = { "fileDetails", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCS3HandlingProxy_eventGetUpdatedFiles_Parms, fileDetails), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCS3HandlingProxy_GetUpdatedFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCS3HandlingProxy_eventGetUpdatedFiles_Parms, ReturnValue), Z_Construct_UClass_UBCS3HandlingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCS3HandlingProxy_GetUpdatedFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCS3HandlingProxy_GetUpdatedFiles_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCS3HandlingProxy_GetUpdatedFiles_Statics::NewProp_category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCS3HandlingProxy_GetUpdatedFiles_Statics::NewProp_fileDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCS3HandlingProxy_GetUpdatedFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCS3HandlingProxy_GetUpdatedFiles_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|S3 Handling" },
		{ "Comment", "/*\n    * Sends an array of file details and returns\n    * the details of any of those files that have changed\n    *\n    * Service Name - S3Handling\n    * Service Operation - GetUpdatedFiles\n    *\n    * Param - category  Category of files on server to compare against\n    * Param - fileDetailsJson  An array of file details\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCS3HandlingProxy.h" },
		{ "ToolTip", "* Sends an array of file details and returns\n* the details of any of those files that have changed\n*\n* Service Name - S3Handling\n* Service Operation - GetUpdatedFiles\n*\n* Param - category  Category of files on server to compare against\n* Param - fileDetailsJson  An array of file details" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCS3HandlingProxy_GetUpdatedFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCS3HandlingProxy, nullptr, "GetUpdatedFiles", nullptr, nullptr, sizeof(BCS3HandlingProxy_eventGetUpdatedFiles_Parms), Z_Construct_UFunction_UBCS3HandlingProxy_GetUpdatedFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCS3HandlingProxy_GetUpdatedFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCS3HandlingProxy_GetUpdatedFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCS3HandlingProxy_GetUpdatedFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCS3HandlingProxy_GetUpdatedFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCS3HandlingProxy_GetUpdatedFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCS3HandlingProxy_NoRegister()
	{
		return UBCS3HandlingProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCS3HandlingProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCS3HandlingProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCS3HandlingProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCS3HandlingProxy_GetCDNUrl, "GetCDNUrl" }, // 4103302535
		{ &Z_Construct_UFunction_UBCS3HandlingProxy_GetFileList, "GetFileList" }, // 2556127459
		{ &Z_Construct_UFunction_UBCS3HandlingProxy_GetUpdatedFiles, "GetUpdatedFiles" }, // 2546531232
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCS3HandlingProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCS3HandlingProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCS3HandlingProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCS3HandlingProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCS3HandlingProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCS3HandlingProxy_Statics::ClassParams = {
		&UBCS3HandlingProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCS3HandlingProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCS3HandlingProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCS3HandlingProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCS3HandlingProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCS3HandlingProxy, 3108409089);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCS3HandlingProxy>()
	{
		return UBCS3HandlingProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCS3HandlingProxy(Z_Construct_UClass_UBCS3HandlingProxy, &UBCS3HandlingProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCS3HandlingProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCS3HandlingProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
