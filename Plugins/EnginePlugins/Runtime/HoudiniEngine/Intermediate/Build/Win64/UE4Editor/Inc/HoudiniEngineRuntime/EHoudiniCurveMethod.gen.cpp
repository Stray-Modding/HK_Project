// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniCurveMethod.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniCurveMethod() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EHoudiniCurveMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniCurveMethod"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveMethod>()
	{
		return EHoudiniCurveMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniCurveMethod(EHoudiniCurveMethod_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniCurveMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Hash() { return 1186141322U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniCurveMethod"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniCurveMethod::Invalid", (int64)EHoudiniCurveMethod::Invalid },
				{ "EHoudiniCurveMethod::CVs", (int64)EHoudiniCurveMethod::CVs },
				{ "EHoudiniCurveMethod::Breakpoints", (int64)EHoudiniCurveMethod::Breakpoints },
				{ "EHoudiniCurveMethod::Freehand", (int64)EHoudiniCurveMethod::Freehand },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Breakpoints.Name", "EHoudiniCurveMethod::Breakpoints" },
				{ "CVs.Comment", "/* = -0x1*/" },
				{ "CVs.Name", "EHoudiniCurveMethod::CVs" },
				{ "CVs.ToolTip", "= -0x1" },
				{ "Freehand.Name", "EHoudiniCurveMethod::Freehand" },
				{ "Invalid.Comment", "/* = -0x1*/" },
				{ "Invalid.Name", "EHoudiniCurveMethod::Invalid" },
				{ "Invalid.ToolTip", "= -0x1" },
				{ "ModuleRelativePath", "Public/EHoudiniCurveMethod.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniCurveMethod",
				"EHoudiniCurveMethod",
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
