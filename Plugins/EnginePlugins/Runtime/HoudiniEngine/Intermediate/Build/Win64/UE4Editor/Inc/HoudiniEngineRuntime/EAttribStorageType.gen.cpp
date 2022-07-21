// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EAttribStorageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAttribStorageType() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EAttribStorageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EAttribStorageType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EAttribStorageType>()
	{
		return EAttribStorageType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttribStorageType(EAttribStorageType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EAttribStorageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Hash() { return 2595046735U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttribStorageType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttribStorageType::Invalid", (int64)EAttribStorageType::Invalid },
				{ "EAttribStorageType::INT", (int64)EAttribStorageType::INT },
				{ "EAttribStorageType::INT64", (int64)EAttribStorageType::INT64 },
				{ "EAttribStorageType::FLOAT", (int64)EAttribStorageType::FLOAT },
				{ "EAttribStorageType::FLOAT64", (int64)EAttribStorageType::FLOAT64 },
				{ "EAttribStorageType::STRING", (int64)EAttribStorageType::STRING },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FLOAT.Name", "EAttribStorageType::FLOAT" },
				{ "FLOAT64.Name", "EAttribStorageType::FLOAT64" },
				{ "INT.Name", "EAttribStorageType::INT" },
				{ "INT64.Name", "EAttribStorageType::INT64" },
				{ "Invalid.Name", "EAttribStorageType::Invalid" },
				{ "ModuleRelativePath", "Public/EAttribStorageType.h" },
				{ "STRING.Name", "EAttribStorageType::STRING" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EAttribStorageType",
				"EAttribStorageType",
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
