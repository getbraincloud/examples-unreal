// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCGamificationProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCGamificationProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCGamificationProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCGamificationProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCGamificationProxy::execReadQuestsByCategory)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_category);
		P_GET_UBOOL(Z_Param_includeMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGamificationProxy**)Z_Param__Result=UBCGamificationProxy::ReadQuestsByCategory(Z_Param_brainCloudWrapper,Z_Param_category,Z_Param_includeMetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGamificationProxy::execReadQuestsWithComplexPercentage)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_includeMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGamificationProxy**)Z_Param__Result=UBCGamificationProxy::ReadQuestsWithComplexPercentage(Z_Param_brainCloudWrapper,Z_Param_includeMetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGamificationProxy::execReadQuestsWithBasicPercentage)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_includeMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGamificationProxy**)Z_Param__Result=UBCGamificationProxy::ReadQuestsWithBasicPercentage(Z_Param_brainCloudWrapper,Z_Param_includeMetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGamificationProxy::execReadQuestsWithStatus)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_includeMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGamificationProxy**)Z_Param__Result=UBCGamificationProxy::ReadQuestsWithStatus(Z_Param_brainCloudWrapper,Z_Param_includeMetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGamificationProxy::execReadNotStartedQuests)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_includeMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGamificationProxy**)Z_Param__Result=UBCGamificationProxy::ReadNotStartedQuests(Z_Param_brainCloudWrapper,Z_Param_includeMetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGamificationProxy::execReadInProgressQuests)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_includeMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGamificationProxy**)Z_Param__Result=UBCGamificationProxy::ReadInProgressQuests(Z_Param_brainCloudWrapper,Z_Param_includeMetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGamificationProxy::execReadCompletedQuests)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_includeMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGamificationProxy**)Z_Param__Result=UBCGamificationProxy::ReadCompletedQuests(Z_Param_brainCloudWrapper,Z_Param_includeMetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGamificationProxy::execReadQuests)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_includeMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGamificationProxy**)Z_Param__Result=UBCGamificationProxy::ReadQuests(Z_Param_brainCloudWrapper,Z_Param_includeMetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGamificationProxy::execAwardAchievements)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_TARRAY_REF(FString,Z_Param_Out_achievements);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGamificationProxy**)Z_Param__Result=UBCGamificationProxy::AwardAchievements(Z_Param_brainCloudWrapper,Z_Param_Out_achievements);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGamificationProxy::execReadMilestonesByCategory)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_category);
		P_GET_UBOOL(Z_Param_includeMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGamificationProxy**)Z_Param__Result=UBCGamificationProxy::ReadMilestonesByCategory(Z_Param_brainCloudWrapper,Z_Param_category,Z_Param_includeMetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGamificationProxy::execReadInProgressMilestones)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_includeMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGamificationProxy**)Z_Param__Result=UBCGamificationProxy::ReadInProgressMilestones(Z_Param_brainCloudWrapper,Z_Param_includeMetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGamificationProxy::execReadCompletedMilestones)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_includeMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGamificationProxy**)Z_Param__Result=UBCGamificationProxy::ReadCompletedMilestones(Z_Param_brainCloudWrapper,Z_Param_includeMetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGamificationProxy::execReadAchievedAchievements)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_includeMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGamificationProxy**)Z_Param__Result=UBCGamificationProxy::ReadAchievedAchievements(Z_Param_brainCloudWrapper,Z_Param_includeMetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGamificationProxy::execReadXpLevelsMetaData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGamificationProxy**)Z_Param__Result=UBCGamificationProxy::ReadXpLevelsMetaData(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGamificationProxy::execReadAchievements)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_includeMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGamificationProxy**)Z_Param__Result=UBCGamificationProxy::ReadAchievements(Z_Param_brainCloudWrapper,Z_Param_includeMetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGamificationProxy::execReadMilestones)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_includeMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGamificationProxy**)Z_Param__Result=UBCGamificationProxy::ReadMilestones(Z_Param_brainCloudWrapper,Z_Param_includeMetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGamificationProxy::execReadAllGamification)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_UBOOL(Z_Param_includeMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGamificationProxy**)Z_Param__Result=UBCGamificationProxy::ReadAllGamification(Z_Param_brainCloudWrapper,Z_Param_includeMetaData);
		P_NATIVE_END;
	}
	void UBCGamificationProxy::StaticRegisterNativesUBCGamificationProxy()
	{
		UClass* Class = UBCGamificationProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AwardAchievements", &UBCGamificationProxy::execAwardAchievements },
			{ "ReadAchievedAchievements", &UBCGamificationProxy::execReadAchievedAchievements },
			{ "ReadAchievements", &UBCGamificationProxy::execReadAchievements },
			{ "ReadAllGamification", &UBCGamificationProxy::execReadAllGamification },
			{ "ReadCompletedMilestones", &UBCGamificationProxy::execReadCompletedMilestones },
			{ "ReadCompletedQuests", &UBCGamificationProxy::execReadCompletedQuests },
			{ "ReadInProgressMilestones", &UBCGamificationProxy::execReadInProgressMilestones },
			{ "ReadInProgressQuests", &UBCGamificationProxy::execReadInProgressQuests },
			{ "ReadMilestones", &UBCGamificationProxy::execReadMilestones },
			{ "ReadMilestonesByCategory", &UBCGamificationProxy::execReadMilestonesByCategory },
			{ "ReadNotStartedQuests", &UBCGamificationProxy::execReadNotStartedQuests },
			{ "ReadQuests", &UBCGamificationProxy::execReadQuests },
			{ "ReadQuestsByCategory", &UBCGamificationProxy::execReadQuestsByCategory },
			{ "ReadQuestsWithBasicPercentage", &UBCGamificationProxy::execReadQuestsWithBasicPercentage },
			{ "ReadQuestsWithComplexPercentage", &UBCGamificationProxy::execReadQuestsWithComplexPercentage },
			{ "ReadQuestsWithStatus", &UBCGamificationProxy::execReadQuestsWithStatus },
			{ "ReadXpLevelsMetaData", &UBCGamificationProxy::execReadXpLevelsMetaData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements_Statics
	{
		struct BCGamificationProxy_eventAwardAchievements_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TArray<FString> achievements;
			UBCGamificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_achievements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_achievements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_achievements;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventAwardAchievements_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements_Statics::NewProp_achievements_Inner = { "achievements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements_Statics::NewProp_achievements_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements_Statics::NewProp_achievements = { "achievements", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventAwardAchievements_Parms, achievements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements_Statics::NewProp_achievements_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements_Statics::NewProp_achievements_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventAwardAchievements_Parms, ReturnValue), Z_Construct_UClass_UBCGamificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements_Statics::NewProp_achievements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements_Statics::NewProp_achievements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Gamification" },
		{ "Comment", "/**\n    * Method will award the achievements specified. On success, this will\n    * call AwardThirdPartyAchievement to hook into the client-side Achievement\n    * service (ie GameCentre, Facebook etc).\n    *\n    * Service Name - Gamification\n    * Service Operation - AwardAchievements\n    *\n    * Param - achievementIds A comma separated list of achievement ids to award\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGamificationProxy.h" },
		{ "ToolTip", "Method will award the achievements specified. On success, this will\ncall AwardThirdPartyAchievement to hook into the client-side Achievement\nservice (ie GameCentre, Facebook etc).\n\nService Name - Gamification\nService Operation - AwardAchievements\n\nParam - achievementIds A comma separated list of achievement ids to award" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGamificationProxy, nullptr, "AwardAchievements", nullptr, nullptr, sizeof(BCGamificationProxy_eventAwardAchievements_Parms), Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGamificationProxy_ReadAchievedAchievements_Statics
	{
		struct BCGamificationProxy_eventReadAchievedAchievements_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool includeMetaData;
			UBCGamificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_includeMetaData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeMetaData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadAchievedAchievements_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadAchievedAchievements_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCGamificationProxy_ReadAchievedAchievements_Statics::NewProp_includeMetaData_SetBit(void* Obj)
	{
		((BCGamificationProxy_eventReadAchievedAchievements_Parms*)Obj)->includeMetaData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadAchievedAchievements_Statics::NewProp_includeMetaData = { "includeMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCGamificationProxy_eventReadAchievedAchievements_Parms), &Z_Construct_UFunction_UBCGamificationProxy_ReadAchievedAchievements_Statics::NewProp_includeMetaData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadAchievedAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadAchievedAchievements_Parms, ReturnValue), Z_Construct_UClass_UBCGamificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGamificationProxy_ReadAchievedAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadAchievedAchievements_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadAchievedAchievements_Statics::NewProp_includeMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadAchievedAchievements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGamificationProxy_ReadAchievedAchievements_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Gamification" },
		{ "Comment", "/**\n    * Method retrives the list of achieved achievements.\n    *\n    * Service Name - Gamification\n    * Service Operation - ReadAchievedAchievements\n    */" },
		{ "CPP_Default_includeMetaData", "false" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGamificationProxy.h" },
		{ "ToolTip", "Method retrives the list of achieved achievements.\n\nService Name - Gamification\nService Operation - ReadAchievedAchievements" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGamificationProxy_ReadAchievedAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGamificationProxy, nullptr, "ReadAchievedAchievements", nullptr, nullptr, sizeof(BCGamificationProxy_eventReadAchievedAchievements_Parms), Z_Construct_UFunction_UBCGamificationProxy_ReadAchievedAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadAchievedAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGamificationProxy_ReadAchievedAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadAchievedAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGamificationProxy_ReadAchievedAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGamificationProxy_ReadAchievedAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGamificationProxy_ReadAchievements_Statics
	{
		struct BCGamificationProxy_eventReadAchievements_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool includeMetaData;
			UBCGamificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_includeMetaData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeMetaData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadAchievements_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadAchievements_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCGamificationProxy_ReadAchievements_Statics::NewProp_includeMetaData_SetBit(void* Obj)
	{
		((BCGamificationProxy_eventReadAchievements_Parms*)Obj)->includeMetaData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadAchievements_Statics::NewProp_includeMetaData = { "includeMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCGamificationProxy_eventReadAchievements_Parms), &Z_Construct_UFunction_UBCGamificationProxy_ReadAchievements_Statics::NewProp_includeMetaData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadAchievements_Parms, ReturnValue), Z_Construct_UClass_UBCGamificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGamificationProxy_ReadAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadAchievements_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadAchievements_Statics::NewProp_includeMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadAchievements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGamificationProxy_ReadAchievements_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Gamification" },
		{ "Comment", "/**\n    * Read all of the achievements defined for the game.\n    *\n    * Service Name - Gamification\n    * Service Operation - ReadAchievements\n    */" },
		{ "CPP_Default_includeMetaData", "false" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGamificationProxy.h" },
		{ "ToolTip", "Read all of the achievements defined for the game.\n\nService Name - Gamification\nService Operation - ReadAchievements" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGamificationProxy_ReadAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGamificationProxy, nullptr, "ReadAchievements", nullptr, nullptr, sizeof(BCGamificationProxy_eventReadAchievements_Parms), Z_Construct_UFunction_UBCGamificationProxy_ReadAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGamificationProxy_ReadAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGamificationProxy_ReadAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGamificationProxy_ReadAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGamificationProxy_ReadAllGamification_Statics
	{
		struct BCGamificationProxy_eventReadAllGamification_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool includeMetaData;
			UBCGamificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_includeMetaData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeMetaData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadAllGamification_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadAllGamification_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCGamificationProxy_ReadAllGamification_Statics::NewProp_includeMetaData_SetBit(void* Obj)
	{
		((BCGamificationProxy_eventReadAllGamification_Parms*)Obj)->includeMetaData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadAllGamification_Statics::NewProp_includeMetaData = { "includeMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCGamificationProxy_eventReadAllGamification_Parms), &Z_Construct_UFunction_UBCGamificationProxy_ReadAllGamification_Statics::NewProp_includeMetaData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadAllGamification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadAllGamification_Parms, ReturnValue), Z_Construct_UClass_UBCGamificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGamificationProxy_ReadAllGamification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadAllGamification_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadAllGamification_Statics::NewProp_includeMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadAllGamification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGamificationProxy_ReadAllGamification_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Gamification" },
		{ "Comment", "/**\n    * Method retrieves all gamification data for the player.\n    *\n    * Service Name - Gamification\n    * Service Operation - Read\n    */" },
		{ "CPP_Default_includeMetaData", "false" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGamificationProxy.h" },
		{ "ToolTip", "Method retrieves all gamification data for the player.\n\nService Name - Gamification\nService Operation - Read" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGamificationProxy_ReadAllGamification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGamificationProxy, nullptr, "ReadAllGamification", nullptr, nullptr, sizeof(BCGamificationProxy_eventReadAllGamification_Parms), Z_Construct_UFunction_UBCGamificationProxy_ReadAllGamification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadAllGamification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGamificationProxy_ReadAllGamification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadAllGamification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGamificationProxy_ReadAllGamification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGamificationProxy_ReadAllGamification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedMilestones_Statics
	{
		struct BCGamificationProxy_eventReadCompletedMilestones_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool includeMetaData;
			UBCGamificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_includeMetaData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeMetaData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedMilestones_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadCompletedMilestones_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedMilestones_Statics::NewProp_includeMetaData_SetBit(void* Obj)
	{
		((BCGamificationProxy_eventReadCompletedMilestones_Parms*)Obj)->includeMetaData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedMilestones_Statics::NewProp_includeMetaData = { "includeMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCGamificationProxy_eventReadCompletedMilestones_Parms), &Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedMilestones_Statics::NewProp_includeMetaData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedMilestones_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadCompletedMilestones_Parms, ReturnValue), Z_Construct_UClass_UBCGamificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedMilestones_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedMilestones_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedMilestones_Statics::NewProp_includeMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedMilestones_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedMilestones_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Gamification" },
		{ "Comment", "/**\n    * Method retrieves the list of completed milestones.\n    *\n    * Service Name - Gamification\n    * Service Operation - ReadCompleteMilestones\n    */" },
		{ "CPP_Default_includeMetaData", "false" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGamificationProxy.h" },
		{ "ToolTip", "Method retrieves the list of completed milestones.\n\nService Name - Gamification\nService Operation - ReadCompleteMilestones" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedMilestones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGamificationProxy, nullptr, "ReadCompletedMilestones", nullptr, nullptr, sizeof(BCGamificationProxy_eventReadCompletedMilestones_Parms), Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedMilestones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedMilestones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedMilestones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedMilestones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedMilestones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedMilestones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedQuests_Statics
	{
		struct BCGamificationProxy_eventReadCompletedQuests_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool includeMetaData;
			UBCGamificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_includeMetaData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeMetaData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedQuests_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadCompletedQuests_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedQuests_Statics::NewProp_includeMetaData_SetBit(void* Obj)
	{
		((BCGamificationProxy_eventReadCompletedQuests_Parms*)Obj)->includeMetaData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedQuests_Statics::NewProp_includeMetaData = { "includeMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCGamificationProxy_eventReadCompletedQuests_Parms), &Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedQuests_Statics::NewProp_includeMetaData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadCompletedQuests_Parms, ReturnValue), Z_Construct_UClass_UBCGamificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedQuests_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedQuests_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedQuests_Statics::NewProp_includeMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedQuests_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedQuests_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Gamification" },
		{ "Comment", "/**\n    *  Method returns all completed quests.\n    *\n    * Service Name - Gamification\n    * Service Operation - ReadCompletedQuests\n    */" },
		{ "CPP_Default_includeMetaData", "false" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGamificationProxy.h" },
		{ "ToolTip", "Method returns all completed quests.\n\nService Name - Gamification\nService Operation - ReadCompletedQuests" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGamificationProxy, nullptr, "ReadCompletedQuests", nullptr, nullptr, sizeof(BCGamificationProxy_eventReadCompletedQuests_Parms), Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedQuests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedQuests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedQuests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedQuests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedQuests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressMilestones_Statics
	{
		struct BCGamificationProxy_eventReadInProgressMilestones_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool includeMetaData;
			UBCGamificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_includeMetaData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeMetaData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressMilestones_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadInProgressMilestones_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressMilestones_Statics::NewProp_includeMetaData_SetBit(void* Obj)
	{
		((BCGamificationProxy_eventReadInProgressMilestones_Parms*)Obj)->includeMetaData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressMilestones_Statics::NewProp_includeMetaData = { "includeMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCGamificationProxy_eventReadInProgressMilestones_Parms), &Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressMilestones_Statics::NewProp_includeMetaData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressMilestones_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadInProgressMilestones_Parms, ReturnValue), Z_Construct_UClass_UBCGamificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressMilestones_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressMilestones_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressMilestones_Statics::NewProp_includeMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressMilestones_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressMilestones_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Gamification" },
		{ "Comment", "/**\n    * Method retrieves the list of in progress milestones\n    *\n    * Service Name - Gamification\n    * Service Operation - ReadInProgressMilestones\n    */" },
		{ "CPP_Default_includeMetaData", "false" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGamificationProxy.h" },
		{ "ToolTip", "Method retrieves the list of in progress milestones\n\nService Name - Gamification\nService Operation - ReadInProgressMilestones" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressMilestones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGamificationProxy, nullptr, "ReadInProgressMilestones", nullptr, nullptr, sizeof(BCGamificationProxy_eventReadInProgressMilestones_Parms), Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressMilestones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressMilestones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressMilestones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressMilestones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressMilestones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressMilestones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressQuests_Statics
	{
		struct BCGamificationProxy_eventReadInProgressQuests_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool includeMetaData;
			UBCGamificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_includeMetaData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeMetaData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressQuests_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadInProgressQuests_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressQuests_Statics::NewProp_includeMetaData_SetBit(void* Obj)
	{
		((BCGamificationProxy_eventReadInProgressQuests_Parms*)Obj)->includeMetaData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressQuests_Statics::NewProp_includeMetaData = { "includeMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCGamificationProxy_eventReadInProgressQuests_Parms), &Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressQuests_Statics::NewProp_includeMetaData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadInProgressQuests_Parms, ReturnValue), Z_Construct_UClass_UBCGamificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressQuests_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressQuests_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressQuests_Statics::NewProp_includeMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressQuests_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressQuests_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Gamification" },
		{ "Comment", "/**\n    *  Method returns quests that are in progress.\n    *\n    * Service Name - Gamification\n    * Service Operation - ReadInProgressQuests\n    */" },
		{ "CPP_Default_includeMetaData", "false" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGamificationProxy.h" },
		{ "ToolTip", "Method returns quests that are in progress.\n\nService Name - Gamification\nService Operation - ReadInProgressQuests" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGamificationProxy, nullptr, "ReadInProgressQuests", nullptr, nullptr, sizeof(BCGamificationProxy_eventReadInProgressQuests_Parms), Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressQuests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressQuests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressQuests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressQuests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressQuests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGamificationProxy_ReadMilestones_Statics
	{
		struct BCGamificationProxy_eventReadMilestones_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool includeMetaData;
			UBCGamificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_includeMetaData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeMetaData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadMilestones_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadMilestones_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCGamificationProxy_ReadMilestones_Statics::NewProp_includeMetaData_SetBit(void* Obj)
	{
		((BCGamificationProxy_eventReadMilestones_Parms*)Obj)->includeMetaData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadMilestones_Statics::NewProp_includeMetaData = { "includeMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCGamificationProxy_eventReadMilestones_Parms), &Z_Construct_UFunction_UBCGamificationProxy_ReadMilestones_Statics::NewProp_includeMetaData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadMilestones_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadMilestones_Parms, ReturnValue), Z_Construct_UClass_UBCGamificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGamificationProxy_ReadMilestones_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadMilestones_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadMilestones_Statics::NewProp_includeMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadMilestones_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGamificationProxy_ReadMilestones_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Gamification" },
		{ "Comment", "/**\n    * Method retrieves all milestones defined for the game.\n    *\n    * Service Name - Gamification\n    * Service Operation - ReadMilestones\n    */" },
		{ "CPP_Default_includeMetaData", "false" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGamificationProxy.h" },
		{ "ToolTip", "Method retrieves all milestones defined for the game.\n\nService Name - Gamification\nService Operation - ReadMilestones" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGamificationProxy_ReadMilestones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGamificationProxy, nullptr, "ReadMilestones", nullptr, nullptr, sizeof(BCGamificationProxy_eventReadMilestones_Parms), Z_Construct_UFunction_UBCGamificationProxy_ReadMilestones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadMilestones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGamificationProxy_ReadMilestones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadMilestones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGamificationProxy_ReadMilestones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGamificationProxy_ReadMilestones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory_Statics
	{
		struct BCGamificationProxy_eventReadMilestonesByCategory_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString category;
			bool includeMetaData;
			UBCGamificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_category;
		static void NewProp_includeMetaData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeMetaData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadMilestonesByCategory_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadMilestonesByCategory_Parms, category), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory_Statics::NewProp_includeMetaData_SetBit(void* Obj)
	{
		((BCGamificationProxy_eventReadMilestonesByCategory_Parms*)Obj)->includeMetaData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory_Statics::NewProp_includeMetaData = { "includeMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCGamificationProxy_eventReadMilestonesByCategory_Parms), &Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory_Statics::NewProp_includeMetaData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadMilestonesByCategory_Parms, ReturnValue), Z_Construct_UClass_UBCGamificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory_Statics::NewProp_category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory_Statics::NewProp_includeMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Gamification" },
		{ "Comment", "/**\n    * Method retrieves milestones of the given category.\n    *\n    * Service Name - Gamification\n    * Service Operation - ReadMilestonesByCategory\n    *\n    * Param - category The milestone category\n    */" },
		{ "CPP_Default_includeMetaData", "false" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGamificationProxy.h" },
		{ "ToolTip", "Method retrieves milestones of the given category.\n\nService Name - Gamification\nService Operation - ReadMilestonesByCategory\n\nParam - category The milestone category" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGamificationProxy, nullptr, "ReadMilestonesByCategory", nullptr, nullptr, sizeof(BCGamificationProxy_eventReadMilestonesByCategory_Parms), Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGamificationProxy_ReadNotStartedQuests_Statics
	{
		struct BCGamificationProxy_eventReadNotStartedQuests_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool includeMetaData;
			UBCGamificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_includeMetaData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeMetaData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadNotStartedQuests_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadNotStartedQuests_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCGamificationProxy_ReadNotStartedQuests_Statics::NewProp_includeMetaData_SetBit(void* Obj)
	{
		((BCGamificationProxy_eventReadNotStartedQuests_Parms*)Obj)->includeMetaData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadNotStartedQuests_Statics::NewProp_includeMetaData = { "includeMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCGamificationProxy_eventReadNotStartedQuests_Parms), &Z_Construct_UFunction_UBCGamificationProxy_ReadNotStartedQuests_Statics::NewProp_includeMetaData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadNotStartedQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadNotStartedQuests_Parms, ReturnValue), Z_Construct_UClass_UBCGamificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGamificationProxy_ReadNotStartedQuests_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadNotStartedQuests_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadNotStartedQuests_Statics::NewProp_includeMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadNotStartedQuests_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGamificationProxy_ReadNotStartedQuests_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Gamification" },
		{ "Comment", "/**\n    *  Method returns quests that have not been started.\n    *\n    * Service Name - Gamification\n    * Service Operation - ReadNotStartedQuests\n    */" },
		{ "CPP_Default_includeMetaData", "false" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGamificationProxy.h" },
		{ "ToolTip", "Method returns quests that have not been started.\n\nService Name - Gamification\nService Operation - ReadNotStartedQuests" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGamificationProxy_ReadNotStartedQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGamificationProxy, nullptr, "ReadNotStartedQuests", nullptr, nullptr, sizeof(BCGamificationProxy_eventReadNotStartedQuests_Parms), Z_Construct_UFunction_UBCGamificationProxy_ReadNotStartedQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadNotStartedQuests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGamificationProxy_ReadNotStartedQuests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadNotStartedQuests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGamificationProxy_ReadNotStartedQuests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGamificationProxy_ReadNotStartedQuests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGamificationProxy_ReadQuests_Statics
	{
		struct BCGamificationProxy_eventReadQuests_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool includeMetaData;
			UBCGamificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_includeMetaData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeMetaData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuests_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadQuests_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCGamificationProxy_ReadQuests_Statics::NewProp_includeMetaData_SetBit(void* Obj)
	{
		((BCGamificationProxy_eventReadQuests_Parms*)Obj)->includeMetaData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuests_Statics::NewProp_includeMetaData = { "includeMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCGamificationProxy_eventReadQuests_Parms), &Z_Construct_UFunction_UBCGamificationProxy_ReadQuests_Statics::NewProp_includeMetaData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadQuests_Parms, ReturnValue), Z_Construct_UClass_UBCGamificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGamificationProxy_ReadQuests_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadQuests_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadQuests_Statics::NewProp_includeMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadQuests_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGamificationProxy_ReadQuests_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Gamification" },
		{ "Comment", "/**\n    * Method retrieves all of the quests defined for the game.\n    *\n    * Service Name - Gamification\n    * Service Operation - ReadQuests\n    */" },
		{ "CPP_Default_includeMetaData", "false" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGamificationProxy.h" },
		{ "ToolTip", "Method retrieves all of the quests defined for the game.\n\nService Name - Gamification\nService Operation - ReadQuests" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGamificationProxy, nullptr, "ReadQuests", nullptr, nullptr, sizeof(BCGamificationProxy_eventReadQuests_Parms), Z_Construct_UFunction_UBCGamificationProxy_ReadQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadQuests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGamificationProxy_ReadQuests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadQuests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGamificationProxy_ReadQuests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGamificationProxy_ReadQuests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory_Statics
	{
		struct BCGamificationProxy_eventReadQuestsByCategory_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString category;
			bool includeMetaData;
			UBCGamificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_category;
		static void NewProp_includeMetaData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeMetaData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadQuestsByCategory_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadQuestsByCategory_Parms, category), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory_Statics::NewProp_includeMetaData_SetBit(void* Obj)
	{
		((BCGamificationProxy_eventReadQuestsByCategory_Parms*)Obj)->includeMetaData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory_Statics::NewProp_includeMetaData = { "includeMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCGamificationProxy_eventReadQuestsByCategory_Parms), &Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory_Statics::NewProp_includeMetaData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadQuestsByCategory_Parms, ReturnValue), Z_Construct_UClass_UBCGamificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory_Statics::NewProp_category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory_Statics::NewProp_includeMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Gamification" },
		{ "Comment", "/**\n    * Method returns quests for the given category.\n    *\n    * Service Name - Gamification\n    * Service Operation - ReadQuestsByCategory\n    *\n    * Param - category The quest category\n    */" },
		{ "CPP_Default_includeMetaData", "false" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGamificationProxy.h" },
		{ "ToolTip", "Method returns quests for the given category.\n\nService Name - Gamification\nService Operation - ReadQuestsByCategory\n\nParam - category The quest category" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGamificationProxy, nullptr, "ReadQuestsByCategory", nullptr, nullptr, sizeof(BCGamificationProxy_eventReadQuestsByCategory_Parms), Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithBasicPercentage_Statics
	{
		struct BCGamificationProxy_eventReadQuestsWithBasicPercentage_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool includeMetaData;
			UBCGamificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_includeMetaData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeMetaData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithBasicPercentage_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadQuestsWithBasicPercentage_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithBasicPercentage_Statics::NewProp_includeMetaData_SetBit(void* Obj)
	{
		((BCGamificationProxy_eventReadQuestsWithBasicPercentage_Parms*)Obj)->includeMetaData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithBasicPercentage_Statics::NewProp_includeMetaData = { "includeMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCGamificationProxy_eventReadQuestsWithBasicPercentage_Parms), &Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithBasicPercentage_Statics::NewProp_includeMetaData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithBasicPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadQuestsWithBasicPercentage_Parms, ReturnValue), Z_Construct_UClass_UBCGamificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithBasicPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithBasicPercentage_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithBasicPercentage_Statics::NewProp_includeMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithBasicPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithBasicPercentage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Gamification" },
		{ "Comment", "/**\n    *  Method returns quests with a basic percentage.\n    *\n    * Service Name - Gamification\n    * Service Operation - ReadQuestsWithBasicPercentage\n    */" },
		{ "CPP_Default_includeMetaData", "false" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGamificationProxy.h" },
		{ "ToolTip", "Method returns quests with a basic percentage.\n\nService Name - Gamification\nService Operation - ReadQuestsWithBasicPercentage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithBasicPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGamificationProxy, nullptr, "ReadQuestsWithBasicPercentage", nullptr, nullptr, sizeof(BCGamificationProxy_eventReadQuestsWithBasicPercentage_Parms), Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithBasicPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithBasicPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithBasicPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithBasicPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithBasicPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithBasicPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithComplexPercentage_Statics
	{
		struct BCGamificationProxy_eventReadQuestsWithComplexPercentage_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool includeMetaData;
			UBCGamificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_includeMetaData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeMetaData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithComplexPercentage_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadQuestsWithComplexPercentage_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithComplexPercentage_Statics::NewProp_includeMetaData_SetBit(void* Obj)
	{
		((BCGamificationProxy_eventReadQuestsWithComplexPercentage_Parms*)Obj)->includeMetaData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithComplexPercentage_Statics::NewProp_includeMetaData = { "includeMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCGamificationProxy_eventReadQuestsWithComplexPercentage_Parms), &Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithComplexPercentage_Statics::NewProp_includeMetaData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithComplexPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadQuestsWithComplexPercentage_Parms, ReturnValue), Z_Construct_UClass_UBCGamificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithComplexPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithComplexPercentage_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithComplexPercentage_Statics::NewProp_includeMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithComplexPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithComplexPercentage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Gamification" },
		{ "Comment", "/**\n    *  Method returns quests with a complex percentage.\n    *\n    * Service Name - Gamification\n    * Service Operation - ReadQuestsWithComplexPercentage\n    */" },
		{ "CPP_Default_includeMetaData", "false" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGamificationProxy.h" },
		{ "ToolTip", "Method returns quests with a complex percentage.\n\nService Name - Gamification\nService Operation - ReadQuestsWithComplexPercentage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithComplexPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGamificationProxy, nullptr, "ReadQuestsWithComplexPercentage", nullptr, nullptr, sizeof(BCGamificationProxy_eventReadQuestsWithComplexPercentage_Parms), Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithComplexPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithComplexPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithComplexPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithComplexPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithComplexPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithComplexPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithStatus_Statics
	{
		struct BCGamificationProxy_eventReadQuestsWithStatus_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			bool includeMetaData;
			UBCGamificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static void NewProp_includeMetaData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeMetaData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithStatus_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadQuestsWithStatus_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithStatus_Statics::NewProp_includeMetaData_SetBit(void* Obj)
	{
		((BCGamificationProxy_eventReadQuestsWithStatus_Parms*)Obj)->includeMetaData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithStatus_Statics::NewProp_includeMetaData = { "includeMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCGamificationProxy_eventReadQuestsWithStatus_Parms), &Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithStatus_Statics::NewProp_includeMetaData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadQuestsWithStatus_Parms, ReturnValue), Z_Construct_UClass_UBCGamificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithStatus_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithStatus_Statics::NewProp_includeMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithStatus_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Gamification" },
		{ "Comment", "/**\n    *  Method returns quests with a status.\n    *\n    * Service Name - Gamification\n    * Service Operation - ReadQuestsWithStatus\n    */" },
		{ "CPP_Default_includeMetaData", "false" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGamificationProxy.h" },
		{ "ToolTip", "Method returns quests with a status.\n\nService Name - Gamification\nService Operation - ReadQuestsWithStatus" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGamificationProxy, nullptr, "ReadQuestsWithStatus", nullptr, nullptr, sizeof(BCGamificationProxy_eventReadQuestsWithStatus_Parms), Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGamificationProxy_ReadXpLevelsMetaData_Statics
	{
		struct BCGamificationProxy_eventReadXpLevelsMetaData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCGamificationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadXpLevelsMetaData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadXpLevelsMetaData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGamificationProxy_ReadXpLevelsMetaData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGamificationProxy_eventReadXpLevelsMetaData_Parms, ReturnValue), Z_Construct_UClass_UBCGamificationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGamificationProxy_ReadXpLevelsMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadXpLevelsMetaData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGamificationProxy_ReadXpLevelsMetaData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGamificationProxy_ReadXpLevelsMetaData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Gamification" },
		{ "Comment", "/**\n    * Method returns all defined xp levels and any rewards associated\n    * with those xp levels.\n    *\n    * Service Name - Gamification\n    * Service Operation - ReadXpLevels\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGamificationProxy.h" },
		{ "ToolTip", "Method returns all defined xp levels and any rewards associated\nwith those xp levels.\n\nService Name - Gamification\nService Operation - ReadXpLevels" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGamificationProxy_ReadXpLevelsMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGamificationProxy, nullptr, "ReadXpLevelsMetaData", nullptr, nullptr, sizeof(BCGamificationProxy_eventReadXpLevelsMetaData_Parms), Z_Construct_UFunction_UBCGamificationProxy_ReadXpLevelsMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadXpLevelsMetaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGamificationProxy_ReadXpLevelsMetaData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGamificationProxy_ReadXpLevelsMetaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGamificationProxy_ReadXpLevelsMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGamificationProxy_ReadXpLevelsMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCGamificationProxy_NoRegister()
	{
		return UBCGamificationProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCGamificationProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCGamificationProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCGamificationProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCGamificationProxy_AwardAchievements, "AwardAchievements" }, // 4025177380
		{ &Z_Construct_UFunction_UBCGamificationProxy_ReadAchievedAchievements, "ReadAchievedAchievements" }, // 3435459623
		{ &Z_Construct_UFunction_UBCGamificationProxy_ReadAchievements, "ReadAchievements" }, // 3327183438
		{ &Z_Construct_UFunction_UBCGamificationProxy_ReadAllGamification, "ReadAllGamification" }, // 2317248432
		{ &Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedMilestones, "ReadCompletedMilestones" }, // 4013424712
		{ &Z_Construct_UFunction_UBCGamificationProxy_ReadCompletedQuests, "ReadCompletedQuests" }, // 2694220755
		{ &Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressMilestones, "ReadInProgressMilestones" }, // 3536175125
		{ &Z_Construct_UFunction_UBCGamificationProxy_ReadInProgressQuests, "ReadInProgressQuests" }, // 1475364913
		{ &Z_Construct_UFunction_UBCGamificationProxy_ReadMilestones, "ReadMilestones" }, // 1070933627
		{ &Z_Construct_UFunction_UBCGamificationProxy_ReadMilestonesByCategory, "ReadMilestonesByCategory" }, // 2209517581
		{ &Z_Construct_UFunction_UBCGamificationProxy_ReadNotStartedQuests, "ReadNotStartedQuests" }, // 3002860314
		{ &Z_Construct_UFunction_UBCGamificationProxy_ReadQuests, "ReadQuests" }, // 3953610440
		{ &Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsByCategory, "ReadQuestsByCategory" }, // 3124335907
		{ &Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithBasicPercentage, "ReadQuestsWithBasicPercentage" }, // 3372613583
		{ &Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithComplexPercentage, "ReadQuestsWithComplexPercentage" }, // 1989576882
		{ &Z_Construct_UFunction_UBCGamificationProxy_ReadQuestsWithStatus, "ReadQuestsWithStatus" }, // 2283538027
		{ &Z_Construct_UFunction_UBCGamificationProxy_ReadXpLevelsMetaData, "ReadXpLevelsMetaData" }, // 3000680805
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCGamificationProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCGamificationProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGamificationProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCGamificationProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCGamificationProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCGamificationProxy_Statics::ClassParams = {
		&UBCGamificationProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCGamificationProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCGamificationProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCGamificationProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCGamificationProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCGamificationProxy, 286777663);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCGamificationProxy>()
	{
		return UBCGamificationProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCGamificationProxy(Z_Construct_UClass_UBCGamificationProxy, &UBCGamificationProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCGamificationProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCGamificationProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
