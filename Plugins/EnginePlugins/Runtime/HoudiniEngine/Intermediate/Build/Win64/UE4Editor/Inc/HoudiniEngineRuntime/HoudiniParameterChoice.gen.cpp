// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniParameterChoice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterChoice() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterChoice_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterChoice();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniParameterChoice::StaticRegisterNativesUHoudiniParameterChoice()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniParameterChoice_NoRegister()
	{
		return UHoudiniParameterChoice::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterChoice_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultIntValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultIntValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultStringValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultStringValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringChoiceValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringChoiceValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StringChoiceValues;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringChoiceLabels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringChoiceLabels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StringChoiceLabels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsChildOfRamp_MetaData[];
#endif
		static void NewProp_bIsChildOfRamp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsChildOfRamp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntValuesArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntValuesArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IntValuesArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterChoice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterChoice_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterChoice.h" },
		{ "ModuleRelativePath", "Public/HoudiniParameterChoice.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniParameterChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterChoice, IntValue), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultIntValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniParameterChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultIntValue = { "DefaultIntValue", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterChoice, DefaultIntValue), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultIntValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultIntValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniParameterChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterChoice, StringValue), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultStringValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniParameterChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultStringValue = { "DefaultStringValue", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterChoice, DefaultStringValue), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultStringValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultStringValue_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceValues_Inner = { "StringChoiceValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniParameterChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceValues = { "StringChoiceValues", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterChoice, StringChoiceValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceValues_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceLabels_Inner = { "StringChoiceLabels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceLabels_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniParameterChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceLabels = { "StringChoiceLabels", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterChoice, StringChoiceLabels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceLabels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceLabels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_bIsChildOfRamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniParameterChoice.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_bIsChildOfRamp_SetBit(void* Obj)
	{
		((UHoudiniParameterChoice*)Obj)->bIsChildOfRamp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_bIsChildOfRamp = { "bIsChildOfRamp", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterChoice), &Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_bIsChildOfRamp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_bIsChildOfRamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_bIsChildOfRamp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValuesArray_Inner = { "IntValuesArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValuesArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniParameterChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValuesArray = { "IntValuesArray", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterChoice, IntValuesArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValuesArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValuesArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterChoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultIntValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultStringValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceLabels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceLabels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_bIsChildOfRamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValuesArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValuesArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterChoice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterChoice>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::ClassParams = {
		&UHoudiniParameterChoice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterChoice_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterChoice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterChoice()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniParameterChoice_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniParameterChoice, 4116911233);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterChoice>()
	{
		return UHoudiniParameterChoice::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniParameterChoice(Z_Construct_UClass_UHoudiniParameterChoice, &UHoudiniParameterChoice::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniParameterChoice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterChoice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
