// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCProfanityProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCProfanityProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCProfanityProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCProfanityProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCProfanityProxy::execProfanityIdentifyBadWords)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_GET_PROPERTY(FStrProperty,Z_Param_languages);
		P_GET_UBOOL(Z_Param_flagEmail);
		P_GET_UBOOL(Z_Param_flagPhone);
		P_GET_UBOOL(Z_Param_flagUrls);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCProfanityProxy**)Z_Param__Result=UBCProfanityProxy::ProfanityIdentifyBadWords(Z_Param_brainCloudWrapper,Z_Param_text,Z_Param_languages,Z_Param_flagEmail,Z_Param_flagPhone,Z_Param_flagUrls);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCProfanityProxy::execProfanityReplaceText)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_GET_PROPERTY(FStrProperty,Z_Param_replaceSymbol);
		P_GET_PROPERTY(FStrProperty,Z_Param_languages);
		P_GET_UBOOL(Z_Param_flagEmail);
		P_GET_UBOOL(Z_Param_flagPhone);
		P_GET_UBOOL(Z_Param_flagUrls);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCProfanityProxy**)Z_Param__Result=UBCProfanityProxy::ProfanityReplaceText(Z_Param_brainCloudWrapper,Z_Param_text,Z_Param_replaceSymbol,Z_Param_languages,Z_Param_flagEmail,Z_Param_flagPhone,Z_Param_flagUrls);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCProfanityProxy::execProfanityCheck)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_GET_PROPERTY(FStrProperty,Z_Param_languages);
		P_GET_UBOOL(Z_Param_flagEmail);
		P_GET_UBOOL(Z_Param_flagPhone);
		P_GET_UBOOL(Z_Param_flagUrls);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCProfanityProxy**)Z_Param__Result=UBCProfanityProxy::ProfanityCheck(Z_Param_brainCloudWrapper,Z_Param_text,Z_Param_languages,Z_Param_flagEmail,Z_Param_flagPhone,Z_Param_flagUrls);
		P_NATIVE_END;
	}
	void UBCProfanityProxy::StaticRegisterNativesUBCProfanityProxy()
	{
		UClass* Class = UBCProfanityProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ProfanityCheck", &UBCProfanityProxy::execProfanityCheck },
			{ "ProfanityIdentifyBadWords", &UBCProfanityProxy::execProfanityIdentifyBadWords },
			{ "ProfanityReplaceText", &UBCProfanityProxy::execProfanityReplaceText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics
	{
		struct BCProfanityProxy_eventProfanityCheck_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString text;
			FString languages;
			bool flagEmail;
			bool flagPhone;
			bool flagUrls;
			UBCProfanityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_languages_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_languages;
		static void NewProp_flagEmail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flagEmail;
		static void NewProp_flagPhone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flagPhone;
		static void NewProp_flagUrls_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flagUrls;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCProfanityProxy_eventProfanityCheck_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCProfanityProxy_eventProfanityCheck_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_languages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_languages = { "languages", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCProfanityProxy_eventProfanityCheck_Parms, languages), METADATA_PARAMS(Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_languages_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_languages_MetaData)) };
	void Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_flagEmail_SetBit(void* Obj)
	{
		((BCProfanityProxy_eventProfanityCheck_Parms*)Obj)->flagEmail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_flagEmail = { "flagEmail", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCProfanityProxy_eventProfanityCheck_Parms), &Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_flagEmail_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_flagPhone_SetBit(void* Obj)
	{
		((BCProfanityProxy_eventProfanityCheck_Parms*)Obj)->flagPhone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_flagPhone = { "flagPhone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCProfanityProxy_eventProfanityCheck_Parms), &Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_flagPhone_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_flagUrls_SetBit(void* Obj)
	{
		((BCProfanityProxy_eventProfanityCheck_Parms*)Obj)->flagUrls = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_flagUrls = { "flagUrls", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCProfanityProxy_eventProfanityCheck_Parms), &Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_flagUrls_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCProfanityProxy_eventProfanityCheck_Parms, ReturnValue), Z_Construct_UClass_UBCProfanityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_languages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_flagEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_flagPhone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_flagUrls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Profanity" },
		{ "Comment", "/**\n    * Checks supplied text for profanity.\n    *\n    * Service Name - Profanity\n    * Service Operation - ProfanityCheck\n    *\n    * Param - text The text to check\n    * Param - languages Optional comma delimited list of two character language codes\n    * Param - flagEmail Optional processing of email addresses\n    * Param - flagPhone Optional processing of phone numbers\n    * Param - flagUrls Optional processing of urls\n    *\n    * Significant error codes:\n    *\n    * 40421 - WebPurify not configured\n    * 40422 - General exception occurred\n    * 40423 - WebPurify returned an error (Http status != 200)\n    * 40424 - WebPurify not enabled\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCProfanityProxy.h" },
		{ "ToolTip", "Checks supplied text for profanity.\n\nService Name - Profanity\nService Operation - ProfanityCheck\n\nParam - text The text to check\nParam - languages Optional comma delimited list of two character language codes\nParam - flagEmail Optional processing of email addresses\nParam - flagPhone Optional processing of phone numbers\nParam - flagUrls Optional processing of urls\n\nSignificant error codes:\n\n40421 - WebPurify not configured\n40422 - General exception occurred\n40423 - WebPurify returned an error (Http status != 200)\n40424 - WebPurify not enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCProfanityProxy, nullptr, "ProfanityCheck", nullptr, nullptr, sizeof(BCProfanityProxy_eventProfanityCheck_Parms), Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics
	{
		struct BCProfanityProxy_eventProfanityIdentifyBadWords_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString text;
			FString languages;
			bool flagEmail;
			bool flagPhone;
			bool flagUrls;
			UBCProfanityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_languages_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_languages;
		static void NewProp_flagEmail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flagEmail;
		static void NewProp_flagPhone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flagPhone;
		static void NewProp_flagUrls_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flagUrls;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCProfanityProxy_eventProfanityIdentifyBadWords_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCProfanityProxy_eventProfanityIdentifyBadWords_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_languages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_languages = { "languages", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCProfanityProxy_eventProfanityIdentifyBadWords_Parms, languages), METADATA_PARAMS(Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_languages_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_languages_MetaData)) };
	void Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_flagEmail_SetBit(void* Obj)
	{
		((BCProfanityProxy_eventProfanityIdentifyBadWords_Parms*)Obj)->flagEmail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_flagEmail = { "flagEmail", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCProfanityProxy_eventProfanityIdentifyBadWords_Parms), &Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_flagEmail_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_flagPhone_SetBit(void* Obj)
	{
		((BCProfanityProxy_eventProfanityIdentifyBadWords_Parms*)Obj)->flagPhone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_flagPhone = { "flagPhone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCProfanityProxy_eventProfanityIdentifyBadWords_Parms), &Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_flagPhone_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_flagUrls_SetBit(void* Obj)
	{
		((BCProfanityProxy_eventProfanityIdentifyBadWords_Parms*)Obj)->flagUrls = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_flagUrls = { "flagUrls", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCProfanityProxy_eventProfanityIdentifyBadWords_Parms), &Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_flagUrls_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCProfanityProxy_eventProfanityIdentifyBadWords_Parms, ReturnValue), Z_Construct_UClass_UBCProfanityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_languages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_flagEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_flagPhone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_flagUrls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Profanity" },
		{ "Comment", "/**\n    * Checks supplied text for profanity and returns a list of bad wors.\n    *\n    * Service Name - Profanity\n    * Service Operation - ProfanityIdentifyBadWords\n    *\n    * Param - text The text to check\n    * Param - languages Optional comma delimited list of two character language codes\n    * Param - flagEmail Optional processing of email addresses\n    * Param - flagPhone Optional processing of phone numbers\n    * Param - flagUrls Optional processing of urls\n    *\n    * Significant error codes:\n    *\n    * 40421 - WebPurify not configured\n    * 40422 - General exception occurred\n    * 40423 - WebPurify returned an error (Http status != 200)\n    * 40424 - WebPurify not enabled\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCProfanityProxy.h" },
		{ "ToolTip", "Checks supplied text for profanity and returns a list of bad wors.\n\nService Name - Profanity\nService Operation - ProfanityIdentifyBadWords\n\nParam - text The text to check\nParam - languages Optional comma delimited list of two character language codes\nParam - flagEmail Optional processing of email addresses\nParam - flagPhone Optional processing of phone numbers\nParam - flagUrls Optional processing of urls\n\nSignificant error codes:\n\n40421 - WebPurify not configured\n40422 - General exception occurred\n40423 - WebPurify returned an error (Http status != 200)\n40424 - WebPurify not enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCProfanityProxy, nullptr, "ProfanityIdentifyBadWords", nullptr, nullptr, sizeof(BCProfanityProxy_eventProfanityIdentifyBadWords_Parms), Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics
	{
		struct BCProfanityProxy_eventProfanityReplaceText_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString text;
			FString replaceSymbol;
			FString languages;
			bool flagEmail;
			bool flagPhone;
			bool flagUrls;
			UBCProfanityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_replaceSymbol_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_replaceSymbol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_languages_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_languages;
		static void NewProp_flagEmail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flagEmail;
		static void NewProp_flagPhone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flagPhone;
		static void NewProp_flagUrls_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flagUrls;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCProfanityProxy_eventProfanityReplaceText_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCProfanityProxy_eventProfanityReplaceText_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_replaceSymbol_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_replaceSymbol = { "replaceSymbol", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCProfanityProxy_eventProfanityReplaceText_Parms, replaceSymbol), METADATA_PARAMS(Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_replaceSymbol_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_replaceSymbol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_languages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_languages = { "languages", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCProfanityProxy_eventProfanityReplaceText_Parms, languages), METADATA_PARAMS(Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_languages_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_languages_MetaData)) };
	void Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_flagEmail_SetBit(void* Obj)
	{
		((BCProfanityProxy_eventProfanityReplaceText_Parms*)Obj)->flagEmail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_flagEmail = { "flagEmail", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCProfanityProxy_eventProfanityReplaceText_Parms), &Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_flagEmail_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_flagPhone_SetBit(void* Obj)
	{
		((BCProfanityProxy_eventProfanityReplaceText_Parms*)Obj)->flagPhone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_flagPhone = { "flagPhone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCProfanityProxy_eventProfanityReplaceText_Parms), &Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_flagPhone_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_flagUrls_SetBit(void* Obj)
	{
		((BCProfanityProxy_eventProfanityReplaceText_Parms*)Obj)->flagUrls = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_flagUrls = { "flagUrls", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCProfanityProxy_eventProfanityReplaceText_Parms), &Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_flagUrls_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCProfanityProxy_eventProfanityReplaceText_Parms, ReturnValue), Z_Construct_UClass_UBCProfanityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_replaceSymbol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_languages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_flagEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_flagPhone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_flagUrls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Profanity" },
		{ "Comment", "/**\n    * Replaces the characters of profanity text with a passed character(s).\n    *\n    * Service Name - Profanity\n    * Service Operation - ProfanityReplaceText\n    *\n    * Param - text The text to check\n    * Param - replaceSymbol The text to replace individual characters of profanity text with\n    * Param - languages Optional comma delimited list of two character language codes\n    * Param - flagEmail Optional processing of email addresses\n    * Param - flagPhone Optional processing of phone numbers\n    * Param - flagUrls Optional processing of urls\n    *\n    * Significant error codes:\n    *\n    * 40421 - WebPurify not configured\n    * 40422 - General exception occurred\n    * 40423 - WebPurify returned an error (Http status != 200)\n    * 40424 - WebPurify not enabled\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCProfanityProxy.h" },
		{ "ToolTip", "Replaces the characters of profanity text with a passed character(s).\n\nService Name - Profanity\nService Operation - ProfanityReplaceText\n\nParam - text The text to check\nParam - replaceSymbol The text to replace individual characters of profanity text with\nParam - languages Optional comma delimited list of two character language codes\nParam - flagEmail Optional processing of email addresses\nParam - flagPhone Optional processing of phone numbers\nParam - flagUrls Optional processing of urls\n\nSignificant error codes:\n\n40421 - WebPurify not configured\n40422 - General exception occurred\n40423 - WebPurify returned an error (Http status != 200)\n40424 - WebPurify not enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCProfanityProxy, nullptr, "ProfanityReplaceText", nullptr, nullptr, sizeof(BCProfanityProxy_eventProfanityReplaceText_Parms), Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCProfanityProxy_NoRegister()
	{
		return UBCProfanityProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCProfanityProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCProfanityProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCProfanityProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCProfanityProxy_ProfanityCheck, "ProfanityCheck" }, // 3517749364
		{ &Z_Construct_UFunction_UBCProfanityProxy_ProfanityIdentifyBadWords, "ProfanityIdentifyBadWords" }, // 408729674
		{ &Z_Construct_UFunction_UBCProfanityProxy_ProfanityReplaceText, "ProfanityReplaceText" }, // 2601109032
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCProfanityProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCProfanityProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCProfanityProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCProfanityProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCProfanityProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCProfanityProxy_Statics::ClassParams = {
		&UBCProfanityProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCProfanityProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCProfanityProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCProfanityProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCProfanityProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCProfanityProxy, 2184594943);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCProfanityProxy>()
	{
		return UBCProfanityProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCProfanityProxy(Z_Construct_UClass_UBCProfanityProxy, &UBCProfanityProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCProfanityProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCProfanityProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
