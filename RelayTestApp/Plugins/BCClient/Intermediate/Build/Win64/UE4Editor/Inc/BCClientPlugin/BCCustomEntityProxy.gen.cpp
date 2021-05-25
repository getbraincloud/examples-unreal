// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCCustomEntityProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCCustomEntityProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCCustomEntityProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCCustomEntityProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudACL_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCCustomEntityProxy::execDeleteSingleton)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCCustomEntityProxy**)Z_Param__Result=UBCCustomEntityProxy::DeleteSingleton(Z_Param_brainCloudWrapper,Z_Param_entityType,Z_Param_version);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCCustomEntityProxy::execUpdateSingletonFields)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_GET_PROPERTY(FStrProperty,Z_Param_fieldsJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCCustomEntityProxy**)Z_Param__Result=UBCCustomEntityProxy::UpdateSingletonFields(Z_Param_brainCloudWrapper,Z_Param_entityType,Z_Param_version,Z_Param_fieldsJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCCustomEntityProxy::execUpdateSingleton)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_GET_PROPERTY(FStrProperty,Z_Param_dataJson);
		P_GET_OBJECT(UBrainCloudACL,Z_Param_jsonEntityAcl);
		P_GET_PROPERTY(FStrProperty,Z_Param_timeToLive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCCustomEntityProxy**)Z_Param__Result=UBCCustomEntityProxy::UpdateSingleton(Z_Param_brainCloudWrapper,Z_Param_entityType,Z_Param_version,Z_Param_dataJson,Z_Param_jsonEntityAcl,Z_Param_timeToLive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCCustomEntityProxy::execReadSingleton)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCCustomEntityProxy**)Z_Param__Result=UBCCustomEntityProxy::ReadSingleton(Z_Param_brainCloudWrapper,Z_Param_entityType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCCustomEntityProxy::execDeleteEntities)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_PROPERTY(FStrProperty,Z_Param_deleteCriteria);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCCustomEntityProxy**)Z_Param__Result=UBCCustomEntityProxy::DeleteEntities(Z_Param_brainCloudWrapper,Z_Param_entityType,Z_Param_deleteCriteria);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCCustomEntityProxy::execUpdateEntityFields)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_GET_PROPERTY(FStrProperty,Z_Param_fieldsJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCCustomEntityProxy**)Z_Param__Result=UBCCustomEntityProxy::UpdateEntityFields(Z_Param_brainCloudWrapper,Z_Param_entityType,Z_Param_entityId,Z_Param_version,Z_Param_fieldsJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCCustomEntityProxy::execUpdateEntity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_GET_PROPERTY(FStrProperty,Z_Param_dataJson);
		P_GET_OBJECT(UBrainCloudACL,Z_Param_jsonEntityAcl);
		P_GET_PROPERTY(FStrProperty,Z_Param_timeToLive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCCustomEntityProxy**)Z_Param__Result=UBCCustomEntityProxy::UpdateEntity(Z_Param_brainCloudWrapper,Z_Param_entityType,Z_Param_entityId,Z_Param_version,Z_Param_dataJson,Z_Param_jsonEntityAcl,Z_Param_timeToLive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCCustomEntityProxy::execIncrementData)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FStrProperty,Z_Param_fieldsJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCCustomEntityProxy**)Z_Param__Result=UBCCustomEntityProxy::IncrementData(Z_Param_brainCloudWrapper,Z_Param_entityType,Z_Param_entityId,Z_Param_fieldsJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCCustomEntityProxy::execReadEntity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCCustomEntityProxy**)Z_Param__Result=UBCCustomEntityProxy::ReadEntity(Z_Param_brainCloudWrapper,Z_Param_entityType,Z_Param_entityId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCCustomEntityProxy::execGetEntityPageOffset)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_PROPERTY(FStrProperty,Z_Param_context);
		P_GET_PROPERTY(FIntProperty,Z_Param_pageOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCCustomEntityProxy**)Z_Param__Result=UBCCustomEntityProxy::GetEntityPageOffset(Z_Param_brainCloudWrapper,Z_Param_entityType,Z_Param_context,Z_Param_pageOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCCustomEntityProxy::execGetEntityPage)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_PROPERTY(FStrProperty,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCCustomEntityProxy**)Z_Param__Result=UBCCustomEntityProxy::GetEntityPage(Z_Param_brainCloudWrapper,Z_Param_entityType,Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCCustomEntityProxy::execGetRandomEntitiesMatching)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_PROPERTY(FStrProperty,Z_Param_whereJson);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_maxReturn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCCustomEntityProxy**)Z_Param__Result=UBCCustomEntityProxy::GetRandomEntitiesMatching(Z_Param_brainCloudWrapper,Z_Param_entityType,Z_Param_whereJson,Z_Param_Out_maxReturn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCCustomEntityProxy::execGetCount)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_PROPERTY(FStrProperty,Z_Param_whereJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCCustomEntityProxy**)Z_Param__Result=UBCCustomEntityProxy::GetCount(Z_Param_brainCloudWrapper,Z_Param_entityType,Z_Param_whereJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCCustomEntityProxy::execDeleteEntity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityId);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCCustomEntityProxy**)Z_Param__Result=UBCCustomEntityProxy::DeleteEntity(Z_Param_brainCloudWrapper,Z_Param_entityType,Z_Param_entityId,Z_Param_version);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCCustomEntityProxy::execCreateEntity)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_entityType);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonEntityData);
		P_GET_OBJECT(UBrainCloudACL,Z_Param_jsonEntityAcl);
		P_GET_PROPERTY(FStrProperty,Z_Param_timeToLive);
		P_GET_UBOOL(Z_Param_isOwned);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCCustomEntityProxy**)Z_Param__Result=UBCCustomEntityProxy::CreateEntity(Z_Param_brainCloudWrapper,Z_Param_entityType,Z_Param_jsonEntityData,Z_Param_jsonEntityAcl,Z_Param_timeToLive,Z_Param_isOwned);
		P_NATIVE_END;
	}
	void UBCCustomEntityProxy::StaticRegisterNativesUBCCustomEntityProxy()
	{
		UClass* Class = UBCCustomEntityProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateEntity", &UBCCustomEntityProxy::execCreateEntity },
			{ "DeleteEntities", &UBCCustomEntityProxy::execDeleteEntities },
			{ "DeleteEntity", &UBCCustomEntityProxy::execDeleteEntity },
			{ "DeleteSingleton", &UBCCustomEntityProxy::execDeleteSingleton },
			{ "GetCount", &UBCCustomEntityProxy::execGetCount },
			{ "GetEntityPage", &UBCCustomEntityProxy::execGetEntityPage },
			{ "GetEntityPageOffset", &UBCCustomEntityProxy::execGetEntityPageOffset },
			{ "GetRandomEntitiesMatching", &UBCCustomEntityProxy::execGetRandomEntitiesMatching },
			{ "IncrementData", &UBCCustomEntityProxy::execIncrementData },
			{ "ReadEntity", &UBCCustomEntityProxy::execReadEntity },
			{ "ReadSingleton", &UBCCustomEntityProxy::execReadSingleton },
			{ "UpdateEntity", &UBCCustomEntityProxy::execUpdateEntity },
			{ "UpdateEntityFields", &UBCCustomEntityProxy::execUpdateEntityFields },
			{ "UpdateSingleton", &UBCCustomEntityProxy::execUpdateSingleton },
			{ "UpdateSingletonFields", &UBCCustomEntityProxy::execUpdateSingletonFields },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics
	{
		struct BCCustomEntityProxy_eventCreateEntity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			FString jsonEntityData;
			UBrainCloudACL* jsonEntityAcl;
			FString timeToLive;
			bool isOwned;
			UBCCustomEntityProxy* ReturnValue;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeToLive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_timeToLive;
		static void NewProp_isOwned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOwned;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventCreateEntity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventCreateEntity_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_entityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_jsonEntityData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_jsonEntityData = { "jsonEntityData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventCreateEntity_Parms, jsonEntityData), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_jsonEntityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_jsonEntityData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_jsonEntityAcl = { "jsonEntityAcl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventCreateEntity_Parms, jsonEntityAcl), Z_Construct_UClass_UBrainCloudACL_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_timeToLive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_timeToLive = { "timeToLive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventCreateEntity_Parms, timeToLive), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_timeToLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_timeToLive_MetaData)) };
	void Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_isOwned_SetBit(void* Obj)
	{
		((BCCustomEntityProxy_eventCreateEntity_Parms*)Obj)->isOwned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_isOwned = { "isOwned", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCCustomEntityProxy_eventCreateEntity_Parms), &Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_isOwned_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventCreateEntity_Parms, ReturnValue), Z_Construct_UClass_UBCCustomEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_jsonEntityData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_jsonEntityAcl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_timeToLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_isOwned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|CustomEntity" },
		{ "Comment", "/**\n     * Creates new custom entity.\n     *\n     * Service Name - CustomEntity\n     * Service Operation - CreateEntity\n     *\n     * @param entityType The entity type as defined by the user\n     * @param jsonEntityData    The entity's data as a json string\n     * @param jsonEntityAcl The entity's access control list as an IAcl object. A null acl implies default\n     * permissions which make the entity readable/writeable by only the player.\n     * @param timeToLive\n     * @param callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCCustomEntityProxy.h" },
		{ "ToolTip", "Creates new custom entity.\n\nService Name - CustomEntity\nService Operation - CreateEntity\n\n@param entityType The entity type as defined by the user\n@param jsonEntityData    The entity's data as a json string\n@param jsonEntityAcl The entity's access control list as an IAcl object. A null acl implies default\npermissions which make the entity readable/writeable by only the player.\n@param timeToLive\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCCustomEntityProxy, nullptr, "CreateEntity", nullptr, nullptr, sizeof(BCCustomEntityProxy_eventCreateEntity_Parms), Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics
	{
		struct BCCustomEntityProxy_eventDeleteEntities_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			FString deleteCriteria;
			UBCCustomEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deleteCriteria_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deleteCriteria;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventDeleteEntities_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventDeleteEntities_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::NewProp_entityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::NewProp_deleteCriteria_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::NewProp_deleteCriteria = { "deleteCriteria", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventDeleteEntities_Parms, deleteCriteria), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::NewProp_deleteCriteria_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::NewProp_deleteCriteria_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventDeleteEntities_Parms, ReturnValue), Z_Construct_UClass_UBCCustomEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::NewProp_deleteCriteria,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|CustomEntity" },
		{ "Comment", "/**\n     * deletes entities based on the deleteCriteria\n     * \n     * Service Name - CustomEntity\n     * Service Operation - DeleteEntities\n     *\n     * @param entityType The entity type as defined by the user\n     * @param deleteCriteria\n     * @param callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCCustomEntityProxy.h" },
		{ "ToolTip", "deletes entities based on the deleteCriteria\n\nService Name - CustomEntity\nService Operation - DeleteEntities\n\n@param entityType The entity type as defined by the user\n@param deleteCriteria\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCCustomEntityProxy, nullptr, "DeleteEntities", nullptr, nullptr, sizeof(BCCustomEntityProxy_eventDeleteEntities_Parms), Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics
	{
		struct BCCustomEntityProxy_eventDeleteEntity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			FString entityId;
			int32 version;
			UBCCustomEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventDeleteEntity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventDeleteEntity_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::NewProp_entityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventDeleteEntity_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::NewProp_entityId_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventDeleteEntity_Parms, version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventDeleteEntity_Parms, ReturnValue), Z_Construct_UClass_UBCCustomEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|CustomEntity" },
		{ "Comment", "/**\n     * Deletes the specified custom entity on the server.\n     *\n     * Service Name - CustomEntity\n     * Service Operation - DeleteEntity\n     *\n     * @param entityType The entity type as defined by the user\n     * @param entityId  The entity's data as a json string\n     * @param version\n     * @param callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCCustomEntityProxy.h" },
		{ "ToolTip", "Deletes the specified custom entity on the server.\n\nService Name - CustomEntity\nService Operation - DeleteEntity\n\n@param entityType The entity type as defined by the user\n@param entityId  The entity's data as a json string\n@param version\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCCustomEntityProxy, nullptr, "DeleteEntity", nullptr, nullptr, sizeof(BCCustomEntityProxy_eventDeleteEntity_Parms), Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton_Statics
	{
		struct BCCustomEntityProxy_eventDeleteSingleton_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			int32 version;
			UBCCustomEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventDeleteSingleton_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventDeleteSingleton_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton_Statics::NewProp_entityType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventDeleteSingleton_Parms, version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventDeleteSingleton_Parms, ReturnValue), Z_Construct_UClass_UBCCustomEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|CustomEntity" },
		{ "Comment", "/**\n     * Deletes the specified custom entity singleton, owned by the session's user, for the specified entity type, on the server.\n     * \n     * Service Name - CustomEntity\n     * Service Operation - deleteSingleton\n     *\n     * @param entityType The entity type as defined by the user\n     * @param version\n     * @param callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCCustomEntityProxy.h" },
		{ "ToolTip", "Deletes the specified custom entity singleton, owned by the session's user, for the specified entity type, on the server.\n\nService Name - CustomEntity\nService Operation - deleteSingleton\n\n@param entityType The entity type as defined by the user\n@param version\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCCustomEntityProxy, nullptr, "DeleteSingleton", nullptr, nullptr, sizeof(BCCustomEntityProxy_eventDeleteSingleton_Parms), Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics
	{
		struct BCCustomEntityProxy_eventGetCount_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			FString whereJson;
			UBCCustomEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventGetCount_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventGetCount_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::NewProp_entityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::NewProp_whereJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::NewProp_whereJson = { "whereJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventGetCount_Parms, whereJson), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::NewProp_whereJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::NewProp_whereJson_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventGetCount_Parms, ReturnValue), Z_Construct_UClass_UBCCustomEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::NewProp_whereJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|CustomEntity" },
		{ "Comment", "/**\n     * Creates new custom entity.\n     *\n     * Service Name - CustomEntity\n     * Service Operation - GetCount\n     *\n     * @param entityType The entity type as defined by the user\n     * @param whereJson what to get count of\n     * @param callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCCustomEntityProxy.h" },
		{ "ToolTip", "Creates new custom entity.\n\nService Name - CustomEntity\nService Operation - GetCount\n\n@param entityType The entity type as defined by the user\n@param whereJson what to get count of\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCCustomEntityProxy, nullptr, "GetCount", nullptr, nullptr, sizeof(BCCustomEntityProxy_eventGetCount_Parms), Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCCustomEntityProxy_GetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCCustomEntityProxy_GetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics
	{
		struct BCCustomEntityProxy_eventGetEntityPage_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			FString context;
			UBCCustomEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventGetEntityPage_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventGetEntityPage_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::NewProp_entityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::NewProp_context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventGetEntityPage_Parms, context), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::NewProp_context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::NewProp_context_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventGetEntityPage_Parms, ReturnValue), Z_Construct_UClass_UBCCustomEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::NewProp_context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Custom Entity" },
		{ "Comment", "/**\n\x09* Method uses a paging system to iterate through Custom Entities\n\x09* After retrieving a page of Custom Entities with this method,\n\x09* use GetEntityPageOffset() to retrieve previous or next pages.\n\x09*\n\x09* Service Name - CustomEntity\n\x09* Service Operation - GetEntityPage\n\x09*\n\x09* Param - context The json context for the page request. See the portal appendix documentation for format.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCCustomEntityProxy.h" },
		{ "ToolTip", "Method uses a paging system to iterate through Custom Entities\nAfter retrieving a page of Custom Entities with this method,\nuse GetEntityPageOffset() to retrieve previous or next pages.\n\nService Name - CustomEntity\nService Operation - GetEntityPage\n\nParam - context The json context for the page request. See the portal appendix documentation for format." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCCustomEntityProxy, nullptr, "GetEntityPage", nullptr, nullptr, sizeof(BCCustomEntityProxy_eventGetEntityPage_Parms), Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics
	{
		struct BCCustomEntityProxy_eventGetEntityPageOffset_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			FString context;
			int32 pageOffset;
			UBCCustomEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_pageOffset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventGetEntityPageOffset_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventGetEntityPageOffset_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::NewProp_entityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::NewProp_context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventGetEntityPageOffset_Parms, context), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::NewProp_context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::NewProp_context_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::NewProp_pageOffset = { "pageOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventGetEntityPageOffset_Parms, pageOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventGetEntityPageOffset_Parms, ReturnValue), Z_Construct_UClass_UBCCustomEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::NewProp_context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::NewProp_pageOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Custom Entity" },
		{ "Comment", "/**\n\x09* Method to retrieve previous or next pages after having called the GetEntityPage method.\n\x09*\n\x09* Service Name - CustomEntity\n\x09* Service Operation - GetEntityPageOffset\n\x09*\n\x09* Param - context The context string returned from the server from a\n\x09*      previous call to GetEntityPage or GetEntityPageOffset\n\x09* Param - pageOffset The positive or negative page offset to fetch. Uses the last page\n\x09*      retrieved using the context string to determine a starting point.\n\x09*/" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCCustomEntityProxy.h" },
		{ "ToolTip", "Method to retrieve previous or next pages after having called the GetEntityPage method.\n\nService Name - CustomEntity\nService Operation - GetEntityPageOffset\n\nParam - context The context string returned from the server from a\n     previous call to GetEntityPage or GetEntityPageOffset\nParam - pageOffset The positive or negative page offset to fetch. Uses the last page\n     retrieved using the context string to determine a starting point." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCCustomEntityProxy, nullptr, "GetEntityPageOffset", nullptr, nullptr, sizeof(BCCustomEntityProxy_eventGetEntityPageOffset_Parms), Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics
	{
		struct BCCustomEntityProxy_eventGetRandomEntitiesMatching_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			FString whereJson;
			int64 maxReturn;
			UBCCustomEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_whereJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_whereJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxReturn_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_maxReturn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventGetRandomEntitiesMatching_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventGetRandomEntitiesMatching_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_entityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_whereJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_whereJson = { "whereJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventGetRandomEntitiesMatching_Parms, whereJson), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_whereJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_whereJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_maxReturn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_maxReturn = { "maxReturn", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventGetRandomEntitiesMatching_Parms, maxReturn), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_maxReturn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_maxReturn_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventGetRandomEntitiesMatching_Parms, ReturnValue), Z_Construct_UClass_UBCCustomEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_whereJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_maxReturn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|CustomEntity" },
		{ "Comment", "/**\n     * Gets a list of up to maxReturn randomly selected custom entities from the server based on the entity type and where condition.\n     *\n     * Service Name - CustomEntity\n     * Service Operation - GetRandomEntitiesMatching\n     *\n     * @param entityType The entity type as defined by the user\n     * @param whereJson Mongostyle query string\n     * @param maxReturn number of max returns\n     * @param callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCCustomEntityProxy.h" },
		{ "ToolTip", "Gets a list of up to maxReturn randomly selected custom entities from the server based on the entity type and where condition.\n\nService Name - CustomEntity\nService Operation - GetRandomEntitiesMatching\n\n@param entityType The entity type as defined by the user\n@param whereJson Mongostyle query string\n@param maxReturn number of max returns\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCCustomEntityProxy, nullptr, "GetRandomEntitiesMatching", nullptr, nullptr, sizeof(BCCustomEntityProxy_eventGetRandomEntitiesMatching_Parms), Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics
	{
		struct BCCustomEntityProxy_eventIncrementData_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			FString entityId;
			FString fieldsJson;
			UBCCustomEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fieldsJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fieldsJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventIncrementData_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventIncrementData_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::NewProp_entityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventIncrementData_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::NewProp_entityId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::NewProp_fieldsJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::NewProp_fieldsJson = { "fieldsJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventIncrementData_Parms, fieldsJson), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::NewProp_fieldsJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::NewProp_fieldsJson_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventIncrementData_Parms, ReturnValue), Z_Construct_UClass_UBCCustomEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::NewProp_fieldsJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|CustomEntity" },
		{ "Comment", "/**\n     * Reads a custom entity.\n     * \n     * Service Name - CustomEntity\n     * Service Operation - ReadEntity\n     *\n     * @param entityType The entity type as defined by the user\n     * @param entityId\n     * @param fieldsJson\n     * @param callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCCustomEntityProxy.h" },
		{ "ToolTip", "Reads a custom entity.\n\nService Name - CustomEntity\nService Operation - ReadEntity\n\n@param entityType The entity type as defined by the user\n@param entityId\n@param fieldsJson\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCCustomEntityProxy, nullptr, "IncrementData", nullptr, nullptr, sizeof(BCCustomEntityProxy_eventIncrementData_Parms), Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics
	{
		struct BCCustomEntityProxy_eventReadEntity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			FString entityId;
			UBCCustomEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventReadEntity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventReadEntity_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::NewProp_entityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventReadEntity_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::NewProp_entityId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventReadEntity_Parms, ReturnValue), Z_Construct_UClass_UBCCustomEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|CustomEntity" },
		{ "Comment", "/**\n     * Reads a custom entity.\n     * \n     * Service Name - CustomEntity\n     * Service Operation - ReadEntity\n     *\n     * @param entityType The entity type as defined by the user\n     * @param entityId\n     * @param callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCCustomEntityProxy.h" },
		{ "ToolTip", "Reads a custom entity.\n\nService Name - CustomEntity\nService Operation - ReadEntity\n\n@param entityType The entity type as defined by the user\n@param entityId\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCCustomEntityProxy, nullptr, "ReadEntity", nullptr, nullptr, sizeof(BCCustomEntityProxy_eventReadEntity_Parms), Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCCustomEntityProxy_ReadSingleton_Statics
	{
		struct BCCustomEntityProxy_eventReadSingleton_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			UBCCustomEntityProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_ReadSingleton_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventReadSingleton_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_ReadSingleton_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_ReadSingleton_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventReadSingleton_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_ReadSingleton_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_ReadSingleton_Statics::NewProp_entityType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_ReadSingleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventReadSingleton_Parms, ReturnValue), Z_Construct_UClass_UBCCustomEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCCustomEntityProxy_ReadSingleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_ReadSingleton_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_ReadSingleton_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_ReadSingleton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_ReadSingleton_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|CustomEntity" },
		{ "Comment", "/**\n     * Reads the custom entity singleton owned by the session's user.\n     * \n     * Service Name - CustomEntity\n     * Service Operation - readSingleton\n     *\n     * @param entityType The entity type as defined by the user\n     * @param callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCCustomEntityProxy.h" },
		{ "ToolTip", "Reads the custom entity singleton owned by the session's user.\n\nService Name - CustomEntity\nService Operation - readSingleton\n\n@param entityType The entity type as defined by the user\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCCustomEntityProxy_ReadSingleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCCustomEntityProxy, nullptr, "ReadSingleton", nullptr, nullptr, sizeof(BCCustomEntityProxy_eventReadSingleton_Parms), Z_Construct_UFunction_UBCCustomEntityProxy_ReadSingleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_ReadSingleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_ReadSingleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_ReadSingleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCCustomEntityProxy_ReadSingleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCCustomEntityProxy_ReadSingleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics
	{
		struct BCCustomEntityProxy_eventUpdateEntity_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			FString entityId;
			int32 version;
			FString dataJson;
			UBrainCloudACL* jsonEntityAcl;
			FString timeToLive;
			UBCCustomEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dataJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dataJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_jsonEntityAcl;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateEntity_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateEntity_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_entityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateEntity_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_entityId_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateEntity_Parms, version), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_dataJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_dataJson = { "dataJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateEntity_Parms, dataJson), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_dataJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_dataJson_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_jsonEntityAcl = { "jsonEntityAcl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateEntity_Parms, jsonEntityAcl), Z_Construct_UClass_UBrainCloudACL_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_timeToLive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_timeToLive = { "timeToLive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateEntity_Parms, timeToLive), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_timeToLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_timeToLive_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateEntity_Parms, ReturnValue), Z_Construct_UClass_UBCCustomEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_dataJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_jsonEntityAcl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_timeToLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|CustomEntity" },
		{ "Comment", "/**\n     * Reads a custom entity.\n     * \n     * Service Name - CustomEntity\n     * Service Operation - UpdateEntity\n     *\n     * @param entityType The entity type as defined by the user\n     * @param entityId\n     * @param version\n     * @param dataJson\n     * @param acl\n     * @param timeToLive\n     * @param callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCCustomEntityProxy.h" },
		{ "ToolTip", "Reads a custom entity.\n\nService Name - CustomEntity\nService Operation - UpdateEntity\n\n@param entityType The entity type as defined by the user\n@param entityId\n@param version\n@param dataJson\n@param acl\n@param timeToLive\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCCustomEntityProxy, nullptr, "UpdateEntity", nullptr, nullptr, sizeof(BCCustomEntityProxy_eventUpdateEntity_Parms), Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics
	{
		struct BCCustomEntityProxy_eventUpdateEntityFields_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			FString entityId;
			int32 version;
			FString fieldsJson;
			UBCCustomEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fieldsJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fieldsJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateEntityFields_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateEntityFields_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_entityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_entityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateEntityFields_Parms, entityId), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_entityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_entityId_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateEntityFields_Parms, version), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_fieldsJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_fieldsJson = { "fieldsJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateEntityFields_Parms, fieldsJson), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_fieldsJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_fieldsJson_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateEntityFields_Parms, ReturnValue), Z_Construct_UClass_UBCCustomEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_entityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_fieldsJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|CustomEntity" },
		{ "Comment", "/**\n     * Sets the specified fields within custom entity data on the server.\n     * \n     * Service Name - CustomEntity\n     * Service Operation - UpdateEntityFields\n     *\n     * @param entityType The entity type as defined by the user\n     * @param entityId\n     * @param version\n     * @param fieldsJson\n     * @param callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCCustomEntityProxy.h" },
		{ "ToolTip", "Sets the specified fields within custom entity data on the server.\n\nService Name - CustomEntity\nService Operation - UpdateEntityFields\n\n@param entityType The entity type as defined by the user\n@param entityId\n@param version\n@param fieldsJson\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCCustomEntityProxy, nullptr, "UpdateEntityFields", nullptr, nullptr, sizeof(BCCustomEntityProxy_eventUpdateEntityFields_Parms), Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics
	{
		struct BCCustomEntityProxy_eventUpdateSingleton_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			int32 version;
			FString dataJson;
			UBrainCloudACL* jsonEntityAcl;
			FString timeToLive;
			UBCCustomEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dataJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dataJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_jsonEntityAcl;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateSingleton_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateSingleton_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_entityType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateSingleton_Parms, version), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_dataJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_dataJson = { "dataJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateSingleton_Parms, dataJson), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_dataJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_dataJson_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_jsonEntityAcl = { "jsonEntityAcl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateSingleton_Parms, jsonEntityAcl), Z_Construct_UClass_UBrainCloudACL_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_timeToLive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_timeToLive = { "timeToLive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateSingleton_Parms, timeToLive), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_timeToLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_timeToLive_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateSingleton_Parms, ReturnValue), Z_Construct_UClass_UBCCustomEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_dataJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_jsonEntityAcl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_timeToLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|CustomEntity" },
		{ "Comment", "/**\n     * Updates the singleton owned by the user for the specified custom entity type on the server, creating the singleton if it does not exist. This operation results in the owned singleton's data being completely replaced by the passed in JSON object.\n     * \n     * Service Name - CustomEntity\n     * Service Operation - updateSingleton\n     *\n     * @param entityType The entity type as defined by the user\n     * @param version\n     * @param dataJson\n     * @param jsonEntityAcl\n     * @param timeToLive\n     * @param callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCCustomEntityProxy.h" },
		{ "ToolTip", "Updates the singleton owned by the user for the specified custom entity type on the server, creating the singleton if it does not exist. This operation results in the owned singleton's data being completely replaced by the passed in JSON object.\n\nService Name - CustomEntity\nService Operation - updateSingleton\n\n@param entityType The entity type as defined by the user\n@param version\n@param dataJson\n@param jsonEntityAcl\n@param timeToLive\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCCustomEntityProxy, nullptr, "UpdateSingleton", nullptr, nullptr, sizeof(BCCustomEntityProxy_eventUpdateSingleton_Parms), Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics
	{
		struct BCCustomEntityProxy_eventUpdateSingletonFields_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString entityType;
			int32 version;
			FString fieldsJson;
			UBCCustomEntityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_entityType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fieldsJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fieldsJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateSingletonFields_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::NewProp_entityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateSingletonFields_Parms, entityType), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::NewProp_entityType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateSingletonFields_Parms, version), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::NewProp_fieldsJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::NewProp_fieldsJson = { "fieldsJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateSingletonFields_Parms, fieldsJson), METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::NewProp_fieldsJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::NewProp_fieldsJson_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCCustomEntityProxy_eventUpdateSingletonFields_Parms, ReturnValue), Z_Construct_UClass_UBCCustomEntityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::NewProp_entityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::NewProp_fieldsJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|CustomEntity" },
		{ "Comment", "/**\n     * Partially updates the data, of the singleton owned by the user for the specified custom entity type, with the specified fields, on the server\n     * \n     * Service Name - CustomEntity\n     * Service Operation - updateSingletonFields\n     *\n     * @param entityType The entity type as defined by the user\n     * @param version\n     * @param fieldsJson\n     * @param callback The method to be invoked when the server response is received\n     */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCCustomEntityProxy.h" },
		{ "ToolTip", "Partially updates the data, of the singleton owned by the user for the specified custom entity type, with the specified fields, on the server\n\nService Name - CustomEntity\nService Operation - updateSingletonFields\n\n@param entityType The entity type as defined by the user\n@param version\n@param fieldsJson\n@param callback The method to be invoked when the server response is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCCustomEntityProxy, nullptr, "UpdateSingletonFields", nullptr, nullptr, sizeof(BCCustomEntityProxy_eventUpdateSingletonFields_Parms), Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCCustomEntityProxy_NoRegister()
	{
		return UBCCustomEntityProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCCustomEntityProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCCustomEntityProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCCustomEntityProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCCustomEntityProxy_CreateEntity, "CreateEntity" }, // 1391617427
		{ &Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntities, "DeleteEntities" }, // 3813415272
		{ &Z_Construct_UFunction_UBCCustomEntityProxy_DeleteEntity, "DeleteEntity" }, // 2686231673
		{ &Z_Construct_UFunction_UBCCustomEntityProxy_DeleteSingleton, "DeleteSingleton" }, // 3267452594
		{ &Z_Construct_UFunction_UBCCustomEntityProxy_GetCount, "GetCount" }, // 2136595540
		{ &Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPage, "GetEntityPage" }, // 1729885127
		{ &Z_Construct_UFunction_UBCCustomEntityProxy_GetEntityPageOffset, "GetEntityPageOffset" }, // 1805201890
		{ &Z_Construct_UFunction_UBCCustomEntityProxy_GetRandomEntitiesMatching, "GetRandomEntitiesMatching" }, // 492284129
		{ &Z_Construct_UFunction_UBCCustomEntityProxy_IncrementData, "IncrementData" }, // 3174484395
		{ &Z_Construct_UFunction_UBCCustomEntityProxy_ReadEntity, "ReadEntity" }, // 3364621873
		{ &Z_Construct_UFunction_UBCCustomEntityProxy_ReadSingleton, "ReadSingleton" }, // 2708356067
		{ &Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntity, "UpdateEntity" }, // 3144434179
		{ &Z_Construct_UFunction_UBCCustomEntityProxy_UpdateEntityFields, "UpdateEntityFields" }, // 4049928590
		{ &Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingleton, "UpdateSingleton" }, // 2829017140
		{ &Z_Construct_UFunction_UBCCustomEntityProxy_UpdateSingletonFields, "UpdateSingletonFields" }, // 3242039088
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCCustomEntityProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCCustomEntityProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCCustomEntityProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCCustomEntityProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCCustomEntityProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCCustomEntityProxy_Statics::ClassParams = {
		&UBCCustomEntityProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCCustomEntityProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCCustomEntityProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCCustomEntityProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCCustomEntityProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCCustomEntityProxy, 4173890952);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCCustomEntityProxy>()
	{
		return UBCCustomEntityProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCCustomEntityProxy(Z_Construct_UClass_UBCCustomEntityProxy, &UBCCustomEntityProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCCustomEntityProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCCustomEntityProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
