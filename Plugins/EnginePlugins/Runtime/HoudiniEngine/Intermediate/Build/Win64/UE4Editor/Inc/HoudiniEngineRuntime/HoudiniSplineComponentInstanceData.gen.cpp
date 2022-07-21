// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniSplineComponentInstanceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniSplineComponentInstanceData() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentInstanceData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References

static_assert(std::is_polymorphic<FHoudiniSplineComponentInstanceData>() == std::is_polymorphic<FActorComponentInstanceData>(), "USTRUCT FHoudiniSplineComponentInstanceData cannot be polymorphic unless super FActorComponentInstanceData is polymorphic");

class UScriptStruct* FHoudiniSplineComponentInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniSplineComponentInstanceData"), sizeof(FHoudiniSplineComponentInstanceData), Get_Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniSplineComponentInstanceData>()
{
	return FHoudiniSplineComponentInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniSplineComponentInstanceData(FHoudiniSplineComponentInstanceData::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniSplineComponentInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniSplineComponentInstanceData
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniSplineComponentInstanceData()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniSplineComponentInstanceData>(FName(TEXT("HoudiniSplineComponentInstanceData")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniSplineComponentInstanceData;
	struct Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurvePoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurvePoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurvePoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisplayPoints;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisplayPointIndexDivider_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayPointIndexDivider_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisplayPointIndexDivider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniSplineComponentInstanceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniSplineComponentInstanceData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints_Inner = { "CurvePoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniSplineComponentInstanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints = { "CurvePoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniSplineComponentInstanceData, CurvePoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints_Inner = { "DisplayPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniSplineComponentInstanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints = { "DisplayPoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniSplineComponentInstanceData, DisplayPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider_Inner = { "DisplayPointIndexDivider", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniSplineComponentInstanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider = { "DisplayPointIndexDivider", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniSplineComponentInstanceData, DisplayPointIndexDivider), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		Z_Construct_UScriptStruct_FActorComponentInstanceData,
		&NewStructOps,
		"HoudiniSplineComponentInstanceData",
		sizeof(FHoudiniSplineComponentInstanceData),
		alignof(FHoudiniSplineComponentInstanceData),
		Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniSplineComponentInstanceData"), sizeof(FHoudiniSplineComponentInstanceData), Get_Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Hash() { return 1535025279U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
