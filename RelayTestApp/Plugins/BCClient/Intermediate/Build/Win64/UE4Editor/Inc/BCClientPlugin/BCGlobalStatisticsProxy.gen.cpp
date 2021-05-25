// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCGlobalStatisticsProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCGlobalStatisticsProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCGlobalStatisticsProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCGlobalStatisticsProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCGlobalStatisticsProxy::execProcessStatistics)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalStatisticsProxy**)Z_Param__Result=UBCGlobalStatisticsProxy::ProcessStatistics(Z_Param_brainCloudWrapper,Z_Param_jsonData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalStatisticsProxy::execIncrementGlobalGameStat)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalStatisticsProxy**)Z_Param__Result=UBCGlobalStatisticsProxy::IncrementGlobalGameStat(Z_Param_brainCloudWrapper,Z_Param_jsonData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalStatisticsProxy::execReadGlobalStatsForCategory)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_category);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalStatisticsProxy**)Z_Param__Result=UBCGlobalStatisticsProxy::ReadGlobalStatsForCategory(Z_Param_brainCloudWrapper,Z_Param_category);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalStatisticsProxy::execReadGlobalStatsSubset)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_TARRAY_REF(FString,Z_Param_Out_globalStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalStatisticsProxy**)Z_Param__Result=UBCGlobalStatisticsProxy::ReadGlobalStatsSubset(Z_Param_brainCloudWrapper,Z_Param_Out_globalStats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalStatisticsProxy::execReadAllGlobalStats)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalStatisticsProxy**)Z_Param__Result=UBCGlobalStatisticsProxy::ReadAllGlobalStats(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	void UBCGlobalStatisticsProxy::StaticRegisterNativesUBCGlobalStatisticsProxy()
	{
		UClass* Class = UBCGlobalStatisticsProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IncrementGlobalGameStat", &UBCGlobalStatisticsProxy::execIncrementGlobalGameStat },
			{ "ProcessStatistics", &UBCGlobalStatisticsProxy::execProcessStatistics },
			{ "ReadAllGlobalStats", &UBCGlobalStatisticsProxy::execReadAllGlobalStats },
			{ "ReadGlobalStatsForCategory", &UBCGlobalStatisticsProxy::execReadGlobalStatsForCategory },
			{ "ReadGlobalStatsSubset", &UBCGlobalStatisticsProxy::execReadGlobalStatsSubset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCGlobalStatisticsProxy_IncrementGlobalGameStat_Statics
	{
		struct BCGlobalStatisticsProxy_eventIncrementGlobalGameStat_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString jsonData;
			UBCGlobalStatisticsProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalStatisticsProxy_IncrementGlobalGameStat_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalStatisticsProxy_eventIncrementGlobalGameStat_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalStatisticsProxy_IncrementGlobalGameStat_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalStatisticsProxy_eventIncrementGlobalGameStat_Parms, jsonData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalStatisticsProxy_IncrementGlobalGameStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalStatisticsProxy_eventIncrementGlobalGameStat_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalStatisticsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalStatisticsProxy_IncrementGlobalGameStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalStatisticsProxy_IncrementGlobalGameStat_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalStatisticsProxy_IncrementGlobalGameStat_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalStatisticsProxy_IncrementGlobalGameStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalStatisticsProxy_IncrementGlobalGameStat_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Statistics" },
		{ "Comment", "/**\n    * Atomically increment (or decrement) global statistics.\n    * Global statistics are defined through the brainCloud portal.\n    *\n    * Service Name - GlobalStatistics\n    * Service Operation - UpdateIncrement\n    *\n    * Param - jsonData The JSON encoded data to be sent to the server as follows:\n    * {\n    *   stat1: 10,\n    *   stat2: -5.5,\n    * }\n    * would increment stat1 by 10 and decrement stat2 by 5.5.\n    * For the full statistics grammer see the api.braincloudservers.com site.\n    * There are many more complex operations supported such as:\n    * {\n    *   stat1:INC_TO_LIMIT#9#30\n    * }\n    * which increments stat1 by 9 up to a limit of 30.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalStatisticsProxy.h" },
		{ "ToolTip", "Atomically increment (or decrement) global statistics.\nGlobal statistics are defined through the brainCloud portal.\n\nService Name - GlobalStatistics\nService Operation - UpdateIncrement\n\nParam - jsonData The JSON encoded data to be sent to the server as follows:\n{\n  stat1: 10,\n  stat2: -5.5,\n}\nwould increment stat1 by 10 and decrement stat2 by 5.5.\nFor the full statistics grammer see the api.braincloudservers.com site.\nThere are many more complex operations supported such as:\n{\n  stat1:INC_TO_LIMIT#9#30\n}\nwhich increments stat1 by 9 up to a limit of 30." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalStatisticsProxy_IncrementGlobalGameStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalStatisticsProxy, nullptr, "IncrementGlobalGameStat", nullptr, nullptr, sizeof(BCGlobalStatisticsProxy_eventIncrementGlobalGameStat_Parms), Z_Construct_UFunction_UBCGlobalStatisticsProxy_IncrementGlobalGameStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalStatisticsProxy_IncrementGlobalGameStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalStatisticsProxy_IncrementGlobalGameStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalStatisticsProxy_IncrementGlobalGameStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalStatisticsProxy_IncrementGlobalGameStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalStatisticsProxy_IncrementGlobalGameStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalStatisticsProxy_ProcessStatistics_Statics
	{
		struct BCGlobalStatisticsProxy_eventProcessStatistics_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString jsonData;
			UBCGlobalStatisticsProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalStatisticsProxy_ProcessStatistics_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalStatisticsProxy_eventProcessStatistics_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalStatisticsProxy_ProcessStatistics_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalStatisticsProxy_eventProcessStatistics_Parms, jsonData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalStatisticsProxy_ProcessStatistics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalStatisticsProxy_eventProcessStatistics_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalStatisticsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalStatisticsProxy_ProcessStatistics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalStatisticsProxy_ProcessStatistics_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalStatisticsProxy_ProcessStatistics_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalStatisticsProxy_ProcessStatistics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalStatisticsProxy_ProcessStatistics_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Statistics" },
		{ "Comment", "/**\n\x09* Apply statistics grammar to a partial set of statistics.\n\x09*\n\x09* Service Name - GlobalStatistics\n\x09* Service Operation - PROCESS_STATISTICS\n\x09*\n\x09* Param - jsonData The JSON format is as follows:\n\x09* {\n\x09*     \"DEAD_CATS\": \"RESET\",\n\x09*     \"LIVES_LEFT\": \"SET#9\",\n\x09*     \"MICE_KILLED\": \"INC#2\",\n\x09*     \"DOG_SCARE_BONUS_POINTS\": \"INC#10\",\n\x09*     \"TREES_CLIMBED\": 1\n\x09* }\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalStatisticsProxy.h" },
		{ "ToolTip", "Apply statistics grammar to a partial set of statistics.\n\nService Name - GlobalStatistics\nService Operation - PROCESS_STATISTICS\n\nParam - jsonData The JSON format is as follows:\n{\n    \"DEAD_CATS\": \"RESET\",\n    \"LIVES_LEFT\": \"SET#9\",\n    \"MICE_KILLED\": \"INC#2\",\n    \"DOG_SCARE_BONUS_POINTS\": \"INC#10\",\n    \"TREES_CLIMBED\": 1\n}" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalStatisticsProxy_ProcessStatistics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalStatisticsProxy, nullptr, "ProcessStatistics", nullptr, nullptr, sizeof(BCGlobalStatisticsProxy_eventProcessStatistics_Parms), Z_Construct_UFunction_UBCGlobalStatisticsProxy_ProcessStatistics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalStatisticsProxy_ProcessStatistics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalStatisticsProxy_ProcessStatistics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalStatisticsProxy_ProcessStatistics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalStatisticsProxy_ProcessStatistics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalStatisticsProxy_ProcessStatistics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadAllGlobalStats_Statics
	{
		struct BCGlobalStatisticsProxy_eventReadAllGlobalStats_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCGlobalStatisticsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadAllGlobalStats_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalStatisticsProxy_eventReadAllGlobalStats_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadAllGlobalStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalStatisticsProxy_eventReadAllGlobalStats_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalStatisticsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadAllGlobalStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadAllGlobalStats_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadAllGlobalStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadAllGlobalStats_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Statistics" },
		{ "Comment", "/**\n    * Method returns all of the global statistics.\n    *\n    * Service Name - GlobalStatistics\n    * Service Operation - Read\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalStatisticsProxy.h" },
		{ "ToolTip", "Method returns all of the global statistics.\n\nService Name - GlobalStatistics\nService Operation - Read" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadAllGlobalStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalStatisticsProxy, nullptr, "ReadAllGlobalStats", nullptr, nullptr, sizeof(BCGlobalStatisticsProxy_eventReadAllGlobalStats_Parms), Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadAllGlobalStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadAllGlobalStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadAllGlobalStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadAllGlobalStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadAllGlobalStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadAllGlobalStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsForCategory_Statics
	{
		struct BCGlobalStatisticsProxy_eventReadGlobalStatsForCategory_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString category;
			UBCGlobalStatisticsProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsForCategory_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalStatisticsProxy_eventReadGlobalStatsForCategory_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsForCategory_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalStatisticsProxy_eventReadGlobalStatsForCategory_Parms, category), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsForCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalStatisticsProxy_eventReadGlobalStatsForCategory_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalStatisticsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsForCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsForCategory_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsForCategory_Statics::NewProp_category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsForCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsForCategory_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Statistics" },
		{ "Comment", "/**\n    * Method retrieves the game (aka global) statistics for the given category.\n    *\n    * Service Name - GlobalStatistics\n    * Service Operation - ReadGameStatisticsByCategory\n    *\n    * Param - category The game statistics category\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalStatisticsProxy.h" },
		{ "ToolTip", "Method retrieves the game (aka global) statistics for the given category.\n\nService Name - GlobalStatistics\nService Operation - ReadGameStatisticsByCategory\n\nParam - category The game statistics category" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsForCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalStatisticsProxy, nullptr, "ReadGlobalStatsForCategory", nullptr, nullptr, sizeof(BCGlobalStatisticsProxy_eventReadGlobalStatsForCategory_Parms), Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsForCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsForCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsForCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsForCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsForCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsForCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset_Statics
	{
		struct BCGlobalStatisticsProxy_eventReadGlobalStatsSubset_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TArray<FString> globalStats;
			UBCGlobalStatisticsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_globalStats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_globalStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_globalStats;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalStatisticsProxy_eventReadGlobalStatsSubset_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset_Statics::NewProp_globalStats_Inner = { "globalStats", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset_Statics::NewProp_globalStats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset_Statics::NewProp_globalStats = { "globalStats", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalStatisticsProxy_eventReadGlobalStatsSubset_Parms, globalStats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset_Statics::NewProp_globalStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset_Statics::NewProp_globalStats_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalStatisticsProxy_eventReadGlobalStatsSubset_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalStatisticsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset_Statics::NewProp_globalStats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset_Statics::NewProp_globalStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Statistics" },
		{ "Comment", "/**\n    * Reads a subset of global statistics.\n    *\n    * Service Name - GlobalStatistics\n    * Service Operation - ReadSubset\n    *\n    * Param - globalStats An array of statistics to read:\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalStatisticsProxy.h" },
		{ "ToolTip", "Reads a subset of global statistics.\n\nService Name - GlobalStatistics\nService Operation - ReadSubset\n\nParam - globalStats An array of statistics to read:" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalStatisticsProxy, nullptr, "ReadGlobalStatsSubset", nullptr, nullptr, sizeof(BCGlobalStatisticsProxy_eventReadGlobalStatsSubset_Parms), Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCGlobalStatisticsProxy_NoRegister()
	{
		return UBCGlobalStatisticsProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCGlobalStatisticsProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCGlobalStatisticsProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCGlobalStatisticsProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCGlobalStatisticsProxy_IncrementGlobalGameStat, "IncrementGlobalGameStat" }, // 4107493193
		{ &Z_Construct_UFunction_UBCGlobalStatisticsProxy_ProcessStatistics, "ProcessStatistics" }, // 3662887631
		{ &Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadAllGlobalStats, "ReadAllGlobalStats" }, // 364913646
		{ &Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsForCategory, "ReadGlobalStatsForCategory" }, // 168603942
		{ &Z_Construct_UFunction_UBCGlobalStatisticsProxy_ReadGlobalStatsSubset, "ReadGlobalStatsSubset" }, // 1338191812
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCGlobalStatisticsProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCGlobalStatisticsProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalStatisticsProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCGlobalStatisticsProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCGlobalStatisticsProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCGlobalStatisticsProxy_Statics::ClassParams = {
		&UBCGlobalStatisticsProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCGlobalStatisticsProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCGlobalStatisticsProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCGlobalStatisticsProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCGlobalStatisticsProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCGlobalStatisticsProxy, 3308022943);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCGlobalStatisticsProxy>()
	{
		return UBCGlobalStatisticsProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCGlobalStatisticsProxy(Z_Construct_UClass_UBCGlobalStatisticsProxy, &UBCGlobalStatisticsProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCGlobalStatisticsProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCGlobalStatisticsProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
