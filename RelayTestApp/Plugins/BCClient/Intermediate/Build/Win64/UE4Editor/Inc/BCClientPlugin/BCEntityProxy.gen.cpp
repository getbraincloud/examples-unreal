// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCEntityProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCEntityProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCEntityProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCEntityProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudACL_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCEntityProxy::execGetSharedEntitiesListForProfileId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_GET_PROPERTY(FStrProperty,Z_Param_whereJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_orderByJson);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxReturn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEntityProxy**)Z_Param__Result=UBCEntityProxy::GetSharedEntitiesListForProfileId(Z_Param_brainCloudWrapper,Z_Param_profileId,Z_Param_whereJson,Z_Param_orderByJson,Z_Param_maxReturn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCEntityProxy::execGetSharedEntitiesForProfileId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEntityProxy**)Z_Param__Result=UBCEntityProxy::GetSharedEntitiesForProfileId(Z_Param_brainCloudWrapper,Z_Param_profileId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCEntityProxy::execGetSharedEntityForProfileId)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEntityProxy**)Z_Param__Result=UBCEntityProxy::GetSharedEntityForProfileId(Z_Param_brainCloudWrapper,Z_Param_entityId,Z_Param_profileId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCEntityProxy::execIncrementSharedUserEntityData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FStrProperty,Z_Param_targetProfileId);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEntityProxy**)Z_Param__Result=UBCEntityProxy::IncrementSharedUserEntityData(Z_Param_brainCloudWrapper,Z_Param_entityId,Z_Param_targetProfileId,Z_Param_jsonData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCEntityProxy::execIncrementUserEntityData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEntityProxy**)Z_Param__Result=UBCEntityProxy::IncrementUserEntityData(Z_Param_brainCloudWrapper,Z_Param_entityId,Z_Param_jsonData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCEntityProxy::execGetPageOffset)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_context);
		P_GET_PROPERTY(FIntProperty,Z_Param_pageOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEntityProxy**)Z_Param__Result=UBCEntityProxy::GetPageOffset(Z_Param_brainCloudWrapper,Z_Param_context,Z_Param_pageOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCEntityProxy::execGetPage)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEntityProxy**)Z_Param__Result=UBCEntityProxy::GetPage(Z_Param_brainCloudWrapper,Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCEntityProxy::execGetListCount)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_whereJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEntityProxy**)Z_Param__Result=UBCEntityProxy::GetListCount(Z_Param_brainCloudWrapper,Z_Param_whereJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCEntityProxy::execGetList)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_whereJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_orderByJson);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxReturn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEntityProxy**)Z_Param__Result=UBCEntityProxy::GetList(Z_Param_brainCloudWrapper,Z_Param_whereJson,Z_Param_orderByJson,Z_Param_maxReturn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCEntityProxy::execUpdateSharedEntity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FStrProperty,Z_Param_targetProfileId);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonEntityData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEntityProxy**)Z_Param__Result=UBCEntityProxy::UpdateSharedEntity(Z_Param_brainCloudWrapper,Z_Param_entityId,Z_Param_targetProfileId,Z_Param_entityType,Z_Param_jsonEntityData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCEntityProxy::execGetEntitiesByType)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEntityProxy**)Z_Param__Result=UBCEntityProxy::GetEntitiesByType(Z_Param_brainCloudWrapper,Z_Param_entityType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCEntityProxy::execDeleteSingleton)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEntityProxy**)Z_Param__Result=UBCEntityProxy::DeleteSingleton(Z_Param_brainCloudWrapper,Z_Param_entityType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCEntityProxy::execDeleteEntity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEntityProxy**)Z_Param__Result=UBCEntityProxy::DeleteEntity(Z_Param_brainCloudWrapper,Z_Param_entityId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCEntityProxy::execUpdateSingleton)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonEntityData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEntityProxy**)Z_Param__Result=UBCEntityProxy::UpdateSingleton(Z_Param_brainCloudWrapper,Z_Param_entityType,Z_Param_jsonEntityData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCEntityProxy::execGetSingleton)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEntityProxy**)Z_Param__Result=UBCEntityProxy::GetSingleton(Z_Param_brainCloudWrapper,Z_Param_entityType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCEntityProxy::execGetEntity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEntityProxy**)Z_Param__Result=UBCEntityProxy::GetEntity(Z_Param_brainCloudWrapper,Z_Param_entityId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCEntityProxy::execUpdateEntity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonEntityData);
		P_GET_OBJECT(UBrainCloudACL,Z_Param_jsonEntityAcl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEntityProxy**)Z_Param__Result=UBCEntityProxy::UpdateEntity(Z_Param_brainCloudWrapper,Z_Param_entityId,Z_Param_entityType,Z_Param_jsonEntityData,Z_Param_jsonEntityAcl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCEntityProxy::execCreateEntity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonEntityData);
		P_GET_OBJECT(UBrainCloudACL,Z_Param_jsonEntityAcl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCEntityProxy**)Z_Param__Result=UBCEntityProxy::CreateEntity(Z_Param_brainCloudWrapper,Z_Param_entityType,Z_Param_jsonEntityData,Z_Param_jsonEntityAcl);
		P_NATIVE_END;
	}
	void UBCEntityProxy::StaticRegisterNativesUBCEntityProxy()
	{
		UClass* Class = UBCEntityProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateEntity", &UBCEntityProxy::execCreateEntity },
			{ "DeleteEntity", &UBCEntityProxy::execDeleteEntity },
			{ "DeleteSingleton", &UBCEntityProxy::execDeleteSingleton },
			{ "GetEntitiesByType", &UBCEntityProxy::execGetEntitiesByType },
			{ "GetEntity", &UBCEntityProxy::execGetEntity },
			{ "GetList", &UBCEntityProxy::execGetList },
			{ "GetListCount", &UBCEntityProxy::execGetListCount },
			{ "GetPage", &UBCEntityProxy::execGetPage },
			{ "GetPageOffset", &UBCEntityProxy::execGetPageOffset },
			{ "GetSharedEntitiesForProfileId", &UBCEntityProxy::execGetSharedEntitiesForProfileId },
			{ "GetSharedEntitiesListForProfileId", &UBCEntityProxy::execGetSharedEntitiesListForProfileId },
			{ "GetSharedEntityForProfileId", &UBCEntityProxy::execGetSharedEntityForProfileId },
			{ "GetSingleton", &UBCEntityProxy::execGetSingleton },
			{ "IncrementSharedUserEntityData", &UBCEntityProxy::execIncrementSharedUserEntityData },
			{ "IncrementUserEntityData", &UBCEntityProxy::execIncrementUserEntityData },
			{ "UpdateEntity", &UBCEntityProxy::execUpdateEntity },
			{ "UpdateSharedEntity", &UBCEntityProxy::execUpdateSharedEntity },
			{ "UpdateSingleton", &UBCEntityProxy::execUpdateSingleton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics
	{
		struct BCEntityProxy_eventCreateEntity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			FString jsonEntityData;
			UBrainCloudACL* jsonEntityAcl;
			UBCEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonEntityData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonEntityData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_jsonEntityAcl;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventCreateEntity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventCreateEntity_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::NewProp_entityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::NewProp_jsonEntityData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::NewProp_jsonEntityData = { "jsonEntityData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventCreateEntity_Parms, jsonEntityData), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::NewProp_jsonEntityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::NewProp_jsonEntityData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::NewProp_jsonEntityAcl = { "jsonEntityAcl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventCreateEntity_Parms, jsonEntityAcl), Z_Construct_UClass_UBrainCloudACL_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventCreateEntity_Parms, ReturnValue), Z_Construct_UClass_UBCEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::NewProp_jsonEntityData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::NewProp_jsonEntityAcl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Entity" },
		{ "Comment", "/**\n    * Method creates a new entity on the server.\n    *\n    * Service Name - Entity\n    * Service Operation - Create\n    *\n    * Param - entityType The entity type as defined by the user\n    * Param - jsonEntityData    The entity's data as a json string\n    * Param - jsonEntityAcl The entity's access control list as an IAcl object. A null acl implies default\n    * permissions which make the entity readable/writeable by only the player.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEntityProxy.h" },
		{ "ToolTip", "Method creates a new entity on the server.\n\nService Name - Entity\nService Operation - Create\n\nParam - entityType The entity type as defined by the user\nParam - jsonEntityData    The entity's data as a json string\nParam - jsonEntityAcl The entity's access control list as an IAcl object. A null acl implies default\npermissions which make the entity readable/writeable by only the player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEntityProxy, nullptr, "CreateEntity", nullptr, nullptr, sizeof(BCEntityProxy_eventCreateEntity_Parms), Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEntityProxy_CreateEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEntityProxy_CreateEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCEntityProxy_DeleteEntity_Statics
	{
		struct BCEntityProxy_eventDeleteEntity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityId;
			UBCEntityProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_DeleteEntity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventDeleteEntity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_DeleteEntity_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_DeleteEntity_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventDeleteEntity_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_DeleteEntity_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_DeleteEntity_Statics::NewProp_entityId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_DeleteEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventDeleteEntity_Parms, ReturnValue), Z_Construct_UClass_UBCEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEntityProxy_DeleteEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_DeleteEntity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_DeleteEntity_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_DeleteEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_DeleteEntity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Entity" },
		{ "Comment", "/**\n    * Method deletes the given entity on the server.\n    *\n    * Service Name - Entity\n    * Service Operation - Delete\n    *\n    * Param - entityId The id of the entity to update\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEntityProxy.h" },
		{ "ToolTip", "Method deletes the given entity on the server.\n\nService Name - Entity\nService Operation - Delete\n\nParam - entityId The id of the entity to update" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEntityProxy_DeleteEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEntityProxy, nullptr, "DeleteEntity", nullptr, nullptr, sizeof(BCEntityProxy_eventDeleteEntity_Parms), Z_Construct_UFunction_UBCEntityProxy_DeleteEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_DeleteEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_DeleteEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_DeleteEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEntityProxy_DeleteEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEntityProxy_DeleteEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCEntityProxy_DeleteSingleton_Statics
	{
		struct BCEntityProxy_eventDeleteSingleton_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			UBCEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_DeleteSingleton_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventDeleteSingleton_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_DeleteSingleton_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_DeleteSingleton_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventDeleteSingleton_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_DeleteSingleton_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_DeleteSingleton_Statics::NewProp_entityType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_DeleteSingleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventDeleteSingleton_Parms, ReturnValue), Z_Construct_UClass_UBCEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEntityProxy_DeleteSingleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_DeleteSingleton_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_DeleteSingleton_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_DeleteSingleton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_DeleteSingleton_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Entity" },
		{ "Comment", "/**\n    * Method deletes the given singleton entity on the server.\n    *\n    * Service Name - Entity\n    * Service Operation - DeleteSingleton\n    *\n    * Param - entityType The type of the entity to delete\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEntityProxy.h" },
		{ "ToolTip", "Method deletes the given singleton entity on the server.\n\nService Name - Entity\nService Operation - DeleteSingleton\n\nParam - entityType The type of the entity to delete" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEntityProxy_DeleteSingleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEntityProxy, nullptr, "DeleteSingleton", nullptr, nullptr, sizeof(BCEntityProxy_eventDeleteSingleton_Parms), Z_Construct_UFunction_UBCEntityProxy_DeleteSingleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_DeleteSingleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_DeleteSingleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_DeleteSingleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEntityProxy_DeleteSingleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEntityProxy_DeleteSingleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCEntityProxy_GetEntitiesByType_Statics
	{
		struct BCEntityProxy_eventGetEntitiesByType_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			UBCEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetEntitiesByType_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetEntitiesByType_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetEntitiesByType_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetEntitiesByType_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetEntitiesByType_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetEntitiesByType_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetEntitiesByType_Statics::NewProp_entityType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetEntitiesByType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetEntitiesByType_Parms, ReturnValue), Z_Construct_UClass_UBCEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEntityProxy_GetEntitiesByType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetEntitiesByType_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetEntitiesByType_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetEntitiesByType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetEntitiesByType_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Entity" },
		{ "Comment", "/** Method returns all player entities that match the given type.\n    * Service Name - Entity\n    * Service Operation - ReadByType\n    *\n    * Param - entityType The entity type to search for\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEntityProxy.h" },
		{ "ToolTip", "Method returns all player entities that match the given type.\nService Name - Entity\nService Operation - ReadByType\n\nParam - entityType The entity type to search for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEntityProxy_GetEntitiesByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEntityProxy, nullptr, "GetEntitiesByType", nullptr, nullptr, sizeof(BCEntityProxy_eventGetEntitiesByType_Parms), Z_Construct_UFunction_UBCEntityProxy_GetEntitiesByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetEntitiesByType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetEntitiesByType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetEntitiesByType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEntityProxy_GetEntitiesByType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEntityProxy_GetEntitiesByType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCEntityProxy_GetEntity_Statics
	{
		struct BCEntityProxy_eventGetEntity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityId;
			UBCEntityProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetEntity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetEntity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetEntity_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetEntity_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetEntity_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetEntity_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetEntity_Statics::NewProp_entityId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetEntity_Parms, ReturnValue), Z_Construct_UClass_UBCEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEntityProxy_GetEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetEntity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetEntity_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetEntity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Entity" },
		{ "Comment", "/** \n    * Method retreives a singleton entity on the server. If the entity doesn't exist, null is returned.\n    *\n    * Service Name - Entity\n    * Service Operation - Read\n    *\n    * Param - entityType The entity type as defined by the user\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEntityProxy.h" },
		{ "ToolTip", "Method retreives a singleton entity on the server. If the entity doesn't exist, null is returned.\n\nService Name - Entity\nService Operation - Read\n\nParam - entityType The entity type as defined by the user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEntityProxy_GetEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEntityProxy, nullptr, "GetEntity", nullptr, nullptr, sizeof(BCEntityProxy_eventGetEntity_Parms), Z_Construct_UFunction_UBCEntityProxy_GetEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEntityProxy_GetEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEntityProxy_GetEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCEntityProxy_GetList_Statics
	{
		struct BCEntityProxy_eventGetList_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString whereJson;
			FString orderByJson;
			int32 maxReturn;
			UBCEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_whereJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_whereJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_orderByJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_orderByJson;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxReturn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetList_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::NewProp_whereJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::NewProp_whereJson = { "whereJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetList_Parms, whereJson), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::NewProp_whereJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::NewProp_whereJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::NewProp_orderByJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::NewProp_orderByJson = { "orderByJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetList_Parms, orderByJson), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::NewProp_orderByJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::NewProp_orderByJson_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::NewProp_maxReturn = { "maxReturn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetList_Parms, maxReturn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetList_Parms, ReturnValue), Z_Construct_UClass_UBCEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::NewProp_whereJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::NewProp_orderByJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::NewProp_maxReturn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Entity" },
		{ "Comment", "/**\n    * Method gets list of entities from the server base on type and/or where clause\n    *\n    * Service Name - Entity\n    * Service Operation - GET_LIST\n    *\n    * Param - whereJson Mongo style query string\n    * Param - orderByJson Sort order\n    * Param - maxReturn The maximum number of entities to return\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEntityProxy.h" },
		{ "ToolTip", "Method gets list of entities from the server base on type and/or where clause\n\nService Name - Entity\nService Operation - GET_LIST\n\nParam - whereJson Mongo style query string\nParam - orderByJson Sort order\nParam - maxReturn The maximum number of entities to return" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEntityProxy, nullptr, "GetList", nullptr, nullptr, sizeof(BCEntityProxy_eventGetList_Parms), Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEntityProxy_GetList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEntityProxy_GetList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCEntityProxy_GetListCount_Statics
	{
		struct BCEntityProxy_eventGetListCount_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString whereJson;
			UBCEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_whereJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_whereJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetListCount_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetListCount_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetListCount_Statics::NewProp_whereJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetListCount_Statics::NewProp_whereJson = { "whereJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetListCount_Parms, whereJson), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetListCount_Statics::NewProp_whereJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetListCount_Statics::NewProp_whereJson_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetListCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetListCount_Parms, ReturnValue), Z_Construct_UClass_UBCEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEntityProxy_GetListCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetListCount_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetListCount_Statics::NewProp_whereJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetListCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetListCount_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Entity" },
		{ "Comment", "/**\n    * Method gets a count of entities based on the where clause\n    *\n    * Service Name - Entity\n    * Service Operation - GET_LIST_COUNT\n    *\n    * Param - whereJson Mongo style query string\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEntityProxy.h" },
		{ "ToolTip", "Method gets a count of entities based on the where clause\n\nService Name - Entity\nService Operation - GET_LIST_COUNT\n\nParam - whereJson Mongo style query string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEntityProxy_GetListCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEntityProxy, nullptr, "GetListCount", nullptr, nullptr, sizeof(BCEntityProxy_eventGetListCount_Parms), Z_Construct_UFunction_UBCEntityProxy_GetListCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetListCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetListCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetListCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEntityProxy_GetListCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEntityProxy_GetListCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCEntityProxy_GetPage_Statics
	{
		struct BCEntityProxy_eventGetPage_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString context;
			UBCEntityProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetPage_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetPage_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetPage_Statics::NewProp_context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetPage_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetPage_Parms, context), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetPage_Statics::NewProp_context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetPage_Statics::NewProp_context_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetPage_Parms, ReturnValue), Z_Construct_UClass_UBCEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEntityProxy_GetPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetPage_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetPage_Statics::NewProp_context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetPage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Entity" },
		{ "Comment", "/**\n    * Method uses a paging system to iterate through user entities\n    * After retrieving a page of entities with this method,\n    * use GetPageOffset() to retrieve previous or next pages.\n    *\n    * Service Name - Entity\n    * Service Operation - GetPage\n    *\n    * Param - context The json context for the page request.\n    *                   See the portal appendix documentation for format.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEntityProxy.h" },
		{ "ToolTip", "Method uses a paging system to iterate through user entities\nAfter retrieving a page of entities with this method,\nuse GetPageOffset() to retrieve previous or next pages.\n\nService Name - Entity\nService Operation - GetPage\n\nParam - context The json context for the page request.\n                  See the portal appendix documentation for format." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEntityProxy_GetPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEntityProxy, nullptr, "GetPage", nullptr, nullptr, sizeof(BCEntityProxy_eventGetPage_Parms), Z_Construct_UFunction_UBCEntityProxy_GetPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEntityProxy_GetPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEntityProxy_GetPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCEntityProxy_GetPageOffset_Statics
	{
		struct BCEntityProxy_eventGetPageOffset_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString context;
			int32 pageOffset;
			UBCEntityProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetPageOffset_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetPageOffset_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetPageOffset_Statics::NewProp_context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetPageOffset_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetPageOffset_Parms, context), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetPageOffset_Statics::NewProp_context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetPageOffset_Statics::NewProp_context_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetPageOffset_Statics::NewProp_pageOffset = { "pageOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetPageOffset_Parms, pageOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetPageOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetPageOffset_Parms, ReturnValue), Z_Construct_UClass_UBCEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEntityProxy_GetPageOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetPageOffset_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetPageOffset_Statics::NewProp_context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetPageOffset_Statics::NewProp_pageOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetPageOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetPageOffset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Entity" },
		{ "Comment", "/**\n    * Method to retrieve previous or next pages after having called the GetPage method.\n    *\n    * Service Name - Entity\n    * Service Operation - GetPageOffset\n    *\n    * Param - context The context string returned from the server from a\n    *      previous call to GetPage or GetPageOffset\n    * Param - pageOffset The positive or negative page offset to fetch. Uses the last page\n    *      retrieved using the context string to determine a starting point.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEntityProxy.h" },
		{ "ToolTip", "Method to retrieve previous or next pages after having called the GetPage method.\n\nService Name - Entity\nService Operation - GetPageOffset\n\nParam - context The context string returned from the server from a\n     previous call to GetPage or GetPageOffset\nParam - pageOffset The positive or negative page offset to fetch. Uses the last page\n     retrieved using the context string to determine a starting point." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEntityProxy_GetPageOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEntityProxy, nullptr, "GetPageOffset", nullptr, nullptr, sizeof(BCEntityProxy_eventGetPageOffset_Parms), Z_Construct_UFunction_UBCEntityProxy_GetPageOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetPageOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetPageOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetPageOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEntityProxy_GetPageOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEntityProxy_GetPageOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesForProfileId_Statics
	{
		struct BCEntityProxy_eventGetSharedEntitiesForProfileId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString profileId;
			UBCEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesForProfileId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetSharedEntitiesForProfileId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesForProfileId_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesForProfileId_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetSharedEntitiesForProfileId_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesForProfileId_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesForProfileId_Statics::NewProp_profileId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesForProfileId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetSharedEntitiesForProfileId_Parms, ReturnValue), Z_Construct_UClass_UBCEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesForProfileId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesForProfileId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesForProfileId_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesForProfileId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesForProfileId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Entity" },
		{ "Comment", "/**\n     * Method returns all shared entities for the given player id.\n     * An entity is shared if its ACL allows for the currently logged\n     * in player to read the data.\n     *\n     * Service Name - Entity\n     * Service Operation - ReadShared\n     *\n     * @param profileId The player id to retrieve shared entities for\n     * @param callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEntityProxy.h" },
		{ "ToolTip", "Method returns all shared entities for the given player id.\nAn entity is shared if its ACL allows for the currently logged\nin player to read the data.\n\nService Name - Entity\nService Operation - ReadShared\n\n@param profileId The player id to retrieve shared entities for\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesForProfileId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEntityProxy, nullptr, "GetSharedEntitiesForProfileId", nullptr, nullptr, sizeof(BCEntityProxy_eventGetSharedEntitiesForProfileId_Parms), Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesForProfileId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesForProfileId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesForProfileId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesForProfileId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesForProfileId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesForProfileId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics
	{
		struct BCEntityProxy_eventGetSharedEntitiesListForProfileId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString profileId;
			FString whereJson;
			FString orderByJson;
			int32 maxReturn;
			UBCEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_whereJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_whereJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_orderByJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_orderByJson;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxReturn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetSharedEntitiesListForProfileId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetSharedEntitiesListForProfileId_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_profileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_whereJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_whereJson = { "whereJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetSharedEntitiesListForProfileId_Parms, whereJson), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_whereJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_whereJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_orderByJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_orderByJson = { "orderByJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetSharedEntitiesListForProfileId_Parms, orderByJson), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_orderByJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_orderByJson_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_maxReturn = { "maxReturn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetSharedEntitiesListForProfileId_Parms, maxReturn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetSharedEntitiesListForProfileId_Parms, ReturnValue), Z_Construct_UClass_UBCEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_whereJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_orderByJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_maxReturn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Entity" },
		{ "Comment", "/**\n    * Method gets list of shared entities for the specified player based on type and/or where clause\n    *\n    * Service Name - Entity\n    * Service Operation - READ_SHARED_ENTITIES_LIST\n    *\n    * @param profileId The player ID to retrieve shared entities for\n    * @param whereJson Mongo style query\n    * @param orderByJson Sort order\n    * @param maxReturn The maximum number of entities to return\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEntityProxy.h" },
		{ "ToolTip", "Method gets list of shared entities for the specified player based on type and/or where clause\n\nService Name - Entity\nService Operation - READ_SHARED_ENTITIES_LIST\n\n@param profileId The player ID to retrieve shared entities for\n@param whereJson Mongo style query\n@param orderByJson Sort order\n@param maxReturn The maximum number of entities to return\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEntityProxy, nullptr, "GetSharedEntitiesListForProfileId", nullptr, nullptr, sizeof(BCEntityProxy_eventGetSharedEntitiesListForProfileId_Parms), Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics
	{
		struct BCEntityProxy_eventGetSharedEntityForProfileId_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityId;
			FString profileId;
			UBCEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetSharedEntityForProfileId_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetSharedEntityForProfileId_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::NewProp_entityId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::NewProp_profileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::NewProp_profileId = { "profileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetSharedEntityForProfileId_Parms, profileId), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::NewProp_profileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::NewProp_profileId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetSharedEntityForProfileId_Parms, ReturnValue), Z_Construct_UClass_UBCEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::NewProp_profileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Entity" },
		{ "Comment", "/**\n    * Method returns a shared entity for the given player and entity ID.\n    * An entity is shared if its ACL allows for the currently logged\n    * in player to read the data.\n    *\n    * Service Name - Entity\n    * Service Operation - READ_SHARED_ENTITY\n    *\n    * @param profileId The the profile ID of the player who owns the entity\n    * @param entityId The ID of the entity that will be retrieved\n    * @param callback The method to be invoked when the server response is received\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEntityProxy.h" },
		{ "ToolTip", "Method returns a shared entity for the given player and entity ID.\nAn entity is shared if its ACL allows for the currently logged\nin player to read the data.\n\nService Name - Entity\nService Operation - READ_SHARED_ENTITY\n\n@param profileId The the profile ID of the player who owns the entity\n@param entityId The ID of the entity that will be retrieved\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEntityProxy, nullptr, "GetSharedEntityForProfileId", nullptr, nullptr, sizeof(BCEntityProxy_eventGetSharedEntityForProfileId_Parms), Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCEntityProxy_GetSingleton_Statics
	{
		struct BCEntityProxy_eventGetSingleton_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			UBCEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetSingleton_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetSingleton_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetSingleton_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetSingleton_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetSingleton_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetSingleton_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetSingleton_Statics::NewProp_entityType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_GetSingleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventGetSingleton_Parms, ReturnValue), Z_Construct_UClass_UBCEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEntityProxy_GetSingleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetSingleton_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetSingleton_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_GetSingleton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_GetSingleton_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Entity" },
		{ "Comment", "/** \n    * Method to get a specific entity.\n    *\n    * Service Name - Entity\n    * Service Operation - ReadSingleton\n    *\n    * Param - entityId The entity id\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEntityProxy.h" },
		{ "ToolTip", "Method to get a specific entity.\n\nService Name - Entity\nService Operation - ReadSingleton\n\nParam - entityId The entity id" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEntityProxy_GetSingleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEntityProxy, nullptr, "GetSingleton", nullptr, nullptr, sizeof(BCEntityProxy_eventGetSingleton_Parms), Z_Construct_UFunction_UBCEntityProxy_GetSingleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetSingleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_GetSingleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_GetSingleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEntityProxy_GetSingleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEntityProxy_GetSingleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics
	{
		struct BCEntityProxy_eventIncrementSharedUserEntityData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityId;
			FString targetProfileId;
			FString jsonData;
			UBCEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetProfileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_targetProfileId;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventIncrementSharedUserEntityData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventIncrementSharedUserEntityData_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::NewProp_entityId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::NewProp_targetProfileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::NewProp_targetProfileId = { "targetProfileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventIncrementSharedUserEntityData_Parms, targetProfileId), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::NewProp_targetProfileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::NewProp_targetProfileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::NewProp_jsonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventIncrementSharedUserEntityData_Parms, jsonData), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::NewProp_jsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::NewProp_jsonData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventIncrementSharedUserEntityData_Parms, ReturnValue), Z_Construct_UClass_UBCEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::NewProp_targetProfileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Entity" },
		{ "Comment", "/**\n    * Partial increment of entity data field items. Partial set of items incremented as specified.\n    *\n    * Service Name - entity\n    * Service Operation - INCREMENT_SHARED_USER_ENTITY_DATA\n    *\n    * Param - entityId The id of the entity to update\n    * Param - targetPlayerId Profile ID of the entity owner\n    * Param - jsonData The entity's data object\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEntityProxy.h" },
		{ "ToolTip", "Partial increment of entity data field items. Partial set of items incremented as specified.\n\nService Name - entity\nService Operation - INCREMENT_SHARED_USER_ENTITY_DATA\n\nParam - entityId The id of the entity to update\nParam - targetPlayerId Profile ID of the entity owner\nParam - jsonData The entity's data object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEntityProxy, nullptr, "IncrementSharedUserEntityData", nullptr, nullptr, sizeof(BCEntityProxy_eventIncrementSharedUserEntityData_Parms), Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics
	{
		struct BCEntityProxy_eventIncrementUserEntityData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityId;
			FString jsonData;
			UBCEntityProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventIncrementUserEntityData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventIncrementUserEntityData_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::NewProp_entityId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::NewProp_jsonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::NewProp_jsonData = { "jsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventIncrementUserEntityData_Parms, jsonData), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::NewProp_jsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::NewProp_jsonData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventIncrementUserEntityData_Parms, ReturnValue), Z_Construct_UClass_UBCEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::NewProp_jsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Entity" },
		{ "Comment", "/**\n    * Partial increment of entity data field items. Partial set of items incremented as specified.\n    *\n    * Service Name - entity\n    * Service Operation - INCREMENT_USER_ENTITY_DATA\n    *\n    * Param - entityId The id of the entity to update\n    * Param - jsonData The entity's data object\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEntityProxy.h" },
		{ "ToolTip", "Partial increment of entity data field items. Partial set of items incremented as specified.\n\nService Name - entity\nService Operation - INCREMENT_USER_ENTITY_DATA\n\nParam - entityId The id of the entity to update\nParam - jsonData The entity's data object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEntityProxy, nullptr, "IncrementUserEntityData", nullptr, nullptr, sizeof(BCEntityProxy_eventIncrementUserEntityData_Parms), Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics
	{
		struct BCEntityProxy_eventUpdateEntity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityId;
			FString entityType;
			FString jsonEntityData;
			UBrainCloudACL* jsonEntityAcl;
			UBCEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonEntityData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonEntityData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_jsonEntityAcl;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventUpdateEntity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventUpdateEntity_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_entityId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventUpdateEntity_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_entityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_jsonEntityData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_jsonEntityData = { "jsonEntityData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventUpdateEntity_Parms, jsonEntityData), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_jsonEntityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_jsonEntityData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_jsonEntityAcl = { "jsonEntityAcl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventUpdateEntity_Parms, jsonEntityAcl), Z_Construct_UClass_UBrainCloudACL_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventUpdateEntity_Parms, ReturnValue), Z_Construct_UClass_UBCEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_jsonEntityData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_jsonEntityAcl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Entity" },
		{ "Comment", "/**\n    * Method updates a new entity on the server. This operation results in the entity\n    * data being completely replaced by the passed in JSON string.\n    *\n    * Service Name - Entity\n    * Service Operation - Update\n    *\n    * Param - entityId The id of the entity to update\n    * Param - entityType The entity type as defined by the user\n    * Param - jsonEntityData    The entity's data as a json string.\n    * Param - jsonEntityAcl The entity's access control list as an IAcl object. A null acl implies default\n    * permissions which make the entity readable/writeable by only the player.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEntityProxy.h" },
		{ "ToolTip", "Method updates a new entity on the server. This operation results in the entity\ndata being completely replaced by the passed in JSON string.\n\nService Name - Entity\nService Operation - Update\n\nParam - entityId The id of the entity to update\nParam - entityType The entity type as defined by the user\nParam - jsonEntityData    The entity's data as a json string.\nParam - jsonEntityAcl The entity's access control list as an IAcl object. A null acl implies default\npermissions which make the entity readable/writeable by only the player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEntityProxy, nullptr, "UpdateEntity", nullptr, nullptr, sizeof(BCEntityProxy_eventUpdateEntity_Parms), Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEntityProxy_UpdateEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEntityProxy_UpdateEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics
	{
		struct BCEntityProxy_eventUpdateSharedEntity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityId;
			FString targetProfileId;
			FString entityType;
			FString jsonEntityData;
			UBCEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetProfileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_targetProfileId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventUpdateSharedEntity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventUpdateSharedEntity_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_entityId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_targetProfileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_targetProfileId = { "targetProfileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventUpdateSharedEntity_Parms, targetProfileId), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_targetProfileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_targetProfileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventUpdateSharedEntity_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_entityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_jsonEntityData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_jsonEntityData = { "jsonEntityData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventUpdateSharedEntity_Parms, jsonEntityData), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_jsonEntityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_jsonEntityData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventUpdateSharedEntity_Parms, ReturnValue), Z_Construct_UClass_UBCEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_targetProfileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_jsonEntityData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Entity" },
		{ "Comment", "/**\n    * Method updates a shared entity owned by another player. This operation results in the entity\n    * data being completely replaced by the passed in JSON string.\n    *\n    * Service Name - Entity\n    * Service Operation - UpdateShared\n    *\n    * Param - entityId The id of the entity to update\n    * Param - targetPlayerId The id of the player who owns the shared entity\n    * Param - entityType The entity type as defined by the user\n    * Param - jsonEntityData    The entity's data as a json string.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEntityProxy.h" },
		{ "ToolTip", "Method updates a shared entity owned by another player. This operation results in the entity\ndata being completely replaced by the passed in JSON string.\n\nService Name - Entity\nService Operation - UpdateShared\n\nParam - entityId The id of the entity to update\nParam - targetPlayerId The id of the player who owns the shared entity\nParam - entityType The entity type as defined by the user\nParam - jsonEntityData    The entity's data as a json string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEntityProxy, nullptr, "UpdateSharedEntity", nullptr, nullptr, sizeof(BCEntityProxy_eventUpdateSharedEntity_Parms), Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics
	{
		struct BCEntityProxy_eventUpdateSingleton_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			FString jsonEntityData;
			UBCEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventUpdateSingleton_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventUpdateSingleton_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::NewProp_entityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::NewProp_jsonEntityData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::NewProp_jsonEntityData = { "jsonEntityData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventUpdateSingleton_Parms, jsonEntityData), METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::NewProp_jsonEntityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::NewProp_jsonEntityData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCEntityProxy_eventUpdateSingleton_Parms, ReturnValue), Z_Construct_UClass_UBCEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::NewProp_jsonEntityData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Entity" },
		{ "Comment", "/**\n    * Method updates a new singleton entity on the server. This operation results in the entity\n    * data being completely replaced by the passed in JSON string. If the entity doesn't exists it is created\n    *\n    * Service Name - Entity\n    * Service Operation - UpdateSingleton\n    *\n    * Param - entityType The entity type as defined by the user\n    * Param - jsonEntityData    The entity's data as a json string.\n    * permissions which make the entity readable/writeable by only the player.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEntityProxy.h" },
		{ "ToolTip", "Method updates a new singleton entity on the server. This operation results in the entity\ndata being completely replaced by the passed in JSON string. If the entity doesn't exists it is created\n\nService Name - Entity\nService Operation - UpdateSingleton\n\nParam - entityType The entity type as defined by the user\nParam - jsonEntityData    The entity's data as a json string.\npermissions which make the entity readable/writeable by only the player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCEntityProxy, nullptr, "UpdateSingleton", nullptr, nullptr, sizeof(BCEntityProxy_eventUpdateSingleton_Parms), Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCEntityProxy_NoRegister()
	{
		return UBCEntityProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCEntityProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCEntityProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCEntityProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCEntityProxy_CreateEntity, "CreateEntity" }, // 1377503004
		{ &Z_Construct_UFunction_UBCEntityProxy_DeleteEntity, "DeleteEntity" }, // 550297621
		{ &Z_Construct_UFunction_UBCEntityProxy_DeleteSingleton, "DeleteSingleton" }, // 2333956628
		{ &Z_Construct_UFunction_UBCEntityProxy_GetEntitiesByType, "GetEntitiesByType" }, // 2823234527
		{ &Z_Construct_UFunction_UBCEntityProxy_GetEntity, "GetEntity" }, // 101760935
		{ &Z_Construct_UFunction_UBCEntityProxy_GetList, "GetList" }, // 2393951356
		{ &Z_Construct_UFunction_UBCEntityProxy_GetListCount, "GetListCount" }, // 1505552225
		{ &Z_Construct_UFunction_UBCEntityProxy_GetPage, "GetPage" }, // 1052096729
		{ &Z_Construct_UFunction_UBCEntityProxy_GetPageOffset, "GetPageOffset" }, // 3091032691
		{ &Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesForProfileId, "GetSharedEntitiesForProfileId" }, // 37130597
		{ &Z_Construct_UFunction_UBCEntityProxy_GetSharedEntitiesListForProfileId, "GetSharedEntitiesListForProfileId" }, // 868776320
		{ &Z_Construct_UFunction_UBCEntityProxy_GetSharedEntityForProfileId, "GetSharedEntityForProfileId" }, // 2245545085
		{ &Z_Construct_UFunction_UBCEntityProxy_GetSingleton, "GetSingleton" }, // 495911587
		{ &Z_Construct_UFunction_UBCEntityProxy_IncrementSharedUserEntityData, "IncrementSharedUserEntityData" }, // 2575999767
		{ &Z_Construct_UFunction_UBCEntityProxy_IncrementUserEntityData, "IncrementUserEntityData" }, // 2310073472
		{ &Z_Construct_UFunction_UBCEntityProxy_UpdateEntity, "UpdateEntity" }, // 3141547728
		{ &Z_Construct_UFunction_UBCEntityProxy_UpdateSharedEntity, "UpdateSharedEntity" }, // 34965391
		{ &Z_Construct_UFunction_UBCEntityProxy_UpdateSingleton, "UpdateSingleton" }, // 516667504
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCEntityProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCEntityProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCEntityProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCEntityProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCEntityProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCEntityProxy_Statics::ClassParams = {
		&UBCEntityProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCEntityProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCEntityProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCEntityProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCEntityProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCEntityProxy, 9008802);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCEntityProxy>()
	{
		return UBCEntityProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCEntityProxy(Z_Construct_UClass_UBCEntityProxy, &UBCEntityProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCEntityProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCEntityProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
