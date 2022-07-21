// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniCurveType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniCurveType() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EHoudiniCurveType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniCurveType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveType>()
	{
		return EHoudiniCurveType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniCurveType(EHoudiniCurveType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniCurveType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Hash() { return 404278332U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniCurveType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniCurveType::Invalid", (int64)EHoudiniCurveType::Invalid },
				{ "EHoudiniCurveType::Polygon", (int64)EHoudiniCurveType::Polygon },
				{ "EHoudiniCurveType::Nurbs", (int64)EHoudiniCurveType::Nurbs },
				{ "EHoudiniCurveType::Bezier", (int64)EHoudiniCurveType::Bezier },
				{ "EHoudiniCurveType::Points", (int64)EHoudiniCurveType::Points },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bezier.Name", "EHoudiniCurveType::Bezier" },
				{ "BlueprintType", "true" },
				{ "Invalid.Comment", "/* = -0x1*/" },
				{ "Invalid.Name", "EHoudiniCurveType::Invalid" },
				{ "Invalid.ToolTip", "= -0x1" },
				{ "ModuleRelativePath", "Public/EHoudiniCurveType.h" },
				{ "Nurbs.Name", "EHoudiniCurveType::Nurbs" },
				{ "Points.Name", "EHoudiniCurveType::Points" },
				{ "Polygon.Comment", "/* = -0x1*/" },
				{ "Polygon.Name", "EHoudiniCurveType::Polygon" },
				{ "Polygon.ToolTip", "= -0x1" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniCurveType",
				"EHoudiniCurveType",
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
