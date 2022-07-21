// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniInputType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniInputType() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EHoudiniInputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniInputType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInputType>()
	{
		return EHoudiniInputType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniInputType(EHoudiniInputType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniInputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Hash() { return 3073001937U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniInputType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniInputType::Invalid", (int64)EHoudiniInputType::Invalid },
				{ "EHoudiniInputType::Geometry", (int64)EHoudiniInputType::Geometry },
				{ "EHoudiniInputType::Curve", (int64)EHoudiniInputType::Curve },
				{ "EHoudiniInputType::Asset", (int64)EHoudiniInputType::Asset },
				{ "EHoudiniInputType::Landscape", (int64)EHoudiniInputType::Landscape },
				{ "EHoudiniInputType::World", (int64)EHoudiniInputType::World },
				{ "EHoudiniInputType::Skeletal", (int64)EHoudiniInputType::Skeletal },
				{ "EHoudiniInputType::GeometryCollection", (int64)EHoudiniInputType::GeometryCollection },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Asset.Name", "EHoudiniInputType::Asset" },
				{ "BlueprintType", "true" },
				{ "Curve.Name", "EHoudiniInputType::Curve" },
				{ "Geometry.Name", "EHoudiniInputType::Geometry" },
				{ "GeometryCollection.Name", "EHoudiniInputType::GeometryCollection" },
				{ "Invalid.Name", "EHoudiniInputType::Invalid" },
				{ "Landscape.Name", "EHoudiniInputType::Landscape" },
				{ "ModuleRelativePath", "Public/EHoudiniInputType.h" },
				{ "Skeletal.Name", "EHoudiniInputType::Skeletal" },
				{ "World.Name", "EHoudiniInputType::World" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniInputType",
				"EHoudiniInputType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
