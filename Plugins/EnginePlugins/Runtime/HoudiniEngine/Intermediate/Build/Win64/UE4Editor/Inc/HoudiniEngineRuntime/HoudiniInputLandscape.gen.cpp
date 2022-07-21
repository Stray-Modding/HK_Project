// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputLandscape.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputLandscape() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputLandscape_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputLandscape();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputActor();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
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
		{ "IncludePath", "HoudiniInputLandscape.h" },
		{ "ModuleRelativePath", "Public/HoudiniInputLandscape.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedInputLandscapeTraqnsform_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniInputLandscape.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedInputLandscapeTraqnsform = { "CachedInputLandscapeTraqnsform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputLandscape, CachedInputLandscapeTraqnsform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedInputLandscapeTraqnsform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedInputLandscapeTraqnsform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputLandscape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedInputLandscapeTraqnsform,
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
	IMPLEMENT_CLASS(UHoudiniInputLandscape, 3016135799);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputLandscape>()
	{
		return UHoudiniInputLandscape::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputLandscape(Z_Construct_UClass_UHoudiniInputLandscape, &UHoudiniInputLandscape::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputLandscape"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputLandscape);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
