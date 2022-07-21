// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniBrushInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniBrushInfo() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBrushInfo();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	ENGINE_API UClass* Z_Construct_UClass_ABrush_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBrushType();
// End Cross Module References
class UScriptStruct* FHoudiniBrushInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniBrushInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniBrushInfo, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniBrushInfo"), sizeof(FHoudiniBrushInfo), Get_Z_Construct_UScriptStruct_FHoudiniBrushInfo_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniBrushInfo>()
{
	return FHoudiniBrushInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniBrushInfo(FHoudiniBrushInfo::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniBrushInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniBrushInfo
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniBrushInfo()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniBrushInfo>(FName(TEXT("HoudiniBrushInfo")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniBrushInfo;
	struct Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_BrushActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedBrushType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CachedBrushType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedSurfaceHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_CachedSurfaceHash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniBrushInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniBrushInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_BrushActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniBrushInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_BrushActor = { "BrushActor", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniBrushInfo, BrushActor), Z_Construct_UClass_ABrush_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_BrushActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_BrushActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniBrushInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedTransform = { "CachedTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniBrushInfo, CachedTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedOrigin_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniBrushInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedOrigin = { "CachedOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniBrushInfo, CachedOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedExtent_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniBrushInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedExtent = { "CachedExtent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniBrushInfo, CachedExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedBrushType_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniBrushInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedBrushType = { "CachedBrushType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniBrushInfo, CachedBrushType), Z_Construct_UEnum_Engine_EBrushType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedBrushType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedBrushType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedSurfaceHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniBrushInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedSurfaceHash = { "CachedSurfaceHash", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniBrushInfo, CachedSurfaceHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedSurfaceHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedSurfaceHash_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_BrushActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedBrushType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedSurfaceHash,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniBrushInfo",
		sizeof(FHoudiniBrushInfo),
		alignof(FHoudiniBrushInfo),
		Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBrushInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniBrushInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniBrushInfo"), sizeof(FHoudiniBrushInfo), Get_Z_Construct_UScriptStruct_FHoudiniBrushInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniBrushInfo_Hash() { return 3494468474U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
