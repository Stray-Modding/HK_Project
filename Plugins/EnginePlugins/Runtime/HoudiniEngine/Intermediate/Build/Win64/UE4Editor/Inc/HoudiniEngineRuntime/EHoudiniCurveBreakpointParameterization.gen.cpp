// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniCurveBreakpointParameterization.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniCurveBreakpointParameterization() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EHoudiniCurveBreakpointParameterization_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniCurveBreakpointParameterization"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveBreakpointParameterization>()
	{
		return EHoudiniCurveBreakpointParameterization_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniCurveBreakpointParameterization(EHoudiniCurveBreakpointParameterization_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniCurveBreakpointParameterization"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Hash() { return 764491690U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniCurveBreakpointParameterization"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniCurveBreakpointParameterization::Invalid", (int64)EHoudiniCurveBreakpointParameterization::Invalid },
				{ "EHoudiniCurveBreakpointParameterization::Uniform", (int64)EHoudiniCurveBreakpointParameterization::Uniform },
				{ "EHoudiniCurveBreakpointParameterization::Chord", (int64)EHoudiniCurveBreakpointParameterization::Chord },
				{ "EHoudiniCurveBreakpointParameterization::Centripetal", (int64)EHoudiniCurveBreakpointParameterization::Centripetal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Centripetal.Name", "EHoudiniCurveBreakpointParameterization::Centripetal" },
				{ "Chord.Name", "EHoudiniCurveBreakpointParameterization::Chord" },
				{ "Invalid.Comment", "/* = -0x1*/" },
				{ "Invalid.Name", "EHoudiniCurveBreakpointParameterization::Invalid" },
				{ "Invalid.ToolTip", "= -0x1" },
				{ "ModuleRelativePath", "Public/EHoudiniCurveBreakpointParameterization.h" },
				{ "Uniform.Comment", "/* = -0x1*/" },
				{ "Uniform.Name", "EHoudiniCurveBreakpointParameterization::Uniform" },
				{ "Uniform.ToolTip", "= -0x1" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniCurveBreakpointParameterization",
				"EHoudiniCurveBreakpointParameterization",
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
