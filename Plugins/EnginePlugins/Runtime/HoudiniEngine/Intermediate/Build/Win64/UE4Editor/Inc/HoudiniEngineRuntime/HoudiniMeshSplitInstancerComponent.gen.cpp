// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniMeshSplitInstancerComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniMeshSplitInstancerComponent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void UHoudiniMeshSplitInstancerComponent::StaticRegisterNativesUHoudiniMeshSplitInstancerComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_NoRegister()
	{
		return UHoudiniMeshSplitInstancerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Instances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancedMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* UHoudiniMeshSplitInstancerComponent is used to manage a single static mesh being\n* 'instanced' multiple times by multiple UStaticMeshComponents.  This is as opposed to the\n* UInstancedStaticMeshComponent wherein a single mesh is instanced multiple times by one component.\n*/" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HoudiniMeshSplitInstancerComponent.h" },
		{ "ModuleRelativePath", "Private/HoudiniMeshSplitInstancerComponent.h" },
		{ "ToolTip", "UHoudiniMeshSplitInstancerComponent is used to manage a single static mesh being\n'instanced' multiple times by multiple UStaticMeshComponents.  This is as opposed to the\nUInstancedStaticMeshComponent wherein a single mesh is instanced multiple times by one component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_Instances_Inner = { "Instances", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_Instances_MetaData[] = {
		{ "Category", "Instances" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniMeshSplitInstancerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0040008000020809, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniMeshSplitInstancerComponent, Instances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_Instances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_Instances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Private/HoudiniMeshSplitInstancerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0040000000020801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniMeshSplitInstancerComponent, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_OverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_OverrideMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_InstancedMesh_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Private/HoudiniMeshSplitInstancerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_InstancedMesh = { "InstancedMesh", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniMeshSplitInstancerComponent, InstancedMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_InstancedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_InstancedMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_Instances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_Instances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_OverrideMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_OverrideMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_InstancedMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniMeshSplitInstancerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::ClassParams = {
		&UHoudiniMeshSplitInstancerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniMeshSplitInstancerComponent, 1579299517);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniMeshSplitInstancerComponent>()
	{
		return UHoudiniMeshSplitInstancerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniMeshSplitInstancerComponent(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent, &UHoudiniMeshSplitInstancerComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniMeshSplitInstancerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniMeshSplitInstancerComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniMeshSplitInstancerComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
