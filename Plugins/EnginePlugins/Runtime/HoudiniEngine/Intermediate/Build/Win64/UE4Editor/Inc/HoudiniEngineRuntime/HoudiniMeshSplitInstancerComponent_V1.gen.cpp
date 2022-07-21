// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniMeshSplitInstancerComponent_V1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniMeshSplitInstancerComponent_V1() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_V1_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_V1();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniMeshSplitInstancerComponent_V1::StaticRegisterNativesUHoudiniMeshSplitInstancerComponent_V1()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_V1_NoRegister()
	{
		return UHoudiniMeshSplitInstancerComponent_V1::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_V1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_V1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_V1_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HoudiniMeshSplitInstancerComponent_V1.h" },
		{ "ModuleRelativePath", "Public/HoudiniMeshSplitInstancerComponent_V1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_V1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniMeshSplitInstancerComponent_V1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_V1_Statics::ClassParams = {
		&UHoudiniMeshSplitInstancerComponent_V1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_V1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_V1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_V1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_V1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniMeshSplitInstancerComponent_V1, 129655197);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniMeshSplitInstancerComponent_V1>()
	{
		return UHoudiniMeshSplitInstancerComponent_V1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniMeshSplitInstancerComponent_V1(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_V1, &UHoudiniMeshSplitInstancerComponent_V1::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniMeshSplitInstancerComponent_V1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniMeshSplitInstancerComponent_V1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
