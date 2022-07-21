// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniExecutableType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniExecutableType() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EHoudiniExecutableType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniExecutableType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniExecutableType>()
	{
		return EHoudiniExecutableType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniExecutableType(EHoudiniExecutableType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniExecutableType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType_Hash() { return 4257361936U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniExecutableType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "HRSHE_Houdini", (int64)HRSHE_Houdini },
				{ "HRSHE_HoudiniFX", (int64)HRSHE_HoudiniFX },
				{ "HRSHE_HoudiniCore", (int64)HRSHE_HoudiniCore },
				{ "HRSHE_HoudiniIndie", (int64)HRSHE_HoudiniIndie },
				{ "HRSHE_MAX", (int64)HRSHE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HRSHE_Houdini.Name", "HRSHE_Houdini" },
				{ "HRSHE_HoudiniCore.Name", "HRSHE_HoudiniCore" },
				{ "HRSHE_HoudiniFX.Name", "HRSHE_HoudiniFX" },
				{ "HRSHE_HoudiniIndie.Name", "HRSHE_HoudiniIndie" },
				{ "HRSHE_MAX.Hidden", "" },
				{ "HRSHE_MAX.Name", "HRSHE_MAX" },
				{ "ModuleRelativePath", "Public/EHoudiniExecutableType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniExecutableType",
				"EHoudiniExecutableType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
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
