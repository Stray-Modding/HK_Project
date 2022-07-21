// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniLandscapeOutputBakeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniLandscapeOutputBakeType() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EHoudiniLandscapeOutputBakeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniLandscapeOutputBakeType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniLandscapeOutputBakeType>()
	{
		return EHoudiniLandscapeOutputBakeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniLandscapeOutputBakeType(EHoudiniLandscapeOutputBakeType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniLandscapeOutputBakeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Hash() { return 2796728052U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniLandscapeOutputBakeType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniLandscapeOutputBakeType::Detachment", (int64)EHoudiniLandscapeOutputBakeType::Detachment },
				{ "EHoudiniLandscapeOutputBakeType::BakeToImage", (int64)EHoudiniLandscapeOutputBakeType::BakeToImage },
				{ "EHoudiniLandscapeOutputBakeType::BakeToWorld", (int64)EHoudiniLandscapeOutputBakeType::BakeToWorld },
				{ "EHoudiniLandscapeOutputBakeType::InValid", (int64)EHoudiniLandscapeOutputBakeType::InValid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BakeToImage.Name", "EHoudiniLandscapeOutputBakeType::BakeToImage" },
				{ "BakeToWorld.Name", "EHoudiniLandscapeOutputBakeType::BakeToWorld" },
				{ "BlueprintType", "true" },
				{ "Detachment.Name", "EHoudiniLandscapeOutputBakeType::Detachment" },
				{ "InValid.Name", "EHoudiniLandscapeOutputBakeType::InValid" },
				{ "ModuleRelativePath", "Public/EHoudiniLandscapeOutputBakeType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniLandscapeOutputBakeType",
				"EHoudiniLandscapeOutputBakeType",
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
