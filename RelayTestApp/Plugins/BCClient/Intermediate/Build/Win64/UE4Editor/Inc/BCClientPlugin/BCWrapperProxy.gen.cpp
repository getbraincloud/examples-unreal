// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCWrapperProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCWrapperProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCWrapperProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCWrapperProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCWrapperProxy::execGetStoredAnonymousId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBCWrapperProxy::GetStoredAnonymousId(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execSetStoredAnonymousId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_anonymousId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCWrapperProxy::SetStoredAnonymousId(Z_Param_brainCloudWrapper,Z_Param_anonymousId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execGetStoredProfileId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBCWrapperProxy::GetStoredProfileId(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execSetStoredProfileId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCWrapperProxy::SetStoredProfileId(Z_Param_brainCloudWrapper,Z_Param_profileId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execResetUniversalIdPasswordAdvancedWithExpiry)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_universalId);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_serviceParams);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_tokenTtlInMinutes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::ResetUniversalIdPasswordAdvancedWithExpiry(Z_Param_brainCloudWrapper,Z_Param_in_universalId,Z_Param_in_serviceParams,Z_Param_in_tokenTtlInMinutes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execResetUniversalIdPasswordWithExpiry)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_universalId);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_tokenTtlInMinutes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::ResetUniversalIdPasswordWithExpiry(Z_Param_brainCloudWrapper,Z_Param_in_universalId,Z_Param_in_tokenTtlInMinutes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execResetUniversalIdPasswordAdvanced)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_universalId);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_serviceParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::ResetUniversalIdPasswordAdvanced(Z_Param_brainCloudWrapper,Z_Param_in_universalId,Z_Param_in_serviceParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execResetUniversalIdPassword)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_universalId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::ResetUniversalIdPassword(Z_Param_brainCloudWrapper,Z_Param_in_universalId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execResetEmailPasswordAdvancedWithExpiry)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_email);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_serviceParams);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_tokenTtlInMinutes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::ResetEmailPasswordAdvancedWithExpiry(Z_Param_brainCloudWrapper,Z_Param_email,Z_Param_in_serviceParams,Z_Param_in_tokenTtlInMinutes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execResetEmailPasswordWithExpiry)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_email);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_tokenTtlInMinutes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::ResetEmailPasswordWithExpiry(Z_Param_brainCloudWrapper,Z_Param_email,Z_Param_in_tokenTtlInMinutes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execResetEmailPasswordAdvanced)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_email);
		P_GET_PROPERTY(FStrProperty,Z_Param_serviceParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::ResetEmailPasswordAdvanced(Z_Param_brainCloudWrapper,Z_Param_email,Z_Param_serviceParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execResetEmailPassword)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_email);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::ResetEmailPassword(Z_Param_brainCloudWrapper,Z_Param_email);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execSmartSwitchAuthenticateUniversal)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_userid);
		P_GET_PROPERTY(FStrProperty,Z_Param_password);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::SmartSwitchAuthenticateUniversal(Z_Param_brainCloudWrapper,Z_Param_userid,Z_Param_password,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execSmartSwitchAuthenticateTwitter)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_userid);
		P_GET_PROPERTY(FStrProperty,Z_Param_token);
		P_GET_PROPERTY(FStrProperty,Z_Param_secret);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::SmartSwitchAuthenticateTwitter(Z_Param_brainCloudWrapper,Z_Param_userid,Z_Param_token,Z_Param_secret,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execSmartSwitchAuthenticateSteam)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_userid);
		P_GET_PROPERTY(FStrProperty,Z_Param_sessionticket);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::SmartSwitchAuthenticateSteam(Z_Param_brainCloudWrapper,Z_Param_userid,Z_Param_sessionticket,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execSmartSwitchAuthenticateApple)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_appleUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_identityToken);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::SmartSwitchAuthenticateApple(Z_Param_brainCloudWrapper,Z_Param_appleUserId,Z_Param_identityToken,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execSmartSwitchAuthenticateGoogleOpenId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_googleUserAccountEmail);
		P_GET_PROPERTY(FStrProperty,Z_Param_IdToken);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::SmartSwitchAuthenticateGoogleOpenId(Z_Param_brainCloudWrapper,Z_Param_googleUserAccountEmail,Z_Param_IdToken,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execSmartSwitchAuthenticateGoogle)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_userid);
		P_GET_PROPERTY(FStrProperty,Z_Param_token);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::SmartSwitchAuthenticateGoogle(Z_Param_brainCloudWrapper,Z_Param_userid,Z_Param_token,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execSmartSwitchAuthenticateGameCenter)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_gameCenterId);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::SmartSwitchAuthenticateGameCenter(Z_Param_brainCloudWrapper,Z_Param_gameCenterId,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execSmartSwitchAuthenticateOculus)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_oculusUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_oculusNonce);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::SmartSwitchAuthenticateOculus(Z_Param_brainCloudWrapper,Z_Param_oculusUserId,Z_Param_oculusNonce,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execSmartSwitchAuthenticateFacebookLimited)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_fbLimitedUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_fbAuthToken);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::SmartSwitchAuthenticateFacebookLimited(Z_Param_brainCloudWrapper,Z_Param_fbLimitedUserId,Z_Param_fbAuthToken,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execSmartSwitchAuthenticateFacebook)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_fbUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_fbAuthToken);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::SmartSwitchAuthenticateFacebook(Z_Param_brainCloudWrapper,Z_Param_fbUserId,Z_Param_fbAuthToken,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execSmartSwitchAuthenticateExternal)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_userid);
		P_GET_PROPERTY(FStrProperty,Z_Param_token);
		P_GET_PROPERTY(FStrProperty,Z_Param_externalAuthName);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::SmartSwitchAuthenticateExternal(Z_Param_brainCloudWrapper,Z_Param_userid,Z_Param_token,Z_Param_externalAuthName,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execSmartSwitchAuthenticateEmailPassword)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_email);
		P_GET_PROPERTY(FStrProperty,Z_Param_password);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::SmartSwitchAuthenticateEmailPassword(Z_Param_brainCloudWrapper,Z_Param_email,Z_Param_password,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execAuthenticateSettopHandoff)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_handoffCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::AuthenticateSettopHandoff(Z_Param_brainCloudWrapper,Z_Param_handoffCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execAuthenticateHandoff)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_handoffId);
		P_GET_PROPERTY(FStrProperty,Z_Param_securityToken);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::AuthenticateHandoff(Z_Param_brainCloudWrapper,Z_Param_handoffId,Z_Param_securityToken,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execAuthenticateUniversal)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_userid);
		P_GET_PROPERTY(FStrProperty,Z_Param_password);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::AuthenticateUniversal(Z_Param_brainCloudWrapper,Z_Param_userid,Z_Param_password,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execAuthenticateTwitter)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_userid);
		P_GET_PROPERTY(FStrProperty,Z_Param_token);
		P_GET_PROPERTY(FStrProperty,Z_Param_secret);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::AuthenticateTwitter(Z_Param_brainCloudWrapper,Z_Param_userid,Z_Param_token,Z_Param_secret,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execAuthenticateSteam)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_userid);
		P_GET_PROPERTY(FStrProperty,Z_Param_sessionticket);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::AuthenticateSteam(Z_Param_brainCloudWrapper,Z_Param_userid,Z_Param_sessionticket,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execAuthenticateApple)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_appleUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_identityToken);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::AuthenticateApple(Z_Param_brainCloudWrapper,Z_Param_appleUserId,Z_Param_identityToken,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execAuthenticateGoogleOpenId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_googleUserAccountEmail);
		P_GET_PROPERTY(FStrProperty,Z_Param_IdToken);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::AuthenticateGoogleOpenId(Z_Param_brainCloudWrapper,Z_Param_googleUserAccountEmail,Z_Param_IdToken,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execAuthenticateGoogle)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_userid);
		P_GET_PROPERTY(FStrProperty,Z_Param_token);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::AuthenticateGoogle(Z_Param_brainCloudWrapper,Z_Param_userid,Z_Param_token,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execAuthenticateGameCenter)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_gameCenterId);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::AuthenticateGameCenter(Z_Param_brainCloudWrapper,Z_Param_gameCenterId,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execAuthenticatePlaystationNetwork)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_psnAccountId);
		P_GET_PROPERTY(FStrProperty,Z_Param_psnAuthToken);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::AuthenticatePlaystationNetwork(Z_Param_brainCloudWrapper,Z_Param_psnAccountId,Z_Param_psnAuthToken,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execAuthenticateOculus)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_oculusUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_oculusNonce);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::AuthenticateOculus(Z_Param_brainCloudWrapper,Z_Param_oculusUserId,Z_Param_oculusNonce,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execAuthenticateFacebookLimited)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_fbLimitedUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_fbAuthToken);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::AuthenticateFacebookLimited(Z_Param_brainCloudWrapper,Z_Param_fbLimitedUserId,Z_Param_fbAuthToken,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execAuthenticateFacebook)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_fbUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_fbAuthToken);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::AuthenticateFacebook(Z_Param_brainCloudWrapper,Z_Param_fbUserId,Z_Param_fbAuthToken,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execAuthenticateExternal)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_userid);
		P_GET_PROPERTY(FStrProperty,Z_Param_token);
		P_GET_PROPERTY(FStrProperty,Z_Param_externalAuthName);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::AuthenticateExternal(Z_Param_brainCloudWrapper,Z_Param_userid,Z_Param_token,Z_Param_externalAuthName,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execAuthenticateEmailPassword)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_email);
		P_GET_PROPERTY(FStrProperty,Z_Param_password);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::AuthenticateEmailPassword(Z_Param_brainCloudWrapper,Z_Param_email,Z_Param_password,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execAuthenticateAnonymous)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCWrapperProxy**)Z_Param__Result=UBCWrapperProxy::AuthenticateAnonymous(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execInitializeWithApps)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_serverUrl);
		P_GET_PROPERTY(FStrProperty,Z_Param_appId);
		P_GET_TMAP(FString,FString,Z_Param_secretMap);
		P_GET_PROPERTY(FStrProperty,Z_Param_version);
		P_GET_PROPERTY(FStrProperty,Z_Param_company);
		P_GET_PROPERTY(FStrProperty,Z_Param_appName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCWrapperProxy::InitializeWithApps(Z_Param_brainCloudWrapper,Z_Param_serverUrl,Z_Param_appId,Z_Param_secretMap,Z_Param_version,Z_Param_company,Z_Param_appName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execInitialize)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_serverUrl);
		P_GET_PROPERTY(FStrProperty,Z_Param_secretKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_appId);
		P_GET_PROPERTY(FStrProperty,Z_Param_version);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCWrapperProxy::Initialize(Z_Param_brainCloudWrapper,Z_Param_serverUrl,Z_Param_secretKey,Z_Param_appId,Z_Param_version);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execSetAlwaysAllowProfileSwitch)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_alwaysAllow);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCWrapperProxy::SetAlwaysAllowProfileSwitch(Z_Param_brainCloudWrapper,Z_Param_alwaysAllow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execClearDefaultBrainCloudInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCWrapperProxy::ClearDefaultBrainCloudInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execSetDefaultBrainCloudInstance)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBCWrapperProxy::SetDefaultBrainCloudInstance(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCWrapperProxy::execCreateBrainCloudWrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_wrapperName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBrainCloudWrapper**)Z_Param__Result=UBCWrapperProxy::CreateBrainCloudWrapper(Z_Param_wrapperName);
		P_NATIVE_END;
	}
	void UBCWrapperProxy::StaticRegisterNativesUBCWrapperProxy()
	{
		UClass* Class = UBCWrapperProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AuthenticateAnonymous", &UBCWrapperProxy::execAuthenticateAnonymous },
			{ "AuthenticateApple", &UBCWrapperProxy::execAuthenticateApple },
			{ "AuthenticateEmailPassword", &UBCWrapperProxy::execAuthenticateEmailPassword },
			{ "AuthenticateExternal", &UBCWrapperProxy::execAuthenticateExternal },
			{ "AuthenticateFacebook", &UBCWrapperProxy::execAuthenticateFacebook },
			{ "AuthenticateFacebookLimited", &UBCWrapperProxy::execAuthenticateFacebookLimited },
			{ "AuthenticateGameCenter", &UBCWrapperProxy::execAuthenticateGameCenter },
			{ "AuthenticateGoogle", &UBCWrapperProxy::execAuthenticateGoogle },
			{ "AuthenticateGoogleOpenId", &UBCWrapperProxy::execAuthenticateGoogleOpenId },
			{ "AuthenticateHandoff", &UBCWrapperProxy::execAuthenticateHandoff },
			{ "AuthenticateOculus", &UBCWrapperProxy::execAuthenticateOculus },
			{ "AuthenticatePlaystationNetwork", &UBCWrapperProxy::execAuthenticatePlaystationNetwork },
			{ "AuthenticateSettopHandoff", &UBCWrapperProxy::execAuthenticateSettopHandoff },
			{ "AuthenticateSteam", &UBCWrapperProxy::execAuthenticateSteam },
			{ "AuthenticateTwitter", &UBCWrapperProxy::execAuthenticateTwitter },
			{ "AuthenticateUniversal", &UBCWrapperProxy::execAuthenticateUniversal },
			{ "ClearDefaultBrainCloudInstance", &UBCWrapperProxy::execClearDefaultBrainCloudInstance },
			{ "CreateBrainCloudWrapper", &UBCWrapperProxy::execCreateBrainCloudWrapper },
			{ "GetStoredAnonymousId", &UBCWrapperProxy::execGetStoredAnonymousId },
			{ "GetStoredProfileId", &UBCWrapperProxy::execGetStoredProfileId },
			{ "Initialize", &UBCWrapperProxy::execInitialize },
			{ "InitializeWithApps", &UBCWrapperProxy::execInitializeWithApps },
			{ "ResetEmailPassword", &UBCWrapperProxy::execResetEmailPassword },
			{ "ResetEmailPasswordAdvanced", &UBCWrapperProxy::execResetEmailPasswordAdvanced },
			{ "ResetEmailPasswordAdvancedWithExpiry", &UBCWrapperProxy::execResetEmailPasswordAdvancedWithExpiry },
			{ "ResetEmailPasswordWithExpiry", &UBCWrapperProxy::execResetEmailPasswordWithExpiry },
			{ "ResetUniversalIdPassword", &UBCWrapperProxy::execResetUniversalIdPassword },
			{ "ResetUniversalIdPasswordAdvanced", &UBCWrapperProxy::execResetUniversalIdPasswordAdvanced },
			{ "ResetUniversalIdPasswordAdvancedWithExpiry", &UBCWrapperProxy::execResetUniversalIdPasswordAdvancedWithExpiry },
			{ "ResetUniversalIdPasswordWithExpiry", &UBCWrapperProxy::execResetUniversalIdPasswordWithExpiry },
			{ "SetAlwaysAllowProfileSwitch", &UBCWrapperProxy::execSetAlwaysAllowProfileSwitch },
			{ "SetDefaultBrainCloudInstance", &UBCWrapperProxy::execSetDefaultBrainCloudInstance },
			{ "SetStoredAnonymousId", &UBCWrapperProxy::execSetStoredAnonymousId },
			{ "SetStoredProfileId", &UBCWrapperProxy::execSetStoredProfileId },
			{ "SmartSwitchAuthenticateApple", &UBCWrapperProxy::execSmartSwitchAuthenticateApple },
			{ "SmartSwitchAuthenticateEmailPassword", &UBCWrapperProxy::execSmartSwitchAuthenticateEmailPassword },
			{ "SmartSwitchAuthenticateExternal", &UBCWrapperProxy::execSmartSwitchAuthenticateExternal },
			{ "SmartSwitchAuthenticateFacebook", &UBCWrapperProxy::execSmartSwitchAuthenticateFacebook },
			{ "SmartSwitchAuthenticateFacebookLimited", &UBCWrapperProxy::execSmartSwitchAuthenticateFacebookLimited },
			{ "SmartSwitchAuthenticateGameCenter", &UBCWrapperProxy::execSmartSwitchAuthenticateGameCenter },
			{ "SmartSwitchAuthenticateGoogle", &UBCWrapperProxy::execSmartSwitchAuthenticateGoogle },
			{ "SmartSwitchAuthenticateGoogleOpenId", &UBCWrapperProxy::execSmartSwitchAuthenticateGoogleOpenId },
			{ "SmartSwitchAuthenticateOculus", &UBCWrapperProxy::execSmartSwitchAuthenticateOculus },
			{ "SmartSwitchAuthenticateSteam", &UBCWrapperProxy::execSmartSwitchAuthenticateSteam },
			{ "SmartSwitchAuthenticateTwitter", &UBCWrapperProxy::execSmartSwitchAuthenticateTwitter },
			{ "SmartSwitchAuthenticateUniversal", &UBCWrapperProxy::execSmartSwitchAuthenticateUniversal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_AuthenticateAnonymous_Statics
	{
		struct BCWrapperProxy_eventAuthenticateAnonymous_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateAnonymous_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateAnonymous_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateAnonymous_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateAnonymous_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_AuthenticateAnonymous_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateAnonymous_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateAnonymous_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_AuthenticateAnonymous_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/**\n     * Authenticate a user anonymously with brainCloud\n     *\n     * Service Name - Authenticate\n     * Service Operation - Authenticate\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "Authenticate a user anonymously with brainCloud\n\nService Name - Authenticate\nService Operation - Authenticate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateAnonymous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "AuthenticateAnonymous", nullptr, nullptr, sizeof(BCWrapperProxy_eventAuthenticateAnonymous_Parms), Z_Construct_UFunction_UBCWrapperProxy_AuthenticateAnonymous_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateAnonymous_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateAnonymous_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateAnonymous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_AuthenticateAnonymous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_AuthenticateAnonymous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics
	{
		struct BCWrapperProxy_eventAuthenticateApple_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString appleUserId;
			FString identityToken;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateApple_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics::NewProp_appleUserId = { "appleUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateApple_Parms, appleUserId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics::NewProp_identityToken = { "identityToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateApple_Parms, identityToken), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventAuthenticateApple_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventAuthenticateApple_Parms), &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateApple_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics::NewProp_appleUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics::NewProp_identityToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n    * Authenticate the user using a google userId and google server authentication code.\n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * @param appleUserId this can be user id OR the email of the user account\n    * @param identityToken  the token confirming the user's identity\n    * @param forceCreate Should a new profile be created for this user if the account does not exist?\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Authenticate the user using a google userId and google server authentication code.\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param appleUserId this can be user id OR the email of the user account\n* @param identityToken  the token confirming the user's identity\n* @param forceCreate Should a new profile be created for this user if the account does not exist?\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "AuthenticateApple", nullptr, nullptr, sizeof(BCWrapperProxy_eventAuthenticateApple_Parms), Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics
	{
		struct BCWrapperProxy_eventAuthenticateEmailPassword_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString email;
			FString password;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateEmailPassword_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics::NewProp_email = { "email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateEmailPassword_Parms, email), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics::NewProp_password = { "password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateEmailPassword_Parms, password), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventAuthenticateEmailPassword_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventAuthenticateEmailPassword_Parms), &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateEmailPassword_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics::NewProp_email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics::NewProp_password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n     * Authenticate the user with a custom Email and Password.  \n     *\n     * Note that the password sent from the client to the server is protected via SSL.\n     *\n     * Service Name - Authenticate\n     * Service Operation - Authenticate\n     *\n     * @param email  The e-mail address of the user\n     * @param password  The password of the user\n     * @param forceCreate Should a new profile be created for this user if the account does not exist?\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Authenticate the user with a custom Email and Password.\n*\n* Note that the password sent from the client to the server is protected via SSL.\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param email  The e-mail address of the user\n* @param password  The password of the user\n* @param forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "AuthenticateEmailPassword", nullptr, nullptr, sizeof(BCWrapperProxy_eventAuthenticateEmailPassword_Parms), Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics
	{
		struct BCWrapperProxy_eventAuthenticateExternal_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString userid;
			FString token;
			FString externalAuthName;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userid;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateExternal_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::NewProp_userid = { "userid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateExternal_Parms, userid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateExternal_Parms, token), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::NewProp_externalAuthName = { "externalAuthName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateExternal_Parms, externalAuthName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventAuthenticateExternal_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventAuthenticateExternal_Parms), &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateExternal_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::NewProp_userid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::NewProp_token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::NewProp_externalAuthName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/**\n     * Authenticate the user via cloud code (which in turn validates the supplied credentials against an external system).\n     * This allows the developer to extend brainCloud authentication to support other backend authentication systems.\n     *\n     * Service Name - Authenticate\n     * Server Operation - Authenticate\n     *\n     * @param userid The user id\n     * @param token The user token (password etc)\n     * @param externalAuthName The name of the cloud script to call for external authentication\n     * @param force Should a new profile be created for this user if the account does not exist?\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "Authenticate the user via cloud code (which in turn validates the supplied credentials against an external system).\nThis allows the developer to extend brainCloud authentication to support other backend authentication systems.\n\nService Name - Authenticate\nServer Operation - Authenticate\n\n@param userid The user id\n@param token The user token (password etc)\n@param externalAuthName The name of the cloud script to call for external authentication\n@param force Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "AuthenticateExternal", nullptr, nullptr, sizeof(BCWrapperProxy_eventAuthenticateExternal_Parms), Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics
	{
		struct BCWrapperProxy_eventAuthenticateFacebook_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString fbUserId;
			FString fbAuthToken;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fbUserId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fbAuthToken;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateFacebook_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics::NewProp_fbUserId = { "fbUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateFacebook_Parms, fbUserId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics::NewProp_fbAuthToken = { "fbAuthToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateFacebook_Parms, fbAuthToken), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventAuthenticateFacebook_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventAuthenticateFacebook_Parms), &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateFacebook_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics::NewProp_fbUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics::NewProp_fbAuthToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n     * Authenticate the user with brainCloud using their Facebook Credentials\n     *\n     * Service Name - Authenticate\n     * Service Operation - Authenticate\n     *\n     * @param fbUserId The facebook id of the user\n     * @param fbAuthToken The validated token from the Facebook SDK\n     *   (that will be further validated when sent to the bC service)\n     * @param forceCreate Should a new profile be created for this user if the account does not exist?\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Authenticate the user with brainCloud using their Facebook Credentials\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param fbUserId The facebook id of the user\n* @param fbAuthToken The validated token from the Facebook SDK\n*   (that will be further validated when sent to the bC service)\n* @param forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "AuthenticateFacebook", nullptr, nullptr, sizeof(BCWrapperProxy_eventAuthenticateFacebook_Parms), Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics
	{
		struct BCWrapperProxy_eventAuthenticateFacebookLimited_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString fbLimitedUserId;
			FString fbAuthToken;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fbLimitedUserId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fbAuthToken;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateFacebookLimited_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics::NewProp_fbLimitedUserId = { "fbLimitedUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateFacebookLimited_Parms, fbLimitedUserId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics::NewProp_fbAuthToken = { "fbAuthToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateFacebookLimited_Parms, fbAuthToken), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventAuthenticateFacebookLimited_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventAuthenticateFacebookLimited_Parms), &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateFacebookLimited_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics::NewProp_fbLimitedUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics::NewProp_fbAuthToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n     * Authenticate the user with brainCloud using their FacebookLimited Credentials\n     *\n     * Service Name - Authenticate\n     * Service Operation - Authenticate\n     *\n     * @param fbUserId The facebookLimited id of the user\n     * @param fbAuthToken The validated token from the Facebook SDK\n     *   (that will be further validated when sent to the bC service)\n     * @param forceCreate Should a new profile be created for this user if the account does not exist?\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Authenticate the user with brainCloud using their FacebookLimited Credentials\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param fbUserId The facebookLimited id of the user\n* @param fbAuthToken The validated token from the Facebook SDK\n*   (that will be further validated when sent to the bC service)\n* @param forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "AuthenticateFacebookLimited", nullptr, nullptr, sizeof(BCWrapperProxy_eventAuthenticateFacebookLimited_Parms), Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter_Statics
	{
		struct BCWrapperProxy_eventAuthenticateGameCenter_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString gameCenterId;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateGameCenter_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter_Statics::NewProp_gameCenterId = { "gameCenterId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateGameCenter_Parms, gameCenterId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventAuthenticateGameCenter_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventAuthenticateGameCenter_Parms), &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateGameCenter_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter_Statics::NewProp_gameCenterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n     * Authenticate the user using their Game Center id\n     *\n     * Service Name - Authenticate\n     * Service Operation - Authenticate\n     *\n     * @param gameCenterId The player's game center id  (use the playerID property from the local GKPlayer object)\n     * @param forceCreate Should a new profile be created for this user if the account does not exist?\n     * @param success The method to call in event of successful login\n     * @param failure The method to call in the event of an error during authentication\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Authenticate the user using their Game Center id\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param gameCenterId The player's game center id  (use the playerID property from the local GKPlayer object)\n* @param forceCreate Should a new profile be created for this user if the account does not exist?\n* @param success The method to call in event of successful login\n* @param failure The method to call in the event of an error during authentication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "AuthenticateGameCenter", nullptr, nullptr, sizeof(BCWrapperProxy_eventAuthenticateGameCenter_Parms), Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics
	{
		struct BCWrapperProxy_eventAuthenticateGoogle_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString userid;
			FString token;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userid;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateGoogle_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics::NewProp_userid = { "userid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateGoogle_Parms, userid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateGoogle_Parms, token), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventAuthenticateGoogle_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventAuthenticateGoogle_Parms), &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateGoogle_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics::NewProp_userid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics::NewProp_token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n     * Authenticate the user using a google userid(email address) and google authentication token.\n     *\n     * Service Name - Authenticate\n     * Service Operation - Authenticate\n     *\n     * @param userid  String representation of google+ userid (email)\n     * @param token  The authentication token derived via the google apis.\n     * @param forceCreate Should a new profile be created for this user if the account does not exist?\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Authenticate the user using a google userid(email address) and google authentication token.\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param userid  String representation of google+ userid (email)\n* @param token  The authentication token derived via the google apis.\n* @param forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "AuthenticateGoogle", nullptr, nullptr, sizeof(BCWrapperProxy_eventAuthenticateGoogle_Parms), Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics
	{
		struct BCWrapperProxy_eventAuthenticateGoogleOpenId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString googleUserAccountEmail;
			FString IdToken;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateGoogleOpenId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics::NewProp_googleUserAccountEmail = { "googleUserAccountEmail", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateGoogleOpenId_Parms, googleUserAccountEmail), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateGoogleOpenId_Parms, IdToken), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventAuthenticateGoogleOpenId_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventAuthenticateGoogleOpenId_Parms), &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateGoogleOpenId_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics::NewProp_googleUserAccountEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics::NewProp_IdToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n    * Authenticate the user using a google userId and google server authentication code.\n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * @param googleUserAccountEmail The email associated with the google user\n    * @param IdToken  The Id token of the google account. Can get with calls like requestIdToken\n    * @param forceCreate Should a new profile be created for this user if the account does not exist?\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Authenticate the user using a google userId and google server authentication code.\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param googleUserAccountEmail The email associated with the google user\n* @param IdToken  The Id token of the google account. Can get with calls like requestIdToken\n* @param forceCreate Should a new profile be created for this user if the account does not exist?\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "AuthenticateGoogleOpenId", nullptr, nullptr, sizeof(BCWrapperProxy_eventAuthenticateGoogleOpenId_Parms), Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics
	{
		struct BCWrapperProxy_eventAuthenticateHandoff_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString handoffId;
			FString securityToken;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateHandoff_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics::NewProp_handoffId = { "handoffId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateHandoff_Parms, handoffId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics::NewProp_securityToken = { "securityToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateHandoff_Parms, securityToken), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventAuthenticateHandoff_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventAuthenticateHandoff_Parms), &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateHandoff_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics::NewProp_handoffId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics::NewProp_securityToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n    * Authenticate the user using a handoffId and a token \n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * @param handoffId braincloud handoff id generated from cloud script\n    * @param securityToken The security token entered byt the user\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Authenticate the user using a handoffId and a token\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param handoffId braincloud handoff id generated from cloud script\n* @param securityToken The security token entered byt the user\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "AuthenticateHandoff", nullptr, nullptr, sizeof(BCWrapperProxy_eventAuthenticateHandoff_Parms), Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics
	{
		struct BCWrapperProxy_eventAuthenticateOculus_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString oculusUserId;
			FString oculusNonce;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_oculusUserId;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateOculus_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics::NewProp_oculusUserId = { "oculusUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateOculus_Parms, oculusUserId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics::NewProp_oculusNonce = { "oculusNonce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateOculus_Parms, oculusNonce), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventAuthenticateOculus_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventAuthenticateOculus_Parms), &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateOculus_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics::NewProp_oculusUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics::NewProp_oculusNonce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n     * Authenticate the user with brainCloud using their Oculus Credentials\n     *\n     * Service Name - Authenticate\n     * Service Operation - Authenticate\n     *\n     * @param oculusUserId The oculus id of the user\n     * @param oculusNonce token from the Oculus SDK\n     * @param forceCreate Should a new profile be created for this user if the account does not exist?\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Authenticate the user with brainCloud using their Oculus Credentials\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param oculusUserId The oculus id of the user\n* @param oculusNonce token from the Oculus SDK\n* @param forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "AuthenticateOculus", nullptr, nullptr, sizeof(BCWrapperProxy_eventAuthenticateOculus_Parms), Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics
	{
		struct BCWrapperProxy_eventAuthenticatePlaystationNetwork_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString psnAccountId;
			FString psnAuthToken;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticatePlaystationNetwork_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics::NewProp_psnAccountId = { "psnAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticatePlaystationNetwork_Parms, psnAccountId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics::NewProp_psnAuthToken = { "psnAuthToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticatePlaystationNetwork_Parms, psnAuthToken), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventAuthenticatePlaystationNetwork_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventAuthenticatePlaystationNetwork_Parms), &Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticatePlaystationNetwork_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics::NewProp_psnAccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics::NewProp_psnAuthToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n     * Authenticate the user with brainCloud using their psn account Id and auth token\n     *\n     * Service Name - Authenticate\n     * Service Operation - Authenticate\n     *\n     * @param psnAccountId The account id of the user\n     * @param psnAuthToken The validated token from the Playstation SDK\n     *   (that will be further validated when sent to the bC service)\n     * @param forceCreate Should a new profile be created for this user if the account does not exist?\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Authenticate the user with brainCloud using their psn account Id and auth token\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param psnAccountId The account id of the user\n* @param psnAuthToken The validated token from the Playstation SDK\n*   (that will be further validated when sent to the bC service)\n* @param forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "AuthenticatePlaystationNetwork", nullptr, nullptr, sizeof(BCWrapperProxy_eventAuthenticatePlaystationNetwork_Parms), Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSettopHandoff_Statics
	{
		struct BCWrapperProxy_eventAuthenticateSettopHandoff_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString handoffCode;
			UBCWrapperProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSettopHandoff_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateSettopHandoff_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSettopHandoff_Statics::NewProp_handoffCode = { "handoffCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateSettopHandoff_Parms, handoffCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSettopHandoff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateSettopHandoff_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSettopHandoff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSettopHandoff_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSettopHandoff_Statics::NewProp_handoffCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSettopHandoff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSettopHandoff_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n    * Authenticate the user using a handoffId and a token \n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * @param handoffCode braincloud handoff id generated from cloud script\n    * @param securityToken The security token entered byt the user\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Authenticate the user using a handoffId and a token\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param handoffCode braincloud handoff id generated from cloud script\n* @param securityToken The security token entered byt the user\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSettopHandoff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "AuthenticateSettopHandoff", nullptr, nullptr, sizeof(BCWrapperProxy_eventAuthenticateSettopHandoff_Parms), Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSettopHandoff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSettopHandoff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSettopHandoff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSettopHandoff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSettopHandoff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSettopHandoff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics
	{
		struct BCWrapperProxy_eventAuthenticateSteam_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString userid;
			FString sessionticket;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userid;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sessionticket;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateSteam_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics::NewProp_userid = { "userid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateSteam_Parms, userid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics::NewProp_sessionticket = { "sessionticket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateSteam_Parms, sessionticket), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventAuthenticateSteam_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventAuthenticateSteam_Parms), &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateSteam_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics::NewProp_userid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics::NewProp_sessionticket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n     * Authenticate the user using a steam userid and session ticket (without any validation on the userid).\n     *\n     * Service Name - Authenticate\n     * Service Operation - Authenticate\n     *\n     * @param userid  String representation of 64 bit steam id\n     * @param sessionticket  The session ticket of the user (hex encoded)\n     * @param forceCreate Should a new profile be created for this user if the account does not exist?\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Authenticate the user using a steam userid and session ticket (without any validation on the userid).\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param userid  String representation of 64 bit steam id\n* @param sessionticket  The session ticket of the user (hex encoded)\n* @param forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "AuthenticateSteam", nullptr, nullptr, sizeof(BCWrapperProxy_eventAuthenticateSteam_Parms), Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics
	{
		struct BCWrapperProxy_eventAuthenticateTwitter_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString userid;
			FString token;
			FString secret;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userid;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateTwitter_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::NewProp_userid = { "userid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateTwitter_Parms, userid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateTwitter_Parms, token), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::NewProp_secret = { "secret", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateTwitter_Parms, secret), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventAuthenticateTwitter_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventAuthenticateTwitter_Parms), &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateTwitter_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::NewProp_userid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::NewProp_token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::NewProp_secret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n     * Authenticate the user using a Twitter userid, authentication token, and secret from Twitter.\n     *\n     * Service Name - Authenticate\n     * Service Operation - Authenticate\n     *\n     * @param userid  String representation of Twitter userid\n     * @param token  The authentication token derived via the Twitter apis.\n     * @param secret  The secret given when attempting to link with Twitter\n     * @param forceCreate Should a new profile be created for this user if the account does not exist?\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Authenticate the user using a Twitter userid, authentication token, and secret from Twitter.\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param userid  String representation of Twitter userid\n* @param token  The authentication token derived via the Twitter apis.\n* @param secret  The secret given when attempting to link with Twitter\n* @param forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "AuthenticateTwitter", nullptr, nullptr, sizeof(BCWrapperProxy_eventAuthenticateTwitter_Parms), Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics
	{
		struct BCWrapperProxy_eventAuthenticateUniversal_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString userid;
			FString password;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userid;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateUniversal_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics::NewProp_userid = { "userid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateUniversal_Parms, userid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics::NewProp_password = { "password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateUniversal_Parms, password), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventAuthenticateUniversal_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventAuthenticateUniversal_Parms), &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventAuthenticateUniversal_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics::NewProp_userid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics::NewProp_password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n     * Authenticate the user using a userid and password (without any validation on the userid).\n     * Similar to AuthenticateEmailPassword - except that that method has additional features to\n     * allow for e-mail validation, password resets, etc.\n     *\n     * Service Name - Authenticate\n     * Service Operation - Authenticate\n     *\n     * @param email  The e-mail address of the user\n     * @param password  The password of the user\n     * @param forceCreate Should a new profile be created for this user if the account does not exist?\n     *\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Authenticate the user using a userid and password (without any validation on the userid).\n* Similar to AuthenticateEmailPassword - except that that method has additional features to\n* allow for e-mail validation, password resets, etc.\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param email  The e-mail address of the user\n* @param password  The password of the user\n* @param forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "AuthenticateUniversal", nullptr, nullptr, sizeof(BCWrapperProxy_eventAuthenticateUniversal_Parms), Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_ClearDefaultBrainCloudInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ClearDefaultBrainCloudInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud" },
		{ "Comment", "/**\n\x09* Clear the default brainCloud instance\n\x09* When not set, the brainCloud Singleton will be used\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "Clear the default brainCloud instance\nWhen not set, the brainCloud Singleton will be used" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_ClearDefaultBrainCloudInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "ClearDefaultBrainCloudInstance", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ClearDefaultBrainCloudInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ClearDefaultBrainCloudInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_ClearDefaultBrainCloudInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_ClearDefaultBrainCloudInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_CreateBrainCloudWrapper_Statics
	{
		struct BCWrapperProxy_eventCreateBrainCloudWrapper_Parms
		{
			FString wrapperName;
			UBrainCloudWrapper* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wrapperName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_wrapperName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_CreateBrainCloudWrapper_Statics::NewProp_wrapperName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_CreateBrainCloudWrapper_Statics::NewProp_wrapperName = { "wrapperName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventCreateBrainCloudWrapper_Parms, wrapperName), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_CreateBrainCloudWrapper_Statics::NewProp_wrapperName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_CreateBrainCloudWrapper_Statics::NewProp_wrapperName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_CreateBrainCloudWrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventCreateBrainCloudWrapper_Parms, ReturnValue), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_CreateBrainCloudWrapper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_CreateBrainCloudWrapper_Statics::NewProp_wrapperName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_CreateBrainCloudWrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_CreateBrainCloudWrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud" },
		{ "Comment", "/**\n\x09* Create an actor that contains its own instance of the brainCloud Wrapper\n\x09*\n\x09* @param brainCloud - The brainCloud Wrapper\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "Create an actor that contains its own instance of the brainCloud Wrapper\n\n@param brainCloud - The brainCloud Wrapper" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_CreateBrainCloudWrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "CreateBrainCloudWrapper", nullptr, nullptr, sizeof(BCWrapperProxy_eventCreateBrainCloudWrapper_Parms), Z_Construct_UFunction_UBCWrapperProxy_CreateBrainCloudWrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_CreateBrainCloudWrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_CreateBrainCloudWrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_CreateBrainCloudWrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_CreateBrainCloudWrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_CreateBrainCloudWrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_GetStoredAnonymousId_Statics
	{
		struct BCWrapperProxy_eventGetStoredAnonymousId_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_GetStoredAnonymousId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventGetStoredAnonymousId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_GetStoredAnonymousId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventGetStoredAnonymousId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_GetStoredAnonymousId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_GetStoredAnonymousId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_GetStoredAnonymousId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_GetStoredAnonymousId_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/**\n     * Returns the stored anonymous id\n     * @return The stored anonymous id\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "Returns the stored anonymous id\n@return The stored anonymous id" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_GetStoredAnonymousId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "GetStoredAnonymousId", nullptr, nullptr, sizeof(BCWrapperProxy_eventGetStoredAnonymousId_Parms), Z_Construct_UFunction_UBCWrapperProxy_GetStoredAnonymousId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_GetStoredAnonymousId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_GetStoredAnonymousId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_GetStoredAnonymousId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_GetStoredAnonymousId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_GetStoredAnonymousId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_GetStoredProfileId_Statics
	{
		struct BCWrapperProxy_eventGetStoredProfileId_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_GetStoredProfileId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventGetStoredProfileId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_GetStoredProfileId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventGetStoredProfileId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_GetStoredProfileId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_GetStoredProfileId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_GetStoredProfileId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_GetStoredProfileId_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/**\n     * Returns the stored anonymous id\n     * @return The stored anonymous id\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "Returns the stored anonymous id\n@return The stored anonymous id" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_GetStoredProfileId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "GetStoredProfileId", nullptr, nullptr, sizeof(BCWrapperProxy_eventGetStoredProfileId_Parms), Z_Construct_UFunction_UBCWrapperProxy_GetStoredProfileId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_GetStoredProfileId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_GetStoredProfileId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_GetStoredProfileId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_GetStoredProfileId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_GetStoredProfileId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_Initialize_Statics
	{
		struct BCWrapperProxy_eventInitialize_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString serverUrl;
			FString secretKey;
			FString appId;
			FString version;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_serverUrl;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_secretKey;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_appId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_Initialize_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventInitialize_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_Initialize_Statics::NewProp_serverUrl = { "serverUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventInitialize_Parms, serverUrl), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_Initialize_Statics::NewProp_secretKey = { "secretKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventInitialize_Parms, secretKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_Initialize_Statics::NewProp_appId = { "appId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventInitialize_Parms, appId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_Initialize_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventInitialize_Parms, version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_Initialize_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_Initialize_Statics::NewProp_serverUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_Initialize_Statics::NewProp_secretKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_Initialize_Statics::NewProp_appId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_Initialize_Statics::NewProp_version,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/**\n     * Method initializes the BrainCloudClient.\n     *\n     * @param serverURL The url to the brainCloud server\n     * @param secretKey The secret key for your app\n     * @param appId The app's id\n     * @param version The app's version\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "Method initializes the BrainCloudClient.\n\n@param serverURL The url to the brainCloud server\n@param secretKey The secret key for your app\n@param appId The app's id\n@param version The app's version" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "Initialize", nullptr, nullptr, sizeof(BCWrapperProxy_eventInitialize_Parms), Z_Construct_UFunction_UBCWrapperProxy_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics
	{
		struct BCWrapperProxy_eventInitializeWithApps_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString serverUrl;
			FString appId;
			TMap<FString,FString> secretMap;
			FString version;
			FString company;
			FString appName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_serverUrl;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_appId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_secretMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_secretMap_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_secretMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_company;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_appName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventInitializeWithApps_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::NewProp_serverUrl = { "serverUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventInitializeWithApps_Parms, serverUrl), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::NewProp_appId = { "appId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventInitializeWithApps_Parms, appId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::NewProp_secretMap_ValueProp = { "secretMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::NewProp_secretMap_Key_KeyProp = { "secretMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::NewProp_secretMap = { "secretMap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventInitializeWithApps_Parms, secretMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventInitializeWithApps_Parms, version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::NewProp_company = { "company", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventInitializeWithApps_Parms, company), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::NewProp_appName = { "appName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventInitializeWithApps_Parms, appName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::NewProp_serverUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::NewProp_appId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::NewProp_secretMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::NewProp_secretMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::NewProp_secretMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::NewProp_company,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::NewProp_appName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/**\n     * Method initializes the BrainCloudClient.\n     *\n     * @param serverURL The url to the brainCloud server\n     * @param secretMap The map of appID to secret\n     * @param appId The app's id\n     * @param version The app's version\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "Method initializes the BrainCloudClient.\n\n@param serverURL The url to the brainCloud server\n@param secretMap The map of appID to secret\n@param appId The app's id\n@param version The app's version" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "InitializeWithApps", nullptr, nullptr, sizeof(BCWrapperProxy_eventInitializeWithApps_Parms), Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPassword_Statics
	{
		struct BCWrapperProxy_eventResetEmailPassword_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString email;
			UBCWrapperProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPassword_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetEmailPassword_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPassword_Statics::NewProp_email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPassword_Statics::NewProp_email = { "email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetEmailPassword_Parms, email), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPassword_Statics::NewProp_email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPassword_Statics::NewProp_email_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPassword_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetEmailPassword_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPassword_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPassword_Statics::NewProp_email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPassword_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPassword_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/**\n    * Reset Email password - Sends a password reset email to the specified address\n    *\n    * Service Name - Authenticate\n    * Operation - ResetEmailPassword\n    *\n    * Param - externalId The email address to send the reset email to.\n    * Param - callback The method to be invoked when the server response is received\n    *\n    * Note the follow error reason codes:\n    * SECURITY_ERROR (40209) - If the email address cannot be found.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "Reset Email password - Sends a password reset email to the specified address\n\nService Name - Authenticate\nOperation - ResetEmailPassword\n\nParam - externalId The email address to send the reset email to.\nParam - callback The method to be invoked when the server response is received\n\nNote the follow error reason codes:\nSECURITY_ERROR (40209) - If the email address cannot be found." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "ResetEmailPassword", nullptr, nullptr, sizeof(BCWrapperProxy_eventResetEmailPassword_Parms), Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics
	{
		struct BCWrapperProxy_eventResetEmailPasswordAdvanced_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString email;
			FString serviceParams;
			UBCWrapperProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetEmailPasswordAdvanced_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::NewProp_email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::NewProp_email = { "email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetEmailPasswordAdvanced_Parms, email), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::NewProp_email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::NewProp_email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::NewProp_serviceParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::NewProp_serviceParams = { "serviceParams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetEmailPasswordAdvanced_Parms, serviceParams), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::NewProp_serviceParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::NewProp_serviceParams_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetEmailPasswordAdvanced_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::NewProp_email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::NewProp_serviceParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/**\n    * Reset Email password with service parameters- Sends a password reset email to the specified address\n    *\n    * Service Name - Authenticate\n    * Operation - ResetEmailPasswordAdvanced\n    *\n    * @param appId the application id\n    * @param emailAddress The email address to send the reset email to.\n    * @param serviceParams parameters to send to the email service see the doc for a full \n    * list. http://getbraincloud.com/apidocs/apiref/#capi-mail\n    * @param callback The method to be invoked when the server response is received\n    * @return The JSON returned in the callback is as follows:\n    * {\n    *   \"status\": 200,\n    *   \"data\": {}\n    * }\n    *\n    * Note the follow error reason codes:\n    *\n    * SECURITY_ERROR (40209) - If the email address cannot be found.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "Reset Email password with service parameters- Sends a password reset email to the specified address\n\nService Name - Authenticate\nOperation - ResetEmailPasswordAdvanced\n\n@param appId the application id\n@param emailAddress The email address to send the reset email to.\n@param serviceParams parameters to send to the email service see the doc for a full\nlist. http://getbraincloud.com/apidocs/apiref/#capi-mail\n@param callback The method to be invoked when the server response is received\n@return The JSON returned in the callback is as follows:\n{\n  \"status\": 200,\n  \"data\": {}\n}\n\nNote the follow error reason codes:\n\nSECURITY_ERROR (40209) - If the email address cannot be found." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "ResetEmailPasswordAdvanced", nullptr, nullptr, sizeof(BCWrapperProxy_eventResetEmailPasswordAdvanced_Parms), Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics
	{
		struct BCWrapperProxy_eventResetEmailPasswordAdvancedWithExpiry_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString email;
			FString in_serviceParams;
			int32 in_tokenTtlInMinutes;
			UBCWrapperProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetEmailPasswordAdvancedWithExpiry_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_email = { "email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetEmailPasswordAdvancedWithExpiry_Parms, email), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_in_serviceParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_in_serviceParams = { "in_serviceParams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetEmailPasswordAdvancedWithExpiry_Parms, in_serviceParams), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_in_serviceParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_in_serviceParams_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_in_tokenTtlInMinutes = { "in_tokenTtlInMinutes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetEmailPasswordAdvancedWithExpiry_Parms, in_tokenTtlInMinutes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetEmailPasswordAdvancedWithExpiry_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_in_serviceParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_in_tokenTtlInMinutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/**\n    * Reset Email password with service parameters with token expiry- Sends a password reset email to the specified address\n    *\n    * Service Name - Authenticate\n    * Operation - ResetEmailPasswordAdvanced\n    *\n    * @param appId the application id\n    * @param emailAddress The email address to send the reset email to.\n    * @param serviceParams parameters to send to the email service see the doc for a full \n    * @param in_tokenTtlInMinutes the expiry token value\n    * list. http://getbraincloud.com/apidocs/apiref/#capi-mail\n    * @param callback The method to be invoked when the server response is received\n    * @return The JSON returned in the callback is as follows:\n    * {\n    *   \"status\": 200,\n    *   \"data\": {}\n    * }\n    *\n    * Note the follow error reason codes:\n    *\n    * SECURITY_ERROR (40209) - If the email address cannot be found.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "Reset Email password with service parameters with token expiry- Sends a password reset email to the specified address\n\nService Name - Authenticate\nOperation - ResetEmailPasswordAdvanced\n\n@param appId the application id\n@param emailAddress The email address to send the reset email to.\n@param serviceParams parameters to send to the email service see the doc for a full\n@param in_tokenTtlInMinutes the expiry token value\nlist. http://getbraincloud.com/apidocs/apiref/#capi-mail\n@param callback The method to be invoked when the server response is received\n@return The JSON returned in the callback is as follows:\n{\n  \"status\": 200,\n  \"data\": {}\n}\n\nNote the follow error reason codes:\n\nSECURITY_ERROR (40209) - If the email address cannot be found." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "ResetEmailPasswordAdvancedWithExpiry", nullptr, nullptr, sizeof(BCWrapperProxy_eventResetEmailPasswordAdvancedWithExpiry_Parms), Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry_Statics
	{
		struct BCWrapperProxy_eventResetEmailPasswordWithExpiry_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString email;
			int32 in_tokenTtlInMinutes;
			UBCWrapperProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetEmailPasswordWithExpiry_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_email = { "email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetEmailPasswordWithExpiry_Parms, email), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_email_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_in_tokenTtlInMinutes = { "in_tokenTtlInMinutes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetEmailPasswordWithExpiry_Parms, in_tokenTtlInMinutes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetEmailPasswordWithExpiry_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_in_tokenTtlInMinutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/**\n    * Reset Email password with a token expiry - Sends a password reset email to the specified address\n    *\n    * Service Name - Authenticate\n    * Operation - ResetEmailPassword\n    *\n    * @param email The email address to send the reset email to.\n    * @param in_tokenTtlInMinutes the token expiry value\n    * @param callback The method to be invoked when the server response is received\n    * @return The JSON returned in the callback is as follows:\n    * {\n    *   \"status\": 200,\n    *   \"data\": {}\n    * }\n    *\n    * Note the follow error reason codes:\n    *\n    * SECURITY_ERROR (40209) - If the email address cannot be found.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "Reset Email password with a token expiry - Sends a password reset email to the specified address\n\nService Name - Authenticate\nOperation - ResetEmailPassword\n\n@param email The email address to send the reset email to.\n@param in_tokenTtlInMinutes the token expiry value\n@param callback The method to be invoked when the server response is received\n@return The JSON returned in the callback is as follows:\n{\n  \"status\": 200,\n  \"data\": {}\n}\n\nNote the follow error reason codes:\n\nSECURITY_ERROR (40209) - If the email address cannot be found." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "ResetEmailPasswordWithExpiry", nullptr, nullptr, sizeof(BCWrapperProxy_eventResetEmailPasswordWithExpiry_Parms), Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPassword_Statics
	{
		struct BCWrapperProxy_eventResetUniversalIdPassword_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_universalId;
			UBCWrapperProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPassword_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetUniversalIdPassword_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPassword_Statics::NewProp_in_universalId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPassword_Statics::NewProp_in_universalId = { "in_universalId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetUniversalIdPassword_Parms, in_universalId), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPassword_Statics::NewProp_in_universalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPassword_Statics::NewProp_in_universalId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPassword_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetUniversalIdPassword_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPassword_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPassword_Statics::NewProp_in_universalId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPassword_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPassword_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/**\n    * Reset Universal Id password with service parameters \n    *\n    * Service Name - Authenticate\n    * Operation - ResetEmailPasswordAdvanced\n    *\n    * @param appId the application id\n    * @param universalId The email address to send the reset email to.\n    * @param in_tokenTtlInMinutes the expiry token value\n    * list. http://getbraincloud.com/apidocs/apiref/#capi-mail\n    * @param callback The method to be invoked when the server response is received\n    * @return The JSON returned in the callback is as follows:\n    * {\n    *   \"status\": 200,\n    *   \"data\": {}\n    * }\n    *\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "Reset Universal Id password with service parameters\n\nService Name - Authenticate\nOperation - ResetEmailPasswordAdvanced\n\n@param appId the application id\n@param universalId The email address to send the reset email to.\n@param in_tokenTtlInMinutes the expiry token value\nlist. http://getbraincloud.com/apidocs/apiref/#capi-mail\n@param callback The method to be invoked when the server response is received\n@return The JSON returned in the callback is as follows:\n{\n  \"status\": 200,\n  \"data\": {}\n}" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "ResetUniversalIdPassword", nullptr, nullptr, sizeof(BCWrapperProxy_eventResetUniversalIdPassword_Parms), Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics
	{
		struct BCWrapperProxy_eventResetUniversalIdPasswordAdvanced_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_universalId;
			FString in_serviceParams;
			UBCWrapperProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetUniversalIdPasswordAdvanced_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_in_universalId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_in_universalId = { "in_universalId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetUniversalIdPasswordAdvanced_Parms, in_universalId), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_in_universalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_in_universalId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_in_serviceParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_in_serviceParams = { "in_serviceParams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetUniversalIdPasswordAdvanced_Parms, in_serviceParams), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_in_serviceParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_in_serviceParams_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetUniversalIdPasswordAdvanced_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_in_universalId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_in_serviceParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/**\n    * Reset Universal Id password with service parameters \n    *\n    * Service Name - Authenticate\n    * Operation - ResetEmailPasswordAdvanced\n    *\n    * @param appId the application id\n    * @param universalId The email address to send the reset email to.\n    * @param serviceParams parameters to send to the email service see the doc for a full \n    * list. http://getbraincloud.com/apidocs/apiref/#capi-mail\n    * @param callback The method to be invoked when the server response is received\n    * @return The JSON returned in the callback is as follows:\n    * {\n    *   \"status\": 200,\n    *   \"data\": {}\n    * }\n    *\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "Reset Universal Id password with service parameters\n\nService Name - Authenticate\nOperation - ResetEmailPasswordAdvanced\n\n@param appId the application id\n@param universalId The email address to send the reset email to.\n@param serviceParams parameters to send to the email service see the doc for a full\nlist. http://getbraincloud.com/apidocs/apiref/#capi-mail\n@param callback The method to be invoked when the server response is received\n@return The JSON returned in the callback is as follows:\n{\n  \"status\": 200,\n  \"data\": {}\n}" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "ResetUniversalIdPasswordAdvanced", nullptr, nullptr, sizeof(BCWrapperProxy_eventResetUniversalIdPasswordAdvanced_Parms), Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics
	{
		struct BCWrapperProxy_eventResetUniversalIdPasswordAdvancedWithExpiry_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_universalId;
			FString in_serviceParams;
			int32 in_tokenTtlInMinutes;
			UBCWrapperProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetUniversalIdPasswordAdvancedWithExpiry_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_universalId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_universalId = { "in_universalId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetUniversalIdPasswordAdvancedWithExpiry_Parms, in_universalId), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_universalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_universalId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_serviceParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_serviceParams = { "in_serviceParams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetUniversalIdPasswordAdvancedWithExpiry_Parms, in_serviceParams), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_serviceParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_serviceParams_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_tokenTtlInMinutes = { "in_tokenTtlInMinutes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetUniversalIdPasswordAdvancedWithExpiry_Parms, in_tokenTtlInMinutes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetUniversalIdPasswordAdvancedWithExpiry_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_universalId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_serviceParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_in_tokenTtlInMinutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/**\n    * Reset Universal Id password with service parameters and with expiry \n    *\n    * Service Name - Authenticate\n    * Operation - ResetEmailPasswordAdvanced\n    *\n    * @param appId the application id\n    * @param universalId The email address to send the reset email to.\n    * @param in_tokenTtlInMinutes the expiry token value\n    * @param serviceParams parameters to send to the email service see the doc for a full \n    * list. http://getbraincloud.com/apidocs/apiref/#capi-mail\n    * @param callback The method to be invoked when the server response is received\n    * @return The JSON returned in the callback is as follows:\n    * {\n    *   \"status\": 200,\n    *   \"data\": {}\n    * }\n    *\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "Reset Universal Id password with service parameters and with expiry\n\nService Name - Authenticate\nOperation - ResetEmailPasswordAdvanced\n\n@param appId the application id\n@param universalId The email address to send the reset email to.\n@param in_tokenTtlInMinutes the expiry token value\n@param serviceParams parameters to send to the email service see the doc for a full\nlist. http://getbraincloud.com/apidocs/apiref/#capi-mail\n@param callback The method to be invoked when the server response is received\n@return The JSON returned in the callback is as follows:\n{\n  \"status\": 200,\n  \"data\": {}\n}" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "ResetUniversalIdPasswordAdvancedWithExpiry", nullptr, nullptr, sizeof(BCWrapperProxy_eventResetUniversalIdPasswordAdvancedWithExpiry_Parms), Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry_Statics
	{
		struct BCWrapperProxy_eventResetUniversalIdPasswordWithExpiry_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_universalId;
			int32 in_tokenTtlInMinutes;
			UBCWrapperProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetUniversalIdPasswordWithExpiry_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_in_universalId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_in_universalId = { "in_universalId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetUniversalIdPasswordWithExpiry_Parms, in_universalId), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_in_universalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_in_universalId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_in_tokenTtlInMinutes = { "in_tokenTtlInMinutes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetUniversalIdPasswordWithExpiry_Parms, in_tokenTtlInMinutes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventResetUniversalIdPasswordWithExpiry_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_in_universalId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_in_tokenTtlInMinutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/**\n    * Reset Universal Id password with service parameters and with expiry\n    *\n    * Service Name - Authenticate\n    * Operation - ResetEmailPasswordAdvanced\n    *\n    * @param appId the application id\n    * @param universalId The email address to send the reset email to.\n    * @param in_tokenTtlInMinutes the expiry token value\n    * list. http://getbraincloud.com/apidocs/apiref/#capi-mail\n    * @param callback The method to be invoked when the server response is received\n    * @return The JSON returned in the callback is as follows:\n    * {\n    *   \"status\": 200,\n    *   \"data\": {}\n    * }\n    *\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "Reset Universal Id password with service parameters and with expiry\n\nService Name - Authenticate\nOperation - ResetEmailPasswordAdvanced\n\n@param appId the application id\n@param universalId The email address to send the reset email to.\n@param in_tokenTtlInMinutes the expiry token value\nlist. http://getbraincloud.com/apidocs/apiref/#capi-mail\n@param callback The method to be invoked when the server response is received\n@return The JSON returned in the callback is as follows:\n{\n  \"status\": 200,\n  \"data\": {}\n}" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "ResetUniversalIdPasswordWithExpiry", nullptr, nullptr, sizeof(BCWrapperProxy_eventResetUniversalIdPasswordWithExpiry_Parms), Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_SetAlwaysAllowProfileSwitch_Statics
	{
		struct BCWrapperProxy_eventSetAlwaysAllowProfileSwitch_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool alwaysAllow;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_alwaysAllow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_alwaysAllow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SetAlwaysAllowProfileSwitch_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSetAlwaysAllowProfileSwitch_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCWrapperProxy_SetAlwaysAllowProfileSwitch_Statics::NewProp_alwaysAllow_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventSetAlwaysAllowProfileSwitch_Parms*)Obj)->alwaysAllow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SetAlwaysAllowProfileSwitch_Statics::NewProp_alwaysAllow = { "alwaysAllow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventSetAlwaysAllowProfileSwitch_Parms), &Z_Construct_UFunction_UBCWrapperProxy_SetAlwaysAllowProfileSwitch_Statics::NewProp_alwaysAllow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_SetAlwaysAllowProfileSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SetAlwaysAllowProfileSwitch_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SetAlwaysAllowProfileSwitch_Statics::NewProp_alwaysAllow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SetAlwaysAllowProfileSwitch_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/**\n     * For non-anonymous authentication methods, a profile id will be passed in\n     * when this value is set to false. This will generate an error on the server\n     * if the profile id passed in does not match the profile associated with the\n     * authentication credentials. By default, this value is true.\n     *\n     * @param alwaysAllow Controls whether the profile id is passed in with\n     * non-anonymous authentications.\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "For non-anonymous authentication methods, a profile id will be passed in\nwhen this value is set to false. This will generate an error on the server\nif the profile id passed in does not match the profile associated with the\nauthentication credentials. By default, this value is true.\n\n@param alwaysAllow Controls whether the profile id is passed in with\nnon-anonymous authentications." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_SetAlwaysAllowProfileSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "SetAlwaysAllowProfileSwitch", nullptr, nullptr, sizeof(BCWrapperProxy_eventSetAlwaysAllowProfileSwitch_Parms), Z_Construct_UFunction_UBCWrapperProxy_SetAlwaysAllowProfileSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SetAlwaysAllowProfileSwitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SetAlwaysAllowProfileSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SetAlwaysAllowProfileSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_SetAlwaysAllowProfileSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_SetAlwaysAllowProfileSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_SetDefaultBrainCloudInstance_Statics
	{
		struct BCWrapperProxy_eventSetDefaultBrainCloudInstance_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SetDefaultBrainCloudInstance_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSetDefaultBrainCloudInstance_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_SetDefaultBrainCloudInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SetDefaultBrainCloudInstance_Statics::NewProp_brainCloudWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SetDefaultBrainCloudInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud" },
		{ "Comment", "/**\n\x09* Set a default brainCloud instance to be used when none is provided.\n\x09* @param brainCloud - The brainCloud Wrapper\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "Set a default brainCloud instance to be used when none is provided.\n@param brainCloud - The brainCloud Wrapper" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_SetDefaultBrainCloudInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "SetDefaultBrainCloudInstance", nullptr, nullptr, sizeof(BCWrapperProxy_eventSetDefaultBrainCloudInstance_Parms), Z_Construct_UFunction_UBCWrapperProxy_SetDefaultBrainCloudInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SetDefaultBrainCloudInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SetDefaultBrainCloudInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SetDefaultBrainCloudInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_SetDefaultBrainCloudInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_SetDefaultBrainCloudInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_SetStoredAnonymousId_Statics
	{
		struct BCWrapperProxy_eventSetStoredAnonymousId_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SetStoredAnonymousId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSetStoredAnonymousId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SetStoredAnonymousId_Statics::NewProp_anonymousId = { "anonymousId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSetStoredAnonymousId_Parms, anonymousId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_SetStoredAnonymousId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SetStoredAnonymousId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SetStoredAnonymousId_Statics::NewProp_anonymousId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SetStoredAnonymousId_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/**\n     * Sets the stored anonymous id, saves it as well\n     * @param anonymousId The anonymous id to set\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "Sets the stored anonymous id, saves it as well\n@param anonymousId The anonymous id to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_SetStoredAnonymousId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "SetStoredAnonymousId", nullptr, nullptr, sizeof(BCWrapperProxy_eventSetStoredAnonymousId_Parms), Z_Construct_UFunction_UBCWrapperProxy_SetStoredAnonymousId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SetStoredAnonymousId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SetStoredAnonymousId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SetStoredAnonymousId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_SetStoredAnonymousId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_SetStoredAnonymousId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_SetStoredProfileId_Statics
	{
		struct BCWrapperProxy_eventSetStoredProfileId_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SetStoredProfileId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSetStoredProfileId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SetStoredProfileId_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSetStoredProfileId_Parms, profileId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_SetStoredProfileId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SetStoredProfileId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SetStoredProfileId_Statics::NewProp_profileId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SetStoredProfileId_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/**\n     * Sets the stored profile id, saves it as well\n     * @param profileId The profile id to set\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "Sets the stored profile id, saves it as well\n@param profileId The profile id to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_SetStoredProfileId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "SetStoredProfileId", nullptr, nullptr, sizeof(BCWrapperProxy_eventSetStoredProfileId_Parms), Z_Construct_UFunction_UBCWrapperProxy_SetStoredProfileId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SetStoredProfileId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SetStoredProfileId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SetStoredProfileId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_SetStoredProfileId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_SetStoredProfileId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics
	{
		struct BCWrapperProxy_eventSmartSwitchAuthenticateApple_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString appleUserId;
			FString identityToken;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_appleUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_appleUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_identityToken_MetaData[];
#endif
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateApple_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::NewProp_appleUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::NewProp_appleUserId = { "appleUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateApple_Parms, appleUserId), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::NewProp_appleUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::NewProp_appleUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::NewProp_identityToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::NewProp_identityToken = { "identityToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateApple_Parms, identityToken), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::NewProp_identityToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::NewProp_identityToken_MetaData)) };
	void Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventSmartSwitchAuthenticateApple_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateApple_Parms), &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateApple_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::NewProp_appleUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::NewProp_identityToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n    * Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n    * In event the current session was previously an anonymous account, the smart switch will delete that profile.\n    * Use this function to keep a clean designflow from anonymous to signed profiles\n    * Authenticate the user using a google userId and google server authentication code.\n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * @param appleUserId this can be user id OR the email of the user account\n    * @param identityToken  the token confirming the user's identity\n    * @param forceCreate Should a new profile be created for this user if the account does not exist?\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n* In event the current session was previously an anonymous account, the smart switch will delete that profile.\n* Use this function to keep a clean designflow from anonymous to signed profiles\n* Authenticate the user using a google userId and google server authentication code.\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param appleUserId this can be user id OR the email of the user account\n* @param identityToken  the token confirming the user's identity\n* @param forceCreate Should a new profile be created for this user if the account does not exist?\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "SmartSwitchAuthenticateApple", nullptr, nullptr, sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateApple_Parms), Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics
	{
		struct BCWrapperProxy_eventSmartSwitchAuthenticateEmailPassword_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString email;
			FString password;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_password_MetaData[];
#endif
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateEmailPassword_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::NewProp_email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::NewProp_email = { "email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateEmailPassword_Parms, email), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::NewProp_email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::NewProp_email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::NewProp_password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::NewProp_password = { "password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateEmailPassword_Parms, password), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::NewProp_password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::NewProp_password_MetaData)) };
	void Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventSmartSwitchAuthenticateEmailPassword_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateEmailPassword_Parms), &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateEmailPassword_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::NewProp_email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::NewProp_password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n     * Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n     * In event the current session was previously an anonymous account, the smart switch will delete that profile.\n     * Use this function to keep a clean designflow from anonymous to signed profiles\n     *\n     * Authenticate the user with a custom Email and Password.  Note that the client app\n     * is responsible for collecting (and storing) the e-mail and potentially password\n     * (for convenience) in the client data.  For the greatest security,\n     * force the user to re-enter their * password at each login.\n     * (Or at least give them that option).\n     *\n     * Note that the password sent from the client to the server is protected via SSL.\n     *\n     * Service Name - Authenticate\n     * Service Operation - Authenticate\n     *\n     * @param email  The e-mail address of the user\n     * @param password  The password of the user\n     * @param forceCreate Should a new profile be created for this user if the account does not exist?\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n* In event the current session was previously an anonymous account, the smart switch will delete that profile.\n* Use this function to keep a clean designflow from anonymous to signed profiles\n*\n* Authenticate the user with a custom Email and Password.  Note that the client app\n* is responsible for collecting (and storing) the e-mail and potentially password\n* (for convenience) in the client data.  For the greatest security,\n* force the user to re-enter their * password at each login.\n* (Or at least give them that option).\n*\n* Note that the password sent from the client to the server is protected via SSL.\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param email  The e-mail address of the user\n* @param password  The password of the user\n* @param forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "SmartSwitchAuthenticateEmailPassword", nullptr, nullptr, sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateEmailPassword_Parms), Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics
	{
		struct BCWrapperProxy_eventSmartSwitchAuthenticateExternal_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString userid;
			FString token;
			FString externalAuthName;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_token;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_externalAuthName_MetaData[];
#endif
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateExternal_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_userid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_userid = { "userid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateExternal_Parms, userid), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_userid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_userid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateExternal_Parms, token), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_token_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_token_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_externalAuthName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_externalAuthName = { "externalAuthName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateExternal_Parms, externalAuthName), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_externalAuthName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_externalAuthName_MetaData)) };
	void Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventSmartSwitchAuthenticateExternal_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateExternal_Parms), &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateExternal_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_userid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_externalAuthName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/**\n     * Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n     * In event the current session was previously an anonymous account, the smart switch will delete that profile.\n     * Use this function to keep a clean designflow from anonymous to signed profiles\n     *\n     * Authenticate the user via cloud code (which in turn validates the supplied credentials against an external system).\n     * This allows the developer to extend brainCloud authentication to support other backend authentication systems.\n     *\n     * Service Name - Authenticate\n     * Server Operation - Authenticate\n     *\n     * @param userid The user id\n     * @param token The user token (password etc)\n     * @param externalAuthName The name of the cloud script to call for external authentication\n     * @param force Should a new profile be created for this user if the account does not exist?\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\nIn event the current session was previously an anonymous account, the smart switch will delete that profile.\nUse this function to keep a clean designflow from anonymous to signed profiles\n\nAuthenticate the user via cloud code (which in turn validates the supplied credentials against an external system).\nThis allows the developer to extend brainCloud authentication to support other backend authentication systems.\n\nService Name - Authenticate\nServer Operation - Authenticate\n\n@param userid The user id\n@param token The user token (password etc)\n@param externalAuthName The name of the cloud script to call for external authentication\n@param force Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "SmartSwitchAuthenticateExternal", nullptr, nullptr, sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateExternal_Parms), Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics
	{
		struct BCWrapperProxy_eventSmartSwitchAuthenticateFacebook_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString fbUserId;
			FString fbAuthToken;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fbUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fbUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fbAuthToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fbAuthToken;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateFacebook_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::NewProp_fbUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::NewProp_fbUserId = { "fbUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateFacebook_Parms, fbUserId), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::NewProp_fbUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::NewProp_fbUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::NewProp_fbAuthToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::NewProp_fbAuthToken = { "fbAuthToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateFacebook_Parms, fbAuthToken), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::NewProp_fbAuthToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::NewProp_fbAuthToken_MetaData)) };
	void Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventSmartSwitchAuthenticateFacebook_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateFacebook_Parms), &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateFacebook_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::NewProp_fbUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::NewProp_fbAuthToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n     * Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n     * In event the current session was previously an anonymous account, the smart switch will delete that profile.\n     * Use this function to keep a clean designflow from anonymous to signed profiles\n     *\n     * Authenticate the user with brainCloud using their Facebook Credentials\n     *\n     * Service Name - Authenticate\n     * Service Operation - Authenticate\n     *\n     * @param fbUserId The facebook id of the user\n     * @param fbAuthToken The validated token from the Facebook SDK\n     *   (that will be further validated when sent to the bC service)\n     * @param forceCreate Should a new profile be created for this user if the account does not exist?\n     *\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n* In event the current session was previously an anonymous account, the smart switch will delete that profile.\n* Use this function to keep a clean designflow from anonymous to signed profiles\n*\n* Authenticate the user with brainCloud using their Facebook Credentials\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param fbUserId The facebook id of the user\n* @param fbAuthToken The validated token from the Facebook SDK\n*   (that will be further validated when sent to the bC service)\n* @param forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "SmartSwitchAuthenticateFacebook", nullptr, nullptr, sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateFacebook_Parms), Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics
	{
		struct BCWrapperProxy_eventSmartSwitchAuthenticateFacebookLimited_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString fbLimitedUserId;
			FString fbAuthToken;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fbLimitedUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fbLimitedUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fbAuthToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fbAuthToken;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateFacebookLimited_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::NewProp_fbLimitedUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::NewProp_fbLimitedUserId = { "fbLimitedUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateFacebookLimited_Parms, fbLimitedUserId), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::NewProp_fbLimitedUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::NewProp_fbLimitedUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::NewProp_fbAuthToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::NewProp_fbAuthToken = { "fbAuthToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateFacebookLimited_Parms, fbAuthToken), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::NewProp_fbAuthToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::NewProp_fbAuthToken_MetaData)) };
	void Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventSmartSwitchAuthenticateFacebookLimited_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateFacebookLimited_Parms), &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateFacebookLimited_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::NewProp_fbLimitedUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::NewProp_fbAuthToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n     * Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n     * In event the current session was previously an anonymous account, the smart switch will delete that profile.\n     * Use this function to keep a clean designflow from anonymous to signed profiles\n     *\n     * Authenticate the user with brainCloud using their FacebookLIMITED Credentials\n     *\n     * Service Name - Authenticate\n     * Service Operation - Authenticate\n     *\n     * @param fbUserId The facebooklIMITED id of the user\n     * @param fbAuthToken The validated token from the Facebook SDK\n     *   (that will be further validated when sent to the bC service)\n     * @param forceCreate Should a new profile be created for this user if the account does not exist?\n     *\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n* In event the current session was previously an anonymous account, the smart switch will delete that profile.\n* Use this function to keep a clean designflow from anonymous to signed profiles\n*\n* Authenticate the user with brainCloud using their FacebookLIMITED Credentials\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param fbUserId The facebooklIMITED id of the user\n* @param fbAuthToken The validated token from the Facebook SDK\n*   (that will be further validated when sent to the bC service)\n* @param forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "SmartSwitchAuthenticateFacebookLimited", nullptr, nullptr, sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateFacebookLimited_Parms), Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics
	{
		struct BCWrapperProxy_eventSmartSwitchAuthenticateGameCenter_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString gameCenterId;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameCenterId_MetaData[];
#endif
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateGameCenter_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::NewProp_gameCenterId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::NewProp_gameCenterId = { "gameCenterId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateGameCenter_Parms, gameCenterId), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::NewProp_gameCenterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::NewProp_gameCenterId_MetaData)) };
	void Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventSmartSwitchAuthenticateGameCenter_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateGameCenter_Parms), &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateGameCenter_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::NewProp_gameCenterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n     * Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n     * In event the current session was previously an anonymous account, the smart switch will delete that profile.\n     * Use this function to keep a clean designflow from anonymous to signed profiles\n     *\n     * Authenticate the user using their Game Center id\n     *\n     * Service Name - Authenticate\n     * Service Operation - Authenticate\n     *\n     * @param gameCenterId The player's game center id  (use the playerID property from the local GKPlayer object)\n     * @param forceCreate Should a new profile be created for this user if the account does not exist?\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n* In event the current session was previously an anonymous account, the smart switch will delete that profile.\n* Use this function to keep a clean designflow from anonymous to signed profiles\n*\n* Authenticate the user using their Game Center id\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param gameCenterId The player's game center id  (use the playerID property from the local GKPlayer object)\n* @param forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "SmartSwitchAuthenticateGameCenter", nullptr, nullptr, sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateGameCenter_Parms), Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics
	{
		struct BCWrapperProxy_eventSmartSwitchAuthenticateGoogle_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString userid;
			FString token;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_token_MetaData[];
#endif
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateGoogle_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::NewProp_userid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::NewProp_userid = { "userid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateGoogle_Parms, userid), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::NewProp_userid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::NewProp_userid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::NewProp_token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateGoogle_Parms, token), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::NewProp_token_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::NewProp_token_MetaData)) };
	void Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventSmartSwitchAuthenticateGoogle_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateGoogle_Parms), &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateGoogle_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::NewProp_userid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::NewProp_token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n     * Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n     * In event the current session was previously an anonymous account, the smart switch will delete that profile.\n     * Use this function to keep a clean designflow from anonymous to signed profiles\n     *\n     * Authenticate the user using a google userid(email address) and google authentication token.\n     *\n     * Service Name - Authenticate\n     * Service Operation - Authenticate\n     *\n     * @param userid  String representation of google+ userid (email)\n     * @param token  The authentication token derived via the google apis.\n     * @param forceCreate Should a new profile be created for this user if the account does not exist?\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n* In event the current session was previously an anonymous account, the smart switch will delete that profile.\n* Use this function to keep a clean designflow from anonymous to signed profiles\n*\n* Authenticate the user using a google userid(email address) and google authentication token.\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param userid  String representation of google+ userid (email)\n* @param token  The authentication token derived via the google apis.\n* @param forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "SmartSwitchAuthenticateGoogle", nullptr, nullptr, sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateGoogle_Parms), Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics
	{
		struct BCWrapperProxy_eventSmartSwitchAuthenticateGoogleOpenId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString googleUserAccountEmail;
			FString IdToken;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_googleUserAccountEmail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_googleUserAccountEmail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdToken_MetaData[];
#endif
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateGoogleOpenId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::NewProp_googleUserAccountEmail_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::NewProp_googleUserAccountEmail = { "googleUserAccountEmail", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateGoogleOpenId_Parms, googleUserAccountEmail), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::NewProp_googleUserAccountEmail_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::NewProp_googleUserAccountEmail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::NewProp_IdToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateGoogleOpenId_Parms, IdToken), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::NewProp_IdToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::NewProp_IdToken_MetaData)) };
	void Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventSmartSwitchAuthenticateGoogleOpenId_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateGoogleOpenId_Parms), &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateGoogleOpenId_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::NewProp_googleUserAccountEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::NewProp_IdToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n    * Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n    * In event the current session was previously an anonymous account, the smart switch will delete that profile.\n    * Use this function to keep a clean designflow from anonymous to signed profiles\n    *\n    * Authenticate the user using a google userId and google server authentication code.\n    *\n    * Service Name - Authenticate\n    * Service Operation - Authenticate\n    *\n    * @param googleUserAccountEmail The email associated with the google user\n    * @param IdToken  The Id token of the google account. Can get with calls like requestIdToken\n    * @param forceCreate Should a new profile be created for this user if the account does not exist?\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n* In event the current session was previously an anonymous account, the smart switch will delete that profile.\n* Use this function to keep a clean designflow from anonymous to signed profiles\n*\n* Authenticate the user using a google userId and google server authentication code.\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param googleUserAccountEmail The email associated with the google user\n* @param IdToken  The Id token of the google account. Can get with calls like requestIdToken\n* @param forceCreate Should a new profile be created for this user if the account does not exist?\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "SmartSwitchAuthenticateGoogleOpenId", nullptr, nullptr, sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateGoogleOpenId_Parms), Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics
	{
		struct BCWrapperProxy_eventSmartSwitchAuthenticateOculus_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString oculusUserId;
			FString oculusNonce;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oculusUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_oculusUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oculusNonce_MetaData[];
#endif
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateOculus_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::NewProp_oculusUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::NewProp_oculusUserId = { "oculusUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateOculus_Parms, oculusUserId), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::NewProp_oculusUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::NewProp_oculusUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::NewProp_oculusNonce_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::NewProp_oculusNonce = { "oculusNonce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateOculus_Parms, oculusNonce), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::NewProp_oculusNonce_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::NewProp_oculusNonce_MetaData)) };
	void Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventSmartSwitchAuthenticateOculus_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateOculus_Parms), &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateOculus_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::NewProp_oculusUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::NewProp_oculusNonce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n     * Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n     * In event the current session was previously an anonymous account, the smart switch will delete that profile.\n     * Use this function to keep a clean designflow from anonymous to signed profiles\n     *\n     * Authenticate the user with brainCloud using their Oculus Credentials\n     *\n     * Service Name - Authenticate\n     * Service Operation - Authenticate\n     *\n     * @param oculusUserId The Oculus id of the user\n     * @param oculusNonce token from the Oculus SDK\n     * @param forceCreate Should a new profile be created for this user if the account does not exist?\n     *\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n* In event the current session was previously an anonymous account, the smart switch will delete that profile.\n* Use this function to keep a clean designflow from anonymous to signed profiles\n*\n* Authenticate the user with brainCloud using their Oculus Credentials\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param oculusUserId The Oculus id of the user\n* @param oculusNonce token from the Oculus SDK\n* @param forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "SmartSwitchAuthenticateOculus", nullptr, nullptr, sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateOculus_Parms), Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics
	{
		struct BCWrapperProxy_eventSmartSwitchAuthenticateSteam_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString userid;
			FString sessionticket;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sessionticket_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sessionticket;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateSteam_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::NewProp_userid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::NewProp_userid = { "userid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateSteam_Parms, userid), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::NewProp_userid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::NewProp_userid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::NewProp_sessionticket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::NewProp_sessionticket = { "sessionticket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateSteam_Parms, sessionticket), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::NewProp_sessionticket_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::NewProp_sessionticket_MetaData)) };
	void Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventSmartSwitchAuthenticateSteam_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateSteam_Parms), &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateSteam_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::NewProp_userid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::NewProp_sessionticket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n     * Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n     * In event the current session was previously an anonymous account, the smart switch will delete that profile.\n     * Use this function to keep a clean designflow from anonymous to signed profiles\n     *\n     * Authenticate the user using a steam userid and session ticket (without any validation on the userid).\n     *\n     * Service Name - Authenticate\n     * Service Operation - Authenticate\n     *\n     * @param userid  String representation of 64 bit steam id\n     * @param sessionticket  The session ticket of the user (hex encoded)\n     * @param forceCreate Should a new profile be created for this user if the account does not exist?\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n* In event the current session was previously an anonymous account, the smart switch will delete that profile.\n* Use this function to keep a clean designflow from anonymous to signed profiles\n*\n* Authenticate the user using a steam userid and session ticket (without any validation on the userid).\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param userid  String representation of 64 bit steam id\n* @param sessionticket  The session ticket of the user (hex encoded)\n* @param forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "SmartSwitchAuthenticateSteam", nullptr, nullptr, sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateSteam_Parms), Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics
	{
		struct BCWrapperProxy_eventSmartSwitchAuthenticateTwitter_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString userid;
			FString token;
			FString secret;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_token;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_secret_MetaData[];
#endif
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateTwitter_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_userid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_userid = { "userid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateTwitter_Parms, userid), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_userid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_userid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateTwitter_Parms, token), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_token_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_token_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_secret_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_secret = { "secret", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateTwitter_Parms, secret), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_secret_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_secret_MetaData)) };
	void Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventSmartSwitchAuthenticateTwitter_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateTwitter_Parms), &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateTwitter_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_userid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_secret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n     * Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n     * In event the current session was previously an anonymous account, the smart switch will delete that profile.\n     * Use this function to keep a clean designflow from anonymous to signed profiles\n     *\n     * Authenticate the user using a Twitter userid, authentication token, and secret from Twitter.\n     *\n     * Service Name - Authenticate\n     * Service Operation - Authenticate\n     *\n     * @param userid  String representation of Twitter userid\n     * @param token  The authentication token derived via the Twitter apis.\n     * @param secret  The secret given when attempting to link with Twitter\n     * @param forceCreate Should a new profile be created for this user if the account does not exist?\n     * @param callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n* In event the current session was previously an anonymous account, the smart switch will delete that profile.\n* Use this function to keep a clean designflow from anonymous to signed profiles\n*\n* Authenticate the user using a Twitter userid, authentication token, and secret from Twitter.\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param userid  String representation of Twitter userid\n* @param token  The authentication token derived via the Twitter apis.\n* @param secret  The secret given when attempting to link with Twitter\n* @param forceCreate Should a new profile be created for this user if the account does not exist?\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "SmartSwitchAuthenticateTwitter", nullptr, nullptr, sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateTwitter_Parms), Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics
	{
		struct BCWrapperProxy_eventSmartSwitchAuthenticateUniversal_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString userid;
			FString password;
			bool forceCreate;
			UBCWrapperProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_password_MetaData[];
#endif
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateUniversal_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::NewProp_userid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::NewProp_userid = { "userid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateUniversal_Parms, userid), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::NewProp_userid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::NewProp_userid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::NewProp_password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::NewProp_password = { "password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateUniversal_Parms, password), METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::NewProp_password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::NewProp_password_MetaData)) };
	void Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCWrapperProxy_eventSmartSwitchAuthenticateUniversal_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateUniversal_Parms), &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCWrapperProxy_eventSmartSwitchAuthenticateUniversal_Parms, ReturnValue), Z_Construct_UClass_UBCWrapperProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::NewProp_userid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::NewProp_password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Wrapper" },
		{ "Comment", "/*\n     * Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n     * In event the current session was previously an anonymous account, the smart switch will delete that profile.\n     * Use this function to keep a clean designflow from anonymous to signed profiles\n     *\n     * Authenticate the user using a userid and password (without any validation on the userid).\n     * Similar to AuthenticateEmailPassword - except that that method has additional features to\n     * allow for e-mail validation, password resets, etc.\n     *\n     * Service Name - Authenticate\n     * Service Operation - Authenticate\n     *\n     * @param email  The e-mail address of the user\n     * @param password  The password of the user\n     * @param forceCreate Should a new profile be created for this user if the account does not exist?\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ToolTip", "* Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.\n* In event the current session was previously an anonymous account, the smart switch will delete that profile.\n* Use this function to keep a clean designflow from anonymous to signed profiles\n*\n* Authenticate the user using a userid and password (without any validation on the userid).\n* Similar to AuthenticateEmailPassword - except that that method has additional features to\n* allow for e-mail validation, password resets, etc.\n*\n* Service Name - Authenticate\n* Service Operation - Authenticate\n*\n* @param email  The e-mail address of the user\n* @param password  The password of the user\n* @param forceCreate Should a new profile be created for this user if the account does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCWrapperProxy, nullptr, "SmartSwitchAuthenticateUniversal", nullptr, nullptr, sizeof(BCWrapperProxy_eventSmartSwitchAuthenticateUniversal_Parms), Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCWrapperProxy_NoRegister()
	{
		return UBCWrapperProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCWrapperProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCWrapperProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCWrapperProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateAnonymous, "AuthenticateAnonymous" }, // 51789048
		{ &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateApple, "AuthenticateApple" }, // 2349237922
		{ &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateEmailPassword, "AuthenticateEmailPassword" }, // 2051576477
		{ &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateExternal, "AuthenticateExternal" }, // 1662536085
		{ &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebook, "AuthenticateFacebook" }, // 316576323
		{ &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateFacebookLimited, "AuthenticateFacebookLimited" }, // 1124302140
		{ &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGameCenter, "AuthenticateGameCenter" }, // 1179895522
		{ &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogle, "AuthenticateGoogle" }, // 1219538493
		{ &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateGoogleOpenId, "AuthenticateGoogleOpenId" }, // 3562134985
		{ &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateHandoff, "AuthenticateHandoff" }, // 3042587935
		{ &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateOculus, "AuthenticateOculus" }, // 260811397
		{ &Z_Construct_UFunction_UBCWrapperProxy_AuthenticatePlaystationNetwork, "AuthenticatePlaystationNetwork" }, // 2269735597
		{ &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSettopHandoff, "AuthenticateSettopHandoff" }, // 3898374361
		{ &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateSteam, "AuthenticateSteam" }, // 2371882509
		{ &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateTwitter, "AuthenticateTwitter" }, // 280132169
		{ &Z_Construct_UFunction_UBCWrapperProxy_AuthenticateUniversal, "AuthenticateUniversal" }, // 1597254305
		{ &Z_Construct_UFunction_UBCWrapperProxy_ClearDefaultBrainCloudInstance, "ClearDefaultBrainCloudInstance" }, // 1609317407
		{ &Z_Construct_UFunction_UBCWrapperProxy_CreateBrainCloudWrapper, "CreateBrainCloudWrapper" }, // 965511712
		{ &Z_Construct_UFunction_UBCWrapperProxy_GetStoredAnonymousId, "GetStoredAnonymousId" }, // 445026343
		{ &Z_Construct_UFunction_UBCWrapperProxy_GetStoredProfileId, "GetStoredProfileId" }, // 2920122992
		{ &Z_Construct_UFunction_UBCWrapperProxy_Initialize, "Initialize" }, // 2531062595
		{ &Z_Construct_UFunction_UBCWrapperProxy_InitializeWithApps, "InitializeWithApps" }, // 2142959748
		{ &Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPassword, "ResetEmailPassword" }, // 3090439726
		{ &Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvanced, "ResetEmailPasswordAdvanced" }, // 2875553835
		{ &Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordAdvancedWithExpiry, "ResetEmailPasswordAdvancedWithExpiry" }, // 532311284
		{ &Z_Construct_UFunction_UBCWrapperProxy_ResetEmailPasswordWithExpiry, "ResetEmailPasswordWithExpiry" }, // 3202988794
		{ &Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPassword, "ResetUniversalIdPassword" }, // 3197496997
		{ &Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvanced, "ResetUniversalIdPasswordAdvanced" }, // 960302020
		{ &Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordAdvancedWithExpiry, "ResetUniversalIdPasswordAdvancedWithExpiry" }, // 2562535530
		{ &Z_Construct_UFunction_UBCWrapperProxy_ResetUniversalIdPasswordWithExpiry, "ResetUniversalIdPasswordWithExpiry" }, // 4084322329
		{ &Z_Construct_UFunction_UBCWrapperProxy_SetAlwaysAllowProfileSwitch, "SetAlwaysAllowProfileSwitch" }, // 1886627815
		{ &Z_Construct_UFunction_UBCWrapperProxy_SetDefaultBrainCloudInstance, "SetDefaultBrainCloudInstance" }, // 3013181569
		{ &Z_Construct_UFunction_UBCWrapperProxy_SetStoredAnonymousId, "SetStoredAnonymousId" }, // 486536711
		{ &Z_Construct_UFunction_UBCWrapperProxy_SetStoredProfileId, "SetStoredProfileId" }, // 735116856
		{ &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateApple, "SmartSwitchAuthenticateApple" }, // 3369653985
		{ &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateEmailPassword, "SmartSwitchAuthenticateEmailPassword" }, // 124484434
		{ &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateExternal, "SmartSwitchAuthenticateExternal" }, // 1189367172
		{ &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebook, "SmartSwitchAuthenticateFacebook" }, // 1223851928
		{ &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateFacebookLimited, "SmartSwitchAuthenticateFacebookLimited" }, // 2807200868
		{ &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGameCenter, "SmartSwitchAuthenticateGameCenter" }, // 3679070737
		{ &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogle, "SmartSwitchAuthenticateGoogle" }, // 1492177211
		{ &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateGoogleOpenId, "SmartSwitchAuthenticateGoogleOpenId" }, // 313246888
		{ &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateOculus, "SmartSwitchAuthenticateOculus" }, // 440601902
		{ &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateSteam, "SmartSwitchAuthenticateSteam" }, // 4070329074
		{ &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateTwitter, "SmartSwitchAuthenticateTwitter" }, // 2753405147
		{ &Z_Construct_UFunction_UBCWrapperProxy_SmartSwitchAuthenticateUniversal, "SmartSwitchAuthenticateUniversal" }, // 3238927320
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCWrapperProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BlueprintProxies/BCWrapperProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCWrapperProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCWrapperProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCWrapperProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCWrapperProxy_Statics::ClassParams = {
		&UBCWrapperProxy::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBCWrapperProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCWrapperProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCWrapperProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCWrapperProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCWrapperProxy, 651824144);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCWrapperProxy>()
	{
		return UBCWrapperProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCWrapperProxy(Z_Construct_UClass_UBCWrapperProxy, &UBCWrapperProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCWrapperProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCWrapperProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
