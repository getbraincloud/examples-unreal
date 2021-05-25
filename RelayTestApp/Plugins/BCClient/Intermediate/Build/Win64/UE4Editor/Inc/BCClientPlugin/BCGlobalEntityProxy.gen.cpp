// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCGlobalEntityProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCGlobalEntityProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCGlobalEntityProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCGlobalEntityProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudACL_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCGlobalEntityProxy::execMakeSystemEntity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_GET_OBJECT(UBrainCloudACL,Z_Param_entityAcl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalEntityProxy**)Z_Param__Result=UBCGlobalEntityProxy::MakeSystemEntity(Z_Param_brainCloudWrapper,Z_Param_entityId,Z_Param_version,Z_Param_entityAcl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalEntityProxy::execUpdateEntityOwnerAndAcl)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_GET_PROPERTY(FStrProperty,Z_Param_ownerId);
		P_GET_OBJECT(UBrainCloudACL,Z_Param_entityAcl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalEntityProxy**)Z_Param__Result=UBCGlobalEntityProxy::UpdateEntityOwnerAndAcl(Z_Param_brainCloudWrapper,Z_Param_entityId,Z_Param_version,Z_Param_ownerId,Z_Param_entityAcl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalEntityProxy::execUpdateEntityIndexedId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityIndexedId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalEntityProxy**)Z_Param__Result=UBCGlobalEntityProxy::UpdateEntityIndexedId(Z_Param_brainCloudWrapper,Z_Param_entityId,Z_Param_version,Z_Param_entityIndexedId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalEntityProxy::execGetRandomEntitiesMatching)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_whereQuery);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxReturn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalEntityProxy**)Z_Param__Result=UBCGlobalEntityProxy::GetRandomEntitiesMatching(Z_Param_brainCloudWrapper,Z_Param_whereQuery,Z_Param_maxReturn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalEntityProxy::execIncrementGlobalEntityData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalEntityProxy**)Z_Param__Result=UBCGlobalEntityProxy::IncrementGlobalEntityData(Z_Param_brainCloudWrapper,Z_Param_entityId,Z_Param_jsonData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalEntityProxy::execGetPageOffset)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_context);
		P_GET_PROPERTY(FIntProperty,Z_Param_pageOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalEntityProxy**)Z_Param__Result=UBCGlobalEntityProxy::GetPageOffset(Z_Param_brainCloudWrapper,Z_Param_context,Z_Param_pageOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalEntityProxy::execGetPage)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalEntityProxy**)Z_Param__Result=UBCGlobalEntityProxy::GetPage(Z_Param_brainCloudWrapper,Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalEntityProxy::execGetListCount)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_whereQuery);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalEntityProxy**)Z_Param__Result=UBCGlobalEntityProxy::GetListCount(Z_Param_brainCloudWrapper,Z_Param_whereQuery);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalEntityProxy::execGetListByIndexedId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityIndexedId);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxReturn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalEntityProxy**)Z_Param__Result=UBCGlobalEntityProxy::GetListByIndexedId(Z_Param_brainCloudWrapper,Z_Param_entityIndexedId,Z_Param_maxReturn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalEntityProxy::execGetList)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_whereQuery);
		P_GET_PROPERTY(FStrProperty,Z_Param_orderBy);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxReturn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalEntityProxy**)Z_Param__Result=UBCGlobalEntityProxy::GetList(Z_Param_brainCloudWrapper,Z_Param_whereQuery,Z_Param_orderBy,Z_Param_maxReturn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalEntityProxy::execReadEntity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalEntityProxy**)Z_Param__Result=UBCGlobalEntityProxy::ReadEntity(Z_Param_brainCloudWrapper,Z_Param_entityId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalEntityProxy::execDeleteEntity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalEntityProxy**)Z_Param__Result=UBCGlobalEntityProxy::DeleteEntity(Z_Param_brainCloudWrapper,Z_Param_entityId,Z_Param_version);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalEntityProxy::execUpdateEntityTimeToLive)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_GET_PROPERTY(FStrProperty,Z_Param_timeToLive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalEntityProxy**)Z_Param__Result=UBCGlobalEntityProxy::UpdateEntityTimeToLive(Z_Param_brainCloudWrapper,Z_Param_entityId,Z_Param_version,Z_Param_timeToLive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalEntityProxy::execUpdateEntityAcl)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_GET_OBJECT(UBrainCloudACL,Z_Param_entityAcl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalEntityProxy**)Z_Param__Result=UBCGlobalEntityProxy::UpdateEntityAcl(Z_Param_brainCloudWrapper,Z_Param_entityId,Z_Param_version,Z_Param_entityAcl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalEntityProxy::execUpdateEntity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonEntityData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalEntityProxy**)Z_Param__Result=UBCGlobalEntityProxy::UpdateEntity(Z_Param_brainCloudWrapper,Z_Param_entityId,Z_Param_version,Z_Param_jsonEntityData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalEntityProxy::execCreateEntityWithIndexedId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_PROPERTY(FStrProperty,Z_Param_indexedId);
		P_GET_PROPERTY(FStrProperty,Z_Param_timeToLive);
		P_GET_OBJECT(UBrainCloudACL,Z_Param_entityAcl);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonEntityData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalEntityProxy**)Z_Param__Result=UBCGlobalEntityProxy::CreateEntityWithIndexedId(Z_Param_brainCloudWrapper,Z_Param_entityType,Z_Param_indexedId,Z_Param_timeToLive,Z_Param_entityAcl,Z_Param_jsonEntityData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCGlobalEntityProxy::execCreateEntity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_PROPERTY(FStrProperty,Z_Param_timeToLive);
		P_GET_OBJECT(UBrainCloudACL,Z_Param_entityAcl);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonEntityData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCGlobalEntityProxy**)Z_Param__Result=UBCGlobalEntityProxy::CreateEntity(Z_Param_brainCloudWrapper,Z_Param_entityType,Z_Param_timeToLive,Z_Param_entityAcl,Z_Param_jsonEntityData);
		P_NATIVE_END;
	}
	void UBCGlobalEntityProxy::StaticRegisterNativesUBCGlobalEntityProxy()
	{
		UClass* Class = UBCGlobalEntityProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateEntity", &UBCGlobalEntityProxy::execCreateEntity },
			{ "CreateEntityWithIndexedId", &UBCGlobalEntityProxy::execCreateEntityWithIndexedId },
			{ "DeleteEntity", &UBCGlobalEntityProxy::execDeleteEntity },
			{ "GetList", &UBCGlobalEntityProxy::execGetList },
			{ "GetListByIndexedId", &UBCGlobalEntityProxy::execGetListByIndexedId },
			{ "GetListCount", &UBCGlobalEntityProxy::execGetListCount },
			{ "GetPage", &UBCGlobalEntityProxy::execGetPage },
			{ "GetPageOffset", &UBCGlobalEntityProxy::execGetPageOffset },
			{ "GetRandomEntitiesMatching", &UBCGlobalEntityProxy::execGetRandomEntitiesMatching },
			{ "IncrementGlobalEntityData", &UBCGlobalEntityProxy::execIncrementGlobalEntityData },
			{ "MakeSystemEntity", &UBCGlobalEntityProxy::execMakeSystemEntity },
			{ "ReadEntity", &UBCGlobalEntityProxy::execReadEntity },
			{ "UpdateEntity", &UBCGlobalEntityProxy::execUpdateEntity },
			{ "UpdateEntityAcl", &UBCGlobalEntityProxy::execUpdateEntityAcl },
			{ "UpdateEntityIndexedId", &UBCGlobalEntityProxy::execUpdateEntityIndexedId },
			{ "UpdateEntityOwnerAndAcl", &UBCGlobalEntityProxy::execUpdateEntityOwnerAndAcl },
			{ "UpdateEntityTimeToLive", &UBCGlobalEntityProxy::execUpdateEntityTimeToLive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics
	{
		struct BCGlobalEntityProxy_eventCreateEntity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			FString timeToLive;
			UBrainCloudACL* entityAcl;
			FString jsonEntityData;
			UBCGlobalEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeToLive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_timeToLive;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_entityAcl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonEntityData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonEntityData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventCreateEntity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventCreateEntity_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_entityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_timeToLive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_timeToLive = { "timeToLive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventCreateEntity_Parms, timeToLive), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_timeToLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_timeToLive_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_entityAcl = { "entityAcl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventCreateEntity_Parms, entityAcl), Z_Construct_UClass_UBrainCloudACL_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_jsonEntityData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_jsonEntityData = { "jsonEntityData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventCreateEntity_Parms, jsonEntityData), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_jsonEntityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_jsonEntityData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventCreateEntity_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_timeToLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_entityAcl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_jsonEntityData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Entity" },
		{ "Comment", "/**\n\x09* Method creates a new entity on the server.\n\x09*\n\x09* Service Name - GlobalEntity\n\x09* Service Operation - Create\n\x09*\n\x09* Param - entityType The entity type as defined by the user\n\x09* Param - timeToLive Sets expiry time for entity if > 0\n\x09* Param - entityAcl The entity's access control object\n\x09* Param - jsonEntityData    The entity's data as a json string\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalEntityProxy.h" },
		{ "ToolTip", "Method creates a new entity on the server.\n\nService Name - GlobalEntity\nService Operation - Create\n\nParam - entityType The entity type as defined by the user\nParam - timeToLive Sets expiry time for entity if > 0\nParam - entityAcl The entity's access control object\nParam - jsonEntityData    The entity's data as a json string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalEntityProxy, nullptr, "CreateEntity", nullptr, nullptr, sizeof(BCGlobalEntityProxy_eventCreateEntity_Parms), Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics
	{
		struct BCGlobalEntityProxy_eventCreateEntityWithIndexedId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			FString indexedId;
			FString timeToLive;
			UBrainCloudACL* entityAcl;
			FString jsonEntityData;
			UBCGlobalEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_indexedId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_indexedId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeToLive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_timeToLive;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_entityAcl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonEntityData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonEntityData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventCreateEntityWithIndexedId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventCreateEntityWithIndexedId_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_entityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_indexedId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_indexedId = { "indexedId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventCreateEntityWithIndexedId_Parms, indexedId), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_indexedId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_indexedId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_timeToLive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_timeToLive = { "timeToLive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventCreateEntityWithIndexedId_Parms, timeToLive), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_timeToLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_timeToLive_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_entityAcl = { "entityAcl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventCreateEntityWithIndexedId_Parms, entityAcl), Z_Construct_UClass_UBrainCloudACL_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_jsonEntityData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_jsonEntityData = { "jsonEntityData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventCreateEntityWithIndexedId_Parms, jsonEntityData), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_jsonEntityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_jsonEntityData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventCreateEntityWithIndexedId_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_indexedId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_timeToLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_entityAcl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_jsonEntityData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Entity" },
		{ "Comment", "/**\n\x09* Method creates a new entity on the server with an indexed id.\n\x09*\n\x09* Service Name - GlobalEntity\n\x09* Service Operation - CreateWithIndexedId\n\x09*\n\x09* Param - entityType The entity type as defined by the user\n\x09* Param - indexedId A secondary ID that will be indexed\n\x09* Param - timeToLive Sets expiry time for entity if > 0\n\x09* Param - entityAcl The entity's access control object list as json.\n\x09* Param - jsonEntityData    The entity's data as a json string\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalEntityProxy.h" },
		{ "ToolTip", "Method creates a new entity on the server with an indexed id.\n\nService Name - GlobalEntity\nService Operation - CreateWithIndexedId\n\nParam - entityType The entity type as defined by the user\nParam - indexedId A secondary ID that will be indexed\nParam - timeToLive Sets expiry time for entity if > 0\nParam - entityAcl The entity's access control object list as json.\nParam - jsonEntityData    The entity's data as a json string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalEntityProxy, nullptr, "CreateEntityWithIndexedId", nullptr, nullptr, sizeof(BCGlobalEntityProxy_eventCreateEntityWithIndexedId_Parms), Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity_Statics
	{
		struct BCGlobalEntityProxy_eventDeleteEntity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityId;
			int32 version;
			UBCGlobalEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventDeleteEntity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventDeleteEntity_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity_Statics::NewProp_entityId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventDeleteEntity_Parms, version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventDeleteEntity_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Entity" },
		{ "Comment", "/**\n\x09* Method deletes an existing entity on the server.\n\x09*\n\x09* Service Name - GlobalEntity\n\x09* Service Operation - Delete\n\x09*\n\x09* Param - entityId The entity ID\n\x09* Param - version The version of the entity to delete\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalEntityProxy.h" },
		{ "ToolTip", "Method deletes an existing entity on the server.\n\nService Name - GlobalEntity\nService Operation - Delete\n\nParam - entityId The entity ID\nParam - version The version of the entity to delete" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalEntityProxy, nullptr, "DeleteEntity", nullptr, nullptr, sizeof(BCGlobalEntityProxy_eventDeleteEntity_Parms), Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics
	{
		struct BCGlobalEntityProxy_eventGetList_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString whereQuery;
			FString orderBy;
			int32 maxReturn;
			UBCGlobalEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_whereQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_whereQuery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_orderBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_orderBy;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxReturn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetList_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::NewProp_whereQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::NewProp_whereQuery = { "whereQuery", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetList_Parms, whereQuery), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::NewProp_whereQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::NewProp_whereQuery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::NewProp_orderBy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::NewProp_orderBy = { "orderBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetList_Parms, orderBy), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::NewProp_orderBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::NewProp_orderBy_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::NewProp_maxReturn = { "maxReturn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetList_Parms, maxReturn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetList_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::NewProp_whereQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::NewProp_orderBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::NewProp_maxReturn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Entity" },
		{ "Comment", "/**\n\x09* Method gets list of entities from the server base on type and/or where clause\n\x09*\n\x09* Service Name - GlobalEntity\n\x09* Service Operation - GetList\n\x09*\n\x09* Param - where Mongo style query string\n\x09* Param - orderBy Sort order\n\x09* Param - maxReturn The maximum number of entities to return\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalEntityProxy.h" },
		{ "ToolTip", "Method gets list of entities from the server base on type and/or where clause\n\nService Name - GlobalEntity\nService Operation - GetList\n\nParam - where Mongo style query string\nParam - orderBy Sort order\nParam - maxReturn The maximum number of entities to return" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalEntityProxy, nullptr, "GetList", nullptr, nullptr, sizeof(BCGlobalEntityProxy_eventGetList_Parms), Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalEntityProxy_GetList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalEntityProxy_GetList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId_Statics
	{
		struct BCGlobalEntityProxy_eventGetListByIndexedId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityIndexedId;
			int32 maxReturn;
			UBCGlobalEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityIndexedId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityIndexedId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxReturn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetListByIndexedId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId_Statics::NewProp_entityIndexedId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId_Statics::NewProp_entityIndexedId = { "entityIndexedId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetListByIndexedId_Parms, entityIndexedId), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId_Statics::NewProp_entityIndexedId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId_Statics::NewProp_entityIndexedId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId_Statics::NewProp_maxReturn = { "maxReturn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetListByIndexedId_Parms, maxReturn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetListByIndexedId_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId_Statics::NewProp_entityIndexedId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId_Statics::NewProp_maxReturn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Entity" },
		{ "Comment", "/**\n\x09* Method gets list of entities from the server base on indexed id\n\x09*\n\x09* Service Name - GlobalEntity\n\x09* Service Operation - GetListByIndexedId\n\x09*\n\x09* Param - entityIndexedId The entity indexed Id\n\x09* Param - maxReturn The maximum number of entities to return\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalEntityProxy.h" },
		{ "ToolTip", "Method gets list of entities from the server base on indexed id\n\nService Name - GlobalEntity\nService Operation - GetListByIndexedId\n\nParam - entityIndexedId The entity indexed Id\nParam - maxReturn The maximum number of entities to return" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalEntityProxy, nullptr, "GetListByIndexedId", nullptr, nullptr, sizeof(BCGlobalEntityProxy_eventGetListByIndexedId_Parms), Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalEntityProxy_GetListCount_Statics
	{
		struct BCGlobalEntityProxy_eventGetListCount_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString whereQuery;
			UBCGlobalEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_whereQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_whereQuery;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetListCount_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetListCount_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_GetListCount_Statics::NewProp_whereQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetListCount_Statics::NewProp_whereQuery = { "whereQuery", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetListCount_Parms, whereQuery), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_GetListCount_Statics::NewProp_whereQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_GetListCount_Statics::NewProp_whereQuery_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetListCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetListCount_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalEntityProxy_GetListCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetListCount_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetListCount_Statics::NewProp_whereQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetListCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_GetListCount_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Entity" },
		{ "Comment", "/**\n\x09* Method gets a count of entities based on the where clause\n\x09*\n\x09* Service Name - GlobalEntity\n\x09* Service Operation - GetListCount\n\x09*\n\x09* Param - where Mongo style query string\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalEntityProxy.h" },
		{ "ToolTip", "Method gets a count of entities based on the where clause\n\nService Name - GlobalEntity\nService Operation - GetListCount\n\nParam - where Mongo style query string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetListCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalEntityProxy, nullptr, "GetListCount", nullptr, nullptr, sizeof(BCGlobalEntityProxy_eventGetListCount_Parms), Z_Construct_UFunction_UBCGlobalEntityProxy_GetListCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_GetListCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_GetListCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_GetListCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalEntityProxy_GetListCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalEntityProxy_GetListCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalEntityProxy_GetPage_Statics
	{
		struct BCGlobalEntityProxy_eventGetPage_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString context;
			UBCGlobalEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetPage_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetPage_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_GetPage_Statics::NewProp_context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetPage_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetPage_Parms, context), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_GetPage_Statics::NewProp_context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_GetPage_Statics::NewProp_context_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetPage_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalEntityProxy_GetPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetPage_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetPage_Statics::NewProp_context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_GetPage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Entity" },
		{ "Comment", "/**\n\x09* Method uses a paging system to iterate through Global Entities\n\x09* After retrieving a page of Global Entities with this method,\n\x09* use GetPageOffset() to retrieve previous or next pages.\n\x09*\n\x09* Service Name - GlobalEntity\n\x09* Service Operation - GetPage\n\x09*\n\x09* Param - context The json context for the page request. See the portal appendix documentation for format.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalEntityProxy.h" },
		{ "ToolTip", "Method uses a paging system to iterate through Global Entities\nAfter retrieving a page of Global Entities with this method,\nuse GetPageOffset() to retrieve previous or next pages.\n\nService Name - GlobalEntity\nService Operation - GetPage\n\nParam - context The json context for the page request. See the portal appendix documentation for format." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalEntityProxy, nullptr, "GetPage", nullptr, nullptr, sizeof(BCGlobalEntityProxy_eventGetPage_Parms), Z_Construct_UFunction_UBCGlobalEntityProxy_GetPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_GetPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_GetPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_GetPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalEntityProxy_GetPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalEntityProxy_GetPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset_Statics
	{
		struct BCGlobalEntityProxy_eventGetPageOffset_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString context;
			int32 pageOffset;
			UBCGlobalEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_pageOffset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetPageOffset_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset_Statics::NewProp_context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetPageOffset_Parms, context), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset_Statics::NewProp_context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset_Statics::NewProp_context_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset_Statics::NewProp_pageOffset = { "pageOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetPageOffset_Parms, pageOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetPageOffset_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset_Statics::NewProp_context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset_Statics::NewProp_pageOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Entity" },
		{ "Comment", "/**\n\x09* Method to retrieve previous or next pages after having called the GetPage method.\n\x09*\n\x09* Service Name - GlobalEntity\n\x09* Service Operation - GetPageOffset\n\x09*\n\x09* Param - context The context string returned from the server from a\n\x09*      previous call to GetPage or GetPageOffset\n\x09* Param - pageOffset The positive or negative page offset to fetch. Uses the last page\n\x09*      retrieved using the context string to determine a starting point.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalEntityProxy.h" },
		{ "ToolTip", "Method to retrieve previous or next pages after having called the GetPage method.\n\nService Name - GlobalEntity\nService Operation - GetPageOffset\n\nParam - context The context string returned from the server from a\n     previous call to GetPage or GetPageOffset\nParam - pageOffset The positive or negative page offset to fetch. Uses the last page\n     retrieved using the context string to determine a starting point." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalEntityProxy, nullptr, "GetPageOffset", nullptr, nullptr, sizeof(BCGlobalEntityProxy_eventGetPageOffset_Parms), Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching_Statics
	{
		struct BCGlobalEntityProxy_eventGetRandomEntitiesMatching_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString whereQuery;
			int32 maxReturn;
			UBCGlobalEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_whereQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_whereQuery;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxReturn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetRandomEntitiesMatching_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_whereQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_whereQuery = { "whereQuery", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetRandomEntitiesMatching_Parms, whereQuery), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_whereQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_whereQuery_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_maxReturn = { "maxReturn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetRandomEntitiesMatching_Parms, maxReturn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventGetRandomEntitiesMatching_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_whereQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_maxReturn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Entity" },
		{ "Comment", "/**\n\x09* Gets a list of up to randomCount randomly selected entities from the server based on the where condition and specified maximum return count.\n\x09*\n\x09* Service Name - globalEntity\n\x09* Service Operation - GET_RANDOM_ENTITIES_MATCHING\n\x09*\n\x09* Param - where Mongo style query string\n\x09* Param - maxReturn The maximum number of entities to return\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalEntityProxy.h" },
		{ "ToolTip", "Gets a list of up to randomCount randomly selected entities from the server based on the where condition and specified maximum return count.\n\nService Name - globalEntity\nService Operation - GET_RANDOM_ENTITIES_MATCHING\n\nParam - where Mongo style query string\nParam - maxReturn The maximum number of entities to return" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalEntityProxy, nullptr, "GetRandomEntitiesMatching", nullptr, nullptr, sizeof(BCGlobalEntityProxy_eventGetRandomEntitiesMatching_Parms), Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics
	{
		struct BCGlobalEntityProxy_eventIncrementGlobalEntityData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityId;
			FString jsonData;
			UBCGlobalEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventIncrementGlobalEntityData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventIncrementGlobalEntityData_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::NewProp_entityId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::NewProp_jsonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventIncrementGlobalEntityData_Parms, jsonData), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::NewProp_jsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::NewProp_jsonData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventIncrementGlobalEntityData_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Entity" },
		{ "Comment", "/**\n\x09* Partial increment of global entity data field items. Partial set of items incremented as specified.\n\x09*\n\x09* Service Name - globalEntity\n\x09* Service Operation - INCREMENT_GLOBAL_ENTITY_DATA\n\x09*\n\x09* Param - entityId The id of the entity to update\n\x09* Param - jsonData The entity's data object\n\x09* Param - returnData Should the entity be returned in the response?\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalEntityProxy.h" },
		{ "ToolTip", "Partial increment of global entity data field items. Partial set of items incremented as specified.\n\nService Name - globalEntity\nService Operation - INCREMENT_GLOBAL_ENTITY_DATA\n\nParam - entityId The id of the entity to update\nParam - jsonData The entity's data object\nParam - returnData Should the entity be returned in the response?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalEntityProxy, nullptr, "IncrementGlobalEntityData", nullptr, nullptr, sizeof(BCGlobalEntityProxy_eventIncrementGlobalEntityData_Parms), Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics
	{
		struct BCGlobalEntityProxy_eventMakeSystemEntity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityId;
			int32 version;
			UBrainCloudACL* entityAcl;
			UBCGlobalEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_entityAcl;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventMakeSystemEntity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventMakeSystemEntity_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::NewProp_entityId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventMakeSystemEntity_Parms, version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::NewProp_entityAcl = { "entityAcl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventMakeSystemEntity_Parms, entityAcl), Z_Construct_UClass_UBrainCloudACL_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventMakeSystemEntity_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::NewProp_entityAcl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Entity" },
		{ "Comment", "/**\n\x09* Method clears the owner id of an existing entity and sets the ACL on the server.\n\x09*\n\x09* Service Name - globalEntity\n\x09* Service Operation - MAKE_SYSTEM_ENTITY\n\x09*\n\x09* Param - entityId The entity ID\n\x09* Param - version The version of the entity to update\n\x09* Param - entityAcl The entity's access control list\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalEntityProxy.h" },
		{ "ToolTip", "Method clears the owner id of an existing entity and sets the ACL on the server.\n\nService Name - globalEntity\nService Operation - MAKE_SYSTEM_ENTITY\n\nParam - entityId The entity ID\nParam - version The version of the entity to update\nParam - entityAcl The entity's access control list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalEntityProxy, nullptr, "MakeSystemEntity", nullptr, nullptr, sizeof(BCGlobalEntityProxy_eventMakeSystemEntity_Parms), Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalEntityProxy_ReadEntity_Statics
	{
		struct BCGlobalEntityProxy_eventReadEntity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityId;
			UBCGlobalEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_ReadEntity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventReadEntity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_ReadEntity_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_ReadEntity_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventReadEntity_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_ReadEntity_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_ReadEntity_Statics::NewProp_entityId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_ReadEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventReadEntity_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalEntityProxy_ReadEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_ReadEntity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_ReadEntity_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_ReadEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_ReadEntity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Entity" },
		{ "Comment", "/**\n\x09* Method reads an existing entity from the server.\n\x09*\n\x09* Service Name - GlobalEntity\n\x09* Service Operation - Read\n\x09*\n\x09* Param - entityId The entity ID\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalEntityProxy.h" },
		{ "ToolTip", "Method reads an existing entity from the server.\n\nService Name - GlobalEntity\nService Operation - Read\n\nParam - entityId The entity ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalEntityProxy_ReadEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalEntityProxy, nullptr, "ReadEntity", nullptr, nullptr, sizeof(BCGlobalEntityProxy_eventReadEntity_Parms), Z_Construct_UFunction_UBCGlobalEntityProxy_ReadEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_ReadEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_ReadEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_ReadEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalEntityProxy_ReadEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalEntityProxy_ReadEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics
	{
		struct BCGlobalEntityProxy_eventUpdateEntity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityId;
			int32 version;
			FString jsonEntityData;
			UBCGlobalEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonEntityData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonEntityData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntity_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::NewProp_entityId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntity_Parms, version), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::NewProp_jsonEntityData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::NewProp_jsonEntityData = { "jsonEntityData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntity_Parms, jsonEntityData), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::NewProp_jsonEntityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::NewProp_jsonEntityData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntity_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::NewProp_jsonEntityData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Entity" },
		{ "Comment", "/**\n\x09* Method updates an existing entity on the server.\n\x09*\n\x09* Service Name - GlobalEntity\n\x09* Service Operation - Update\n\x09*\n\x09* Param - entityId The entity ID\n\x09* Param - version The version of the entity to update\n\x09* Param - jsonEntityData    The entity's data as a json string\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalEntityProxy.h" },
		{ "ToolTip", "Method updates an existing entity on the server.\n\nService Name - GlobalEntity\nService Operation - Update\n\nParam - entityId The entity ID\nParam - version The version of the entity to update\nParam - jsonEntityData    The entity's data as a json string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalEntityProxy, nullptr, "UpdateEntity", nullptr, nullptr, sizeof(BCGlobalEntityProxy_eventUpdateEntity_Parms), Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics
	{
		struct BCGlobalEntityProxy_eventUpdateEntityAcl_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityId;
			int32 version;
			UBrainCloudACL* entityAcl;
			UBCGlobalEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_entityAcl;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityAcl_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityAcl_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::NewProp_entityId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityAcl_Parms, version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::NewProp_entityAcl = { "entityAcl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityAcl_Parms, entityAcl), Z_Construct_UClass_UBrainCloudACL_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityAcl_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::NewProp_entityAcl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Entity" },
		{ "Comment", "/**\n\x09* Method updates an existing entity's Acl on the server.\n\x09*\n\x09* Service Name - GlobalEntity\n\x09* Service Operation - UpdateAcl\n\x09*\n\x09* Param - entityId The entity ID\n\x09* Param - version The version of the entity to update\n\x09* Param - entityAcl The entity's access control object list.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalEntityProxy.h" },
		{ "ToolTip", "Method updates an existing entity's Acl on the server.\n\nService Name - GlobalEntity\nService Operation - UpdateAcl\n\nParam - entityId The entity ID\nParam - version The version of the entity to update\nParam - entityAcl The entity's access control object list." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalEntityProxy, nullptr, "UpdateEntityAcl", nullptr, nullptr, sizeof(BCGlobalEntityProxy_eventUpdateEntityAcl_Parms), Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics
	{
		struct BCGlobalEntityProxy_eventUpdateEntityIndexedId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityId;
			int32 version;
			FString entityIndexedId;
			UBCGlobalEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityIndexedId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityIndexedId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityIndexedId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityIndexedId_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::NewProp_entityId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityIndexedId_Parms, version), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::NewProp_entityIndexedId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::NewProp_entityIndexedId = { "entityIndexedId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityIndexedId_Parms, entityIndexedId), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::NewProp_entityIndexedId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::NewProp_entityIndexedId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityIndexedId_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::NewProp_entityIndexedId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Entity" },
		{ "Comment", "/**\n\x09* Method updates an existing entity's Owner and ACL on the server.\n\x09*\n\x09* Service Name - globalEntity\n\x09* Service Operation - UPDATE_ENTITY_OWNER_AND_ACL\n\x09*\n\x09* Param - entityId The entity ID\n\x09* Param - version The version of the entity to update\n\x09* Param - entityIndexedId the id index of the entity\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalEntityProxy.h" },
		{ "ToolTip", "Method updates an existing entity's Owner and ACL on the server.\n\nService Name - globalEntity\nService Operation - UPDATE_ENTITY_OWNER_AND_ACL\n\nParam - entityId The entity ID\nParam - version The version of the entity to update\nParam - entityIndexedId the id index of the entity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalEntityProxy, nullptr, "UpdateEntityIndexedId", nullptr, nullptr, sizeof(BCGlobalEntityProxy_eventUpdateEntityIndexedId_Parms), Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics
	{
		struct BCGlobalEntityProxy_eventUpdateEntityOwnerAndAcl_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityId;
			int32 version;
			FString ownerId;
			UBrainCloudACL* entityAcl;
			UBCGlobalEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ownerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ownerId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_entityAcl;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityOwnerAndAcl_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityOwnerAndAcl_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::NewProp_entityId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityOwnerAndAcl_Parms, version), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::NewProp_ownerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::NewProp_ownerId = { "ownerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityOwnerAndAcl_Parms, ownerId), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::NewProp_ownerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::NewProp_ownerId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::NewProp_entityAcl = { "entityAcl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityOwnerAndAcl_Parms, entityAcl), Z_Construct_UClass_UBrainCloudACL_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityOwnerAndAcl_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::NewProp_ownerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::NewProp_entityAcl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Entity" },
		{ "Comment", "/**\n\x09* Method updates an existing entity's Owner and ACL on the server.\n\x09*\n\x09* Service Name - globalEntity\n\x09* Service Operation - UPDATE_ENTITY_OWNER_AND_ACL\n\x09*\n\x09* Param - entityId The entity ID\n\x09* Param - version The version of the entity to update\n\x09* Param - ownerId The owner ID\n\x09* Param - entityAcl The entity's access control list\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalEntityProxy.h" },
		{ "ToolTip", "Method updates an existing entity's Owner and ACL on the server.\n\nService Name - globalEntity\nService Operation - UPDATE_ENTITY_OWNER_AND_ACL\n\nParam - entityId The entity ID\nParam - version The version of the entity to update\nParam - ownerId The owner ID\nParam - entityAcl The entity's access control list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalEntityProxy, nullptr, "UpdateEntityOwnerAndAcl", nullptr, nullptr, sizeof(BCGlobalEntityProxy_eventUpdateEntityOwnerAndAcl_Parms), Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics
	{
		struct BCGlobalEntityProxy_eventUpdateEntityTimeToLive_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityId;
			int32 version;
			FString timeToLive;
			UBCGlobalEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeToLive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_timeToLive;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityTimeToLive_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityTimeToLive_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::NewProp_entityId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityTimeToLive_Parms, version), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::NewProp_timeToLive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::NewProp_timeToLive = { "timeToLive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityTimeToLive_Parms, timeToLive), METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::NewProp_timeToLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::NewProp_timeToLive_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCGlobalEntityProxy_eventUpdateEntityTimeToLive_Parms, ReturnValue), Z_Construct_UClass_UBCGlobalEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::NewProp_timeToLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Global Entity" },
		{ "Comment", "/**\n\x09* Method updates an existing entity's time to live on the server.\n\x09*\n\x09* Service Name - GlobalEntity\n\x09* Service Operation - UpdateTimeToLive\n\x09*\n\x09* Param - entityId The entity ID\n\x09* Param - version The version of the entity to update\n\x09* Param - timeToLive Sets expiry time for entity if > 0\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalEntityProxy.h" },
		{ "ToolTip", "Method updates an existing entity's time to live on the server.\n\nService Name - GlobalEntity\nService Operation - UpdateTimeToLive\n\nParam - entityId The entity ID\nParam - version The version of the entity to update\nParam - timeToLive Sets expiry time for entity if > 0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCGlobalEntityProxy, nullptr, "UpdateEntityTimeToLive", nullptr, nullptr, sizeof(BCGlobalEntityProxy_eventUpdateEntityTimeToLive_Parms), Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCGlobalEntityProxy_NoRegister()
	{
		return UBCGlobalEntityProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCGlobalEntityProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCGlobalEntityProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCGlobalEntityProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntity, "CreateEntity" }, // 2714931175
		{ &Z_Construct_UFunction_UBCGlobalEntityProxy_CreateEntityWithIndexedId, "CreateEntityWithIndexedId" }, // 197521108
		{ &Z_Construct_UFunction_UBCGlobalEntityProxy_DeleteEntity, "DeleteEntity" }, // 580512690
		{ &Z_Construct_UFunction_UBCGlobalEntityProxy_GetList, "GetList" }, // 2028603331
		{ &Z_Construct_UFunction_UBCGlobalEntityProxy_GetListByIndexedId, "GetListByIndexedId" }, // 3358124764
		{ &Z_Construct_UFunction_UBCGlobalEntityProxy_GetListCount, "GetListCount" }, // 454725599
		{ &Z_Construct_UFunction_UBCGlobalEntityProxy_GetPage, "GetPage" }, // 3172603321
		{ &Z_Construct_UFunction_UBCGlobalEntityProxy_GetPageOffset, "GetPageOffset" }, // 4207827564
		{ &Z_Construct_UFunction_UBCGlobalEntityProxy_GetRandomEntitiesMatching, "GetRandomEntitiesMatching" }, // 2467576380
		{ &Z_Construct_UFunction_UBCGlobalEntityProxy_IncrementGlobalEntityData, "IncrementGlobalEntityData" }, // 4207579515
		{ &Z_Construct_UFunction_UBCGlobalEntityProxy_MakeSystemEntity, "MakeSystemEntity" }, // 2030918098
		{ &Z_Construct_UFunction_UBCGlobalEntityProxy_ReadEntity, "ReadEntity" }, // 2299950622
		{ &Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntity, "UpdateEntity" }, // 1751561661
		{ &Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityAcl, "UpdateEntityAcl" }, // 2517628772
		{ &Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityIndexedId, "UpdateEntityIndexedId" }, // 3687629104
		{ &Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityOwnerAndAcl, "UpdateEntityOwnerAndAcl" }, // 1624666804
		{ &Z_Construct_UFunction_UBCGlobalEntityProxy_UpdateEntityTimeToLive, "UpdateEntityTimeToLive" }, // 1203332543
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCGlobalEntityProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCGlobalEntityProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCGlobalEntityProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCGlobalEntityProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCGlobalEntityProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCGlobalEntityProxy_Statics::ClassParams = {
		&UBCGlobalEntityProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCGlobalEntityProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCGlobalEntityProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCGlobalEntityProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCGlobalEntityProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCGlobalEntityProxy, 4215640975);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCGlobalEntityProxy>()
	{
		return UBCGlobalEntityProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCGlobalEntityProxy(Z_Construct_UClass_UBCGlobalEntityProxy, &UBCGlobalEntityProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCGlobalEntityProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCGlobalEntityProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
