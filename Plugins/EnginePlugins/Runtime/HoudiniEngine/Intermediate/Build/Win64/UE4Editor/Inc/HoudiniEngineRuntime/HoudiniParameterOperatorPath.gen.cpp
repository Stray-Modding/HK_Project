// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterOperatorPath.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterOperatorPath() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterOperatorPath_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterOperatorPath();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInput_NoRegister();
// End Cross Module References
	void UHoudiniParameterOperatorPath::StaticRegisterNativesUHoudiniParameterOperatorPath()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniParameterOperatorPath_NoRegister()
	{
		return UHoudiniParameterOperatorPath::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_HoudiniInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterOperatorPath.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterOperatorPath.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::NewProp_HoudiniInput_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterOperatorPath.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::NewProp_HoudiniInput = { "HoudiniInput", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterOperatorPath, HoudiniInput), Z_Construct_UClass_UHoudiniInput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::NewProp_HoudiniInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::NewProp_HoudiniInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::NewProp_HoudiniInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterOperatorPath>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::ClassParams = {
		&UHoudiniParameterOperatorPath::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterOperatorPath()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniParameterOperatorPath, 296964808);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterOperatorPath>()
	{
		return UHoudiniParameterOperatorPath::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniParameterOperatorPath(Z_Construct_UClass_UHoudiniParameterOperatorPath, &UHoudiniParameterOperatorPath::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniParameterOperatorPath"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterOperatorPath);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
