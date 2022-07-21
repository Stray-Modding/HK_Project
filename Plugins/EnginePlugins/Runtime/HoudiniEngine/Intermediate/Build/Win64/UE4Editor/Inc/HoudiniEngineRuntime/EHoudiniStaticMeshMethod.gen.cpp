// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniStaticMeshMethod.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniStaticMeshMethod() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EHoudiniStaticMeshMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniStaticMeshMethod"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniStaticMeshMethod>()
	{
		return EHoudiniStaticMeshMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniStaticMeshMethod(EHoudiniStaticMeshMethod_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniStaticMeshMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod_Hash() { return 4258962367U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniStaticMeshMethod"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniStaticMeshMethod::RawMesh", (int64)EHoudiniStaticMeshMethod::RawMesh },
				{ "EHoudiniStaticMeshMethod::FMeshDescription", (int64)EHoudiniStaticMeshMethod::FMeshDescription },
				{ "EHoudiniStaticMeshMethod::UHoudiniStaticMesh", (int64)EHoudiniStaticMeshMethod::UHoudiniStaticMesh },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FMeshDescription.Name", "EHoudiniStaticMeshMethod::FMeshDescription" },
				{ "ModuleRelativePath", "Public/EHoudiniStaticMeshMethod.h" },
				{ "RawMesh.Name", "EHoudiniStaticMeshMethod::RawMesh" },
				{ "UHoudiniStaticMesh.Name", "EHoudiniStaticMeshMethod::UHoudiniStaticMesh" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniStaticMeshMethod",
				"EHoudiniStaticMeshMethod",
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
