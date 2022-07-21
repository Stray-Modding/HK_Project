// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/WorkItemTallyBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorkItemTallyBase() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTallyBase();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
class UScriptStruct* FWorkItemTallyBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FWorkItemTallyBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorkItemTallyBase, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("WorkItemTallyBase"), sizeof(FWorkItemTallyBase), Get_Z_Construct_UScriptStruct_FWorkItemTallyBase_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FWorkItemTallyBase>()
{
	return FWorkItemTallyBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWorkItemTallyBase(FWorkItemTallyBase::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("WorkItemTallyBase"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFWorkItemTallyBase
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFWorkItemTallyBase()
	{
		UScriptStruct::DeferCppStructOps<FWorkItemTallyBase>(FName(TEXT("WorkItemTallyBase")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFWorkItemTallyBase;
	struct Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorkItemTallyBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorkItemTallyBase>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"WorkItemTallyBase",
		sizeof(FWorkItemTallyBase),
		alignof(FWorkItemTallyBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTallyBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWorkItemTallyBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WorkItemTallyBase"), sizeof(FWorkItemTallyBase), Get_Z_Construct_UScriptStruct_FWorkItemTallyBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWorkItemTallyBase_Hash() { return 3255936701U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
