// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniMultiParmModificationType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniMultiParmModificationType() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EHoudiniMultiParmModificationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniMultiParmModificationType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniMultiParmModificationType>()
	{
		return EHoudiniMultiParmModificationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniMultiParmModificationType(EHoudiniMultiParmModificationType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniMultiParmModificationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType_Hash() { return 876715343U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniMultiParmModificationType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniMultiParmModificationType::None", (int64)EHoudiniMultiParmModificationType::None },
				{ "EHoudiniMultiParmModificationType::Inserted", (int64)EHoudiniMultiParmModificationType::Inserted },
				{ "EHoudiniMultiParmModificationType::Removed", (int64)EHoudiniMultiParmModificationType::Removed },
				{ "EHoudiniMultiParmModificationType::Modified", (int64)EHoudiniMultiParmModificationType::Modified },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Inserted.Name", "EHoudiniMultiParmModificationType::Inserted" },
				{ "Modified.Name", "EHoudiniMultiParmModificationType::Modified" },
				{ "ModuleRelativePath", "Public/EHoudiniMultiParmModificationType.h" },
				{ "None.Name", "EHoudiniMultiParmModificationType::None" },
				{ "Removed.Name", "EHoudiniMultiParmModificationType::Removed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniMultiParmModificationType",
				"EHoudiniMultiParmModificationType",
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
