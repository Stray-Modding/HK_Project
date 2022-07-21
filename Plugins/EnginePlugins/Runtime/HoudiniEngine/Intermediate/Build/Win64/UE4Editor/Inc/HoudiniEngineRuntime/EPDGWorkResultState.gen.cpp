// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EPDGWorkResultState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPDGWorkResultState() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EPDGWorkResultState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGWorkResultState"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGWorkResultState>()
	{
		return EPDGWorkResultState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPDGWorkResultState(EPDGWorkResultState_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EPDGWorkResultState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Hash() { return 974509201U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPDGWorkResultState"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPDGWorkResultState::None", (int64)EPDGWorkResultState::None },
				{ "EPDGWorkResultState::ToLoad", (int64)EPDGWorkResultState::ToLoad },
				{ "EPDGWorkResultState::Loading", (int64)EPDGWorkResultState::Loading },
				{ "EPDGWorkResultState::Loaded", (int64)EPDGWorkResultState::Loaded },
				{ "EPDGWorkResultState::ToDelete", (int64)EPDGWorkResultState::ToDelete },
				{ "EPDGWorkResultState::Deleting", (int64)EPDGWorkResultState::Deleting },
				{ "EPDGWorkResultState::Deleted", (int64)EPDGWorkResultState::Deleted },
				{ "EPDGWorkResultState::NotLoaded", (int64)EPDGWorkResultState::NotLoaded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Deleted.Name", "EPDGWorkResultState::Deleted" },
				{ "Deleting.Name", "EPDGWorkResultState::Deleting" },
				{ "Loaded.Name", "EPDGWorkResultState::Loaded" },
				{ "Loading.Name", "EPDGWorkResultState::Loading" },
				{ "ModuleRelativePath", "Public/EPDGWorkResultState.h" },
				{ "None.Name", "EPDGWorkResultState::None" },
				{ "NotLoaded.Name", "EPDGWorkResultState::NotLoaded" },
				{ "ToDelete.Name", "EPDGWorkResultState::ToDelete" },
				{ "ToLoad.Name", "EPDGWorkResultState::ToLoad" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EPDGWorkResultState",
				"EPDGWorkResultState",
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
