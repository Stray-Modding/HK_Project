// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EAttribOwner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAttribOwner() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EAttribOwner_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EAttribOwner"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EAttribOwner>()
	{
		return EAttribOwner_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttribOwner(EAttribOwner_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EAttribOwner"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Hash() { return 1572384437U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttribOwner"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttribOwner::Invalid", (int64)EAttribOwner::Invalid },
				{ "EAttribOwner::Vertex", (int64)EAttribOwner::Vertex },
				{ "EAttribOwner::Point", (int64)EAttribOwner::Point },
				{ "EAttribOwner::Prim", (int64)EAttribOwner::Prim },
				{ "EAttribOwner::Detail", (int64)EAttribOwner::Detail },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Detail.Name", "EAttribOwner::Detail" },
				{ "Invalid.Name", "EAttribOwner::Invalid" },
				{ "ModuleRelativePath", "Public/EAttribOwner.h" },
				{ "Point.Name", "EAttribOwner::Point" },
				{ "Prim.Name", "EAttribOwner::Prim" },
				{ "Vertex.Name", "EAttribOwner::Vertex" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EAttribOwner",
				"EAttribOwner",
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
