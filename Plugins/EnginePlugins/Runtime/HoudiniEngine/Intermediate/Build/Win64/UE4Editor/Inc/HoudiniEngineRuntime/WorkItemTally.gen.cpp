// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/WorkItemTally.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorkItemTally() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTally();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTallyBase();
// End Cross Module References

static_assert(std::is_polymorphic<FWorkItemTally>() == std::is_polymorphic<FWorkItemTallyBase>(), "USTRUCT FWorkItemTally cannot be polymorphic unless super FWorkItemTallyBase is polymorphic");

class UScriptStruct* FWorkItemTally::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FWorkItemTally_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorkItemTally, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("WorkItemTally"), sizeof(FWorkItemTally), Get_Z_Construct_UScriptStruct_FWorkItemTally_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FWorkItemTally>()
{
	return FWorkItemTally::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWorkItemTally(FWorkItemTally::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("WorkItemTally"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFWorkItemTally
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFWorkItemTally()
	{
		UScriptStruct::DeferCppStructOps<FWorkItemTally>(FName(TEXT("WorkItemTally")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFWorkItemTally;
	struct Z_Construct_UScriptStruct_FWorkItemTally_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AllWorkItems_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllWorkItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_AllWorkItems;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WaitingWorkItems_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitingWorkItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_WaitingWorkItems;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScheduledWorkItems_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScheduledWorkItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ScheduledWorkItems;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CookingWorkItems_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookingWorkItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_CookingWorkItems;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CookedWorkItems_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookedWorkItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_CookedWorkItems;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErroredWorkItems_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErroredWorkItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ErroredWorkItems;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CookCancelledWorkItems_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookCancelledWorkItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_CookCancelledWorkItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WorkItemTally.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorkItemTally>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems_ElementProp = { "AllWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorkItemTally.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems = { "AllWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkItemTally, AllWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems_ElementProp = { "WaitingWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorkItemTally.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems = { "WaitingWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkItemTally, WaitingWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems_ElementProp = { "ScheduledWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorkItemTally.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems = { "ScheduledWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkItemTally, ScheduledWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems_ElementProp = { "CookingWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorkItemTally.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems = { "CookingWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkItemTally, CookingWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems_ElementProp = { "CookedWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorkItemTally.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems = { "CookedWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkItemTally, CookedWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems_ElementProp = { "ErroredWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorkItemTally.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems = { "ErroredWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkItemTally, ErroredWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems_ElementProp = { "CookCancelledWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorkItemTally.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems = { "CookCancelledWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkItemTally, CookCancelledWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorkItemTally_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		Z_Construct_UScriptStruct_FWorkItemTallyBase,
		&NewStructOps,
		"WorkItemTally",
		sizeof(FWorkItemTally),
		alignof(FWorkItemTally),
		Z_Construct_UScriptStruct_FWorkItemTally_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTally()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWorkItemTally_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WorkItemTally"), sizeof(FWorkItemTally), Get_Z_Construct_UScriptStruct_FWorkItemTally_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWorkItemTally_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWorkItemTally_Hash() { return 3047245318U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
