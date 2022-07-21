// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniCurveOutputProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniCurveOutputProperties() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod();
// End Cross Module References
class UScriptStruct* FHoudiniCurveOutputProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniCurveOutputProperties"), sizeof(FHoudiniCurveOutputProperties), Get_Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniCurveOutputProperties>()
{
	return FHoudiniCurveOutputProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniCurveOutputProperties(FHoudiniCurveOutputProperties::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniCurveOutputProperties"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniCurveOutputProperties
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniCurveOutputProperties()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniCurveOutputProperties>(FName(TEXT("HoudiniCurveOutputProperties")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniCurveOutputProperties;
	struct Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurveOutputType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveOutputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurveOutputType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClosed_MetaData[];
#endif
		static void NewProp_bClosed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClosed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurveType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurveType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurveMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurveMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniCurveOutputProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniCurveOutputProperties>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniCurveOutputProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType = { "CurveOutputType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniCurveOutputProperties, CurveOutputType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_NumPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniCurveOutputProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniCurveOutputProperties, NumPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_NumPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_NumPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniCurveOutputProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed_SetBit(void* Obj)
	{
		((FHoudiniCurveOutputProperties*)Obj)->bClosed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed = { "bClosed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniCurveOutputProperties), &Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniCurveOutputProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniCurveOutputProperties, CurveType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniCurveOutputProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod = { "CurveMethod", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniCurveOutputProperties, CurveMethod), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_NumPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniCurveOutputProperties",
		sizeof(FHoudiniCurveOutputProperties),
		alignof(FHoudiniCurveOutputProperties),
		Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniCurveOutputProperties"), sizeof(FHoudiniCurveOutputProperties), Get_Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Hash() { return 2650122542U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
