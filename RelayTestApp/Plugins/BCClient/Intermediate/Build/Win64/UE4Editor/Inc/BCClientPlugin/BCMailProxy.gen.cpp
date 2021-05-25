// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCMailProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCMailProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCMailProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCMailProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCMailProxy::execSendAdvancedEmailByAddress)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_emailAddress);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonServiceParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMailProxy**)Z_Param__Result=UBCMailProxy::SendAdvancedEmailByAddress(Z_Param_brainCloudWrapper,Z_Param_emailAddress,Z_Param_jsonServiceParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMailProxy::execSendAdvancedEmail)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonServiceParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMailProxy**)Z_Param__Result=UBCMailProxy::SendAdvancedEmail(Z_Param_brainCloudWrapper,Z_Param_profileId,Z_Param_jsonServiceParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMailProxy::execSendBasicEmail)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_GET_PROPERTY(FStrProperty,Z_Param_subject);
		P_GET_PROPERTY(FStrProperty,Z_Param_body);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMailProxy**)Z_Param__Result=UBCMailProxy::SendBasicEmail(Z_Param_brainCloudWrapper,Z_Param_profileId,Z_Param_subject,Z_Param_body);
		P_NATIVE_END;
	}
	void UBCMailProxy::StaticRegisterNativesUBCMailProxy()
	{
		UClass* Class = UBCMailProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendAdvancedEmail", &UBCMailProxy::execSendAdvancedEmail },
			{ "SendAdvancedEmailByAddress", &UBCMailProxy::execSendAdvancedEmailByAddress },
			{ "SendBasicEmail", &UBCMailProxy::execSendBasicEmail },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics
	{
		struct BCMailProxy_eventSendAdvancedEmail_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString profileId;
			FString jsonServiceParams;
			UBCMailProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonServiceParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonServiceParams;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMailProxy_eventSendAdvancedEmail_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMailProxy_eventSendAdvancedEmail_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::NewProp_profileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::NewProp_jsonServiceParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::NewProp_jsonServiceParams = { "jsonServiceParams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMailProxy_eventSendAdvancedEmail_Parms, jsonServiceParams), METADATA_PARAMS(Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::NewProp_jsonServiceParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::NewProp_jsonServiceParams_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMailProxy_eventSendAdvancedEmail_Parms, ReturnValue), Z_Construct_UClass_UBCMailProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::NewProp_jsonServiceParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Mail" },
		{ "Comment", "/**\n\x09* Sends an advanced email to the specified player\n\x09*\n\x09* Service Name - mail\n\x09* Service Operation - SEND_ADVANCED_EMAIL\n\x09*\n\x09*Param - profileId The user to send the email to\n\x09*Param - jsonServiceParams Parameters to send to the email service. See the documentation for\n\x09*\x09""a full list. http://getbraincloud.com/apidocs/apiref/#capi-mail\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMailProxy.h" },
		{ "ToolTip", "Sends an advanced email to the specified player\n\nService Name - mail\nService Operation - SEND_ADVANCED_EMAIL\n\nParam - profileId The user to send the email to\nParam - jsonServiceParams Parameters to send to the email service. See the documentation for\n      a full list. http://getbraincloud.com/apidocs/apiref/#capi-mail" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMailProxy, nullptr, "SendAdvancedEmail", nullptr, nullptr, sizeof(BCMailProxy_eventSendAdvancedEmail_Parms), Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics
	{
		struct BCMailProxy_eventSendAdvancedEmailByAddress_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString emailAddress;
			FString jsonServiceParams;
			UBCMailProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_emailAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_emailAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonServiceParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonServiceParams;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMailProxy_eventSendAdvancedEmailByAddress_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::NewProp_emailAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::NewProp_emailAddress = { "emailAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMailProxy_eventSendAdvancedEmailByAddress_Parms, emailAddress), METADATA_PARAMS(Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::NewProp_emailAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::NewProp_emailAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::NewProp_jsonServiceParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::NewProp_jsonServiceParams = { "jsonServiceParams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMailProxy_eventSendAdvancedEmailByAddress_Parms, jsonServiceParams), METADATA_PARAMS(Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::NewProp_jsonServiceParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::NewProp_jsonServiceParams_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMailProxy_eventSendAdvancedEmailByAddress_Parms, ReturnValue), Z_Construct_UClass_UBCMailProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::NewProp_emailAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::NewProp_jsonServiceParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Mail" },
		{ "Comment", "/**\n\x09* Sends an advanced email to the specified email address\n\x09*\n\x09* Service Name - mail\n\x09* Service Operation - SEND_ADVANCED_EMAIL_BY_ADDRESS\n\x09*\n\x09*Param - emailAddress The address to send the email to\n\x09*Param - jsonServiceParams Parameters to send to the email service. See the documentation for\n\x09*\x09""a full list. http://getbraincloud.com/apidocs/apiref/#capi-mail\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMailProxy.h" },
		{ "ToolTip", "Sends an advanced email to the specified email address\n\nService Name - mail\nService Operation - SEND_ADVANCED_EMAIL_BY_ADDRESS\n\nParam - emailAddress The address to send the email to\nParam - jsonServiceParams Parameters to send to the email service. See the documentation for\n      a full list. http://getbraincloud.com/apidocs/apiref/#capi-mail" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMailProxy, nullptr, "SendAdvancedEmailByAddress", nullptr, nullptr, sizeof(BCMailProxy_eventSendAdvancedEmailByAddress_Parms), Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics
	{
		struct BCMailProxy_eventSendBasicEmail_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString profileId;
			FString subject;
			FString body;
			UBCMailProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_subject_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_subject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_body_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_body;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMailProxy_eventSendBasicEmail_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMailProxy_eventSendBasicEmail_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::NewProp_profileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::NewProp_subject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::NewProp_subject = { "subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMailProxy_eventSendBasicEmail_Parms, subject), METADATA_PARAMS(Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::NewProp_subject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::NewProp_subject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::NewProp_body_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::NewProp_body = { "body", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMailProxy_eventSendBasicEmail_Parms, body), METADATA_PARAMS(Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::NewProp_body_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::NewProp_body_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMailProxy_eventSendBasicEmail_Parms, ReturnValue), Z_Construct_UClass_UBCMailProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::NewProp_subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::NewProp_body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Mail" },
		{ "Comment", "/**\n\x09* Sends a simple text email to the specified player\n\x09*\n\x09* Service Name - mail\n\x09* Service Operation - SEND_BASIC_EMAIL\n\x09*\n\x09* Param - profileId The user to send the email to\n\x09* Param - subject The email subject\n\x09* Param - body The email body\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMailProxy.h" },
		{ "ToolTip", "Sends a simple text email to the specified player\n\nService Name - mail\nService Operation - SEND_BASIC_EMAIL\n\nParam - profileId The user to send the email to\nParam - subject The email subject\nParam - body The email body" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMailProxy, nullptr, "SendBasicEmail", nullptr, nullptr, sizeof(BCMailProxy_eventSendBasicEmail_Parms), Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMailProxy_SendBasicEmail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMailProxy_SendBasicEmail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCMailProxy_NoRegister()
	{
		return UBCMailProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCMailProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCMailProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCMailProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmail, "SendAdvancedEmail" }, // 1505104116
		{ &Z_Construct_UFunction_UBCMailProxy_SendAdvancedEmailByAddress, "SendAdvancedEmailByAddress" }, // 4291972351
		{ &Z_Construct_UFunction_UBCMailProxy_SendBasicEmail, "SendBasicEmail" }, // 3859235466
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCMailProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCMailProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMailProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCMailProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCMailProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCMailProxy_Statics::ClassParams = {
		&UBCMailProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCMailProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCMailProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCMailProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCMailProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCMailProxy, 2658227686);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCMailProxy>()
	{
		return UBCMailProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCMailProxy(Z_Construct_UClass_UBCMailProxy, &UBCMailProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCMailProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCMailProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
