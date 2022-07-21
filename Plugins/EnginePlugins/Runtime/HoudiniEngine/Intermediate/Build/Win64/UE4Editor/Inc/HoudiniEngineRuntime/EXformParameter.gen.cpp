// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EXformParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEXformParameter() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EXformParameter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EXformParameter"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EXformParameter>()
	{
		return EXformParameter_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EXformParameter(EXformParameter_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EXformParameter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Hash() { return 1259730108U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EXformParameter"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EXformParameter::TX", (int64)EXformParameter::TX },
				{ "EXformParameter::TY", (int64)EXformParameter::TY },
				{ "EXformParameter::TZ", (int64)EXformParameter::TZ },
				{ "EXformParameter::RX", (int64)EXformParameter::RX },
				{ "EXformParameter::RY", (int64)EXformParameter::RY },
				{ "EXformParameter::RZ", (int64)EXformParameter::RZ },
				{ "EXformParameter::SX", (int64)EXformParameter::SX },
				{ "EXformParameter::SY", (int64)EXformParameter::SY },
				{ "EXformParameter::SZ", (int64)EXformParameter::SZ },
				{ "EXformParameter::COUNT", (int64)EXformParameter::COUNT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "COUNT.Name", "EXformParameter::COUNT" },
				{ "ModuleRelativePath", "Public/EXformParameter.h" },
				{ "RX.Name", "EXformParameter::RX" },
				{ "RY.Name", "EXformParameter::RY" },
				{ "RZ.Name", "EXformParameter::RZ" },
				{ "SX.Name", "EXformParameter::SX" },
				{ "SY.Name", "EXformParameter::SY" },
				{ "SZ.Name", "EXformParameter::SZ" },
				{ "TX.Name", "EXformParameter::TX" },
				{ "TY.Name", "EXformParameter::TY" },
				{ "TZ.Name", "EXformParameter::TZ" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EXformParameter",
				"EXformParameter",
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
