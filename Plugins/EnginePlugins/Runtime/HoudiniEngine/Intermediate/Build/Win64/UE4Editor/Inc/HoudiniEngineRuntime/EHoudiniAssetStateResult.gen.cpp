// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniAssetStateResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniAssetStateResult() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EHoudiniAssetStateResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniAssetStateResult"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniAssetStateResult>()
	{
		return EHoudiniAssetStateResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniAssetStateResult(EHoudiniAssetStateResult_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniAssetStateResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult_Hash() { return 4027159895U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniAssetStateResult"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniAssetStateResult::None", (int64)EHoudiniAssetStateResult::None },
				{ "EHoudiniAssetStateResult::Working", (int64)EHoudiniAssetStateResult::Working },
				{ "EHoudiniAssetStateResult::Success", (int64)EHoudiniAssetStateResult::Success },
				{ "EHoudiniAssetStateResult::FinishedWithError", (int64)EHoudiniAssetStateResult::FinishedWithError },
				{ "EHoudiniAssetStateResult::FinishedWithFatalError", (int64)EHoudiniAssetStateResult::FinishedWithFatalError },
				{ "EHoudiniAssetStateResult::Aborted", (int64)EHoudiniAssetStateResult::Aborted },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aborted.Name", "EHoudiniAssetStateResult::Aborted" },
				{ "BlueprintType", "true" },
				{ "FinishedWithError.Name", "EHoudiniAssetStateResult::FinishedWithError" },
				{ "FinishedWithFatalError.Name", "EHoudiniAssetStateResult::FinishedWithFatalError" },
				{ "ModuleRelativePath", "Public/EHoudiniAssetStateResult.h" },
				{ "None.Name", "EHoudiniAssetStateResult::None" },
				{ "Success.Name", "EHoudiniAssetStateResult::Success" },
				{ "Working.Name", "EHoudiniAssetStateResult::Working" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniAssetStateResult",
				"EHoudiniAssetStateResult",
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
