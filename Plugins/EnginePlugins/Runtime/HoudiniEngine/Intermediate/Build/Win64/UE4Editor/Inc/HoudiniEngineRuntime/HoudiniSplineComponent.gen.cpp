// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniSplineComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniSplineComponent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentInstanceData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniSplineComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniSplineComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_NoRegister();
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
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditedControlPointsIndexes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditedControlPointsIndexes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditedControlPointsIndexes;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Used to store HoudiniAssetComponent data during BP reconstruction\n" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
		{ "ToolTip", "Used to store HoudiniAssetComponent data during BP reconstruction" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniSplineComponentInstanceData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints_Inner = { "CurvePoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints = { "CurvePoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniSplineComponentInstanceData, CurvePoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints_Inner = { "DisplayPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints = { "DisplayPoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniSplineComponentInstanceData, DisplayPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider_Inner = { "DisplayPointIndexDivider", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider = { "DisplayPointIndexDivider", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniSplineComponentInstanceData, DisplayPointIndexDivider), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_EditedControlPointsIndexes_Inner = { "EditedControlPointsIndexes", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_EditedControlPointsIndexes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_EditedControlPointsIndexes = { "EditedControlPointsIndexes", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniSplineComponentInstanceData, EditedControlPointsIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_EditedControlPointsIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_EditedControlPointsIndexes_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_EditedControlPointsIndexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_EditedControlPointsIndexes,
#endif // WITH_EDITORONLY_DATA
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
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Hash() { return 1099153769U; }
	void UHoudiniSplineComponent::StaticRegisterNativesUHoudiniSplineComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniSplineComponent_NoRegister()
	{
		return UHoudiniSplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniSplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniSplineName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HoudiniSplineName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClosed_MetaData[];
#endif
		static void NewProp_bClosed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClosed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReversed_MetaData[];
#endif
		static void NewProp_bReversed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReversed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurveOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHoudiniSplineVisible_MetaData[];
#endif
		static void NewProp_bIsHoudiniSplineVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHoudiniSplineVisible;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_CurveType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurveType;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_CurveMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurveMethod;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_CurveBreakpointParameterization_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveBreakpointParameterization_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurveBreakpointParameterization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOutputCurve_MetaData[];
#endif
		static void NewProp_bIsOutputCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOutputCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookOnCurveChanged_MetaData[];
#endif
		static void NewProp_bCookOnCurveChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookOnCurveChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLegacyInputCurve_MetaData[];
#endif
		static void NewProp_bIsLegacyInputCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLegacyInputCurve;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditedControlPointsIndexes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditedControlPointsIndexes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditedControlPointsIndexes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPostUndo_MetaData[];
#endif
		static void NewProp_bPostUndo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPostUndo;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasChanged_MetaData[];
#endif
		static void NewProp_bHasChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedsToTriggerUpdate_MetaData[];
#endif
		static void NewProp_bNeedsToTriggerUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedsToTriggerUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInputCurve_MetaData[];
#endif
		static void NewProp_bIsInputCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInputCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEditableOutputCurve_MetaData[];
#endif
		static void NewProp_bIsEditableOutputCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEditableOutputCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniSplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HoudiniSplineComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurvePoints_Inner = { "CurvePoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurvePoints_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurvePoints = { "CurvePoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, CurvePoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurvePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurvePoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPoints_Inner = { "DisplayPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPoints_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPoints = { "DisplayPoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, DisplayPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPoints_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPointIndexDivider_Inner = { "DisplayPointIndexDivider", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPointIndexDivider_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPointIndexDivider = { "DisplayPointIndexDivider", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, DisplayPointIndexDivider), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPointIndexDivider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPointIndexDivider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_HoudiniSplineName_MetaData[] = {
		{ "Category", "Houdini Spline Properties" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_HoudiniSplineName = { "HoudiniSplineName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, HoudiniSplineName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_HoudiniSplineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_HoudiniSplineName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bClosed_MetaData[] = {
		{ "Category", "Houdini Spline Properties" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bClosed_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bClosed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bClosed = { "bClosed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bClosed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bClosed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bReversed_MetaData[] = {
		{ "Category", "Houdini Spline Properties" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bReversed_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bReversed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bReversed = { "bReversed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bReversed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bReversed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bReversed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveOrder_MetaData[] = {
		{ "Category", "Houdini Spline Properties" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveOrder = { "CurveOrder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, CurveOrder), METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsHoudiniSplineVisible_MetaData[] = {
		{ "Category", "Houdini Spline Properties" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsHoudiniSplineVisible_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bIsHoudiniSplineVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsHoudiniSplineVisible = { "bIsHoudiniSplineVisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsHoudiniSplineVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsHoudiniSplineVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsHoudiniSplineVisible_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveType_MetaData[] = {
		{ "Category", "Houdini Spline Properties" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, CurveType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveType_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveMethod_MetaData[] = {
		{ "Category", "Houdini Spline Properties" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveMethod = { "CurveMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, CurveMethod), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveMethod_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveBreakpointParameterization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveBreakpointParameterization_MetaData[] = {
		{ "Category", "Houdini Spline Properties" },
		{ "Comment", "// Only used for new HAPI curve / breakpoints\n" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
		{ "ToolTip", "Only used for new HAPI curve / breakpoints" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveBreakpointParameterization = { "CurveBreakpointParameterization", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, CurveBreakpointParameterization), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveBreakpointParameterization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveBreakpointParameterization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsOutputCurve_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsOutputCurve_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bIsOutputCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsOutputCurve = { "bIsOutputCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsOutputCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsOutputCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsOutputCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bCookOnCurveChanged_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bCookOnCurveChanged_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bCookOnCurveChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bCookOnCurveChanged = { "bCookOnCurveChanged", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bCookOnCurveChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bCookOnCurveChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bCookOnCurveChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsLegacyInputCurve_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsLegacyInputCurve_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bIsLegacyInputCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsLegacyInputCurve = { "bIsLegacyInputCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsLegacyInputCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsLegacyInputCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsLegacyInputCurve_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_EditedControlPointsIndexes_Inner = { "EditedControlPointsIndexes", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_EditedControlPointsIndexes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_EditedControlPointsIndexes = { "EditedControlPointsIndexes", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, EditedControlPointsIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_EditedControlPointsIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_EditedControlPointsIndexes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bPostUndo_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bPostUndo_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bPostUndo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bPostUndo = { "bPostUndo", nullptr, (EPropertyFlags)0x0010000c00000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bPostUndo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bPostUndo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bPostUndo_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bHasChanged_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bHasChanged_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bHasChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bHasChanged = { "bHasChanged", nullptr, (EPropertyFlags)0x0040000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bHasChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bHasChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bHasChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bNeedsToTriggerUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bNeedsToTriggerUpdate_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bNeedsToTriggerUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bNeedsToTriggerUpdate = { "bNeedsToTriggerUpdate", nullptr, (EPropertyFlags)0x0040000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bNeedsToTriggerUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bNeedsToTriggerUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bNeedsToTriggerUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsInputCurve_MetaData[] = {
		{ "Comment", "// Whether this is a Houdini curve input\n" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
		{ "ToolTip", "Whether this is a Houdini curve input" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsInputCurve_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bIsInputCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsInputCurve = { "bIsInputCurve", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsInputCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsInputCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsInputCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsEditableOutputCurve_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsEditableOutputCurve_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bIsEditableOutputCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsEditableOutputCurve = { "bIsEditableOutputCurve", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsEditableOutputCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsEditableOutputCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsEditableOutputCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_NodeId_MetaData[] = {
		{ "Comment", "// Corresponds to the Curve NodeId in Houdini\n" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
		{ "ToolTip", "Corresponds to the Curve NodeId in Houdini" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0040000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, NodeId), METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_NodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_NodeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_PartName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_PartName = { "PartName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, PartName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_PartName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_PartName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniSplineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurvePoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurvePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPointIndexDivider_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPointIndexDivider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_HoudiniSplineName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bClosed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bReversed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsHoudiniSplineVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveBreakpointParameterization_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveBreakpointParameterization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsOutputCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bCookOnCurveChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsLegacyInputCurve,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_EditedControlPointsIndexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_EditedControlPointsIndexes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bPostUndo,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bHasChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bNeedsToTriggerUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsInputCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsEditableOutputCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_NodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_PartName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_NoRegister, (int32)VTABLE_OFFSET(UHoudiniSplineComponent, IHoudiniEngineCopyPropertiesInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniSplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniSplineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::ClassParams = {
		&UHoudiniSplineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniSplineComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniSplineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniSplineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniSplineComponent, 194467480);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniSplineComponent>()
	{
		return UHoudiniSplineComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniSplineComponent(Z_Construct_UClass_UHoudiniSplineComponent, &UHoudiniSplineComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniSplineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniSplineComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniSplineComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
