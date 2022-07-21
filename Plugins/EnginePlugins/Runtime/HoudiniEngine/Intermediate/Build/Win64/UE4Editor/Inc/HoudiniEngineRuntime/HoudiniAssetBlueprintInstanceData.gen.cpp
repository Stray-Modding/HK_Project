// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniAssetBlueprintInstanceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetBlueprintInstanceData() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentInstanceData();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInput_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FHoudiniAssetBlueprintInstanceData>() == std::is_polymorphic<FActorComponentInstanceData>(), "USTRUCT FHoudiniAssetBlueprintInstanceData cannot be polymorphic unless super FActorComponentInstanceData is polymorphic");

class UScriptStruct* FHoudiniAssetBlueprintInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniAssetBlueprintInstanceData"), sizeof(FHoudiniAssetBlueprintInstanceData), Get_Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniAssetBlueprintInstanceData>()
{
	return FHoudiniAssetBlueprintInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniAssetBlueprintInstanceData(FHoudiniAssetBlueprintInstanceData::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniAssetBlueprintInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniAssetBlueprintInstanceData
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniAssetBlueprintInstanceData()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniAssetBlueprintInstanceData>(FName(TEXT("HoudiniAssetBlueprintInstanceData")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniAssetBlueprintInstanceData;
	struct Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoudiniAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssetId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssetState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AssetState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubAssetIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SubAssetIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetCookCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AssetCookCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenLoaded_MetaData[];
#endif
		static void NewProp_bHasBeenLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenDuplicated_MetaData[];
#endif
		static void NewProp_bHasBeenDuplicated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenDuplicated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPendingDelete_MetaData[];
#endif
		static void NewProp_bPendingDelete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPendingDelete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecookRequested_MetaData[];
#endif
		static void NewProp_bRecookRequested_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecookRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRebuildRequested_MetaData[];
#endif
		static void NewProp_bRebuildRequested_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCooking_MetaData[];
#endif
		static void NewProp_bEnableCooking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCooking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceNeedUpdate_MetaData[];
#endif
		static void NewProp_bForceNeedUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceNeedUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLastCookSuccess_MetaData[];
#endif
		static void NewProp_bLastCookSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLastCookSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HapiGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HapiGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRegisteredComponentTemplate_MetaData[];
#endif
		static void NewProp_bRegisteredComponentTemplate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRegisteredComponentTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Outputs_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Outputs_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Outputs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniAssetBlueprintInstanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HoudiniAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HoudiniAsset = { "HoudiniAsset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, HoudiniAsset), Z_Construct_UClass_UHoudiniAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HoudiniAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HoudiniAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetId_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, AssetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetState_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetState = { "AssetState", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, AssetState), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SubAssetIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SubAssetIndex = { "SubAssetIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, SubAssetIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SubAssetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SubAssetIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetCookCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetCookCount = { "AssetCookCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, AssetCookCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetCookCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetCookCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenLoaded_SetBit(void* Obj)
	{
		((FHoudiniAssetBlueprintInstanceData*)Obj)->bHasBeenLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenLoaded = { "bHasBeenLoaded", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenLoaded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenDuplicated_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenDuplicated_SetBit(void* Obj)
	{
		((FHoudiniAssetBlueprintInstanceData*)Obj)->bHasBeenDuplicated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenDuplicated = { "bHasBeenDuplicated", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenDuplicated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenDuplicated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenDuplicated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bPendingDelete_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bPendingDelete_SetBit(void* Obj)
	{
		((FHoudiniAssetBlueprintInstanceData*)Obj)->bPendingDelete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bPendingDelete = { "bPendingDelete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bPendingDelete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bPendingDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bPendingDelete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRecookRequested_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRecookRequested_SetBit(void* Obj)
	{
		((FHoudiniAssetBlueprintInstanceData*)Obj)->bRecookRequested = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRecookRequested = { "bRecookRequested", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRecookRequested_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRecookRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRecookRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRebuildRequested_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRebuildRequested_SetBit(void* Obj)
	{
		((FHoudiniAssetBlueprintInstanceData*)Obj)->bRebuildRequested = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRebuildRequested = { "bRebuildRequested", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRebuildRequested_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRebuildRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRebuildRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bEnableCooking_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bEnableCooking_SetBit(void* Obj)
	{
		((FHoudiniAssetBlueprintInstanceData*)Obj)->bEnableCooking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bEnableCooking = { "bEnableCooking", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bEnableCooking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bEnableCooking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bEnableCooking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bForceNeedUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bForceNeedUpdate_SetBit(void* Obj)
	{
		((FHoudiniAssetBlueprintInstanceData*)Obj)->bForceNeedUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bForceNeedUpdate = { "bForceNeedUpdate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bForceNeedUpdate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bForceNeedUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bForceNeedUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bLastCookSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bLastCookSuccess_SetBit(void* Obj)
	{
		((FHoudiniAssetBlueprintInstanceData*)Obj)->bLastCookSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bLastCookSuccess = { "bLastCookSuccess", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bLastCookSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bLastCookSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bLastCookSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_ComponentGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_ComponentGUID = { "ComponentGUID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, ComponentGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_ComponentGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_ComponentGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HapiGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HapiGUID = { "HapiGUID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, HapiGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HapiGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HapiGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRegisteredComponentTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRegisteredComponentTemplate_SetBit(void* Obj)
	{
		((FHoudiniAssetBlueprintInstanceData*)Obj)->bRegisteredComponentTemplate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRegisteredComponentTemplate = { "bRegisteredComponentTemplate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRegisteredComponentTemplate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRegisteredComponentTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRegisteredComponentTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SourceName_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, SourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SourceName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs_ValueProp = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs_Key_KeyProp = { "Outputs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, Outputs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Inputs_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintInstanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Inputs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HoudiniAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SubAssetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetCookCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenDuplicated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bPendingDelete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRecookRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRebuildRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bEnableCooking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bForceNeedUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bLastCookSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_ComponentGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HapiGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRegisteredComponentTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SourceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Inputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Inputs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		Z_Construct_UScriptStruct_FActorComponentInstanceData,
		&NewStructOps,
		"HoudiniAssetBlueprintInstanceData",
		sizeof(FHoudiniAssetBlueprintInstanceData),
		alignof(FHoudiniAssetBlueprintInstanceData),
		Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniAssetBlueprintInstanceData"), sizeof(FHoudiniAssetBlueprintInstanceData), Get_Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Hash() { return 2975873628U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
