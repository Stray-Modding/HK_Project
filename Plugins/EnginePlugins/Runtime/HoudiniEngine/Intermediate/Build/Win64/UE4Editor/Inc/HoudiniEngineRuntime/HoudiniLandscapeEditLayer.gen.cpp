// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniLandscapeEditLayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniLandscapeEditLayer() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeEditLayer_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeEditLayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister();
// End Cross Module References
	void UHoudiniLandscapeEditLayer::StaticRegisterNativesUHoudiniLandscapeEditLayer()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniLandscapeEditLayer_NoRegister()
	{
		return UHoudiniLandscapeEditLayer::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeSoftPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LandscapeSoftPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniLandscapeEditLayer.h" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeEditLayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics::NewProp_LandscapeSoftPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniLandscapeEditLayer.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics::NewProp_LandscapeSoftPtr = { "LandscapeSoftPtr", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniLandscapeEditLayer, LandscapeSoftPtr), Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics::NewProp_LandscapeSoftPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics::NewProp_LandscapeSoftPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniLandscapeEditLayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniLandscapeEditLayer, LayerName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics::NewProp_LayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics::NewProp_LandscapeSoftPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics::NewProp_LayerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniLandscapeEditLayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics::ClassParams = {
		&UHoudiniLandscapeEditLayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniLandscapeEditLayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniLandscapeEditLayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniLandscapeEditLayer, 348082535);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniLandscapeEditLayer>()
	{
		return UHoudiniLandscapeEditLayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniLandscapeEditLayer(Z_Construct_UClass_UHoudiniLandscapeEditLayer, &UHoudiniLandscapeEditLayer::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniLandscapeEditLayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniLandscapeEditLayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
