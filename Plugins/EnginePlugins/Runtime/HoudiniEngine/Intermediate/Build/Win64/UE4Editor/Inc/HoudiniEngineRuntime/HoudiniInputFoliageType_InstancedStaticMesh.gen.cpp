// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputFoliageType_InstancedStaticMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputFoliageType_InstancedStaticMesh() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputStaticMesh();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
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
		{ "IncludePath", "HoudiniInputFoliageType_InstancedStaticMesh.h" },
		{ "ModuleRelativePath", "Public/HoudiniInputFoliageType_InstancedStaticMesh.h" },
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
	IMPLEMENT_CLASS(UHoudiniInputFoliageType_InstancedStaticMesh, 506550128);
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
