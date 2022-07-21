// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EPDGNodeState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPDGNodeState() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EPDGNodeState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGNodeState"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGNodeState>()
	{
		return EPDGNodeState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPDGNodeState(EPDGNodeState_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EPDGNodeState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Hash() { return 3261470791U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPDGNodeState"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPDGNodeState::None", (int64)EPDGNodeState::None },
				{ "EPDGNodeState::Dirtied", (int64)EPDGNodeState::Dirtied },
				{ "EPDGNodeState::Dirtying", (int64)EPDGNodeState::Dirtying },
				{ "EPDGNodeState::Cooking", (int64)EPDGNodeState::Cooking },
				{ "EPDGNodeState::Cook_Complete", (int64)EPDGNodeState::Cook_Complete },
				{ "EPDGNodeState::Cook_Failed", (int64)EPDGNodeState::Cook_Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cook_Complete.Name", "EPDGNodeState::Cook_Complete" },
				{ "Cook_Failed.Name", "EPDGNodeState::Cook_Failed" },
				{ "Cooking.Name", "EPDGNodeState::Cooking" },
				{ "Dirtied.Name", "EPDGNodeState::Dirtied" },
				{ "Dirtying.Name", "EPDGNodeState::Dirtying" },
				{ "ModuleRelativePath", "Public/EPDGNodeState.h" },
				{ "None.Name", "EPDGNodeState::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EPDGNodeState",
				"EPDGNodeState",
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
