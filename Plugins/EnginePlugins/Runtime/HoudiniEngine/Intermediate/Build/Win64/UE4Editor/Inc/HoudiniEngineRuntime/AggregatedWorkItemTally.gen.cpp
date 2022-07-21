// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/AggregatedWorkItemTally.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAggregatedWorkItemTally() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAggregatedWorkItemTally();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTallyBase();
// End Cross Module References

static_assert(std::is_polymorphic<FAggregatedWorkItemTally>() == std::is_polymorphic<FWorkItemTallyBase>(), "USTRUCT FAggregatedWorkItemTally cannot be polymorphic unless super FWorkItemTallyBase is polymorphic");

class UScriptStruct* FAggregatedWorkItemTally::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAggregatedWorkItemTally, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("AggregatedWorkItemTally"), sizeof(FAggregatedWorkItemTally), Get_Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FAggregatedWorkItemTally>()
{
	return FAggregatedWorkItemTally::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAggregatedWorkItemTally(FAggregatedWorkItemTally::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("AggregatedWorkItemTally"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFAggregatedWorkItemTally
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFAggregatedWorkItemTally()
	{
		UScriptStruct::DeferCppStructOps<FAggregatedWorkItemTally>(FName(TEXT("AggregatedWorkItemTally")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFAggregatedWorkItemTally;
	struct Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalWorkItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalWorkItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitingWorkItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WaitingWorkItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScheduledWorkItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScheduledWorkItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookingWorkItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CookingWorkItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookedWorkItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CookedWorkItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErroredWorkItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErroredWorkItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookCancelledWorkItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CookCancelledWorkItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AggregatedWorkItemTally.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAggregatedWorkItemTally>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_TotalWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/AggregatedWorkItemTally.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_TotalWorkItems = { "TotalWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, TotalWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_TotalWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_TotalWorkItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_WaitingWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/AggregatedWorkItemTally.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_WaitingWorkItems = { "WaitingWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, WaitingWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_WaitingWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_WaitingWorkItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ScheduledWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/AggregatedWorkItemTally.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ScheduledWorkItems = { "ScheduledWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, ScheduledWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ScheduledWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ScheduledWorkItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookingWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/AggregatedWorkItemTally.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookingWorkItems = { "CookingWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, CookingWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookingWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookingWorkItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookedWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/AggregatedWorkItemTally.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookedWorkItems = { "CookedWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, CookedWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookedWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookedWorkItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ErroredWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/AggregatedWorkItemTally.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ErroredWorkItems = { "ErroredWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, ErroredWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ErroredWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ErroredWorkItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookCancelledWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/AggregatedWorkItemTally.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookCancelledWorkItems = { "CookCancelledWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, CookCancelledWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookCancelledWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookCancelledWorkItems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_TotalWorkItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_WaitingWorkItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ScheduledWorkItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookingWorkItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookedWorkItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ErroredWorkItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookCancelledWorkItems,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		Z_Construct_UScriptStruct_FWorkItemTallyBase,
		&NewStructOps,
		"AggregatedWorkItemTally",
		sizeof(FAggregatedWorkItemTally),
		alignof(FAggregatedWorkItemTally),
		Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAggregatedWorkItemTally()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AggregatedWorkItemTally"), sizeof(FAggregatedWorkItemTally), Get_Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Hash() { return 2165902683U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
