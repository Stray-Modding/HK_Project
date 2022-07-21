// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputSplineComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputSplineComponent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSplineComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSplineComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSceneComponent();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void UHoudiniInputSplineComponent::StaticRegisterNativesUHoudiniInputSplineComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputSplineComponent_NoRegister()
	{
		return UHoudiniInputSplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputSplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfSplineControlPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfSplineControlPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplineLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplineResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineClosed_MetaData[];
#endif
		static void NewProp_SplineClosed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SplineClosed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineControlPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineControlPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SplineControlPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputSceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniInputSplineComponent.h" },
		{ "ModuleRelativePath", "Public/HoudiniInputSplineComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_NumberOfSplineControlPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniInputSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_NumberOfSplineControlPoints = { "NumberOfSplineControlPoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputSplineComponent, NumberOfSplineControlPoints), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_NumberOfSplineControlPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_NumberOfSplineControlPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniInputSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineLength = { "SplineLength", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputSplineComponent, SplineLength), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineResolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniInputSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineResolution = { "SplineResolution", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputSplineComponent, SplineResolution), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniInputSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed_SetBit(void* Obj)
	{
		((UHoudiniInputSplineComponent*)Obj)->SplineClosed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed = { "SplineClosed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInputSplineComponent), &Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints_Inner = { "SplineControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniInputSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints = { "SplineControlPoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputSplineComponent, SplineControlPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_NumberOfSplineControlPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputSplineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::ClassParams = {
		&UHoudiniInputSplineComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputSplineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputSplineComponent, 4170206998);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputSplineComponent>()
	{
		return UHoudiniInputSplineComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputSplineComponent(Z_Construct_UClass_UHoudiniInputSplineComponent, &UHoudiniInputSplineComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputSplineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputSplineComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
