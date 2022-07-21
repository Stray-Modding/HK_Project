// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniRuntimeSettings() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWalkableSlopeOverride();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniRuntimeSettings_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	static UEnum* EHoudiniExecutableType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniExecutableType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniExecutableType>()
	{
		return EHoudiniExecutableType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniExecutableType(EHoudiniExecutableType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniExecutableType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType_Hash() { return 3947575740U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniExecutableType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "HRSHE_Houdini", (int64)HRSHE_Houdini },
				{ "HRSHE_HoudiniFX", (int64)HRSHE_HoudiniFX },
				{ "HRSHE_HoudiniCore", (int64)HRSHE_HoudiniCore },
				{ "HRSHE_HoudiniIndie", (int64)HRSHE_HoudiniIndie },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HRSHE_Houdini.Comment", "// Houdini\n" },
				{ "HRSHE_Houdini.DisplayName", "Houdini" },
				{ "HRSHE_Houdini.Name", "HRSHE_Houdini" },
				{ "HRSHE_Houdini.ToolTip", "Houdini" },
				{ "HRSHE_HoudiniCore.Comment", "// Houdini Core\n" },
				{ "HRSHE_HoudiniCore.DisplayName", "Houdini Core" },
				{ "HRSHE_HoudiniCore.Name", "HRSHE_HoudiniCore" },
				{ "HRSHE_HoudiniCore.ToolTip", "Houdini Core" },
				{ "HRSHE_HoudiniFX.Comment", "// Houdini FX\n" },
				{ "HRSHE_HoudiniFX.DisplayName", "Houdini FX" },
				{ "HRSHE_HoudiniFX.Name", "HRSHE_HoudiniFX" },
				{ "HRSHE_HoudiniFX.ToolTip", "Houdini FX" },
				{ "HRSHE_HoudiniIndie.Comment", "// Houdini Indie\n" },
				{ "HRSHE_HoudiniIndie.DisplayName", "Houdini Indie" },
				{ "HRSHE_HoudiniIndie.Name", "HRSHE_HoudiniIndie" },
				{ "HRSHE_HoudiniIndie.ToolTip", "Houdini Indie" },
				{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniExecutableType",
				"EHoudiniExecutableType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHoudiniRuntimeSettingsRecomputeFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniRuntimeSettingsRecomputeFlag"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRuntimeSettingsRecomputeFlag>()
	{
		return EHoudiniRuntimeSettingsRecomputeFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniRuntimeSettingsRecomputeFlag(EHoudiniRuntimeSettingsRecomputeFlag_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniRuntimeSettingsRecomputeFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag_Hash() { return 1388017008U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniRuntimeSettingsRecomputeFlag"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "HRSRF_Always", (int64)HRSRF_Always },
				{ "HRSRF_OnlyIfMissing", (int64)HRSRF_OnlyIfMissing },
				{ "HRSRF_Never", (int64)HRSRF_Never },
				{ "HRSRF_MAX", (int64)HRSRF_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HRSRF_Always.Comment", "// Recompute always.\n" },
				{ "HRSRF_Always.DisplayName", "Always" },
				{ "HRSRF_Always.Name", "HRSRF_Always" },
				{ "HRSRF_Always.ToolTip", "Recompute always." },
				{ "HRSRF_MAX.Name", "HRSRF_MAX" },
				{ "HRSRF_Never.Comment", "// Do not recompute.\n" },
				{ "HRSRF_Never.DisplayName", "Never" },
				{ "HRSRF_Never.Name", "HRSRF_Never" },
				{ "HRSRF_Never.ToolTip", "Do not recompute." },
				{ "HRSRF_OnlyIfMissing.Comment", "// Recompute only if missing.\n" },
				{ "HRSRF_OnlyIfMissing.DisplayName", "Only if missing" },
				{ "HRSRF_OnlyIfMissing.Name", "HRSRF_OnlyIfMissing" },
				{ "HRSRF_OnlyIfMissing.ToolTip", "Recompute only if missing." },
				{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniRuntimeSettingsRecomputeFlag",
				"EHoudiniRuntimeSettingsRecomputeFlag",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHoudiniRuntimeSettingsSessionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniRuntimeSettingsSessionType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRuntimeSettingsSessionType>()
	{
		return EHoudiniRuntimeSettingsSessionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniRuntimeSettingsSessionType(EHoudiniRuntimeSettingsSessionType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniRuntimeSettingsSessionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_Hash() { return 2381777114U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniRuntimeSettingsSessionType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "HRSST_InProcess", (int64)HRSST_InProcess },
				{ "HRSST_Socket", (int64)HRSST_Socket },
				{ "HRSST_NamedPipe", (int64)HRSST_NamedPipe },
				{ "HRSST_None", (int64)HRSST_None },
				{ "HRSST_MAX", (int64)HRSST_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HRSST_InProcess.Comment", "// In process session.\n" },
				{ "HRSST_InProcess.DisplayName", "In Process (experimental)" },
				{ "HRSST_InProcess.Name", "HRSST_InProcess" },
				{ "HRSST_InProcess.ToolTip", "In process session." },
				{ "HRSST_MAX.Name", "HRSST_MAX" },
				{ "HRSST_NamedPipe.Comment", "// Connection to Houdini Engine server via pipe connection.\n" },
				{ "HRSST_NamedPipe.DisplayName", "Named pipe or domain socket" },
				{ "HRSST_NamedPipe.Name", "HRSST_NamedPipe" },
				{ "HRSST_NamedPipe.ToolTip", "Connection to Houdini Engine server via pipe connection." },
				{ "HRSST_None.Comment", "// No session, prevents license/Engine cook\n" },
				{ "HRSST_None.DisplayName", "None" },
				{ "HRSST_None.Name", "HRSST_None" },
				{ "HRSST_None.ToolTip", "No session, prevents license/Engine cook" },
				{ "HRSST_Socket.Comment", "// TCP socket connection to Houdini Engine server.\n" },
				{ "HRSST_Socket.DisplayName", "TCP socket" },
				{ "HRSST_Socket.Name", "HRSST_Socket" },
				{ "HRSST_Socket.ToolTip", "TCP socket connection to Houdini Engine server." },
				{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniRuntimeSettingsSessionType",
				"EHoudiniRuntimeSettingsSessionType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedAssetUserData_Inner_MetaData[];
#endif
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
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniStaticMeshGenerationProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
		{ "Comment", "/** If true, the physics triangle mesh will use double sided faces when doing scene queries. */" },
		{ "DisplayName", "Double Sided Geometry" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If true, the physics triangle mesh will use double sided faces when doing scene queries." },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry_SetBit(void* Obj)
	{
		((FHoudiniStaticMeshGenerationProperties*)Obj)->bGeneratedDoubleSidedGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry = { "bGeneratedDoubleSidedGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FHoudiniStaticMeshGenerationProperties), &Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedPhysMaterial_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
		{ "Comment", "/** Physical material to use for simple collision on this body. Encodes information about density, friction etc. */" },
		{ "DisplayName", "Simple Collision Physical Material" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Physical material to use for simple collision on this body. Encodes information about density, friction etc." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedPhysMaterial = { "GeneratedPhysMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedPhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedPhysMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedPhysMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_DefaultBodyInstance_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
		{ "Comment", "/** Default properties of the body instance, copied into objects on instantiation, was URB_BodyInstance */" },
		{ "FullyExpand", "true" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Default properties of the body instance, copied into objects on instantiation, was URB_BodyInstance" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_DefaultBodyInstance = { "DefaultBodyInstance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, DefaultBodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_DefaultBodyInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_DefaultBodyInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedCollisionTraceFlag_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
		{ "Comment", "/** Collision Trace behavior - by default, it will keep simple(convex)/complex(per-poly) separate. */" },
		{ "DisplayName", "Collision Complexity" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Collision Trace behavior - by default, it will keep simple(convex)/complex(per-poly) separate." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedCollisionTraceFlag = { "GeneratedCollisionTraceFlag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedCollisionTraceFlag), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedCollisionTraceFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedCollisionTraceFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapResolution_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
		{ "Comment", "/** Resolution of lightmap. */" },
		{ "DisplayName", "Light Map Resolution" },
		{ "FixedIncrement", "4.0" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Resolution of lightmap." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapResolution = { "GeneratedLightMapResolution", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedLightMapResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedWalkableSlopeOverride_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
		{ "Comment", "/** Custom walkable slope setting for generated mesh's body. */" },
		{ "DisplayName", "Walkable Slope Override" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Custom walkable slope setting for generated mesh's body." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedWalkableSlopeOverride = { "GeneratedWalkableSlopeOverride", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedWalkableSlopeOverride), Z_Construct_UScriptStruct_FWalkableSlopeOverride, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedWalkableSlopeOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedWalkableSlopeOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapCoordinateIndex_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
		{ "Comment", "/** The light map coordinate index. */" },
		{ "DisplayName", "Light map coordinate index" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "The light map coordinate index." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapCoordinateIndex = { "GeneratedLightMapCoordinateIndex", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedLightMapCoordinateIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapCoordinateIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapCoordinateIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
		{ "Comment", "/** True if mesh should use a less-conservative method of mip LOD texture factor computation. */" },
		{ "DisplayName", "Use Maximum Streaming Texel Ratio" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "True if mesh should use a less-conservative method of mip LOD texture factor computation." },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_SetBit(void* Obj)
	{
		((FHoudiniStaticMeshGenerationProperties*)Obj)->bGeneratedUseMaximumStreamingTexelRatio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio = { "bGeneratedUseMaximumStreamingTexelRatio", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FHoudiniStaticMeshGenerationProperties), &Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedStreamingDistanceMultiplier_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
		{ "Comment", "/** Allows artists to adjust the distance where textures using UV 0 are streamed in/out. */" },
		{ "DisplayName", "Streaming Distance Multiplier" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Allows artists to adjust the distance where textures using UV 0 are streamed in/out." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedStreamingDistanceMultiplier = { "GeneratedStreamingDistanceMultiplier", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedStreamingDistanceMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedStreamingDistanceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedStreamingDistanceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedFoliageDefaultSettings_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
		{ "Comment", "/** Default settings when using this mesh for instanced foliage. */" },
		{ "DisplayName", "Foliage Default Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Default settings when using this mesh for instanced foliage." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedFoliageDefaultSettings = { "GeneratedFoliageDefaultSettings", nullptr, (EPropertyFlags)0x0012040000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedFoliageDefaultSettings), Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedFoliageDefaultSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedFoliageDefaultSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData_Inner_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
		{ "Comment", "/** Array of user data stored with the asset. */" },
		{ "DisplayName", "Asset User Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Array of user data stored with the asset." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData_Inner = { "GeneratedAssetUserData", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
		{ "Comment", "/** Array of user data stored with the asset. */" },
		{ "DisplayName", "Asset User Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Array of user data stored with the asset." },
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
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Hash() { return 2866690362U; }
	void UHoudiniRuntimeSettings::StaticRegisterNativesUHoudiniRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniRuntimeSettings_NoRegister()
	{
		return UHoudiniRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerHost_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerHost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ServerPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPipeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerPipeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartAutomaticServer_MetaData[];
#endif
		static void NewProp_bStartAutomaticServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartAutomaticServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutomaticServerTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutomaticServerTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSyncWithHoudiniCook_MetaData[];
#endif
		static void NewProp_bSyncWithHoudiniCook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSyncWithHoudiniCook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookUsingHoudiniTime_MetaData[];
#endif
		static void NewProp_bCookUsingHoudiniTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookUsingHoudiniTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSyncViewport_MetaData[];
#endif
		static void NewProp_bSyncViewport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSyncViewport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSyncHoudiniViewport_MetaData[];
#endif
		static void NewProp_bSyncHoudiniViewport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSyncHoudiniViewport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSyncUnrealViewport_MetaData[];
#endif
		static void NewProp_bSyncUnrealViewport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSyncUnrealViewport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowMultiAssetDialog_MetaData[];
#endif
		static void NewProp_bShowMultiAssetDialog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowMultiAssetDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_MetaData[];
#endif
		static void NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreferHdaMemoryCopyOverHdaSourceFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPauseCookingOnStart_MetaData[];
#endif
		static void NewProp_bPauseCookingOnStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPauseCookingOnStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplaySlateCookingNotifications_MetaData[];
#endif
		static void NewProp_bDisplaySlateCookingNotifications_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplaySlateCookingNotifications;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTemporaryCookFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultTemporaryCookFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBakeFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultBakeFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesUseDefaultUnrealScaling_MetaData[];
#endif
		static void NewProp_MarshallingLandscapesUseDefaultUnrealScaling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MarshallingLandscapesUseDefaultUnrealScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesUseFullResolution_MetaData[];
#endif
		static void NewProp_MarshallingLandscapesUseFullResolution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MarshallingLandscapesUseFullResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesForceMinMaxValues_MetaData[];
#endif
		static void NewProp_MarshallingLandscapesForceMinMaxValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MarshallingLandscapesForceMinMaxValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesForcedMinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarshallingLandscapesForcedMinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesForcedMaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarshallingLandscapesForcedMaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAddRotAndScaleAttributesOnCurves_MetaData[];
#endif
		static void NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddRotAndScaleAttributesOnCurves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyInputCurves_MetaData[];
#endif
		static void NewProp_bUseLegacyInputCurves_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyInputCurves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingSplineResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarshallingSplineResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMesh_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDefaultMesh_MetaData[];
#endif
		static void NewProp_bShowDefaultMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDefaultMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementByTimer_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementByTimer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementByTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyMeshAutoRefineTimeoutSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProxyMeshAutoRefineTimeoutSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoubleSidedGeometry_MetaData[];
#endif
		static void NewProp_bDoubleSidedGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoubleSidedGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBodyInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultBodyInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionTraceFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionTraceFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightMapResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LpvBiasMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LpvBiasMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedDistanceFieldResolutionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GeneratedDistanceFieldResolutionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkableSlopeOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WalkableSlopeOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapCoordinateIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightMapCoordinateIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaximumStreamingTexelRatio_MetaData[];
#endif
		static void NewProp_bUseMaximumStreamingTexelRatio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaximumStreamingTexelRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageDefaultSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoliageDefaultSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFullPrecisionUVs_MetaData[];
#endif
		static void NewProp_bUseFullPrecisionUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFullPrecisionUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcLightmapIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SrcLightmapIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DstLightmapIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DstLightmapIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLightmapResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLightmapResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveDegenerates_MetaData[];
#endif
		static void NewProp_bRemoveDegenerates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveDegenerates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerateLightmapUVsFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GenerateLightmapUVsFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecomputeNormalsFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RecomputeNormalsFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecomputeTangentsFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RecomputeTangentsFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMikkTSpace_MetaData[];
#endif
		static void NewProp_bUseMikkTSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMikkTSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildAdjacencyBuffer_MetaData[];
#endif
		static void NewProp_bBuildAdjacencyBuffer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildAdjacencyBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComputeWeightedNormals_MetaData[];
#endif
		static void NewProp_bComputeWeightedNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeWeightedNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildReversedIndexBuffer_MetaData[];
#endif
		static void NewProp_bBuildReversedIndexBuffer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildReversedIndexBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionTangentBasis_MetaData[];
#endif
		static void NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionTangentBasis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldResolutionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldResolutionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData[];
#endif
		static void NewProp_bGenerateDistanceFieldAsIfTwoSided_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateDistanceFieldAsIfTwoSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportFaceRemap_MetaData[];
#endif
		static void NewProp_bSupportFaceRemap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportFaceRemap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPDGAsyncCommandletImportEnabled_MetaData[];
#endif
		static void NewProp_bPDGAsyncCommandletImportEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPDGAsyncCommandletImportEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableBackwardCompatibility_MetaData[];
#endif
		static void NewProp_bEnableBackwardCompatibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableBackwardCompatibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomaticLegacyHDARebuild_MetaData[];
#endif
		static void NewProp_bAutomaticLegacyHDARebuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomaticLegacyHDARebuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomHoudiniLocation_MetaData[];
#endif
		static void NewProp_bUseCustomHoudiniLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomHoudiniLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomHoudiniLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomHoudiniLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniExecutable_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HoudiniExecutable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookingThreadStackSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CookingThreadStackSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniEnvironmentFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HoudiniEnvironmentFiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtlSearchPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OtlSearchPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DsoSearchPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DsoSearchPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageDsoSearchPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImageDsoSearchPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioDsoSearchPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AudioDsoSearchPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniRuntimeSettings.h" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType_MetaData[] = {
		{ "Category", "Session" },
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------\n// Session options.\n//-------------------------------------------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Session options." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, SessionType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost_MetaData[] = {
		{ "Category", "Session" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost = { "ServerHost", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ServerHost), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort_MetaData[] = {
		{ "Category", "Session" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ServerPort), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName_MetaData[] = {
		{ "Category", "Session" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName = { "ServerPipeName", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ServerPipeName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_MetaData[] = {
		{ "Category", "Session" },
		{ "Comment", "// Whether to automatically start a HARS process\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Whether to automatically start a HARS process" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bStartAutomaticServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer = { "bStartAutomaticServer", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout_MetaData[] = {
		{ "Category", "Session" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout = { "AutomaticServerTimeout", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, AutomaticServerTimeout), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_MetaData[] = {
		{ "Category", "Session" },
		{ "Comment", "// If enabled, changes made in Houdini, when connected to Houdini running in Session Sync mode will be automatically be pushed to Unreal.\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If enabled, changes made in Houdini, when connected to Houdini running in Session Sync mode will be automatically be pushed to Unreal." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bSyncWithHoudiniCook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook = { "bSyncWithHoudiniCook", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_MetaData[] = {
		{ "Category", "Session" },
		{ "Comment", "// If enabled, the Houdini Timeline time will be used to cook assets.\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If enabled, the Houdini Timeline time will be used to cook assets." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bCookUsingHoudiniTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime = { "bCookUsingHoudiniTime", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_MetaData[] = {
		{ "Category", "Session" },
		{ "Comment", "// Enable when wanting to sync the Houdini and Unreal viewport when using Session Sync.\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Enable when wanting to sync the Houdini and Unreal viewport when using Session Sync." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bSyncViewport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport = { "bSyncViewport", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_MetaData[] = {
		{ "Category", "Session" },
		{ "Comment", "// If enabled, Houdini's viewport will be synchronized to Unreal's when using Session Sync.\n" },
		{ "DisplayName", "Sync the Houdini Viewport to Unreal's viewport." },
		{ "EditCondition", "bSyncViewport" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If enabled, Houdini's viewport will be synchronized to Unreal's when using Session Sync." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bSyncHoudiniViewport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport = { "bSyncHoudiniViewport", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_MetaData[] = {
		{ "Category", "Session" },
		{ "Comment", "// If enabled, Unreal's viewport will be synchronized to Houdini's when using Session Sync.\n" },
		{ "DisplayName", "Sync the Unreal Viewport to Houdini's viewport" },
		{ "EditCondition", "bSyncViewport" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If enabled, Unreal's viewport will be synchronized to Houdini's when using Session Sync." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bSyncUnrealViewport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport = { "bSyncUnrealViewport", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_MetaData[] = {
		{ "Category", "Instantiating" },
		{ "Comment", "// Whether to ask user to select an asset when instantiating an HDA with multiple assets inside. If disabled, will always instantiate first asset.\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Whether to ask user to select an asset when instantiating an HDA with multiple assets inside. If disabled, will always instantiate first asset." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bShowMultiAssetDialog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog = { "bShowMultiAssetDialog", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_MetaData[] = {
		{ "Category", "Instantiating" },
		{ "Comment", "// When enabled, the plugin will always instantiate the memory copy of a HDA stored in the .uasset file \n// instead of using the latest version of the HDA file itself.\n// This helps ensuring consistency between users when using HDAs, but will not work with expanded HDAs.\n// When disabled, the plugin will always instantiate the latest version of the source HDA file if it is \n// available, and will fallback to the memory copy if the source file cannot be found\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "When enabled, the plugin will always instantiate the memory copy of a HDA stored in the .uasset file\ninstead of using the latest version of the HDA file itself.\nThis helps ensuring consistency between users when using HDAs, but will not work with expanded HDAs.\nWhen disabled, the plugin will always instantiate the latest version of the source HDA file if it is\navailable, and will fallback to the memory copy if the source file cannot be found" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bPreferHdaMemoryCopyOverHdaSourceFile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile = { "bPreferHdaMemoryCopyOverHdaSourceFile", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_MetaData[] = {
		{ "Category", "Cooking" },
		{ "Comment", "// Whether houdini engine cooking is paused or not upon initializing the plugin\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Whether houdini engine cooking is paused or not upon initializing the plugin" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bPauseCookingOnStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart = { "bPauseCookingOnStart", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_MetaData[] = {
		{ "Category", "Cooking" },
		{ "Comment", "// Whether to display instantiation and cooking Slate notifications.\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Whether to display instantiation and cooking Slate notifications." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bDisplaySlateCookingNotifications = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications = { "bDisplaySlateCookingNotifications", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder_MetaData[] = {
		{ "Category", "Cooking" },
		{ "Comment", "// Default content folder storing all the temporary cook data (Static meshes, materials, textures, landscape layer infos...)\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Default content folder storing all the temporary cook data (Static meshes, materials, textures, landscape layer infos...)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder = { "DefaultTemporaryCookFolder", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DefaultTemporaryCookFolder), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder_MetaData[] = {
		{ "Category", "Cooking" },
		{ "Comment", "// Default content folder used when baking houdini asset data to native unreal objects\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Default content folder used when baking houdini asset data to native unreal objects" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder = { "DefaultBakeFolder", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DefaultBakeFolder), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
		{ "Comment", "// If true, generated Landscapes will be marshalled using default unreal scaling. \n// Generated landscape will loose a lot of precision on the Z axis but will use the same transforms\n// as Unreal's default landscape\n" },
		{ "DisplayName", "Landscape - Use default Unreal scaling." },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If true, generated Landscapes will be marshalled using default unreal scaling.\nGenerated landscape will loose a lot of precision on the Z axis but will use the same transforms\nas Unreal's default landscape" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->MarshallingLandscapesUseDefaultUnrealScaling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling = { "MarshallingLandscapesUseDefaultUnrealScaling", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
		{ "Comment", "// If true, generated Landscapes will be using full precision for their ZAxis, \n// allowing for more precision but preventing them from being sculpted higher/lower than their min/max.\n" },
		{ "DisplayName", "Landscape - Use full resolution for data conversion." },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If true, generated Landscapes will be using full precision for their ZAxis,\nallowing for more precision but preventing them from being sculpted higher/lower than their min/max." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->MarshallingLandscapesUseFullResolution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution = { "MarshallingLandscapesUseFullResolution", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
		{ "Comment", "// If true, the min/max values used to convert heightfields to landscape will be forced values\n// This is usefull when importing multiple landscapes from different HDAs\n" },
		{ "DisplayName", "Landscape - Force Min/Max values for data conversion" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If true, the min/max values used to convert heightfields to landscape will be forced values\nThis is usefull when importing multiple landscapes from different HDAs" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->MarshallingLandscapesForceMinMaxValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues = { "MarshallingLandscapesForceMinMaxValues", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
		{ "Comment", "// The minimum value to be used for Landscape conversion when MarshallingLandscapesForceMinMaxValues is enabled\n" },
		{ "DisplayName", "Landscape - Forced min value" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "The minimum value to be used for Landscape conversion when MarshallingLandscapesForceMinMaxValues is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue = { "MarshallingLandscapesForcedMinValue", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingLandscapesForcedMinValue), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
		{ "Comment", "// The maximum value to be used for Landscape conversion when MarshallingLandscapesForceMinMaxValues is enabled\n" },
		{ "DisplayName", "Landscape - Forced max value" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "The maximum value to be used for Landscape conversion when MarshallingLandscapesForceMinMaxValues is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue = { "MarshallingLandscapesForcedMaxValue", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingLandscapesForcedMaxValue), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
		{ "Comment", "// If this is enabled, additional rot & scale attributes are added on curve inputs\n" },
		{ "DisplayName", "Curves - Add rot & scale attributes on curve inputs" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If this is enabled, additional rot & scale attributes are added on curve inputs" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bAddRotAndScaleAttributesOnCurves = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves = { "bAddRotAndScaleAttributesOnCurves", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
		{ "Comment", "// If this is enabled, additional rot & scale attributes are added on curve inputs\n" },
		{ "DisplayName", "Curves - Use Legacy Input Curves" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If this is enabled, additional rot & scale attributes are added on curve inputs" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bUseLegacyInputCurves = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves = { "bUseLegacyInputCurves", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
		{ "Comment", "// Default resolution used when converting Unreal Spline Components to Houdini Curves (step in cm between control points, 0 only send the control points)\n" },
		{ "DisplayName", "Curves - Default spline resolution (cm)" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Default resolution used when converting Unreal Spline Components to Houdini Curves (step in cm between control points, 0 only send the control points)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution = { "MarshallingSplineResolution", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingSplineResolution), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_MetaData[] = {
		{ "Category", "Static Mesh" },
		{ "Comment", "// For StaticMesh outputs: should a fast proxy be created first?\n" },
		{ "DisplayName", "Enable Proxy Static Mesh" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "For StaticMesh outputs: should a fast proxy be created first?" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bEnableProxyStaticMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh = { "bEnableProxyStaticMesh", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_MetaData[] = {
		{ "Category", "Static Mesh" },
		{ "Comment", "// For static mesh outputs and socket actors: should spawn a default actor if the reference is invalid?\n" },
		{ "DisplayName", "Show Default Mesh" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "For static mesh outputs and socket actors: should spawn a default actor if the reference is invalid?" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bShowDefaultMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh = { "bShowDefaultMesh", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_MetaData[] = {
		{ "Category", "Static Mesh" },
		{ "Comment", "// If fast proxy meshes are being created, must it be baked as a StaticMesh after a period of no updates?\n" },
		{ "DisplayName", "Refine Proxy Static Meshes After a Timeout" },
		{ "EditCondition", "bEnableProxyStaticMesh" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If fast proxy meshes are being created, must it be baked as a StaticMesh after a period of no updates?" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bEnableProxyStaticMeshRefinementByTimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer = { "bEnableProxyStaticMeshRefinementByTimer", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds_MetaData[] = {
		{ "Category", "Static Mesh" },
		{ "Comment", "// If the option to automatically refine the proxy mesh via a timer has been selected, this controls the timeout in seconds.\n" },
		{ "DisplayName", "Proxy Mesh Auto Refine Timeout Seconds" },
		{ "EditCondition", "bEnableProxyStaticMesh && bEnableProxyStaticMeshRefinementByTimer" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If the option to automatically refine the proxy mesh via a timer has been selected, this controls the timeout in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds = { "ProxyMeshAutoRefineTimeoutSeconds", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ProxyMeshAutoRefineTimeoutSeconds), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_MetaData[] = {
		{ "Category", "Static Mesh" },
		{ "Comment", "// Automatically refine proxy meshes to UStaticMesh before the map is saved\n" },
		{ "DisplayName", "Refine Proxy Static Meshes When Saving a Map" },
		{ "EditCondition", "bEnableProxyStaticMesh" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Automatically refine proxy meshes to UStaticMesh before the map is saved" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bEnableProxyStaticMeshRefinementOnPreSaveWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld = { "bEnableProxyStaticMeshRefinementOnPreSaveWorld", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_MetaData[] = {
		{ "Category", "Static Mesh" },
		{ "Comment", "// Automatically refine proxy meshes to UStaticMesh before starting a play in editor session\n" },
		{ "DisplayName", "Refine Proxy Static Meshes On PIE" },
		{ "EditCondition", "bEnableProxyStaticMesh" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Automatically refine proxy meshes to UStaticMesh before starting a play in editor session" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bEnableProxyStaticMeshRefinementOnPreBeginPIE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE = { "bEnableProxyStaticMeshRefinementOnPreBeginPIE", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
		{ "Comment", "/// If true, the physics triangle mesh will use double sided faces for new Houdini Assets when doing scene queries.\n" },
		{ "DisplayName", "Double Sided Geometry" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If true, the physics triangle mesh will use double sided faces for new Houdini Assets when doing scene queries." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bDoubleSidedGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry = { "bDoubleSidedGeometry", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_PhysMaterial_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
		{ "Comment", "/// Physical material to use for simple collision of new Houdini Assets. Encodes information about density, friction etc.\n" },
		{ "DisplayName", "Simple Collision Physical Material" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Physical material to use for simple collision of new Houdini Assets. Encodes information about density, friction etc." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_PhysMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_PhysMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBodyInstance_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
		{ "Comment", "/// Default properties of the body instance\n" },
		{ "FullyExpand", "true" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Default properties of the body instance" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBodyInstance = { "DefaultBodyInstance", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DefaultBodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBodyInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBodyInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CollisionTraceFlag_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
		{ "Comment", "/// Collision Trace behavior - by default, it will keep simple(convex)/complex(per-poly) separate for new Houdini Assets.\n" },
		{ "DisplayName", "Collision Complexity" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Collision Trace behavior - by default, it will keep simple(convex)/complex(per-poly) separate for new Houdini Assets." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CollisionTraceFlag = { "CollisionTraceFlag", nullptr, (EPropertyFlags)0x0010000000074001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, CollisionTraceFlag), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CollisionTraceFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CollisionTraceFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapResolution_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
		{ "Comment", "/// Resolution of lightmap for baked lighting.\n" },
		{ "DisplayName", "Light Map Resolution" },
		{ "FixedIncrement", "4.0" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Resolution of lightmap for baked lighting." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapResolution = { "LightMapResolution", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, LightMapResolution), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LpvBiasMultiplier_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
		{ "Comment", "/// Bias multiplier for Light Propagation Volume lighting for new Houdini Assets.\n" },
		{ "DisplayName", "Lpv Bias Multiplier" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Bias multiplier for Light Propagation Volume lighting for new Houdini Assets." },
		{ "UIMax", "3.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LpvBiasMultiplier = { "LpvBiasMultiplier", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, LpvBiasMultiplier), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LpvBiasMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LpvBiasMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GeneratedDistanceFieldResolutionScale_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
		{ "Comment", "/// Default Mesh distance field resolution, setting it to 0 will prevent the mesh distance field generation while editing the asset\n" },
		{ "DisplayName", "Distance Field Resolution Scale" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Default Mesh distance field resolution, setting it to 0 will prevent the mesh distance field generation while editing the asset" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GeneratedDistanceFieldResolutionScale = { "GeneratedDistanceFieldResolutionScale", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, GeneratedDistanceFieldResolutionScale), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GeneratedDistanceFieldResolutionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GeneratedDistanceFieldResolutionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_WalkableSlopeOverride_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
		{ "Comment", "/// Custom walkable slope setting for bodies of new Houdini Assets.\n" },
		{ "DisplayName", "Walkable Slope Override" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Custom walkable slope setting for bodies of new Houdini Assets." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_WalkableSlopeOverride = { "WalkableSlopeOverride", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, WalkableSlopeOverride), Z_Construct_UScriptStruct_FWalkableSlopeOverride, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_WalkableSlopeOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_WalkableSlopeOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapCoordinateIndex_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
		{ "Comment", "/// The UV coordinate index of lightmap \n" },
		{ "DisplayName", "Light map coordinate index" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "The UV coordinate index of lightmap" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapCoordinateIndex = { "LightMapCoordinateIndex", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, LightMapCoordinateIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapCoordinateIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapCoordinateIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
		{ "Comment", "/// True if mesh should use a less-conservative method of mip LOD texture factor computation for new Houdini Assets.\n" },
		{ "DisplayName", "Use Maximum Streaming Texel Ratio" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "True if mesh should use a less-conservative method of mip LOD texture factor computation for new Houdini Assets." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bUseMaximumStreamingTexelRatio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio = { "bUseMaximumStreamingTexelRatio", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_StreamingDistanceMultiplier_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
		{ "Comment", "/// Allows artists to adjust the distance where textures using UV 0 are streamed in/out for new Houdini Assets.\n" },
		{ "DisplayName", "Streaming Distance Multiplier" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Allows artists to adjust the distance where textures using UV 0 are streamed in/out for new Houdini Assets." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_StreamingDistanceMultiplier = { "StreamingDistanceMultiplier", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, StreamingDistanceMultiplier), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_StreamingDistanceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_StreamingDistanceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_FoliageDefaultSettings_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
		{ "Comment", "/// Default settings when using new Houdini Asset mesh for instanced foliage.\n" },
		{ "DisplayName", "Foliage Default Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Default settings when using new Houdini Asset mesh for instanced foliage." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_FoliageDefaultSettings = { "FoliageDefaultSettings", nullptr, (EPropertyFlags)0x0012040000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, FoliageDefaultSettings), Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_FoliageDefaultSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_FoliageDefaultSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
		{ "Comment", "/// Array of user data stored with the new Houdini Asset.\n" },
		{ "DisplayName", "Asset User Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Array of user data stored with the new Houdini Asset." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
		{ "Comment", "/// Array of user data stored with the new Houdini Asset.\n" },
		{ "DisplayName", "Asset User Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Array of user data stored with the new Houdini Asset." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0010048000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
		{ "Comment", "// If true, UVs will be stored at full floating point precision.\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If true, UVs will be stored at full floating point precision." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bUseFullPrecisionUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs = { "bUseFullPrecisionUVs", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SrcLightmapIndex_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
		{ "Comment", "// Source UV set for generated lightmap.\n" },
		{ "DisplayName", "Source Lightmap Index" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Source UV set for generated lightmap." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SrcLightmapIndex = { "SrcLightmapIndex", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, SrcLightmapIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SrcLightmapIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SrcLightmapIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DstLightmapIndex_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
		{ "Comment", "// Destination UV set for generated lightmap.\n" },
		{ "DisplayName", "Destination Lightmap Index" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Destination UV set for generated lightmap." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DstLightmapIndex = { "DstLightmapIndex", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DstLightmapIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DstLightmapIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DstLightmapIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MinLightmapResolution_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
		{ "Comment", "// Target lightmap resolution to for generated lightmap.  Determines the padding between UV shells in a packed lightmap.\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Target lightmap resolution to for generated lightmap.  Determines the padding between UV shells in a packed lightmap." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MinLightmapResolution = { "MinLightmapResolution", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, MinLightmapResolution), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MinLightmapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MinLightmapResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
		{ "Comment", "// If true, degenerate triangles will be removed.\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If true, degenerate triangles will be removed." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bRemoveDegenerates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates = { "bRemoveDegenerates", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GenerateLightmapUVsFlag_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
		{ "Comment", "// Lightmap UV generation\n" },
		{ "DisplayName", "Generate Lightmap UVs" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Lightmap UV generation" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GenerateLightmapUVsFlag = { "GenerateLightmapUVsFlag", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, GenerateLightmapUVsFlag), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GenerateLightmapUVsFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GenerateLightmapUVsFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeNormalsFlag_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
		{ "Comment", "// Normals generation\n" },
		{ "DisplayName", "Recompute Normals" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Normals generation" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeNormalsFlag = { "RecomputeNormalsFlag", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, RecomputeNormalsFlag), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeNormalsFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeNormalsFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeTangentsFlag_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
		{ "Comment", "// Tangents generation\n" },
		{ "DisplayName", "Recompute Tangents" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Tangents generation" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeTangentsFlag = { "RecomputeTangentsFlag", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, RecomputeTangentsFlag), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeTangentsFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeTangentsFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
		{ "Comment", "// If true, recomputed tangents and normals will be calculated using MikkT Space.  This method does require properly laid out UVs though otherwise you'll get a degenerate tangent warning\n" },
		{ "DisplayName", "Generate Using MikkT Space" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If true, recomputed tangents and normals will be calculated using MikkT Space.  This method does require properly laid out UVs though otherwise you'll get a degenerate tangent warning" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bUseMikkTSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace = { "bUseMikkTSpace", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
		{ "Comment", "// Required for PNT tessellation but can be slow. Recommend disabling for larger meshes.\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Required for PNT tessellation but can be slow. Recommend disabling for larger meshes." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bBuildAdjacencyBuffer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer = { "bBuildAdjacencyBuffer", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
		{ "Comment", "// If true, we will use the surface area and the corner angle of the triangle as a ratio when computing the normals.\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If true, we will use the surface area and the corner angle of the triangle as a ratio when computing the normals." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bComputeWeightedNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals = { "bComputeWeightedNormals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
		{ "Comment", "// Required to optimize mesh in mirrored transform. Double index buffer size.\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Required to optimize mesh in mirrored transform. Double index buffer size." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bBuildReversedIndexBuffer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer = { "bBuildReversedIndexBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
		{ "Comment", "// If true, Tangents will be stored at 16 bit vs 8 bit precision.\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If true, Tangents will be stored at 16 bit vs 8 bit precision." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bUseHighPrecisionTangentBasis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis = { "bUseHighPrecisionTangentBasis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DistanceFieldResolutionScale_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
		{ "Comment", "// Scale to apply to the mesh when allocating the distance field volume texture.\n// The default scale is 1, which is assuming that the mesh will be placed unscaled in the world.\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Scale to apply to the mesh when allocating the distance field volume texture.\nThe default scale is 1, which is assuming that the mesh will be placed unscaled in the world." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DistanceFieldResolutionScale = { "DistanceFieldResolutionScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DistanceFieldResolutionScale), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DistanceFieldResolutionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DistanceFieldResolutionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
		{ "Comment", "// Whether to generate the distance field treating every triangle hit as a front face.\n// When enabled prevents the distance field from being discarded due to the mesh being open, but also lowers Distance Field AO quality.\n" },
		{ "DisplayName", "Two-Sided Distance Field Generation" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Whether to generate the distance field treating every triangle hit as a front face.\nWhen enabled prevents the distance field from being discarded due to the mesh being open, but also lowers Distance Field AO quality." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bGenerateDistanceFieldAsIfTwoSided = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided = { "bGenerateDistanceFieldAsIfTwoSided", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
		{ "Comment", "// Enable the Physical Material Mask\n" },
		{ "DisplayName", "Enable Physical Material Mask" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Enable the Physical Material Mask" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bSupportFaceRemap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap = { "bSupportFaceRemap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_MetaData[] = {
		{ "Category", "PDG Settings" },
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------\n// PDG Commandlet import\n//-------------------------------------------------------------------------------------------------------------\n// Is the PDG commandlet enabled? \n" },
		{ "DisplayName", "Async Importer Enabled" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "PDG Commandlet import\n-------------------------------------------------------------------------------------------------------------\nIs the PDG commandlet enabled?" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bPDGAsyncCommandletImportEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled = { "bPDGAsyncCommandletImportEnabled", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------\n// Legacy\n//-------------------------------------------------------------------------------------------------------------\n// Whether to enable backward compatibility\n" },
		{ "DisplayName", "Enable backward compatibility with Version 1" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Legacy\n-------------------------------------------------------------------------------------------------------------\nWhether to enable backward compatibility" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bEnableBackwardCompatibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility = { "bEnableBackwardCompatibility", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "// Automatically rebuild legacy HAC\n" },
		{ "DisplayName", "Automatically rebuild legacy Houdini Asset Components" },
		{ "EditCondition", "bEnableBackwardCompatibility" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Automatically rebuild legacy HAC" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bAutomaticLegacyHDARebuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild = { "bAutomaticLegacyHDARebuild", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_MetaData[] = {
		{ "Category", "HoudiniLocation" },
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------\n// Custom Houdini Location\n//-------------------------------------------------------------------------------------------------------------\n// Whether to use custom Houdini location.\n" },
		{ "DisplayName", "Use custom Houdini location (requires restart)" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Custom Houdini Location\n-------------------------------------------------------------------------------------------------------------\nWhether to use custom Houdini location." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bUseCustomHoudiniLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation = { "bUseCustomHoudiniLocation", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation_MetaData[] = {
		{ "Category", "HoudiniLocation" },
		{ "Comment", "// Custom Houdini location (where HAPI library is located).\n" },
		{ "DisplayName", "Custom Houdini location" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Custom Houdini location (where HAPI library is located)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation = { "CustomHoudiniLocation", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, CustomHoudiniLocation), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniExecutable_MetaData[] = {
		{ "Category", "HoudiniLocation" },
		{ "Comment", "// Select the Houdini executable to be used when opening session sync or opening hip files\n" },
		{ "DisplayName", "Houdini Executable" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Select the Houdini executable to be used when opening session sync or opening hip files" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniExecutable = { "HoudiniExecutable", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, HoudiniExecutable), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniExecutable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniExecutable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize_MetaData[] = {
		{ "Category", "HoudiniEngineInitialization" },
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------\n// HAPI_Initialize\n//-------------------------------------------------------------------------------------------------------------\n// Evaluation thread stack size in bytes.  -1 for default \n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "HAPI_Initialize\n-------------------------------------------------------------------------------------------------------------\nEvaluation thread stack size in bytes.  -1 for default" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize = { "CookingThreadStackSize", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, CookingThreadStackSize), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles_MetaData[] = {
		{ "Category", "HoudiniEngineInitialization" },
		{ "Comment", "// List of paths to Houdini-compatible .env files (; separated on Windows, : otherwise)\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "List of paths to Houdini-compatible .env files (; separated on Windows, : otherwise)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles = { "HoudiniEnvironmentFiles", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, HoudiniEnvironmentFiles), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath_MetaData[] = {
		{ "Category", "HoudiniEngineInitialization" },
		{ "Comment", "// Path to find other OTL/HDA files\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Path to find other OTL/HDA files" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath = { "OtlSearchPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, OtlSearchPath), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath_MetaData[] = {
		{ "Category", "HoudiniEngineInitialization" },
		{ "Comment", "// Sets HOUDINI_DSO_PATH\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Sets HOUDINI_DSO_PATH" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath = { "DsoSearchPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DsoSearchPath), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath_MetaData[] = {
		{ "Category", "HoudiniEngineInitialization" },
		{ "Comment", "// Sets HOUDINI_IMAGE_DSO_PATH\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Sets HOUDINI_IMAGE_DSO_PATH" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath = { "ImageDsoSearchPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ImageDsoSearchPath), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath_MetaData[] = {
		{ "Category", "HoudiniEngineInitialization" },
		{ "Comment", "// Sets HOUDINI_AUDIO_DSO_PATH\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Sets HOUDINI_AUDIO_DSO_PATH" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath = { "AudioDsoSearchPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, AudioDsoSearchPath), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_PhysMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBodyInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CollisionTraceFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LpvBiasMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GeneratedDistanceFieldResolutionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_WalkableSlopeOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapCoordinateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_StreamingDistanceMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_FoliageDefaultSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SrcLightmapIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DstLightmapIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MinLightmapResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GenerateLightmapUVsFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeNormalsFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeTangentsFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DistanceFieldResolutionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniExecutable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniRuntimeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::ClassParams = {
		&UHoudiniRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::PropPointers),
		0,
		0x009000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniRuntimeSettings, 4027177429);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniRuntimeSettings>()
	{
		return UHoudiniRuntimeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniRuntimeSettings(Z_Construct_UClass_UHoudiniRuntimeSettings, &UHoudiniRuntimeSettings::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
