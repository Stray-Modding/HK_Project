// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniLandscapePtr.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniLandscapePtr() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapePtr_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapePtr();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType();
// End Cross Module References
	void UHoudiniLandscapePtr::StaticRegisterNativesUHoudiniLandscapePtr()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniLandscapePtr_NoRegister()
	{
		return UHoudiniLandscapePtr::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniLandscapePtr_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeSoftPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LandscapeSoftPtr;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BakeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BakeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditLayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EditLayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniLandscapePtr_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapePtr_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniLandscapePtr.h" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapePtr.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_LandscapeSoftPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniLandscapePtr.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_LandscapeSoftPtr = { "LandscapeSoftPtr", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniLandscapePtr, LandscapeSoftPtr), Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_LandscapeSoftPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_LandscapeSoftPtr_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniLandscapePtr.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType = { "BakeType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniLandscapePtr, BakeType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_EditLayerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniLandscapePtr.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_EditLayerName = { "EditLayerName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniLandscapePtr, EditLayerName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_EditLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_EditLayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniLandscapePtr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_LandscapeSoftPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_EditLayerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniLandscapePtr_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniLandscapePtr>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniLandscapePtr_Statics::ClassParams = {
		&UHoudiniLandscapePtr::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniLandscapePtr_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniLandscapePtr()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniLandscapePtr_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniLandscapePtr, 4066209629);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniLandscapePtr>()
	{
		return UHoudiniLandscapePtr::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniLandscapePtr(Z_Construct_UClass_UHoudiniLandscapePtr, &UHoudiniLandscapePtr::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniLandscapePtr"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniLandscapePtr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
