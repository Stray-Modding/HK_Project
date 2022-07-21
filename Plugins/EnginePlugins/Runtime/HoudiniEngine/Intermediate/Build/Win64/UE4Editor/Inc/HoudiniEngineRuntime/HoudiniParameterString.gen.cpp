// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterString.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterString() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterString_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterString();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UHoudiniParameterString::StaticRegisterNativesUHoudiniParameterString()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniParameterString_NoRegister()
	{
		return UHoudiniParameterString::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterString_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultValues;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChosenAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChosenAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChosenAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAssetRef_MetaData[];
#endif
		static void NewProp_bIsAssetRef_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAssetRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterString_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterString_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterString.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterString.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_Values_MetaData[] = {
		{ "Comment", "// Values of this property.\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterString.h" },
		{ "ToolTip", "Values of this property." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterString, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_DefaultValues_Inner = { "DefaultValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_DefaultValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterString.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_DefaultValues = { "DefaultValues", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterString, DefaultValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_DefaultValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_DefaultValues_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_ChosenAssets_Inner = { "ChosenAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_ChosenAssets_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterString.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_ChosenAssets = { "ChosenAssets", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterString, ChosenAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_ChosenAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_ChosenAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_bIsAssetRef_MetaData[] = {
		{ "Comment", "// Indicates this string parameter should be treated as an asset reference\n// and display an object picker\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterString.h" },
		{ "ToolTip", "Indicates this string parameter should be treated as an asset reference\nand display an object picker" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_bIsAssetRef_SetBit(void* Obj)
	{
		((UHoudiniParameterString*)Obj)->bIsAssetRef = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_bIsAssetRef = { "bIsAssetRef", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterString), &Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_bIsAssetRef_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_bIsAssetRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_bIsAssetRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_DefaultValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_DefaultValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_ChosenAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_ChosenAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_bIsAssetRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterString_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterString>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterString_Statics::ClassParams = {
		&UHoudiniParameterString::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterString_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterString_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterString_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterString_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterString()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniParameterString_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniParameterString, 4060322725);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterString>()
	{
		return UHoudiniParameterString::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniParameterString(Z_Construct_UClass_UHoudiniParameterString, &UHoudiniParameterString::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniParameterString"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterString);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
