// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCGlobalFileProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCGlobalFileProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCGlobalFileProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCGlobalFileProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCGlobalFileProxy::execGetGlobalFileList)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_folderPath);
		P_GET_UBOOL(Z_Param_recurse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalFileProxy**)Z_Param__Result=UBCGlobalFileProxy::GetGlobalFileList(Z_Param_brainCloudWrapper,Z_Param_folderPath,Z_Param_recurse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalFileProxy::execGetGlobalCDNUrl)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_fileId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalFileProxy**)Z_Param__Result=UBCGlobalFileProxy::GetGlobalCDNUrl(Z_Param_brainCloudWrapper,Z_Param_fileId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalFileProxy::execGetFileInfoSimple)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_fileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_folderPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalFileProxy**)Z_Param__Result=UBCGlobalFileProxy::GetFileInfoSimple(Z_Param_brainCloudWrapper,Z_Param_fileName,Z_Param_folderPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalFileProxy::execGetFileInfo)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_fileId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalFileProxy**)Z_Param__Result=UBCGlobalFileProxy::GetFileInfo(Z_Param_brainCloudWrapper,Z_Param_fileId);
		P_NATIVE_END;
	}
	void UBCGlobalFileProxy::StaticRegisterNativesUBCGlobalFileProxy()
	{
		UClass* Class = UBCGlobalFileProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFileInfo", &UBCGlobalFileProxy::execGetFileInfo },
			{ "GetFileInfoSimple", &UBCGlobalFileProxy::execGetFileInfoSimple },
			{ "GetGlobalCDNUrl", &UBCGlobalFileProxy::execGetGlobalCDNUrl },
			{ "GetGlobalFileList", &UBCGlobalFileProxy::execGetGlobalFileList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfo_Statics
	{
		struct BCGlobalFileProxy_eventGetFileInfo_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString fileId;
			UBCGlobalFileProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfo_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalFileProxy_eventGetFileInfo_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfo_Statics::NewProp_fileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfo_Statics::NewProp_fileId = { "fileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalFileProxy_eventGetFileInfo_Parms, fileId), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfo_Statics::NewProp_fileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfo_Statics::NewProp_fileId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalFileProxy_eventGetFileInfo_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalFileProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfo_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfo_Statics::NewProp_fileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global File" },
		{ "Comment", "/**\n     * Returns information on a file using fileId.\n     *\n     * Service Name - GlobalFile\n     * Service Operation - GetFileInfo\n     *\n     * @param - fileId - the file's id\n     * @param - callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalFileProxy.h" },
		{ "ToolTip", "Returns information on a file using fileId.\n\nService Name - GlobalFile\nService Operation - GetFileInfo\n\n@param - fileId - the file's id\n@param - callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalFileProxy, nullptr, "GetFileInfo", nullptr, nullptr, sizeof(BCGlobalFileProxy_eventGetFileInfo_Parms), Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics
	{
		struct BCGlobalFileProxy_eventGetFileInfoSimple_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString fileName;
			FString folderPath;
			UBCGlobalFileProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_folderPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_folderPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalFileProxy_eventGetFileInfoSimple_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::NewProp_fileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalFileProxy_eventGetFileInfoSimple_Parms, fileName), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::NewProp_fileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::NewProp_fileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::NewProp_folderPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::NewProp_folderPath = { "folderPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalFileProxy_eventGetFileInfoSimple_Parms, folderPath), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::NewProp_folderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::NewProp_folderPath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalFileProxy_eventGetFileInfoSimple_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalFileProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::NewProp_fileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::NewProp_folderPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global File" },
		{ "Comment", "/**\n     * Returns information on a file using path and name.\n     *\n     * Service Name - GlobalFile\n     * Service Operation - GetFileInfoSimple\n     *\n     * @param - folderPath - the folder path the file is stored at\n     * @param - fileId - the file's id\n     * @param - callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalFileProxy.h" },
		{ "ToolTip", "Returns information on a file using path and name.\n\nService Name - GlobalFile\nService Operation - GetFileInfoSimple\n\n@param - folderPath - the folder path the file is stored at\n@param - fileId - the file's id\n@param - callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalFileProxy, nullptr, "GetFileInfoSimple", nullptr, nullptr, sizeof(BCGlobalFileProxy_eventGetFileInfoSimple_Parms), Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalCDNUrl_Statics
	{
		struct BCGlobalFileProxy_eventGetGlobalCDNUrl_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString fileId;
			UBCGlobalFileProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalCDNUrl_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalFileProxy_eventGetGlobalCDNUrl_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalCDNUrl_Statics::NewProp_fileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalCDNUrl_Statics::NewProp_fileId = { "fileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalFileProxy_eventGetGlobalCDNUrl_Parms, fileId), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalCDNUrl_Statics::NewProp_fileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalCDNUrl_Statics::NewProp_fileId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalCDNUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalFileProxy_eventGetGlobalCDNUrl_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalFileProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalCDNUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalCDNUrl_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalCDNUrl_Statics::NewProp_fileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalCDNUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalCDNUrl_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global File" },
		{ "Comment", "/**\n     * Return CDN url for file for clients that cannot handle redirect.\n     *\n     * Service Name - GlobalFile\n     * Service Operation - GetGlobalCDNUrl\n     *\n     * @param - fileId - the file's id\n     * @param - callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalFileProxy.h" },
		{ "ToolTip", "Return CDN url for file for clients that cannot handle redirect.\n\nService Name - GlobalFile\nService Operation - GetGlobalCDNUrl\n\n@param - fileId - the file's id\n@param - callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalCDNUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalFileProxy, nullptr, "GetGlobalCDNUrl", nullptr, nullptr, sizeof(BCGlobalFileProxy_eventGetGlobalCDNUrl_Parms), Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalCDNUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalCDNUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalCDNUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalCDNUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalCDNUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalCDNUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics
	{
		struct BCGlobalFileProxy_eventGetGlobalFileList_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString folderPath;
			bool recurse;
			UBCGlobalFileProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_folderPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_folderPath;
		static void NewProp_recurse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_recurse;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalFileProxy_eventGetGlobalFileList_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::NewProp_folderPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::NewProp_folderPath = { "folderPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalFileProxy_eventGetGlobalFileList_Parms, folderPath), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::NewProp_folderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::NewProp_folderPath_MetaData)) };
	void Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::NewProp_recurse_SetBit(void* Obj)
	{
		((BCGlobalFileProxy_eventGetGlobalFileList_Parms*)Obj)->recurse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::NewProp_recurse = { "recurse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCGlobalFileProxy_eventGetGlobalFileList_Parms), &Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::NewProp_recurse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalFileProxy_eventGetGlobalFileList_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalFileProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::NewProp_folderPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::NewProp_recurse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global File" },
		{ "Comment", "/**\n     * Returns a list of files.\n     *\n     * Service Name - GlobalFile\n     * Service Operation - GetGlobalFileList\n     *\n     * @param - folderPath - the folder path the file is stored at\n     * @param - recurse - does it recurse?\n     * @param - callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalFileProxy.h" },
		{ "ToolTip", "Returns a list of files.\n\nService Name - GlobalFile\nService Operation - GetGlobalFileList\n\n@param - folderPath - the folder path the file is stored at\n@param - recurse - does it recurse?\n@param - callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalFileProxy, nullptr, "GetGlobalFileList", nullptr, nullptr, sizeof(BCGlobalFileProxy_eventGetGlobalFileList_Parms), Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCGlobalFileProxy_NoRegister()
	{
		return UBCGlobalFileProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCGlobalFileProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCGlobalFileProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCGlobalFileProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfo, "GetFileInfo" }, // 4160118338
		{ &Z_Construct_UFunction_UBCGlobalFileProxy_GetFileInfoSimple, "GetFileInfoSimple" }, // 178096874
		{ &Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalCDNUrl, "GetGlobalCDNUrl" }, // 393210115
		{ &Z_Construct_UFunction_UBCGlobalFileProxy_GetGlobalFileList, "GetGlobalFileList" }, // 1846276551
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCGlobalFileProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCGlobalFileProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalFileProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCGlobalFileProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCGlobalFileProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCGlobalFileProxy_Statics::ClassParams = {
		&UBCGlobalFileProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCGlobalFileProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCGlobalFileProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCGlobalFileProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCGlobalFileProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCGlobalFileProxy, 2821013380);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCGlobalFileProxy>()
	{
		return UBCGlobalFileProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCGlobalFileProxy(Z_Construct_UClass_UBCGlobalFileProxy, &UBCGlobalFileProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCGlobalFileProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCGlobalFileProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
