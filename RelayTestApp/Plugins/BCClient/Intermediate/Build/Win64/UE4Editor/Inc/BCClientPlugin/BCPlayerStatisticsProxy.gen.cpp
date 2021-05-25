// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCPlayerStatisticsProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCPlayerStatisticsProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCPlayerStatisticsProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCPlayerStatisticsProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCPlayerStatisticsProxy::execProcessStatistics)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStatisticsProxy**)Z_Param__Result=UBCPlayerStatisticsProxy::ProcessStatistics(Z_Param_brainCloudWrapper,Z_Param_jsonData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStatisticsProxy::execSetExperiencePoints)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FIntProperty,Z_Param_xpValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStatisticsProxy**)Z_Param__Result=UBCPlayerStatisticsProxy::SetExperiencePoints(Z_Param_brainCloudWrapper,Z_Param_xpValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStatisticsProxy::execIncrementExperiencePoints)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FIntProperty,Z_Param_xpValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStatisticsProxy**)Z_Param__Result=UBCPlayerStatisticsProxy::IncrementExperiencePoints(Z_Param_brainCloudWrapper,Z_Param_xpValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStatisticsProxy::execGetNextExperienceLevel)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStatisticsProxy**)Z_Param__Result=UBCPlayerStatisticsProxy::GetNextExperienceLevel(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStatisticsProxy::execIncrementUserStats)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStatisticsProxy**)Z_Param__Result=UBCPlayerStatisticsProxy::IncrementUserStats(Z_Param_brainCloudWrapper,Z_Param_jsonData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStatisticsProxy::execResetAllUserStats)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStatisticsProxy**)Z_Param__Result=UBCPlayerStatisticsProxy::ResetAllUserStats(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStatisticsProxy::execReadUserStatisticsByCategory)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_category);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStatisticsProxy**)Z_Param__Result=UBCPlayerStatisticsProxy::ReadUserStatisticsByCategory(Z_Param_brainCloudWrapper,Z_Param_category);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStatisticsProxy::execReadUserStatsSubset)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_TARRAY_REF(FString,Z_Param_Out_userStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStatisticsProxy**)Z_Param__Result=UBCPlayerStatisticsProxy::ReadUserStatsSubset(Z_Param_brainCloudWrapper,Z_Param_Out_userStats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCPlayerStatisticsProxy::execReadAllUserStats)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCPlayerStatisticsProxy**)Z_Param__Result=UBCPlayerStatisticsProxy::ReadAllUserStats(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	void UBCPlayerStatisticsProxy::StaticRegisterNativesUBCPlayerStatisticsProxy()
	{
		UClass* Class = UBCPlayerStatisticsProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNextExperienceLevel", &UBCPlayerStatisticsProxy::execGetNextExperienceLevel },
			{ "IncrementExperiencePoints", &UBCPlayerStatisticsProxy::execIncrementExperiencePoints },
			{ "IncrementUserStats", &UBCPlayerStatisticsProxy::execIncrementUserStats },
			{ "ProcessStatistics", &UBCPlayerStatisticsProxy::execProcessStatistics },
			{ "ReadAllUserStats", &UBCPlayerStatisticsProxy::execReadAllUserStats },
			{ "ReadUserStatisticsByCategory", &UBCPlayerStatisticsProxy::execReadUserStatisticsByCategory },
			{ "ReadUserStatsSubset", &UBCPlayerStatisticsProxy::execReadUserStatsSubset },
			{ "ResetAllUserStats", &UBCPlayerStatisticsProxy::execResetAllUserStats },
			{ "SetExperiencePoints", &UBCPlayerStatisticsProxy::execSetExperiencePoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCPlayerStatisticsProxy_GetNextExperienceLevel_Statics
	{
		struct BCPlayerStatisticsProxy_eventGetNextExperienceLevel_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCPlayerStatisticsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_GetNextExperienceLevel_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventGetNextExperienceLevel_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_GetNextExperienceLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventGetNextExperienceLevel_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStatisticsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStatisticsProxy_GetNextExperienceLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_GetNextExperienceLevel_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_GetNextExperienceLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStatisticsProxy_GetNextExperienceLevel_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player Statistics" },
		{ "Comment", "/**\n    * Returns JSON representing the next experience level for the user.\n    *\n    * Service Name - PlayerStatistics\n    * Service Operation - ReadNextXpLevel\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStatisticsProxy.h" },
		{ "ToolTip", "Returns JSON representing the next experience level for the user.\n\nService Name - PlayerStatistics\nService Operation - ReadNextXpLevel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_GetNextExperienceLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStatisticsProxy, nullptr, "GetNextExperienceLevel", nullptr, nullptr, sizeof(BCPlayerStatisticsProxy_eventGetNextExperienceLevel_Parms), Z_Construct_UFunction_UBCPlayerStatisticsProxy_GetNextExperienceLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsProxy_GetNextExperienceLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStatisticsProxy_GetNextExperienceLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsProxy_GetNextExperienceLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStatisticsProxy_GetNextExperienceLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStatisticsProxy_GetNextExperienceLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementExperiencePoints_Statics
	{
		struct BCPlayerStatisticsProxy_eventIncrementExperiencePoints_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 xpValue;
			UBCPlayerStatisticsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_xpValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementExperiencePoints_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventIncrementExperiencePoints_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementExperiencePoints_Statics::NewProp_xpValue = { "xpValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventIncrementExperiencePoints_Parms, xpValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementExperiencePoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventIncrementExperiencePoints_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStatisticsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementExperiencePoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementExperiencePoints_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementExperiencePoints_Statics::NewProp_xpValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementExperiencePoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementExperiencePoints_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player Statistics" },
		{ "Comment", "/**\n    * Increments the user's experience. If the player goes up a level,\n    * the new level details will be returned along with a list of rewards.\n    *\n    * Service Name - PlayerStatistics\n    * Service Operation - UpdateIncrement\n    *\n    * Param - xpValue The amount to increase the user's experience by\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStatisticsProxy.h" },
		{ "ToolTip", "Increments the user's experience. If the player goes up a level,\nthe new level details will be returned along with a list of rewards.\n\nService Name - PlayerStatistics\nService Operation - UpdateIncrement\n\nParam - xpValue The amount to increase the user's experience by" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementExperiencePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStatisticsProxy, nullptr, "IncrementExperiencePoints", nullptr, nullptr, sizeof(BCPlayerStatisticsProxy_eventIncrementExperiencePoints_Parms), Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementExperiencePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementExperiencePoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementExperiencePoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementExperiencePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementExperiencePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementExperiencePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementUserStats_Statics
	{
		struct BCPlayerStatisticsProxy_eventIncrementUserStats_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString jsonData;
			UBCPlayerStatisticsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementUserStats_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventIncrementUserStats_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementUserStats_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventIncrementUserStats_Parms, jsonData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementUserStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventIncrementUserStats_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStatisticsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementUserStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementUserStats_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementUserStats_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementUserStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementUserStats_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player Statistics" },
		{ "Comment", "/**\n    * Atomically increment (or decrement) user statistics.\n    * Any rewards that are triggered from user statistic increments\n    * will be considered. User statistics are defined through the brainCloud portal.\n    * Note also that the \"xpCapped\" property is returned (true/false depending on whether\n    * the xp cap is turned on and whether the user has hit it).\n    *\n    * Service Name - PlayerStatistics\n    * Service Operation - Update\n    *\n    * Param - jsonData The JSON encoded data to be sent to the server as follows:\n    * {\n    *   stat1: 10,\n    *   stat2: -5.5,\n    * }\n    * would increment stat1 by 10 and decrement stat2 by 5.5.\n    * For the full statistics grammer see the api.braincloudservers.com site.\n    * There are many more complex operations supported such as:\n    * {\n    *   stat1:INC_TO_LIMIT#9#30\n    * }\n    * which increments stat1 by 9 up to a limit of 30.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStatisticsProxy.h" },
		{ "ToolTip", "Atomically increment (or decrement) user statistics.\nAny rewards that are triggered from user statistic increments\nwill be considered. User statistics are defined through the brainCloud portal.\nNote also that the \"xpCapped\" property is returned (true/false depending on whether\nthe xp cap is turned on and whether the user has hit it).\n\nService Name - PlayerStatistics\nService Operation - Update\n\nParam - jsonData The JSON encoded data to be sent to the server as follows:\n{\n  stat1: 10,\n  stat2: -5.5,\n}\nwould increment stat1 by 10 and decrement stat2 by 5.5.\nFor the full statistics grammer see the api.braincloudservers.com site.\nThere are many more complex operations supported such as:\n{\n  stat1:INC_TO_LIMIT#9#30\n}\nwhich increments stat1 by 9 up to a limit of 30." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementUserStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStatisticsProxy, nullptr, "IncrementUserStats", nullptr, nullptr, sizeof(BCPlayerStatisticsProxy_eventIncrementUserStats_Parms), Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementUserStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementUserStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementUserStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementUserStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementUserStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStatisticsProxy_ProcessStatistics_Statics
	{
		struct BCPlayerStatisticsProxy_eventProcessStatistics_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString jsonData;
			UBCPlayerStatisticsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_ProcessStatistics_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventProcessStatistics_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_ProcessStatistics_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventProcessStatistics_Parms, jsonData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_ProcessStatistics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventProcessStatistics_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStatisticsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStatisticsProxy_ProcessStatistics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_ProcessStatistics_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_ProcessStatistics_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_ProcessStatistics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStatisticsProxy_ProcessStatistics_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player Statistics" },
		{ "Comment", "/**\n\x09* Apply statistics grammar to a partial set of statistics.\n\x09*\n\x09* Service Name - PlayerStatistics\n\x09* Service Operation - PROCESS_STATISTICS\n\x09*\n\x09* Param - jsonData The JSON format is as follows:\n\x09* {\n\x09*     \"DEAD_CATS\": \"RESET\",\n\x09*     \"LIVES_LEFT\": \"SET#9\",\n\x09*     \"MICE_KILLED\": \"INC#2\",\n\x09*     \"DOG_SCARE_BONUS_POINTS\": \"INC#10\",\n\x09*     \"TREES_CLIMBED\": 1\n\x09* }\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStatisticsProxy.h" },
		{ "ToolTip", "Apply statistics grammar to a partial set of statistics.\n\nService Name - PlayerStatistics\nService Operation - PROCESS_STATISTICS\n\nParam - jsonData The JSON format is as follows:\n{\n    \"DEAD_CATS\": \"RESET\",\n    \"LIVES_LEFT\": \"SET#9\",\n    \"MICE_KILLED\": \"INC#2\",\n    \"DOG_SCARE_BONUS_POINTS\": \"INC#10\",\n    \"TREES_CLIMBED\": 1\n}" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_ProcessStatistics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStatisticsProxy, nullptr, "ProcessStatistics", nullptr, nullptr, sizeof(BCPlayerStatisticsProxy_eventProcessStatistics_Parms), Z_Construct_UFunction_UBCPlayerStatisticsProxy_ProcessStatistics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsProxy_ProcessStatistics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStatisticsProxy_ProcessStatistics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsProxy_ProcessStatistics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStatisticsProxy_ProcessStatistics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStatisticsProxy_ProcessStatistics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadAllUserStats_Statics
	{
		struct BCPlayerStatisticsProxy_eventReadAllUserStats_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCPlayerStatisticsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadAllUserStats_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventReadAllUserStats_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadAllUserStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventReadAllUserStats_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStatisticsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadAllUserStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadAllUserStats_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadAllUserStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadAllUserStats_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player Statistics" },
		{ "Comment", "/**\n    * Read all available user statistics.\n    *\n    * Service Name - PlayerStatistics\n    * Service Operation - Read\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStatisticsProxy.h" },
		{ "ToolTip", "Read all available user statistics.\n\nService Name - PlayerStatistics\nService Operation - Read" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadAllUserStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStatisticsProxy, nullptr, "ReadAllUserStats", nullptr, nullptr, sizeof(BCPlayerStatisticsProxy_eventReadAllUserStats_Parms), Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadAllUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadAllUserStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadAllUserStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadAllUserStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadAllUserStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadAllUserStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatisticsByCategory_Statics
	{
		struct BCPlayerStatisticsProxy_eventReadUserStatisticsByCategory_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString category;
			UBCPlayerStatisticsProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatisticsByCategory_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventReadUserStatisticsByCategory_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatisticsByCategory_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventReadUserStatisticsByCategory_Parms, category), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatisticsByCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventReadUserStatisticsByCategory_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStatisticsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatisticsByCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatisticsByCategory_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatisticsByCategory_Statics::NewProp_category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatisticsByCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatisticsByCategory_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player Statistics" },
		{ "Comment", "/**\n    * Reset all of the statistics for this user back to their initial value.\n    *\n    * Service Name - PlayerStatistics\n    * Service Operation - Reset\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStatisticsProxy.h" },
		{ "ToolTip", "Reset all of the statistics for this user back to their initial value.\n\nService Name - PlayerStatistics\nService Operation - Reset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatisticsByCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStatisticsProxy, nullptr, "ReadUserStatisticsByCategory", nullptr, nullptr, sizeof(BCPlayerStatisticsProxy_eventReadUserStatisticsByCategory_Parms), Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatisticsByCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatisticsByCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatisticsByCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatisticsByCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatisticsByCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatisticsByCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset_Statics
	{
		struct BCPlayerStatisticsProxy_eventReadUserStatsSubset_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TArray<FString> userStats;
			UBCPlayerStatisticsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userStats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_userStats;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventReadUserStatsSubset_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset_Statics::NewProp_userStats_Inner = { "userStats", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset_Statics::NewProp_userStats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset_Statics::NewProp_userStats = { "userStats", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventReadUserStatsSubset_Parms, userStats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset_Statics::NewProp_userStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset_Statics::NewProp_userStats_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventReadUserStatsSubset_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStatisticsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset_Statics::NewProp_userStats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset_Statics::NewProp_userStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player Statistics" },
		{ "Comment", "/**\n    * Reads a subset of user statistics.\n    *\n    * Service Name - PlayerStatistics\n    * Service Operation - ReadSubset\n    *\n    * Param - jsonData The json data containing the subset of statistics to read:\n    * ex. [ \"pantaloons\", \"minions\" ]\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStatisticsProxy.h" },
		{ "ToolTip", "Reads a subset of user statistics.\n\nService Name - PlayerStatistics\nService Operation - ReadSubset\n\nParam - jsonData The json data containing the subset of statistics to read:\nex. [ \"pantaloons\", \"minions\" ]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStatisticsProxy, nullptr, "ReadUserStatsSubset", nullptr, nullptr, sizeof(BCPlayerStatisticsProxy_eventReadUserStatsSubset_Parms), Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStatisticsProxy_ResetAllUserStats_Statics
	{
		struct BCPlayerStatisticsProxy_eventResetAllUserStats_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCPlayerStatisticsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_ResetAllUserStats_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventResetAllUserStats_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_ResetAllUserStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventResetAllUserStats_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStatisticsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStatisticsProxy_ResetAllUserStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_ResetAllUserStats_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_ResetAllUserStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStatisticsProxy_ResetAllUserStats_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player Statistics" },
		{ "Comment", "/**\n    * Method retrieves the user statistics for the given category.\n    *\n    * Service Name - PlayerStatistics\n    * Service Operation - ReadUserStatisticsByCategory\n    *\n    * Param - category The player statistics category\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStatisticsProxy.h" },
		{ "ToolTip", "Method retrieves the user statistics for the given category.\n\nService Name - PlayerStatistics\nService Operation - ReadUserStatisticsByCategory\n\nParam - category The player statistics category" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_ResetAllUserStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStatisticsProxy, nullptr, "ResetAllUserStats", nullptr, nullptr, sizeof(BCPlayerStatisticsProxy_eventResetAllUserStats_Parms), Z_Construct_UFunction_UBCPlayerStatisticsProxy_ResetAllUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsProxy_ResetAllUserStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStatisticsProxy_ResetAllUserStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsProxy_ResetAllUserStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStatisticsProxy_ResetAllUserStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStatisticsProxy_ResetAllUserStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCPlayerStatisticsProxy_SetExperiencePoints_Statics
	{
		struct BCPlayerStatisticsProxy_eventSetExperiencePoints_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 xpValue;
			UBCPlayerStatisticsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_xpValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_SetExperiencePoints_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventSetExperiencePoints_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_SetExperiencePoints_Statics::NewProp_xpValue = { "xpValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventSetExperiencePoints_Parms, xpValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_SetExperiencePoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCPlayerStatisticsProxy_eventSetExperiencePoints_Parms, ReturnValue), Z_Construct_UClass_UBCPlayerStatisticsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCPlayerStatisticsProxy_SetExperiencePoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_SetExperiencePoints_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_SetExperiencePoints_Statics::NewProp_xpValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCPlayerStatisticsProxy_SetExperiencePoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCPlayerStatisticsProxy_SetExperiencePoints_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Player Statistics" },
		{ "Comment", "/**\n    * Sets the user's experience to an absolute value. Note that this\n    * is simply a set and will not reward the player if their level changes\n    * as a result.\n    *\n    * Service Name - PlayerStatistics\n    * Service Operation - SetXpPoints\n    *\n    * Param - xpValue The amount to set the the user's experience to\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStatisticsProxy.h" },
		{ "ToolTip", "Sets the user's experience to an absolute value. Note that this\nis simply a set and will not reward the player if their level changes\nas a result.\n\nService Name - PlayerStatistics\nService Operation - SetXpPoints\n\nParam - xpValue The amount to set the the user's experience to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCPlayerStatisticsProxy_SetExperiencePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCPlayerStatisticsProxy, nullptr, "SetExperiencePoints", nullptr, nullptr, sizeof(BCPlayerStatisticsProxy_eventSetExperiencePoints_Parms), Z_Construct_UFunction_UBCPlayerStatisticsProxy_SetExperiencePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsProxy_SetExperiencePoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCPlayerStatisticsProxy_SetExperiencePoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCPlayerStatisticsProxy_SetExperiencePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCPlayerStatisticsProxy_SetExperiencePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCPlayerStatisticsProxy_SetExperiencePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCPlayerStatisticsProxy_NoRegister()
	{
		return UBCPlayerStatisticsProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCPlayerStatisticsProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCPlayerStatisticsProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCPlayerStatisticsProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCPlayerStatisticsProxy_GetNextExperienceLevel, "GetNextExperienceLevel" }, // 3693411299
		{ &Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementExperiencePoints, "IncrementExperiencePoints" }, // 3695030980
		{ &Z_Construct_UFunction_UBCPlayerStatisticsProxy_IncrementUserStats, "IncrementUserStats" }, // 1464319463
		{ &Z_Construct_UFunction_UBCPlayerStatisticsProxy_ProcessStatistics, "ProcessStatistics" }, // 608100794
		{ &Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadAllUserStats, "ReadAllUserStats" }, // 4093583014
		{ &Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatisticsByCategory, "ReadUserStatisticsByCategory" }, // 3985864766
		{ &Z_Construct_UFunction_UBCPlayerStatisticsProxy_ReadUserStatsSubset, "ReadUserStatsSubset" }, // 3295983581
		{ &Z_Construct_UFunction_UBCPlayerStatisticsProxy_ResetAllUserStats, "ResetAllUserStats" }, // 802638176
		{ &Z_Construct_UFunction_UBCPlayerStatisticsProxy_SetExperiencePoints, "SetExperiencePoints" }, // 362270501
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCPlayerStatisticsProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCPlayerStatisticsProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCPlayerStatisticsProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCPlayerStatisticsProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCPlayerStatisticsProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCPlayerStatisticsProxy_Statics::ClassParams = {
		&UBCPlayerStatisticsProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCPlayerStatisticsProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCPlayerStatisticsProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCPlayerStatisticsProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCPlayerStatisticsProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCPlayerStatisticsProxy, 2063437195);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCPlayerStatisticsProxy>()
	{
		return UBCPlayerStatisticsProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCPlayerStatisticsProxy(Z_Construct_UClass_UBCPlayerStatisticsProxy, &UBCPlayerStatisticsProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCPlayerStatisticsProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCPlayerStatisticsProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
