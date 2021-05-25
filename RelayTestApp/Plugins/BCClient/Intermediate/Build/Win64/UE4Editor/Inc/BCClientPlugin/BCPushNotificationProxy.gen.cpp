// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCPushNotificationProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCPushNotificationProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCPushNotificationProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCPushNotificationProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_EBCPlatform();
// End Cross Module References
	DEFINE_FUNCTION(UBCPushNotificationProxy::execSendNormalizedPushNotificationBatch)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_TARRAY(FString,Z_Param_profileIds);
		P_GET_PROPERTY(FStrProperty,Z_Param_alertContentJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_customDataJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPushNotificationProxy**)Z_Param__Result=UBCPushNotificationProxy::SendNormalizedPushNotificationBatch(Z_Param_brainCloudWrapper,Z_Param_profileIds,Z_Param_alertContentJson,Z_Param_customDataJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPushNotificationProxy::execSendNormalizedPushNotification)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_toPlayerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_alertContentJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_customDataJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPushNotificationProxy**)Z_Param__Result=UBCPushNotificationProxy::SendNormalizedPushNotification(Z_Param_brainCloudWrapper,Z_Param_toPlayerId,Z_Param_alertContentJson,Z_Param_customDataJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPushNotificationProxy::execScheduleRichPushNotificationMinutes)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_GET_PROPERTY(FIntProperty,Z_Param_notificationTemplateId);
		P_GET_PROPERTY(FStrProperty,Z_Param_substitutionJson);
		P_GET_PROPERTY(FIntProperty,Z_Param_minutesFromNow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPushNotificationProxy**)Z_Param__Result=UBCPushNotificationProxy::ScheduleRichPushNotificationMinutes(Z_Param_brainCloudWrapper,Z_Param_profileId,Z_Param_notificationTemplateId,Z_Param_substitutionJson,Z_Param_minutesFromNow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPushNotificationProxy::execScheduleRichPushNotificationUTC)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_GET_PROPERTY(FIntProperty,Z_Param_notificationTemplateId);
		P_GET_PROPERTY(FStrProperty,Z_Param_substitutionJson);
		P_GET_PROPERTY(FInt64Property,Z_Param_startTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPushNotificationProxy**)Z_Param__Result=UBCPushNotificationProxy::ScheduleRichPushNotificationUTC(Z_Param_brainCloudWrapper,Z_Param_profileId,Z_Param_notificationTemplateId,Z_Param_substitutionJson,Z_Param_startTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPushNotificationProxy::execScheduleNormalizedPushNotificationMinutes)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_GET_PROPERTY(FStrProperty,Z_Param_alertContentJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_customDataJson);
		P_GET_PROPERTY(FIntProperty,Z_Param_minutesFromNow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPushNotificationProxy**)Z_Param__Result=UBCPushNotificationProxy::ScheduleNormalizedPushNotificationMinutes(Z_Param_brainCloudWrapper,Z_Param_profileId,Z_Param_alertContentJson,Z_Param_customDataJson,Z_Param_minutesFromNow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPushNotificationProxy::execScheduleNormalizedPushNotificationUTC)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_GET_PROPERTY(FStrProperty,Z_Param_alertContentJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_customDataJson);
		P_GET_PROPERTY(FInt64Property,Z_Param_startTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPushNotificationProxy**)Z_Param__Result=UBCPushNotificationProxy::ScheduleNormalizedPushNotificationUTC(Z_Param_brainCloudWrapper,Z_Param_profileId,Z_Param_alertContentJson,Z_Param_customDataJson,Z_Param_startTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPushNotificationProxy::execSendRawPushNotificationToGroup)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FStrProperty,Z_Param_fcmContent);
		P_GET_PROPERTY(FStrProperty,Z_Param_iosContent);
		P_GET_PROPERTY(FStrProperty,Z_Param_facebookContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPushNotificationProxy**)Z_Param__Result=UBCPushNotificationProxy::SendRawPushNotificationToGroup(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_fcmContent,Z_Param_iosContent,Z_Param_facebookContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPushNotificationProxy::execSendRawPushNotificationBatch)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_TARRAY(FString,Z_Param_profileIds);
		P_GET_PROPERTY(FStrProperty,Z_Param_fcmContent);
		P_GET_PROPERTY(FStrProperty,Z_Param_iosContent);
		P_GET_PROPERTY(FStrProperty,Z_Param_facebookContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPushNotificationProxy**)Z_Param__Result=UBCPushNotificationProxy::SendRawPushNotificationBatch(Z_Param_brainCloudWrapper,Z_Param_profileIds,Z_Param_fcmContent,Z_Param_iosContent,Z_Param_facebookContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPushNotificationProxy::execSendRawPushNotification)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_playerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_fcmContent);
		P_GET_PROPERTY(FStrProperty,Z_Param_iosContent);
		P_GET_PROPERTY(FStrProperty,Z_Param_facebookContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPushNotificationProxy**)Z_Param__Result=UBCPushNotificationProxy::SendRawPushNotification(Z_Param_brainCloudWrapper,Z_Param_playerId,Z_Param_fcmContent,Z_Param_iosContent,Z_Param_facebookContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPushNotificationProxy::execScheduleRawPushNotificationMinutes)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_GET_PROPERTY(FStrProperty,Z_Param_fcmContent);
		P_GET_PROPERTY(FStrProperty,Z_Param_iosContent);
		P_GET_PROPERTY(FStrProperty,Z_Param_facebookContent);
		P_GET_PROPERTY(FIntProperty,Z_Param_minutesFromNow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPushNotificationProxy**)Z_Param__Result=UBCPushNotificationProxy::ScheduleRawPushNotificationMinutes(Z_Param_brainCloudWrapper,Z_Param_profileId,Z_Param_fcmContent,Z_Param_iosContent,Z_Param_facebookContent,Z_Param_minutesFromNow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPushNotificationProxy::execScheduleRawPushNotificationUTC)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_GET_PROPERTY(FStrProperty,Z_Param_fcmContent);
		P_GET_PROPERTY(FStrProperty,Z_Param_iosContent);
		P_GET_PROPERTY(FStrProperty,Z_Param_facebookContent);
		P_GET_PROPERTY(FInt64Property,Z_Param_startTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPushNotificationProxy**)Z_Param__Result=UBCPushNotificationProxy::ScheduleRawPushNotificationUTC(Z_Param_brainCloudWrapper,Z_Param_profileId,Z_Param_fcmContent,Z_Param_iosContent,Z_Param_facebookContent,Z_Param_startTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPushNotificationProxy::execSendNormalizedPushNotificationToGroup)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FStrProperty,Z_Param_alertContentJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_customDataJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPushNotificationProxy**)Z_Param__Result=UBCPushNotificationProxy::SendNormalizedPushNotificationToGroup(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_alertContentJson,Z_Param_customDataJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPushNotificationProxy::execSendTemplatedPushNotificationToGroup)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupId);
		P_GET_PROPERTY(FIntProperty,Z_Param_notificationTemplateId);
		P_GET_PROPERTY(FStrProperty,Z_Param_substitutionJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPushNotificationProxy**)Z_Param__Result=UBCPushNotificationProxy::SendTemplatedPushNotificationToGroup(Z_Param_brainCloudWrapper,Z_Param_groupId,Z_Param_notificationTemplateId,Z_Param_substitutionJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPushNotificationProxy::execSendRichPushNotificationWithParams)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_toPlayerId);
		P_GET_PROPERTY(FIntProperty,Z_Param_notificationTemplateId);
		P_GET_PROPERTY(FStrProperty,Z_Param_substitutionJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPushNotificationProxy**)Z_Param__Result=UBCPushNotificationProxy::SendRichPushNotificationWithParams(Z_Param_brainCloudWrapper,Z_Param_toPlayerId,Z_Param_notificationTemplateId,Z_Param_substitutionJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPushNotificationProxy::execSendRichPushNotification)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_toPlayerId);
		P_GET_PROPERTY(FIntProperty,Z_Param_notificationTemplateId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPushNotificationProxy**)Z_Param__Result=UBCPushNotificationProxy::SendRichPushNotification(Z_Param_brainCloudWrapper,Z_Param_toPlayerId,Z_Param_notificationTemplateId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPushNotificationProxy::execSendSimplePushNotification)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_toPlayerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPushNotificationProxy**)Z_Param__Result=UBCPushNotificationProxy::SendSimplePushNotification(Z_Param_brainCloudWrapper,Z_Param_toPlayerId,Z_Param_message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPushNotificationProxy::execRegisterPushNotificationDeviceToken)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_ENUM(EBCPlatform,Z_Param_platform);
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPushNotificationProxy**)Z_Param__Result=UBCPushNotificationProxy::RegisterPushNotificationDeviceToken(Z_Param_brainCloudWrapper,EBCPlatform(Z_Param_platform),Z_Param_deviceToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPushNotificationProxy::execDeregisterPushNotificationDeviceToken)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_ENUM(EBCPlatform,Z_Param_platform);
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPushNotificationProxy**)Z_Param__Result=UBCPushNotificationProxy::DeregisterPushNotificationDeviceToken(Z_Param_brainCloudWrapper,EBCPlatform(Z_Param_platform),Z_Param_deviceToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPushNotificationProxy::execDeregisterAllPushNotificationDeviceTokens)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPushNotificationProxy**)Z_Param__Result=UBCPushNotificationProxy::DeregisterAllPushNotificationDeviceTokens(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	void UBCPushNotificationProxy::StaticRegisterNativesUBCPushNotificationProxy()
	{
		UClass* Class = UBCPushNotificationProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeregisterAllPushNotificationDeviceTokens", &UBCPushNotificationProxy::execDeregisterAllPushNotificationDeviceTokens },
			{ "DeregisterPushNotificationDeviceToken", &UBCPushNotificationProxy::execDeregisterPushNotificationDeviceToken },
			{ "RegisterPushNotificationDeviceToken", &UBCPushNotificationProxy::execRegisterPushNotificationDeviceToken },
			{ "ScheduleNormalizedPushNotificationMinutes", &UBCPushNotificationProxy::execScheduleNormalizedPushNotificationMinutes },
			{ "ScheduleNormalizedPushNotificationUTC", &UBCPushNotificationProxy::execScheduleNormalizedPushNotificationUTC },
			{ "ScheduleRawPushNotificationMinutes", &UBCPushNotificationProxy::execScheduleRawPushNotificationMinutes },
			{ "ScheduleRawPushNotificationUTC", &UBCPushNotificationProxy::execScheduleRawPushNotificationUTC },
			{ "ScheduleRichPushNotificationMinutes", &UBCPushNotificationProxy::execScheduleRichPushNotificationMinutes },
			{ "ScheduleRichPushNotificationUTC", &UBCPushNotificationProxy::execScheduleRichPushNotificationUTC },
			{ "SendNormalizedPushNotification", &UBCPushNotificationProxy::execSendNormalizedPushNotification },
			{ "SendNormalizedPushNotificationBatch", &UBCPushNotificationProxy::execSendNormalizedPushNotificationBatch },
			{ "SendNormalizedPushNotificationToGroup", &UBCPushNotificationProxy::execSendNormalizedPushNotificationToGroup },
			{ "SendRawPushNotification", &UBCPushNotificationProxy::execSendRawPushNotification },
			{ "SendRawPushNotificationBatch", &UBCPushNotificationProxy::execSendRawPushNotificationBatch },
			{ "SendRawPushNotificationToGroup", &UBCPushNotificationProxy::execSendRawPushNotificationToGroup },
			{ "SendRichPushNotification", &UBCPushNotificationProxy::execSendRichPushNotification },
			{ "SendRichPushNotificationWithParams", &UBCPushNotificationProxy::execSendRichPushNotificationWithParams },
			{ "SendSimplePushNotification", &UBCPushNotificationProxy::execSendSimplePushNotification },
			{ "SendTemplatedPushNotificationToGroup", &UBCPushNotificationProxy::execSendTemplatedPushNotificationToGroup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterAllPushNotificationDeviceTokens_Statics
	{
		struct BCPushNotificationProxy_eventDeregisterAllPushNotificationDeviceTokens_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCPushNotificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterAllPushNotificationDeviceTokens_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventDeregisterAllPushNotificationDeviceTokens_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterAllPushNotificationDeviceTokens_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventDeregisterAllPushNotificationDeviceTokens_Parms, ReturnValue), Z_Construct_UClass_UBCPushNotificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterAllPushNotificationDeviceTokens_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterAllPushNotificationDeviceTokens_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterAllPushNotificationDeviceTokens_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterAllPushNotificationDeviceTokens_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Push Notification" },
		{ "Comment", "/**\n    * Deregisters all device tokens currently registered to the player.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ToolTip", "Deregisters all device tokens currently registered to the player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterAllPushNotificationDeviceTokens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPushNotificationProxy, nullptr, "DeregisterAllPushNotificationDeviceTokens", nullptr, nullptr, sizeof(BCPushNotificationProxy_eventDeregisterAllPushNotificationDeviceTokens_Parms), Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterAllPushNotificationDeviceTokens_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterAllPushNotificationDeviceTokens_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterAllPushNotificationDeviceTokens_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterAllPushNotificationDeviceTokens_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterAllPushNotificationDeviceTokens()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterAllPushNotificationDeviceTokens_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics
	{
		struct BCPushNotificationProxy_eventDeregisterPushNotificationDeviceToken_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			EBCPlatform platform;
			FString deviceToken;
			UBCPushNotificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_platform_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_platform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceToken;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventDeregisterPushNotificationDeviceToken_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::NewProp_platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::NewProp_platform = { "platform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventDeregisterPushNotificationDeviceToken_Parms, platform), Z_Construct_UEnum_BCClientPlugin_EBCPlatform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::NewProp_deviceToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::NewProp_deviceToken = { "deviceToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventDeregisterPushNotificationDeviceToken_Parms, deviceToken), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::NewProp_deviceToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::NewProp_deviceToken_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventDeregisterPushNotificationDeviceToken_Parms, ReturnValue), Z_Construct_UClass_UBCPushNotificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::NewProp_platform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::NewProp_platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::NewProp_deviceToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Push Notification" },
		{ "Comment", "/**\n    * Deregisters the given device token from the server to disable this device\n    * from receiving push notifications.\n    *\n    * Param - platform The device platform\n    * Param - deviceToken The platform-dependant device token needed for push notifications.\n    *   On IOS, this is obtained using the application:didRegisterForRemoteNotificationsWithDeviceToken callback\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ToolTip", "Deregisters the given device token from the server to disable this device\nfrom receiving push notifications.\n\nParam - platform The device platform\nParam - deviceToken The platform-dependant device token needed for push notifications.\n  On IOS, this is obtained using the application:didRegisterForRemoteNotificationsWithDeviceToken callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPushNotificationProxy, nullptr, "DeregisterPushNotificationDeviceToken", nullptr, nullptr, sizeof(BCPushNotificationProxy_eventDeregisterPushNotificationDeviceToken_Parms), Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics
	{
		struct BCPushNotificationProxy_eventRegisterPushNotificationDeviceToken_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			EBCPlatform platform;
			FString deviceToken;
			UBCPushNotificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_platform_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_platform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceToken;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventRegisterPushNotificationDeviceToken_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::NewProp_platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::NewProp_platform = { "platform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventRegisterPushNotificationDeviceToken_Parms, platform), Z_Construct_UEnum_BCClientPlugin_EBCPlatform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::NewProp_deviceToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::NewProp_deviceToken = { "deviceToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventRegisterPushNotificationDeviceToken_Parms, deviceToken), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::NewProp_deviceToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::NewProp_deviceToken_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventRegisterPushNotificationDeviceToken_Parms, ReturnValue), Z_Construct_UClass_UBCPushNotificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::NewProp_platform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::NewProp_platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::NewProp_deviceToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Push Notification" },
		{ "Comment", "/**\n    * Registers the given device token with the server to enable this device\n    * to receive push notifications.\n    *\n    * Param - platform The device platform\n    * Param - deviceToken The platform-dependant device token needed for push notifications.\n    *   On IOS, this is obtained using the application:didRegisterForRemoteNotificationsWithDeviceToken callback\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ToolTip", "Registers the given device token with the server to enable this device\nto receive push notifications.\n\nParam - platform The device platform\nParam - deviceToken The platform-dependant device token needed for push notifications.\n  On IOS, this is obtained using the application:didRegisterForRemoteNotificationsWithDeviceToken callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPushNotificationProxy, nullptr, "RegisterPushNotificationDeviceToken", nullptr, nullptr, sizeof(BCPushNotificationProxy_eventRegisterPushNotificationDeviceToken_Parms), Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics
	{
		struct BCPushNotificationProxy_eventScheduleNormalizedPushNotificationMinutes_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString profileId;
			FString alertContentJson;
			FString customDataJson;
			int32 minutesFromNow;
			UBCPushNotificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_alertContentJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_alertContentJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customDataJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_customDataJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minutesFromNow_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_minutesFromNow;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleNormalizedPushNotificationMinutes_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleNormalizedPushNotificationMinutes_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_profileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_alertContentJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_alertContentJson = { "alertContentJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleNormalizedPushNotificationMinutes_Parms, alertContentJson), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_alertContentJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_alertContentJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_customDataJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_customDataJson = { "customDataJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleNormalizedPushNotificationMinutes_Parms, customDataJson), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_customDataJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_customDataJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_minutesFromNow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_minutesFromNow = { "minutesFromNow", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleNormalizedPushNotificationMinutes_Parms, minutesFromNow), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_minutesFromNow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_minutesFromNow_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleNormalizedPushNotificationMinutes_Parms, ReturnValue), Z_Construct_UClass_UBCPushNotificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_alertContentJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_customDataJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_minutesFromNow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Push Notification" },
		{ "Comment", "/**\n\x09* Schedules a normalized push notification to a user\n\x09*\n\x09* Param - profileId The profileId of the user to receive the notification\n\x09* Param - alertContentJson Body and title of alert\n\x09* Param - customDataJson Optional custom data\n\x09* Param - minutesFromNow Minutes from now to send the push notification\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ToolTip", "Schedules a normalized push notification to a user\n\nParam - profileId The profileId of the user to receive the notification\nParam - alertContentJson Body and title of alert\nParam - customDataJson Optional custom data\nParam - minutesFromNow Minutes from now to send the push notification" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPushNotificationProxy, nullptr, "ScheduleNormalizedPushNotificationMinutes", nullptr, nullptr, sizeof(BCPushNotificationProxy_eventScheduleNormalizedPushNotificationMinutes_Parms), Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics
	{
		struct BCPushNotificationProxy_eventScheduleNormalizedPushNotificationUTC_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString profileId;
			FString alertContentJson;
			FString customDataJson;
			int64 startTime;
			UBCPushNotificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_alertContentJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_alertContentJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customDataJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_customDataJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_startTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleNormalizedPushNotificationUTC_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleNormalizedPushNotificationUTC_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_profileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_alertContentJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_alertContentJson = { "alertContentJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleNormalizedPushNotificationUTC_Parms, alertContentJson), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_alertContentJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_alertContentJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_customDataJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_customDataJson = { "customDataJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleNormalizedPushNotificationUTC_Parms, customDataJson), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_customDataJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_customDataJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_startTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_startTime = { "startTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleNormalizedPushNotificationUTC_Parms, startTime), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_startTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_startTime_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleNormalizedPushNotificationUTC_Parms, ReturnValue), Z_Construct_UClass_UBCPushNotificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_alertContentJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_customDataJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_startTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Push Notification" },
		{ "Comment", "/**\n\x09* Schedules a normalized push notification to a user\n\x09*\n\x09* Param - profileId The profileId of the user to receive the notification\n\x09* Param - alertContentJson Body and title of alert\n\x09* Param - customDataJson Optional custom data\n\x09* Param - startTime Start time of sending the push notification\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ToolTip", "Schedules a normalized push notification to a user\n\nParam - profileId The profileId of the user to receive the notification\nParam - alertContentJson Body and title of alert\nParam - customDataJson Optional custom data\nParam - startTime Start time of sending the push notification" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPushNotificationProxy, nullptr, "ScheduleNormalizedPushNotificationUTC", nullptr, nullptr, sizeof(BCPushNotificationProxy_eventScheduleNormalizedPushNotificationUTC_Parms), Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics
	{
		struct BCPushNotificationProxy_eventScheduleRawPushNotificationMinutes_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString profileId;
			FString fcmContent;
			FString iosContent;
			FString facebookContent;
			int32 minutesFromNow;
			UBCPushNotificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fcmContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fcmContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iosContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_iosContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_facebookContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_facebookContent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_minutesFromNow;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRawPushNotificationMinutes_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRawPushNotificationMinutes_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_profileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_fcmContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_fcmContent = { "fcmContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRawPushNotificationMinutes_Parms, fcmContent), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_fcmContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_fcmContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_iosContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_iosContent = { "iosContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRawPushNotificationMinutes_Parms, iosContent), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_iosContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_iosContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_facebookContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_facebookContent = { "facebookContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRawPushNotificationMinutes_Parms, facebookContent), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_facebookContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_facebookContent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_minutesFromNow = { "minutesFromNow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRawPushNotificationMinutes_Parms, minutesFromNow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRawPushNotificationMinutes_Parms, ReturnValue), Z_Construct_UClass_UBCPushNotificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_fcmContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_iosContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_facebookContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_minutesFromNow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Push Notification" },
		{ "Comment", "/**\n\x09* Schedules a normalized push notification to a user\n\x09*\n\x09* Param - profileId The profileId of the user to receive the notification\n\x09* Param - fcmContent Valid Fcm data content\n\x09* Param - iosContent Valid ios data content\n\x09* Param - facebookContent Facebook template string\n\x09* Param - minutesFromNow Minutes from now to send the push notification\n\x09* Param - callback The method to be invoked when the server response is received\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ToolTip", "Schedules a normalized push notification to a user\n\nParam - profileId The profileId of the user to receive the notification\nParam - fcmContent Valid Fcm data content\nParam - iosContent Valid ios data content\nParam - facebookContent Facebook template string\nParam - minutesFromNow Minutes from now to send the push notification\nParam - callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPushNotificationProxy, nullptr, "ScheduleRawPushNotificationMinutes", nullptr, nullptr, sizeof(BCPushNotificationProxy_eventScheduleRawPushNotificationMinutes_Parms), Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics
	{
		struct BCPushNotificationProxy_eventScheduleRawPushNotificationUTC_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString profileId;
			FString fcmContent;
			FString iosContent;
			FString facebookContent;
			int64 startTime;
			UBCPushNotificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fcmContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fcmContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iosContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_iosContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_facebookContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_facebookContent;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_startTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRawPushNotificationUTC_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRawPushNotificationUTC_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_profileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_fcmContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_fcmContent = { "fcmContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRawPushNotificationUTC_Parms, fcmContent), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_fcmContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_fcmContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_iosContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_iosContent = { "iosContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRawPushNotificationUTC_Parms, iosContent), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_iosContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_iosContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_facebookContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_facebookContent = { "facebookContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRawPushNotificationUTC_Parms, facebookContent), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_facebookContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_facebookContent_MetaData)) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_startTime = { "startTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRawPushNotificationUTC_Parms, startTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRawPushNotificationUTC_Parms, ReturnValue), Z_Construct_UClass_UBCPushNotificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_fcmContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_iosContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_facebookContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_startTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Push Notification" },
		{ "Comment", "/**\n\x09* Schedules a normalized push notification to a user\n\x09*\n\x09* Param - profileId The profileId of the user to receive the notification\n\x09* Param - fcmContent Valid Fcm data content\n\x09* Param - iosContent Valid ios data content\n\x09* Param - facebookContent Facebook template string\n\x09* Param - startTime Start time of sending the push notification\n\x09* Param - callback The method to be invoked when the server response is received\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ToolTip", "Schedules a normalized push notification to a user\n\nParam - profileId The profileId of the user to receive the notification\nParam - fcmContent Valid Fcm data content\nParam - iosContent Valid ios data content\nParam - facebookContent Facebook template string\nParam - startTime Start time of sending the push notification\nParam - callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPushNotificationProxy, nullptr, "ScheduleRawPushNotificationUTC", nullptr, nullptr, sizeof(BCPushNotificationProxy_eventScheduleRawPushNotificationUTC_Parms), Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics
	{
		struct BCPushNotificationProxy_eventScheduleRichPushNotificationMinutes_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString profileId;
			int32 notificationTemplateId;
			FString substitutionJson;
			int32 minutesFromNow;
			UBCPushNotificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_notificationTemplateId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_notificationTemplateId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_substitutionJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_substitutionJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minutesFromNow_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_minutesFromNow;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRichPushNotificationMinutes_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRichPushNotificationMinutes_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_profileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_notificationTemplateId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_notificationTemplateId = { "notificationTemplateId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRichPushNotificationMinutes_Parms, notificationTemplateId), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_notificationTemplateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_notificationTemplateId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_substitutionJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_substitutionJson = { "substitutionJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRichPushNotificationMinutes_Parms, substitutionJson), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_substitutionJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_substitutionJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_minutesFromNow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_minutesFromNow = { "minutesFromNow", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRichPushNotificationMinutes_Parms, minutesFromNow), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_minutesFromNow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_minutesFromNow_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRichPushNotificationMinutes_Parms, ReturnValue), Z_Construct_UClass_UBCPushNotificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_notificationTemplateId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_substitutionJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_minutesFromNow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Push Notification" },
		{ "Comment", "/**\n\x09* Schedules a rich push notification to a user\n\x09*\n\x09* Param - profileId The profileId of the user to receive the notification\n\x09* Param - notificationTemplateId Body and title of alert\n\x09* Param - substitutionJson Map of substitution positions to strings\n\x09* Param - minutesFromNow Minutes from now to send the push notification\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ToolTip", "Schedules a rich push notification to a user\n\nParam - profileId The profileId of the user to receive the notification\nParam - notificationTemplateId Body and title of alert\nParam - substitutionJson Map of substitution positions to strings\nParam - minutesFromNow Minutes from now to send the push notification" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPushNotificationProxy, nullptr, "ScheduleRichPushNotificationMinutes", nullptr, nullptr, sizeof(BCPushNotificationProxy_eventScheduleRichPushNotificationMinutes_Parms), Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics
	{
		struct BCPushNotificationProxy_eventScheduleRichPushNotificationUTC_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString profileId;
			int32 notificationTemplateId;
			FString substitutionJson;
			int64 startTime;
			UBCPushNotificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_notificationTemplateId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_substitutionJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_substitutionJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_startTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRichPushNotificationUTC_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRichPushNotificationUTC_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_profileId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_notificationTemplateId = { "notificationTemplateId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRichPushNotificationUTC_Parms, notificationTemplateId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_substitutionJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_substitutionJson = { "substitutionJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRichPushNotificationUTC_Parms, substitutionJson), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_substitutionJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_substitutionJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_startTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_startTime = { "startTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRichPushNotificationUTC_Parms, startTime), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_startTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_startTime_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventScheduleRichPushNotificationUTC_Parms, ReturnValue), Z_Construct_UClass_UBCPushNotificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_notificationTemplateId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_substitutionJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_startTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Push Notification" },
		{ "Comment", "/**\n\x09* Schedules a rich push notification to a user\n\x09*\n\x09* Param - profileId The profileId of the user to receive the notification\n\x09* Param - notificationTemplateId Body and title of alert\n\x09* Param - substitutionJson Map of substitution positions to strings\n\x09* Param - startTime Start time of sending the push notification\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ToolTip", "Schedules a rich push notification to a user\n\nParam - profileId The profileId of the user to receive the notification\nParam - notificationTemplateId Body and title of alert\nParam - substitutionJson Map of substitution positions to strings\nParam - startTime Start time of sending the push notification" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPushNotificationProxy, nullptr, "ScheduleRichPushNotificationUTC", nullptr, nullptr, sizeof(BCPushNotificationProxy_eventScheduleRichPushNotificationUTC_Parms), Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics
	{
		struct BCPushNotificationProxy_eventSendNormalizedPushNotification_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString toPlayerId;
			FString alertContentJson;
			FString customDataJson;
			UBCPushNotificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_toPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_toPlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_alertContentJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_alertContentJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customDataJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_customDataJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendNormalizedPushNotification_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::NewProp_toPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::NewProp_toPlayerId = { "toPlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendNormalizedPushNotification_Parms, toPlayerId), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::NewProp_toPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::NewProp_toPlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::NewProp_alertContentJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::NewProp_alertContentJson = { "alertContentJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendNormalizedPushNotification_Parms, alertContentJson), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::NewProp_alertContentJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::NewProp_alertContentJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::NewProp_customDataJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::NewProp_customDataJson = { "customDataJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendNormalizedPushNotification_Parms, customDataJson), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::NewProp_customDataJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::NewProp_customDataJson_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendNormalizedPushNotification_Parms, ReturnValue), Z_Construct_UClass_UBCPushNotificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::NewProp_toPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::NewProp_alertContentJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::NewProp_customDataJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Push Notification" },
		{ "Comment", "/**\n\x09* Sends a notification to a user consisting of alert content and custom data.\n\x09*\n\x09* Param - toPlayerId The playerId of the user to receive the notification\n\x09* Param - alertContent Body and title of alert\n\x09* Param - customData Optional custom data\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ToolTip", "Sends a notification to a user consisting of alert content and custom data.\n\nParam - toPlayerId The playerId of the user to receive the notification\nParam - alertContent Body and title of alert\nParam - customData Optional custom data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPushNotificationProxy, nullptr, "SendNormalizedPushNotification", nullptr, nullptr, sizeof(BCPushNotificationProxy_eventSendNormalizedPushNotification_Parms), Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics
	{
		struct BCPushNotificationProxy_eventSendNormalizedPushNotificationBatch_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TArray<FString> profileIds;
			FString alertContentJson;
			FString customDataJson;
			UBCPushNotificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_profileIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_alertContentJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_alertContentJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customDataJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_customDataJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendNormalizedPushNotificationBatch_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_profileIds_Inner = { "profileIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_profileIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_profileIds = { "profileIds", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendNormalizedPushNotificationBatch_Parms, profileIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_profileIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_profileIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_alertContentJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_alertContentJson = { "alertContentJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendNormalizedPushNotificationBatch_Parms, alertContentJson), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_alertContentJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_alertContentJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_customDataJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_customDataJson = { "customDataJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendNormalizedPushNotificationBatch_Parms, customDataJson), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_customDataJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_customDataJson_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendNormalizedPushNotificationBatch_Parms, ReturnValue), Z_Construct_UClass_UBCPushNotificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_profileIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_profileIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_alertContentJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_customDataJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Push Notification" },
		{ "Comment", "/**\n\x09* Sends a notification to a user consisting of alert content and custom data.\n\x09*\n\x09* Param - profileIds Collection of profile IDs to send the notification to\n\x09* Param - alertContent Body and title of alert\n\x09* Param - customData Optional custom data\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ToolTip", "Sends a notification to a user consisting of alert content and custom data.\n\nParam - profileIds Collection of profile IDs to send the notification to\nParam - alertContent Body and title of alert\nParam - customData Optional custom data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPushNotificationProxy, nullptr, "SendNormalizedPushNotificationBatch", nullptr, nullptr, sizeof(BCPushNotificationProxy_eventSendNormalizedPushNotificationBatch_Parms), Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics
	{
		struct BCPushNotificationProxy_eventSendNormalizedPushNotificationToGroup_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			FString alertContentJson;
			FString customDataJson;
			UBCPushNotificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_alertContentJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_alertContentJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customDataJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_customDataJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendNormalizedPushNotificationToGroup_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendNormalizedPushNotificationToGroup_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::NewProp_groupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::NewProp_alertContentJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::NewProp_alertContentJson = { "alertContentJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendNormalizedPushNotificationToGroup_Parms, alertContentJson), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::NewProp_alertContentJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::NewProp_alertContentJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::NewProp_customDataJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::NewProp_customDataJson = { "customDataJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendNormalizedPushNotificationToGroup_Parms, customDataJson), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::NewProp_customDataJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::NewProp_customDataJson_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendNormalizedPushNotificationToGroup_Parms, ReturnValue), Z_Construct_UClass_UBCPushNotificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::NewProp_alertContentJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::NewProp_customDataJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Push Notification" },
		{ "Comment", "/**\n    * Sends a notification to a \"group\" of user consisting of alert content and custom data.\n    * See the Portal documentation for more info.\n    *\n    * Param - groupId Target group\n    * Param - alertContentJson Body and title of alert\n    * Param - customDataJson Optional custom data\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ToolTip", "Sends a notification to a \"group\" of user consisting of alert content and custom data.\nSee the Portal documentation for more info.\n\nParam - groupId Target group\nParam - alertContentJson Body and title of alert\nParam - customDataJson Optional custom data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPushNotificationProxy, nullptr, "SendNormalizedPushNotificationToGroup", nullptr, nullptr, sizeof(BCPushNotificationProxy_eventSendNormalizedPushNotificationToGroup_Parms), Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics
	{
		struct BCPushNotificationProxy_eventSendRawPushNotification_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString playerId;
			FString fcmContent;
			FString iosContent;
			FString facebookContent;
			UBCPushNotificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fcmContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fcmContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iosContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_iosContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_facebookContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_facebookContent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRawPushNotification_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_playerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRawPushNotification_Parms, playerId), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_fcmContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_fcmContent = { "fcmContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRawPushNotification_Parms, fcmContent), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_fcmContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_fcmContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_iosContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_iosContent = { "iosContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRawPushNotification_Parms, iosContent), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_iosContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_iosContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_facebookContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_facebookContent = { "facebookContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRawPushNotification_Parms, facebookContent), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_facebookContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_facebookContent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRawPushNotification_Parms, ReturnValue), Z_Construct_UClass_UBCPushNotificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_fcmContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_iosContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_facebookContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Push Notification" },
		{ "Comment", "/**\n\x09* Sends a raw push notification to a target user.\n\x09*\n\x09* Param - toPlayerId The playerId of the user to receive the notification\n\x09* Param - fcmContent Valid Fcm data content\n\x09* Param - iosContent Valid ios data content\n\x09* Param - facebookContent Facebook template string\n\x09* Param - callback The method to be invoked when the server response is received\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ToolTip", "Sends a raw push notification to a target user.\n\nParam - toPlayerId The playerId of the user to receive the notification\nParam - fcmContent Valid Fcm data content\nParam - iosContent Valid ios data content\nParam - facebookContent Facebook template string\nParam - callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPushNotificationProxy, nullptr, "SendRawPushNotification", nullptr, nullptr, sizeof(BCPushNotificationProxy_eventSendRawPushNotification_Parms), Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics
	{
		struct BCPushNotificationProxy_eventSendRawPushNotificationBatch_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TArray<FString> profileIds;
			FString fcmContent;
			FString iosContent;
			FString facebookContent;
			UBCPushNotificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_profileIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fcmContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fcmContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iosContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_iosContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_facebookContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_facebookContent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRawPushNotificationBatch_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_profileIds_Inner = { "profileIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_profileIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_profileIds = { "profileIds", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRawPushNotificationBatch_Parms, profileIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_profileIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_profileIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_fcmContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_fcmContent = { "fcmContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRawPushNotificationBatch_Parms, fcmContent), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_fcmContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_fcmContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_iosContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_iosContent = { "iosContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRawPushNotificationBatch_Parms, iosContent), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_iosContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_iosContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_facebookContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_facebookContent = { "facebookContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRawPushNotificationBatch_Parms, facebookContent), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_facebookContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_facebookContent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRawPushNotificationBatch_Parms, ReturnValue), Z_Construct_UClass_UBCPushNotificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_profileIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_profileIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_fcmContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_iosContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_facebookContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Push Notification" },
		{ "Comment", "/**\n\x09* Sends a raw push notification to a target list of users.\n\x09*\n\x09* Param - profileIds Collection of profile IDs to send the notification to\n\x09* Param - fcmContent Valid Fcm data content\n\x09* Param - iosContent Valid ios data content\n\x09* Param - facebookContent Facebook template string\n\x09* Param - callback The method to be invoked when the server response is received\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ToolTip", "Sends a raw push notification to a target list of users.\n\nParam - profileIds Collection of profile IDs to send the notification to\nParam - fcmContent Valid Fcm data content\nParam - iosContent Valid ios data content\nParam - facebookContent Facebook template string\nParam - callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPushNotificationProxy, nullptr, "SendRawPushNotificationBatch", nullptr, nullptr, sizeof(BCPushNotificationProxy_eventSendRawPushNotificationBatch_Parms), Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics
	{
		struct BCPushNotificationProxy_eventSendRawPushNotificationToGroup_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			FString fcmContent;
			FString iosContent;
			FString facebookContent;
			UBCPushNotificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fcmContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fcmContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iosContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_iosContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_facebookContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_facebookContent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRawPushNotificationToGroup_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRawPushNotificationToGroup_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_groupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_fcmContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_fcmContent = { "fcmContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRawPushNotificationToGroup_Parms, fcmContent), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_fcmContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_fcmContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_iosContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_iosContent = { "iosContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRawPushNotificationToGroup_Parms, iosContent), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_iosContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_iosContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_facebookContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_facebookContent = { "facebookContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRawPushNotificationToGroup_Parms, facebookContent), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_facebookContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_facebookContent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRawPushNotificationToGroup_Parms, ReturnValue), Z_Construct_UClass_UBCPushNotificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_fcmContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_iosContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_facebookContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Push Notification" },
		{ "Comment", "/**\n\x09* Sends a raw push notification to a target group.\n\x09*\n\x09* Param - groupId Target group\n\x09* Param - fcmContent Valid Fcm data content\n\x09* Param - iosContent Valid ios data content\n\x09* Param - facebookContent Facebook template stringn\n\x09* Param - callback The method to be invoked when the server response is received\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ToolTip", "Sends a raw push notification to a target group.\n\nParam - groupId Target group\nParam - fcmContent Valid Fcm data content\nParam - iosContent Valid ios data content\nParam - facebookContent Facebook template stringn\nParam - callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPushNotificationProxy, nullptr, "SendRawPushNotificationToGroup", nullptr, nullptr, sizeof(BCPushNotificationProxy_eventSendRawPushNotificationToGroup_Parms), Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification_Statics
	{
		struct BCPushNotificationProxy_eventSendRichPushNotification_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString toPlayerId;
			int32 notificationTemplateId;
			UBCPushNotificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_toPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_toPlayerId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_notificationTemplateId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRichPushNotification_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification_Statics::NewProp_toPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification_Statics::NewProp_toPlayerId = { "toPlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRichPushNotification_Parms, toPlayerId), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification_Statics::NewProp_toPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification_Statics::NewProp_toPlayerId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification_Statics::NewProp_notificationTemplateId = { "notificationTemplateId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRichPushNotification_Parms, notificationTemplateId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRichPushNotification_Parms, ReturnValue), Z_Construct_UClass_UBCPushNotificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification_Statics::NewProp_toPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification_Statics::NewProp_notificationTemplateId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Push Notification" },
		{ "Comment", "/**\n    * Sends a notification to a user based on a brainCloud portal configured notification template.\n    * NOTE: It is possible to send a push notification to oneself.\n    *\n    * Param - toPlayerId The braincloud playerId of the user to receive the notification\n    * Param - notificationTemplateId Id of the notification template\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ToolTip", "Sends a notification to a user based on a brainCloud portal configured notification template.\nNOTE: It is possible to send a push notification to oneself.\n\nParam - toPlayerId The braincloud playerId of the user to receive the notification\nParam - notificationTemplateId Id of the notification template" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPushNotificationProxy, nullptr, "SendRichPushNotification", nullptr, nullptr, sizeof(BCPushNotificationProxy_eventSendRichPushNotification_Parms), Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics
	{
		struct BCPushNotificationProxy_eventSendRichPushNotificationWithParams_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString toPlayerId;
			int32 notificationTemplateId;
			FString substitutionJson;
			UBCPushNotificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_toPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_toPlayerId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_notificationTemplateId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_substitutionJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_substitutionJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRichPushNotificationWithParams_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::NewProp_toPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::NewProp_toPlayerId = { "toPlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRichPushNotificationWithParams_Parms, toPlayerId), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::NewProp_toPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::NewProp_toPlayerId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::NewProp_notificationTemplateId = { "notificationTemplateId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRichPushNotificationWithParams_Parms, notificationTemplateId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::NewProp_substitutionJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::NewProp_substitutionJson = { "substitutionJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRichPushNotificationWithParams_Parms, substitutionJson), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::NewProp_substitutionJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::NewProp_substitutionJson_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendRichPushNotificationWithParams_Parms, ReturnValue), Z_Construct_UClass_UBCPushNotificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::NewProp_toPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::NewProp_notificationTemplateId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::NewProp_substitutionJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Push Notification" },
		{ "Comment", "/**\n    * Sends a notification to a user based on a brainCloud portal configured notification template.\n    * Includes JSON defining the substitution params to use with the template.\n    * See the Portal documentation for more info.\n    * NOTE: It is possible to send a push notification to oneself.\n    *\n    * Param - toPlayerId The braincloud playerId of the user to receive the notification\n    * Param - notificationTemplateId Id of the notification template\n    * Param - substitutionJson JSON defining the substitution params to use with the template\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ToolTip", "Sends a notification to a user based on a brainCloud portal configured notification template.\nIncludes JSON defining the substitution params to use with the template.\nSee the Portal documentation for more info.\nNOTE: It is possible to send a push notification to oneself.\n\nParam - toPlayerId The braincloud playerId of the user to receive the notification\nParam - notificationTemplateId Id of the notification template\nParam - substitutionJson JSON defining the substitution params to use with the template" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPushNotificationProxy, nullptr, "SendRichPushNotificationWithParams", nullptr, nullptr, sizeof(BCPushNotificationProxy_eventSendRichPushNotificationWithParams_Parms), Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics
	{
		struct BCPushNotificationProxy_eventSendSimplePushNotification_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString toPlayerId;
			FString message;
			UBCPushNotificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_toPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_toPlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendSimplePushNotification_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::NewProp_toPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::NewProp_toPlayerId = { "toPlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendSimplePushNotification_Parms, toPlayerId), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::NewProp_toPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::NewProp_toPlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendSimplePushNotification_Parms, message), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::NewProp_message_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendSimplePushNotification_Parms, ReturnValue), Z_Construct_UClass_UBCPushNotificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::NewProp_toPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::NewProp_message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Push Notification" },
		{ "Comment", "/**\n    * Sends a simple push notification based on the passed in message.\n    * NOTE: It is possible to send a push notification to oneself.\n    *\n    * Param - toPlayerId The braincloud playerId of the user to receive the notification\n    * Param - message Text of the push notification\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ToolTip", "Sends a simple push notification based on the passed in message.\nNOTE: It is possible to send a push notification to oneself.\n\nParam - toPlayerId The braincloud playerId of the user to receive the notification\nParam - message Text of the push notification" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPushNotificationProxy, nullptr, "SendSimplePushNotification", nullptr, nullptr, sizeof(BCPushNotificationProxy_eventSendSimplePushNotification_Parms), Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics
	{
		struct BCPushNotificationProxy_eventSendTemplatedPushNotificationToGroup_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString groupId;
			int32 notificationTemplateId;
			FString substitutionJson;
			UBCPushNotificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_notificationTemplateId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_substitutionJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_substitutionJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendTemplatedPushNotificationToGroup_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::NewProp_groupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::NewProp_groupId = { "groupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendTemplatedPushNotificationToGroup_Parms, groupId), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::NewProp_groupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::NewProp_groupId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::NewProp_notificationTemplateId = { "notificationTemplateId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendTemplatedPushNotificationToGroup_Parms, notificationTemplateId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::NewProp_substitutionJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::NewProp_substitutionJson = { "substitutionJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendTemplatedPushNotificationToGroup_Parms, substitutionJson), METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::NewProp_substitutionJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::NewProp_substitutionJson_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPushNotificationProxy_eventSendTemplatedPushNotificationToGroup_Parms, ReturnValue), Z_Construct_UClass_UBCPushNotificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::NewProp_groupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::NewProp_notificationTemplateId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::NewProp_substitutionJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Push Notification" },
		{ "Comment", "/**\n    * Sends a notification to a \"group\" of user based on a brainCloud portal configured notification template.\n    * Includes JSON defining the substitution params to use with the template.\n    * See the Portal documentation for more info.\n    *\n    * Param - groupId Target group\n    * Param - notificationTemplateId Template to use\n    * Param - substitutionsJson Map of substitution positions to strings\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ToolTip", "Sends a notification to a \"group\" of user based on a brainCloud portal configured notification template.\nIncludes JSON defining the substitution params to use with the template.\nSee the Portal documentation for more info.\n\nParam - groupId Target group\nParam - notificationTemplateId Template to use\nParam - substitutionsJson Map of substitution positions to strings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPushNotificationProxy, nullptr, "SendTemplatedPushNotificationToGroup", nullptr, nullptr, sizeof(BCPushNotificationProxy_eventSendTemplatedPushNotificationToGroup_Parms), Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCPushNotificationProxy_NoRegister()
	{
		return UBCPushNotificationProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCPushNotificationProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCPushNotificationProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCPushNotificationProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterAllPushNotificationDeviceTokens, "DeregisterAllPushNotificationDeviceTokens" }, // 4189099669
		{ &Z_Construct_UFunction_UBCPushNotificationProxy_DeregisterPushNotificationDeviceToken, "DeregisterPushNotificationDeviceToken" }, // 724736300
		{ &Z_Construct_UFunction_UBCPushNotificationProxy_RegisterPushNotificationDeviceToken, "RegisterPushNotificationDeviceToken" }, // 2798245810
		{ &Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationMinutes, "ScheduleNormalizedPushNotificationMinutes" }, // 1773997432
		{ &Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleNormalizedPushNotificationUTC, "ScheduleNormalizedPushNotificationUTC" }, // 2151158279
		{ &Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationMinutes, "ScheduleRawPushNotificationMinutes" }, // 313741015
		{ &Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRawPushNotificationUTC, "ScheduleRawPushNotificationUTC" }, // 805945416
		{ &Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationMinutes, "ScheduleRichPushNotificationMinutes" }, // 3802732942
		{ &Z_Construct_UFunction_UBCPushNotificationProxy_ScheduleRichPushNotificationUTC, "ScheduleRichPushNotificationUTC" }, // 2429168919
		{ &Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotification, "SendNormalizedPushNotification" }, // 1639216490
		{ &Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationBatch, "SendNormalizedPushNotificationBatch" }, // 3311318513
		{ &Z_Construct_UFunction_UBCPushNotificationProxy_SendNormalizedPushNotificationToGroup, "SendNormalizedPushNotificationToGroup" }, // 2717603591
		{ &Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotification, "SendRawPushNotification" }, // 2387835823
		{ &Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationBatch, "SendRawPushNotificationBatch" }, // 952616586
		{ &Z_Construct_UFunction_UBCPushNotificationProxy_SendRawPushNotificationToGroup, "SendRawPushNotificationToGroup" }, // 1871233943
		{ &Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotification, "SendRichPushNotification" }, // 232517943
		{ &Z_Construct_UFunction_UBCPushNotificationProxy_SendRichPushNotificationWithParams, "SendRichPushNotificationWithParams" }, // 52300294
		{ &Z_Construct_UFunction_UBCPushNotificationProxy_SendSimplePushNotification, "SendSimplePushNotification" }, // 3650378241
		{ &Z_Construct_UFunction_UBCPushNotificationProxy_SendTemplatedPushNotificationToGroup, "SendTemplatedPushNotificationToGroup" }, // 3887709779
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCPushNotificationProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPushNotificationProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCPushNotificationProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCPushNotificationProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCPushNotificationProxy_Statics::ClassParams = {
		&UBCPushNotificationProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCPushNotificationProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCPushNotificationProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCPushNotificationProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCPushNotificationProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCPushNotificationProxy, 4115454115);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCPushNotificationProxy>()
	{
		return UBCPushNotificationProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCPushNotificationProxy(Z_Construct_UClass_UBCPushNotificationProxy, &UBCPushNotificationProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCPushNotificationProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCPushNotificationProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
