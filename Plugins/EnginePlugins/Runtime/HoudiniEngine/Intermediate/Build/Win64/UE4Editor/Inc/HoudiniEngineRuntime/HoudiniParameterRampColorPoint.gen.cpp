// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniParameterRampColorPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterRampColorPoint() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampColorPoint_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampColorPoint();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFloat_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterColor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterChoice_NoRegister();
// End Cross Module References
	void UHoudiniParameterRampColorPoint::StaticRegisterNativesUHoudiniParameterRampColorPoint()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniParameterRampColorPoint_NoRegister()
	{
		return UHoudiniParameterRampColorPoint::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_Interpolation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionParentParm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PositionParentParm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueParentParm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValueParentParm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationParentParm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterpolationParentParm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterRampColorPoint.h" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampColorPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniParameterRampColorPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, Position), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniParameterRampColorPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniParameterRampColorPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, Interpolation), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InstanceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniParameterRampColorPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, InstanceIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InstanceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InstanceIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_PositionParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampColorPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_PositionParentParm = { "PositionParentParm", nullptr, (EPropertyFlags)0x0012000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, PositionParentParm), Z_Construct_UClass_UHoudiniParameterFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_PositionParentParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_PositionParentParm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_ValueParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampColorPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_ValueParentParm = { "ValueParentParm", nullptr, (EPropertyFlags)0x0012000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, ValueParentParm), Z_Construct_UClass_UHoudiniParameterColor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_ValueParentParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_ValueParentParm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InterpolationParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampColorPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InterpolationParentParm = { "InterpolationParentParm", nullptr, (EPropertyFlags)0x0012000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, InterpolationParentParm), Z_Construct_UClass_UHoudiniParameterChoice_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InterpolationParentParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InterpolationParentParm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InstanceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_PositionParentParm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_ValueParentParm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InterpolationParentParm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterRampColorPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::ClassParams = {
		&UHoudiniParameterRampColorPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterRampColorPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniParameterRampColorPoint, 2244296667);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterRampColorPoint>()
	{
		return UHoudiniParameterRampColorPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniParameterRampColorPoint(Z_Construct_UClass_UHoudiniParameterRampColorPoint, &UHoudiniParameterRampColorPoint::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniParameterRampColorPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterRampColorPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
