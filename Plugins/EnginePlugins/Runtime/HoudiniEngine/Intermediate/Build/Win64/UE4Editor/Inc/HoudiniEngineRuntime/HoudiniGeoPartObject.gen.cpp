// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniGeoPartObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniGeoPartObject() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGeoPartObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniMeshSocket();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCurveInfo();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniVolumeInfo();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPartInfo();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGeoInfo();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniObjectInfo();
// End Cross Module References
	static UEnum* EHoudiniInstancerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniInstancerType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInstancerType>()
	{
		return EHoudiniInstancerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniInstancerType(EHoudiniInstancerType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniInstancerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType_Hash() { return 2376227702U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniInstancerType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniInstancerType::Invalid", (int64)EHoudiniInstancerType::Invalid },
				{ "EHoudiniInstancerType::ObjectInstancer", (int64)EHoudiniInstancerType::ObjectInstancer },
				{ "EHoudiniInstancerType::PackedPrimitive", (int64)EHoudiniInstancerType::PackedPrimitive },
				{ "EHoudiniInstancerType::AttributeInstancer", (int64)EHoudiniInstancerType::AttributeInstancer },
				{ "EHoudiniInstancerType::OldSchoolAttributeInstancer", (int64)EHoudiniInstancerType::OldSchoolAttributeInstancer },
				{ "EHoudiniInstancerType::GeometryCollection", (int64)EHoudiniInstancerType::GeometryCollection },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AttributeInstancer.Name", "EHoudiniInstancerType::AttributeInstancer" },
				{ "GeometryCollection.Name", "EHoudiniInstancerType::GeometryCollection" },
				{ "Invalid.Name", "EHoudiniInstancerType::Invalid" },
				{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
				{ "ObjectInstancer.Name", "EHoudiniInstancerType::ObjectInstancer" },
				{ "OldSchoolAttributeInstancer.Name", "EHoudiniInstancerType::OldSchoolAttributeInstancer" },
				{ "PackedPrimitive.Name", "EHoudiniInstancerType::PackedPrimitive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniInstancerType",
				"EHoudiniInstancerType",
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
	static UEnum* EHoudiniPartType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniPartType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniPartType>()
	{
		return EHoudiniPartType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniPartType(EHoudiniPartType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniPartType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType_Hash() { return 2181384661U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniPartType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniPartType::Invalid", (int64)EHoudiniPartType::Invalid },
				{ "EHoudiniPartType::Mesh", (int64)EHoudiniPartType::Mesh },
				{ "EHoudiniPartType::Instancer", (int64)EHoudiniPartType::Instancer },
				{ "EHoudiniPartType::Curve", (int64)EHoudiniPartType::Curve },
				{ "EHoudiniPartType::Volume", (int64)EHoudiniPartType::Volume },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Curve.Name", "EHoudiniPartType::Curve" },
				{ "Instancer.Name", "EHoudiniPartType::Instancer" },
				{ "Invalid.Name", "EHoudiniPartType::Invalid" },
				{ "Mesh.Name", "EHoudiniPartType::Mesh" },
				{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
				{ "Volume.Name", "EHoudiniPartType::Volume" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniPartType",
				"EHoudiniPartType",
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
	static UEnum* EHoudiniGeoType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniGeoType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniGeoType>()
	{
		return EHoudiniGeoType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniGeoType(EHoudiniGeoType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniGeoType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType_Hash() { return 559363412U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniGeoType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniGeoType::Invalid", (int64)EHoudiniGeoType::Invalid },
				{ "EHoudiniGeoType::Default", (int64)EHoudiniGeoType::Default },
				{ "EHoudiniGeoType::Intermediate", (int64)EHoudiniGeoType::Intermediate },
				{ "EHoudiniGeoType::Input", (int64)EHoudiniGeoType::Input },
				{ "EHoudiniGeoType::Curve", (int64)EHoudiniGeoType::Curve },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Curve.Name", "EHoudiniGeoType::Curve" },
				{ "Default.Name", "EHoudiniGeoType::Default" },
				{ "Input.Name", "EHoudiniGeoType::Input" },
				{ "Intermediate.Name", "EHoudiniGeoType::Intermediate" },
				{ "Invalid.Name", "EHoudiniGeoType::Invalid" },
				{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniGeoType",
				"EHoudiniGeoType",
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
class UScriptStruct* FHoudiniGeoPartObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniGeoPartObject, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniGeoPartObject"), sizeof(FHoudiniGeoPartObject), Get_Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniGeoPartObject>()
{
	return FHoudiniGeoPartObject::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniGeoPartObject(FHoudiniGeoPartObject::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniGeoPartObject"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniGeoPartObject
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniGeoPartObject()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniGeoPartObject>(FName(TEXT("HoudiniGeoPartObject")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniGeoPartObject;
	struct Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssetId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ObjectId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeoId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GeoId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PartId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasCustomPartName_MetaData[];
#endif
		static void NewProp_bHasCustomPartName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasCustomPartName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SplitGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplitGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SplitGroups;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformMatrix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformMatrix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodePath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstancerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InstancerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VolumeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasEditLayers_MetaData[];
#endif
		static void NewProp_bHasEditLayers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasEditLayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeLayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VolumeLayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeTileIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VolumeTileIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEditable_MetaData[];
#endif
		static void NewProp_bIsEditable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEditable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTemplated_MetaData[];
#endif
		static void NewProp_bIsTemplated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTemplated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInstanced_MetaData[];
#endif
		static void NewProp_bIsInstanced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInstanced;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasGeoChanged_MetaData[];
#endif
		static void NewProp_bHasGeoChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasGeoChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasPartChanged_MetaData[];
#endif
		static void NewProp_bHasPartChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPartChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasTransformChanged_MetaData[];
#endif
		static void NewProp_bHasTransformChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasTransformChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasMaterialsChanged_MetaData[];
#endif
		static void NewProp_bHasMaterialsChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasMaterialsChanged;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllMeshSockets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllMeshSockets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllMeshSockets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\nUSTRUCT()\nstruct HOUDINIENGINERUNTIME_API FHoudiniSplitDataCache\n{\n\x09GENERATED_USTRUCT_BODY()\n\n\x09UPROPERTY()\n\x09""FString SplitName;\n\x09//UPROPERTY()\n\x09//FHoudiniOutputObjectIdentifier SplitIdentifier;\n\x09//EHoudiniSplitType SplitType;\n\n\x09UPROPERTY()\n\x09TArray<FVector> Positions;\n\x09UPROPERTY()\n\x09TArray<uint32> Indices;\n\n\x09UPROPERTY()\n\x09TArray<FVector> Normals;\n\x09UPROPERTY()\n\x09TArray<FVector> Tangents;\n\x09UPROPERTY()\n\x09TArray<FVector> Binormals;\n\x09\n\x09UPROPERTY()\n\x09TArray<FVector4> Colors;\n\n\x09//UPROPERTY()\n\x09//TArray<TArray<FVector2D>> UVs;\n\x09\n\x09//TArray<bool> EdgeHardnesses;\x09\n\x09UPROPERTY()\n\x09TArray<int32> FaceSmoothingMasks;\n\x09UPROPERTY()\n\x09TArray<int32> LightMapResolutions;\n\n\x09UPROPERTY()\n\x09TArray<int32> MaterialIndices;\n\x09UPROPERTY()\n\x09TArray<UMaterialInterface*> Materials;\n\n\x09UPROPERTY()\n\x09""float lod_screensize;\n\n\x09UPROPERTY()\n\x09""FKAggregateGeom AggregateCollisions;\n};\n*/" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "USTRUCT()\nstruct HOUDINIENGINERUNTIME_API FHoudiniSplitDataCache\n{\n       GENERATED_USTRUCT_BODY()\n\n       UPROPERTY()\n       FString SplitName;\n       //UPROPERTY()\n       //FHoudiniOutputObjectIdentifier SplitIdentifier;\n       //EHoudiniSplitType SplitType;\n\n       UPROPERTY()\n       TArray<FVector> Positions;\n       UPROPERTY()\n       TArray<uint32> Indices;\n\n       UPROPERTY()\n       TArray<FVector> Normals;\n       UPROPERTY()\n       TArray<FVector> Tangents;\n       UPROPERTY()\n       TArray<FVector> Binormals;\n\n       UPROPERTY()\n       TArray<FVector4> Colors;\n\n       //UPROPERTY()\n       //TArray<TArray<FVector2D>> UVs;\n\n       //TArray<bool> EdgeHardnesses;\n       UPROPERTY()\n       TArray<int32> FaceSmoothingMasks;\n       UPROPERTY()\n       TArray<int32> LightMapResolutions;\n\n       UPROPERTY()\n       TArray<int32> MaterialIndices;\n       UPROPERTY()\n       TArray<UMaterialInterface*> Materials;\n\n       UPROPERTY()\n       float lod_screensize;\n\n       UPROPERTY()\n       FKAggregateGeom AggregateCollisions;\n};" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniGeoPartObject>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AssetId_MetaData[] = {
		{ "Comment", "// NodeId of corresponding HAPI Asset.\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "NodeId of corresponding HAPI Asset." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, AssetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AssetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AssetId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AssetName_MetaData[] = {
		{ "Comment", "// Name of corresponding HDA.\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "Name of corresponding HDA." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, AssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AssetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_ObjectId_MetaData[] = {
		{ "Comment", "// NodeId of corresponding HAPI Object.\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "NodeId of corresponding HAPI Object." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_ObjectId = { "ObjectId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, ObjectId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_ObjectId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_ObjectId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Comment", "// Name of associated object.\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "Name of associated object." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, ObjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_GeoId_MetaData[] = {
		{ "Comment", "// NodeId of corresponding HAPI Geo.\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "NodeId of corresponding HAPI Geo." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_GeoId = { "GeoId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, GeoId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_GeoId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_GeoId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_PartId_MetaData[] = {
		{ "Comment", "// PartId of corresponding HAPI Part.\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "PartId of corresponding HAPI Part." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, PartId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_PartId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_PartId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_PartName_MetaData[] = {
		{ "Comment", "// Name of associated part.\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "Name of associated part." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_PartName = { "PartName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, PartName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_PartName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_PartName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasCustomPartName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasCustomPartName_SetBit(void* Obj)
	{
		((FHoudiniGeoPartObject*)Obj)->bHasCustomPartName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasCustomPartName = { "bHasCustomPartName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasCustomPartName_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasCustomPartName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasCustomPartName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_SplitGroups_Inner = { "SplitGroups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_SplitGroups_MetaData[] = {
		{ "Comment", "/*\n\x09// Type of the split.\n\x09UPROPERTY()\n\x09""EHoudiniSplitType SplitType;\n\n\x09// Index of a split. In most cases this will be 0.\n\x09UPROPERTY()\n\x09int32 SplitIndex;\n\n\x09// Name of group which was used for splitting, empty if there's none.\n\x09UPROPERTY()\n\x09""FString SplitName;\n\x09*/// Split groups handled by this HGPO\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "// Type of the split.\nUPROPERTY()\nEHoudiniSplitType SplitType;\n\n// Index of a split. In most cases this will be 0.\nUPROPERTY()\nint32 SplitIndex;\n\n// Name of group which was used for splitting, empty if there's none.\nUPROPERTY()\nFString SplitName;\n// Split groups handled by this HGPO" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_SplitGroups = { "SplitGroups", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, SplitGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_SplitGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_SplitGroups_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_TransformMatrix_MetaData[] = {
		{ "Comment", "// Transform of this geo part object.\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "Transform of this geo part object." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_TransformMatrix = { "TransformMatrix", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, TransformMatrix), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_TransformMatrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_TransformMatrix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_NodePath_MetaData[] = {
		{ "Comment", "// Path to the corresponding node\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "Path to the corresponding node" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_NodePath = { "NodePath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, NodePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_NodePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_NodePath_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "// Indicates the type of the referenced object\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "Indicates the type of the referenced object" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, Type), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_InstancerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_InstancerType_MetaData[] = {
		{ "Comment", "// Indicates the type of instancer\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "Indicates the type of instancer" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_InstancerType = { "InstancerType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, InstancerType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_InstancerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_InstancerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeName_MetaData[] = {
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeName = { "VolumeName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, VolumeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasEditLayers_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasEditLayers_SetBit(void* Obj)
	{
		((FHoudiniGeoPartObject*)Obj)->bHasEditLayers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasEditLayers = { "bHasEditLayers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasEditLayers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasEditLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasEditLayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeLayerName_MetaData[] = {
		{ "Comment", "// Name of edit layer \n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "Name of edit layer" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeLayerName = { "VolumeLayerName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, VolumeLayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeLayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeTileIndex_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeTileIndex = { "VolumeTileIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, VolumeTileIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeTileIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeTileIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "Comment", "// Is set to true when referenced object is visible.\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "Is set to true when referenced object is visible." },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((FHoudiniGeoPartObject*)Obj)->bIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsEditable_MetaData[] = {
		{ "Comment", "// Is set to true when referenced object is editable.\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "Is set to true when referenced object is editable." },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsEditable_SetBit(void* Obj)
	{
		((FHoudiniGeoPartObject*)Obj)->bIsEditable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsEditable = { "bIsEditable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsEditable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsEditable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsEditable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsTemplated_MetaData[] = {
		{ "Comment", "// Is set to true when referenced object is templated.\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "Is set to true when referenced object is templated." },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsTemplated_SetBit(void* Obj)
	{
		((FHoudiniGeoPartObject*)Obj)->bIsTemplated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsTemplated = { "bIsTemplated", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsTemplated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsTemplated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsTemplated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsInstanced_MetaData[] = {
		{ "Comment", "// Is set to true when the referenced object is instanced.\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "Is set to true when the referenced object is instanced." },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsInstanced_SetBit(void* Obj)
	{
		((FHoudiniGeoPartObject*)Obj)->bIsInstanced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsInstanced = { "bIsInstanced", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsInstanced_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsInstanced_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsInstanced_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasGeoChanged_MetaData[] = {
		{ "Comment", "// Indicates the parent geo has changed and needs to be rebuilt\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "Indicates the parent geo has changed and needs to be rebuilt" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasGeoChanged_SetBit(void* Obj)
	{
		((FHoudiniGeoPartObject*)Obj)->bHasGeoChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasGeoChanged = { "bHasGeoChanged", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasGeoChanged_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasGeoChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasGeoChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasPartChanged_MetaData[] = {
		{ "Comment", "// Indicates the part has changed and needs to be rebuilt\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "Indicates the part has changed and needs to be rebuilt" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasPartChanged_SetBit(void* Obj)
	{
		((FHoudiniGeoPartObject*)Obj)->bHasPartChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasPartChanged = { "bHasPartChanged", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasPartChanged_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasPartChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasPartChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasTransformChanged_MetaData[] = {
		{ "Comment", "// Indicates only the transform needs to be updated\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "Indicates only the transform needs to be updated" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasTransformChanged_SetBit(void* Obj)
	{
		((FHoudiniGeoPartObject*)Obj)->bHasTransformChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasTransformChanged = { "bHasTransformChanged", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasTransformChanged_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasTransformChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasTransformChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasMaterialsChanged_MetaData[] = {
		{ "Comment", "// Indicates only the material needs to be updated\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "Indicates only the material needs to be updated" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasMaterialsChanged_SetBit(void* Obj)
	{
		((FHoudiniGeoPartObject*)Obj)->bHasMaterialsChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasMaterialsChanged = { "bHasMaterialsChanged", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasMaterialsChanged_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasMaterialsChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasMaterialsChanged_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AllMeshSockets_Inner = { "AllMeshSockets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHoudiniMeshSocket, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AllMeshSockets_MetaData[] = {
		{ "Comment", "// Stores the Mesh Sockets found for a given HGPO\n" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "ToolTip", "Stores the Mesh Sockets found for a given HGPO" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AllMeshSockets = { "AllMeshSockets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, AllMeshSockets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AllMeshSockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AllMeshSockets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AssetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_ObjectId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_ObjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_GeoId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_PartId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_PartName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasCustomPartName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_SplitGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_SplitGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_TransformMatrix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_NodePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_InstancerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_InstancerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasEditLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeLayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeTileIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsEditable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsTemplated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsInstanced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasGeoChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasPartChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasTransformChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasMaterialsChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AllMeshSockets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AllMeshSockets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniGeoPartObject",
		sizeof(FHoudiniGeoPartObject),
		alignof(FHoudiniGeoPartObject),
		Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGeoPartObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniGeoPartObject"), sizeof(FHoudiniGeoPartObject), Get_Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Hash() { return 3587704796U; }
class UScriptStruct* FHoudiniMeshSocket::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniMeshSocket_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniMeshSocket, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniMeshSocket"), sizeof(FHoudiniMeshSocket), Get_Z_Construct_UScriptStruct_FHoudiniMeshSocket_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniMeshSocket>()
{
	return FHoudiniMeshSocket::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniMeshSocket(FHoudiniMeshSocket::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniMeshSocket"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniMeshSocket
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniMeshSocket()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniMeshSocket>(FName(TEXT("HoudiniMeshSocket")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniMeshSocket;
	struct Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniMeshSocket>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniMeshSocket",
		sizeof(FHoudiniMeshSocket),
		alignof(FHoudiniMeshSocket),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniMeshSocket()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniMeshSocket_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniMeshSocket"), sizeof(FHoudiniMeshSocket), Get_Z_Construct_UScriptStruct_FHoudiniMeshSocket_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniMeshSocket_Hash() { return 385498842U; }
class UScriptStruct* FHoudiniCurveInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniCurveInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniCurveInfo, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniCurveInfo"), sizeof(FHoudiniCurveInfo), Get_Z_Construct_UScriptStruct_FHoudiniCurveInfo_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniCurveInfo>()
{
	return FHoudiniCurveInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniCurveInfo(FHoudiniCurveInfo::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniCurveInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniCurveInfo
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniCurveInfo()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniCurveInfo>(FName(TEXT("HoudiniCurveInfo")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniCurveInfo;
	struct Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniCurveInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniCurveInfo",
		sizeof(FHoudiniCurveInfo),
		alignof(FHoudiniCurveInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCurveInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniCurveInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniCurveInfo"), sizeof(FHoudiniCurveInfo), Get_Z_Construct_UScriptStruct_FHoudiniCurveInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniCurveInfo_Hash() { return 2854408115U; }
class UScriptStruct* FHoudiniVolumeInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniVolumeInfo, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniVolumeInfo"), sizeof(FHoudiniVolumeInfo), Get_Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniVolumeInfo>()
{
	return FHoudiniVolumeInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniVolumeInfo(FHoudiniVolumeInfo::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniVolumeInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniVolumeInfo
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniVolumeInfo()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniVolumeInfo>(FName(TEXT("HoudiniVolumeInfo")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniVolumeInfo;
	struct Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniVolumeInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniVolumeInfo",
		sizeof(FHoudiniVolumeInfo),
		alignof(FHoudiniVolumeInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniVolumeInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniVolumeInfo"), sizeof(FHoudiniVolumeInfo), Get_Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Hash() { return 2417158397U; }
class UScriptStruct* FHoudiniPartInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniPartInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPartInfo, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniPartInfo"), sizeof(FHoudiniPartInfo), Get_Z_Construct_UScriptStruct_FHoudiniPartInfo_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniPartInfo>()
{
	return FHoudiniPartInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniPartInfo(FHoudiniPartInfo::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniPartInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniPartInfo
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniPartInfo()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniPartInfo>(FName(TEXT("HoudiniPartInfo")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniPartInfo;
	struct Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPartInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniPartInfo",
		sizeof(FHoudiniPartInfo),
		alignof(FHoudiniPartInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPartInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniPartInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniPartInfo"), sizeof(FHoudiniPartInfo), Get_Z_Construct_UScriptStruct_FHoudiniPartInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniPartInfo_Hash() { return 2245961264U; }
class UScriptStruct* FHoudiniGeoInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniGeoInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniGeoInfo, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniGeoInfo"), sizeof(FHoudiniGeoInfo), Get_Z_Construct_UScriptStruct_FHoudiniGeoInfo_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniGeoInfo>()
{
	return FHoudiniGeoInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniGeoInfo(FHoudiniGeoInfo::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniGeoInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniGeoInfo
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniGeoInfo()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniGeoInfo>(FName(TEXT("HoudiniGeoInfo")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniGeoInfo;
	struct Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniGeoInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniGeoInfo",
		sizeof(FHoudiniGeoInfo),
		alignof(FHoudiniGeoInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGeoInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniGeoInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniGeoInfo"), sizeof(FHoudiniGeoInfo), Get_Z_Construct_UScriptStruct_FHoudiniGeoInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniGeoInfo_Hash() { return 1966673908U; }
class UScriptStruct* FHoudiniObjectInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniObjectInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniObjectInfo, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniObjectInfo"), sizeof(FHoudiniObjectInfo), Get_Z_Construct_UScriptStruct_FHoudiniObjectInfo_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniObjectInfo>()
{
	return FHoudiniObjectInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniObjectInfo(FHoudiniObjectInfo::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniObjectInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniObjectInfo
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniObjectInfo()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniObjectInfo>(FName(TEXT("HoudiniObjectInfo")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniObjectInfo;
	struct Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniObjectInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniObjectInfo",
		sizeof(FHoudiniObjectInfo),
		alignof(FHoudiniObjectInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniObjectInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniObjectInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniObjectInfo"), sizeof(FHoudiniObjectInfo), Get_Z_Construct_UScriptStruct_FHoudiniObjectInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniObjectInfo_Hash() { return 3053429410U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
