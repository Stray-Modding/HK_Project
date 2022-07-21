// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniInputObjectType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniInputObjectType() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EHoudiniInputObjectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniInputObjectType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInputObjectType>()
	{
		return EHoudiniInputObjectType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniInputObjectType(EHoudiniInputObjectType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniInputObjectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType_Hash() { return 3175917052U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniInputObjectType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniInputObjectType::Invalid", (int64)EHoudiniInputObjectType::Invalid },
				{ "EHoudiniInputObjectType::Object", (int64)EHoudiniInputObjectType::Object },
				{ "EHoudiniInputObjectType::StaticMesh", (int64)EHoudiniInputObjectType::StaticMesh },
				{ "EHoudiniInputObjectType::SkeletalMesh", (int64)EHoudiniInputObjectType::SkeletalMesh },
				{ "EHoudiniInputObjectType::SceneComponent", (int64)EHoudiniInputObjectType::SceneComponent },
				{ "EHoudiniInputObjectType::StaticMeshComponent", (int64)EHoudiniInputObjectType::StaticMeshComponent },
				{ "EHoudiniInputObjectType::InstancedStaticMeshComponent", (int64)EHoudiniInputObjectType::InstancedStaticMeshComponent },
				{ "EHoudiniInputObjectType::SplineComponent", (int64)EHoudiniInputObjectType::SplineComponent },
				{ "EHoudiniInputObjectType::HoudiniSplineComponent", (int64)EHoudiniInputObjectType::HoudiniSplineComponent },
				{ "EHoudiniInputObjectType::HoudiniAssetComponent", (int64)EHoudiniInputObjectType::HoudiniAssetComponent },
				{ "EHoudiniInputObjectType::Actor", (int64)EHoudiniInputObjectType::Actor },
				{ "EHoudiniInputObjectType::Landscape", (int64)EHoudiniInputObjectType::Landscape },
				{ "EHoudiniInputObjectType::Brush", (int64)EHoudiniInputObjectType::Brush },
				{ "EHoudiniInputObjectType::CameraComponent", (int64)EHoudiniInputObjectType::CameraComponent },
				{ "EHoudiniInputObjectType::DataTable", (int64)EHoudiniInputObjectType::DataTable },
				{ "EHoudiniInputObjectType::HoudiniAssetActor", (int64)EHoudiniInputObjectType::HoudiniAssetActor },
				{ "EHoudiniInputObjectType::FoliageType_InstancedStaticMesh", (int64)EHoudiniInputObjectType::FoliageType_InstancedStaticMesh },
				{ "EHoudiniInputObjectType::GeometryCollection", (int64)EHoudiniInputObjectType::GeometryCollection },
				{ "EHoudiniInputObjectType::GeometryCollectionComponent", (int64)EHoudiniInputObjectType::GeometryCollectionComponent },
				{ "EHoudiniInputObjectType::GeometryCollectionActor", (int64)EHoudiniInputObjectType::GeometryCollectionActor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Actor.Name", "EHoudiniInputObjectType::Actor" },
				{ "BlueprintType", "true" },
				{ "Brush.Name", "EHoudiniInputObjectType::Brush" },
				{ "CameraComponent.Name", "EHoudiniInputObjectType::CameraComponent" },
				{ "DataTable.Name", "EHoudiniInputObjectType::DataTable" },
				{ "FoliageType_InstancedStaticMesh.Name", "EHoudiniInputObjectType::FoliageType_InstancedStaticMesh" },
				{ "GeometryCollection.Name", "EHoudiniInputObjectType::GeometryCollection" },
				{ "GeometryCollectionActor.Name", "EHoudiniInputObjectType::GeometryCollectionActor" },
				{ "GeometryCollectionComponent.Name", "EHoudiniInputObjectType::GeometryCollectionComponent" },
				{ "HoudiniAssetActor.Name", "EHoudiniInputObjectType::HoudiniAssetActor" },
				{ "HoudiniAssetComponent.Name", "EHoudiniInputObjectType::HoudiniAssetComponent" },
				{ "HoudiniSplineComponent.Name", "EHoudiniInputObjectType::HoudiniSplineComponent" },
				{ "InstancedStaticMeshComponent.Name", "EHoudiniInputObjectType::InstancedStaticMeshComponent" },
				{ "Invalid.Name", "EHoudiniInputObjectType::Invalid" },
				{ "Landscape.Name", "EHoudiniInputObjectType::Landscape" },
				{ "ModuleRelativePath", "Public/EHoudiniInputObjectType.h" },
				{ "Object.Name", "EHoudiniInputObjectType::Object" },
				{ "SceneComponent.Name", "EHoudiniInputObjectType::SceneComponent" },
				{ "SkeletalMesh.Name", "EHoudiniInputObjectType::SkeletalMesh" },
				{ "SplineComponent.Name", "EHoudiniInputObjectType::SplineComponent" },
				{ "StaticMesh.Name", "EHoudiniInputObjectType::StaticMesh" },
				{ "StaticMeshComponent.Name", "EHoudiniInputObjectType::StaticMeshComponent" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniInputObjectType",
				"EHoudiniInputObjectType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
