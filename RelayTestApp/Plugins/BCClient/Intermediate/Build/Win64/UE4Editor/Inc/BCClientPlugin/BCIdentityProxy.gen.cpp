// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCIdentityProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCIdentityProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCIdentityProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCIdentityProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_EBCAuthType();
// End Cross Module References
	DEFINE_FUNCTION(UBCIdentityProxy::execUpdateUniversalIdLogin)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_externalId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::UpdateUniversalIdLogin(Z_Param_brainCloudWrapper,Z_Param_externalId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execAttachNonLoginUniversalId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_externalId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::AttachNonLoginUniversalId(Z_Param_brainCloudWrapper,Z_Param_externalId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execGetPeerProfiles)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloud);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::GetPeerProfiles(Z_Param_brainCloud);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execDetachPeer)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_peer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::DetachPeer(Z_Param_brainCloudWrapper,Z_Param_peer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execAttachPeerProfile)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_peer);
		P_GET_PROPERTY(FStrProperty,Z_Param_externalId);
		P_GET_PROPERTY(FStrProperty,Z_Param_authenticationToken);
		P_GET_ENUM(EBCAuthType,Z_Param_authenticationType);
		P_GET_PROPERTY(FStrProperty,Z_Param_externalAuthName);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::AttachPeerProfile(Z_Param_brainCloudWrapper,Z_Param_peer,Z_Param_externalId,Z_Param_authenticationToken,EBCAuthType(Z_Param_authenticationType),Z_Param_externalAuthName,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execDetachParent)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::DetachParent(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execAttachParentWithIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_externalId);
		P_GET_PROPERTY(FStrProperty,Z_Param_authenticationToken);
		P_GET_ENUM(EBCAuthType,Z_Param_authenticationType);
		P_GET_PROPERTY(FStrProperty,Z_Param_externalAuthName);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::AttachParentWithIdentity(Z_Param_brainCloudWrapper,Z_Param_externalId,Z_Param_authenticationToken,EBCAuthType(Z_Param_authenticationType),Z_Param_externalAuthName,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execChangeEmailIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_oldEmailAddress);
		P_GET_PROPERTY(FStrProperty,Z_Param_password);
		P_GET_PROPERTY(FStrProperty,Z_Param_newEmailAddress);
		P_GET_UBOOL(Z_Param_updateContactEmail);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::ChangeEmailIdentity(Z_Param_brainCloudWrapper,Z_Param_oldEmailAddress,Z_Param_password,Z_Param_newEmailAddress,Z_Param_updateContactEmail);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execRefreshIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_externalId);
		P_GET_PROPERTY(FStrProperty,Z_Param_authenticationToken);
		P_GET_ENUM(EBCAuthType,Z_Param_authenticationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::RefreshIdentity(Z_Param_brainCloudWrapper,Z_Param_externalId,Z_Param_authenticationToken,EBCAuthType(Z_Param_authenticationType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execGetExpiredIdentities)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::GetExpiredIdentities(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execGetIdentities)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::GetIdentities(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execGetChildProfiles)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_includeSummaryData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::GetChildProfiles(Z_Param_brainCloudWrapper,Z_Param_includeSummaryData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execSwitchToParentProfile)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_parentLevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::SwitchToParentProfile(Z_Param_brainCloudWrapper,Z_Param_parentLevelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execSwitchToSingletonChildProfile)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_childAppId);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::SwitchToSingletonChildProfile(Z_Param_brainCloudWrapper,Z_Param_childAppId,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execSwitchToChildProfile)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_childProfileId);
		P_GET_PROPERTY(FStrProperty,Z_Param_childAppId);
		P_GET_UBOOL(Z_Param_forceCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::SwitchToChildProfile(Z_Param_brainCloudWrapper,Z_Param_childProfileId,Z_Param_childAppId,Z_Param_forceCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execDetachParseIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_parseId);
		P_GET_UBOOL(Z_Param_continueAnon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::DetachParseIdentity(Z_Param_brainCloudWrapper,Z_Param_parseId,Z_Param_continueAnon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execMergeParseIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_parseId);
		P_GET_PROPERTY(FStrProperty,Z_Param_authenticationToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::MergeParseIdentity(Z_Param_brainCloudWrapper,Z_Param_parseId,Z_Param_authenticationToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execAttachParseIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_parseId);
		P_GET_PROPERTY(FStrProperty,Z_Param_authenticationToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::AttachParseIdentity(Z_Param_brainCloudWrapper,Z_Param_parseId,Z_Param_authenticationToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execDetachTwitterIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_twitterId);
		P_GET_UBOOL(Z_Param_continueAnon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::DetachTwitterIdentity(Z_Param_brainCloudWrapper,Z_Param_twitterId,Z_Param_continueAnon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execMergeTwitterIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_twitterId);
		P_GET_PROPERTY(FStrProperty,Z_Param_authenticationToken);
		P_GET_PROPERTY(FStrProperty,Z_Param_secret);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::MergeTwitterIdentity(Z_Param_brainCloudWrapper,Z_Param_twitterId,Z_Param_authenticationToken,Z_Param_secret);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execAttachTwitterIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_twitterId);
		P_GET_PROPERTY(FStrProperty,Z_Param_authenticationToken);
		P_GET_PROPERTY(FStrProperty,Z_Param_secret);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::AttachTwitterIdentity(Z_Param_brainCloudWrapper,Z_Param_twitterId,Z_Param_authenticationToken,Z_Param_secret);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execDetachAppleIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_appleUserId);
		P_GET_UBOOL(Z_Param_continueAnon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::DetachAppleIdentity(Z_Param_brainCloudWrapper,Z_Param_appleUserId,Z_Param_continueAnon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execMergeAppleIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_appleUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_identityToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::MergeAppleIdentity(Z_Param_brainCloudWrapper,Z_Param_appleUserId,Z_Param_identityToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execAttachAppleIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_appleUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_identityToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::AttachAppleIdentity(Z_Param_brainCloudWrapper,Z_Param_appleUserId,Z_Param_identityToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execDetachGoogleOpenIdIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_googleUserAccountEmail);
		P_GET_UBOOL(Z_Param_continueAnon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::DetachGoogleOpenIdIdentity(Z_Param_brainCloudWrapper,Z_Param_googleUserAccountEmail,Z_Param_continueAnon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execMergeGoogleOpenIdIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_googleUserAccountEmail);
		P_GET_PROPERTY(FStrProperty,Z_Param_IdToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::MergeGoogleOpenIdIdentity(Z_Param_brainCloudWrapper,Z_Param_googleUserAccountEmail,Z_Param_IdToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execAttachGoogleOpenIdIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_googleUserAccountEmail);
		P_GET_PROPERTY(FStrProperty,Z_Param_IdToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::AttachGoogleOpenIdIdentity(Z_Param_brainCloudWrapper,Z_Param_googleUserAccountEmail,Z_Param_IdToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execDetachGoogleIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_googleUserId);
		P_GET_UBOOL(Z_Param_continueAnon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::DetachGoogleIdentity(Z_Param_brainCloudWrapper,Z_Param_googleUserId,Z_Param_continueAnon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execMergeGoogleIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_googleUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_serverAuthCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::MergeGoogleIdentity(Z_Param_brainCloudWrapper,Z_Param_googleUserId,Z_Param_serverAuthCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execAttachGoogleIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_googleUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_serverAuthCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::AttachGoogleIdentity(Z_Param_brainCloudWrapper,Z_Param_googleUserId,Z_Param_serverAuthCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execDetachSteamIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamId);
		P_GET_UBOOL(Z_Param_continueAnon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::DetachSteamIdentity(Z_Param_brainCloudWrapper,Z_Param_steamId,Z_Param_continueAnon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execMergeSteamIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamId);
		P_GET_PROPERTY(FStrProperty,Z_Param_sessionTicket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::MergeSteamIdentity(Z_Param_brainCloudWrapper,Z_Param_steamId,Z_Param_sessionTicket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execAttachSteamIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamId);
		P_GET_PROPERTY(FStrProperty,Z_Param_sessionTicket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::AttachSteamIdentity(Z_Param_brainCloudWrapper,Z_Param_steamId,Z_Param_sessionTicket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execDetachUniversalIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_userId);
		P_GET_UBOOL(Z_Param_continueAnon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::DetachUniversalIdentity(Z_Param_brainCloudWrapper,Z_Param_userId,Z_Param_continueAnon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execMergeUniversalIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_userId);
		P_GET_PROPERTY(FStrProperty,Z_Param_password);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::MergeUniversalIdentity(Z_Param_brainCloudWrapper,Z_Param_userId,Z_Param_password);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execAttachUniversalIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_userId);
		P_GET_PROPERTY(FStrProperty,Z_Param_password);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::AttachUniversalIdentity(Z_Param_brainCloudWrapper,Z_Param_userId,Z_Param_password);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execDetachEmailIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_email);
		P_GET_UBOOL(Z_Param_continueAnon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::DetachEmailIdentity(Z_Param_brainCloudWrapper,Z_Param_email,Z_Param_continueAnon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execMergeEmailIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_email);
		P_GET_PROPERTY(FStrProperty,Z_Param_password);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::MergeEmailIdentity(Z_Param_brainCloudWrapper,Z_Param_email,Z_Param_password);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execAttachEmailIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_email);
		P_GET_PROPERTY(FStrProperty,Z_Param_password);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::AttachEmailIdentity(Z_Param_brainCloudWrapper,Z_Param_email,Z_Param_password);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execDetachGameCenterIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_gameCenterId);
		P_GET_UBOOL(Z_Param_continueAnon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::DetachGameCenterIdentity(Z_Param_brainCloudWrapper,Z_Param_gameCenterId,Z_Param_continueAnon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execMergeGameCenterIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_gameCenterId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::MergeGameCenterIdentity(Z_Param_brainCloudWrapper,Z_Param_gameCenterId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execAttachGameCenterIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_gameCenterId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::AttachGameCenterIdentity(Z_Param_brainCloudWrapper,Z_Param_gameCenterId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execDetachPlaystationNetworkIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_psnAccountId);
		P_GET_UBOOL(Z_Param_continueAnon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::DetachPlaystationNetworkIdentity(Z_Param_brainCloudWrapper,Z_Param_psnAccountId,Z_Param_continueAnon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execMergePlaystationNetworkIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_psnAccountId);
		P_GET_PROPERTY(FStrProperty,Z_Param_authenticationToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::MergePlaystationNetworkIdentity(Z_Param_brainCloudWrapper,Z_Param_psnAccountId,Z_Param_authenticationToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execAttachPlaystationNetworkIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_psnAccountId);
		P_GET_PROPERTY(FStrProperty,Z_Param_authenticationToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::AttachPlaystationNetworkIdentity(Z_Param_brainCloudWrapper,Z_Param_psnAccountId,Z_Param_authenticationToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execDetachOculusIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_oculusId);
		P_GET_UBOOL(Z_Param_continueAnon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::DetachOculusIdentity(Z_Param_brainCloudWrapper,Z_Param_oculusId,Z_Param_continueAnon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execMergeOculusIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_oculusId);
		P_GET_PROPERTY(FStrProperty,Z_Param_oculusNonce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::MergeOculusIdentity(Z_Param_brainCloudWrapper,Z_Param_oculusId,Z_Param_oculusNonce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execAttachOculusIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_oculusId);
		P_GET_PROPERTY(FStrProperty,Z_Param_oculusNonce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::AttachOculusIdentity(Z_Param_brainCloudWrapper,Z_Param_oculusId,Z_Param_oculusNonce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execDetachFacebookLimitedIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_facebookLimitedId);
		P_GET_UBOOL(Z_Param_continueAnon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::DetachFacebookLimitedIdentity(Z_Param_brainCloudWrapper,Z_Param_facebookLimitedId,Z_Param_continueAnon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execMergeFacebookLimitedIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_facebookLimitedId);
		P_GET_PROPERTY(FStrProperty,Z_Param_authenticationToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::MergeFacebookLimitedIdentity(Z_Param_brainCloudWrapper,Z_Param_facebookLimitedId,Z_Param_authenticationToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execAttachFacebookLimitedIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_facebookLimitedId);
		P_GET_PROPERTY(FStrProperty,Z_Param_authenticationToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::AttachFacebookLimitedIdentity(Z_Param_brainCloudWrapper,Z_Param_facebookLimitedId,Z_Param_authenticationToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execDetachFacebookIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_facebookId);
		P_GET_UBOOL(Z_Param_continueAnon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::DetachFacebookIdentity(Z_Param_brainCloudWrapper,Z_Param_facebookId,Z_Param_continueAnon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execMergeFacebookIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_facebookId);
		P_GET_PROPERTY(FStrProperty,Z_Param_authenticationToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::MergeFacebookIdentity(Z_Param_brainCloudWrapper,Z_Param_facebookId,Z_Param_authenticationToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execAttachFacebookIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_facebookId);
		P_GET_PROPERTY(FStrProperty,Z_Param_authenticationToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::AttachFacebookIdentity(Z_Param_brainCloudWrapper,Z_Param_facebookId,Z_Param_authenticationToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execDetachBlockchainIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_blockchainId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::DetachBlockchainIdentity(Z_Param_brainCloudWrapper,Z_Param_blockchainId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCIdentityProxy::execAttachBlockchainIdentity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_blockchainConfig);
		P_GET_PROPERTY(FStrProperty,Z_Param_publicKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCIdentityProxy**)Z_Param__Result=UBCIdentityProxy::AttachBlockchainIdentity(Z_Param_brainCloudWrapper,Z_Param_blockchainConfig,Z_Param_publicKey);
		P_NATIVE_END;
	}
	void UBCIdentityProxy::StaticRegisterNativesUBCIdentityProxy()
	{
		UClass* Class = UBCIdentityProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachAppleIdentity", &UBCIdentityProxy::execAttachAppleIdentity },
			{ "AttachBlockchainIdentity", &UBCIdentityProxy::execAttachBlockchainIdentity },
			{ "AttachEmailIdentity", &UBCIdentityProxy::execAttachEmailIdentity },
			{ "AttachFacebookIdentity", &UBCIdentityProxy::execAttachFacebookIdentity },
			{ "AttachFacebookLimitedIdentity", &UBCIdentityProxy::execAttachFacebookLimitedIdentity },
			{ "AttachGameCenterIdentity", &UBCIdentityProxy::execAttachGameCenterIdentity },
			{ "AttachGoogleIdentity", &UBCIdentityProxy::execAttachGoogleIdentity },
			{ "AttachGoogleOpenIdIdentity", &UBCIdentityProxy::execAttachGoogleOpenIdIdentity },
			{ "AttachNonLoginUniversalId", &UBCIdentityProxy::execAttachNonLoginUniversalId },
			{ "AttachOculusIdentity", &UBCIdentityProxy::execAttachOculusIdentity },
			{ "AttachParentWithIdentity", &UBCIdentityProxy::execAttachParentWithIdentity },
			{ "AttachParseIdentity", &UBCIdentityProxy::execAttachParseIdentity },
			{ "AttachPeerProfile", &UBCIdentityProxy::execAttachPeerProfile },
			{ "AttachPlaystationNetworkIdentity", &UBCIdentityProxy::execAttachPlaystationNetworkIdentity },
			{ "AttachSteamIdentity", &UBCIdentityProxy::execAttachSteamIdentity },
			{ "AttachTwitterIdentity", &UBCIdentityProxy::execAttachTwitterIdentity },
			{ "AttachUniversalIdentity", &UBCIdentityProxy::execAttachUniversalIdentity },
			{ "ChangeEmailIdentity", &UBCIdentityProxy::execChangeEmailIdentity },
			{ "DetachAppleIdentity", &UBCIdentityProxy::execDetachAppleIdentity },
			{ "DetachBlockchainIdentity", &UBCIdentityProxy::execDetachBlockchainIdentity },
			{ "DetachEmailIdentity", &UBCIdentityProxy::execDetachEmailIdentity },
			{ "DetachFacebookIdentity", &UBCIdentityProxy::execDetachFacebookIdentity },
			{ "DetachFacebookLimitedIdentity", &UBCIdentityProxy::execDetachFacebookLimitedIdentity },
			{ "DetachGameCenterIdentity", &UBCIdentityProxy::execDetachGameCenterIdentity },
			{ "DetachGoogleIdentity", &UBCIdentityProxy::execDetachGoogleIdentity },
			{ "DetachGoogleOpenIdIdentity", &UBCIdentityProxy::execDetachGoogleOpenIdIdentity },
			{ "DetachOculusIdentity", &UBCIdentityProxy::execDetachOculusIdentity },
			{ "DetachParent", &UBCIdentityProxy::execDetachParent },
			{ "DetachParseIdentity", &UBCIdentityProxy::execDetachParseIdentity },
			{ "DetachPeer", &UBCIdentityProxy::execDetachPeer },
			{ "DetachPlaystationNetworkIdentity", &UBCIdentityProxy::execDetachPlaystationNetworkIdentity },
			{ "DetachSteamIdentity", &UBCIdentityProxy::execDetachSteamIdentity },
			{ "DetachTwitterIdentity", &UBCIdentityProxy::execDetachTwitterIdentity },
			{ "DetachUniversalIdentity", &UBCIdentityProxy::execDetachUniversalIdentity },
			{ "GetChildProfiles", &UBCIdentityProxy::execGetChildProfiles },
			{ "GetExpiredIdentities", &UBCIdentityProxy::execGetExpiredIdentities },
			{ "GetIdentities", &UBCIdentityProxy::execGetIdentities },
			{ "GetPeerProfiles", &UBCIdentityProxy::execGetPeerProfiles },
			{ "MergeAppleIdentity", &UBCIdentityProxy::execMergeAppleIdentity },
			{ "MergeEmailIdentity", &UBCIdentityProxy::execMergeEmailIdentity },
			{ "MergeFacebookIdentity", &UBCIdentityProxy::execMergeFacebookIdentity },
			{ "MergeFacebookLimitedIdentity", &UBCIdentityProxy::execMergeFacebookLimitedIdentity },
			{ "MergeGameCenterIdentity", &UBCIdentityProxy::execMergeGameCenterIdentity },
			{ "MergeGoogleIdentity", &UBCIdentityProxy::execMergeGoogleIdentity },
			{ "MergeGoogleOpenIdIdentity", &UBCIdentityProxy::execMergeGoogleOpenIdIdentity },
			{ "MergeOculusIdentity", &UBCIdentityProxy::execMergeOculusIdentity },
			{ "MergeParseIdentity", &UBCIdentityProxy::execMergeParseIdentity },
			{ "MergePlaystationNetworkIdentity", &UBCIdentityProxy::execMergePlaystationNetworkIdentity },
			{ "MergeSteamIdentity", &UBCIdentityProxy::execMergeSteamIdentity },
			{ "MergeTwitterIdentity", &UBCIdentityProxy::execMergeTwitterIdentity },
			{ "MergeUniversalIdentity", &UBCIdentityProxy::execMergeUniversalIdentity },
			{ "RefreshIdentity", &UBCIdentityProxy::execRefreshIdentity },
			{ "SwitchToChildProfile", &UBCIdentityProxy::execSwitchToChildProfile },
			{ "SwitchToParentProfile", &UBCIdentityProxy::execSwitchToParentProfile },
			{ "SwitchToSingletonChildProfile", &UBCIdentityProxy::execSwitchToSingletonChildProfile },
			{ "UpdateUniversalIdLogin", &UBCIdentityProxy::execUpdateUniversalIdLogin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics
	{
		struct BCIdentityProxy_eventAttachAppleIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString appleUserId;
			FString identityToken;
			UBCIdentityProxy* ReturnValue;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachAppleIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::NewProp_appleUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::NewProp_appleUserId = { "appleUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachAppleIdentity_Parms, appleUserId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::NewProp_appleUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::NewProp_appleUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::NewProp_identityToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::NewProp_identityToken = { "identityToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachAppleIdentity_Parms, identityToken), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::NewProp_identityToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::NewProp_identityToken_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachAppleIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::NewProp_appleUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::NewProp_identityToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Attach the user's Apple credentials to the current profile.\n    * Service Name - Identity\n    * Service Operation - attach\n    *\n    * @param appleUserId this can be user id OR the email of the user account\n    * @param identityToken  the token confirming the user's identity\n    * @param forceCreate Should a new profile be created for this user if the account does not exist?\n    * @param callback The method to be invoked when the server response is received\n\x09* Errors to watch for:  SWITCHING_PROFILES - this means that the Google identity you provided\n\x09* already points to a different profile.  You will likely want to offer the player the\n\x09* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n\x09*\n\x09* To switch profiles, call ClearSavedProfileID() and call AuthenticateGoogle().\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Attach the user's Apple credentials to the current profile.\nService Name - Identity\nService Operation - attach\n\n@param appleUserId this can be user id OR the email of the user account\n@param identityToken  the token confirming the user's identity\n@param forceCreate Should a new profile be created for this user if the account does not exist?\n@param callback The method to be invoked when the server response is received\nErrors to watch for:  SWITCHING_PROFILES - this means that the Google identity you provided\nalready points to a different profile.  You will likely want to offer the player the\nchoice to *SWITCH* to that profile, or *MERGE* the profiles.\n\nTo switch profiles, call ClearSavedProfileID() and call AuthenticateGoogle()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "AttachAppleIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventAttachAppleIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics
	{
		struct BCIdentityProxy_eventAttachBlockchainIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString blockchainConfig;
			FString publicKey;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_blockchainConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_blockchainConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_publicKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_publicKey;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachBlockchainIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::NewProp_blockchainConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::NewProp_blockchainConfig = { "blockchainConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachBlockchainIdentity_Parms, blockchainConfig), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::NewProp_blockchainConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::NewProp_blockchainConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::NewProp_publicKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::NewProp_publicKey = { "publicKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachBlockchainIdentity_Parms, publicKey), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::NewProp_publicKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::NewProp_publicKey_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachBlockchainIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::NewProp_blockchainConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::NewProp_publicKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09 * Attaches the given block chain public key identity to the current profile.\n\x09 *\n\x09 * Service Name - Identity\n\x09 * Service Operation - AttachBlockchainIdentity\n\x09 *\n\x09 * @param blockchainConfig The block chains configuration\n\x09 * @param publicKey The key associated with the config\n\x09 * @param callback The method to be invoked when the server response is received\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Attaches the given block chain public key identity to the current profile.\n*\n* Service Name - Identity\n* Service Operation - AttachBlockchainIdentity\n*\n* @param blockchainConfig The block chains configuration\n* @param publicKey The key associated with the config\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "AttachBlockchainIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventAttachBlockchainIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics
	{
		struct BCIdentityProxy_eventAttachEmailIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString email;
			FString password;
			UBCIdentityProxy* ReturnValue;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachEmailIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::NewProp_email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::NewProp_email = { "email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachEmailIdentity_Parms, email), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::NewProp_email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::NewProp_email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::NewProp_password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::NewProp_password = { "password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachEmailIdentity_Parms, password), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::NewProp_password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::NewProp_password_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachEmailIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::NewProp_email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::NewProp_password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Attach a Email and Password identity to the current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Attach\n\x09*\n\x09* Param - email The player's e-mail address\n\x09* Param - password The player's password\n\x09*\n\x09* Errors to watch for:  SWITCHING_PROFILES - this means that the email address you provided\n\x09* already points to a different profile.  You will likely want to offer the user the\n\x09* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n\x09*\n\x09* To switch profiles, call ClearSavedProfileID() and then call AuthenticateEmailPassword().\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Attach a Email and Password identity to the current profile.\n*\n* Service Name - identity\n* Service Operation - Attach\n*\n* Param - email The player's e-mail address\n* Param - password The player's password\n*\n* Errors to watch for:  SWITCHING_PROFILES - this means that the email address you provided\n* already points to a different profile.  You will likely want to offer the user the\n* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n*\n* To switch profiles, call ClearSavedProfileID() and then call AuthenticateEmailPassword()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "AttachEmailIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventAttachEmailIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics
	{
		struct BCIdentityProxy_eventAttachFacebookIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString facebookId;
			FString authenticationToken;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_facebookId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_facebookId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_authenticationToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_authenticationToken;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachFacebookIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::NewProp_facebookId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::NewProp_facebookId = { "facebookId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachFacebookIdentity_Parms, facebookId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::NewProp_facebookId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::NewProp_facebookId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::NewProp_authenticationToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::NewProp_authenticationToken = { "authenticationToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachFacebookIdentity_Parms, authenticationToken), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::NewProp_authenticationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::NewProp_authenticationToken_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachFacebookIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::NewProp_facebookId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::NewProp_authenticationToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Attach the user's Facebook credentials to the current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Attach\n\x09*\n\x09* Param - externalId The facebook id of the user\n\x09* Param - authenticationToken The validated token from the Facebook SDK\n\x09*   (that will be further validated when sent to the bC service)\n\x09*\n\x09* Errors to watch for:  SWITCHING_PROFILES - this means that the Facebook identity you provided\n\x09* already points to a different profile.  You will likely want to offer the user the\n\x09* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n\x09*\n\x09* To switch profiles, call ClearSavedProfileID() and call AuthenticateFacebook().\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Attach the user's Facebook credentials to the current profile.\n*\n* Service Name - identity\n* Service Operation - Attach\n*\n* Param - externalId The facebook id of the user\n* Param - authenticationToken The validated token from the Facebook SDK\n*   (that will be further validated when sent to the bC service)\n*\n* Errors to watch for:  SWITCHING_PROFILES - this means that the Facebook identity you provided\n* already points to a different profile.  You will likely want to offer the user the\n* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n*\n* To switch profiles, call ClearSavedProfileID() and call AuthenticateFacebook()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "AttachFacebookIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventAttachFacebookIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics
	{
		struct BCIdentityProxy_eventAttachFacebookLimitedIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString facebookLimitedId;
			FString authenticationToken;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_facebookLimitedId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_facebookLimitedId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_authenticationToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_authenticationToken;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachFacebookLimitedIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::NewProp_facebookLimitedId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::NewProp_facebookLimitedId = { "facebookLimitedId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachFacebookLimitedIdentity_Parms, facebookLimitedId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::NewProp_facebookLimitedId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::NewProp_facebookLimitedId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::NewProp_authenticationToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::NewProp_authenticationToken = { "authenticationToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachFacebookLimitedIdentity_Parms, authenticationToken), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::NewProp_authenticationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::NewProp_authenticationToken_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachFacebookLimitedIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::NewProp_facebookLimitedId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::NewProp_authenticationToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Attach the user's FacebookLimited credentials to the current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Attach\n\x09*\n\x09* Param - externalId The facebookLimited id of the user\n\x09* Param - authenticationToken The validated token from the Facebook SDK\n\x09*   (that will be further validated when sent to the bC service)\n\x09*\n\x09* Errors to watch for:  SWITCHING_PROFILES - this means that the Facebook identity you provided\n\x09* already points to a different profile.  You will likely want to offer the user the\n\x09* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n\x09*\n\x09* To switch profiles, call ClearSavedProfileID() and call AuthenticateFacebook().\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Attach the user's FacebookLimited credentials to the current profile.\n*\n* Service Name - identity\n* Service Operation - Attach\n*\n* Param - externalId The facebookLimited id of the user\n* Param - authenticationToken The validated token from the Facebook SDK\n*   (that will be further validated when sent to the bC service)\n*\n* Errors to watch for:  SWITCHING_PROFILES - this means that the Facebook identity you provided\n* already points to a different profile.  You will likely want to offer the user the\n* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n*\n* To switch profiles, call ClearSavedProfileID() and call AuthenticateFacebook()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "AttachFacebookLimitedIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventAttachFacebookLimitedIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_AttachGameCenterIdentity_Statics
	{
		struct BCIdentityProxy_eventAttachGameCenterIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString gameCenterId;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameCenterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameCenterId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachGameCenterIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachGameCenterIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachGameCenterIdentity_Statics::NewProp_gameCenterId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachGameCenterIdentity_Statics::NewProp_gameCenterId = { "gameCenterId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachGameCenterIdentity_Parms, gameCenterId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachGameCenterIdentity_Statics::NewProp_gameCenterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachGameCenterIdentity_Statics::NewProp_gameCenterId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachGameCenterIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachGameCenterIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_AttachGameCenterIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachGameCenterIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachGameCenterIdentity_Statics::NewProp_gameCenterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachGameCenterIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachGameCenterIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Attach a Game Center identity to the current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Attach\n\x09*\n\x09* Param - gameCenterId The player's game center id  (use the playerID property from the local GKPlayer object)\n\x09*\n\x09* Errors to watch for:  SWITCHING_PROFILES - this means that the Facebook identity you provided\n\x09* already points to a different profile.  You will likely want to offer the user the\n\x09* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n\x09*\n\x09* To switch profiles, call ClearSavedProfileID() and call this method again.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Attach a Game Center identity to the current profile.\n*\n* Service Name - identity\n* Service Operation - Attach\n*\n* Param - gameCenterId The player's game center id  (use the playerID property from the local GKPlayer object)\n*\n* Errors to watch for:  SWITCHING_PROFILES - this means that the Facebook identity you provided\n* already points to a different profile.  You will likely want to offer the user the\n* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n*\n* To switch profiles, call ClearSavedProfileID() and call this method again." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_AttachGameCenterIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "AttachGameCenterIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventAttachGameCenterIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_AttachGameCenterIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachGameCenterIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachGameCenterIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachGameCenterIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_AttachGameCenterIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_AttachGameCenterIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics
	{
		struct BCIdentityProxy_eventAttachGoogleIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString googleUserId;
			FString serverAuthCode;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_googleUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_googleUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverAuthCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_serverAuthCode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachGoogleIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::NewProp_googleUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::NewProp_googleUserId = { "googleUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachGoogleIdentity_Parms, googleUserId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::NewProp_googleUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::NewProp_googleUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::NewProp_serverAuthCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::NewProp_serverAuthCode = { "serverAuthCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachGoogleIdentity_Parms, serverAuthCode), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::NewProp_serverAuthCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::NewProp_serverAuthCode_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachGoogleIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::NewProp_googleUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::NewProp_serverAuthCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Attach the user's Google credentials to the current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Attach\n\x09*\n\x09* Param - googleId The Google id of the user\n\x09* Param - authenticationToken The validated token from the Google SDK\n\x09*   (that will be further validated when sent to the bC service)\n\x09*\n\x09* Errors to watch for:  SWITCHING_PROFILES - this means that the Google identity you provided\n\x09* already points to a different profile.  You will likely want to offer the user the\n\x09* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n\x09*\n\x09* To switch profiles, call ClearSavedProfileID() and call AuthenticateGoogle().\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Attach the user's Google credentials to the current profile.\n\nService Name - identity\nService Operation - Attach\n\nParam - googleId The Google id of the user\nParam - authenticationToken The validated token from the Google SDK\n  (that will be further validated when sent to the bC service)\n\nErrors to watch for:  SWITCHING_PROFILES - this means that the Google identity you provided\nalready points to a different profile.  You will likely want to offer the user the\nchoice to *SWITCH* to that profile, or *MERGE* the profiles.\n\nTo switch profiles, call ClearSavedProfileID() and call AuthenticateGoogle()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "AttachGoogleIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventAttachGoogleIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics
	{
		struct BCIdentityProxy_eventAttachGoogleOpenIdIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString googleUserAccountEmail;
			FString IdToken;
			UBCIdentityProxy* ReturnValue;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachGoogleOpenIdIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::NewProp_googleUserAccountEmail_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::NewProp_googleUserAccountEmail = { "googleUserAccountEmail", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachGoogleOpenIdIdentity_Parms, googleUserAccountEmail), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::NewProp_googleUserAccountEmail_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::NewProp_googleUserAccountEmail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::NewProp_IdToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachGoogleOpenIdIdentity_Parms, IdToken), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::NewProp_IdToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::NewProp_IdToken_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachGoogleOpenIdIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::NewProp_googleUserAccountEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::NewProp_IdToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Attach the user's GoogleOpenId credentials to the current profile.\n    * Service Name - Identity\n    * Service Operation - Attach\n    *\n    * @param googleUserAccountEmail The email associated with the google user\n    * @param IdToken  The Id token of the google account. Can get with calls like requestIdToken\n    * @param forceCreate Should a new profile be created for this user if the account does not exist?\n    * @param callback The method to be invoked when the server response is received\n\x09* Errors to watch for:  SWITCHING_PROFILES - this means that the Google identity you provided\n\x09* already points to a different profile.  You will likely want to offer the player the\n\x09* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n\x09*\n\x09* To switch profiles, call ClearSavedProfileID() and call AuthenticateGoogle().\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Attach the user's GoogleOpenId credentials to the current profile.\nService Name - Identity\nService Operation - Attach\n\n@param googleUserAccountEmail The email associated with the google user\n@param IdToken  The Id token of the google account. Can get with calls like requestIdToken\n@param forceCreate Should a new profile be created for this user if the account does not exist?\n@param callback The method to be invoked when the server response is received\nErrors to watch for:  SWITCHING_PROFILES - this means that the Google identity you provided\nalready points to a different profile.  You will likely want to offer the player the\nchoice to *SWITCH* to that profile, or *MERGE* the profiles.\n\nTo switch profiles, call ClearSavedProfileID() and call AuthenticateGoogle()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "AttachGoogleOpenIdIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventAttachGoogleOpenIdIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_AttachNonLoginUniversalId_Statics
	{
		struct BCIdentityProxy_eventAttachNonLoginUniversalId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString externalId;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_externalId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_externalId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachNonLoginUniversalId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachNonLoginUniversalId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachNonLoginUniversalId_Statics::NewProp_externalId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachNonLoginUniversalId_Statics::NewProp_externalId = { "externalId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachNonLoginUniversalId_Parms, externalId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachNonLoginUniversalId_Statics::NewProp_externalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachNonLoginUniversalId_Statics::NewProp_externalId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachNonLoginUniversalId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachNonLoginUniversalId_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_AttachNonLoginUniversalId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachNonLoginUniversalId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachNonLoginUniversalId_Statics::NewProp_externalId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachNonLoginUniversalId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachNonLoginUniversalId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Attachs universal id to current profile with no login\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - ATTACH_NON_LOGIN_UNIVERSAL_ID\n\x09*\n\x09* @param externalId the id connected with \n\x09* @param callback The method to be invoked when the server response is received\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Attachs universal id to current profile with no login\n\nService Name - identity\nService Operation - ATTACH_NON_LOGIN_UNIVERSAL_ID\n\n@param externalId the id connected with\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_AttachNonLoginUniversalId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "AttachNonLoginUniversalId", nullptr, nullptr, sizeof(BCIdentityProxy_eventAttachNonLoginUniversalId_Parms), Z_Construct_UFunction_UBCIdentityProxy_AttachNonLoginUniversalId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachNonLoginUniversalId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachNonLoginUniversalId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachNonLoginUniversalId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_AttachNonLoginUniversalId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_AttachNonLoginUniversalId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics
	{
		struct BCIdentityProxy_eventAttachOculusIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString oculusId;
			FString oculusNonce;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oculusId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_oculusId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oculusNonce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_oculusNonce;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachOculusIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::NewProp_oculusId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::NewProp_oculusId = { "oculusId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachOculusIdentity_Parms, oculusId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::NewProp_oculusId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::NewProp_oculusId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::NewProp_oculusNonce_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::NewProp_oculusNonce = { "oculusNonce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachOculusIdentity_Parms, oculusNonce), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::NewProp_oculusNonce_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::NewProp_oculusNonce_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachOculusIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::NewProp_oculusId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::NewProp_oculusNonce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Attach the user's Oculus credentials to the current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Attach\n\x09*\n\x09* Param - oculusId The oculus id of the user\n\x09* Param - oculusNonce token from the Oculus SDK\n\x09*\n\x09* Errors to watch for:  SWITCHING_PROFILES - this means that the Oculus identity you provided\n\x09* already points to a different profile.  You will likely want to offer the user the\n\x09* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n\x09*\n\x09* To switch profiles, call ClearSavedProfileID() and call AuthenticateOculus().\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Attach the user's Oculus credentials to the current profile.\n*\n* Service Name - identity\n* Service Operation - Attach\n*\n* Param - oculusId The oculus id of the user\n* Param - oculusNonce token from the Oculus SDK\n*\n* Errors to watch for:  SWITCHING_PROFILES - this means that the Oculus identity you provided\n* already points to a different profile.  You will likely want to offer the user the\n* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n*\n* To switch profiles, call ClearSavedProfileID() and call AuthenticateOculus()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "AttachOculusIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventAttachOculusIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics
	{
		struct BCIdentityProxy_eventAttachParentWithIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString externalId;
			FString authenticationToken;
			EBCAuthType authenticationType;
			FString externalAuthName;
			bool forceCreate;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_externalId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_externalId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_authenticationToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_authenticationToken;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_authenticationType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_authenticationType;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachParentWithIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_externalId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_externalId = { "externalId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachParentWithIdentity_Parms, externalId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_externalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_externalId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_authenticationToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_authenticationToken = { "authenticationToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachParentWithIdentity_Parms, authenticationToken), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_authenticationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_authenticationToken_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_authenticationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_authenticationType = { "authenticationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachParentWithIdentity_Parms, authenticationType), Z_Construct_UEnum_BCClientPlugin_EBCAuthType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_externalAuthName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_externalAuthName = { "externalAuthName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachParentWithIdentity_Parms, externalAuthName), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_externalAuthName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_externalAuthName_MetaData)) };
	void Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCIdentityProxy_eventAttachParentWithIdentity_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCIdentityProxy_eventAttachParentWithIdentity_Parms), &Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachParentWithIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_externalId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_authenticationToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_authenticationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_authenticationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_externalAuthName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Attach a new identity to a parent app\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - ATTACH_PARENT_WITH_IDENTITY\n\x09*\n\x09* Param - externalId The users id for the new credentials\n\x09* Param - authenticationToken The password/token\n\x09* Param - authenticationType Type of identity\n\x09* Param - externalAuthName Optional - if attaching an external identity\n\x09* Param - forceCreate Should a new profile be created if it does not exist?\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Attach a new identity to a parent app\n\nService Name - identity\nService Operation - ATTACH_PARENT_WITH_IDENTITY\n\nParam - externalId The users id for the new credentials\nParam - authenticationToken The password/token\nParam - authenticationType Type of identity\nParam - externalAuthName Optional - if attaching an external identity\nParam - forceCreate Should a new profile be created if it does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "AttachParentWithIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventAttachParentWithIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics
	{
		struct BCIdentityProxy_eventAttachParseIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString parseId;
			FString authenticationToken;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parseId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_parseId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_authenticationToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_authenticationToken;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachParseIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::NewProp_parseId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::NewProp_parseId = { "parseId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachParseIdentity_Parms, parseId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::NewProp_parseId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::NewProp_parseId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::NewProp_authenticationToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::NewProp_authenticationToken = { "authenticationToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachParseIdentity_Parms, authenticationToken), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::NewProp_authenticationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::NewProp_authenticationToken_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachParseIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::NewProp_parseId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::NewProp_authenticationToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Attach the user's Parse credentials to the current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Attach\n\x09*\n\x09* Param - parseId The Parse id of the user\n\x09* Param - authenticationToken The validated token from Parse\n\x09*   (that will be further validated when sent to the bC service)\n\x09*\n\x09* Errors to watch for:  SWITCHING_PROFILES - this means that the Parse identity you provided\n\x09* already points to a different profile.  You will likely want to offer the user the\n\x09* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n\x09*\n\x09* To switch profiles, call ClearSavedProfileID() and call AuthenticateParse().\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Attach the user's Parse credentials to the current profile.\n\nService Name - identity\nService Operation - Attach\n\nParam - parseId The Parse id of the user\nParam - authenticationToken The validated token from Parse\n  (that will be further validated when sent to the bC service)\n\nErrors to watch for:  SWITCHING_PROFILES - this means that the Parse identity you provided\nalready points to a different profile.  You will likely want to offer the user the\nchoice to *SWITCH* to that profile, or *MERGE* the profiles.\n\nTo switch profiles, call ClearSavedProfileID() and call AuthenticateParse()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "AttachParseIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventAttachParseIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics
	{
		struct BCIdentityProxy_eventAttachPeerProfile_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString peer;
			FString externalId;
			FString authenticationToken;
			EBCAuthType authenticationType;
			FString externalAuthName;
			bool forceCreate;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_peer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_peer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_externalId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_externalId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_authenticationToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_authenticationToken;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_authenticationType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_authenticationType;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachPeerProfile_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_peer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_peer = { "peer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachPeerProfile_Parms, peer), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_peer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_peer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_externalId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_externalId = { "externalId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachPeerProfile_Parms, externalId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_externalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_externalId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_authenticationToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_authenticationToken = { "authenticationToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachPeerProfile_Parms, authenticationToken), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_authenticationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_authenticationToken_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_authenticationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_authenticationType = { "authenticationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachPeerProfile_Parms, authenticationType), Z_Construct_UEnum_BCClientPlugin_EBCAuthType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_externalAuthName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_externalAuthName = { "externalAuthName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachPeerProfile_Parms, externalAuthName), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_externalAuthName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_externalAuthName_MetaData)) };
	void Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCIdentityProxy_eventAttachPeerProfile_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCIdentityProxy_eventAttachPeerProfile_Parms), &Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachPeerProfile_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_peer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_externalId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_authenticationToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_authenticationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_authenticationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_externalAuthName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Attaches a peer identity to this user's profile\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - ATTACH_PEER_PROFILE\n\x09*\n\x09* Param - peer Name of the peer to connect to\n\x09* Param - externalId The users id for the new credentials\n\x09* Param - authenticationToken The password/token\n\x09* Param - authenticationType Type of identity\n\x09* Param - externalAuthName Optional - if attaching an external identity\n\x09* Param - forceCreate Should a new profile be created if it does not exist?\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Attaches a peer identity to this user's profile\n\nService Name - identity\nService Operation - ATTACH_PEER_PROFILE\n\nParam - peer Name of the peer to connect to\nParam - externalId The users id for the new credentials\nParam - authenticationToken The password/token\nParam - authenticationType Type of identity\nParam - externalAuthName Optional - if attaching an external identity\nParam - forceCreate Should a new profile be created if it does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "AttachPeerProfile", nullptr, nullptr, sizeof(BCIdentityProxy_eventAttachPeerProfile_Parms), Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics
	{
		struct BCIdentityProxy_eventAttachPlaystationNetworkIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString psnAccountId;
			FString authenticationToken;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_psnAccountId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_psnAccountId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_authenticationToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_authenticationToken;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachPlaystationNetworkIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::NewProp_psnAccountId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::NewProp_psnAccountId = { "psnAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachPlaystationNetworkIdentity_Parms, psnAccountId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::NewProp_psnAccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::NewProp_psnAccountId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::NewProp_authenticationToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::NewProp_authenticationToken = { "authenticationToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachPlaystationNetworkIdentity_Parms, authenticationToken), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::NewProp_authenticationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::NewProp_authenticationToken_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachPlaystationNetworkIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::NewProp_psnAccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::NewProp_authenticationToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Attach the user's PSN credentials to the current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Attach\n\x09*\n\x09* Param - psnAccountId The psn account id of the user\n\x09* Param - authenticationToken The validated token from the Playstation SDK\n\x09*\n\x09* Errors to watch for:  SWITCHING_PROFILES - this means that the PSN identity you provided\n\x09* already points to a different profile.  You will likely want to offer the user the\n\x09* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n\x09*\n\x09* To switch profiles, call ClearSavedProfileID() and call AuthenticatePlaystationNetwork().\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Attach the user's PSN credentials to the current profile.\n*\n* Service Name - identity\n* Service Operation - Attach\n*\n* Param - psnAccountId The psn account id of the user\n* Param - authenticationToken The validated token from the Playstation SDK\n*\n* Errors to watch for:  SWITCHING_PROFILES - this means that the PSN identity you provided\n* already points to a different profile.  You will likely want to offer the user the\n* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n*\n* To switch profiles, call ClearSavedProfileID() and call AuthenticatePlaystationNetwork()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "AttachPlaystationNetworkIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventAttachPlaystationNetworkIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics
	{
		struct BCIdentityProxy_eventAttachSteamIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString steamId;
			FString sessionTicket;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_steamId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sessionTicket_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sessionTicket;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachSteamIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::NewProp_steamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::NewProp_steamId = { "steamId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachSteamIdentity_Parms, steamId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::NewProp_steamId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::NewProp_steamId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::NewProp_sessionTicket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::NewProp_sessionTicket = { "sessionTicket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachSteamIdentity_Parms, sessionTicket), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::NewProp_sessionTicket_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::NewProp_sessionTicket_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachSteamIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::NewProp_steamId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::NewProp_sessionTicket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Attach a Steam (userid + steamsessionticket) identity to the current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Attach\n\x09*\n\x09* Param - steamId String representation of 64 bit steam id\n\x09* Param - sessionTicket The user's session ticket (hex encoded)\n\x09*\n\x09* Errors to watch for:  SWITCHING_PROFILES - this means that the email address you provided\n\x09* already points to a different profile.  You will likely want to offer the user the\n\x09* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n\x09*\n\x09* To switch profiles, call ClearSavedProfileID() and then call AuthenticateSteam().\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Attach a Steam (userid + steamsessionticket) identity to the current profile.\n*\n* Service Name - identity\n* Service Operation - Attach\n*\n* Param - steamId String representation of 64 bit steam id\n* Param - sessionTicket The user's session ticket (hex encoded)\n*\n* Errors to watch for:  SWITCHING_PROFILES - this means that the email address you provided\n* already points to a different profile.  You will likely want to offer the user the\n* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n*\n* To switch profiles, call ClearSavedProfileID() and then call AuthenticateSteam()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "AttachSteamIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventAttachSteamIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics
	{
		struct BCIdentityProxy_eventAttachTwitterIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString twitterId;
			FString authenticationToken;
			FString secret;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_twitterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_twitterId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_authenticationToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_authenticationToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_secret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_secret;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachTwitterIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::NewProp_twitterId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::NewProp_twitterId = { "twitterId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachTwitterIdentity_Parms, twitterId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::NewProp_twitterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::NewProp_twitterId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::NewProp_authenticationToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::NewProp_authenticationToken = { "authenticationToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachTwitterIdentity_Parms, authenticationToken), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::NewProp_authenticationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::NewProp_authenticationToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::NewProp_secret_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::NewProp_secret = { "secret", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachTwitterIdentity_Parms, secret), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::NewProp_secret_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::NewProp_secret_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachTwitterIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::NewProp_twitterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::NewProp_authenticationToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::NewProp_secret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Attach the user's Twitter credentials to the current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Attach\n\x09*\n\x09* Param - twitterId The Twitter id of the user\n\x09* Param - authenticationToken The authentication token derrived from the twitter APIs\n\x09* Param - secret The secret given when attempting to link with Twitter\n\x09*\n\x09* Errors to watch for:  SWITCHING_PROFILES - this means that the Twitter identity you provided\n\x09* already points to a different profile.  You will likely want to offer the user the\n\x09* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n\x09*\n\x09* To switch profiles, call ClearSavedProfileID() and call AuthenticateTwitter().\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Attach the user's Twitter credentials to the current profile.\n\nService Name - identity\nService Operation - Attach\n\nParam - twitterId The Twitter id of the user\nParam - authenticationToken The authentication token derrived from the twitter APIs\nParam - secret The secret given when attempting to link with Twitter\n\nErrors to watch for:  SWITCHING_PROFILES - this means that the Twitter identity you provided\nalready points to a different profile.  You will likely want to offer the user the\nchoice to *SWITCH* to that profile, or *MERGE* the profiles.\n\nTo switch profiles, call ClearSavedProfileID() and call AuthenticateTwitter()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "AttachTwitterIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventAttachTwitterIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics
	{
		struct BCIdentityProxy_eventAttachUniversalIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString userId;
			FString password;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_password;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachUniversalIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::NewProp_userId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachUniversalIdentity_Parms, userId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::NewProp_userId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::NewProp_userId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::NewProp_password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::NewProp_password = { "password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachUniversalIdentity_Parms, password), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::NewProp_password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::NewProp_password_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventAttachUniversalIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::NewProp_userId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::NewProp_password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Attach a Universal (userId + password) identity to the current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Attach\n\x09*\n\x09* Param - userId The user's userId\n\x09* Param - password The user's password\n\x09*\n\x09* Errors to watch for:  SWITCHING_PROFILES - this means that the email address you provided\n\x09* already points to a different profile.  You will likely want to offer the user the\n\x09* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n\x09*\n\x09* To switch profiles, call ClearSavedProfileID() and then call AuthenticateEmailPassword().\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Attach a Universal (userId + password) identity to the current profile.\n*\n* Service Name - identity\n* Service Operation - Attach\n*\n* Param - userId The user's userId\n* Param - password The user's password\n*\n* Errors to watch for:  SWITCHING_PROFILES - this means that the email address you provided\n* already points to a different profile.  You will likely want to offer the user the\n* choice to *SWITCH* to that profile, or *MERGE* the profiles.\n*\n* To switch profiles, call ClearSavedProfileID() and then call AuthenticateEmailPassword()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "AttachUniversalIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventAttachUniversalIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics
	{
		struct BCIdentityProxy_eventChangeEmailIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString oldEmailAddress;
			FString password;
			FString newEmailAddress;
			bool updateContactEmail;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldEmailAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_oldEmailAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newEmailAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_newEmailAddress;
		static void NewProp_updateContactEmail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_updateContactEmail;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventChangeEmailIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_oldEmailAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_oldEmailAddress = { "oldEmailAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventChangeEmailIdentity_Parms, oldEmailAddress), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_oldEmailAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_oldEmailAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_password = { "password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventChangeEmailIdentity_Parms, password), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_newEmailAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_newEmailAddress = { "newEmailAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventChangeEmailIdentity_Parms, newEmailAddress), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_newEmailAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_newEmailAddress_MetaData)) };
	void Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_updateContactEmail_SetBit(void* Obj)
	{
		((BCIdentityProxy_eventChangeEmailIdentity_Parms*)Obj)->updateContactEmail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_updateContactEmail = { "updateContactEmail", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCIdentityProxy_eventChangeEmailIdentity_Parms), &Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_updateContactEmail_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventChangeEmailIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_oldEmailAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_newEmailAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_updateContactEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n     * Allows email identity email address to be changed\n     *\n     * Service Name - identity\n     * Service Operation - CHANGE_EMAIL_IDENTITY\n     *\n     * Param - oldEmailAddress Old email address\n     * Param - password Password for identity\n     * Param - newEmailAddress New email address\n     * Param - updateContactEmail Whether to update contact email in profile\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Allows email identity email address to be changed\n\nService Name - identity\nService Operation - CHANGE_EMAIL_IDENTITY\n\nParam - oldEmailAddress Old email address\nParam - password Password for identity\nParam - newEmailAddress New email address\nParam - updateContactEmail Whether to update contact email in profile" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "ChangeEmailIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventChangeEmailIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics
	{
		struct BCIdentityProxy_eventDetachAppleIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString appleUserId;
			bool continueAnon;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_appleUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_appleUserId;
		static void NewProp_continueAnon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_continueAnon;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachAppleIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::NewProp_appleUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::NewProp_appleUserId = { "appleUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachAppleIdentity_Parms, appleUserId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::NewProp_appleUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::NewProp_appleUserId_MetaData)) };
	void Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::NewProp_continueAnon_SetBit(void* Obj)
	{
		((BCIdentityProxy_eventDetachAppleIdentity_Parms*)Obj)->continueAnon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::NewProp_continueAnon = { "continueAnon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCIdentityProxy_eventDetachAppleIdentity_Parms), &Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::NewProp_continueAnon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachAppleIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::NewProp_appleUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::NewProp_continueAnon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Detach the Apple identity from this profile.\n\x09*\n    * Service Name - Identity\n    * Service Operation - detach\n    *\n    * @param appleUserId this can be user id OR the email of the user account\n    * @param identityToken  the token confirming the user's identity\n    * @param forceCreate Should a new profile be created for this user if the account does not exist?\n    * @param callback The method to be invoked when the server response is received\n\x09*\n\x09* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set continueAnon to false, and\n\x09* disconnecting this identity would result in the profile being anonymous (which means that\n\x09* the profile wouldn't be retrievable if the user loses their device)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Detach the Apple identity from this profile.\n*\n* Service Name - Identity\n* Service Operation - detach\n*\n* @param appleUserId this can be user id OR the email of the user account\n* @param identityToken  the token confirming the user's identity\n* @param forceCreate Should a new profile be created for this user if the account does not exist?\n* @param callback The method to be invoked when the server response is received\n*\n* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set continueAnon to false, and\n* disconnecting this identity would result in the profile being anonymous (which means that\n* the profile wouldn't be retrievable if the user loses their device)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "DetachAppleIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventDetachAppleIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_DetachBlockchainIdentity_Statics
	{
		struct BCIdentityProxy_eventDetachBlockchainIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString blockchainId;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_blockchainId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_blockchainId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachBlockchainIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachBlockchainIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachBlockchainIdentity_Statics::NewProp_blockchainId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachBlockchainIdentity_Statics::NewProp_blockchainId = { "blockchainId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachBlockchainIdentity_Parms, blockchainId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachBlockchainIdentity_Statics::NewProp_blockchainId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachBlockchainIdentity_Statics::NewProp_blockchainId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachBlockchainIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachBlockchainIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_DetachBlockchainIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachBlockchainIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachBlockchainIdentity_Statics::NewProp_blockchainId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachBlockchainIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachBlockchainIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09 * Detach the Facebook identity from this profile.\n\x09 *\n\x09 * Service Name - Identity\n\x09 * Service Operation - DetachBlockchainIdentity\n\x09 *\n\x09 * @param blockchainId The facebook id of the user\n\x09 * @param callback The method to be invoked when the server response is received\n\x09 */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Detach the Facebook identity from this profile.\n*\n* Service Name - Identity\n* Service Operation - DetachBlockchainIdentity\n*\n* @param blockchainId The facebook id of the user\n* @param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_DetachBlockchainIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "DetachBlockchainIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventDetachBlockchainIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_DetachBlockchainIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachBlockchainIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachBlockchainIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachBlockchainIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_DetachBlockchainIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_DetachBlockchainIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics
	{
		struct BCIdentityProxy_eventDetachEmailIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString email;
			bool continueAnon;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_email;
		static void NewProp_continueAnon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_continueAnon;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachEmailIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::NewProp_email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::NewProp_email = { "email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachEmailIdentity_Parms, email), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::NewProp_email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::NewProp_email_MetaData)) };
	void Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::NewProp_continueAnon_SetBit(void* Obj)
	{
		((BCIdentityProxy_eventDetachEmailIdentity_Parms*)Obj)->continueAnon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::NewProp_continueAnon = { "continueAnon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCIdentityProxy_eventDetachEmailIdentity_Parms), &Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::NewProp_continueAnon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachEmailIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::NewProp_email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::NewProp_continueAnon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Detach the e-mail identity from the current profile\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Detach\n\x09*\n\x09* Param - email The user's e-mail address\n\x09* Param - continueAnon Proceed even if the profile will revert to anonymous?\n\x09*\n\x09* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n\x09* disconnecting this identity would result in the profile being anonymous (which means that\n\x09* the profile wouldn't be retrievable if the user loses their device)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Detach the e-mail identity from the current profile\n*\n* Service Name - identity\n* Service Operation - Detach\n*\n* Param - email The user's e-mail address\n* Param - continueAnon Proceed even if the profile will revert to anonymous?\n*\n* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n* disconnecting this identity would result in the profile being anonymous (which means that\n* the profile wouldn't be retrievable if the user loses their device)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "DetachEmailIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventDetachEmailIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics
	{
		struct BCIdentityProxy_eventDetachFacebookIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString facebookId;
			bool continueAnon;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_facebookId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_facebookId;
		static void NewProp_continueAnon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_continueAnon;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachFacebookIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::NewProp_facebookId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::NewProp_facebookId = { "facebookId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachFacebookIdentity_Parms, facebookId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::NewProp_facebookId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::NewProp_facebookId_MetaData)) };
	void Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::NewProp_continueAnon_SetBit(void* Obj)
	{
		((BCIdentityProxy_eventDetachFacebookIdentity_Parms*)Obj)->continueAnon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::NewProp_continueAnon = { "continueAnon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCIdentityProxy_eventDetachFacebookIdentity_Parms), &Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::NewProp_continueAnon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachFacebookIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::NewProp_facebookId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::NewProp_continueAnon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Detach the Facebook identity from this profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Detach\n\x09*\n\x09* Param - externalId The facebook id of the user\n\x09* Param - continueAnon Proceed even if the profile will revert to anonymous?\n\x09*\n\x09* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n\x09* disconnecting this identity would result in the profile being anonymous (which means that\n\x09* the profile wouldn't be retrievable if the user loses their device)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Detach the Facebook identity from this profile.\n*\n* Service Name - identity\n* Service Operation - Detach\n*\n* Param - externalId The facebook id of the user\n* Param - continueAnon Proceed even if the profile will revert to anonymous?\n*\n* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n* disconnecting this identity would result in the profile being anonymous (which means that\n* the profile wouldn't be retrievable if the user loses their device)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "DetachFacebookIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventDetachFacebookIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics
	{
		struct BCIdentityProxy_eventDetachFacebookLimitedIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString facebookLimitedId;
			bool continueAnon;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_facebookLimitedId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_facebookLimitedId;
		static void NewProp_continueAnon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_continueAnon;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachFacebookLimitedIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::NewProp_facebookLimitedId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::NewProp_facebookLimitedId = { "facebookLimitedId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachFacebookLimitedIdentity_Parms, facebookLimitedId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::NewProp_facebookLimitedId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::NewProp_facebookLimitedId_MetaData)) };
	void Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::NewProp_continueAnon_SetBit(void* Obj)
	{
		((BCIdentityProxy_eventDetachFacebookLimitedIdentity_Parms*)Obj)->continueAnon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::NewProp_continueAnon = { "continueAnon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCIdentityProxy_eventDetachFacebookLimitedIdentity_Parms), &Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::NewProp_continueAnon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachFacebookLimitedIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::NewProp_facebookLimitedId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::NewProp_continueAnon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Detach the FacebookLimited identity from this profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Detach\n\x09*\n\x09* Param - externalId The facebookLimited id of the user\n\x09* Param - continueAnon Proceed even if the profile will revert to anonymous?\n\x09*\n\x09* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n\x09* disconnecting this identity would result in the profile being anonymous (which means that\n\x09* the profile wouldn't be retrievable if the user loses their device)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Detach the FacebookLimited identity from this profile.\n*\n* Service Name - identity\n* Service Operation - Detach\n*\n* Param - externalId The facebookLimited id of the user\n* Param - continueAnon Proceed even if the profile will revert to anonymous?\n*\n* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n* disconnecting this identity would result in the profile being anonymous (which means that\n* the profile wouldn't be retrievable if the user loses their device)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "DetachFacebookLimitedIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventDetachFacebookLimitedIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics
	{
		struct BCIdentityProxy_eventDetachGameCenterIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString gameCenterId;
			bool continueAnon;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameCenterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameCenterId;
		static void NewProp_continueAnon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_continueAnon;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachGameCenterIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::NewProp_gameCenterId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::NewProp_gameCenterId = { "gameCenterId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachGameCenterIdentity_Parms, gameCenterId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::NewProp_gameCenterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::NewProp_gameCenterId_MetaData)) };
	void Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::NewProp_continueAnon_SetBit(void* Obj)
	{
		((BCIdentityProxy_eventDetachGameCenterIdentity_Parms*)Obj)->continueAnon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::NewProp_continueAnon = { "continueAnon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCIdentityProxy_eventDetachGameCenterIdentity_Parms), &Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::NewProp_continueAnon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachGameCenterIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::NewProp_gameCenterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::NewProp_continueAnon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Detach the Game Center identity from the current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Detach\n\x09*\n\x09* Param - gameCenterId The player's game center id  (use the playerID property from the local GKPlayer object)\n\x09* Param - continueAnon Proceed even if the profile will revert to anonymous?\n\x09*\n\x09* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n\x09* disconnecting this identity would result in the profile being anonymous (which means that\n\x09* the profile wouldn't be retrievable if the user loses their device)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Detach the Game Center identity from the current profile.\n*\n* Service Name - identity\n* Service Operation - Detach\n*\n* Param - gameCenterId The player's game center id  (use the playerID property from the local GKPlayer object)\n* Param - continueAnon Proceed even if the profile will revert to anonymous?\n*\n* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n* disconnecting this identity would result in the profile being anonymous (which means that\n* the profile wouldn't be retrievable if the user loses their device)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "DetachGameCenterIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventDetachGameCenterIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics
	{
		struct BCIdentityProxy_eventDetachGoogleIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString googleUserId;
			bool continueAnon;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_googleUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_googleUserId;
		static void NewProp_continueAnon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_continueAnon;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachGoogleIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::NewProp_googleUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::NewProp_googleUserId = { "googleUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachGoogleIdentity_Parms, googleUserId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::NewProp_googleUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::NewProp_googleUserId_MetaData)) };
	void Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::NewProp_continueAnon_SetBit(void* Obj)
	{
		((BCIdentityProxy_eventDetachGoogleIdentity_Parms*)Obj)->continueAnon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::NewProp_continueAnon = { "continueAnon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCIdentityProxy_eventDetachGoogleIdentity_Parms), &Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::NewProp_continueAnon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachGoogleIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::NewProp_googleUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::NewProp_continueAnon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Detach the Google identity from this profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Detach\n\x09*\n\x09* Param - googleId The Google id of the user\n\x09* Param - continueAnon Proceed even if the profile will revert to anonymous?\n\x09*\n\x09* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n\x09* disconnecting this identity would result in the profile being anonymous (which means that\n\x09* the profile wouldn't be retrievable if the user loses their device)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Detach the Google identity from this profile.\n*\n* Service Name - identity\n* Service Operation - Detach\n*\n* Param - googleId The Google id of the user\n* Param - continueAnon Proceed even if the profile will revert to anonymous?\n*\n* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n* disconnecting this identity would result in the profile being anonymous (which means that\n* the profile wouldn't be retrievable if the user loses their device)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "DetachGoogleIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventDetachGoogleIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics
	{
		struct BCIdentityProxy_eventDetachGoogleOpenIdIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString googleUserAccountEmail;
			bool continueAnon;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_googleUserAccountEmail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_googleUserAccountEmail;
		static void NewProp_continueAnon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_continueAnon;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachGoogleOpenIdIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::NewProp_googleUserAccountEmail_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::NewProp_googleUserAccountEmail = { "googleUserAccountEmail", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachGoogleOpenIdIdentity_Parms, googleUserAccountEmail), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::NewProp_googleUserAccountEmail_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::NewProp_googleUserAccountEmail_MetaData)) };
	void Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::NewProp_continueAnon_SetBit(void* Obj)
	{
		((BCIdentityProxy_eventDetachGoogleOpenIdIdentity_Parms*)Obj)->continueAnon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::NewProp_continueAnon = { "continueAnon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCIdentityProxy_eventDetachGoogleOpenIdIdentity_Parms), &Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::NewProp_continueAnon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachGoogleOpenIdIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::NewProp_googleUserAccountEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::NewProp_continueAnon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Detach the GoogleOpenId identity from this profile.\n\x09*\n    * Service Name - Identity\n    * Service Operation - merge\n    *\n    * @param googleUserAccountEmail The email associated with the google user\n    * @param IdToken  The Id token of the google account. Can get with calls like requestIdToken\n    * @param forceCreate Should a new profile be created for this user if the account does not exist?\n    * @param callback The method to be invoked when the server response is received\n\x09*\n\x09* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set continueAnon to false, and\n\x09* disconnecting this identity would result in the profile being anonymous (which means that\n\x09* the profile wouldn't be retrievable if the user loses their device)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Detach the GoogleOpenId identity from this profile.\n*\n* Service Name - Identity\n* Service Operation - merge\n*\n* @param googleUserAccountEmail The email associated with the google user\n* @param IdToken  The Id token of the google account. Can get with calls like requestIdToken\n* @param forceCreate Should a new profile be created for this user if the account does not exist?\n* @param callback The method to be invoked when the server response is received\n*\n* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set continueAnon to false, and\n* disconnecting this identity would result in the profile being anonymous (which means that\n* the profile wouldn't be retrievable if the user loses their device)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "DetachGoogleOpenIdIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventDetachGoogleOpenIdIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics
	{
		struct BCIdentityProxy_eventDetachOculusIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString oculusId;
			bool continueAnon;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oculusId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_oculusId;
		static void NewProp_continueAnon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_continueAnon;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachOculusIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::NewProp_oculusId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::NewProp_oculusId = { "oculusId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachOculusIdentity_Parms, oculusId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::NewProp_oculusId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::NewProp_oculusId_MetaData)) };
	void Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::NewProp_continueAnon_SetBit(void* Obj)
	{
		((BCIdentityProxy_eventDetachOculusIdentity_Parms*)Obj)->continueAnon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::NewProp_continueAnon = { "continueAnon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCIdentityProxy_eventDetachOculusIdentity_Parms), &Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::NewProp_continueAnon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachOculusIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::NewProp_oculusId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::NewProp_continueAnon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Detach the Oculus identity from this profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Detach\n\x09*\n\x09* Param - oculusId The oculus id of the user\n\x09* Param - continueAnon Proceed even if the profile will revert to anonymous?\n\x09*\n\x09* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n\x09* disconnecting this identity would result in the profile being anonymous (which means that\n\x09* the profile wouldn't be retrievable if the user loses their device)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Detach the Oculus identity from this profile.\n*\n* Service Name - identity\n* Service Operation - Detach\n*\n* Param - oculusId The oculus id of the user\n* Param - continueAnon Proceed even if the profile will revert to anonymous?\n*\n* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n* disconnecting this identity would result in the profile being anonymous (which means that\n* the profile wouldn't be retrievable if the user loses their device)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "DetachOculusIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventDetachOculusIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_DetachParent_Statics
	{
		struct BCIdentityProxy_eventDetachParent_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachParent_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachParent_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachParent_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_DetachParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachParent_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachParent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Detaches parent from this user's profile\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - DETACH_PARENT\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Detaches parent from this user's profile\n\nService Name - identity\nService Operation - DETACH_PARENT" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_DetachParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "DetachParent", nullptr, nullptr, sizeof(BCIdentityProxy_eventDetachParent_Parms), Z_Construct_UFunction_UBCIdentityProxy_DetachParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_DetachParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_DetachParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics
	{
		struct BCIdentityProxy_eventDetachParseIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString parseId;
			bool continueAnon;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parseId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_parseId;
		static void NewProp_continueAnon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_continueAnon;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachParseIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::NewProp_parseId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::NewProp_parseId = { "parseId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachParseIdentity_Parms, parseId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::NewProp_parseId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::NewProp_parseId_MetaData)) };
	void Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::NewProp_continueAnon_SetBit(void* Obj)
	{
		((BCIdentityProxy_eventDetachParseIdentity_Parms*)Obj)->continueAnon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::NewProp_continueAnon = { "continueAnon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCIdentityProxy_eventDetachParseIdentity_Parms), &Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::NewProp_continueAnon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachParseIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::NewProp_parseId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::NewProp_continueAnon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Detach the Parse identity from this profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Detach\n\x09*\n\x09* Param - parseId The Parse id of the user\n\x09* Param - continueAnon Proceed even if the profile will revert to anonymous?\n\x09*\n\x09* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n\x09* disconnecting this identity would result in the profile being anonymous (which means that\n\x09* the profile wouldn't be retrievable if the user loses their device)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Detach the Parse identity from this profile.\n*\n* Service Name - identity\n* Service Operation - Detach\n*\n* Param - parseId The Parse id of the user\n* Param - continueAnon Proceed even if the profile will revert to anonymous?\n*\n* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n* disconnecting this identity would result in the profile being anonymous (which means that\n* the profile wouldn't be retrievable if the user loses their device)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "DetachParseIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventDetachParseIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_DetachPeer_Statics
	{
		struct BCIdentityProxy_eventDetachPeer_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString peer;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_peer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_peer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachPeer_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachPeer_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachPeer_Statics::NewProp_peer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachPeer_Statics::NewProp_peer = { "peer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachPeer_Parms, peer), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachPeer_Statics::NewProp_peer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachPeer_Statics::NewProp_peer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachPeer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachPeer_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_DetachPeer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachPeer_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachPeer_Statics::NewProp_peer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachPeer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachPeer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Detaches a peer identity from this user's profile\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - DETACH_PEER\n\x09*\n\x09* Param - peer Name of the peer to connect to\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Detaches a peer identity from this user's profile\n\nService Name - identity\nService Operation - DETACH_PEER\n\nParam - peer Name of the peer to connect to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_DetachPeer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "DetachPeer", nullptr, nullptr, sizeof(BCIdentityProxy_eventDetachPeer_Parms), Z_Construct_UFunction_UBCIdentityProxy_DetachPeer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachPeer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachPeer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachPeer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_DetachPeer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_DetachPeer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics
	{
		struct BCIdentityProxy_eventDetachPlaystationNetworkIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString psnAccountId;
			bool continueAnon;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_psnAccountId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_psnAccountId;
		static void NewProp_continueAnon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_continueAnon;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachPlaystationNetworkIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::NewProp_psnAccountId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::NewProp_psnAccountId = { "psnAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachPlaystationNetworkIdentity_Parms, psnAccountId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::NewProp_psnAccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::NewProp_psnAccountId_MetaData)) };
	void Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::NewProp_continueAnon_SetBit(void* Obj)
	{
		((BCIdentityProxy_eventDetachPlaystationNetworkIdentity_Parms*)Obj)->continueAnon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::NewProp_continueAnon = { "continueAnon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCIdentityProxy_eventDetachPlaystationNetworkIdentity_Parms), &Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::NewProp_continueAnon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachPlaystationNetworkIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::NewProp_psnAccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::NewProp_continueAnon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Detach the PSN identity from this profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Detach\n\x09*\n\x09* Param - psnAccountId The psn account id of the user\n\x09* Param - continueAnon Proceed even if the profile will revert to anonymous?\n\x09*\n\x09* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n\x09* disconnecting this identity would result in the profile being anonymous (which means that\n\x09* the profile wouldn't be retrievable if the user loses their device)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Detach the PSN identity from this profile.\n*\n* Service Name - identity\n* Service Operation - Detach\n*\n* Param - psnAccountId The psn account id of the user\n* Param - continueAnon Proceed even if the profile will revert to anonymous?\n*\n* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n* disconnecting this identity would result in the profile being anonymous (which means that\n* the profile wouldn't be retrievable if the user loses their device)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "DetachPlaystationNetworkIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventDetachPlaystationNetworkIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics
	{
		struct BCIdentityProxy_eventDetachSteamIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString steamId;
			bool continueAnon;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_steamId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamId;
		static void NewProp_continueAnon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_continueAnon;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachSteamIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::NewProp_steamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::NewProp_steamId = { "steamId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachSteamIdentity_Parms, steamId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::NewProp_steamId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::NewProp_steamId_MetaData)) };
	void Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::NewProp_continueAnon_SetBit(void* Obj)
	{
		((BCIdentityProxy_eventDetachSteamIdentity_Parms*)Obj)->continueAnon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::NewProp_continueAnon = { "continueAnon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCIdentityProxy_eventDetachSteamIdentity_Parms), &Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::NewProp_continueAnon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachSteamIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::NewProp_steamId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::NewProp_continueAnon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Detach the steam identity from the current profile\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Detach\n\x09*\n\x09* Param - steamId String representation of 64 bit steam id\n\x09* Param - continueAnon Proceed even if the profile will revert to anonymous?\n\x09*\n\x09* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n\x09* disconnecting this identity would result in the profile being anonymous (which means that\n\x09* the profile wouldn't be retrievable if the user loses their device)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Detach the steam identity from the current profile\n*\n* Service Name - identity\n* Service Operation - Detach\n*\n* Param - steamId String representation of 64 bit steam id\n* Param - continueAnon Proceed even if the profile will revert to anonymous?\n*\n* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n* disconnecting this identity would result in the profile being anonymous (which means that\n* the profile wouldn't be retrievable if the user loses their device)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "DetachSteamIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventDetachSteamIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics
	{
		struct BCIdentityProxy_eventDetachTwitterIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString twitterId;
			bool continueAnon;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_twitterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_twitterId;
		static void NewProp_continueAnon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_continueAnon;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachTwitterIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::NewProp_twitterId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::NewProp_twitterId = { "twitterId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachTwitterIdentity_Parms, twitterId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::NewProp_twitterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::NewProp_twitterId_MetaData)) };
	void Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::NewProp_continueAnon_SetBit(void* Obj)
	{
		((BCIdentityProxy_eventDetachTwitterIdentity_Parms*)Obj)->continueAnon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::NewProp_continueAnon = { "continueAnon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCIdentityProxy_eventDetachTwitterIdentity_Parms), &Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::NewProp_continueAnon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachTwitterIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::NewProp_twitterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::NewProp_continueAnon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Detach the Twitter identity from this profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Detach\n\x09*\n\x09* Param - twitterId The Twitter id of the user\n\x09* Param - continueAnon Proceed even if the profile will revert to anonymous?\n\x09*\n\x09* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n\x09* disconnecting this identity would result in the profile being anonymous (which means that\n\x09* the profile wouldn't be retrievable if the user loses their device)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Detach the Twitter identity from this profile.\n\nService Name - identity\nService Operation - Detach\n\nParam - twitterId The Twitter id of the user\nParam - continueAnon Proceed even if the profile will revert to anonymous?\n\nWatch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\ndisconnecting this identity would result in the profile being anonymous (which means that\nthe profile wouldn't be retrievable if the user loses their device)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "DetachTwitterIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventDetachTwitterIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics
	{
		struct BCIdentityProxy_eventDetachUniversalIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString userId;
			bool continueAnon;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userId;
		static void NewProp_continueAnon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_continueAnon;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachUniversalIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::NewProp_userId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachUniversalIdentity_Parms, userId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::NewProp_userId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::NewProp_userId_MetaData)) };
	void Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::NewProp_continueAnon_SetBit(void* Obj)
	{
		((BCIdentityProxy_eventDetachUniversalIdentity_Parms*)Obj)->continueAnon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::NewProp_continueAnon = { "continueAnon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCIdentityProxy_eventDetachUniversalIdentity_Parms), &Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::NewProp_continueAnon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventDetachUniversalIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::NewProp_userId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::NewProp_continueAnon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Detach the universal identity from the current profile\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Detach\n\x09*\n\x09* Param - userId The user's userId\n\x09* Param - continueAnon Proceed even if the profile will revert to anonymous?\n\x09*\n\x09* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n\x09* disconnecting this identity would result in the profile being anonymous (which means that\n\x09* the profile wouldn't be retrievable if the user loses their device)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Detach the universal identity from the current profile\n*\n* Service Name - identity\n* Service Operation - Detach\n*\n* Param - userId The user's userId\n* Param - continueAnon Proceed even if the profile will revert to anonymous?\n*\n* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set in_continueAnon to false, and\n* disconnecting this identity would result in the profile being anonymous (which means that\n* the profile wouldn't be retrievable if the user loses their device)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "DetachUniversalIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventDetachUniversalIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_GetChildProfiles_Statics
	{
		struct BCIdentityProxy_eventGetChildProfiles_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool includeSummaryData;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_includeSummaryData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeSummaryData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_GetChildProfiles_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventGetChildProfiles_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCIdentityProxy_GetChildProfiles_Statics::NewProp_includeSummaryData_SetBit(void* Obj)
	{
		((BCIdentityProxy_eventGetChildProfiles_Parms*)Obj)->includeSummaryData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCIdentityProxy_GetChildProfiles_Statics::NewProp_includeSummaryData = { "includeSummaryData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCIdentityProxy_eventGetChildProfiles_Parms), &Z_Construct_UFunction_UBCIdentityProxy_GetChildProfiles_Statics::NewProp_includeSummaryData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_GetChildProfiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventGetChildProfiles_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_GetChildProfiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_GetChildProfiles_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_GetChildProfiles_Statics::NewProp_includeSummaryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_GetChildProfiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_GetChildProfiles_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Returns a list of all child profiles in child Apps\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - GET_CHILD_PROFILES\n\x09*\n\x09* Param - includeSummaryData Whether to return the summary friend data along with this call\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Returns a list of all child profiles in child Apps\n\nService Name - identity\nService Operation - GET_CHILD_PROFILES\n\nParam - includeSummaryData Whether to return the summary friend data along with this call" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_GetChildProfiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "GetChildProfiles", nullptr, nullptr, sizeof(BCIdentityProxy_eventGetChildProfiles_Parms), Z_Construct_UFunction_UBCIdentityProxy_GetChildProfiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_GetChildProfiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_GetChildProfiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_GetChildProfiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_GetChildProfiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_GetChildProfiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_GetExpiredIdentities_Statics
	{
		struct BCIdentityProxy_eventGetExpiredIdentities_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_GetExpiredIdentities_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventGetExpiredIdentities_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_GetExpiredIdentities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventGetExpiredIdentities_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_GetExpiredIdentities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_GetExpiredIdentities_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_GetExpiredIdentities_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_GetExpiredIdentities_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Retrieve list of expired identities\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - GET_EXPIRED_IDENTITIES\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Retrieve list of expired identities\n\nService Name - identity\nService Operation - GET_EXPIRED_IDENTITIES" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_GetExpiredIdentities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "GetExpiredIdentities", nullptr, nullptr, sizeof(BCIdentityProxy_eventGetExpiredIdentities_Parms), Z_Construct_UFunction_UBCIdentityProxy_GetExpiredIdentities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_GetExpiredIdentities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_GetExpiredIdentities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_GetExpiredIdentities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_GetExpiredIdentities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_GetExpiredIdentities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_GetIdentities_Statics
	{
		struct BCIdentityProxy_eventGetIdentities_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_GetIdentities_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventGetIdentities_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_GetIdentities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventGetIdentities_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_GetIdentities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_GetIdentities_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_GetIdentities_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_GetIdentities_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Retrieve list of identities\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - GET_IDENTITIES\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Retrieve list of identities\n\nService Name - identity\nService Operation - GET_IDENTITIES" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_GetIdentities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "GetIdentities", nullptr, nullptr, sizeof(BCIdentityProxy_eventGetIdentities_Parms), Z_Construct_UFunction_UBCIdentityProxy_GetIdentities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_GetIdentities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_GetIdentities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_GetIdentities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_GetIdentities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_GetIdentities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_GetPeerProfiles_Statics
	{
		struct BCIdentityProxy_eventGetPeerProfiles_Parms
		{
			UBrainCloudWrapper* brainCloud;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloud;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_GetPeerProfiles_Statics::NewProp_brainCloud = { "brainCloud", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventGetPeerProfiles_Parms, brainCloud), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_GetPeerProfiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventGetPeerProfiles_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_GetPeerProfiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_GetPeerProfiles_Statics::NewProp_brainCloud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_GetPeerProfiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_GetPeerProfiles_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Returns a list of peer profiles attached to this user\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - GET_PEER_PROFILES\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Returns a list of peer profiles attached to this user\n\nService Name - identity\nService Operation - GET_PEER_PROFILES" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_GetPeerProfiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "GetPeerProfiles", nullptr, nullptr, sizeof(BCIdentityProxy_eventGetPeerProfiles_Parms), Z_Construct_UFunction_UBCIdentityProxy_GetPeerProfiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_GetPeerProfiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_GetPeerProfiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_GetPeerProfiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_GetPeerProfiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_GetPeerProfiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics
	{
		struct BCIdentityProxy_eventMergeAppleIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString appleUserId;
			FString identityToken;
			UBCIdentityProxy* ReturnValue;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeAppleIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::NewProp_appleUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::NewProp_appleUserId = { "appleUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeAppleIdentity_Parms, appleUserId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::NewProp_appleUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::NewProp_appleUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::NewProp_identityToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::NewProp_identityToken = { "identityToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeAppleIdentity_Parms, identityToken), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::NewProp_identityToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::NewProp_identityToken_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeAppleIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::NewProp_appleUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::NewProp_identityToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Merge the profile associated with the provided Apple credentials with the\n\x09* current profile.\n    * Service Name - Identity\n    * Service Operation - merge\n    *\n    * @param appleUserId this can be user id OR the email of the user account\n    * @param identityToken  the token confirming the user's identity\n    * @param forceCreate Should a new profile be created for this user if the account does not exist?\n    * @param callback The method to be invoked when the server response is received\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Merge the profile associated with the provided Apple credentials with the\ncurrent profile.\nService Name - Identity\nService Operation - merge\n\n@param appleUserId this can be user id OR the email of the user account\n@param identityToken  the token confirming the user's identity\n@param forceCreate Should a new profile be created for this user if the account does not exist?\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "MergeAppleIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventMergeAppleIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics
	{
		struct BCIdentityProxy_eventMergeEmailIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString email;
			FString password;
			UBCIdentityProxy* ReturnValue;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeEmailIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::NewProp_email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::NewProp_email = { "email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeEmailIdentity_Parms, email), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::NewProp_email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::NewProp_email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::NewProp_password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::NewProp_password = { "password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeEmailIdentity_Parms, password), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::NewProp_password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::NewProp_password_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeEmailIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::NewProp_email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::NewProp_password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Merge the profile associated with the provided e=mail with the current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Merge\n\x09*\n\x09* Param - email The user's e-mail address\n\x09* Param - password The user's password\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Merge the profile associated with the provided e=mail with the current profile.\n*\n* Service Name - identity\n* Service Operation - Merge\n*\n* Param - email The user's e-mail address\n* Param - password The user's password" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "MergeEmailIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventMergeEmailIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics
	{
		struct BCIdentityProxy_eventMergeFacebookIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString facebookId;
			FString authenticationToken;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_facebookId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_facebookId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_authenticationToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_authenticationToken;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeFacebookIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::NewProp_facebookId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::NewProp_facebookId = { "facebookId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeFacebookIdentity_Parms, facebookId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::NewProp_facebookId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::NewProp_facebookId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::NewProp_authenticationToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::NewProp_authenticationToken = { "authenticationToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeFacebookIdentity_Parms, authenticationToken), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::NewProp_authenticationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::NewProp_authenticationToken_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeFacebookIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::NewProp_facebookId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::NewProp_authenticationToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Merge the profile associated with the provided Facebook credentials with the\n\x09* current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Merge\n\x09*\n\x09* Param - externalId The facebook id of the user\n\x09* Param - authenticationToken The validated token from the Facebook SDK\n\x09*   (that will be further validated when sent to the bC service)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Merge the profile associated with the provided Facebook credentials with the\n* current profile.\n*\n* Service Name - identity\n* Service Operation - Merge\n*\n* Param - externalId The facebook id of the user\n* Param - authenticationToken The validated token from the Facebook SDK\n*   (that will be further validated when sent to the bC service)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "MergeFacebookIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventMergeFacebookIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics
	{
		struct BCIdentityProxy_eventMergeFacebookLimitedIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString facebookLimitedId;
			FString authenticationToken;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_facebookLimitedId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_facebookLimitedId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_authenticationToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_authenticationToken;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeFacebookLimitedIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::NewProp_facebookLimitedId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::NewProp_facebookLimitedId = { "facebookLimitedId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeFacebookLimitedIdentity_Parms, facebookLimitedId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::NewProp_facebookLimitedId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::NewProp_facebookLimitedId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::NewProp_authenticationToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::NewProp_authenticationToken = { "authenticationToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeFacebookLimitedIdentity_Parms, authenticationToken), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::NewProp_authenticationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::NewProp_authenticationToken_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeFacebookLimitedIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::NewProp_facebookLimitedId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::NewProp_authenticationToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Merge the profile associated with the provided FacebookLimited credentials with the\n\x09* current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Merge\n\x09*\n\x09* Param - externalId The facebookLimited id of the user\n\x09* Param - authenticationToken The validated token from the Facebook SDK\n\x09*   (that will be further validated when sent to the bC service)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Merge the profile associated with the provided FacebookLimited credentials with the\n* current profile.\n*\n* Service Name - identity\n* Service Operation - Merge\n*\n* Param - externalId The facebookLimited id of the user\n* Param - authenticationToken The validated token from the Facebook SDK\n*   (that will be further validated when sent to the bC service)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "MergeFacebookLimitedIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventMergeFacebookLimitedIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_MergeGameCenterIdentity_Statics
	{
		struct BCIdentityProxy_eventMergeGameCenterIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString gameCenterId;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameCenterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameCenterId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeGameCenterIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeGameCenterIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeGameCenterIdentity_Statics::NewProp_gameCenterId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeGameCenterIdentity_Statics::NewProp_gameCenterId = { "gameCenterId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeGameCenterIdentity_Parms, gameCenterId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeGameCenterIdentity_Statics::NewProp_gameCenterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeGameCenterIdentity_Statics::NewProp_gameCenterId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeGameCenterIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeGameCenterIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_MergeGameCenterIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeGameCenterIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeGameCenterIdentity_Statics::NewProp_gameCenterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeGameCenterIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeGameCenterIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Merge the profile associated with the specified Game Center identity with the current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Merge\n\x09*\n\x09* Param - gameCenterId The player's game center id  (use the playerID property from the local GKPlayer object)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Merge the profile associated with the specified Game Center identity with the current profile.\n*\n* Service Name - identity\n* Service Operation - Merge\n*\n* Param - gameCenterId The player's game center id  (use the playerID property from the local GKPlayer object)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_MergeGameCenterIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "MergeGameCenterIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventMergeGameCenterIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_MergeGameCenterIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeGameCenterIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeGameCenterIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeGameCenterIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_MergeGameCenterIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_MergeGameCenterIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics
	{
		struct BCIdentityProxy_eventMergeGoogleIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString googleUserId;
			FString serverAuthCode;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_googleUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_googleUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverAuthCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_serverAuthCode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeGoogleIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::NewProp_googleUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::NewProp_googleUserId = { "googleUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeGoogleIdentity_Parms, googleUserId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::NewProp_googleUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::NewProp_googleUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::NewProp_serverAuthCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::NewProp_serverAuthCode = { "serverAuthCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeGoogleIdentity_Parms, serverAuthCode), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::NewProp_serverAuthCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::NewProp_serverAuthCode_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeGoogleIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::NewProp_googleUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::NewProp_serverAuthCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Merge the profile associated with the provided Google credentials with the\n\x09* current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Merge\n\x09*\n\x09* Param - externalId The Google id of the user\n\x09* Param - authenticationToken The validated token from the Google SDK\n\x09*   (that will be further validated when sent to the bC service)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Merge the profile associated with the provided Google credentials with the\ncurrent profile.\n\nService Name - identity\nService Operation - Merge\n\nParam - externalId The Google id of the user\nParam - authenticationToken The validated token from the Google SDK\n  (that will be further validated when sent to the bC service)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "MergeGoogleIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventMergeGoogleIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics
	{
		struct BCIdentityProxy_eventMergeGoogleOpenIdIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString googleUserAccountEmail;
			FString IdToken;
			UBCIdentityProxy* ReturnValue;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeGoogleOpenIdIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::NewProp_googleUserAccountEmail_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::NewProp_googleUserAccountEmail = { "googleUserAccountEmail", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeGoogleOpenIdIdentity_Parms, googleUserAccountEmail), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::NewProp_googleUserAccountEmail_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::NewProp_googleUserAccountEmail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::NewProp_IdToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeGoogleOpenIdIdentity_Parms, IdToken), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::NewProp_IdToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::NewProp_IdToken_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeGoogleOpenIdIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::NewProp_googleUserAccountEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::NewProp_IdToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Merge the profile associated with the provided GoogleOpenId credentials with the\n\x09* current profile.\n    * Service Name - Identity\n    * Service Operation - merge\n    *\n    * @param googleUserAccountEmail The email associated with the google user\n    * @param IdToken  The Id token of the google account. Can get with calls like requestIdToken\n    * @param forceCreate Should a new profile be created for this user if the account does not exist?\n    * @param callback The method to be invoked when the server response is received\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Merge the profile associated with the provided GoogleOpenId credentials with the\ncurrent profile.\nService Name - Identity\nService Operation - merge\n\n@param googleUserAccountEmail The email associated with the google user\n@param IdToken  The Id token of the google account. Can get with calls like requestIdToken\n@param forceCreate Should a new profile be created for this user if the account does not exist?\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "MergeGoogleOpenIdIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventMergeGoogleOpenIdIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics
	{
		struct BCIdentityProxy_eventMergeOculusIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString oculusId;
			FString oculusNonce;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oculusId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_oculusId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oculusNonce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_oculusNonce;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeOculusIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::NewProp_oculusId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::NewProp_oculusId = { "oculusId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeOculusIdentity_Parms, oculusId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::NewProp_oculusId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::NewProp_oculusId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::NewProp_oculusNonce_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::NewProp_oculusNonce = { "oculusNonce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeOculusIdentity_Parms, oculusNonce), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::NewProp_oculusNonce_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::NewProp_oculusNonce_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeOculusIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::NewProp_oculusId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::NewProp_oculusNonce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Merge the profile associated with the provided Oculus credentials with the\n\x09* current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Merge\n\x09*\n\x09* Param - oculusId The oculus id of the user\n\x09* Param - oculusNonce token from the Oculus SDK\n\x09*   (that will be further validated when sent to the bC service)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Merge the profile associated with the provided Oculus credentials with the\n* current profile.\n*\n* Service Name - identity\n* Service Operation - Merge\n*\n* Param - oculusId The oculus id of the user\n* Param - oculusNonce token from the Oculus SDK\n*   (that will be further validated when sent to the bC service)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "MergeOculusIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventMergeOculusIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics
	{
		struct BCIdentityProxy_eventMergeParseIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString parseId;
			FString authenticationToken;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parseId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_parseId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_authenticationToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_authenticationToken;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeParseIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::NewProp_parseId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::NewProp_parseId = { "parseId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeParseIdentity_Parms, parseId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::NewProp_parseId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::NewProp_parseId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::NewProp_authenticationToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::NewProp_authenticationToken = { "authenticationToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeParseIdentity_Parms, authenticationToken), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::NewProp_authenticationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::NewProp_authenticationToken_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeParseIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::NewProp_parseId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::NewProp_authenticationToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Merge the profile associated with the provided Parse credentials with the\n\x09* current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Merge\n\x09*\n\x09* Param - externalId The Parse id of the user\n\x09* Param - authenticationToken The validated token from Parse\n\x09*   (that will be further validated when sent to the bC service)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Merge the profile associated with the provided Parse credentials with the\ncurrent profile.\n\nService Name - identity\nService Operation - Merge\n\nParam - externalId The Parse id of the user\nParam - authenticationToken The validated token from Parse\n  (that will be further validated when sent to the bC service)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "MergeParseIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventMergeParseIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics
	{
		struct BCIdentityProxy_eventMergePlaystationNetworkIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString psnAccountId;
			FString authenticationToken;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_psnAccountId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_psnAccountId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_authenticationToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_authenticationToken;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergePlaystationNetworkIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::NewProp_psnAccountId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::NewProp_psnAccountId = { "psnAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergePlaystationNetworkIdentity_Parms, psnAccountId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::NewProp_psnAccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::NewProp_psnAccountId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::NewProp_authenticationToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::NewProp_authenticationToken = { "authenticationToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergePlaystationNetworkIdentity_Parms, authenticationToken), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::NewProp_authenticationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::NewProp_authenticationToken_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergePlaystationNetworkIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::NewProp_psnAccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::NewProp_authenticationToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Merge the profile associated with the provided PSN credentials with the\n\x09* current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Merge\n\x09*\n\x09* Param - psnAccountId The psn account id of the user\n\x09* Param - authenticationToken The validated token from the Playstation SDK\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Merge the profile associated with the provided PSN credentials with the\n* current profile.\n*\n* Service Name - identity\n* Service Operation - Merge\n*\n* Param - psnAccountId The psn account id of the user\n* Param - authenticationToken The validated token from the Playstation SDK" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "MergePlaystationNetworkIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventMergePlaystationNetworkIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics
	{
		struct BCIdentityProxy_eventMergeSteamIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString steamId;
			FString sessionTicket;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_steamId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sessionTicket_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sessionTicket;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeSteamIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::NewProp_steamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::NewProp_steamId = { "steamId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeSteamIdentity_Parms, steamId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::NewProp_steamId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::NewProp_steamId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::NewProp_sessionTicket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::NewProp_sessionTicket = { "sessionTicket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeSteamIdentity_Parms, sessionTicket), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::NewProp_sessionTicket_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::NewProp_sessionTicket_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeSteamIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::NewProp_steamId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::NewProp_sessionTicket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Merge the profile associated with the provided steam userid with the current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Merge\n\x09*\n\x09* Param - steamId String representation of 64 bit steam id\n\x09* Param - sessionTicket The user's session ticket (hex encoded)\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Merge the profile associated with the provided steam userid with the current profile.\n*\n* Service Name - identity\n* Service Operation - Merge\n*\n* Param - steamId String representation of 64 bit steam id\n* Param - sessionTicket The user's session ticket (hex encoded)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "MergeSteamIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventMergeSteamIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics
	{
		struct BCIdentityProxy_eventMergeTwitterIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString twitterId;
			FString authenticationToken;
			FString secret;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_twitterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_twitterId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_authenticationToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_authenticationToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_secret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_secret;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeTwitterIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::NewProp_twitterId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::NewProp_twitterId = { "twitterId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeTwitterIdentity_Parms, twitterId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::NewProp_twitterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::NewProp_twitterId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::NewProp_authenticationToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::NewProp_authenticationToken = { "authenticationToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeTwitterIdentity_Parms, authenticationToken), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::NewProp_authenticationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::NewProp_authenticationToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::NewProp_secret_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::NewProp_secret = { "secret", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeTwitterIdentity_Parms, secret), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::NewProp_secret_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::NewProp_secret_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeTwitterIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::NewProp_twitterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::NewProp_authenticationToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::NewProp_secret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Merge the profile associated with the provided Twitter credentials with the\n\x09* current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Merge\n\x09*\n\x09* Param - twitterId The Twitter id of the user\n\x09* Param - authenticationToken The authentication token derrived from the twitter APIs\n\x09* Param - secret The secret given when attempting to link with Twitter\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Merge the profile associated with the provided Twitter credentials with the\ncurrent profile.\n\nService Name - identity\nService Operation - Merge\n\nParam - twitterId The Twitter id of the user\nParam - authenticationToken The authentication token derrived from the twitter APIs\nParam - secret The secret given when attempting to link with Twitter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "MergeTwitterIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventMergeTwitterIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics
	{
		struct BCIdentityProxy_eventMergeUniversalIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString userId;
			FString password;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_password;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeUniversalIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::NewProp_userId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeUniversalIdentity_Parms, userId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::NewProp_userId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::NewProp_userId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::NewProp_password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::NewProp_password = { "password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeUniversalIdentity_Parms, password), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::NewProp_password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::NewProp_password_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventMergeUniversalIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::NewProp_userId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::NewProp_password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/*\n\x09* Merge the profile associated with the provided e=mail with the current profile.\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - Merge\n\x09*\n\x09* Param - userId The user's userId\n\x09* Param - password The user's password\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "* Merge the profile associated with the provided e=mail with the current profile.\n*\n* Service Name - identity\n* Service Operation - Merge\n*\n* Param - userId The user's userId\n* Param - password The user's password" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "MergeUniversalIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventMergeUniversalIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics
	{
		struct BCIdentityProxy_eventRefreshIdentity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString externalId;
			FString authenticationToken;
			EBCAuthType authenticationType;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_externalId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_externalId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_authenticationToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_authenticationToken;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_authenticationType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_authenticationType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventRefreshIdentity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::NewProp_externalId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::NewProp_externalId = { "externalId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventRefreshIdentity_Parms, externalId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::NewProp_externalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::NewProp_externalId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::NewProp_authenticationToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::NewProp_authenticationToken = { "authenticationToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventRefreshIdentity_Parms, authenticationToken), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::NewProp_authenticationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::NewProp_authenticationToken_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::NewProp_authenticationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::NewProp_authenticationType = { "authenticationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventRefreshIdentity_Parms, authenticationType), Z_Construct_UEnum_BCClientPlugin_EBCAuthType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventRefreshIdentity_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::NewProp_externalId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::NewProp_authenticationToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::NewProp_authenticationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::NewProp_authenticationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Refreshes an identity for this user\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - REFRESH_IDENTITY\n\x09*\n\x09* Param - externalId User ID\n\x09* Param - authenticationToken Password or client side token\n\x09* Param - authenticationType Type of authentication\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Refreshes an identity for this user\n\nService Name - identity\nService Operation - REFRESH_IDENTITY\n\nParam - externalId User ID\nParam - authenticationToken Password or client side token\nParam - authenticationType Type of authentication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "RefreshIdentity", nullptr, nullptr, sizeof(BCIdentityProxy_eventRefreshIdentity_Parms), Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics
	{
		struct BCIdentityProxy_eventSwitchToChildProfile_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString childProfileId;
			FString childAppId;
			bool forceCreate;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_childProfileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_childProfileId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_childAppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_childAppId;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventSwitchToChildProfile_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::NewProp_childProfileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::NewProp_childProfileId = { "childProfileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventSwitchToChildProfile_Parms, childProfileId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::NewProp_childProfileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::NewProp_childProfileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::NewProp_childAppId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::NewProp_childAppId = { "childAppId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventSwitchToChildProfile_Parms, childAppId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::NewProp_childAppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::NewProp_childAppId_MetaData)) };
	void Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCIdentityProxy_eventSwitchToChildProfile_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCIdentityProxy_eventSwitchToChildProfile_Parms), &Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventSwitchToChildProfile_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::NewProp_childProfileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::NewProp_childAppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Switch to a Child Profile\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - SWITCH_TO_CHILD_PROFILE\n\x09*\n\x09* Param - childProfileId The profileId of the child profile to switch to\n\x09* If null and forceCreate is true a new profile will be created\n\x09* Param - childAppId The appId of the child app to switch to\n\x09* Param - forceCreate Should a new profile be created if it does not exist?\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Switch to a Child Profile\n\nService Name - identity\nService Operation - SWITCH_TO_CHILD_PROFILE\n\nParam - childProfileId The profileId of the child profile to switch to\nIf null and forceCreate is true a new profile will be created\nParam - childAppId The appId of the child app to switch to\nParam - forceCreate Should a new profile be created if it does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "SwitchToChildProfile", nullptr, nullptr, sizeof(BCIdentityProxy_eventSwitchToChildProfile_Parms), Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_SwitchToParentProfile_Statics
	{
		struct BCIdentityProxy_eventSwitchToParentProfile_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString parentLevelName;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parentLevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_parentLevelName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_SwitchToParentProfile_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventSwitchToParentProfile_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_SwitchToParentProfile_Statics::NewProp_parentLevelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_SwitchToParentProfile_Statics::NewProp_parentLevelName = { "parentLevelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventSwitchToParentProfile_Parms, parentLevelName), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_SwitchToParentProfile_Statics::NewProp_parentLevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_SwitchToParentProfile_Statics::NewProp_parentLevelName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_SwitchToParentProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventSwitchToParentProfile_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_SwitchToParentProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_SwitchToParentProfile_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_SwitchToParentProfile_Statics::NewProp_parentLevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_SwitchToParentProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_SwitchToParentProfile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Switch to a Parent Profile\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - SWITCH_TO_PARENT_PROFILE\n\x09*\n\x09* Param - parentLevelName The level of the parent to switch to\n\x09* If null and forceCreate is true a new profile will be created\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Switch to a Parent Profile\n\nService Name - identity\nService Operation - SWITCH_TO_PARENT_PROFILE\n\nParam - parentLevelName The level of the parent to switch to\nIf null and forceCreate is true a new profile will be created" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_SwitchToParentProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "SwitchToParentProfile", nullptr, nullptr, sizeof(BCIdentityProxy_eventSwitchToParentProfile_Parms), Z_Construct_UFunction_UBCIdentityProxy_SwitchToParentProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_SwitchToParentProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_SwitchToParentProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_SwitchToParentProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_SwitchToParentProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_SwitchToParentProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics
	{
		struct BCIdentityProxy_eventSwitchToSingletonChildProfile_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString childAppId;
			bool forceCreate;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_childAppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_childAppId;
		static void NewProp_forceCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceCreate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventSwitchToSingletonChildProfile_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::NewProp_childAppId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::NewProp_childAppId = { "childAppId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventSwitchToSingletonChildProfile_Parms, childAppId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::NewProp_childAppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::NewProp_childAppId_MetaData)) };
	void Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::NewProp_forceCreate_SetBit(void* Obj)
	{
		((BCIdentityProxy_eventSwitchToSingletonChildProfile_Parms*)Obj)->forceCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::NewProp_forceCreate = { "forceCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCIdentityProxy_eventSwitchToSingletonChildProfile_Parms), &Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::NewProp_forceCreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventSwitchToSingletonChildProfile_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::NewProp_childAppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::NewProp_forceCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* Switches to a child profile of an app when only one profile exists\n\x09* If multiple profiles exist this returns an error\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - SWITCH_TO_CHILD_PROFILE\n\x09*\n\x09* Param - childAppId The App ID of the child app to switch to\n\x09* Param - forceCreate Should a new profile be created if it does not exist?\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "Switches to a child profile of an app when only one profile exists\nIf multiple profiles exist this returns an error\n\nService Name - identity\nService Operation - SWITCH_TO_CHILD_PROFILE\n\nParam - childAppId The App ID of the child app to switch to\nParam - forceCreate Should a new profile be created if it does not exist?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "SwitchToSingletonChildProfile", nullptr, nullptr, sizeof(BCIdentityProxy_eventSwitchToSingletonChildProfile_Parms), Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCIdentityProxy_UpdateUniversalIdLogin_Statics
	{
		struct BCIdentityProxy_eventUpdateUniversalIdLogin_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString externalId;
			UBCIdentityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_externalId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_externalId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_UpdateUniversalIdLogin_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventUpdateUniversalIdLogin_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_UpdateUniversalIdLogin_Statics::NewProp_externalId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCIdentityProxy_UpdateUniversalIdLogin_Statics::NewProp_externalId = { "externalId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventUpdateUniversalIdLogin_Parms, externalId), METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_UpdateUniversalIdLogin_Statics::NewProp_externalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_UpdateUniversalIdLogin_Statics::NewProp_externalId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCIdentityProxy_UpdateUniversalIdLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCIdentityProxy_eventUpdateUniversalIdLogin_Parms, ReturnValue), Z_Construct_UClass_UBCIdentityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCIdentityProxy_UpdateUniversalIdLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_UpdateUniversalIdLogin_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_UpdateUniversalIdLogin_Statics::NewProp_externalId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCIdentityProxy_UpdateUniversalIdLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCIdentityProxy_UpdateUniversalIdLogin_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Identity" },
		{ "Comment", "/**\n\x09* update universal id of current profile\n\x09*\n\x09* Service Name - identity\n\x09* Service Operation - UPDATE_UNIVERSAL_ID_LOGIN\n\x09*\n\x09* @param externalId the id connected with \n\x09* @param callback The method to be invoked when the server response is received\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ToolTip", "update universal id of current profile\n\nService Name - identity\nService Operation - UPDATE_UNIVERSAL_ID_LOGIN\n\n@param externalId the id connected with\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCIdentityProxy_UpdateUniversalIdLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCIdentityProxy, nullptr, "UpdateUniversalIdLogin", nullptr, nullptr, sizeof(BCIdentityProxy_eventUpdateUniversalIdLogin_Parms), Z_Construct_UFunction_UBCIdentityProxy_UpdateUniversalIdLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_UpdateUniversalIdLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCIdentityProxy_UpdateUniversalIdLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCIdentityProxy_UpdateUniversalIdLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCIdentityProxy_UpdateUniversalIdLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCIdentityProxy_UpdateUniversalIdLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCIdentityProxy_NoRegister()
	{
		return UBCIdentityProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCIdentityProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCIdentityProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCIdentityProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCIdentityProxy_AttachAppleIdentity, "AttachAppleIdentity" }, // 2846067930
		{ &Z_Construct_UFunction_UBCIdentityProxy_AttachBlockchainIdentity, "AttachBlockchainIdentity" }, // 146291243
		{ &Z_Construct_UFunction_UBCIdentityProxy_AttachEmailIdentity, "AttachEmailIdentity" }, // 699190024
		{ &Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookIdentity, "AttachFacebookIdentity" }, // 1110400923
		{ &Z_Construct_UFunction_UBCIdentityProxy_AttachFacebookLimitedIdentity, "AttachFacebookLimitedIdentity" }, // 3161486641
		{ &Z_Construct_UFunction_UBCIdentityProxy_AttachGameCenterIdentity, "AttachGameCenterIdentity" }, // 2867419581
		{ &Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleIdentity, "AttachGoogleIdentity" }, // 614077750
		{ &Z_Construct_UFunction_UBCIdentityProxy_AttachGoogleOpenIdIdentity, "AttachGoogleOpenIdIdentity" }, // 2022619197
		{ &Z_Construct_UFunction_UBCIdentityProxy_AttachNonLoginUniversalId, "AttachNonLoginUniversalId" }, // 3442794338
		{ &Z_Construct_UFunction_UBCIdentityProxy_AttachOculusIdentity, "AttachOculusIdentity" }, // 4092496194
		{ &Z_Construct_UFunction_UBCIdentityProxy_AttachParentWithIdentity, "AttachParentWithIdentity" }, // 3261447216
		{ &Z_Construct_UFunction_UBCIdentityProxy_AttachParseIdentity, "AttachParseIdentity" }, // 3630567887
		{ &Z_Construct_UFunction_UBCIdentityProxy_AttachPeerProfile, "AttachPeerProfile" }, // 1598683691
		{ &Z_Construct_UFunction_UBCIdentityProxy_AttachPlaystationNetworkIdentity, "AttachPlaystationNetworkIdentity" }, // 3408902118
		{ &Z_Construct_UFunction_UBCIdentityProxy_AttachSteamIdentity, "AttachSteamIdentity" }, // 3783708644
		{ &Z_Construct_UFunction_UBCIdentityProxy_AttachTwitterIdentity, "AttachTwitterIdentity" }, // 884158404
		{ &Z_Construct_UFunction_UBCIdentityProxy_AttachUniversalIdentity, "AttachUniversalIdentity" }, // 2907969448
		{ &Z_Construct_UFunction_UBCIdentityProxy_ChangeEmailIdentity, "ChangeEmailIdentity" }, // 3785024718
		{ &Z_Construct_UFunction_UBCIdentityProxy_DetachAppleIdentity, "DetachAppleIdentity" }, // 1677182897
		{ &Z_Construct_UFunction_UBCIdentityProxy_DetachBlockchainIdentity, "DetachBlockchainIdentity" }, // 3655099488
		{ &Z_Construct_UFunction_UBCIdentityProxy_DetachEmailIdentity, "DetachEmailIdentity" }, // 71652512
		{ &Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookIdentity, "DetachFacebookIdentity" }, // 2644025626
		{ &Z_Construct_UFunction_UBCIdentityProxy_DetachFacebookLimitedIdentity, "DetachFacebookLimitedIdentity" }, // 1950017092
		{ &Z_Construct_UFunction_UBCIdentityProxy_DetachGameCenterIdentity, "DetachGameCenterIdentity" }, // 141694954
		{ &Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleIdentity, "DetachGoogleIdentity" }, // 3941717743
		{ &Z_Construct_UFunction_UBCIdentityProxy_DetachGoogleOpenIdIdentity, "DetachGoogleOpenIdIdentity" }, // 3458379595
		{ &Z_Construct_UFunction_UBCIdentityProxy_DetachOculusIdentity, "DetachOculusIdentity" }, // 462841874
		{ &Z_Construct_UFunction_UBCIdentityProxy_DetachParent, "DetachParent" }, // 1684016439
		{ &Z_Construct_UFunction_UBCIdentityProxy_DetachParseIdentity, "DetachParseIdentity" }, // 3848790156
		{ &Z_Construct_UFunction_UBCIdentityProxy_DetachPeer, "DetachPeer" }, // 2431982071
		{ &Z_Construct_UFunction_UBCIdentityProxy_DetachPlaystationNetworkIdentity, "DetachPlaystationNetworkIdentity" }, // 3652500254
		{ &Z_Construct_UFunction_UBCIdentityProxy_DetachSteamIdentity, "DetachSteamIdentity" }, // 2025093085
		{ &Z_Construct_UFunction_UBCIdentityProxy_DetachTwitterIdentity, "DetachTwitterIdentity" }, // 401699020
		{ &Z_Construct_UFunction_UBCIdentityProxy_DetachUniversalIdentity, "DetachUniversalIdentity" }, // 3889526184
		{ &Z_Construct_UFunction_UBCIdentityProxy_GetChildProfiles, "GetChildProfiles" }, // 10888116
		{ &Z_Construct_UFunction_UBCIdentityProxy_GetExpiredIdentities, "GetExpiredIdentities" }, // 623839748
		{ &Z_Construct_UFunction_UBCIdentityProxy_GetIdentities, "GetIdentities" }, // 1667032331
		{ &Z_Construct_UFunction_UBCIdentityProxy_GetPeerProfiles, "GetPeerProfiles" }, // 2764849439
		{ &Z_Construct_UFunction_UBCIdentityProxy_MergeAppleIdentity, "MergeAppleIdentity" }, // 4253447533
		{ &Z_Construct_UFunction_UBCIdentityProxy_MergeEmailIdentity, "MergeEmailIdentity" }, // 3804956133
		{ &Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookIdentity, "MergeFacebookIdentity" }, // 1860902129
		{ &Z_Construct_UFunction_UBCIdentityProxy_MergeFacebookLimitedIdentity, "MergeFacebookLimitedIdentity" }, // 463683310
		{ &Z_Construct_UFunction_UBCIdentityProxy_MergeGameCenterIdentity, "MergeGameCenterIdentity" }, // 1332111972
		{ &Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleIdentity, "MergeGoogleIdentity" }, // 2708451929
		{ &Z_Construct_UFunction_UBCIdentityProxy_MergeGoogleOpenIdIdentity, "MergeGoogleOpenIdIdentity" }, // 2098906004
		{ &Z_Construct_UFunction_UBCIdentityProxy_MergeOculusIdentity, "MergeOculusIdentity" }, // 2300613503
		{ &Z_Construct_UFunction_UBCIdentityProxy_MergeParseIdentity, "MergeParseIdentity" }, // 1140087840
		{ &Z_Construct_UFunction_UBCIdentityProxy_MergePlaystationNetworkIdentity, "MergePlaystationNetworkIdentity" }, // 370027261
		{ &Z_Construct_UFunction_UBCIdentityProxy_MergeSteamIdentity, "MergeSteamIdentity" }, // 213443490
		{ &Z_Construct_UFunction_UBCIdentityProxy_MergeTwitterIdentity, "MergeTwitterIdentity" }, // 217808764
		{ &Z_Construct_UFunction_UBCIdentityProxy_MergeUniversalIdentity, "MergeUniversalIdentity" }, // 2817541249
		{ &Z_Construct_UFunction_UBCIdentityProxy_RefreshIdentity, "RefreshIdentity" }, // 468022042
		{ &Z_Construct_UFunction_UBCIdentityProxy_SwitchToChildProfile, "SwitchToChildProfile" }, // 3934428710
		{ &Z_Construct_UFunction_UBCIdentityProxy_SwitchToParentProfile, "SwitchToParentProfile" }, // 1805893445
		{ &Z_Construct_UFunction_UBCIdentityProxy_SwitchToSingletonChildProfile, "SwitchToSingletonChildProfile" }, // 1706890259
		{ &Z_Construct_UFunction_UBCIdentityProxy_UpdateUniversalIdLogin, "UpdateUniversalIdLogin" }, // 98307271
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCIdentityProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCIdentityProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCIdentityProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCIdentityProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCIdentityProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCIdentityProxy_Statics::ClassParams = {
		&UBCIdentityProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCIdentityProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCIdentityProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCIdentityProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCIdentityProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCIdentityProxy, 2928847216);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCIdentityProxy>()
	{
		return UBCIdentityProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCIdentityProxy(Z_Construct_UClass_UBCIdentityProxy, &UBCIdentityProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCIdentityProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCIdentityProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
