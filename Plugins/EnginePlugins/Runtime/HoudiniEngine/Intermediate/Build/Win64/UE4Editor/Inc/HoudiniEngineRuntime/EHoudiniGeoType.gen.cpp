// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniGeoType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniGeoType() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EHoudiniGeoType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniGeoType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniGeoType>()
	{
		return EHoudiniGeoType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniGeoType(EHoudiniGeoType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniGeoType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType_Hash() { return 1065891086U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniGeoType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniGeoType::Invalid", (int64)EHoudiniGeoType::Invalid },
				{ "EHoudiniGeoType::Default", (int64)EHoudiniGeoType::Default },
				{ "EHoudiniGeoType::Intermediate", (int64)EHoudiniGeoType::Intermediate },
				{ "EHoudiniGeoType::Input", (int64)EHoudiniGeoType::Input },
				{ "EHoudiniGeoType::Curve", (int64)EHoudiniGeoType::Curve },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Curve.Name", "EHoudiniGeoType::Curve" },
				{ "Default.Name", "EHoudiniGeoType::Default" },
				{ "Input.Name", "EHoudiniGeoType::Input" },
				{ "Intermediate.Name", "EHoudiniGeoType::Intermediate" },
				{ "Invalid.Name", "EHoudiniGeoType::Invalid" },
				{ "ModuleRelativePath", "Public/EHoudiniGeoType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniGeoType",
				"EHoudiniGeoType",
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
