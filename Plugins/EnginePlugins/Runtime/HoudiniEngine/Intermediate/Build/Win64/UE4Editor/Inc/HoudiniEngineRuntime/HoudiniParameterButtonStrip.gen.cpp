// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterButtonStrip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterButtonStrip() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterButtonStrip_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterButtonStrip();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniParameterButtonStrip::StaticRegisterNativesUHoudiniParameterButtonStrip()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniParameterButtonStrip_NoRegister()
	{
		return UHoudiniParameterButtonStrip::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Labels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Labels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Labels;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterButtonStrip.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterButtonStrip.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Count_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterButtonStrip.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterButtonStrip, Count), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Count_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Labels_Inner = { "Labels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Labels_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterButtonStrip.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Labels = { "Labels", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterButtonStrip, Labels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Labels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Labels_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterButtonStrip.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterButtonStrip, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Labels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Labels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Values,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterButtonStrip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::ClassParams = {
		&UHoudiniParameterButtonStrip::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterButtonStrip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniParameterButtonStrip, 2225542696);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterButtonStrip>()
	{
		return UHoudiniParameterButtonStrip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniParameterButtonStrip(Z_Construct_UClass_UHoudiniParameterButtonStrip, &UHoudiniParameterButtonStrip::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniParameterButtonStrip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterButtonStrip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
