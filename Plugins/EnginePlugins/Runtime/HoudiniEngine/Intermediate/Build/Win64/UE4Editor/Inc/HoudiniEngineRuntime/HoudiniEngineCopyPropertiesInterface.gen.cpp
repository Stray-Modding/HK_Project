// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniEngineCopyPropertiesInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngineCopyPropertiesInterface() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniEngineCopyPropertiesInterface::StaticRegisterNativesUHoudiniEngineCopyPropertiesInterface()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_NoRegister()
	{
		return UHoudiniEngineCopyPropertiesInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Private/HoudiniEngineCopyPropertiesInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHoudiniEngineCopyPropertiesInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics::ClassParams = {
		&UHoudiniEngineCopyPropertiesInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniEngineCopyPropertiesInterface, 3082346601);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniEngineCopyPropertiesInterface>()
	{
		return UHoudiniEngineCopyPropertiesInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniEngineCopyPropertiesInterface(Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface, &UHoudiniEngineCopyPropertiesInterface::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniEngineCopyPropertiesInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniEngineCopyPropertiesInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
