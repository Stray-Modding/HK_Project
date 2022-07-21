// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniAssetActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetActor() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_AHoudiniAssetActor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_AHoudiniAssetActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister();
// End Cross Module References
	void AHoudiniAssetActor::StaticRegisterNativesAHoudiniAssetActor()
	{
	}
	UClass* Z_Construct_UClass_AHoudiniAssetActor_NoRegister()
	{
		return AHoudiniAssetActor::StaticClass();
	}
	struct Z_Construct_UClass_AHoudiniAssetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniAssetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoudiniAssetComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHoudiniAssetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoudiniAssetActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "HoudiniAssetActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoudiniAssetActor_Statics::NewProp_HoudiniAssetComponent_MetaData[] = {
		{ "Category", "HoudiniAssetActor" },
		{ "Comment", "/*, AllowPrivateAccess = \"true\"*/" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|HoudiniEngine" },
		{ "ModuleRelativePath", "Public/HoudiniAssetActor.h" },
		{ "ToolTip", ", AllowPrivateAccess = \"true\"" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoudiniAssetActor_Statics::NewProp_HoudiniAssetComponent = { "HoudiniAssetComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoudiniAssetActor, HoudiniAssetComponent), Z_Construct_UClass_UHoudiniAssetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHoudiniAssetActor_Statics::NewProp_HoudiniAssetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniAssetActor_Statics::NewProp_HoudiniAssetComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHoudiniAssetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoudiniAssetActor_Statics::NewProp_HoudiniAssetComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHoudiniAssetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoudiniAssetActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHoudiniAssetActor_Statics::ClassParams = {
		&AHoudiniAssetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHoudiniAssetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniAssetActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHoudiniAssetActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniAssetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHoudiniAssetActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHoudiniAssetActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHoudiniAssetActor, 1795598386);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<AHoudiniAssetActor>()
	{
		return AHoudiniAssetActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHoudiniAssetActor(Z_Construct_UClass_AHoudiniAssetActor, &AHoudiniAssetActor::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("AHoudiniAssetActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHoudiniAssetActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
