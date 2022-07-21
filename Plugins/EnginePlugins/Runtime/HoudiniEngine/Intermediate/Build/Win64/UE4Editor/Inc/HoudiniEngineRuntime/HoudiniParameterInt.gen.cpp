// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterInt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterInt() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterInt_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterInt();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniParameterInt::StaticRegisterNativesUHoudiniParameterInt()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniParameterInt_NoRegister()
	{
		return UHoudiniParameterInt::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterInt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Unit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasMin_MetaData[];
#endif
		static void NewProp_bHasMin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasMax_MetaData[];
#endif
		static void NewProp_bHasMax_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasUIMin_MetaData[];
#endif
		static void NewProp_bHasUIMin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasUIMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasUIMax_MetaData[];
#endif
		static void NewProp_bHasUIMax_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasUIMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLogarithmic_MetaData[];
#endif
		static void NewProp_bIsLogarithmic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLogarithmic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UIMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UIMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterInt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterInt.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Values_MetaData[] = {
		{ "Comment", "// Int Values\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
		{ "ToolTip", "Int Values" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterInt, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_DefaultValues_Inner = { "DefaultValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_DefaultValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_DefaultValues = { "DefaultValues", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterInt, DefaultValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_DefaultValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_DefaultValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Unit_MetaData[] = {
		{ "Comment", "// Unit for this property\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
		{ "ToolTip", "Unit for this property" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterInt, Unit), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Unit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Unit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMin_MetaData[] = {
		{ "Comment", "// Indicates we have a min/max value\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
		{ "ToolTip", "Indicates we have a min/max value" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMin_SetBit(void* Obj)
	{
		((UHoudiniParameterInt*)Obj)->bHasMin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMin = { "bHasMin", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterInt), &Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMax_MetaData[] = {
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMax_SetBit(void* Obj)
	{
		((UHoudiniParameterInt*)Obj)->bHasMax = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMax = { "bHasMax", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterInt), &Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMax_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMin_MetaData[] = {
		{ "Comment", "// Indicates we have a UI min/max\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
		{ "ToolTip", "Indicates we have a UI min/max" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMin_SetBit(void* Obj)
	{
		((UHoudiniParameterInt*)Obj)->bHasUIMin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMin = { "bHasUIMin", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterInt), &Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMax_MetaData[] = {
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMax_SetBit(void* Obj)
	{
		((UHoudiniParameterInt*)Obj)->bHasUIMax = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMax = { "bHasUIMax", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterInt), &Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMax_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bIsLogarithmic_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bIsLogarithmic_SetBit(void* Obj)
	{
		((UHoudiniParameterInt*)Obj)->bIsLogarithmic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bIsLogarithmic = { "bIsLogarithmic", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterInt), &Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bIsLogarithmic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bIsLogarithmic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bIsLogarithmic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Min_MetaData[] = {
		{ "Comment", "// Min and Max values for this property.\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
		{ "ToolTip", "Min and Max values for this property." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterInt, Min), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Max_MetaData[] = {
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterInt, Max), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMin_MetaData[] = {
		{ "Comment", "// Min and Max values of this property for slider UI\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
		{ "ToolTip", "Min and Max values of this property for slider UI" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMin = { "UIMin", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterInt, UIMin), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMax_MetaData[] = {
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMax = { "UIMax", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterInt, UIMax), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMax_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_DefaultValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_DefaultValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Unit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bIsLogarithmic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterInt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterInt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterInt_Statics::ClassParams = {
		&UHoudiniParameterInt::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterInt_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterInt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniParameterInt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniParameterInt, 3323170611);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterInt>()
	{
		return UHoudiniParameterInt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniParameterInt(Z_Construct_UClass_UHoudiniParameterInt, &UHoudiniParameterInt::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniParameterInt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterInt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
