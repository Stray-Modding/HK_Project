// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterMultiParm.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterMultiParm() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterMultiParm_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterMultiParm();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
// End Cross Module References
	static UEnum* EHoudiniMultiParmModificationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniMultiParmModificationType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniMultiParmModificationType>()
	{
		return EHoudiniMultiParmModificationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniMultiParmModificationType(EHoudiniMultiParmModificationType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniMultiParmModificationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType_Hash() { return 1088983580U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniMultiParmModificationType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniMultiParmModificationType::None", (int64)EHoudiniMultiParmModificationType::None },
				{ "EHoudiniMultiParmModificationType::Inserted", (int64)EHoudiniMultiParmModificationType::Inserted },
				{ "EHoudiniMultiParmModificationType::Removed", (int64)EHoudiniMultiParmModificationType::Removed },
				{ "EHoudiniMultiParmModificationType::Modified", (int64)EHoudiniMultiParmModificationType::Modified },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Inserted.Name", "EHoudiniMultiParmModificationType::Inserted" },
				{ "Modified.Name", "EHoudiniMultiParmModificationType::Modified" },
				{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
				{ "None.Name", "EHoudiniMultiParmModificationType::None" },
				{ "Removed.Name", "EHoudiniMultiParmModificationType::Removed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniMultiParmModificationType",
				"EHoudiniMultiParmModificationType",
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
	void UHoudiniParameterMultiParm::StaticRegisterNativesUHoudiniParameterMultiParm()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniParameterMultiParm_NoRegister()
	{
		return UHoudiniParameterMultiParm::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterMultiParm_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsShown_MetaData[];
#endif
		static void NewProp_bIsShown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsShown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TemplateName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiparmValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MultiparmValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiParmInstanceNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MultiParmInstanceNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiParmInstanceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MultiParmInstanceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiParmInstanceCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MultiParmInstanceCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceStartOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InstanceStartOffset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MultiParmInstanceLastModifyArray_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MultiParmInstanceLastModifyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiParmInstanceLastModifyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MultiParmInstanceLastModifyArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultInstanceCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultInstanceCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterMultiParm.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_bIsShown_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_bIsShown_SetBit(void* Obj)
	{
		((UHoudiniParameterMultiParm*)Obj)->bIsShown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_bIsShown = { "bIsShown", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterMultiParm), &Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_bIsShown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_bIsShown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_bIsShown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_Value_MetaData[] = {
		{ "Comment", "// Value of the multiparm\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
		{ "ToolTip", "Value of the multiparm" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterMultiParm, Value), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_TemplateName_MetaData[] = {
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_TemplateName = { "TemplateName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterMultiParm, TemplateName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_TemplateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_TemplateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiparmValue_MetaData[] = {
		{ "Comment", "// Value of this property.\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
		{ "ToolTip", "Value of this property." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiparmValue = { "MultiparmValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterMultiParm, MultiparmValue), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiparmValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiparmValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceNum_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceNum = { "MultiParmInstanceNum", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterMultiParm, MultiParmInstanceNum), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLength_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLength = { "MultiParmInstanceLength", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterMultiParm, MultiParmInstanceLength), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceCount_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceCount = { "MultiParmInstanceCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterMultiParm, MultiParmInstanceCount), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_InstanceStartOffset_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_InstanceStartOffset = { "InstanceStartOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterMultiParm, InstanceStartOffset), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_InstanceStartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_InstanceStartOffset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLastModifyArray_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLastModifyArray_Inner = { "MultiParmInstanceLastModifyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLastModifyArray_MetaData[] = {
		{ "Comment", "// This array records the last modified instance of the multiparm\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
		{ "ToolTip", "This array records the last modified instance of the multiparm" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLastModifyArray = { "MultiParmInstanceLastModifyArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterMultiParm, MultiParmInstanceLastModifyArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLastModifyArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLastModifyArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_DefaultInstanceCount_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_DefaultInstanceCount = { "DefaultInstanceCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterMultiParm, DefaultInstanceCount), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_DefaultInstanceCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_DefaultInstanceCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_bIsShown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_TemplateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiparmValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_InstanceStartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLastModifyArray_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLastModifyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLastModifyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_DefaultInstanceCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterMultiParm>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::ClassParams = {
		&UHoudiniParameterMultiParm::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterMultiParm()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniParameterMultiParm, 4145227497);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterMultiParm>()
	{
		return UHoudiniParameterMultiParm::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniParameterMultiParm(Z_Construct_UClass_UHoudiniParameterMultiParm, &UHoudiniParameterMultiParm::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniParameterMultiParm"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterMultiParm);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
