// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCLobbyProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCLobbyProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCLobbyProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCLobbyProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCLobbyProxy::execPingRegions)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLobbyProxy**)Z_Param__Result=UBCLobbyProxy::PingRegions(Z_Param_brainCloudWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLobbyProxy::execGetRegionsForLobbies)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_TARRAY_REF(FString,Z_Param_Out_in_roomTypes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLobbyProxy**)Z_Param__Result=UBCLobbyProxy::GetRegionsForLobbies(Z_Param_brainCloudWrapper,Z_Param_Out_in_roomTypes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLobbyProxy::execCancelFindRequest)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_lobbyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLobbyProxy**)Z_Param__Result=UBCLobbyProxy::CancelFindRequest(Z_Param_brainCloudWrapper,Z_Param_in_lobbyType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLobbyProxy::execUpdateSettings)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_lobbyID);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_configJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLobbyProxy**)Z_Param__Result=UBCLobbyProxy::UpdateSettings(Z_Param_brainCloudWrapper,Z_Param_in_lobbyID,Z_Param_in_configJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLobbyProxy::execRemoveMember)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_lobbyID);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_connectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLobbyProxy**)Z_Param__Result=UBCLobbyProxy::RemoveMember(Z_Param_brainCloudWrapper,Z_Param_in_lobbyID,Z_Param_in_connectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLobbyProxy::execJoinLobbyWithPingData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_lobbyID);
		P_GET_UBOOL(Z_Param_in_isReady);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_extraJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_teamCode);
		P_GET_TARRAY_REF(FString,Z_Param_Out_in_otherUserCxIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLobbyProxy**)Z_Param__Result=UBCLobbyProxy::JoinLobbyWithPingData(Z_Param_brainCloudWrapper,Z_Param_in_lobbyID,Z_Param_in_isReady,Z_Param_in_extraJson,Z_Param_in_teamCode,Z_Param_Out_in_otherUserCxIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLobbyProxy::execJoinLobby)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_lobbyID);
		P_GET_UBOOL(Z_Param_in_isReady);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_extraJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_teamCode);
		P_GET_TARRAY_REF(FString,Z_Param_Out_in_otherUserCxIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLobbyProxy**)Z_Param__Result=UBCLobbyProxy::JoinLobby(Z_Param_brainCloudWrapper,Z_Param_in_lobbyID,Z_Param_in_isReady,Z_Param_in_extraJson,Z_Param_in_teamCode,Z_Param_Out_in_otherUserCxIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLobbyProxy::execLeaveLobby)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_lobbyID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLobbyProxy**)Z_Param__Result=UBCLobbyProxy::LeaveLobby(Z_Param_brainCloudWrapper,Z_Param_in_lobbyID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLobbyProxy::execSendSignal)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_lobbyID);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_signalJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLobbyProxy**)Z_Param__Result=UBCLobbyProxy::SendSignal(Z_Param_brainCloudWrapper,Z_Param_in_lobbyID,Z_Param_in_signalJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLobbyProxy::execSwitchTeam)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_lobbyID);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_teamCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLobbyProxy**)Z_Param__Result=UBCLobbyProxy::SwitchTeam(Z_Param_brainCloudWrapper,Z_Param_in_lobbyID,Z_Param_in_teamCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLobbyProxy::execUpdateReady)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_lobbyID);
		P_GET_UBOOL(Z_Param_in_isReady);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_extraJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLobbyProxy**)Z_Param__Result=UBCLobbyProxy::UpdateReady(Z_Param_brainCloudWrapper,Z_Param_in_lobbyID,Z_Param_in_isReady,Z_Param_in_extraJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLobbyProxy::execGetLobbyData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_lobbyID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLobbyProxy**)Z_Param__Result=UBCLobbyProxy::GetLobbyData(Z_Param_brainCloudWrapper,Z_Param_in_lobbyID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLobbyProxy::execFindOrCreateLobbyWithPingData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_roomType);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_rating);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_maxSteps);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_algoJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_filterJson);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_timeoutSecs);
		P_GET_UBOOL(Z_Param_in_isReady);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_extraJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_teamCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_configJson);
		P_GET_TARRAY_REF(FString,Z_Param_Out_in_otherUserCxIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLobbyProxy**)Z_Param__Result=UBCLobbyProxy::FindOrCreateLobbyWithPingData(Z_Param_brainCloudWrapper,Z_Param_in_roomType,Z_Param_in_rating,Z_Param_in_maxSteps,Z_Param_in_algoJson,Z_Param_in_filterJson,Z_Param_in_timeoutSecs,Z_Param_in_isReady,Z_Param_in_extraJson,Z_Param_in_teamCode,Z_Param_in_configJson,Z_Param_Out_in_otherUserCxIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLobbyProxy::execFindOrCreateLobby)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_roomType);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_rating);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_maxSteps);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_algoJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_filterJson);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_timeoutSecs);
		P_GET_UBOOL(Z_Param_in_isReady);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_extraJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_teamCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_configJson);
		P_GET_TARRAY_REF(FString,Z_Param_Out_in_otherUserCxIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLobbyProxy**)Z_Param__Result=UBCLobbyProxy::FindOrCreateLobby(Z_Param_brainCloudWrapper,Z_Param_in_roomType,Z_Param_in_rating,Z_Param_in_maxSteps,Z_Param_in_algoJson,Z_Param_in_filterJson,Z_Param_in_timeoutSecs,Z_Param_in_isReady,Z_Param_in_extraJson,Z_Param_in_teamCode,Z_Param_in_configJson,Z_Param_Out_in_otherUserCxIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLobbyProxy::execCreateLobbyWithPingData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_roomType);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_rating);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_maxSteps);
		P_GET_UBOOL(Z_Param_in_isReady);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_extraJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_teamCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_configJson);
		P_GET_TARRAY_REF(FString,Z_Param_Out_in_otherUserCxIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLobbyProxy**)Z_Param__Result=UBCLobbyProxy::CreateLobbyWithPingData(Z_Param_brainCloudWrapper,Z_Param_in_roomType,Z_Param_in_rating,Z_Param_in_maxSteps,Z_Param_in_isReady,Z_Param_in_extraJson,Z_Param_in_teamCode,Z_Param_in_configJson,Z_Param_Out_in_otherUserCxIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLobbyProxy::execCreateLobby)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_roomType);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_rating);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_maxSteps);
		P_GET_UBOOL(Z_Param_in_isReady);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_extraJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_teamCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_configJson);
		P_GET_TARRAY_REF(FString,Z_Param_Out_in_otherUserCxIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLobbyProxy**)Z_Param__Result=UBCLobbyProxy::CreateLobby(Z_Param_brainCloudWrapper,Z_Param_in_roomType,Z_Param_in_rating,Z_Param_in_maxSteps,Z_Param_in_isReady,Z_Param_in_extraJson,Z_Param_in_teamCode,Z_Param_in_configJson,Z_Param_Out_in_otherUserCxIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLobbyProxy::execFindLobbyWithPingData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_roomType);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_rating);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_maxSteps);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_algoJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_filterJson);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_timeoutSecs);
		P_GET_UBOOL(Z_Param_in_isReady);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_extraJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_teamCode);
		P_GET_TARRAY_REF(FString,Z_Param_Out_in_otherUserCxIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLobbyProxy**)Z_Param__Result=UBCLobbyProxy::FindLobbyWithPingData(Z_Param_brainCloudWrapper,Z_Param_in_roomType,Z_Param_in_rating,Z_Param_in_maxSteps,Z_Param_in_algoJson,Z_Param_in_filterJson,Z_Param_in_timeoutSecs,Z_Param_in_isReady,Z_Param_in_extraJson,Z_Param_in_teamCode,Z_Param_Out_in_otherUserCxIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCLobbyProxy::execFindLobby)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_roomType);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_rating);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_maxSteps);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_algoJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_filterJson);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_timeoutSecs);
		P_GET_UBOOL(Z_Param_in_isReady);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_extraJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_teamCode);
		P_GET_TARRAY_REF(FString,Z_Param_Out_in_otherUserCxIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCLobbyProxy**)Z_Param__Result=UBCLobbyProxy::FindLobby(Z_Param_brainCloudWrapper,Z_Param_in_roomType,Z_Param_in_rating,Z_Param_in_maxSteps,Z_Param_in_algoJson,Z_Param_in_filterJson,Z_Param_in_timeoutSecs,Z_Param_in_isReady,Z_Param_in_extraJson,Z_Param_in_teamCode,Z_Param_Out_in_otherUserCxIds);
		P_NATIVE_END;
	}
	void UBCLobbyProxy::StaticRegisterNativesUBCLobbyProxy()
	{
		UClass* Class = UBCLobbyProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelFindRequest", &UBCLobbyProxy::execCancelFindRequest },
			{ "CreateLobby", &UBCLobbyProxy::execCreateLobby },
			{ "CreateLobbyWithPingData", &UBCLobbyProxy::execCreateLobbyWithPingData },
			{ "FindLobby", &UBCLobbyProxy::execFindLobby },
			{ "FindLobbyWithPingData", &UBCLobbyProxy::execFindLobbyWithPingData },
			{ "FindOrCreateLobby", &UBCLobbyProxy::execFindOrCreateLobby },
			{ "FindOrCreateLobbyWithPingData", &UBCLobbyProxy::execFindOrCreateLobbyWithPingData },
			{ "GetLobbyData", &UBCLobbyProxy::execGetLobbyData },
			{ "GetRegionsForLobbies", &UBCLobbyProxy::execGetRegionsForLobbies },
			{ "JoinLobby", &UBCLobbyProxy::execJoinLobby },
			{ "JoinLobbyWithPingData", &UBCLobbyProxy::execJoinLobbyWithPingData },
			{ "LeaveLobby", &UBCLobbyProxy::execLeaveLobby },
			{ "PingRegions", &UBCLobbyProxy::execPingRegions },
			{ "RemoveMember", &UBCLobbyProxy::execRemoveMember },
			{ "SendSignal", &UBCLobbyProxy::execSendSignal },
			{ "SwitchTeam", &UBCLobbyProxy::execSwitchTeam },
			{ "UpdateReady", &UBCLobbyProxy::execUpdateReady },
			{ "UpdateSettings", &UBCLobbyProxy::execUpdateSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCLobbyProxy_CancelFindRequest_Statics
	{
		struct BCLobbyProxy_eventCancelFindRequest_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_lobbyType;
			UBCLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_lobbyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_lobbyType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CancelFindRequest_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCancelFindRequest_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_CancelFindRequest_Statics::NewProp_in_lobbyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CancelFindRequest_Statics::NewProp_in_lobbyType = { "in_lobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCancelFindRequest_Parms, in_lobbyType), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_CancelFindRequest_Statics::NewProp_in_lobbyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_CancelFindRequest_Statics::NewProp_in_lobbyType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CancelFindRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCancelFindRequest_Parms, ReturnValue), Z_Construct_UClass_UBCLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLobbyProxy_CancelFindRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CancelFindRequest_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CancelFindRequest_Statics::NewProp_in_lobbyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CancelFindRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_CancelFindRequest_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Lobby" },
		{ "Comment", "/// <summary>\n/// Cancel this members Find, Join and Searching of Lobbies\n/// </summary>\n" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLobbyProxy.h" },
		{ "ToolTip", "<summary>\nCancel this members Find, Join and Searching of Lobbies\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLobbyProxy_CancelFindRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLobbyProxy, nullptr, "CancelFindRequest", nullptr, nullptr, sizeof(BCLobbyProxy_eventCancelFindRequest_Parms), Z_Construct_UFunction_UBCLobbyProxy_CancelFindRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_CancelFindRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_CancelFindRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_CancelFindRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLobbyProxy_CancelFindRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLobbyProxy_CancelFindRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics
	{
		struct BCLobbyProxy_eventCreateLobby_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_roomType;
			int32 in_rating;
			int32 in_maxSteps;
			bool in_isReady;
			FString in_extraJson;
			FString in_teamCode;
			FString in_configJson;
			TArray<FString> in_otherUserCxIds;
			UBCLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_roomType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_roomType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_rating;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_maxSteps;
		static void NewProp_in_isReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_in_isReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_extraJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_extraJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_teamCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_teamCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_configJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_configJson;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_otherUserCxIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_otherUserCxIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_in_otherUserCxIds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCreateLobby_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_roomType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_roomType = { "in_roomType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCreateLobby_Parms, in_roomType), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_roomType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_roomType_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_rating = { "in_rating", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCreateLobby_Parms, in_rating), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_maxSteps = { "in_maxSteps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCreateLobby_Parms, in_maxSteps), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_isReady_SetBit(void* Obj)
	{
		((BCLobbyProxy_eventCreateLobby_Parms*)Obj)->in_isReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_isReady = { "in_isReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCLobbyProxy_eventCreateLobby_Parms), &Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_isReady_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_extraJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_extraJson = { "in_extraJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCreateLobby_Parms, in_extraJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_extraJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_extraJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_teamCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_teamCode = { "in_teamCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCreateLobby_Parms, in_teamCode), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_teamCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_teamCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_configJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_configJson = { "in_configJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCreateLobby_Parms, in_configJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_configJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_configJson_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_otherUserCxIds_Inner = { "in_otherUserCxIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_otherUserCxIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_otherUserCxIds = { "in_otherUserCxIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCreateLobby_Parms, in_otherUserCxIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_otherUserCxIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_otherUserCxIds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCreateLobby_Parms, ReturnValue), Z_Construct_UClass_UBCLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_roomType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_rating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_maxSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_isReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_extraJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_teamCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_configJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_otherUserCxIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_in_otherUserCxIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Lobby" },
		{ "Comment", "/**\n    * Like findLobby, but geared towards creating new lobbies\n    * \n    * Service Name - lobby\n\x09* Service Operation - CREATE_LOBBY\n    *\n    * @param in_roomType type of room\n\x09* @param in_rating rating of the room\n    * @param in_maxSteps max iterations to search for a lobby\n    * @param in_isReady when lobby is found, place this user as \"Ready\"\n    * @param in_extraJson json string for extra customization \n    * @param in_teamCode team code\n    * @param in_configJson json string of the lobby config\n    * @param in_otherUserCxIds array of other user Connection Ids to bring when the lobby is found\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLobbyProxy.h" },
		{ "ToolTip", "Like findLobby, but geared towards creating new lobbies\n\nService Name - lobby\nService Operation - CREATE_LOBBY\n\n@param in_roomType type of room\n@param in_rating rating of the room\n@param in_maxSteps max iterations to search for a lobby\n@param in_isReady when lobby is found, place this user as \"Ready\"\n@param in_extraJson json string for extra customization\n@param in_teamCode team code\n@param in_configJson json string of the lobby config\n@param in_otherUserCxIds array of other user Connection Ids to bring when the lobby is found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLobbyProxy, nullptr, "CreateLobby", nullptr, nullptr, sizeof(BCLobbyProxy_eventCreateLobby_Parms), Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLobbyProxy_CreateLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLobbyProxy_CreateLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics
	{
		struct BCLobbyProxy_eventCreateLobbyWithPingData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_roomType;
			int32 in_rating;
			int32 in_maxSteps;
			bool in_isReady;
			FString in_extraJson;
			FString in_teamCode;
			FString in_configJson;
			TArray<FString> in_otherUserCxIds;
			UBCLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_roomType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_roomType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_rating;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_maxSteps;
		static void NewProp_in_isReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_in_isReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_extraJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_extraJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_teamCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_teamCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_configJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_configJson;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_otherUserCxIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_otherUserCxIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_in_otherUserCxIds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCreateLobbyWithPingData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_roomType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_roomType = { "in_roomType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCreateLobbyWithPingData_Parms, in_roomType), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_roomType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_roomType_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_rating = { "in_rating", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCreateLobbyWithPingData_Parms, in_rating), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_maxSteps = { "in_maxSteps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCreateLobbyWithPingData_Parms, in_maxSteps), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_isReady_SetBit(void* Obj)
	{
		((BCLobbyProxy_eventCreateLobbyWithPingData_Parms*)Obj)->in_isReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_isReady = { "in_isReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCLobbyProxy_eventCreateLobbyWithPingData_Parms), &Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_isReady_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_extraJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_extraJson = { "in_extraJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCreateLobbyWithPingData_Parms, in_extraJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_extraJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_extraJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_teamCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_teamCode = { "in_teamCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCreateLobbyWithPingData_Parms, in_teamCode), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_teamCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_teamCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_configJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_configJson = { "in_configJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCreateLobbyWithPingData_Parms, in_configJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_configJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_configJson_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_otherUserCxIds_Inner = { "in_otherUserCxIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_otherUserCxIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_otherUserCxIds = { "in_otherUserCxIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCreateLobbyWithPingData_Parms, in_otherUserCxIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_otherUserCxIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_otherUserCxIds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventCreateLobbyWithPingData_Parms, ReturnValue), Z_Construct_UClass_UBCLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_roomType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_rating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_maxSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_isReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_extraJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_teamCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_configJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_otherUserCxIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_in_otherUserCxIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Lobby" },
		{ "Comment", "/**\n    * Like findLobby, but geared towards creating new lobbies WITH PING DATA.  GetRegionsForLobbies and PingRegions must be successfully responded to prior to calling.\n    * \n    * Service Name - lobby\n\x09* Service Operation - CREATE_LOBBY_WITH_PING_DATA\n    *\n    * @param in_roomType type of room\n\x09* @param in_rating rating of the room\n    * @param in_maxSteps max iterations to search for a lobby\n    * @param in_isReady when lobby is found, place this user as \"Ready\"\n    * @param in_extraJson json string for extra customization \n    * @param in_teamCode team code\n    * @param in_configJson json string of the lobby config\n    * @param in_otherUserCxIds array of other user Connection Ids to bring when the lobby is found\n\x09* @param in_callback Method to be invoked when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLobbyProxy.h" },
		{ "ToolTip", "Like findLobby, but geared towards creating new lobbies WITH PING DATA.  GetRegionsForLobbies and PingRegions must be successfully responded to prior to calling.\n\nService Name - lobby\nService Operation - CREATE_LOBBY_WITH_PING_DATA\n\n@param in_roomType type of room\n@param in_rating rating of the room\n@param in_maxSteps max iterations to search for a lobby\n@param in_isReady when lobby is found, place this user as \"Ready\"\n@param in_extraJson json string for extra customization\n@param in_teamCode team code\n@param in_configJson json string of the lobby config\n@param in_otherUserCxIds array of other user Connection Ids to bring when the lobby is found\n@param in_callback Method to be invoked when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLobbyProxy, nullptr, "CreateLobbyWithPingData", nullptr, nullptr, sizeof(BCLobbyProxy_eventCreateLobbyWithPingData_Parms), Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics
	{
		struct BCLobbyProxy_eventFindLobby_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_roomType;
			int32 in_rating;
			int32 in_maxSteps;
			FString in_algoJson;
			FString in_filterJson;
			int32 in_timeoutSecs;
			bool in_isReady;
			FString in_extraJson;
			FString in_teamCode;
			TArray<FString> in_otherUserCxIds;
			UBCLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_roomType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_roomType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_rating;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_maxSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_algoJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_algoJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_filterJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_filterJson;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_timeoutSecs;
		static void NewProp_in_isReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_in_isReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_extraJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_extraJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_teamCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_teamCode;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_otherUserCxIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_otherUserCxIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_in_otherUserCxIds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobby_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_roomType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_roomType = { "in_roomType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobby_Parms, in_roomType), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_roomType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_roomType_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_rating = { "in_rating", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobby_Parms, in_rating), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_maxSteps = { "in_maxSteps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobby_Parms, in_maxSteps), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_algoJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_algoJson = { "in_algoJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobby_Parms, in_algoJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_algoJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_algoJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_filterJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_filterJson = { "in_filterJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobby_Parms, in_filterJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_filterJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_filterJson_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_timeoutSecs = { "in_timeoutSecs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobby_Parms, in_timeoutSecs), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_isReady_SetBit(void* Obj)
	{
		((BCLobbyProxy_eventFindLobby_Parms*)Obj)->in_isReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_isReady = { "in_isReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCLobbyProxy_eventFindLobby_Parms), &Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_isReady_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_extraJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_extraJson = { "in_extraJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobby_Parms, in_extraJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_extraJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_extraJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_teamCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_teamCode = { "in_teamCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobby_Parms, in_teamCode), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_teamCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_teamCode_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_otherUserCxIds_Inner = { "in_otherUserCxIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_otherUserCxIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_otherUserCxIds = { "in_otherUserCxIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobby_Parms, in_otherUserCxIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_otherUserCxIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_otherUserCxIds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobby_Parms, ReturnValue), Z_Construct_UClass_UBCLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_roomType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_rating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_maxSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_algoJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_filterJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_timeoutSecs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_isReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_extraJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_teamCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_otherUserCxIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_in_otherUserCxIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Lobby" },
		{ "Comment", "/**\n    * Finds a lobby matching the specified parameters\n    * \n    * Service Name - lobby\n\x09* Service Operation - FIND_LOBBY\n    *\n    * @param in_roomType type of room\n\x09* @param in_rating rating of the room\n    * @param in_maxSteps max iterations to search for a lobby\n    * @param in_algoJson json string of the search algorithm to use\n    * @param in_filterJson json string of the filter to be passed on\n    * @param in_timeoutSecs numberOfseconds before timing out\n    * @param in_isReady when lobby is found, place this user as \"Ready\"\n    * @param in_extraJson json string for extra customization \n    * @param in_teamCode team code\n    * @param in_otherUserCxIds array of other user Connection Ids to bring when the lobby is found\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLobbyProxy.h" },
		{ "ToolTip", "Finds a lobby matching the specified parameters\n\nService Name - lobby\nService Operation - FIND_LOBBY\n\n@param in_roomType type of room\n@param in_rating rating of the room\n@param in_maxSteps max iterations to search for a lobby\n@param in_algoJson json string of the search algorithm to use\n@param in_filterJson json string of the filter to be passed on\n@param in_timeoutSecs numberOfseconds before timing out\n@param in_isReady when lobby is found, place this user as \"Ready\"\n@param in_extraJson json string for extra customization\n@param in_teamCode team code\n@param in_otherUserCxIds array of other user Connection Ids to bring when the lobby is found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLobbyProxy, nullptr, "FindLobby", nullptr, nullptr, sizeof(BCLobbyProxy_eventFindLobby_Parms), Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLobbyProxy_FindLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLobbyProxy_FindLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics
	{
		struct BCLobbyProxy_eventFindLobbyWithPingData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_roomType;
			int32 in_rating;
			int32 in_maxSteps;
			FString in_algoJson;
			FString in_filterJson;
			int32 in_timeoutSecs;
			bool in_isReady;
			FString in_extraJson;
			FString in_teamCode;
			TArray<FString> in_otherUserCxIds;
			UBCLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_roomType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_roomType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_rating;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_maxSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_algoJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_algoJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_filterJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_filterJson;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_timeoutSecs;
		static void NewProp_in_isReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_in_isReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_extraJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_extraJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_teamCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_teamCode;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_otherUserCxIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_otherUserCxIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_in_otherUserCxIds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobbyWithPingData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_roomType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_roomType = { "in_roomType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobbyWithPingData_Parms, in_roomType), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_roomType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_roomType_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_rating = { "in_rating", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobbyWithPingData_Parms, in_rating), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_maxSteps = { "in_maxSteps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobbyWithPingData_Parms, in_maxSteps), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_algoJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_algoJson = { "in_algoJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobbyWithPingData_Parms, in_algoJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_algoJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_algoJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_filterJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_filterJson = { "in_filterJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobbyWithPingData_Parms, in_filterJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_filterJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_filterJson_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_timeoutSecs = { "in_timeoutSecs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobbyWithPingData_Parms, in_timeoutSecs), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_isReady_SetBit(void* Obj)
	{
		((BCLobbyProxy_eventFindLobbyWithPingData_Parms*)Obj)->in_isReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_isReady = { "in_isReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCLobbyProxy_eventFindLobbyWithPingData_Parms), &Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_isReady_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_extraJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_extraJson = { "in_extraJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobbyWithPingData_Parms, in_extraJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_extraJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_extraJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_teamCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_teamCode = { "in_teamCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobbyWithPingData_Parms, in_teamCode), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_teamCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_teamCode_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_otherUserCxIds_Inner = { "in_otherUserCxIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_otherUserCxIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_otherUserCxIds = { "in_otherUserCxIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobbyWithPingData_Parms, in_otherUserCxIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_otherUserCxIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_otherUserCxIds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindLobbyWithPingData_Parms, ReturnValue), Z_Construct_UClass_UBCLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_roomType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_rating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_maxSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_algoJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_filterJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_timeoutSecs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_isReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_extraJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_teamCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_otherUserCxIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_in_otherUserCxIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Lobby" },
		{ "Comment", "/**\n    * Finds a lobby matching the specified parameters WITH PING DATA.  GetRegionsForLobbies and PingRegions must be successfully responded to prior to calling.\n    * \n    * Service Name - lobby\n\x09* Service Operation - FIND_LOBBY_WITH_PING_DATA\n    *\n    * @param in_roomType type of room\n\x09* @param in_rating rating of the room\n    * @param in_maxSteps max iterations to search for a lobby\n    * @param in_algoJson json string of the search algorithm to use\n    * @param in_filterJson json string of the filter to be passed on\n    * @param in_timeoutSecs numberOfseconds before timing out\n    * @param in_isReady when lobby is found, place this user as \"Ready\"\n    * @param in_extraJson json string for extra customization \n    * @param in_teamCode team code\n    * @param in_otherUserCxIds array of other user Connection Ids to bring when the lobby is found\n\x09* @param in_callback Method to be invoked when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLobbyProxy.h" },
		{ "ToolTip", "Finds a lobby matching the specified parameters WITH PING DATA.  GetRegionsForLobbies and PingRegions must be successfully responded to prior to calling.\n\nService Name - lobby\nService Operation - FIND_LOBBY_WITH_PING_DATA\n\n@param in_roomType type of room\n@param in_rating rating of the room\n@param in_maxSteps max iterations to search for a lobby\n@param in_algoJson json string of the search algorithm to use\n@param in_filterJson json string of the filter to be passed on\n@param in_timeoutSecs numberOfseconds before timing out\n@param in_isReady when lobby is found, place this user as \"Ready\"\n@param in_extraJson json string for extra customization\n@param in_teamCode team code\n@param in_otherUserCxIds array of other user Connection Ids to bring when the lobby is found\n@param in_callback Method to be invoked when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLobbyProxy, nullptr, "FindLobbyWithPingData", nullptr, nullptr, sizeof(BCLobbyProxy_eventFindLobbyWithPingData_Parms), Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics
	{
		struct BCLobbyProxy_eventFindOrCreateLobby_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_roomType;
			int32 in_rating;
			int32 in_maxSteps;
			FString in_algoJson;
			FString in_filterJson;
			int32 in_timeoutSecs;
			bool in_isReady;
			FString in_extraJson;
			FString in_teamCode;
			FString in_configJson;
			TArray<FString> in_otherUserCxIds;
			UBCLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_roomType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_roomType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_rating;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_maxSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_algoJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_algoJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_filterJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_filterJson;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_timeoutSecs;
		static void NewProp_in_isReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_in_isReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_extraJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_extraJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_teamCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_teamCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_configJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_configJson;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_otherUserCxIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_otherUserCxIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_in_otherUserCxIds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobby_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_roomType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_roomType = { "in_roomType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobby_Parms, in_roomType), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_roomType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_roomType_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_rating = { "in_rating", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobby_Parms, in_rating), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_maxSteps = { "in_maxSteps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobby_Parms, in_maxSteps), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_algoJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_algoJson = { "in_algoJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobby_Parms, in_algoJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_algoJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_algoJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_filterJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_filterJson = { "in_filterJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobby_Parms, in_filterJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_filterJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_filterJson_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_timeoutSecs = { "in_timeoutSecs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobby_Parms, in_timeoutSecs), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_isReady_SetBit(void* Obj)
	{
		((BCLobbyProxy_eventFindOrCreateLobby_Parms*)Obj)->in_isReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_isReady = { "in_isReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCLobbyProxy_eventFindOrCreateLobby_Parms), &Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_isReady_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_extraJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_extraJson = { "in_extraJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobby_Parms, in_extraJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_extraJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_extraJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_teamCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_teamCode = { "in_teamCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobby_Parms, in_teamCode), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_teamCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_teamCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_configJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_configJson = { "in_configJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobby_Parms, in_configJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_configJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_configJson_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_otherUserCxIds_Inner = { "in_otherUserCxIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_otherUserCxIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_otherUserCxIds = { "in_otherUserCxIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobby_Parms, in_otherUserCxIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_otherUserCxIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_otherUserCxIds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobby_Parms, ReturnValue), Z_Construct_UClass_UBCLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_roomType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_rating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_maxSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_algoJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_filterJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_timeoutSecs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_isReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_extraJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_teamCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_configJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_otherUserCxIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_in_otherUserCxIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Lobby" },
		{ "Comment", "/**\n    * Finds a lobby matching the specified parameters, or creates one\n    * \n    * Service Name - lobby\n\x09* Service Operation - FIND_OR_CREATE_LOBBY\n    *\n    * @param in_roomType type of room\n\x09* @param in_rating rating of the room\n    * @param in_maxSteps max iterations to search for a lobby\n    * @param in_algoJson json string of the search algorithm to use\n    * @param in_filterJson json string of the filter to be passed on\n    * @param in_timeoutSecs numberOfseconds before timing out\n    * @param in_isReady when lobby is found, place this user as \"Ready\"\n    * @param in_extraJson json string for extra customization \n    * @param in_teamCode team code\n    * @param in_configJson json string of the lobby config\n    * @param in_otherUserCxIds array of other user Connection Ids to bring when the lobby is found\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLobbyProxy.h" },
		{ "ToolTip", "Finds a lobby matching the specified parameters, or creates one\n\nService Name - lobby\nService Operation - FIND_OR_CREATE_LOBBY\n\n@param in_roomType type of room\n@param in_rating rating of the room\n@param in_maxSteps max iterations to search for a lobby\n@param in_algoJson json string of the search algorithm to use\n@param in_filterJson json string of the filter to be passed on\n@param in_timeoutSecs numberOfseconds before timing out\n@param in_isReady when lobby is found, place this user as \"Ready\"\n@param in_extraJson json string for extra customization\n@param in_teamCode team code\n@param in_configJson json string of the lobby config\n@param in_otherUserCxIds array of other user Connection Ids to bring when the lobby is found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLobbyProxy, nullptr, "FindOrCreateLobby", nullptr, nullptr, sizeof(BCLobbyProxy_eventFindOrCreateLobby_Parms), Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics
	{
		struct BCLobbyProxy_eventFindOrCreateLobbyWithPingData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_roomType;
			int32 in_rating;
			int32 in_maxSteps;
			FString in_algoJson;
			FString in_filterJson;
			int32 in_timeoutSecs;
			bool in_isReady;
			FString in_extraJson;
			FString in_teamCode;
			FString in_configJson;
			TArray<FString> in_otherUserCxIds;
			UBCLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_roomType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_roomType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_rating;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_maxSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_algoJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_algoJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_filterJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_filterJson;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_timeoutSecs;
		static void NewProp_in_isReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_in_isReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_extraJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_extraJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_teamCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_teamCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_configJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_configJson;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_otherUserCxIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_otherUserCxIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_in_otherUserCxIds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobbyWithPingData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_roomType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_roomType = { "in_roomType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobbyWithPingData_Parms, in_roomType), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_roomType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_roomType_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_rating = { "in_rating", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobbyWithPingData_Parms, in_rating), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_maxSteps = { "in_maxSteps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobbyWithPingData_Parms, in_maxSteps), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_algoJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_algoJson = { "in_algoJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobbyWithPingData_Parms, in_algoJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_algoJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_algoJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_filterJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_filterJson = { "in_filterJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobbyWithPingData_Parms, in_filterJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_filterJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_filterJson_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_timeoutSecs = { "in_timeoutSecs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobbyWithPingData_Parms, in_timeoutSecs), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_isReady_SetBit(void* Obj)
	{
		((BCLobbyProxy_eventFindOrCreateLobbyWithPingData_Parms*)Obj)->in_isReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_isReady = { "in_isReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCLobbyProxy_eventFindOrCreateLobbyWithPingData_Parms), &Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_isReady_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_extraJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_extraJson = { "in_extraJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobbyWithPingData_Parms, in_extraJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_extraJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_extraJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_teamCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_teamCode = { "in_teamCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobbyWithPingData_Parms, in_teamCode), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_teamCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_teamCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_configJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_configJson = { "in_configJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobbyWithPingData_Parms, in_configJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_configJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_configJson_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_otherUserCxIds_Inner = { "in_otherUserCxIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_otherUserCxIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_otherUserCxIds = { "in_otherUserCxIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobbyWithPingData_Parms, in_otherUserCxIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_otherUserCxIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_otherUserCxIds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventFindOrCreateLobbyWithPingData_Parms, ReturnValue), Z_Construct_UClass_UBCLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_roomType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_rating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_maxSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_algoJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_filterJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_timeoutSecs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_isReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_extraJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_teamCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_configJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_otherUserCxIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_in_otherUserCxIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Lobby" },
		{ "Comment", "/**\n    * Finds a lobby matching the specified parameters, or creates one WITH PING DATA.  GetRegionsForLobbies and PingRegions must be successfully responded to prior to calling.\n    * \n    * Service Name - lobby\n\x09* Service Operation - FIND_OR_CREATE_LOBBY_WITH_PING_DATA\n    *\n    * @param in_roomType type of room\n\x09* @param in_rating rating of the room\n    * @param in_maxSteps max iterations to search for a lobby\n    * @param in_algoJson json string of the search algorithm to use\n    * @param in_filterJson json string of the filter to be passed on\n    * @param in_timeoutSecs numberOfseconds before timing out\n    * @param in_isReady when lobby is found, place this user as \"Ready\"\n    * @param in_extraJson json string for extra customization \n    * @param in_teamCode team code\n    * @param in_configJson json string of the lobby config\n    * @param in_otherUserCxIds array of other user Connection Ids to bring when the lobby is found\n\x09* @param in_callback Method to be invoked when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLobbyProxy.h" },
		{ "ToolTip", "Finds a lobby matching the specified parameters, or creates one WITH PING DATA.  GetRegionsForLobbies and PingRegions must be successfully responded to prior to calling.\n\nService Name - lobby\nService Operation - FIND_OR_CREATE_LOBBY_WITH_PING_DATA\n\n@param in_roomType type of room\n@param in_rating rating of the room\n@param in_maxSteps max iterations to search for a lobby\n@param in_algoJson json string of the search algorithm to use\n@param in_filterJson json string of the filter to be passed on\n@param in_timeoutSecs numberOfseconds before timing out\n@param in_isReady when lobby is found, place this user as \"Ready\"\n@param in_extraJson json string for extra customization\n@param in_teamCode team code\n@param in_configJson json string of the lobby config\n@param in_otherUserCxIds array of other user Connection Ids to bring when the lobby is found\n@param in_callback Method to be invoked when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLobbyProxy, nullptr, "FindOrCreateLobbyWithPingData", nullptr, nullptr, sizeof(BCLobbyProxy_eventFindOrCreateLobbyWithPingData_Parms), Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLobbyProxy_GetLobbyData_Statics
	{
		struct BCLobbyProxy_eventGetLobbyData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_lobbyID;
			UBCLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_lobbyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_lobbyID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_GetLobbyData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventGetLobbyData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_GetLobbyData_Statics::NewProp_in_lobbyID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_GetLobbyData_Statics::NewProp_in_lobbyID = { "in_lobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventGetLobbyData_Parms, in_lobbyID), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_GetLobbyData_Statics::NewProp_in_lobbyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_GetLobbyData_Statics::NewProp_in_lobbyID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_GetLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventGetLobbyData_Parms, ReturnValue), Z_Construct_UClass_UBCLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLobbyProxy_GetLobbyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_GetLobbyData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_GetLobbyData_Statics::NewProp_in_lobbyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_GetLobbyData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_GetLobbyData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Lobby" },
		{ "Comment", "/**\n    * Finds a lobby matching the specified parameters, or creates one\n    * \n    * Service Name - lobby\n\x09* Service Operation - GET_LOBBY_DATA\n    *\n    * @param in_lobbyID the lobbyId\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLobbyProxy.h" },
		{ "ToolTip", "Finds a lobby matching the specified parameters, or creates one\n\nService Name - lobby\nService Operation - GET_LOBBY_DATA\n\n@param in_lobbyID the lobbyId" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLobbyProxy_GetLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLobbyProxy, nullptr, "GetLobbyData", nullptr, nullptr, sizeof(BCLobbyProxy_eventGetLobbyData_Parms), Z_Construct_UFunction_UBCLobbyProxy_GetLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_GetLobbyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_GetLobbyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_GetLobbyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLobbyProxy_GetLobbyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLobbyProxy_GetLobbyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies_Statics
	{
		struct BCLobbyProxy_eventGetRegionsForLobbies_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TArray<FString> in_roomTypes;
			UBCLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_roomTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_roomTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_in_roomTypes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventGetRegionsForLobbies_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies_Statics::NewProp_in_roomTypes_Inner = { "in_roomTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies_Statics::NewProp_in_roomTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies_Statics::NewProp_in_roomTypes = { "in_roomTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventGetRegionsForLobbies_Parms, in_roomTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies_Statics::NewProp_in_roomTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies_Statics::NewProp_in_roomTypes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventGetRegionsForLobbies_Parms, ReturnValue), Z_Construct_UClass_UBCLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies_Statics::NewProp_in_roomTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies_Statics::NewProp_in_roomTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Lobby" },
		{ "Comment", "/**\n    * Retrieves the region settings for each of the given lobby types. Upon SuccessCallback or afterwards, call PingRegions to start retrieving appropriate data.  \n    * Once that completes, the associated region Ping Data is retrievable via PingData and all associated <>WithPingData APIs are useable\n    * Service Name - lobby\n\x09* Service Operation - GET_REGIONS_FOR_LOBBIES\n    * \n    * @param in_roomTypes List of roomtypes to request the ping regions\n\x09* @param in_callback Method to be invoked when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLobbyProxy.h" },
		{ "ToolTip", "Retrieves the region settings for each of the given lobby types. Upon SuccessCallback or afterwards, call PingRegions to start retrieving appropriate data.\nOnce that completes, the associated region Ping Data is retrievable via PingData and all associated <>WithPingData APIs are useable\nService Name - lobby\nService Operation - GET_REGIONS_FOR_LOBBIES\n\n@param in_roomTypes List of roomtypes to request the ping regions\n@param in_callback Method to be invoked when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLobbyProxy, nullptr, "GetRegionsForLobbies", nullptr, nullptr, sizeof(BCLobbyProxy_eventGetRegionsForLobbies_Parms), Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics
	{
		struct BCLobbyProxy_eventJoinLobby_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_lobbyID;
			bool in_isReady;
			FString in_extraJson;
			FString in_teamCode;
			TArray<FString> in_otherUserCxIds;
			UBCLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_lobbyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_lobbyID;
		static void NewProp_in_isReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_in_isReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_extraJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_extraJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_teamCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_teamCode;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_otherUserCxIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_otherUserCxIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_in_otherUserCxIds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventJoinLobby_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_lobbyID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_lobbyID = { "in_lobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventJoinLobby_Parms, in_lobbyID), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_lobbyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_lobbyID_MetaData)) };
	void Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_isReady_SetBit(void* Obj)
	{
		((BCLobbyProxy_eventJoinLobby_Parms*)Obj)->in_isReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_isReady = { "in_isReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCLobbyProxy_eventJoinLobby_Parms), &Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_isReady_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_extraJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_extraJson = { "in_extraJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventJoinLobby_Parms, in_extraJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_extraJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_extraJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_teamCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_teamCode = { "in_teamCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventJoinLobby_Parms, in_teamCode), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_teamCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_teamCode_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_otherUserCxIds_Inner = { "in_otherUserCxIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_otherUserCxIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_otherUserCxIds = { "in_otherUserCxIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventJoinLobby_Parms, in_otherUserCxIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_otherUserCxIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_otherUserCxIds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventJoinLobby_Parms, ReturnValue), Z_Construct_UClass_UBCLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_lobbyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_isReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_extraJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_teamCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_otherUserCxIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_in_otherUserCxIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Lobby" },
		{ "Comment", "/**\n    * Service Name - lobby\n\x09* Service Operation - JOIN_LOBBY\n    *\n    * @param in_lobbyID the lobbyId\n    * @param in_isReady status of user joining\n    * @param in_extraJson is the extra constraints\n    * @param in_teamCode team code\n    * @param in_otherUserCxIds is a list of other players who re part of the lobby\n\x09* @param in_callback Method to be invoked when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLobbyProxy.h" },
		{ "ToolTip", "Service Name - lobby\nService Operation - JOIN_LOBBY\n\n@param in_lobbyID the lobbyId\n@param in_isReady status of user joining\n@param in_extraJson is the extra constraints\n@param in_teamCode team code\n@param in_otherUserCxIds is a list of other players who re part of the lobby\n@param in_callback Method to be invoked when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLobbyProxy, nullptr, "JoinLobby", nullptr, nullptr, sizeof(BCLobbyProxy_eventJoinLobby_Parms), Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLobbyProxy_JoinLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLobbyProxy_JoinLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics
	{
		struct BCLobbyProxy_eventJoinLobbyWithPingData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_lobbyID;
			bool in_isReady;
			FString in_extraJson;
			FString in_teamCode;
			TArray<FString> in_otherUserCxIds;
			UBCLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_lobbyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_lobbyID;
		static void NewProp_in_isReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_in_isReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_extraJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_extraJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_teamCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_teamCode;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_otherUserCxIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_otherUserCxIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_in_otherUserCxIds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventJoinLobbyWithPingData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_lobbyID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_lobbyID = { "in_lobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventJoinLobbyWithPingData_Parms, in_lobbyID), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_lobbyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_lobbyID_MetaData)) };
	void Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_isReady_SetBit(void* Obj)
	{
		((BCLobbyProxy_eventJoinLobbyWithPingData_Parms*)Obj)->in_isReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_isReady = { "in_isReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCLobbyProxy_eventJoinLobbyWithPingData_Parms), &Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_isReady_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_extraJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_extraJson = { "in_extraJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventJoinLobbyWithPingData_Parms, in_extraJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_extraJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_extraJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_teamCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_teamCode = { "in_teamCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventJoinLobbyWithPingData_Parms, in_teamCode), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_teamCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_teamCode_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_otherUserCxIds_Inner = { "in_otherUserCxIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_otherUserCxIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_otherUserCxIds = { "in_otherUserCxIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventJoinLobbyWithPingData_Parms, in_otherUserCxIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_otherUserCxIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_otherUserCxIds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventJoinLobbyWithPingData_Parms, ReturnValue), Z_Construct_UClass_UBCLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_lobbyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_isReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_extraJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_teamCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_otherUserCxIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_in_otherUserCxIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Lobby" },
		{ "Comment", "/**\n    * User joins the specified lobby WITH PING DATA.  GetRegionsForLobbies and PingRegions must be successfully responded to prior to calling.\n    * Service Name - lobby\n\x09* Service Operation - JOIN_LOBBY_WITH_PING_DATA\n    *\n    * @param in_lobbyID the lobbyId\n    * @param in_isReady status of user joining\n    * @param in_extraJson is the extra constraints\n    * @param in_teamCode team code\n    * @param in_otherUserCxIds is a list of other players who re part of the lobby\n\x09* @param in_callback Method to be invoked when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLobbyProxy.h" },
		{ "ToolTip", "User joins the specified lobby WITH PING DATA.  GetRegionsForLobbies and PingRegions must be successfully responded to prior to calling.\nService Name - lobby\nService Operation - JOIN_LOBBY_WITH_PING_DATA\n\n@param in_lobbyID the lobbyId\n@param in_isReady status of user joining\n@param in_extraJson is the extra constraints\n@param in_teamCode team code\n@param in_otherUserCxIds is a list of other players who re part of the lobby\n@param in_callback Method to be invoked when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLobbyProxy, nullptr, "JoinLobbyWithPingData", nullptr, nullptr, sizeof(BCLobbyProxy_eventJoinLobbyWithPingData_Parms), Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLobbyProxy_LeaveLobby_Statics
	{
		struct BCLobbyProxy_eventLeaveLobby_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_lobbyID;
			UBCLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_lobbyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_lobbyID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_LeaveLobby_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventLeaveLobby_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_LeaveLobby_Statics::NewProp_in_lobbyID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_LeaveLobby_Statics::NewProp_in_lobbyID = { "in_lobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventLeaveLobby_Parms, in_lobbyID), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_LeaveLobby_Statics::NewProp_in_lobbyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_LeaveLobby_Statics::NewProp_in_lobbyID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_LeaveLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventLeaveLobby_Parms, ReturnValue), Z_Construct_UClass_UBCLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLobbyProxy_LeaveLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_LeaveLobby_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_LeaveLobby_Statics::NewProp_in_lobbyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_LeaveLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_LeaveLobby_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Lobby" },
		{ "Comment", "/**\n    * User leaves the specified lobby. if the user was the owner, a new owner will be chosen\n    * \n    * Service Name - lobby\n\x09* Service Operation - LEAVE_LOBBY\n    *\n    * @param in_lobbyID the lobbyId\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLobbyProxy.h" },
		{ "ToolTip", "User leaves the specified lobby. if the user was the owner, a new owner will be chosen\n\nService Name - lobby\nService Operation - LEAVE_LOBBY\n\n@param in_lobbyID the lobbyId" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLobbyProxy_LeaveLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLobbyProxy, nullptr, "LeaveLobby", nullptr, nullptr, sizeof(BCLobbyProxy_eventLeaveLobby_Parms), Z_Construct_UFunction_UBCLobbyProxy_LeaveLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_LeaveLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_LeaveLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_LeaveLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLobbyProxy_LeaveLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLobbyProxy_LeaveLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLobbyProxy_PingRegions_Statics
	{
		struct BCLobbyProxy_eventPingRegions_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			UBCLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_PingRegions_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventPingRegions_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_PingRegions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventPingRegions_Parms, ReturnValue), Z_Construct_UClass_UBCLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLobbyProxy_PingRegions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_PingRegions_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_PingRegions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_PingRegions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Lobby" },
		{ "Comment", "/**\n    * Retrieves associated PingData averages to be used with all associated <>WithPingData APIs.\n    * Call anytime after GetRegionsForLobbies before proceeding. \n    * \n\x09* @param in_callback Method to be invoked when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLobbyProxy.h" },
		{ "ToolTip", "Retrieves associated PingData averages to be used with all associated <>WithPingData APIs.\nCall anytime after GetRegionsForLobbies before proceeding.\n\n@param in_callback Method to be invoked when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLobbyProxy_PingRegions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLobbyProxy, nullptr, "PingRegions", nullptr, nullptr, sizeof(BCLobbyProxy_eventPingRegions_Parms), Z_Construct_UFunction_UBCLobbyProxy_PingRegions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_PingRegions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_PingRegions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_PingRegions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLobbyProxy_PingRegions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLobbyProxy_PingRegions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics
	{
		struct BCLobbyProxy_eventRemoveMember_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_lobbyID;
			FString in_connectionId;
			UBCLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_lobbyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_lobbyID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_connectionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_connectionId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventRemoveMember_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::NewProp_in_lobbyID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::NewProp_in_lobbyID = { "in_lobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventRemoveMember_Parms, in_lobbyID), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::NewProp_in_lobbyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::NewProp_in_lobbyID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::NewProp_in_connectionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::NewProp_in_connectionId = { "in_connectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventRemoveMember_Parms, in_connectionId), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::NewProp_in_connectionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::NewProp_in_connectionId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventRemoveMember_Parms, ReturnValue), Z_Construct_UClass_UBCLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::NewProp_in_lobbyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::NewProp_in_connectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Lobby" },
		{ "Comment", "/**\n    *  Only valid from the owner of the lobby -- removes the specified member from the lobby\n    * \n    * Service Name - lobby\n\x09* Service Operation - REMOVE_MEMBER\n    *\n    * @param in_lobbyID the lobbyId\n    * @param in_connectionId connectionId (cxId) of member to remove\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLobbyProxy.h" },
		{ "ToolTip", "Only valid from the owner of the lobby -- removes the specified member from the lobby\n\nService Name - lobby\nService Operation - REMOVE_MEMBER\n\n@param in_lobbyID the lobbyId\n@param in_connectionId connectionId (cxId) of member to remove" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLobbyProxy, nullptr, "RemoveMember", nullptr, nullptr, sizeof(BCLobbyProxy_eventRemoveMember_Parms), Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLobbyProxy_RemoveMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLobbyProxy_RemoveMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics
	{
		struct BCLobbyProxy_eventSendSignal_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_lobbyID;
			FString in_signalJson;
			UBCLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_lobbyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_lobbyID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_signalJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_signalJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventSendSignal_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::NewProp_in_lobbyID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::NewProp_in_lobbyID = { "in_lobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventSendSignal_Parms, in_lobbyID), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::NewProp_in_lobbyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::NewProp_in_lobbyID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::NewProp_in_signalJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::NewProp_in_signalJson = { "in_signalJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventSendSignal_Parms, in_signalJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::NewProp_in_signalJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::NewProp_in_signalJson_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventSendSignal_Parms, ReturnValue), Z_Construct_UClass_UBCLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::NewProp_in_lobbyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::NewProp_in_signalJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Lobby" },
		{ "Comment", "/**\n    * Sends LOBBY_SIGNAL_DATA message to all lobby members\n    * \n    * Service Name - lobby\n\x09* Service Operation - SEND_SIGNAL\n    *\n    * @param in_lobbyID the lobbyId\n    * @param in_signalJson customizeable json string attached to signal to lobby members\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLobbyProxy.h" },
		{ "ToolTip", "Sends LOBBY_SIGNAL_DATA message to all lobby members\n\nService Name - lobby\nService Operation - SEND_SIGNAL\n\n@param in_lobbyID the lobbyId\n@param in_signalJson customizeable json string attached to signal to lobby members" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLobbyProxy, nullptr, "SendSignal", nullptr, nullptr, sizeof(BCLobbyProxy_eventSendSignal_Parms), Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLobbyProxy_SendSignal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLobbyProxy_SendSignal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics
	{
		struct BCLobbyProxy_eventSwitchTeam_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_lobbyID;
			FString in_teamCode;
			UBCLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_lobbyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_lobbyID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_teamCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_teamCode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventSwitchTeam_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::NewProp_in_lobbyID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::NewProp_in_lobbyID = { "in_lobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventSwitchTeam_Parms, in_lobbyID), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::NewProp_in_lobbyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::NewProp_in_lobbyID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::NewProp_in_teamCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::NewProp_in_teamCode = { "in_teamCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventSwitchTeam_Parms, in_teamCode), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::NewProp_in_teamCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::NewProp_in_teamCode_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventSwitchTeam_Parms, ReturnValue), Z_Construct_UClass_UBCLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::NewProp_in_lobbyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::NewProp_in_teamCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Lobby" },
		{ "Comment", "/**\n    * Switches to the specified team (if allowed). Note - may be blocked by cloud code script\n    * \n    * Service Name - lobby\n\x09* Service Operation - SWITCH_TEAM\n    *\n    * @param in_lobbyID the lobbyId\n    * @param in_teamCode team code\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLobbyProxy.h" },
		{ "ToolTip", "Switches to the specified team (if allowed). Note - may be blocked by cloud code script\n\nService Name - lobby\nService Operation - SWITCH_TEAM\n\n@param in_lobbyID the lobbyId\n@param in_teamCode team code" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLobbyProxy, nullptr, "SwitchTeam", nullptr, nullptr, sizeof(BCLobbyProxy_eventSwitchTeam_Parms), Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics
	{
		struct BCLobbyProxy_eventUpdateReady_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_lobbyID;
			bool in_isReady;
			FString in_extraJson;
			UBCLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_lobbyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_lobbyID;
		static void NewProp_in_isReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_in_isReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_extraJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_extraJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventUpdateReady_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::NewProp_in_lobbyID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::NewProp_in_lobbyID = { "in_lobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventUpdateReady_Parms, in_lobbyID), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::NewProp_in_lobbyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::NewProp_in_lobbyID_MetaData)) };
	void Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::NewProp_in_isReady_SetBit(void* Obj)
	{
		((BCLobbyProxy_eventUpdateReady_Parms*)Obj)->in_isReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::NewProp_in_isReady = { "in_isReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCLobbyProxy_eventUpdateReady_Parms), &Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::NewProp_in_isReady_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::NewProp_in_extraJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::NewProp_in_extraJson = { "in_extraJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventUpdateReady_Parms, in_extraJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::NewProp_in_extraJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::NewProp_in_extraJson_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventUpdateReady_Parms, ReturnValue), Z_Construct_UClass_UBCLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::NewProp_in_lobbyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::NewProp_in_isReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::NewProp_in_extraJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Lobby" },
		{ "Comment", "/**\n    * Updates the ready state of the player\n    * \n    * Service Name - lobby\n\x09* Service Operation - UPDATE_READY\n    *\n    * @param in_lobbyID the lobbyId\n    * @param in_isReady when lobby is found, place this user as \"Ready\"\n    * @param in_extraJson json string for extra customization \n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLobbyProxy.h" },
		{ "ToolTip", "Updates the ready state of the player\n\nService Name - lobby\nService Operation - UPDATE_READY\n\n@param in_lobbyID the lobbyId\n@param in_isReady when lobby is found, place this user as \"Ready\"\n@param in_extraJson json string for extra customization" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLobbyProxy, nullptr, "UpdateReady", nullptr, nullptr, sizeof(BCLobbyProxy_eventUpdateReady_Parms), Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLobbyProxy_UpdateReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLobbyProxy_UpdateReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics
	{
		struct BCLobbyProxy_eventUpdateSettings_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_lobbyID;
			FString in_configJson;
			UBCLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_lobbyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_lobbyID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_configJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_configJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventUpdateSettings_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::NewProp_in_lobbyID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::NewProp_in_lobbyID = { "in_lobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventUpdateSettings_Parms, in_lobbyID), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::NewProp_in_lobbyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::NewProp_in_lobbyID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::NewProp_in_configJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::NewProp_in_configJson = { "in_configJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventUpdateSettings_Parms, in_configJson), METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::NewProp_in_configJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::NewProp_in_configJson_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCLobbyProxy_eventUpdateSettings_Parms, ReturnValue), Z_Construct_UClass_UBCLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::NewProp_in_lobbyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::NewProp_in_configJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Lobby" },
		{ "Comment", "/**\n    *  Valid only for the owner of the group -- edits the overally lobby config data\n    * \n    * Service Name - lobby\n\x09* Service Operation - UPDATE_SETTINGS\n    *\n    * @param in_lobbyID the lobbyId\n    * @param in_configJson json string of the lobby config\n\x09* @param in_callback Method to be invoked when the server response is received.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLobbyProxy.h" },
		{ "ToolTip", "Valid only for the owner of the group -- edits the overally lobby config data\n\nService Name - lobby\nService Operation - UPDATE_SETTINGS\n\n@param in_lobbyID the lobbyId\n@param in_configJson json string of the lobby config\n@param in_callback Method to be invoked when the server response is received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCLobbyProxy, nullptr, "UpdateSettings", nullptr, nullptr, sizeof(BCLobbyProxy_eventUpdateSettings_Parms), Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCLobbyProxy_NoRegister()
	{
		return UBCLobbyProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCLobbyProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCLobbyProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCLobbyProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCLobbyProxy_CancelFindRequest, "CancelFindRequest" }, // 706431641
		{ &Z_Construct_UFunction_UBCLobbyProxy_CreateLobby, "CreateLobby" }, // 596840014
		{ &Z_Construct_UFunction_UBCLobbyProxy_CreateLobbyWithPingData, "CreateLobbyWithPingData" }, // 2908563940
		{ &Z_Construct_UFunction_UBCLobbyProxy_FindLobby, "FindLobby" }, // 1061631165
		{ &Z_Construct_UFunction_UBCLobbyProxy_FindLobbyWithPingData, "FindLobbyWithPingData" }, // 452630384
		{ &Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobby, "FindOrCreateLobby" }, // 3716408114
		{ &Z_Construct_UFunction_UBCLobbyProxy_FindOrCreateLobbyWithPingData, "FindOrCreateLobbyWithPingData" }, // 2345902345
		{ &Z_Construct_UFunction_UBCLobbyProxy_GetLobbyData, "GetLobbyData" }, // 2605623055
		{ &Z_Construct_UFunction_UBCLobbyProxy_GetRegionsForLobbies, "GetRegionsForLobbies" }, // 2870780256
		{ &Z_Construct_UFunction_UBCLobbyProxy_JoinLobby, "JoinLobby" }, // 420433998
		{ &Z_Construct_UFunction_UBCLobbyProxy_JoinLobbyWithPingData, "JoinLobbyWithPingData" }, // 2350615053
		{ &Z_Construct_UFunction_UBCLobbyProxy_LeaveLobby, "LeaveLobby" }, // 946633009
		{ &Z_Construct_UFunction_UBCLobbyProxy_PingRegions, "PingRegions" }, // 1566196577
		{ &Z_Construct_UFunction_UBCLobbyProxy_RemoveMember, "RemoveMember" }, // 4267687091
		{ &Z_Construct_UFunction_UBCLobbyProxy_SendSignal, "SendSignal" }, // 2419326955
		{ &Z_Construct_UFunction_UBCLobbyProxy_SwitchTeam, "SwitchTeam" }, // 768333225
		{ &Z_Construct_UFunction_UBCLobbyProxy_UpdateReady, "UpdateReady" }, // 4203787083
		{ &Z_Construct_UFunction_UBCLobbyProxy_UpdateSettings, "UpdateSettings" }, // 2335087989
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCLobbyProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCLobbyProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCLobbyProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCLobbyProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCLobbyProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCLobbyProxy_Statics::ClassParams = {
		&UBCLobbyProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCLobbyProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCLobbyProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCLobbyProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCLobbyProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCLobbyProxy, 3484446087);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCLobbyProxy>()
	{
		return UBCLobbyProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCLobbyProxy(Z_Construct_UClass_UBCLobbyProxy, &UBCLobbyProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCLobbyProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCLobbyProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
