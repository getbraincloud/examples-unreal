// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCFileProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCFileProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCFileProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCFileProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCFileProxy::execGetUploadTotalBytesToTransfer)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_uploadId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UBCFileProxy::GetUploadTotalBytesToTransfer(Z_Param_brainCloudWrapper,Z_Param_uploadId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFileProxy::execGetUploadBytesTransferred)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_uploadId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UBCFileProxy::GetUploadBytesTransferred(Z_Param_brainCloudWrapper,Z_Param_uploadId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFileProxy::execGetUploadProgress)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_uploadId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UBCFileProxy::GetUploadProgress(Z_Param_brainCloudWrapper,Z_Param_uploadId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFileProxy::execCancelUpload)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_uploadId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCFileProxy::CancelUpload(Z_Param_brainCloudWrapper,Z_Param_uploadId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFileProxy::execGetCDNUrl)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_cloudPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_cloudFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFileProxy**)Z_Param__Result=UBCFileProxy::GetCDNUrl(Z_Param_brainCloudWrapper,Z_Param_cloudPath,Z_Param_cloudFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFileProxy::execDeleteUserFiles)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_cloudPath);
		P_GET_UBOOL(Z_Param_recurse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFileProxy**)Z_Param__Result=UBCFileProxy::DeleteUserFiles(Z_Param_brainCloudWrapper,Z_Param_cloudPath,Z_Param_recurse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFileProxy::execDeleteUserFile)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_cloudPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_cloudFilename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFileProxy**)Z_Param__Result=UBCFileProxy::DeleteUserFile(Z_Param_brainCloudWrapper,Z_Param_cloudPath,Z_Param_cloudFilename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFileProxy::execListUserFiles)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_cloudPath);
		P_GET_UBOOL(Z_Param_recurse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFileProxy**)Z_Param__Result=UBCFileProxy::ListUserFiles(Z_Param_brainCloudWrapper,Z_Param_cloudPath,Z_Param_recurse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCFileProxy::execUploadFile)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_cloudPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_cloudFilename);
		P_GET_UBOOL(Z_Param_shareable);
		P_GET_UBOOL(Z_Param_replaceIfExists);
		P_GET_PROPERTY(FStrProperty,Z_Param_localPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCFileProxy**)Z_Param__Result=UBCFileProxy::UploadFile(Z_Param_brainCloudWrapper,Z_Param_cloudPath,Z_Param_cloudFilename,Z_Param_shareable,Z_Param_replaceIfExists,Z_Param_localPath);
		P_NATIVE_END;
	}
	void UBCFileProxy::StaticRegisterNativesUBCFileProxy()
	{
		UClass* Class = UBCFileProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelUpload", &UBCFileProxy::execCancelUpload },
			{ "DeleteUserFile", &UBCFileProxy::execDeleteUserFile },
			{ "DeleteUserFiles", &UBCFileProxy::execDeleteUserFiles },
			{ "GetCDNUrl", &UBCFileProxy::execGetCDNUrl },
			{ "GetUploadBytesTransferred", &UBCFileProxy::execGetUploadBytesTransferred },
			{ "GetUploadProgress", &UBCFileProxy::execGetUploadProgress },
			{ "GetUploadTotalBytesToTransfer", &UBCFileProxy::execGetUploadTotalBytesToTransfer },
			{ "ListUserFiles", &UBCFileProxy::execListUserFiles },
			{ "UploadFile", &UBCFileProxy::execUploadFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCFileProxy_CancelUpload_Statics
	{
		struct BCFileProxy_eventCancelUpload_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString uploadId;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_uploadId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_uploadId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFileProxy_CancelUpload_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventCancelUpload_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_CancelUpload_Statics::NewProp_uploadId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFileProxy_CancelUpload_Statics::NewProp_uploadId = { "uploadId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventCancelUpload_Parms, uploadId), METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_CancelUpload_Statics::NewProp_uploadId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_CancelUpload_Statics::NewProp_uploadId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFileProxy_CancelUpload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_CancelUpload_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_CancelUpload_Statics::NewProp_uploadId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_CancelUpload_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|File" },
		{ "Comment", "/**\n    * Method cancels an upload. If an IFileUploadCallback has been registered with the BrainCloudClient class,\n    * the fileUploadFailed callback method will be called once the upload has been canceled.\n    *\n    * @param uploadId The id of the upload\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFileProxy.h" },
		{ "ToolTip", "Method cancels an upload. If an IFileUploadCallback has been registered with the BrainCloudClient class,\nthe fileUploadFailed callback method will be called once the upload has been canceled.\n\n@param uploadId The id of the upload" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFileProxy_CancelUpload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFileProxy, nullptr, "CancelUpload", nullptr, nullptr, sizeof(BCFileProxy_eventCancelUpload_Parms), Z_Construct_UFunction_UBCFileProxy_CancelUpload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_CancelUpload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_CancelUpload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_CancelUpload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFileProxy_CancelUpload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFileProxy_CancelUpload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics
	{
		struct BCFileProxy_eventDeleteUserFile_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString cloudPath;
			FString cloudFilename;
			UBCFileProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cloudPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cloudPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cloudFilename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cloudFilename;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventDeleteUserFile_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::NewProp_cloudPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::NewProp_cloudPath = { "cloudPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventDeleteUserFile_Parms, cloudPath), METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::NewProp_cloudPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::NewProp_cloudPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::NewProp_cloudFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::NewProp_cloudFilename = { "cloudFilename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventDeleteUserFile_Parms, cloudFilename), METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::NewProp_cloudFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::NewProp_cloudFilename_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventDeleteUserFile_Parms, ReturnValue), Z_Construct_UClass_UBCFileProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::NewProp_cloudPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::NewProp_cloudFilename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|File" },
		{ "Comment", "/**\n    * Deletes a single user file.\n    *\n    * @param cloudPath File path\n    * @param cloudFilename name of file\n    * @param callback The method to be invoked when the server response is received\n    *\n    * Significant error codes:\n    * 40431 - Cloud storage service error\n    * 40432 - File does not exist\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFileProxy.h" },
		{ "ToolTip", "Deletes a single user file.\n\n@param cloudPath File path\n@param cloudFilename name of file\n@param callback The method to be invoked when the server response is received\n\nSignificant error codes:\n40431 - Cloud storage service error\n40432 - File does not exist" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFileProxy, nullptr, "DeleteUserFile", nullptr, nullptr, sizeof(BCFileProxy_eventDeleteUserFile_Parms), Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFileProxy_DeleteUserFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFileProxy_DeleteUserFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics
	{
		struct BCFileProxy_eventDeleteUserFiles_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString cloudPath;
			bool recurse;
			UBCFileProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cloudPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cloudPath;
		static void NewProp_recurse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_recurse;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventDeleteUserFiles_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::NewProp_cloudPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::NewProp_cloudPath = { "cloudPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventDeleteUserFiles_Parms, cloudPath), METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::NewProp_cloudPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::NewProp_cloudPath_MetaData)) };
	void Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::NewProp_recurse_SetBit(void* Obj)
	{
		((BCFileProxy_eventDeleteUserFiles_Parms*)Obj)->recurse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::NewProp_recurse = { "recurse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCFileProxy_eventDeleteUserFiles_Parms), &Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::NewProp_recurse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventDeleteUserFiles_Parms, ReturnValue), Z_Construct_UClass_UBCFileProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::NewProp_cloudPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::NewProp_recurse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|File" },
		{ "Comment", "/**\n    * Delete multiple user files\n    *\n    * @param cloudPath File path\n    * @param recurse Whether to recurse into sub-directories\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFileProxy.h" },
		{ "ToolTip", "Delete multiple user files\n\n@param cloudPath File path\n@param recurse Whether to recurse into sub-directories\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFileProxy, nullptr, "DeleteUserFiles", nullptr, nullptr, sizeof(BCFileProxy_eventDeleteUserFiles_Parms), Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics
	{
		struct BCFileProxy_eventGetCDNUrl_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString cloudPath;
			FString cloudFileName;
			UBCFileProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cloudPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cloudPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cloudFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cloudFileName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventGetCDNUrl_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::NewProp_cloudPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::NewProp_cloudPath = { "cloudPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventGetCDNUrl_Parms, cloudPath), METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::NewProp_cloudPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::NewProp_cloudPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::NewProp_cloudFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::NewProp_cloudFileName = { "cloudFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventGetCDNUrl_Parms, cloudFileName), METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::NewProp_cloudFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::NewProp_cloudFileName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventGetCDNUrl_Parms, ReturnValue), Z_Construct_UClass_UBCFileProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::NewProp_cloudPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::NewProp_cloudFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|File" },
		{ "Comment", "/**\n\x09* Returns the CDN url for a file object\n\x09*\n\x09* Param - cloudPath File path\n\x09* Param - cloudFileName File name\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFileProxy.h" },
		{ "ToolTip", "Returns the CDN url for a file object\n\nParam - cloudPath File path\nParam - cloudFileName File name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFileProxy, nullptr, "GetCDNUrl", nullptr, nullptr, sizeof(BCFileProxy_eventGetCDNUrl_Parms), Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFileProxy_GetCDNUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFileProxy_GetCDNUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFileProxy_GetUploadBytesTransferred_Statics
	{
		struct BCFileProxy_eventGetUploadBytesTransferred_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString uploadId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_uploadId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_uploadId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFileProxy_GetUploadBytesTransferred_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventGetUploadBytesTransferred_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_GetUploadBytesTransferred_Statics::NewProp_uploadId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFileProxy_GetUploadBytesTransferred_Statics::NewProp_uploadId = { "uploadId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventGetUploadBytesTransferred_Parms, uploadId), METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_GetUploadBytesTransferred_Statics::NewProp_uploadId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_GetUploadBytesTransferred_Statics::NewProp_uploadId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCFileProxy_GetUploadBytesTransferred_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventGetUploadBytesTransferred_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFileProxy_GetUploadBytesTransferred_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_GetUploadBytesTransferred_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_GetUploadBytesTransferred_Statics::NewProp_uploadId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_GetUploadBytesTransferred_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_GetUploadBytesTransferred_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|File" },
		{ "Comment", "/**\n    * Returns the number of bytes uploaded or -1 if upload not found.\n    *\n    * @param uploadId The id of the upload\n    * @returns The number of bytes uploaded or -1 if upload not found.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFileProxy.h" },
		{ "ToolTip", "Returns the number of bytes uploaded or -1 if upload not found.\n\n@param uploadId The id of the upload\n@returns The number of bytes uploaded or -1 if upload not found." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFileProxy_GetUploadBytesTransferred_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFileProxy, nullptr, "GetUploadBytesTransferred", nullptr, nullptr, sizeof(BCFileProxy_eventGetUploadBytesTransferred_Parms), Z_Construct_UFunction_UBCFileProxy_GetUploadBytesTransferred_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_GetUploadBytesTransferred_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_GetUploadBytesTransferred_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_GetUploadBytesTransferred_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFileProxy_GetUploadBytesTransferred()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFileProxy_GetUploadBytesTransferred_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFileProxy_GetUploadProgress_Statics
	{
		struct BCFileProxy_eventGetUploadProgress_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString uploadId;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_uploadId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_uploadId;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFileProxy_GetUploadProgress_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventGetUploadProgress_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_GetUploadProgress_Statics::NewProp_uploadId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFileProxy_GetUploadProgress_Statics::NewProp_uploadId = { "uploadId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventGetUploadProgress_Parms, uploadId), METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_GetUploadProgress_Statics::NewProp_uploadId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_GetUploadProgress_Statics::NewProp_uploadId_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBCFileProxy_GetUploadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventGetUploadProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFileProxy_GetUploadProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_GetUploadProgress_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_GetUploadProgress_Statics::NewProp_uploadId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_GetUploadProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_GetUploadProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|File" },
		{ "Comment", "/**\n    * Returns the progress of the given upload from 0.0 to 1.0\n    * or -1 if upload not found.\n    *\n    * @param uploadId The id of the upload\n    * @return A progress from 0.0 to 1.0 or -1 if upload not found.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFileProxy.h" },
		{ "ToolTip", "Returns the progress of the given upload from 0.0 to 1.0\nor -1 if upload not found.\n\n@param uploadId The id of the upload\n@return A progress from 0.0 to 1.0 or -1 if upload not found." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFileProxy_GetUploadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFileProxy, nullptr, "GetUploadProgress", nullptr, nullptr, sizeof(BCFileProxy_eventGetUploadProgress_Parms), Z_Construct_UFunction_UBCFileProxy_GetUploadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_GetUploadProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_GetUploadProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_GetUploadProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFileProxy_GetUploadProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFileProxy_GetUploadProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFileProxy_GetUploadTotalBytesToTransfer_Statics
	{
		struct BCFileProxy_eventGetUploadTotalBytesToTransfer_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString uploadId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_uploadId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_uploadId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFileProxy_GetUploadTotalBytesToTransfer_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventGetUploadTotalBytesToTransfer_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_GetUploadTotalBytesToTransfer_Statics::NewProp_uploadId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFileProxy_GetUploadTotalBytesToTransfer_Statics::NewProp_uploadId = { "uploadId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventGetUploadTotalBytesToTransfer_Parms, uploadId), METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_GetUploadTotalBytesToTransfer_Statics::NewProp_uploadId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_GetUploadTotalBytesToTransfer_Statics::NewProp_uploadId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCFileProxy_GetUploadTotalBytesToTransfer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventGetUploadTotalBytesToTransfer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFileProxy_GetUploadTotalBytesToTransfer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_GetUploadTotalBytesToTransfer_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_GetUploadTotalBytesToTransfer_Statics::NewProp_uploadId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_GetUploadTotalBytesToTransfer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_GetUploadTotalBytesToTransfer_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|File" },
		{ "Comment", "/**\n    * Returns the total number of bytes that will be uploaded or -1 if upload not found.\n    *\n    * @param uploadId The id of the upload\n    * @returns The total number of bytes that will be uploaded or -1 if upload not found.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFileProxy.h" },
		{ "ToolTip", "Returns the total number of bytes that will be uploaded or -1 if upload not found.\n\n@param uploadId The id of the upload\n@returns The total number of bytes that will be uploaded or -1 if upload not found." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFileProxy_GetUploadTotalBytesToTransfer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFileProxy, nullptr, "GetUploadTotalBytesToTransfer", nullptr, nullptr, sizeof(BCFileProxy_eventGetUploadTotalBytesToTransfer_Parms), Z_Construct_UFunction_UBCFileProxy_GetUploadTotalBytesToTransfer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_GetUploadTotalBytesToTransfer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_GetUploadTotalBytesToTransfer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_GetUploadTotalBytesToTransfer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFileProxy_GetUploadTotalBytesToTransfer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFileProxy_GetUploadTotalBytesToTransfer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics
	{
		struct BCFileProxy_eventListUserFiles_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString cloudPath;
			bool recurse;
			UBCFileProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cloudPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cloudPath;
		static void NewProp_recurse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_recurse;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventListUserFiles_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::NewProp_cloudPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::NewProp_cloudPath = { "cloudPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventListUserFiles_Parms, cloudPath), METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::NewProp_cloudPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::NewProp_cloudPath_MetaData)) };
	void Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::NewProp_recurse_SetBit(void* Obj)
	{
		((BCFileProxy_eventListUserFiles_Parms*)Obj)->recurse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::NewProp_recurse = { "recurse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCFileProxy_eventListUserFiles_Parms), &Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::NewProp_recurse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventListUserFiles_Parms, ReturnValue), Z_Construct_UClass_UBCFileProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::NewProp_cloudPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::NewProp_recurse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|File" },
		{ "Comment", "/**\n    * List user files from the given cloud path\n    *\n    * @param cloudPath File path\n    * @param recurse Whether to recurse into sub-directories\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFileProxy.h" },
		{ "ToolTip", "List user files from the given cloud path\n\n@param cloudPath File path\n@param recurse Whether to recurse into sub-directories\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFileProxy, nullptr, "ListUserFiles", nullptr, nullptr, sizeof(BCFileProxy_eventListUserFiles_Parms), Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFileProxy_ListUserFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFileProxy_ListUserFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics
	{
		struct BCFileProxy_eventUploadFile_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString cloudPath;
			FString cloudFilename;
			bool shareable;
			bool replaceIfExists;
			FString localPath;
			UBCFileProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cloudPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cloudPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cloudFilename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cloudFilename;
		static void NewProp_shareable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shareable;
		static void NewProp_replaceIfExists_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_replaceIfExists;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_localPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_localPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventUploadFile_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_cloudPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_cloudPath = { "cloudPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventUploadFile_Parms, cloudPath), METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_cloudPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_cloudPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_cloudFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_cloudFilename = { "cloudFilename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventUploadFile_Parms, cloudFilename), METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_cloudFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_cloudFilename_MetaData)) };
	void Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_shareable_SetBit(void* Obj)
	{
		((BCFileProxy_eventUploadFile_Parms*)Obj)->shareable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_shareable = { "shareable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCFileProxy_eventUploadFile_Parms), &Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_shareable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_replaceIfExists_SetBit(void* Obj)
	{
		((BCFileProxy_eventUploadFile_Parms*)Obj)->replaceIfExists = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_replaceIfExists = { "replaceIfExists", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCFileProxy_eventUploadFile_Parms), &Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_replaceIfExists_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_localPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_localPath = { "localPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventUploadFile_Parms, localPath), METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_localPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_localPath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCFileProxy_eventUploadFile_Parms, ReturnValue), Z_Construct_UClass_UBCFileProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_cloudPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_cloudFilename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_shareable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_replaceIfExists,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_localPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|File" },
		{ "Comment", "/**\n    * Prepares a user file upload. On success the file will begin uploading\n    * to the brainCloud server. To be informed of success/failure of the upload\n    * register an IFileUploadCallback with the BrainCloudClient class.\n    *\n    * Param - cloudPath  The desired cloud path of the file\n    * Param - cloudFilename  The desired cloud filename of the file\n    * Param - shareable  True if the file is shareable.\n    * Param - replaceIfExists  Whether to replace file if it exists\n    * Param - localPath  The path and filename of the local file\n    * Param - callback  The method to be invoked when the server response is received\n    * Return - A bool which is false if the file cannot be found, or file size cannot be determind.\n    *\n    * Significant error codes:\n    * 40429 - File maximum file size exceeded\n    * 40430 - File exists, replaceIfExists not set\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFileProxy.h" },
		{ "ToolTip", "Prepares a user file upload. On success the file will begin uploading\nto the brainCloud server. To be informed of success/failure of the upload\nregister an IFileUploadCallback with the BrainCloudClient class.\n\nParam - cloudPath  The desired cloud path of the file\nParam - cloudFilename  The desired cloud filename of the file\nParam - shareable  True if the file is shareable.\nParam - replaceIfExists  Whether to replace file if it exists\nParam - localPath  The path and filename of the local file\nParam - callback  The method to be invoked when the server response is received\nReturn - A bool which is false if the file cannot be found, or file size cannot be determind.\n\nSignificant error codes:\n40429 - File maximum file size exceeded\n40430 - File exists, replaceIfExists not set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCFileProxy, nullptr, "UploadFile", nullptr, nullptr, sizeof(BCFileProxy_eventUploadFile_Parms), Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCFileProxy_UploadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCFileProxy_UploadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCFileProxy_NoRegister()
	{
		return UBCFileProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCFileProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCFileProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCFileProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCFileProxy_CancelUpload, "CancelUpload" }, // 2733221132
		{ &Z_Construct_UFunction_UBCFileProxy_DeleteUserFile, "DeleteUserFile" }, // 47557459
		{ &Z_Construct_UFunction_UBCFileProxy_DeleteUserFiles, "DeleteUserFiles" }, // 1409489942
		{ &Z_Construct_UFunction_UBCFileProxy_GetCDNUrl, "GetCDNUrl" }, // 1876931029
		{ &Z_Construct_UFunction_UBCFileProxy_GetUploadBytesTransferred, "GetUploadBytesTransferred" }, // 1711563272
		{ &Z_Construct_UFunction_UBCFileProxy_GetUploadProgress, "GetUploadProgress" }, // 1890682420
		{ &Z_Construct_UFunction_UBCFileProxy_GetUploadTotalBytesToTransfer, "GetUploadTotalBytesToTransfer" }, // 3508708513
		{ &Z_Construct_UFunction_UBCFileProxy_ListUserFiles, "ListUserFiles" }, // 1922303201
		{ &Z_Construct_UFunction_UBCFileProxy_UploadFile, "UploadFile" }, // 2845100957
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCFileProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCFileProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCFileProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCFileProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCFileProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCFileProxy_Statics::ClassParams = {
		&UBCFileProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCFileProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCFileProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCFileProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCFileProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCFileProxy, 3352968888);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCFileProxy>()
	{
		return UBCFileProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCFileProxy(Z_Construct_UClass_UBCFileProxy, &UBCFileProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCFileProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCFileProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
