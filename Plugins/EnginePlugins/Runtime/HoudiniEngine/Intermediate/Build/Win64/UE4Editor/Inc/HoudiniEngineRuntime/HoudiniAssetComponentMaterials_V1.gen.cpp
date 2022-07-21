// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniAssetComponentMaterials_V1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetComponentMaterials_V1() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponentMaterials_V1_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponentMaterials_V1();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniAssetComponentMaterials_V1::StaticRegisterNativesUHoudiniAssetComponentMaterials_V1()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniAssetComponentMaterials_V1_NoRegister()
	{
		return UHoudiniAssetComponentMaterials_V1::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniAssetComponentMaterials_V1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniAssetComponentMaterials_V1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponentMaterials_V1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniAssetComponentMaterials_V1.h" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponentMaterials_V1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniAssetComponentMaterials_V1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniAssetComponentMaterials_V1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniAssetComponentMaterials_V1_Statics::ClassParams = {
		&UHoudiniAssetComponentMaterials_V1::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponentMaterials_V1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponentMaterials_V1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniAssetComponentMaterials_V1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniAssetComponentMaterials_V1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniAssetComponentMaterials_V1, 1223250291);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniAssetComponentMaterials_V1>()
	{
		return UHoudiniAssetComponentMaterials_V1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniAssetComponentMaterials_V1(Z_Construct_UClass_UHoudiniAssetComponentMaterials_V1, &UHoudiniAssetComponentMaterials_V1::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniAssetComponentMaterials_V1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetComponentMaterials_V1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
