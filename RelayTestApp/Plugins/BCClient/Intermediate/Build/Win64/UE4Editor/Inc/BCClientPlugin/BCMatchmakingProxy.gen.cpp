// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCMatchmakingProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCMatchmakingProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCMatchmakingProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCMatchmakingProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCMatchmakingProxy::execDisableMatchMaking)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloud);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMatchmakingProxy**)Z_Param__Result=UBCMatchmakingProxy::DisableMatchMaking(Z_Param_brainCloud);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMatchmakingProxy::execEnableMatchMaking)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMatchmakingProxy**)Z_Param__Result=UBCMatchmakingProxy::EnableMatchMaking(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMatchmakingProxy::execFindPlayersWithAttributesUsingFilter)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FIntProperty,Z_Param_rangeDelta);
		P_GET_PROPERTY(FIntProperty,Z_Param_numMatches);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonAttributes);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonExtraParms);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMatchmakingProxy**)Z_Param__Result=UBCMatchmakingProxy::FindPlayersWithAttributesUsingFilter(Z_Param_brainCloudWrapper,Z_Param_rangeDelta,Z_Param_numMatches,Z_Param_jsonAttributes,Z_Param_jsonExtraParms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMatchmakingProxy::execFindPlayersUsingFilter)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FIntProperty,Z_Param_rangeDelta);
		P_GET_PROPERTY(FIntProperty,Z_Param_numMatches);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonExtraParms);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMatchmakingProxy**)Z_Param__Result=UBCMatchmakingProxy::FindPlayersUsingFilter(Z_Param_brainCloudWrapper,Z_Param_rangeDelta,Z_Param_numMatches,Z_Param_jsonExtraParms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMatchmakingProxy::execFindPlayersWithAttributes)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FIntProperty,Z_Param_rangeDelta);
		P_GET_PROPERTY(FIntProperty,Z_Param_numMatches);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonAttributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMatchmakingProxy**)Z_Param__Result=UBCMatchmakingProxy::FindPlayersWithAttributes(Z_Param_brainCloudWrapper,Z_Param_rangeDelta,Z_Param_numMatches,Z_Param_jsonAttributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMatchmakingProxy::execFindPlayers)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FIntProperty,Z_Param_rangeDelta);
		P_GET_PROPERTY(FIntProperty,Z_Param_numMatches);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMatchmakingProxy**)Z_Param__Result=UBCMatchmakingProxy::FindPlayers(Z_Param_brainCloudWrapper,Z_Param_rangeDelta,Z_Param_numMatches);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMatchmakingProxy::execIncrementShieldOnFor)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FIntProperty,Z_Param_minutes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMatchmakingProxy**)Z_Param__Result=UBCMatchmakingProxy::IncrementShieldOnFor(Z_Param_brainCloudWrapper,Z_Param_minutes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMatchmakingProxy::execTurnShieldOff)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMatchmakingProxy**)Z_Param__Result=UBCMatchmakingProxy::TurnShieldOff(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMatchmakingProxy::execTurnShieldOnFor)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FIntProperty,Z_Param_minutes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMatchmakingProxy**)Z_Param__Result=UBCMatchmakingProxy::TurnShieldOnFor(Z_Param_brainCloudWrapper,Z_Param_minutes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMatchmakingProxy::execTurnShieldOn)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMatchmakingProxy**)Z_Param__Result=UBCMatchmakingProxy::TurnShieldOn(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMatchmakingProxy::execDecrementPlayerRating)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FIntProperty,Z_Param_decrement);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMatchmakingProxy**)Z_Param__Result=UBCMatchmakingProxy::DecrementPlayerRating(Z_Param_brainCloudWrapper,Z_Param_decrement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMatchmakingProxy::execIncrementPlayerRating)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FIntProperty,Z_Param_increment);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMatchmakingProxy**)Z_Param__Result=UBCMatchmakingProxy::IncrementPlayerRating(Z_Param_brainCloudWrapper,Z_Param_increment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMatchmakingProxy::execResetPlayerRating)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMatchmakingProxy**)Z_Param__Result=UBCMatchmakingProxy::ResetPlayerRating(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMatchmakingProxy::execSetPlayerRating)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FIntProperty,Z_Param_playerRating);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMatchmakingProxy**)Z_Param__Result=UBCMatchmakingProxy::SetPlayerRating(Z_Param_brainCloudWrapper,Z_Param_playerRating);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMatchmakingProxy::execRead)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMatchmakingProxy**)Z_Param__Result=UBCMatchmakingProxy::Read(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	void UBCMatchmakingProxy::StaticRegisterNativesUBCMatchmakingProxy()
	{
		UClass* Class = UBCMatchmakingProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecrementPlayerRating", &UBCMatchmakingProxy::execDecrementPlayerRating },
			{ "DisableMatchMaking", &UBCMatchmakingProxy::execDisableMatchMaking },
			{ "EnableMatchMaking", &UBCMatchmakingProxy::execEnableMatchMaking },
			{ "FindPlayers", &UBCMatchmakingProxy::execFindPlayers },
			{ "FindPlayersUsingFilter", &UBCMatchmakingProxy::execFindPlayersUsingFilter },
			{ "FindPlayersWithAttributes", &UBCMatchmakingProxy::execFindPlayersWithAttributes },
			{ "FindPlayersWithAttributesUsingFilter", &UBCMatchmakingProxy::execFindPlayersWithAttributesUsingFilter },
			{ "IncrementPlayerRating", &UBCMatchmakingProxy::execIncrementPlayerRating },
			{ "IncrementShieldOnFor", &UBCMatchmakingProxy::execIncrementShieldOnFor },
			{ "Read", &UBCMatchmakingProxy::execRead },
			{ "ResetPlayerRating", &UBCMatchmakingProxy::execResetPlayerRating },
			{ "SetPlayerRating", &UBCMatchmakingProxy::execSetPlayerRating },
			{ "TurnShieldOff", &UBCMatchmakingProxy::execTurnShieldOff },
			{ "TurnShieldOn", &UBCMatchmakingProxy::execTurnShieldOn },
			{ "TurnShieldOnFor", &UBCMatchmakingProxy::execTurnShieldOnFor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCMatchmakingProxy_DecrementPlayerRating_Statics
	{
		struct BCMatchmakingProxy_eventDecrementPlayerRating_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 decrement;
			UBCMatchmakingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_decrement;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_DecrementPlayerRating_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventDecrementPlayerRating_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_DecrementPlayerRating_Statics::NewProp_decrement = { "decrement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventDecrementPlayerRating_Parms, decrement), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_DecrementPlayerRating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventDecrementPlayerRating_Parms, ReturnValue), Z_Construct_UClass_UBCMatchmakingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMatchmakingProxy_DecrementPlayerRating_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_DecrementPlayerRating_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_DecrementPlayerRating_Statics::NewProp_decrement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_DecrementPlayerRating_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMatchmakingProxy_DecrementPlayerRating_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Matchmaking" },
		{ "Comment", "/**\n    * Decrements player rating\n    *\n    * Service Name - MatchMaking\n    * Service Operation - DecrementPlayerRating\n    *\n    * Param - decrement The decrement amount\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMatchmakingProxy.h" },
		{ "ToolTip", "Decrements player rating\n\nService Name - MatchMaking\nService Operation - DecrementPlayerRating\n\nParam - decrement The decrement amount" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMatchmakingProxy_DecrementPlayerRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMatchmakingProxy, nullptr, "DecrementPlayerRating", nullptr, nullptr, sizeof(BCMatchmakingProxy_eventDecrementPlayerRating_Parms), Z_Construct_UFunction_UBCMatchmakingProxy_DecrementPlayerRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_DecrementPlayerRating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMatchmakingProxy_DecrementPlayerRating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_DecrementPlayerRating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMatchmakingProxy_DecrementPlayerRating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMatchmakingProxy_DecrementPlayerRating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMatchmakingProxy_DisableMatchMaking_Statics
	{
		struct BCMatchmakingProxy_eventDisableMatchMaking_Parms
		{
			UBrainCloudWrapper* brainCloud;
			UBCMatchmakingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloud;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_DisableMatchMaking_Statics::NewProp_brainCloud = { "brainCloud", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventDisableMatchMaking_Parms, brainCloud), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_DisableMatchMaking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventDisableMatchMaking_Parms, ReturnValue), Z_Construct_UClass_UBCMatchmakingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMatchmakingProxy_DisableMatchMaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_DisableMatchMaking_Statics::NewProp_brainCloud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_DisableMatchMaking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMatchmakingProxy_DisableMatchMaking_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Matchmaking" },
		{ "Comment", "/**\n    * Disables Match Making for the Player\n    *\n    * Service Name - MatchMaking\n    * Service Operation - EnableMatchMaking\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMatchmakingProxy.h" },
		{ "ToolTip", "Disables Match Making for the Player\n\nService Name - MatchMaking\nService Operation - EnableMatchMaking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMatchmakingProxy_DisableMatchMaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMatchmakingProxy, nullptr, "DisableMatchMaking", nullptr, nullptr, sizeof(BCMatchmakingProxy_eventDisableMatchMaking_Parms), Z_Construct_UFunction_UBCMatchmakingProxy_DisableMatchMaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_DisableMatchMaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMatchmakingProxy_DisableMatchMaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_DisableMatchMaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMatchmakingProxy_DisableMatchMaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMatchmakingProxy_DisableMatchMaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMatchmakingProxy_EnableMatchMaking_Statics
	{
		struct BCMatchmakingProxy_eventEnableMatchMaking_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCMatchmakingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_EnableMatchMaking_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventEnableMatchMaking_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_EnableMatchMaking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventEnableMatchMaking_Parms, ReturnValue), Z_Construct_UClass_UBCMatchmakingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMatchmakingProxy_EnableMatchMaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_EnableMatchMaking_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_EnableMatchMaking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMatchmakingProxy_EnableMatchMaking_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Matchmaking" },
		{ "Comment", "/**\n    * Enables Match Making for the Player\n    *\n    * Service Name - MatchMaking\n    * Service Operation - EnableMatchMaking\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMatchmakingProxy.h" },
		{ "ToolTip", "Enables Match Making for the Player\n\nService Name - MatchMaking\nService Operation - EnableMatchMaking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMatchmakingProxy_EnableMatchMaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMatchmakingProxy, nullptr, "EnableMatchMaking", nullptr, nullptr, sizeof(BCMatchmakingProxy_eventEnableMatchMaking_Parms), Z_Construct_UFunction_UBCMatchmakingProxy_EnableMatchMaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_EnableMatchMaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMatchmakingProxy_EnableMatchMaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_EnableMatchMaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMatchmakingProxy_EnableMatchMaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMatchmakingProxy_EnableMatchMaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayers_Statics
	{
		struct BCMatchmakingProxy_eventFindPlayers_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 rangeDelta;
			int32 numMatches;
			UBCMatchmakingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rangeDelta;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numMatches;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayers_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventFindPlayers_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayers_Statics::NewProp_rangeDelta = { "rangeDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventFindPlayers_Parms, rangeDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayers_Statics::NewProp_numMatches = { "numMatches", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventFindPlayers_Parms, numMatches), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventFindPlayers_Parms, ReturnValue), Z_Construct_UClass_UBCMatchmakingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayers_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayers_Statics::NewProp_rangeDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayers_Statics::NewProp_numMatches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayers_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Matchmaking" },
		{ "Comment", "/**\n    * Finds matchmaking enabled players\n    *\n    * Service Name - MatchMaking\n    * Service Operation - FindPlayers\n    *\n    * Param - rangeDelta The range delta\n    * Param - numMatches The maximum number of matches to return\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMatchmakingProxy.h" },
		{ "ToolTip", "Finds matchmaking enabled players\n\nService Name - MatchMaking\nService Operation - FindPlayers\n\nParam - rangeDelta The range delta\nParam - numMatches The maximum number of matches to return" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMatchmakingProxy, nullptr, "FindPlayers", nullptr, nullptr, sizeof(BCMatchmakingProxy_eventFindPlayers_Parms), Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics
	{
		struct BCMatchmakingProxy_eventFindPlayersUsingFilter_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 rangeDelta;
			int32 numMatches;
			FString jsonExtraParms;
			UBCMatchmakingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rangeDelta;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numMatches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonExtraParms_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonExtraParms;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventFindPlayersUsingFilter_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::NewProp_rangeDelta = { "rangeDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventFindPlayersUsingFilter_Parms, rangeDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::NewProp_numMatches = { "numMatches", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventFindPlayersUsingFilter_Parms, numMatches), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::NewProp_jsonExtraParms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::NewProp_jsonExtraParms = { "jsonExtraParms", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventFindPlayersUsingFilter_Parms, jsonExtraParms), METADATA_PARAMS(Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::NewProp_jsonExtraParms_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::NewProp_jsonExtraParms_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventFindPlayersUsingFilter_Parms, ReturnValue), Z_Construct_UClass_UBCMatchmakingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::NewProp_rangeDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::NewProp_numMatches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::NewProp_jsonExtraParms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Matchmaking" },
		{ "Comment", "/**\n    * Finds matchmaking enabled players\n    *\n    * Service Name - MatchMaking\n    * Service Operation - FindPlayersUsingFilter\n    *\n    * Param - rangeDelta The range delta\n    * Param - numMatches The maximum number of matches to return\n    * Param - jsonExtraParms Other parameters\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMatchmakingProxy.h" },
		{ "ToolTip", "Finds matchmaking enabled players\n\nService Name - MatchMaking\nService Operation - FindPlayersUsingFilter\n\nParam - rangeDelta The range delta\nParam - numMatches The maximum number of matches to return\nParam - jsonExtraParms Other parameters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMatchmakingProxy, nullptr, "FindPlayersUsingFilter", nullptr, nullptr, sizeof(BCMatchmakingProxy_eventFindPlayersUsingFilter_Parms), Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics
	{
		struct BCMatchmakingProxy_eventFindPlayersWithAttributes_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 rangeDelta;
			int32 numMatches;
			FString jsonAttributes;
			UBCMatchmakingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rangeDelta;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numMatches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonAttributes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventFindPlayersWithAttributes_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::NewProp_rangeDelta = { "rangeDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventFindPlayersWithAttributes_Parms, rangeDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::NewProp_numMatches = { "numMatches", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventFindPlayersWithAttributes_Parms, numMatches), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::NewProp_jsonAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::NewProp_jsonAttributes = { "jsonAttributes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventFindPlayersWithAttributes_Parms, jsonAttributes), METADATA_PARAMS(Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::NewProp_jsonAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::NewProp_jsonAttributes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventFindPlayersWithAttributes_Parms, ReturnValue), Z_Construct_UClass_UBCMatchmakingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::NewProp_rangeDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::NewProp_numMatches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::NewProp_jsonAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Matchmaking" },
		{ "Comment", "/**\n    * Finds matchmaking enabled players with additional attributes\n    *\n    * Service Name - MatchMaking\n    * Service Operation - FIND_PLAYERS\n    *\n    * Param - rangeDelta The range delta\n    * Param - numMatches The maximum number of matches to return\n    * Param - jsonAttributes Attributes match criteria\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMatchmakingProxy.h" },
		{ "ToolTip", "Finds matchmaking enabled players with additional attributes\n\nService Name - MatchMaking\nService Operation - FIND_PLAYERS\n\nParam - rangeDelta The range delta\nParam - numMatches The maximum number of matches to return\nParam - jsonAttributes Attributes match criteria" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMatchmakingProxy, nullptr, "FindPlayersWithAttributes", nullptr, nullptr, sizeof(BCMatchmakingProxy_eventFindPlayersWithAttributes_Parms), Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics
	{
		struct BCMatchmakingProxy_eventFindPlayersWithAttributesUsingFilter_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 rangeDelta;
			int32 numMatches;
			FString jsonAttributes;
			FString jsonExtraParms;
			UBCMatchmakingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rangeDelta;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numMatches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonExtraParms_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonExtraParms;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventFindPlayersWithAttributesUsingFilter_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::NewProp_rangeDelta = { "rangeDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventFindPlayersWithAttributesUsingFilter_Parms, rangeDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::NewProp_numMatches = { "numMatches", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventFindPlayersWithAttributesUsingFilter_Parms, numMatches), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::NewProp_jsonAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::NewProp_jsonAttributes = { "jsonAttributes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventFindPlayersWithAttributesUsingFilter_Parms, jsonAttributes), METADATA_PARAMS(Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::NewProp_jsonAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::NewProp_jsonAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::NewProp_jsonExtraParms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::NewProp_jsonExtraParms = { "jsonExtraParms", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventFindPlayersWithAttributesUsingFilter_Parms, jsonExtraParms), METADATA_PARAMS(Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::NewProp_jsonExtraParms_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::NewProp_jsonExtraParms_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventFindPlayersWithAttributesUsingFilter_Parms, ReturnValue), Z_Construct_UClass_UBCMatchmakingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::NewProp_rangeDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::NewProp_numMatches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::NewProp_jsonAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::NewProp_jsonExtraParms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Matchmaking" },
		{ "Comment", "/**\n    * Finds matchmaking enabled players using a cloud code filter\n    * and additional attributes\n    *\n    * Service Name - MatchMaking\n    * Service Operation - FIND_PLAYERS_USING_FILTER\n    *\n    * Param - rangeDelta The range delta\n    * Param - numMatches The maximum number of matches to return\n    * Param - jsonAttributes Attributes match criteria\n    * Param - jsonExtraParms Parameters to pass to the CloudCode filter script\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMatchmakingProxy.h" },
		{ "ToolTip", "Finds matchmaking enabled players using a cloud code filter\nand additional attributes\n\nService Name - MatchMaking\nService Operation - FIND_PLAYERS_USING_FILTER\n\nParam - rangeDelta The range delta\nParam - numMatches The maximum number of matches to return\nParam - jsonAttributes Attributes match criteria\nParam - jsonExtraParms Parameters to pass to the CloudCode filter script" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMatchmakingProxy, nullptr, "FindPlayersWithAttributesUsingFilter", nullptr, nullptr, sizeof(BCMatchmakingProxy_eventFindPlayersWithAttributesUsingFilter_Parms), Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMatchmakingProxy_IncrementPlayerRating_Statics
	{
		struct BCMatchmakingProxy_eventIncrementPlayerRating_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 increment;
			UBCMatchmakingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_increment;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_IncrementPlayerRating_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventIncrementPlayerRating_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_IncrementPlayerRating_Statics::NewProp_increment = { "increment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventIncrementPlayerRating_Parms, increment), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_IncrementPlayerRating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventIncrementPlayerRating_Parms, ReturnValue), Z_Construct_UClass_UBCMatchmakingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMatchmakingProxy_IncrementPlayerRating_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_IncrementPlayerRating_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_IncrementPlayerRating_Statics::NewProp_increment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_IncrementPlayerRating_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMatchmakingProxy_IncrementPlayerRating_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Matchmaking" },
		{ "Comment", "/**\n    * Increments player rating\n    *\n    * Service Name - MatchMaking\n    * Service Operation - IncrementPlayerRating\n    *\n    * Param - increment The increment amount\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMatchmakingProxy.h" },
		{ "ToolTip", "Increments player rating\n\nService Name - MatchMaking\nService Operation - IncrementPlayerRating\n\nParam - increment The increment amount" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMatchmakingProxy_IncrementPlayerRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMatchmakingProxy, nullptr, "IncrementPlayerRating", nullptr, nullptr, sizeof(BCMatchmakingProxy_eventIncrementPlayerRating_Parms), Z_Construct_UFunction_UBCMatchmakingProxy_IncrementPlayerRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_IncrementPlayerRating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMatchmakingProxy_IncrementPlayerRating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_IncrementPlayerRating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMatchmakingProxy_IncrementPlayerRating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMatchmakingProxy_IncrementPlayerRating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMatchmakingProxy_IncrementShieldOnFor_Statics
	{
		struct BCMatchmakingProxy_eventIncrementShieldOnFor_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 minutes;
			UBCMatchmakingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_minutes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_IncrementShieldOnFor_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventIncrementShieldOnFor_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_IncrementShieldOnFor_Statics::NewProp_minutes = { "minutes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventIncrementShieldOnFor_Parms, minutes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_IncrementShieldOnFor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventIncrementShieldOnFor_Parms, ReturnValue), Z_Construct_UClass_UBCMatchmakingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMatchmakingProxy_IncrementShieldOnFor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_IncrementShieldOnFor_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_IncrementShieldOnFor_Statics::NewProp_minutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_IncrementShieldOnFor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMatchmakingProxy_IncrementShieldOnFor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Matchmaking" },
		{ "Comment", "/**\n\x09* Increases the shield on time by specified number of minutes \n\x09*\n\x09* Service Name - MatchMaking\n\x09* Service Operation - IncrementShieldOnFor\n\x09*\n\x09* Param - minutes Number of minutes to increase the shield time for\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMatchmakingProxy.h" },
		{ "ToolTip", "Increases the shield on time by specified number of minutes\n\nService Name - MatchMaking\nService Operation - IncrementShieldOnFor\n\nParam - minutes Number of minutes to increase the shield time for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMatchmakingProxy_IncrementShieldOnFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMatchmakingProxy, nullptr, "IncrementShieldOnFor", nullptr, nullptr, sizeof(BCMatchmakingProxy_eventIncrementShieldOnFor_Parms), Z_Construct_UFunction_UBCMatchmakingProxy_IncrementShieldOnFor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_IncrementShieldOnFor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMatchmakingProxy_IncrementShieldOnFor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_IncrementShieldOnFor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMatchmakingProxy_IncrementShieldOnFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMatchmakingProxy_IncrementShieldOnFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMatchmakingProxy_Read_Statics
	{
		struct BCMatchmakingProxy_eventRead_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCMatchmakingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_Read_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventRead_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_Read_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventRead_Parms, ReturnValue), Z_Construct_UClass_UBCMatchmakingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMatchmakingProxy_Read_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_Read_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_Read_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMatchmakingProxy_Read_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Matchmaking" },
		{ "Comment", "/**\n    * Read match making record\n    *\n    * Service Name - MatchMaking\n    * Service Operation - Read\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMatchmakingProxy.h" },
		{ "ToolTip", "Read match making record\n\nService Name - MatchMaking\nService Operation - Read" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMatchmakingProxy_Read_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMatchmakingProxy, nullptr, "Read", nullptr, nullptr, sizeof(BCMatchmakingProxy_eventRead_Parms), Z_Construct_UFunction_UBCMatchmakingProxy_Read_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_Read_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMatchmakingProxy_Read_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_Read_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMatchmakingProxy_Read()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMatchmakingProxy_Read_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMatchmakingProxy_ResetPlayerRating_Statics
	{
		struct BCMatchmakingProxy_eventResetPlayerRating_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCMatchmakingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_ResetPlayerRating_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventResetPlayerRating_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_ResetPlayerRating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventResetPlayerRating_Parms, ReturnValue), Z_Construct_UClass_UBCMatchmakingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMatchmakingProxy_ResetPlayerRating_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_ResetPlayerRating_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_ResetPlayerRating_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMatchmakingProxy_ResetPlayerRating_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Matchmaking" },
		{ "Comment", "/**\n    * Resets player rating\n    *\n    * Service Name - MatchMaking\n    * Service Operation - ResetPlayerRating\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMatchmakingProxy.h" },
		{ "ToolTip", "Resets player rating\n\nService Name - MatchMaking\nService Operation - ResetPlayerRating" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMatchmakingProxy_ResetPlayerRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMatchmakingProxy, nullptr, "ResetPlayerRating", nullptr, nullptr, sizeof(BCMatchmakingProxy_eventResetPlayerRating_Parms), Z_Construct_UFunction_UBCMatchmakingProxy_ResetPlayerRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_ResetPlayerRating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMatchmakingProxy_ResetPlayerRating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_ResetPlayerRating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMatchmakingProxy_ResetPlayerRating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMatchmakingProxy_ResetPlayerRating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMatchmakingProxy_SetPlayerRating_Statics
	{
		struct BCMatchmakingProxy_eventSetPlayerRating_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 playerRating;
			UBCMatchmakingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerRating;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_SetPlayerRating_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventSetPlayerRating_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_SetPlayerRating_Statics::NewProp_playerRating = { "playerRating", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventSetPlayerRating_Parms, playerRating), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_SetPlayerRating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventSetPlayerRating_Parms, ReturnValue), Z_Construct_UClass_UBCMatchmakingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMatchmakingProxy_SetPlayerRating_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_SetPlayerRating_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_SetPlayerRating_Statics::NewProp_playerRating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_SetPlayerRating_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMatchmakingProxy_SetPlayerRating_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Matchmaking" },
		{ "Comment", "/**\n    * Sets player rating\n    *\n    * Service Name - MatchMaking\n    * Service Operation - SetPlayerRating\n    *\n    * Param - playerRating The new player rating.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMatchmakingProxy.h" },
		{ "ToolTip", "Sets player rating\n\nService Name - MatchMaking\nService Operation - SetPlayerRating\n\nParam - playerRating The new player rating." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMatchmakingProxy_SetPlayerRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMatchmakingProxy, nullptr, "SetPlayerRating", nullptr, nullptr, sizeof(BCMatchmakingProxy_eventSetPlayerRating_Parms), Z_Construct_UFunction_UBCMatchmakingProxy_SetPlayerRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_SetPlayerRating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMatchmakingProxy_SetPlayerRating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_SetPlayerRating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMatchmakingProxy_SetPlayerRating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMatchmakingProxy_SetPlayerRating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOff_Statics
	{
		struct BCMatchmakingProxy_eventTurnShieldOff_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCMatchmakingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOff_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventTurnShieldOff_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventTurnShieldOff_Parms, ReturnValue), Z_Construct_UClass_UBCMatchmakingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOff_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOff_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Matchmaking" },
		{ "Comment", "/**\n    * Turns shield off\n    *\n    * Service Name - MatchMaking\n    * Service Operation - ShieldOff\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMatchmakingProxy.h" },
		{ "ToolTip", "Turns shield off\n\nService Name - MatchMaking\nService Operation - ShieldOff" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMatchmakingProxy, nullptr, "TurnShieldOff", nullptr, nullptr, sizeof(BCMatchmakingProxy_eventTurnShieldOff_Parms), Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOn_Statics
	{
		struct BCMatchmakingProxy_eventTurnShieldOn_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCMatchmakingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOn_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventTurnShieldOn_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventTurnShieldOn_Parms, ReturnValue), Z_Construct_UClass_UBCMatchmakingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOn_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOn_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Matchmaking" },
		{ "Comment", "/**\n    * Turns shield on\n    *\n    * Service Name - MatchMaking\n    * Service Operation - ShieldOn\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMatchmakingProxy.h" },
		{ "ToolTip", "Turns shield on\n\nService Name - MatchMaking\nService Operation - ShieldOn" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMatchmakingProxy, nullptr, "TurnShieldOn", nullptr, nullptr, sizeof(BCMatchmakingProxy_eventTurnShieldOn_Parms), Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOnFor_Statics
	{
		struct BCMatchmakingProxy_eventTurnShieldOnFor_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			int32 minutes;
			UBCMatchmakingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_minutes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOnFor_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventTurnShieldOnFor_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOnFor_Statics::NewProp_minutes = { "minutes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventTurnShieldOnFor_Parms, minutes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOnFor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMatchmakingProxy_eventTurnShieldOnFor_Parms, ReturnValue), Z_Construct_UClass_UBCMatchmakingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOnFor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOnFor_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOnFor_Statics::NewProp_minutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOnFor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOnFor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Matchmaking" },
		{ "Comment", "/**\n    * Turns shield on for the specified number of minutes\n    *\n    * Service Name - MatchMaking\n    * Service Operation - ShieldOnFor\n    *\n    * Param - minutes Number of minutes to turn the shield on for\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMatchmakingProxy.h" },
		{ "ToolTip", "Turns shield on for the specified number of minutes\n\nService Name - MatchMaking\nService Operation - ShieldOnFor\n\nParam - minutes Number of minutes to turn the shield on for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOnFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMatchmakingProxy, nullptr, "TurnShieldOnFor", nullptr, nullptr, sizeof(BCMatchmakingProxy_eventTurnShieldOnFor_Parms), Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOnFor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOnFor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOnFor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOnFor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOnFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOnFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCMatchmakingProxy_NoRegister()
	{
		return UBCMatchmakingProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCMatchmakingProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCMatchmakingProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCMatchmakingProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCMatchmakingProxy_DecrementPlayerRating, "DecrementPlayerRating" }, // 1252468205
		{ &Z_Construct_UFunction_UBCMatchmakingProxy_DisableMatchMaking, "DisableMatchMaking" }, // 64375631
		{ &Z_Construct_UFunction_UBCMatchmakingProxy_EnableMatchMaking, "EnableMatchMaking" }, // 863612287
		{ &Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayers, "FindPlayers" }, // 1355808215
		{ &Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersUsingFilter, "FindPlayersUsingFilter" }, // 1438958695
		{ &Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributes, "FindPlayersWithAttributes" }, // 3227577330
		{ &Z_Construct_UFunction_UBCMatchmakingProxy_FindPlayersWithAttributesUsingFilter, "FindPlayersWithAttributesUsingFilter" }, // 2884210511
		{ &Z_Construct_UFunction_UBCMatchmakingProxy_IncrementPlayerRating, "IncrementPlayerRating" }, // 4054121801
		{ &Z_Construct_UFunction_UBCMatchmakingProxy_IncrementShieldOnFor, "IncrementShieldOnFor" }, // 3586549121
		{ &Z_Construct_UFunction_UBCMatchmakingProxy_Read, "Read" }, // 594120997
		{ &Z_Construct_UFunction_UBCMatchmakingProxy_ResetPlayerRating, "ResetPlayerRating" }, // 1542746647
		{ &Z_Construct_UFunction_UBCMatchmakingProxy_SetPlayerRating, "SetPlayerRating" }, // 3190506956
		{ &Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOff, "TurnShieldOff" }, // 3413873107
		{ &Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOn, "TurnShieldOn" }, // 1899153012
		{ &Z_Construct_UFunction_UBCMatchmakingProxy_TurnShieldOnFor, "TurnShieldOnFor" }, // 1319216330
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCMatchmakingProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCMatchmakingProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMatchmakingProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCMatchmakingProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCMatchmakingProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCMatchmakingProxy_Statics::ClassParams = {
		&UBCMatchmakingProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCMatchmakingProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCMatchmakingProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCMatchmakingProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCMatchmakingProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCMatchmakingProxy, 4223318978);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCMatchmakingProxy>()
	{
		return UBCMatchmakingProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCMatchmakingProxy(Z_Construct_UClass_UBCMatchmakingProxy, &UBCMatchmakingProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCMatchmakingProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCMatchmakingProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
