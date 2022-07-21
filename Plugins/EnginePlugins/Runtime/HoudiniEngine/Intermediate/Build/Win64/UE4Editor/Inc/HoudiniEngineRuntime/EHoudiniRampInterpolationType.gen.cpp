// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniRampInterpolationType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniRampInterpolationType() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EHoudiniRampInterpolationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniRampInterpolationType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRampInterpolationType>()
	{
		return EHoudiniRampInterpolationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniRampInterpolationType(EHoudiniRampInterpolationType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniRampInterpolationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Hash() { return 1737004436U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniRampInterpolationType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniRampInterpolationType::InValid", (int64)EHoudiniRampInterpolationType::InValid },
				{ "EHoudiniRampInterpolationType::CONSTANT", (int64)EHoudiniRampInterpolationType::CONSTANT },
				{ "EHoudiniRampInterpolationType::LINEAR", (int64)EHoudiniRampInterpolationType::LINEAR },
				{ "EHoudiniRampInterpolationType::CATMULL_ROM", (int64)EHoudiniRampInterpolationType::CATMULL_ROM },
				{ "EHoudiniRampInterpolationType::MONOTONE_CUBIC", (int64)EHoudiniRampInterpolationType::MONOTONE_CUBIC },
				{ "EHoudiniRampInterpolationType::BEZIER", (int64)EHoudiniRampInterpolationType::BEZIER },
				{ "EHoudiniRampInterpolationType::BSPLINE", (int64)EHoudiniRampInterpolationType::BSPLINE },
				{ "EHoudiniRampInterpolationType::HERMITE", (int64)EHoudiniRampInterpolationType::HERMITE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BEZIER.Name", "EHoudiniRampInterpolationType::BEZIER" },
				{ "BSPLINE.Name", "EHoudiniRampInterpolationType::BSPLINE" },
				{ "CATMULL_ROM.Name", "EHoudiniRampInterpolationType::CATMULL_ROM" },
				{ "CONSTANT.Name", "EHoudiniRampInterpolationType::CONSTANT" },
				{ "HERMITE.Name", "EHoudiniRampInterpolationType::HERMITE" },
				{ "InValid.Name", "EHoudiniRampInterpolationType::InValid" },
				{ "LINEAR.Name", "EHoudiniRampInterpolationType::LINEAR" },
				{ "ModuleRelativePath", "Public/EHoudiniRampInterpolationType.h" },
				{ "MONOTONE_CUBIC.Name", "EHoudiniRampInterpolationType::MONOTONE_CUBIC" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniRampInterpolationType",
				"EHoudiniRampInterpolationType",
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
