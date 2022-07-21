// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniStaticMeshGenerationProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniStaticMeshGenerationProperties() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWalkableSlopeOverride();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
// End Cross Module References
class UScriptStruct* FHoudiniStaticMeshGenerationProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniStaticMeshGenerationProperties"), sizeof(FHoudiniStaticMeshGenerationProperties), Get_Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniStaticMeshGenerationProperties>()
{
	return FHoudiniStaticMeshGenerationProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniStaticMeshGenerationProperties(FHoudiniStaticMeshGenerationProperties::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniStaticMeshGenerationProperties"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniStaticMeshGenerationProperties
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniStaticMeshGenerationProperties()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniStaticMeshGenerationProperties>(FName(TEXT("HoudiniStaticMeshGenerationProperties")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniStaticMeshGenerationProperties;
	struct Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGeneratedDoubleSidedGeometry_MetaData[];
#endif
		static void NewProp_bGeneratedDoubleSidedGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGeneratedDoubleSidedGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedPhysMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeneratedPhysMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBodyInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultBodyInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedCollisionTraceFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GeneratedCollisionTraceFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedLightMapResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GeneratedLightMapResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedWalkableSlopeOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneratedWalkableSlopeOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedLightMapCoordinateIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GeneratedLightMapCoordinateIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData[];
#endif
		static void NewProp_bGeneratedUseMaximumStreamingTexelRatio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGeneratedUseMaximumStreamingTexelRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedStreamingDistanceMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GeneratedStreamingDistanceMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedFoliageDefaultSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeneratedFoliageDefaultSettings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeneratedAssetUserData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedAssetUserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GeneratedAssetUserData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniStaticMeshGenerationProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry_MetaData[] = {
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry_SetBit(void* Obj)
	{
		((FHoudiniStaticMeshGenerationProperties*)Obj)->bGeneratedDoubleSidedGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry = { "bGeneratedDoubleSidedGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FHoudiniStaticMeshGenerationProperties), &Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedPhysMaterial_MetaData[] = {
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedPhysMaterial = { "GeneratedPhysMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedPhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedPhysMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedPhysMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_DefaultBodyInstance_MetaData[] = {
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_DefaultBodyInstance = { "DefaultBodyInstance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, DefaultBodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_DefaultBodyInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_DefaultBodyInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedCollisionTraceFlag_MetaData[] = {
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedCollisionTraceFlag = { "GeneratedCollisionTraceFlag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedCollisionTraceFlag), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedCollisionTraceFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedCollisionTraceFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapResolution_MetaData[] = {
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapResolution = { "GeneratedLightMapResolution", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedLightMapResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedWalkableSlopeOverride_MetaData[] = {
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedWalkableSlopeOverride = { "GeneratedWalkableSlopeOverride", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedWalkableSlopeOverride), Z_Construct_UScriptStruct_FWalkableSlopeOverride, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedWalkableSlopeOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedWalkableSlopeOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapCoordinateIndex_MetaData[] = {
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapCoordinateIndex = { "GeneratedLightMapCoordinateIndex", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedLightMapCoordinateIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapCoordinateIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapCoordinateIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData[] = {
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_SetBit(void* Obj)
	{
		((FHoudiniStaticMeshGenerationProperties*)Obj)->bGeneratedUseMaximumStreamingTexelRatio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio = { "bGeneratedUseMaximumStreamingTexelRatio", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FHoudiniStaticMeshGenerationProperties), &Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedStreamingDistanceMultiplier_MetaData[] = {
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedStreamingDistanceMultiplier = { "GeneratedStreamingDistanceMultiplier", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedStreamingDistanceMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedStreamingDistanceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedStreamingDistanceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedFoliageDefaultSettings_MetaData[] = {
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedFoliageDefaultSettings = { "GeneratedFoliageDefaultSettings", nullptr, (EPropertyFlags)0x0012040000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedFoliageDefaultSettings), Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedFoliageDefaultSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedFoliageDefaultSettings_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData_Inner = { "GeneratedAssetUserData", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData_MetaData[] = {
		{ "Category", "HoudiniStaticMeshGenerationProperties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniStaticMeshGenerationProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData = { "GeneratedAssetUserData", nullptr, (EPropertyFlags)0x0010048000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedAssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedPhysMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_DefaultBodyInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedCollisionTraceFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedWalkableSlopeOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapCoordinateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedStreamingDistanceMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedFoliageDefaultSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniStaticMeshGenerationProperties",
		sizeof(FHoudiniStaticMeshGenerationProperties),
		alignof(FHoudiniStaticMeshGenerationProperties),
		Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniStaticMeshGenerationProperties"), sizeof(FHoudiniStaticMeshGenerationProperties), Get_Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Hash() { return 2156145696U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
