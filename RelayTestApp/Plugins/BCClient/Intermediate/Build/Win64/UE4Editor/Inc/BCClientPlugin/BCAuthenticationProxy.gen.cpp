// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCAuthenticationProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCAuthenticationProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCAuthenticationProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCAuthenticationProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCAuthenticationProxy::execSetProfileId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCAuthenticationProxy::SetProfileId(Z_Param_brainCloudWrapper,Z_Param_profileId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execSetAnonymousId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_anonymousId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCAuthenticationProxy::SetAnonymousId(Z_Param_brainCloudWrapper,Z_Param_anonymousId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execGetProfileId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBCAuthenticationProxy::GetProfileId(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execGetAnonymousId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBCAuthenticationProxy::GetAnonymousId(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execResetUniversalIdPasswordAdvancedWithExpiry)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_universalId);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_serviceParams);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_tokenTtlInMinutes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::ResetUniversalIdPasswordAdvancedWithExpiry(Z_Param_brainCloudWrapper,Z_Param_in_universalId,Z_Param_in_serviceParams,Z_Param_in_tokenTtlInMinutes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execResetUniversalIdPasswordWithExpiry)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_universalId);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_tokenTtlInMinutes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::ResetUniversalIdPasswordWithExpiry(Z_Param_brainCloudWrapper,Z_Param_in_universalId,Z_Param_in_tokenTtlInMinutes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execResetUniversalIdPasswordAdvanced)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_universalId);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_serviceParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::ResetUniversalIdPasswordAdvanced(Z_Param_brainCloudWrapper,Z_Param_in_universalId,Z_Param_in_serviceParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execResetUniversalIdPassword)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_universalId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::ResetUniversalIdPassword(Z_Param_brainCloudWrapper,Z_Param_in_universalId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execResetEmailPasswordAdvancedWithExpiry)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_email);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_serviceParams);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_tokenTtlInMinutes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::ResetEmailPasswordAdvancedWithExpiry(Z_Param_brainCloudWrapper,Z_Param_email,Z_Param_in_serviceParams,Z_Param_in_tokenTtlInMinutes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execResetEmailPasswordWithExpiry)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_email);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_tokenTtlInMinutes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::ResetEmailPasswordWithExpiry(Z_Param_brainCloudWrapper,Z_Param_email,Z_Param_in_tokenTtlInMinutes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execResetEmailPasswordAdvanced)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_email);
		P_GET_PROPERTY(FStrProperty,Z_Param_serviceParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::ResetEmailPasswordAdvanced(Z_Param_brainCloudWrapper,Z_Param_email,Z_Param_serviceParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execResetEmailPassword)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_email);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::ResetEmailPassword(Z_Param_brainCloudWrapper,Z_Param_email);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execAuthenticateExternal)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_userId);
		P_GET_PROPERTY(FStrProperty,Z_Param_token);
		P_GET_PROPERTY(FStrProperty,Z_Param_externalAuthName);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::AuthenticateExternal(Z_Param_brainCloudWrapper,Z_Param_userId,Z_Param_token,Z_Param_externalAuthName,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execAuthenticateSettopHandoff)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_handoffCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::AuthenticateSettopHandoff(Z_Param_brainCloudWrapper,Z_Param_handoffCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execAuthenticateHandoff)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_handoffId);
		P_GET_PROPERTY(FStrProperty,Z_Param_securityToken);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::AuthenticateHandoff(Z_Param_brainCloudWrapper,Z_Param_handoffId,Z_Param_securityToken,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execAuthenticateParse)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_parseId);
		P_GET_PROPERTY(FStrProperty,Z_Param_token);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::AuthenticateParse(Z_Param_brainCloudWrapper,Z_Param_parseId,Z_Param_token,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execAuthenticateTwitter)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_twitterId);
		P_GET_PROPERTY(FStrProperty,Z_Param_token);
		P_GET_PROPERTY(FStrProperty,Z_Param_secret);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::AuthenticateTwitter(Z_Param_brainCloudWrapper,Z_Param_twitterId,Z_Param_token,Z_Param_secret,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execAuthenticateApple)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_appleUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_identityToken);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::AuthenticateApple(Z_Param_brainCloudWrapper,Z_Param_appleUserId,Z_Param_identityToken,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execAuthenticateGoogleOpenId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_googleUserAccountEmail);
		P_GET_PROPERTY(FStrProperty,Z_Param_IdToken);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::AuthenticateGoogleOpenId(Z_Param_brainCloudWrapper,Z_Param_googleUserAccountEmail,Z_Param_IdToken,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execAuthenticateGoogle)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_googleId);
		P_GET_PROPERTY(FStrProperty,Z_Param_token);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::AuthenticateGoogle(Z_Param_brainCloudWrapper,Z_Param_googleId,Z_Param_token,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execAuthenticateSteam)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamId);
		P_GET_PROPERTY(FStrProperty,Z_Param_sessionTicket);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::AuthenticateSteam(Z_Param_brainCloudWrapper,Z_Param_steamId,Z_Param_sessionTicket,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execAuthenticateUniversal)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_userId);
		P_GET_PROPERTY(FStrProperty,Z_Param_password);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::AuthenticateUniversal(Z_Param_brainCloudWrapper,Z_Param_userId,Z_Param_password,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execAuthenticateEmailPassword)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_email);
		P_GET_PROPERTY(FStrProperty,Z_Param_password);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::AuthenticateEmailPassword(Z_Param_brainCloudWrapper,Z_Param_email,Z_Param_password,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execAuthenticateGameCenter)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_gameCenterId);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::AuthenticateGameCenter(Z_Param_brainCloudWrapper,Z_Param_gameCenterId,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execAuthenticatePlaystationNetwork)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_psnAccountId);
		P_GET_PROPERTY(FStrProperty,Z_Param_psnAuthToken);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::AuthenticatePlaystationNetwork(Z_Param_brainCloudWrapper,Z_Param_psnAccountId,Z_Param_psnAuthToken,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execAuthenticateOculus)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_oculusId);
		P_GET_PROPERTY(FStrProperty,Z_Param_oculusNonce);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::AuthenticateOculus(Z_Param_brainCloudWrapper,Z_Param_oculusId,Z_Param_oculusNonce,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execAuthenticateFacebookLimited)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_facebookLimitedId);
		P_GET_PROPERTY(FStrProperty,Z_Param_password);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::AuthenticateFacebookLimited(Z_Param_brainCloudWrapper,Z_Param_facebookLimitedId,Z_Param_password,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execAuthenticateFacebook)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_facebookId);
		P_GET_PROPERTY(FStrProperty,Z_Param_password);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::AuthenticateFacebook(Z_Param_brainCloudWrapper,Z_Param_facebookId,Z_Param_password,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execAuthenticateAnonymous)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCAuthenticationProxy**)Z_Param__Result=UBCAuthenticationProxy::AuthenticateAnonymous(Z_Param_brainCloudWrapper,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execClearSavedProfileId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCAuthenticationProxy::ClearSavedProfileId(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execGenerateAnonymousId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBCAuthenticationProxy::GenerateAnonymousId(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCAuthenticationProxy::execInitialize)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_GET_PROPERTY(FStrProperty,Z_Param_anonymousId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCAuthenticationProxy::Initialize(Z_Param_brainCloudWrapper,Z_Param_profileId,Z_Param_anonymousId);
		P_NATIVE_END;
	}
	void UBCAuthenticationProxy::StaticRegisterNativesUBCAuthenticationProxy()
	{
		UClass* Class = UBCAuthenticationProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AuthenticateAnonymous", &UBCAuthenticationProxy::execAuthenticateAnonymous },
			{ "AuthenticateApple", &UBCAuthenticationProxy::execAuthenticateApple },
			{ "AuthenticateEmailPassword", &UBCAuthenticationProxy::execAuthenticateEmailPassword },
			{ "AuthenticateExternal", &UBCAuthenticationProxy::execAuthenticateExternal },
			{ "AuthenticateFacebook", &UBCAuthenticationProxy::execAuthenticateFacebook },
			{ "AuthenticateFacebookLimited", &UBCAuthenticationProxy::execAuthenticateFacebookLimited },
			{ "AuthenticateGameCenter", &UBCAuthenticationProxy::execAuthenticateGameCenter },
			{ "AuthenticateGoogle", &UBCAuthenticationProxy::execAuthenticateGoogle },
			{ "AuthenticateGoogleOpenId", &UBCAuthenticationProxy::execAuthenticateGoogleOpenId },
			{ "AuthenticateHandoff", &UBCAuthenticationProxy::execAuthenticateHandoff },
			{ "AuthenticateOculus", &UBCAuthenticationProxy::execAuthenticateOculus },
			{ "AuthenticateParse", &UBCAuthenticationProxy::execAuthenticateParse },
			{ "AuthenticatePlaystationNetwork", &UBCAuthenticationProxy::execAuthenticatePlaystationNetwork },
			{ "AuthenticateSettopHandoff", &UBCAuthenticationProxy::execAuthenticateSettopHandoff },
			{ "AuthenticateSteam", &UBCAuthenticationProxy::execAuthenticateSteam },
			{ "AuthenticateTwitter", &UBCAuthenticationProxy::execAuthenticateTwitter },
			{ "AuthenticateUniversal", &UBCAuthenticationProxy::execAuthenticateUniversal },
			{ "ClearSavedProfileId", &UBCAuthenticationProxy::execClearSavedProfileId },
			{ "GenerateAnonymousId", &UBCAuthenticationProxy::execGenerateAnonymousId },
			{ "GetAnonymousId", &UBCAuthenticationProxy::execGetAnonymousId },
			{ "GetProfileId", &UBCAuthenticationProxy::execGetProfileId },
			{ "Initialize", &UBCAuthenticationProxy::execInitialize },
			{ "ResetEmailPassword", &UBCAuthenticationProxy::execResetEmailPassword },
			{ "ResetEmailPasswordAdvanced", &UBCAuthenticationProxy::execResetEmailPasswordAdvanced },
			{ "ResetEmailPasswordAdvancedWithExpiry", &UBCAuthenticationProxy::execResetEmailPasswordAdvancedWithExpiry },
			{ "ResetEmailPasswordWithExpiry", &UBCAuthenticationProxy::execResetEmailPasswordWithExpiry },
			{ "ResetUniversalIdPassword", &UBCAuthenticationProxy::execResetUniversalIdPassword },
			{ "ResetUniversalIdPasswordAdvanced", &UBCAuthenticationProxy::execResetUniversalIdPasswordAdvanced },
			{ "ResetUniversalIdPasswordAdvancedWithExpiry", &UBCAuthenticationProxy::execResetUniversalIdPasswordAdvancedWithExpiry },
			{ "ResetUniversalIdPasswordWithExpiry", &UBCAuthenticationProxy::execResetUniversalIdPasswordWithExpiry },
			{ "SetAnonymousId", &UBCAuthenticationProxy::execSetAnonymousId },
			{ "SetProfileId", &UBCAuthenticationProxy::execSetProfileId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateAnonymous_Statics
	{
		struct BCAuthenticationProxy_eventAuthenticateAnonymous_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool forceCreate;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateAnonymous_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateAnonymous_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateAnonymous_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCAuthenticationProxy_eventAuthenticateAnonymous_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateAnonymous_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCAuthenticationProxy_eventAuthenticateAnonymous_Parms), &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateAnonymous_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateAnonymous_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateAnonymous_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateAnonymous_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateAnonymous_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateAnonymous_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateAnonymous_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateAnonymous_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/**\n    * Authenticate a user anonymously with brainCloud - used for apps that don't want to bother\n    * the user to login, or for users who are sensitive to their privacy\n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * Param - forceCreate  Should a new profile be created if it does not exist?\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "Authenticate a user anonymously with brainCloud - used for apps that don't want to bother\nthe user to login, or for users who are sensitive to their privacy\n\nService Name - Authenticate\nService Operation - Authenticate\n\nParam - forceCreate  Should a new profile be created if it does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateAnonymous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "AuthenticateAnonymous", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventAuthenticateAnonymous_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateAnonymous_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateAnonymous_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateAnonymous_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateAnonymous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateAnonymous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateAnonymous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics
	{
		struct BCAuthenticationProxy_eventAuthenticateApple_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString appleUserId;
			FString identityToken;
			bool forceCreate;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_appleUserId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_identityToken;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateApple_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics::NewProp_appleUserId = { "appleUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateApple_Parms, appleUserId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics::NewProp_identityToken = { "identityToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateApple_Parms, identityToken), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCAuthenticationProxy_eventAuthenticateApple_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCAuthenticationProxy_eventAuthenticateApple_Parms), &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateApple_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics::NewProp_appleUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics::NewProp_identityToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/*\n    * Authenticate the user using a google userid(email address) and google authentication token.\n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * @param appleUserId this can be user id OR the email of the user account\n    * @param identityToken  the token confirming the user's identity\n    * Param - forceCreate Should a new profile be created for this user if the account does not exist?\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "* Authenticate the user using a google userid(email address) and google authentication token.\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param appleUserId this can be user id OR the email of the user account\n* @param identityToken  the token confirming the user's identity\n* Param - forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "AuthenticateApple", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventAuthenticateApple_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics
	{
		struct BCAuthenticationProxy_eventAuthenticateEmailPassword_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString email;
			FString password;
			bool forceCreate;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_email;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_password;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateEmailPassword_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics::NewProp_email = { "email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateEmailPassword_Parms, email), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics::NewProp_password = { "password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateEmailPassword_Parms, password), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCAuthenticationProxy_eventAuthenticateEmailPassword_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCAuthenticationProxy_eventAuthenticateEmailPassword_Parms), &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateEmailPassword_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics::NewProp_email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics::NewProp_password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/*\n    * Authenticate the user with a custom Email and Password.  Note that the client app\n    * is responsible for collecting (and storing) the e-mail and potentially password\n    * (for convenience) in the client data.  For the greatest security,\n    * force the user to re-enter their * password at each login.\n    * (Or at least give them that option).\n    *\n    * Note that the password sent from the client to the server is protected via SSL.\n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * Param - email  The e-mail address of the user\n    * Param - password  The password of the user\n    * Param - forceCreate Should a new profile be created for this user if the account does not exist?\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "* Authenticate the user with a custom Email and Password.  Note that the client app\n* is responsible for collecting (and storing) the e-mail and potentially password\n* (for convenience) in the client data.  For the greatest security,\n* force the user to re-enter their * password at each login.\n* (Or at least give them that option).\n*\n* Note that the password sent from the client to the server is protected via SSL.\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* Param - email  The e-mail address of the user\n* Param - password  The password of the user\n* Param - forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "AuthenticateEmailPassword", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventAuthenticateEmailPassword_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics
	{
		struct BCAuthenticationProxy_eventAuthenticateExternal_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString userId;
			FString token;
			FString externalAuthName;
			bool forceCreate;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_token;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_externalAuthName;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateExternal_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateExternal_Parms, userId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateExternal_Parms, token), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::NewProp_externalAuthName = { "externalAuthName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateExternal_Parms, externalAuthName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCAuthenticationProxy_eventAuthenticateExternal_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCAuthenticationProxy_eventAuthenticateExternal_Parms), &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateExternal_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::NewProp_userId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::NewProp_token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::NewProp_externalAuthName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/**\n    * Authenticate the user via cloud code (which in turn validates the supplied credentials against an external system).\n    * This allows the developer to extend brainCloud authentication to support other backend authentication systems.\n    *\n    * Service Name - Authenticate\n    * Server Operation - Authenticate\n    *\n    * Param - userid The user id\n    * Param - token The user token (password etc)\n    * Param - externalAuthName The name of the cloud script to call for external authentication\n    * Param - force Should a new profile be created for this user if the account does not exist?\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "Authenticate the user via cloud code (which in turn validates the supplied credentials against an external system).\nThis allows the developer to extend brainCloud authentication to support other backend authentication systems.\n\nService Name - Authenticate\nServer Operation - Authenticate\n\nParam - userid The user id\nParam - token The user token (password etc)\nParam - externalAuthName The name of the cloud script to call for external authentication\nParam - force Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "AuthenticateExternal", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventAuthenticateExternal_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics
	{
		struct BCAuthenticationProxy_eventAuthenticateFacebook_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString facebookId;
			FString password;
			bool forceCreate;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_facebookId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_password;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateFacebook_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics::NewProp_facebookId = { "facebookId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateFacebook_Parms, facebookId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics::NewProp_password = { "password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateFacebook_Parms, password), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCAuthenticationProxy_eventAuthenticateFacebook_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCAuthenticationProxy_eventAuthenticateFacebook_Parms), &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateFacebook_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics::NewProp_facebookId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics::NewProp_password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/*\n    * Authenticate the user with brainCloud using their Facebook Credentials\n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * Param - externalId The facebook id of the user\n    * Param - authenticationToken The validated token from the Facebook SDK\n    *   (that will be further validated when sent to the bC service)\n    * Param - forceCreate Should a new profile be created for this user if the account does not exist?\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "* Authenticate the user with brainCloud using their Facebook Credentials\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* Param - externalId The facebook id of the user\n* Param - authenticationToken The validated token from the Facebook SDK\n*   (that will be further validated when sent to the bC service)\n* Param - forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "AuthenticateFacebook", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventAuthenticateFacebook_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics
	{
		struct BCAuthenticationProxy_eventAuthenticateFacebookLimited_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString facebookLimitedId;
			FString password;
			bool forceCreate;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_facebookLimitedId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_password;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateFacebookLimited_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics::NewProp_facebookLimitedId = { "facebookLimitedId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateFacebookLimited_Parms, facebookLimitedId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics::NewProp_password = { "password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateFacebookLimited_Parms, password), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCAuthenticationProxy_eventAuthenticateFacebookLimited_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCAuthenticationProxy_eventAuthenticateFacebookLimited_Parms), &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateFacebookLimited_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics::NewProp_facebookLimitedId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics::NewProp_password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/*\n    * Authenticate the user with brainCloud using their FacebookLimited Credentials\n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * Param - externalId The facebookLimited id of the user\n    * Param - authenticationToken The validated token from the Facebook SDK\n    *   (that will be further validated when sent to the bC service)\n    * Param - forceCreate Should a new profile be created for this user if the account does not exist?\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "* Authenticate the user with brainCloud using their FacebookLimited Credentials\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* Param - externalId The facebookLimited id of the user\n* Param - authenticationToken The validated token from the Facebook SDK\n*   (that will be further validated when sent to the bC service)\n* Param - forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "AuthenticateFacebookLimited", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventAuthenticateFacebookLimited_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter_Statics
	{
		struct BCAuthenticationProxy_eventAuthenticateGameCenter_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString gameCenterId;
			bool forceCreate;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameCenterId;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateGameCenter_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter_Statics::NewProp_gameCenterId = { "gameCenterId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateGameCenter_Parms, gameCenterId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCAuthenticationProxy_eventAuthenticateGameCenter_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCAuthenticationProxy_eventAuthenticateGameCenter_Parms), &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateGameCenter_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter_Statics::NewProp_gameCenterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/*\n    * Authenticate the user using their Game Center id\n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * Param - gameCenterId The player's game center id  (use the playerID property from the local GKPlayer object)\n    * Param - forceCreate Should a new profile be created for this user if the account does not exist?\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "* Authenticate the user using their Game Center id\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* Param - gameCenterId The player's game center id  (use the playerID property from the local GKPlayer object)\n* Param - forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "AuthenticateGameCenter", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventAuthenticateGameCenter_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics
	{
		struct BCAuthenticationProxy_eventAuthenticateGoogle_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString googleId;
			FString token;
			bool forceCreate;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_googleId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_token;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateGoogle_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics::NewProp_googleId = { "googleId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateGoogle_Parms, googleId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateGoogle_Parms, token), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCAuthenticationProxy_eventAuthenticateGoogle_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCAuthenticationProxy_eventAuthenticateGoogle_Parms), &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateGoogle_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics::NewProp_googleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics::NewProp_token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/*\n    * Authenticate the user using a google userid(email address) and google authentication token.\n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * Param - userid  String representation of google+ userid (email)\n    * Param - token  The authentication token derived via the google apis.\n    * Param - forceCreate Should a new profile be created for this user if the account does not exist?\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "* Authenticate the user using a google userid(email address) and google authentication token.\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* Param - userid  String representation of google+ userid (email)\n* Param - token  The authentication token derived via the google apis.\n* Param - forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "AuthenticateGoogle", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventAuthenticateGoogle_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics
	{
		struct BCAuthenticationProxy_eventAuthenticateGoogleOpenId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString googleUserAccountEmail;
			FString IdToken;
			bool forceCreate;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_googleUserAccountEmail;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IdToken;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateGoogleOpenId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics::NewProp_googleUserAccountEmail = { "googleUserAccountEmail", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateGoogleOpenId_Parms, googleUserAccountEmail), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateGoogleOpenId_Parms, IdToken), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCAuthenticationProxy_eventAuthenticateGoogleOpenId_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCAuthenticationProxy_eventAuthenticateGoogleOpenId_Parms), &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateGoogleOpenId_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics::NewProp_googleUserAccountEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics::NewProp_IdToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/*\n    * Authenticate the user using a google userid(email address) and google authentication token.\n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * @param googleUserAccountEmail The email associated with the google user\n    * @param IdToken  The Id token of the google account. Can get with calls like requestIdToken\n    * Param - forceCreate Should a new profile be created for this user if the account does not exist?\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "* Authenticate the user using a google userid(email address) and google authentication token.\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param googleUserAccountEmail The email associated with the google user\n* @param IdToken  The Id token of the google account. Can get with calls like requestIdToken\n* Param - forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "AuthenticateGoogleOpenId", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventAuthenticateGoogleOpenId_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics
	{
		struct BCAuthenticationProxy_eventAuthenticateHandoff_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString handoffId;
			FString securityToken;
			bool forceCreate;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_handoffId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_securityToken;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateHandoff_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics::NewProp_handoffId = { "handoffId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateHandoff_Parms, handoffId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics::NewProp_securityToken = { "securityToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateHandoff_Parms, securityToken), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCAuthenticationProxy_eventAuthenticateHandoff_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCAuthenticationProxy_eventAuthenticateHandoff_Parms), &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateHandoff_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics::NewProp_handoffId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics::NewProp_securityToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/*\n    * Authenticate the user using a handoffId and a token \n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * @param handoffId braincloud handoff id generated from cloud script\n    * @param securityToken The security token entered byt the user\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "* Authenticate the user using a handoffId and a token\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param handoffId braincloud handoff id generated from cloud script\n* @param securityToken The security token entered byt the user\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "AuthenticateHandoff", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventAuthenticateHandoff_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics
	{
		struct BCAuthenticationProxy_eventAuthenticateOculus_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString oculusId;
			FString oculusNonce;
			bool forceCreate;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_oculusId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_oculusNonce;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateOculus_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics::NewProp_oculusId = { "oculusId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateOculus_Parms, oculusId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics::NewProp_oculusNonce = { "oculusNonce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateOculus_Parms, oculusNonce), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCAuthenticationProxy_eventAuthenticateOculus_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCAuthenticationProxy_eventAuthenticateOculus_Parms), &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateOculus_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics::NewProp_oculusId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics::NewProp_oculusNonce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/*\n    * Authenticate the user with brainCloud using their Oculus Credentials\n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * Param - oculusId The oculus id of the user\n    * Param - oculusNonce token from the Oculus SDK\n    * Param - forceCreate Should a new profile be created for this user if the account does not exist?\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "* Authenticate the user with brainCloud using their Oculus Credentials\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* Param - oculusId The oculus id of the user\n* Param - oculusNonce token from the Oculus SDK\n* Param - forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "AuthenticateOculus", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventAuthenticateOculus_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics
	{
		struct BCAuthenticationProxy_eventAuthenticateParse_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString parseId;
			FString token;
			bool forceCreate;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_parseId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_token;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateParse_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics::NewProp_parseId = { "parseId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateParse_Parms, parseId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateParse_Parms, token), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCAuthenticationProxy_eventAuthenticateParse_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCAuthenticationProxy_eventAuthenticateParse_Parms), &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateParse_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics::NewProp_parseId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics::NewProp_token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/*\n    * Authenticate the user using a Parse ID and authentication token.\n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * Param - userid  String representation of Parse user ID\n    * Param - token  The authentication token from Parse\n    * Param - forceCreate Should a new profile be created for this user if the account does not exist?\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "* Authenticate the user using a Parse ID and authentication token.\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* Param - userid  String representation of Parse user ID\n* Param - token  The authentication token from Parse\n* Param - forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "AuthenticateParse", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventAuthenticateParse_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics
	{
		struct BCAuthenticationProxy_eventAuthenticatePlaystationNetwork_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString psnAccountId;
			FString psnAuthToken;
			bool forceCreate;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_psnAccountId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_psnAuthToken;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticatePlaystationNetwork_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics::NewProp_psnAccountId = { "psnAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticatePlaystationNetwork_Parms, psnAccountId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics::NewProp_psnAuthToken = { "psnAuthToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticatePlaystationNetwork_Parms, psnAuthToken), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCAuthenticationProxy_eventAuthenticatePlaystationNetwork_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCAuthenticationProxy_eventAuthenticatePlaystationNetwork_Parms), &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticatePlaystationNetwork_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics::NewProp_psnAccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics::NewProp_psnAuthToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/*\n    * Authenticate the user with brainCloud using their psn account id and auth token\n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * Param - psnAccountId The account id of the user\n    * Param - psnAuthToken The validated token from the playstation sdk\n    *   (that will be further validated when sent to the bC service)\n    * Param - forceCreate Should a new profile be created for this user if the account does not exist?\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "* Authenticate the user with brainCloud using their psn account id and auth token\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* Param - psnAccountId The account id of the user\n* Param - psnAuthToken The validated token from the playstation sdk\n*   (that will be further validated when sent to the bC service)\n* Param - forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "AuthenticatePlaystationNetwork", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventAuthenticatePlaystationNetwork_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSettopHandoff_Statics
	{
		struct BCAuthenticationProxy_eventAuthenticateSettopHandoff_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString handoffCode;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_handoffCode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSettopHandoff_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateSettopHandoff_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSettopHandoff_Statics::NewProp_handoffCode = { "handoffCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateSettopHandoff_Parms, handoffCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSettopHandoff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateSettopHandoff_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSettopHandoff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSettopHandoff_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSettopHandoff_Statics::NewProp_handoffCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSettopHandoff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSettopHandoff_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/*\n    * Authenticate the user using a handoffId and a token \n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * @param handoffCode braincloud handoff id generated from cloud script\n    * @param securityToken The security token entered byt the user\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "* Authenticate the user using a handoffId and a token\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param handoffCode braincloud handoff id generated from cloud script\n* @param securityToken The security token entered byt the user\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSettopHandoff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "AuthenticateSettopHandoff", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventAuthenticateSettopHandoff_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSettopHandoff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSettopHandoff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSettopHandoff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSettopHandoff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSettopHandoff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSettopHandoff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics
	{
		struct BCAuthenticationProxy_eventAuthenticateSteam_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString steamId;
			FString sessionTicket;
			bool forceCreate;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sessionTicket;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateSteam_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics::NewProp_steamId = { "steamId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateSteam_Parms, steamId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics::NewProp_sessionTicket = { "sessionTicket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateSteam_Parms, sessionTicket), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCAuthenticationProxy_eventAuthenticateSteam_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCAuthenticationProxy_eventAuthenticateSteam_Parms), &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateSteam_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics::NewProp_steamId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics::NewProp_sessionTicket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/*\n    * Authenticate the user using a steam userid and session ticket (without any validation on the userid).\n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * Param - userid  String representation of 64 bit steam id\n    * Param - sessionticket  The session ticket of the user (hex encoded)\n    * Param - forceCreate Should a new profile be created for this user if the account does not exist?\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "* Authenticate the user using a steam userid and session ticket (without any validation on the userid).\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* Param - userid  String representation of 64 bit steam id\n* Param - sessionticket  The session ticket of the user (hex encoded)\n* Param - forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "AuthenticateSteam", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventAuthenticateSteam_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics
	{
		struct BCAuthenticationProxy_eventAuthenticateTwitter_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString twitterId;
			FString token;
			FString secret;
			bool forceCreate;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_twitterId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_token;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_secret;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateTwitter_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::NewProp_twitterId = { "twitterId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateTwitter_Parms, twitterId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateTwitter_Parms, token), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::NewProp_secret = { "secret", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateTwitter_Parms, secret), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCAuthenticationProxy_eventAuthenticateTwitter_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCAuthenticationProxy_eventAuthenticateTwitter_Parms), &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateTwitter_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::NewProp_twitterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::NewProp_token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::NewProp_secret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/*\n    * Authenticate the user using a Twitter userid, authentication token, and secret from Twitter.\n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * Param - userid  String representation of Twitter userid\n    * Param - token  The authentication token derived via the Twitter apis.\n    * Param - secret  The secret given when attempting to link with Twitter\n    * Param - forceCreate Should a new profile be created for this user if the account does not exist?\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "* Authenticate the user using a Twitter userid, authentication token, and secret from Twitter.\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* Param - userid  String representation of Twitter userid\n* Param - token  The authentication token derived via the Twitter apis.\n* Param - secret  The secret given when attempting to link with Twitter\n* Param - forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "AuthenticateTwitter", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventAuthenticateTwitter_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics
	{
		struct BCAuthenticationProxy_eventAuthenticateUniversal_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString userId;
			FString password;
			bool forceCreate;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_password;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateUniversal_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateUniversal_Parms, userId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics::NewProp_password = { "password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateUniversal_Parms, password), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCAuthenticationProxy_eventAuthenticateUniversal_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCAuthenticationProxy_eventAuthenticateUniversal_Parms), &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventAuthenticateUniversal_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics::NewProp_userId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics::NewProp_password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/*\n    * Authenticate the user using a userid and password (without any validation on the userid).\n    * Similar to AuthenticateEmailPassword - except that that method has additional features to\n    * allow for e-mail validation, password resets, etc.\n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * Param - email  The e-mail address of the user\n    * Param - password  The password of the user\n    * Param - forceCreate Should a new profile be created for this user if the account does not exist?\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "* Authenticate the user using a userid and password (without any validation on the userid).\n* Similar to AuthenticateEmailPassword - except that that method has additional features to\n* allow for e-mail validation, password resets, etc.\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* Param - email  The e-mail address of the user\n* Param - password  The password of the user\n* Param - forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "AuthenticateUniversal", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventAuthenticateUniversal_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_ClearSavedProfileId_Statics
	{
		struct BCAuthenticationProxy_eventClearSavedProfileId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ClearSavedProfileId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventClearSavedProfileId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_ClearSavedProfileId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ClearSavedProfileId_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ClearSavedProfileId_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/**\n    * Used to clear the saved profile id - to use in cases when the user is\n    * attempting to switch to a different game profile.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "Used to clear the saved profile id - to use in cases when the user is\nattempting to switch to a different game profile." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_ClearSavedProfileId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "ClearSavedProfileId", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventClearSavedProfileId_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_ClearSavedProfileId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ClearSavedProfileId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ClearSavedProfileId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ClearSavedProfileId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_ClearSavedProfileId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_ClearSavedProfileId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_GenerateAnonymousId_Statics
	{
		struct BCAuthenticationProxy_eventGenerateAnonymousId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_GenerateAnonymousId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventGenerateAnonymousId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_GenerateAnonymousId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventGenerateAnonymousId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_GenerateAnonymousId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_GenerateAnonymousId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_GenerateAnonymousId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_GenerateAnonymousId_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/**\n\x09* Used to create the anonymous installation id for the brainCloud profile.\n\x09* Returns - A unique Anonymous ID\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "Used to create the anonymous installation id for the brainCloud profile.\nReturns - A unique Anonymous ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_GenerateAnonymousId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "GenerateAnonymousId", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventGenerateAnonymousId_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_GenerateAnonymousId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_GenerateAnonymousId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_GenerateAnonymousId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_GenerateAnonymousId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_GenerateAnonymousId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_GenerateAnonymousId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_GetAnonymousId_Statics
	{
		struct BCAuthenticationProxy_eventGetAnonymousId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_GetAnonymousId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventGetAnonymousId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_GetAnonymousId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_GetAnonymousId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventGetAnonymousId_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_GetAnonymousId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_GetAnonymousId_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_GetAnonymousId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_GetAnonymousId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_GetAnonymousId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_GetAnonymousId_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "//Getters\n" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "Getters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_GetAnonymousId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "GetAnonymousId", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventGetAnonymousId_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_GetAnonymousId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_GetAnonymousId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_GetAnonymousId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_GetAnonymousId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_GetAnonymousId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_GetAnonymousId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_GetProfileId_Statics
	{
		struct BCAuthenticationProxy_eventGetProfileId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_GetProfileId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventGetProfileId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_GetProfileId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_GetProfileId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventGetProfileId_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_GetProfileId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_GetProfileId_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_GetProfileId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_GetProfileId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_GetProfileId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_GetProfileId_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Authentication" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_GetProfileId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "GetProfileId", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventGetProfileId_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_GetProfileId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_GetProfileId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_GetProfileId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_GetProfileId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_GetProfileId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_GetProfileId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics
	{
		struct BCAuthenticationProxy_eventInitialize_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString profileId;
			FString anonymousId;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_anonymousId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_anonymousId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventInitialize_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventInitialize_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics::NewProp_profileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics::NewProp_anonymousId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics::NewProp_anonymousId = { "anonymousId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventInitialize_Parms, anonymousId), METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics::NewProp_anonymousId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics::NewProp_anonymousId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics::NewProp_anonymousId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/**\n    * Initializes the identity service with the saved\n    * anonymous installation id and most recently used profile id\n    * @param anonymousId - The anonymous installation id that was generated for this device\n    * @param profileId - The id of the profile id that was most recently used by the app (on this device)\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "Initializes the identity service with the saved\nanonymous installation id and most recently used profile id\n@param anonymousId - The anonymous installation id that was generated for this device\n@param profileId - The id of the profile id that was most recently used by the app (on this device)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "Initialize", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventInitialize_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPassword_Statics
	{
		struct BCAuthenticationProxy_eventResetEmailPassword_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString email;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_email;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPassword_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetEmailPassword_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPassword_Statics::NewProp_email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPassword_Statics::NewProp_email = { "email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetEmailPassword_Parms, email), METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPassword_Statics::NewProp_email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPassword_Statics::NewProp_email_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPassword_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetEmailPassword_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPassword_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPassword_Statics::NewProp_email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPassword_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPassword_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/**\n    * Reset Email password - Sends a password reset email to the specified address\n    *\n    * Service Name - Authenticate\n    * Operation - ResetEmailPassword\n    *\n    * Param - externalId The email address to send the reset email to.\n    * Param - callback The method to be invoked when the server response is received\n    *\n    * Note the follow error reason codes:\n    * SECURITY_ERROR (40209) - If the email address cannot be found.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "Reset Email password - Sends a password reset email to the specified address\n\nService Name - Authenticate\nOperation - ResetEmailPassword\n\nParam - externalId The email address to send the reset email to.\nParam - callback The method to be invoked when the server response is received\n\nNote the follow error reason codes:\nSECURITY_ERROR (40209) - If the email address cannot be found." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "ResetEmailPassword", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventResetEmailPassword_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics
	{
		struct BCAuthenticationProxy_eventResetEmailPasswordAdvanced_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString email;
			FString serviceParams;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serviceParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_serviceParams;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetEmailPasswordAdvanced_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::NewProp_email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::NewProp_email = { "email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetEmailPasswordAdvanced_Parms, email), METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::NewProp_email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::NewProp_email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::NewProp_serviceParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::NewProp_serviceParams = { "serviceParams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetEmailPasswordAdvanced_Parms, serviceParams), METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::NewProp_serviceParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::NewProp_serviceParams_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetEmailPasswordAdvanced_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::NewProp_email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::NewProp_serviceParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/**\n    * Reset Email password with service parameters- Sends a password reset email to the specified address\n    *\n    * Service Name - Authenticate\n    * Operation - ResetEmailPasswordAdvanced\n    *\n    * @param appId the application id\n    * @param emailAddress The email address to send the reset email to.\n    * @param serviceParams parameters to send to the email service see the doc for a full \n    * list. http://getbraincloud.com/apidocs/apiref/#capi-mail\n    * @param callback The method to be invoked when the server response is received\n    * @return The JSON returned in the callback is as follows:\n    * {\n    *   \"status\": 200,\n    *   \"data\": {}\n    * }\n    *\n    * Note the follow error reason codes:\n    *\n    * SECURITY_ERROR (40209) - If the email address cannot be found.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "Reset Email password with service parameters- Sends a password reset email to the specified address\n\nService Name - Authenticate\nOperation - ResetEmailPasswordAdvanced\n\n@param appId the application id\n@param emailAddress The email address to send the reset email to.\n@param serviceParams parameters to send to the email service see the doc for a full\nlist. http://getbraincloud.com/apidocs/apiref/#capi-mail\n@param callback The method to be invoked when the server response is received\n@return The JSON returned in the callback is as follows:\n{\n  \"status\": 200,\n  \"data\": {}\n}\n\nNote the follow error reason codes:\n\nSECURITY_ERROR (40209) - If the email address cannot be found." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "ResetEmailPasswordAdvanced", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventResetEmailPasswordAdvanced_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics
	{
		struct BCAuthenticationProxy_eventResetEmailPasswordAdvancedWithExpiry_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString email;
			FString in_serviceParams;
			int32 in_tokenTtlInMinutes;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_serviceParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_serviceParams;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_tokenTtlInMinutes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetEmailPasswordAdvancedWithExpiry_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_email = { "email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetEmailPasswordAdvancedWithExpiry_Parms, email), METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_in_serviceParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_in_serviceParams = { "in_serviceParams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetEmailPasswordAdvancedWithExpiry_Parms, in_serviceParams), METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_in_serviceParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_in_serviceParams_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_in_tokenTtlInMinutes = { "in_tokenTtlInMinutes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetEmailPasswordAdvancedWithExpiry_Parms, in_tokenTtlInMinutes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetEmailPasswordAdvancedWithExpiry_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_in_serviceParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_in_tokenTtlInMinutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/**\n    * Reset Email password with service parameters with token expiry- Sends a password reset email to the specified address\n    *\n    * Service Name - Authenticate\n    * Operation - ResetEmailPasswordAdvanced\n    *\n    * @param appId the application id\n    * @param emailAddress The email address to send the reset email to.\n    * @param serviceParams parameters to send to the email service see the doc for a full \n    * @param in_tokenTtlInMinutes the expiry token value\n    * list. http://getbraincloud.com/apidocs/apiref/#capi-mail\n    * @param callback The method to be invoked when the server response is received\n    * @return The JSON returned in the callback is as follows:\n    * {\n    *   \"status\": 200,\n    *   \"data\": {}\n    * }\n    *\n    * Note the follow error reason codes:\n    *\n    * SECURITY_ERROR (40209) - If the email address cannot be found.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "Reset Email password with service parameters with token expiry- Sends a password reset email to the specified address\n\nService Name - Authenticate\nOperation - ResetEmailPasswordAdvanced\n\n@param appId the application id\n@param emailAddress The email address to send the reset email to.\n@param serviceParams parameters to send to the email service see the doc for a full\n@param in_tokenTtlInMinutes the expiry token value\nlist. http://getbraincloud.com/apidocs/apiref/#capi-mail\n@param callback The method to be invoked when the server response is received\n@return The JSON returned in the callback is as follows:\n{\n  \"status\": 200,\n  \"data\": {}\n}\n\nNote the follow error reason codes:\n\nSECURITY_ERROR (40209) - If the email address cannot be found." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "ResetEmailPasswordAdvancedWithExpiry", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventResetEmailPasswordAdvancedWithExpiry_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry_Statics
	{
		struct BCAuthenticationProxy_eventResetEmailPasswordWithExpiry_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString email;
			int32 in_tokenTtlInMinutes;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_email;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_tokenTtlInMinutes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetEmailPasswordWithExpiry_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_email = { "email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetEmailPasswordWithExpiry_Parms, email), METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_email_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_in_tokenTtlInMinutes = { "in_tokenTtlInMinutes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetEmailPasswordWithExpiry_Parms, in_tokenTtlInMinutes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetEmailPasswordWithExpiry_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_in_tokenTtlInMinutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/**\n    * Reset Email password with a token expiry - Sends a password reset email to the specified address\n    *\n    * Service Name - Authenticate\n    * Operation - ResetEmailPassword\n    *\n    * @param email The email address to send the reset email to.\n    * @param in_tokenTtlInMinutes the token expiry value\n    * @param callback The method to be invoked when the server response is received\n    * @return The JSON returned in the callback is as follows:\n    * {\n    *   \"status\": 200,\n    *   \"data\": {}\n    * }\n    *\n    * Note the follow error reason codes:\n    *\n    * SECURITY_ERROR (40209) - If the email address cannot be found.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "Reset Email password with a token expiry - Sends a password reset email to the specified address\n\nService Name - Authenticate\nOperation - ResetEmailPassword\n\n@param email The email address to send the reset email to.\n@param in_tokenTtlInMinutes the token expiry value\n@param callback The method to be invoked when the server response is received\n@return The JSON returned in the callback is as follows:\n{\n  \"status\": 200,\n  \"data\": {}\n}\n\nNote the follow error reason codes:\n\nSECURITY_ERROR (40209) - If the email address cannot be found." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "ResetEmailPasswordWithExpiry", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventResetEmailPasswordWithExpiry_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPassword_Statics
	{
		struct BCAuthenticationProxy_eventResetUniversalIdPassword_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_universalId;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_universalId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_universalId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPassword_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetUniversalIdPassword_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPassword_Statics::NewProp_in_universalId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPassword_Statics::NewProp_in_universalId = { "in_universalId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetUniversalIdPassword_Parms, in_universalId), METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPassword_Statics::NewProp_in_universalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPassword_Statics::NewProp_in_universalId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPassword_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetUniversalIdPassword_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPassword_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPassword_Statics::NewProp_in_universalId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPassword_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPassword_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/**\n    * Reset Universal Id password with service parameters \n    *\n    * Service Name - Authenticate\n    * Operation - ResetEmailPasswordAdvanced\n    *\n    * @param appId the application id\n    * @param universalId The email address to send the reset email to.\n    * @param in_tokenTtlInMinutes the expiry token value\n    * list. http://getbraincloud.com/apidocs/apiref/#capi-mail\n    * @param callback The method to be invoked when the server response is received\n    * @return The JSON returned in the callback is as follows:\n    * {\n    *   \"status\": 200,\n    *   \"data\": {}\n    * }\n    *\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "Reset Universal Id password with service parameters\n\nService Name - Authenticate\nOperation - ResetEmailPasswordAdvanced\n\n@param appId the application id\n@param universalId The email address to send the reset email to.\n@param in_tokenTtlInMinutes the expiry token value\nlist. http://getbraincloud.com/apidocs/apiref/#capi-mail\n@param callback The method to be invoked when the server response is received\n@return The JSON returned in the callback is as follows:\n{\n  \"status\": 200,\n  \"data\": {}\n}" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "ResetUniversalIdPassword", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventResetUniversalIdPassword_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics
	{
		struct BCAuthenticationProxy_eventResetUniversalIdPasswordAdvanced_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_universalId;
			FString in_serviceParams;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_universalId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_universalId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_serviceParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_serviceParams;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetUniversalIdPasswordAdvanced_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_in_universalId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_in_universalId = { "in_universalId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetUniversalIdPasswordAdvanced_Parms, in_universalId), METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_in_universalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_in_universalId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_in_serviceParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_in_serviceParams = { "in_serviceParams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetUniversalIdPasswordAdvanced_Parms, in_serviceParams), METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_in_serviceParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_in_serviceParams_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetUniversalIdPasswordAdvanced_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_in_universalId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_in_serviceParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/**\n    * Reset Universal Id password with service parameters \n    *\n    * Service Name - Authenticate\n    * Operation - ResetEmailPasswordAdvanced\n    *\n    * @param appId the application id\n    * @param universalId The email address to send the reset email to.\n    * @param serviceParams parameters to send to the email service see the doc for a full \n    * list. http://getbraincloud.com/apidocs/apiref/#capi-mail\n    * @param callback The method to be invoked when the server response is received\n    * @return The JSON returned in the callback is as follows:\n    * {\n    *   \"status\": 200,\n    *   \"data\": {}\n    * }\n    *\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "Reset Universal Id password with service parameters\n\nService Name - Authenticate\nOperation - ResetEmailPasswordAdvanced\n\n@param appId the application id\n@param universalId The email address to send the reset email to.\n@param serviceParams parameters to send to the email service see the doc for a full\nlist. http://getbraincloud.com/apidocs/apiref/#capi-mail\n@param callback The method to be invoked when the server response is received\n@return The JSON returned in the callback is as follows:\n{\n  \"status\": 200,\n  \"data\": {}\n}" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "ResetUniversalIdPasswordAdvanced", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventResetUniversalIdPasswordAdvanced_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics
	{
		struct BCAuthenticationProxy_eventResetUniversalIdPasswordAdvancedWithExpiry_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_universalId;
			FString in_serviceParams;
			int32 in_tokenTtlInMinutes;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_universalId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_universalId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_serviceParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_serviceParams;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_tokenTtlInMinutes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetUniversalIdPasswordAdvancedWithExpiry_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_universalId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_universalId = { "in_universalId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetUniversalIdPasswordAdvancedWithExpiry_Parms, in_universalId), METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_universalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_universalId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_serviceParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_serviceParams = { "in_serviceParams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetUniversalIdPasswordAdvancedWithExpiry_Parms, in_serviceParams), METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_serviceParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_serviceParams_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_tokenTtlInMinutes = { "in_tokenTtlInMinutes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetUniversalIdPasswordAdvancedWithExpiry_Parms, in_tokenTtlInMinutes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetUniversalIdPasswordAdvancedWithExpiry_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_universalId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_serviceParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_tokenTtlInMinutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/**\n    * Reset Universal Id password with service parameters and with expiry \n    *\n    * Service Name - Authenticate\n    * Operation - ResetEmailPasswordAdvanced\n    *\n    * @param appId the application id\n    * @param universalId The email address to send the reset email to.\n    * @param in_tokenTtlInMinutes the expiry token value\n    * @param serviceParams parameters to send to the email service see the doc for a full \n    * list. http://getbraincloud.com/apidocs/apiref/#capi-mail\n    * @param callback The method to be invoked when the server response is received\n    * @return The JSON returned in the callback is as follows:\n    * {\n    *   \"status\": 200,\n    *   \"data\": {}\n    * }\n    *\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "Reset Universal Id password with service parameters and with expiry\n\nService Name - Authenticate\nOperation - ResetEmailPasswordAdvanced\n\n@param appId the application id\n@param universalId The email address to send the reset email to.\n@param in_tokenTtlInMinutes the expiry token value\n@param serviceParams parameters to send to the email service see the doc for a full\nlist. http://getbraincloud.com/apidocs/apiref/#capi-mail\n@param callback The method to be invoked when the server response is received\n@return The JSON returned in the callback is as follows:\n{\n  \"status\": 200,\n  \"data\": {}\n}" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "ResetUniversalIdPasswordAdvancedWithExpiry", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventResetUniversalIdPasswordAdvancedWithExpiry_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry_Statics
	{
		struct BCAuthenticationProxy_eventResetUniversalIdPasswordWithExpiry_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_universalId;
			int32 in_tokenTtlInMinutes;
			UBCAuthenticationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_universalId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_universalId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_tokenTtlInMinutes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetUniversalIdPasswordWithExpiry_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_in_universalId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_in_universalId = { "in_universalId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetUniversalIdPasswordWithExpiry_Parms, in_universalId), METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_in_universalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_in_universalId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_in_tokenTtlInMinutes = { "in_tokenTtlInMinutes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetUniversalIdPasswordWithExpiry_Parms, in_tokenTtlInMinutes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventResetUniversalIdPasswordWithExpiry_Parms, ReturnValue), Z_Construct_UClass_UBCAuthenticationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_in_universalId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_in_tokenTtlInMinutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "/**\n    * Reset Universal Id password with service parameters and with expiry\n    *\n    * Service Name - Authenticate\n    * Operation - ResetEmailPasswordAdvanced\n    *\n    * @param appId the application id\n    * @param universalId The email address to send the reset email to.\n    * @param in_tokenTtlInMinutes the expiry token value\n    * list. http://getbraincloud.com/apidocs/apiref/#capi-mail\n    * @param callback The method to be invoked when the server response is received\n    * @return The JSON returned in the callback is as follows:\n    * {\n    *   \"status\": 200,\n    *   \"data\": {}\n    * }\n    *\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "Reset Universal Id password with service parameters and with expiry\n\nService Name - Authenticate\nOperation - ResetEmailPasswordAdvanced\n\n@param appId the application id\n@param universalId The email address to send the reset email to.\n@param in_tokenTtlInMinutes the expiry token value\nlist. http://getbraincloud.com/apidocs/apiref/#capi-mail\n@param callback The method to be invoked when the server response is received\n@return The JSON returned in the callback is as follows:\n{\n  \"status\": 200,\n  \"data\": {}\n}" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "ResetUniversalIdPasswordWithExpiry", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventResetUniversalIdPasswordWithExpiry_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_SetAnonymousId_Statics
	{
		struct BCAuthenticationProxy_eventSetAnonymousId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString anonymousId;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_anonymousId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_SetAnonymousId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventSetAnonymousId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_SetAnonymousId_Statics::NewProp_anonymousId = { "anonymousId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventSetAnonymousId_Parms, anonymousId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_SetAnonymousId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_SetAnonymousId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_SetAnonymousId_Statics::NewProp_anonymousId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_SetAnonymousId_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Authentication" },
		{ "Comment", "//Setters\n" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ToolTip", "Setters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_SetAnonymousId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "SetAnonymousId", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventSetAnonymousId_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_SetAnonymousId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_SetAnonymousId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_SetAnonymousId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_SetAnonymousId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_SetAnonymousId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_SetAnonymousId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCAuthenticationProxy_SetProfileId_Statics
	{
		struct BCAuthenticationProxy_eventSetProfileId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString profileId;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_SetProfileId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventSetProfileId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCAuthenticationProxy_SetProfileId_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCAuthenticationProxy_eventSetProfileId_Parms, profileId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCAuthenticationProxy_SetProfileId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_SetProfileId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCAuthenticationProxy_SetProfileId_Statics::NewProp_profileId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCAuthenticationProxy_SetProfileId_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Authentication" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCAuthenticationProxy_SetProfileId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCAuthenticationProxy, nullptr, "SetProfileId", nullptr, nullptr, sizeof(BCAuthenticationProxy_eventSetProfileId_Parms), Z_Construct_UFunction_UBCAuthenticationProxy_SetProfileId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_SetProfileId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCAuthenticationProxy_SetProfileId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCAuthenticationProxy_SetProfileId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCAuthenticationProxy_SetProfileId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCAuthenticationProxy_SetProfileId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCAuthenticationProxy_NoRegister()
	{
		return UBCAuthenticationProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCAuthenticationProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCAuthenticationProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCAuthenticationProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateAnonymous, "AuthenticateAnonymous" }, // 3176184580
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateApple, "AuthenticateApple" }, // 2383509619
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateEmailPassword, "AuthenticateEmailPassword" }, // 491276972
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateExternal, "AuthenticateExternal" }, // 2516423821
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebook, "AuthenticateFacebook" }, // 2287064716
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateFacebookLimited, "AuthenticateFacebookLimited" }, // 3344264147
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGameCenter, "AuthenticateGameCenter" }, // 2914927665
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogle, "AuthenticateGoogle" }, // 1440402947
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateGoogleOpenId, "AuthenticateGoogleOpenId" }, // 617836721
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateHandoff, "AuthenticateHandoff" }, // 3394960158
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateOculus, "AuthenticateOculus" }, // 4032810149
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateParse, "AuthenticateParse" }, // 4078039016
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticatePlaystationNetwork, "AuthenticatePlaystationNetwork" }, // 2441909426
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSettopHandoff, "AuthenticateSettopHandoff" }, // 3061621975
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateSteam, "AuthenticateSteam" }, // 4244667772
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateTwitter, "AuthenticateTwitter" }, // 3431949985
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_AuthenticateUniversal, "AuthenticateUniversal" }, // 3448936385
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_ClearSavedProfileId, "ClearSavedProfileId" }, // 3664951574
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_GenerateAnonymousId, "GenerateAnonymousId" }, // 866118562
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_GetAnonymousId, "GetAnonymousId" }, // 2957025895
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_GetProfileId, "GetProfileId" }, // 2927469786
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_Initialize, "Initialize" }, // 2636604288
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPassword, "ResetEmailPassword" }, // 2050139762
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvanced, "ResetEmailPasswordAdvanced" }, // 342922494
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordAdvancedWithExpiry, "ResetEmailPasswordAdvancedWithExpiry" }, // 3733029741
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_ResetEmailPasswordWithExpiry, "ResetEmailPasswordWithExpiry" }, // 1585071342
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPassword, "ResetUniversalIdPassword" }, // 1016438952
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvanced, "ResetUniversalIdPasswordAdvanced" }, // 703642412
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordAdvancedWithExpiry, "ResetUniversalIdPasswordAdvancedWithExpiry" }, // 2648765497
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_ResetUniversalIdPasswordWithExpiry, "ResetUniversalIdPasswordWithExpiry" }, // 2763250360
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_SetAnonymousId, "SetAnonymousId" }, // 1587325993
		{ &Z_Construct_UFunction_UBCAuthenticationProxy_SetProfileId, "SetProfileId" }, // 1386568296
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCAuthenticationProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCAuthenticationProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCAuthenticationProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCAuthenticationProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCAuthenticationProxy_Statics::ClassParams = {
		&UBCAuthenticationProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCAuthenticationProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCAuthenticationProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCAuthenticationProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCAuthenticationProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCAuthenticationProxy, 2528169918);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCAuthenticationProxy>()
	{
		return UBCAuthenticationProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCAuthenticationProxy(Z_Construct_UClass_UBCAuthenticationProxy, &UBCAuthenticationProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCAuthenticationProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCAuthenticationProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
