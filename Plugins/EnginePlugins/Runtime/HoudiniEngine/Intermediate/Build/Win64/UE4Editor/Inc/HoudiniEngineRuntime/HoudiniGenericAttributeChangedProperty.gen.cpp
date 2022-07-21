// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniGenericAttributeChangedProperty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniGenericAttributeChangedProperty() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FHoudiniGenericAttributeChangedProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniGenericAttributeChangedProperty"), sizeof(FHoudiniGenericAttributeChangedProperty), Get_Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniGenericAttributeChangedProperty>()
{
	return FHoudiniGenericAttributeChangedProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniGenericAttributeChangedProperty(FHoudiniGenericAttributeChangedProperty::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniGenericAttributeChangedProperty"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniGenericAttributeChangedProperty
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniGenericAttributeChangedProperty()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniGenericAttributeChangedProperty>(FName(TEXT("HoudiniGenericAttributeChangedProperty")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniGenericAttributeChangedProperty;
	struct Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniGenericAttributeChangedProperty.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniGenericAttributeChangedProperty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewProp_Object_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniGenericAttributeChangedProperty.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGenericAttributeChangedProperty, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewProp_Object,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniGenericAttributeChangedProperty",
		sizeof(FHoudiniGenericAttributeChangedProperty),
		alignof(FHoudiniGenericAttributeChangedProperty),
		Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniGenericAttributeChangedProperty"), sizeof(FHoudiniGenericAttributeChangedProperty), Get_Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Hash() { return 127157849U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
