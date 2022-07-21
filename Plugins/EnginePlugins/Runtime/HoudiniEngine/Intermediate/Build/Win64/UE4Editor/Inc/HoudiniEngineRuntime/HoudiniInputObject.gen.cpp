// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniInputObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputObject() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBrushInfo();
	ENGINE_API UClass* Z_Construct_UClass_ABrush_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBrushType();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputStaticMesh_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputStaticMesh();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSkeletalMesh_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSkeletalMesh();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputGeometryCollection_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputGeometryCollection();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputGeometryCollectionActor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputGeometryCollectionActor();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSceneComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSceneComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputMeshComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputInstancedMeshComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSplineComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSplineComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniSplineComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputCameraComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputCameraComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputHoudiniAsset_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputHoudiniAsset();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputActor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputActor();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputLandscape_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputLandscape();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputBrush_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputBrush();
	ENGINE_API UClass* Z_Construct_UClass_UModel();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputDataTable_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputDataTable();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh();
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
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType_Hash() { return 764545223U; }
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
				{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
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
class UScriptStruct* FHoudiniBrushInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniBrushInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniBrushInfo, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniBrushInfo"), sizeof(FHoudiniBrushInfo), Get_Z_Construct_UScriptStruct_FHoudiniBrushInfo_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniBrushInfo>()
{
	return FHoudiniBrushInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniBrushInfo(FHoudiniBrushInfo::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniBrushInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniBrushInfo
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniBrushInfo()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniBrushInfo>(FName(TEXT("HoudiniBrushInfo")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniBrushInfo;
	struct Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_BrushActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedBrushType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CachedBrushType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedSurfaceHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_CachedSurfaceHash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//USTRUCT()\n//struct FHoudiniBrushSurfaceInfo {\n//\x09GENERATED_BODY()\n//\n//\x09""FVector Base;\n//\x09""FVector Normal;\n//\x09""FVector TextureU;\n//\x09""FVector TextureV;\n//\x09TSoftObjectPtr<UMaterialInterface> Material;\n//\n//\x09""FHoudiniBrushSurfaceInfo(const FVector& InBase, const FVector& InNormal, const FVector& InTextureU, const FVector& InTextureV, UMaterialInterface* InMaterial)\n//\x09\x09: Base(InBase)\n//\x09\x09, Normal(InNormal)\n//\x09\x09, TextureU(InTextureU)\n//\x09\x09, TextureV(InTextureV)\n//\x09\x09, Material(InMaterial)\n//\x09{ }\n//\n//\x09inline bool operator==(const FHoudiniBrushSurfaceInfo& Other) {\n//\x09\x09return Base.Equals(Other.Base)\n//\x09\x09\x09&& Normal.Equals(Other.Normal)\n//\x09\x09\x09&& TextureU.Equals(Other.TextureU)\n//\x09\x09\x09&& TextureV.Equals(Other.TextureV)\n//\x09\x09\x09&& Material.Get() == Other.Material.Get();\n//\x09}\n//\n//\x09inline bool operator==(const FPoly& Poly) {\n//\x09\x09return Base.Equals(Poly.Base)\n//\x09\x09\x09&& Normal.Equals(Poly.Normal)\n//\x09\x09\x09&& TextureU.Equals(Poly.TextureU)\n//\x09\x09\x09&& TextureV.Equals(Poly.TextureV)\n//\x09\x09\x09&& Material.Get() == Poly.Material;\n//\x09}\n//};\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "USTRUCT()\nstruct FHoudiniBrushSurfaceInfo {\n       GENERATED_BODY()\n\n       FVector Base;\n       FVector Normal;\n       FVector TextureU;\n       FVector TextureV;\n       TSoftObjectPtr<UMaterialInterface> Material;\n\n       FHoudiniBrushSurfaceInfo(const FVector& InBase, const FVector& InNormal, const FVector& InTextureU, const FVector& InTextureV, UMaterialInterface* InMaterial)\n               : Base(InBase)\n               , Normal(InNormal)\n               , TextureU(InTextureU)\n               , TextureV(InTextureV)\n               , Material(InMaterial)\n       { }\n\n       inline bool operator==(const FHoudiniBrushSurfaceInfo& Other) {\n               return Base.Equals(Other.Base)\n                       && Normal.Equals(Other.Normal)\n                       && TextureU.Equals(Other.TextureU)\n                       && TextureV.Equals(Other.TextureV)\n                       && Material.Get() == Other.Material.Get();\n       }\n\n       inline bool operator==(const FPoly& Poly) {\n               return Base.Equals(Poly.Base)\n                       && Normal.Equals(Poly.Normal)\n                       && TextureU.Equals(Poly.TextureU)\n                       && TextureV.Equals(Poly.TextureV)\n                       && Material.Get() == Poly.Material;\n       }\n};" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniBrushInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_BrushActor_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_BrushActor = { "BrushActor", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniBrushInfo, BrushActor), Z_Construct_UClass_ABrush_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_BrushActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_BrushActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedTransform_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedTransform = { "CachedTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniBrushInfo, CachedTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedOrigin_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedOrigin = { "CachedOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniBrushInfo, CachedOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedExtent_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedExtent = { "CachedExtent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniBrushInfo, CachedExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedBrushType_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedBrushType = { "CachedBrushType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniBrushInfo, CachedBrushType), Z_Construct_UEnum_Engine_EBrushType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedBrushType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedBrushType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedSurfaceHash_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedSurfaceHash = { "CachedSurfaceHash", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniBrushInfo, CachedSurfaceHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedSurfaceHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedSurfaceHash_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_BrushActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedBrushType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedSurfaceHash,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniBrushInfo",
		sizeof(FHoudiniBrushInfo),
		alignof(FHoudiniBrushInfo),
		Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBrushInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniBrushInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniBrushInfo"), sizeof(FHoudiniBrushInfo), Get_Z_Construct_UScriptStruct_FHoudiniBrushInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniBrushInfo_Hash() { return 737660309U; }
	void UHoudiniInputObject::StaticRegisterNativesUHoudiniInputObject()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputObject_NoRegister()
	{
		return UHoudiniInputObject::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_InputObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputNodeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InputNodeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputObjectNodeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InputObjectNodeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasChanged_MetaData[];
#endif
		static void NewProp_bHasChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedsToTriggerUpdate_MetaData[];
#endif
		static void NewProp_bNeedsToTriggerUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedsToTriggerUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransformChanged_MetaData[];
#endif
		static void NewProp_bTransformChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransformChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportAsReference_MetaData[];
#endif
		static void NewProp_bImportAsReference_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportAsReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportAsReferenceRotScaleEnabled_MetaData[];
#endif
		static void NewProp_bImportAsReferenceRotScaleEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportAsReferenceRotScaleEnabled;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUniformScaleLocked_MetaData[];
#endif
		static void NewProp_bUniformScaleLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUniformScaleLocked;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDeleteHoudiniNodes_MetaData[];
#endif
		static void NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDeleteHoudiniNodes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UObjects input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "UObjects input" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObject_MetaData[] = {
		{ "Comment", "// The object referenced by this input\n// This property should be protected. Don't access this directly. Use GetObject() / Update() instead.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "The object referenced by this input\nThis property should be protected. Don't access this directly. Use GetObject() / Update() instead." },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObject = { "InputObject", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputObject, InputObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Transform_MetaData[] = {
		{ "Comment", "// The object's transform/transform offset\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "The object's transform/transform offset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputObject, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "// The type of Object this input refers to\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "The type of Object this input refers to" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputObject, Type), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputNodeId_MetaData[] = {
		{ "Comment", "// This input object's \"main\" (SOP) NodeId\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "This input object's \"main\" (SOP) NodeId" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputNodeId = { "InputNodeId", nullptr, (EPropertyFlags)0x0010000400202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputObject, InputNodeId), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputNodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputNodeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObjectNodeId_MetaData[] = {
		{ "Comment", "// This input object's \"container\" (OBJ) NodeId\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "This input object's \"container\" (OBJ) NodeId" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObjectNodeId = { "InputObjectNodeId", nullptr, (EPropertyFlags)0x0010000400202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputObject, InputObjectNodeId), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObjectNodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObjectNodeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Guid_MetaData[] = {
		{ "Comment", "// Guid that uniquely identifies this input object.\n// Also useful to correlate inputs between blueprint component templates and instances.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "Guid that uniquely identifies this input object.\nAlso useful to correlate inputs between blueprint component templates and instances." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000200000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputObject, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bHasChanged_MetaData[] = {
		{ "Comment", "// Indicates this input object has changed\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "Indicates this input object has changed" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bHasChanged_SetBit(void* Obj)
	{
		((UHoudiniInputObject*)Obj)->bHasChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bHasChanged = { "bHasChanged", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInputObject), &Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bHasChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bHasChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bHasChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bNeedsToTriggerUpdate_MetaData[] = {
		{ "Comment", "// Indicates this input object should trigger an input update/cook\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "Indicates this input object should trigger an input update/cook" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bNeedsToTriggerUpdate_SetBit(void* Obj)
	{
		((UHoudiniInputObject*)Obj)->bNeedsToTriggerUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bNeedsToTriggerUpdate = { "bNeedsToTriggerUpdate", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInputObject), &Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bNeedsToTriggerUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bNeedsToTriggerUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bNeedsToTriggerUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bTransformChanged_MetaData[] = {
		{ "Comment", "// Indicates that this input transform should be updated\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "Indicates that this input transform should be updated" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bTransformChanged_SetBit(void* Obj)
	{
		((UHoudiniInputObject*)Obj)->bTransformChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bTransformChanged = { "bTransformChanged", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInputObject), &Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bTransformChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bTransformChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bTransformChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bImportAsReference_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bImportAsReference_SetBit(void* Obj)
	{
		((UHoudiniInputObject*)Obj)->bImportAsReference = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bImportAsReference = { "bImportAsReference", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInputObject), &Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bImportAsReference_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bImportAsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bImportAsReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bImportAsReferenceRotScaleEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bImportAsReferenceRotScaleEnabled_SetBit(void* Obj)
	{
		((UHoudiniInputObject*)Obj)->bImportAsReferenceRotScaleEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bImportAsReferenceRotScaleEnabled = { "bImportAsReferenceRotScaleEnabled", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInputObject), &Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bImportAsReferenceRotScaleEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bImportAsReferenceRotScaleEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bImportAsReferenceRotScaleEnabled_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bUniformScaleLocked_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bUniformScaleLocked_SetBit(void* Obj)
	{
		((UHoudiniInputObject*)Obj)->bUniformScaleLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bUniformScaleLocked = { "bUniformScaleLocked", nullptr, (EPropertyFlags)0x0020080c00202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInputObject), &Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bUniformScaleLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bUniformScaleLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bUniformScaleLocked_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj)
	{
		((UHoudiniInputObject*)Obj)->bCanDeleteHoudiniNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bCanDeleteHoudiniNodes = { "bCanDeleteHoudiniNodes", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInputObject), &Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputNodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObjectNodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bHasChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bNeedsToTriggerUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bTransformChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bImportAsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bImportAsReferenceRotScaleEnabled,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bUniformScaleLocked,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bCanDeleteHoudiniNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputObject_Statics::ClassParams = {
		&UHoudiniInputObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputObject, 930526351);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputObject>()
	{
		return UHoudiniInputObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputObject(Z_Construct_UClass_UHoudiniInputObject, &UHoudiniInputObject::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputObject);
	void UHoudiniInputStaticMesh::StaticRegisterNativesUHoudiniInputStaticMesh()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputStaticMesh_NoRegister()
	{
		return UHoudiniInputStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueprintStaticMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintStaticMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlueprintStaticMeshes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UStaticMesh input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "UStaticMesh input" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::NewProp_BlueprintStaticMeshes_Inner = { "BlueprintStaticMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniInputStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::NewProp_BlueprintStaticMeshes_MetaData[] = {
		{ "Comment", "// The Blueprint's Static Meshe Components that can be sent as inputs\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "The Blueprint's Static Meshe Components that can be sent as inputs" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::NewProp_BlueprintStaticMeshes = { "BlueprintStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputStaticMesh, BlueprintStaticMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::NewProp_BlueprintStaticMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::NewProp_BlueprintStaticMeshes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::NewProp_BlueprintStaticMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::NewProp_BlueprintStaticMeshes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputStaticMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::ClassParams = {
		&UHoudiniInputStaticMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputStaticMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputStaticMesh, 1645251147);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputStaticMesh>()
	{
		return UHoudiniInputStaticMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputStaticMesh(Z_Construct_UClass_UHoudiniInputStaticMesh, &UHoudiniInputStaticMesh::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputStaticMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputStaticMesh);
	void UHoudiniInputSkeletalMesh::StaticRegisterNativesUHoudiniInputSkeletalMesh()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputSkeletalMesh_NoRegister()
	{
		return UHoudiniInputSkeletalMesh::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputSkeletalMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputSkeletalMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSkeletalMesh_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// USkeletalMesh input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "USkeletalMesh input" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputSkeletalMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputSkeletalMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputSkeletalMesh_Statics::ClassParams = {
		&UHoudiniInputSkeletalMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputSkeletalMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSkeletalMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputSkeletalMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputSkeletalMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputSkeletalMesh, 3047558333);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputSkeletalMesh>()
	{
		return UHoudiniInputSkeletalMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputSkeletalMesh(Z_Construct_UClass_UHoudiniInputSkeletalMesh, &UHoudiniInputSkeletalMesh::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputSkeletalMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputSkeletalMesh);
	void UHoudiniInputGeometryCollection::StaticRegisterNativesUHoudiniInputGeometryCollection()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputGeometryCollection_NoRegister()
	{
		return UHoudiniInputGeometryCollection::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UGeometryCollection input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "UGeometryCollection input" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputGeometryCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::ClassParams = {
		&UHoudiniInputGeometryCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputGeometryCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputGeometryCollection, 3271075941);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputGeometryCollection>()
	{
		return UHoudiniInputGeometryCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputGeometryCollection(Z_Construct_UClass_UHoudiniInputGeometryCollection, &UHoudiniInputGeometryCollection::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputGeometryCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputGeometryCollection);
	void UHoudiniInputGeometryCollectionComponent::StaticRegisterNativesUHoudiniInputGeometryCollectionComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_NoRegister()
	{
		return UHoudiniInputGeometryCollectionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UGeometryCollectionComponent input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "UGeometryCollectionComponent input" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputGeometryCollectionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_Statics::ClassParams = {
		&UHoudiniInputGeometryCollectionComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputGeometryCollectionComponent, 703340721);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputGeometryCollectionComponent>()
	{
		return UHoudiniInputGeometryCollectionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputGeometryCollectionComponent(Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent, &UHoudiniInputGeometryCollectionComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputGeometryCollectionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputGeometryCollectionComponent);
	void UHoudiniInputGeometryCollectionActor::StaticRegisterNativesUHoudiniInputGeometryCollectionActor()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputGeometryCollectionActor_NoRegister()
	{
		return UHoudiniInputGeometryCollectionActor::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputGeometryCollectionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputGeometryCollectionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputGeometryCollectionActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UGeometryCollectionActor input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "UGeometryCollectionActor input" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputGeometryCollectionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputGeometryCollectionActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputGeometryCollectionActor_Statics::ClassParams = {
		&UHoudiniInputGeometryCollectionActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputGeometryCollectionActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputGeometryCollectionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputGeometryCollectionActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputGeometryCollectionActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputGeometryCollectionActor, 2277109040);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputGeometryCollectionActor>()
	{
		return UHoudiniInputGeometryCollectionActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputGeometryCollectionActor(Z_Construct_UClass_UHoudiniInputGeometryCollectionActor, &UHoudiniInputGeometryCollectionActor::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputGeometryCollectionActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputGeometryCollectionActor);
	void UHoudiniInputSceneComponent::StaticRegisterNativesUHoudiniInputSceneComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputSceneComponent_NoRegister()
	{
		return UHoudiniInputSceneComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputSceneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// USceneComponent input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "USceneComponent input" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::NewProp_ActorTransform_MetaData[] = {
		{ "Comment", "// This component's parent Actor transform\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "This component's parent Actor transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputSceneComponent, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::NewProp_ActorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::NewProp_ActorTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::NewProp_ActorTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputSceneComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::ClassParams = {
		&UHoudiniInputSceneComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputSceneComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputSceneComponent, 3068634659);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputSceneComponent>()
	{
		return UHoudiniInputSceneComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputSceneComponent(Z_Construct_UClass_UHoudiniInputSceneComponent, &UHoudiniInputSceneComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputSceneComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputSceneComponent);
	void UHoudiniInputMeshComponent::StaticRegisterNativesUHoudiniInputMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputMeshComponent_NoRegister()
	{
		return UHoudiniInputMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MeshComponentsMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponentsMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshComponentsMaterials;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputSceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UStaticMeshComponent input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "UStaticMeshComponent input" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Comment", "// Keep track of the selected Static Mesh\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "Keep track of the selected Static Mesh" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputMeshComponent, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::NewProp_MeshComponentsMaterials_Inner = { "MeshComponentsMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::NewProp_MeshComponentsMaterials_MetaData[] = {
		{ "Comment", "// Path to the materials assigned on the SMC\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "Path to the materials assigned on the SMC" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::NewProp_MeshComponentsMaterials = { "MeshComponentsMaterials", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputMeshComponent, MeshComponentsMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::NewProp_MeshComponentsMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::NewProp_MeshComponentsMaterials_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::NewProp_MeshComponentsMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::NewProp_MeshComponentsMaterials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::ClassParams = {
		&UHoudiniInputMeshComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputMeshComponent, 3219290288);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputMeshComponent>()
	{
		return UHoudiniInputMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputMeshComponent(Z_Construct_UClass_UHoudiniInputMeshComponent, &UHoudiniInputMeshComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputMeshComponent);
	void UHoudiniInputInstancedMeshComponent::StaticRegisterNativesUHoudiniInputInstancedMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_NoRegister()
	{
		return UHoudiniInputInstancedMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceTransforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceTransforms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UInstancedStaticMeshComponent input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "UInstancedStaticMeshComponent input" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::NewProp_InstanceTransforms_Inner = { "InstanceTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::NewProp_InstanceTransforms_MetaData[] = {
		{ "Comment", "// Array of transform for this ISMC's instances\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "Array of transform for this ISMC's instances" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::NewProp_InstanceTransforms = { "InstanceTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputInstancedMeshComponent, InstanceTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::NewProp_InstanceTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::NewProp_InstanceTransforms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::NewProp_InstanceTransforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::NewProp_InstanceTransforms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputInstancedMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::ClassParams = {
		&UHoudiniInputInstancedMeshComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputInstancedMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputInstancedMeshComponent, 425344196);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputInstancedMeshComponent>()
	{
		return UHoudiniInputInstancedMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputInstancedMeshComponent(Z_Construct_UClass_UHoudiniInputInstancedMeshComponent, &UHoudiniInputInstancedMeshComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputInstancedMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputInstancedMeshComponent);
	void UHoudiniInputSplineComponent::StaticRegisterNativesUHoudiniInputSplineComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputSplineComponent_NoRegister()
	{
		return UHoudiniInputSplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputSplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfSplineControlPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfSplineControlPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplineLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplineResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineClosed_MetaData[];
#endif
		static void NewProp_SplineClosed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SplineClosed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineControlPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineControlPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SplineControlPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputSceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// USplineComponent input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "USplineComponent input" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_NumberOfSplineControlPoints_MetaData[] = {
		{ "Comment", "// Number of CVs used by the spline component, used to detect modification\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "Number of CVs used by the spline component, used to detect modification" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_NumberOfSplineControlPoints = { "NumberOfSplineControlPoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputSplineComponent, NumberOfSplineControlPoints), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_NumberOfSplineControlPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_NumberOfSplineControlPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineLength_MetaData[] = {
		{ "Comment", "// Spline Length, used for fast detection of modifications of the spline..\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "Spline Length, used for fast detection of modifications of the spline.." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineLength = { "SplineLength", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputSplineComponent, SplineLength), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineResolution_MetaData[] = {
		{ "Comment", "// Spline resolution used to generate the asset, used to detect setting modification\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "Spline resolution used to generate the asset, used to detect setting modification" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineResolution = { "SplineResolution", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputSplineComponent, SplineResolution), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed_MetaData[] = {
		{ "Comment", "// Is the spline closed?\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "Is the spline closed?" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed_SetBit(void* Obj)
	{
		((UHoudiniInputSplineComponent*)Obj)->SplineClosed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed = { "SplineClosed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInputSplineComponent), &Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints_Inner = { "SplineControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints_MetaData[] = {
		{ "Comment", "// Transforms of each of the spline's control points\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "Transforms of each of the spline's control points" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints = { "SplineControlPoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputSplineComponent, SplineControlPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_NumberOfSplineControlPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputSplineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::ClassParams = {
		&UHoudiniInputSplineComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputSplineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputSplineComponent, 2143443689);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputSplineComponent>()
	{
		return UHoudiniInputSplineComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputSplineComponent(Z_Construct_UClass_UHoudiniInputSplineComponent, &UHoudiniInputSplineComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputSplineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputSplineComponent);
	void UHoudiniInputHoudiniSplineComponent::StaticRegisterNativesUHoudiniInputHoudiniSplineComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_NoRegister()
	{
		return UHoudiniInputHoudiniSplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_CurveType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurveType;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_CurveMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurveMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reversed_MetaData[];
#endif
		static void NewProp_Reversed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Reversed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UHoudiniSplineComponent input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "UHoudiniSplineComponent input" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveType_MetaData[] = {
		{ "Comment", "// The type of curve (polygon, NURBS, bezier)\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "The type of curve (polygon, NURBS, bezier)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputHoudiniSplineComponent, CurveType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveType_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveMethod_MetaData[] = {
		{ "Comment", "// The curve's method (CVs, Breakpoint, Freehand)\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "The curve's method (CVs, Breakpoint, Freehand)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveMethod = { "CurveMethod", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputHoudiniSplineComponent, CurveMethod), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_Reversed_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_Reversed_SetBit(void* Obj)
	{
		((UHoudiniInputHoudiniSplineComponent*)Obj)->Reversed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_Reversed = { "Reversed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInputHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_Reversed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_Reversed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_Reversed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CachedComponent_MetaData[] = {
		{ "Comment", "// NOTE: We are using this reference to the component since the component, for now,\n// lives on the same actor as this input object. If we use a Soft Object Reference instead the editor\n// will complain about breaking references everytime we try to delete the actor.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "NOTE: We are using this reference to the component since the component, for now,\nlives on the same actor as this input object. If we use a Soft Object Reference instead the editor\nwill complain about breaking references everytime we try to delete the actor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CachedComponent = { "CachedComponent", nullptr, (EPropertyFlags)0x0022080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputHoudiniSplineComponent, CachedComponent), Z_Construct_UClass_UHoudiniSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CachedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CachedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_Reversed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CachedComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputHoudiniSplineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::ClassParams = {
		&UHoudiniInputHoudiniSplineComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputHoudiniSplineComponent, 2181128885);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputHoudiniSplineComponent>()
	{
		return UHoudiniInputHoudiniSplineComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputHoudiniSplineComponent(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent, &UHoudiniInputHoudiniSplineComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputHoudiniSplineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputHoudiniSplineComponent);
	void UHoudiniInputCameraComponent::StaticRegisterNativesUHoudiniInputCameraComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputCameraComponent_NoRegister()
	{
		return UHoudiniInputCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOrthographic_MetaData[];
#endif
		static void NewProp_bIsOrthographic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOrthographic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthoWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrthoWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthoNearClipPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrthoNearClipPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthoFarClipPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrthoFarClipPlane;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputSceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UCameraComponent input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "UCameraComponent input" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_FOV_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputCameraComponent, FOV), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_FOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_FOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_AspectRatio_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputCameraComponent, AspectRatio), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_AspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_AspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_bIsOrthographic_MetaData[] = {
		{ "Comment", "//TEnumAsByte<ECameraProjectionMode::Type> ProjectionType;\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "TEnumAsByte<ECameraProjectionMode::Type> ProjectionType;" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_bIsOrthographic_SetBit(void* Obj)
	{
		((UHoudiniInputCameraComponent*)Obj)->bIsOrthographic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_bIsOrthographic = { "bIsOrthographic", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInputCameraComponent), &Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_bIsOrthographic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_bIsOrthographic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_bIsOrthographic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoWidth_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoWidth = { "OrthoWidth", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputCameraComponent, OrthoWidth), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoNearClipPlane_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoNearClipPlane = { "OrthoNearClipPlane", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputCameraComponent, OrthoNearClipPlane), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoNearClipPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoNearClipPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoFarClipPlane_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoFarClipPlane = { "OrthoFarClipPlane", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputCameraComponent, OrthoFarClipPlane), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoFarClipPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoFarClipPlane_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_FOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_AspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_bIsOrthographic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoNearClipPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoFarClipPlane,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputCameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::ClassParams = {
		&UHoudiniInputCameraComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputCameraComponent, 1395278978);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputCameraComponent>()
	{
		return UHoudiniInputCameraComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputCameraComponent(Z_Construct_UClass_UHoudiniInputCameraComponent, &UHoudiniInputCameraComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputCameraComponent);
	void UHoudiniInputHoudiniAsset::StaticRegisterNativesUHoudiniInputHoudiniAsset()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputHoudiniAsset_NoRegister()
	{
		return UHoudiniInputHoudiniAsset::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetOutputIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssetOutputIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UHoudiniAssetComponent input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "UHoudiniAssetComponent input" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::NewProp_AssetOutputIndex_MetaData[] = {
		{ "Comment", "// The output index of the node that we want to use as input\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "The output index of the node that we want to use as input" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::NewProp_AssetOutputIndex = { "AssetOutputIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputHoudiniAsset, AssetOutputIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::NewProp_AssetOutputIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::NewProp_AssetOutputIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::NewProp_AssetOutputIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputHoudiniAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::ClassParams = {
		&UHoudiniInputHoudiniAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputHoudiniAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputHoudiniAsset, 1769102748);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputHoudiniAsset>()
	{
		return UHoudiniInputHoudiniAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputHoudiniAsset(Z_Construct_UClass_UHoudiniInputHoudiniAsset, &UHoudiniInputHoudiniAsset::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputHoudiniAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputHoudiniAsset);
	void UHoudiniInputActor::StaticRegisterNativesUHoudiniInputActor()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputActor_NoRegister()
	{
		return UHoudiniInputActor::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorComponents;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ActorSceneComponents_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorSceneComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ActorSceneComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdateNumComponentsAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastUpdateNumComponentsAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdateNumComponentsRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastUpdateNumComponentsRemoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// AActor input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "AActor input" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents_Inner = { "ActorComponents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniInputSceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents_MetaData[] = {
		{ "Comment", "// The actor's components that can be sent as inputs\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "The actor's components that can be sent as inputs" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents = { "ActorComponents", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputActor, ActorComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents_ElementProp = { "ActorSceneComponents", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents_MetaData[] = {
		{ "Comment", "// The USceneComponents the actor had the last time we called Update (matches the ones in ActorComponents).\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "The USceneComponents the actor had the last time we called Update (matches the ones in ActorComponents)." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents = { "ActorSceneComponents", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputActor, ActorSceneComponents), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsAdded_MetaData[] = {
		{ "Comment", "// The number of components added with the last call to Update\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "The number of components added with the last call to Update" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsAdded = { "LastUpdateNumComponentsAdded", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputActor, LastUpdateNumComponentsAdded), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsRemoved_MetaData[] = {
		{ "Comment", "// The number of components remove with the last call to Update\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "The number of components remove with the last call to Update" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsRemoved = { "LastUpdateNumComponentsRemoved", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputActor, LastUpdateNumComponentsRemoved), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsRemoved_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsRemoved,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputActor_Statics::ClassParams = {
		&UHoudiniInputActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputActor, 1784387729);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputActor>()
	{
		return UHoudiniInputActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputActor(Z_Construct_UClass_UHoudiniInputActor, &UHoudiniInputActor::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputActor);
	void UHoudiniInputLandscape::StaticRegisterNativesUHoudiniInputLandscape()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputLandscape_NoRegister()
	{
		return UHoudiniInputLandscape::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputLandscape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedInputLandscapeTraqnsform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedInputLandscapeTraqnsform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedNumLandscapeComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CachedNumLandscapeComponents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputLandscape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputLandscape_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// ALandscapeProxy input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "ALandscapeProxy input" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedInputLandscapeTraqnsform_MetaData[] = {
		{ "Comment", "// Used to restore an input landscape's transform to its original state\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "Used to restore an input landscape's transform to its original state" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedInputLandscapeTraqnsform = { "CachedInputLandscapeTraqnsform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputLandscape, CachedInputLandscapeTraqnsform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedInputLandscapeTraqnsform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedInputLandscapeTraqnsform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedNumLandscapeComponents_MetaData[] = {
		{ "Comment", "// The number of landscape components that was processed. If this count changes, .e.g, levels have been\n// loaded / unloaded then the input content has changed.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "The number of landscape components that was processed. If this count changes, .e.g, levels have been\nloaded / unloaded then the input content has changed." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedNumLandscapeComponents = { "CachedNumLandscapeComponents", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputLandscape, CachedNumLandscapeComponents), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedNumLandscapeComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedNumLandscapeComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputLandscape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedInputLandscapeTraqnsform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedNumLandscapeComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputLandscape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputLandscape>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputLandscape_Statics::ClassParams = {
		&UHoudiniInputLandscape::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputLandscape_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscape_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputLandscape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputLandscape()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputLandscape_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputLandscape, 1300373588);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputLandscape>()
	{
		return UHoudiniInputLandscape::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputLandscape(Z_Construct_UClass_UHoudiniInputLandscape, &UHoudiniInputLandscape::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputLandscape"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputLandscape);
	void UHoudiniInputBrush::StaticRegisterNativesUHoudiniInputBrush()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputBrush_NoRegister()
	{
		return UHoudiniInputBrush::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputBrush_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BrushesInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushesInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BrushesInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombinedModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombinedModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreInputObject_MetaData[];
#endif
		static void NewProp_bIgnoreInputObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreInputObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedInputBrushType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CachedInputBrushType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputBrush_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBrush_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo_Inner = { "BrushesInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHoudiniBrushInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo = { "BrushesInfo", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputBrush, BrushesInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CombinedModel_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CombinedModel = { "CombinedModel", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputBrush, CombinedModel), Z_Construct_UClass_UModel, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CombinedModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CombinedModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject_SetBit(void* Obj)
	{
		((UHoudiniInputBrush*)Obj)->bIgnoreInputObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject = { "bIgnoreInputObject", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInputBrush), &Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CachedInputBrushType_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CachedInputBrushType = { "CachedInputBrushType", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputBrush, CachedInputBrushType), Z_Construct_UEnum_Engine_EBrushType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CachedInputBrushType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CachedInputBrushType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CombinedModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CachedInputBrushType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputBrush_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputBrush>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputBrush_Statics::ClassParams = {
		&UHoudiniInputBrush::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputBrush_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputBrush_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputBrush()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputBrush_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputBrush, 289380170);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputBrush>()
	{
		return UHoudiniInputBrush::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputBrush(Z_Construct_UClass_UHoudiniInputBrush, &UHoudiniInputBrush::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputBrush"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputBrush);
	void UHoudiniInputDataTable::StaticRegisterNativesUHoudiniInputDataTable()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputDataTable_NoRegister()
	{
		return UHoudiniInputDataTable::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputDataTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputDataTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputDataTable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UDataTable input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "UDataTable input" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputDataTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputDataTable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputDataTable_Statics::ClassParams = {
		&UHoudiniInputDataTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputDataTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputDataTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputDataTable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputDataTable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputDataTable, 3823448299);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputDataTable>()
	{
		return UHoudiniInputDataTable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputDataTable(Z_Construct_UClass_UHoudiniInputDataTable, &UHoudiniInputDataTable::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputDataTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputDataTable);
	void UHoudiniInputFoliageType_InstancedStaticMesh::StaticRegisterNativesUHoudiniInputFoliageType_InstancedStaticMesh()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_NoRegister()
	{
		return UHoudiniInputFoliageType_InstancedStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputStaticMesh,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UFoliageType_InstancedStaticMesh input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "ToolTip", "UFoliageType_InstancedStaticMesh input" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputFoliageType_InstancedStaticMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::ClassParams = {
		&UHoudiniInputFoliageType_InstancedStaticMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputFoliageType_InstancedStaticMesh, 3598582793);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputFoliageType_InstancedStaticMesh>()
	{
		return UHoudiniInputFoliageType_InstancedStaticMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputFoliageType_InstancedStaticMesh(Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh, &UHoudiniInputFoliageType_InstancedStaticMesh::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputFoliageType_InstancedStaticMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputFoliageType_InstancedStaticMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
