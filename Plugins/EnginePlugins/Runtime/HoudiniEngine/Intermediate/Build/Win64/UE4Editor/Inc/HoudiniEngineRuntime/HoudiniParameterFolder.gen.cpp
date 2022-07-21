// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterFolder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterFolder() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFolder_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFolder();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
// End Cross Module References
	static UEnum* EHoudiniFolderParameterType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniFolderParameterType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniFolderParameterType>()
	{
		return EHoudiniFolderParameterType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniFolderParameterType(EHoudiniFolderParameterType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniFolderParameterType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType_Hash() { return 1803532089U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniFolderParameterType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniFolderParameterType::Invalid", (int64)EHoudiniFolderParameterType::Invalid },
				{ "EHoudiniFolderParameterType::Collapsible", (int64)EHoudiniFolderParameterType::Collapsible },
				{ "EHoudiniFolderParameterType::Simple", (int64)EHoudiniFolderParameterType::Simple },
				{ "EHoudiniFolderParameterType::Tabs", (int64)EHoudiniFolderParameterType::Tabs },
				{ "EHoudiniFolderParameterType::Radio", (int64)EHoudiniFolderParameterType::Radio },
				{ "EHoudiniFolderParameterType::Other", (int64)EHoudiniFolderParameterType::Other },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Collapsible.Name", "EHoudiniFolderParameterType::Collapsible" },
				{ "Invalid.Name", "EHoudiniFolderParameterType::Invalid" },
				{ "ModuleRelativePath", "Private/HoudiniParameterFolder.h" },
				{ "Other.Name", "EHoudiniFolderParameterType::Other" },
				{ "Radio.Name", "EHoudiniFolderParameterType::Radio" },
				{ "Simple.Name", "EHoudiniFolderParameterType::Simple" },
				{ "Tabs.Name", "EHoudiniFolderParameterType::Tabs" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniFolderParameterType",
				"EHoudiniFolderParameterType",
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
	void UHoudiniParameterFolder::StaticRegisterNativesUHoudiniParameterFolder()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniParameterFolder_NoRegister()
	{
		return UHoudiniParameterFolder::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterFolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FolderType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FolderType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExpanded_MetaData[];
#endif
		static void NewProp_bExpanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExpanded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChosen_MetaData[];
#endif
		static void NewProp_bChosen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChosen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChildCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsContentShown_MetaData[];
#endif
		static void NewProp_bIsContentShown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsContentShown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterFolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFolder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterFolder.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterFolder.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_FolderType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_FolderType_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterFolder.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_FolderType = { "FolderType", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterFolder, FolderType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_FolderType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_FolderType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterFolder.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bExpanded_SetBit(void* Obj)
	{
		((UHoudiniParameterFolder*)Obj)->bExpanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bExpanded = { "bExpanded", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterFolder), &Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bExpanded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bChosen_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterFolder.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bChosen_SetBit(void* Obj)
	{
		((UHoudiniParameterFolder*)Obj)->bChosen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bChosen = { "bChosen", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterFolder), &Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bChosen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bChosen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bChosen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_ChildCounter_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterFolder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_ChildCounter = { "ChildCounter", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterFolder, ChildCounter), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_ChildCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_ChildCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bIsContentShown_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterFolder.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bIsContentShown_SetBit(void* Obj)
	{
		((UHoudiniParameterFolder*)Obj)->bIsContentShown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bIsContentShown = { "bIsContentShown", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterFolder), &Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bIsContentShown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bIsContentShown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bIsContentShown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterFolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_FolderType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_FolderType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bExpanded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bChosen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_ChildCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bIsContentShown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterFolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterFolder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::ClassParams = {
		&UHoudiniParameterFolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterFolder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolder_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterFolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterFolder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniParameterFolder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniParameterFolder, 4245307001);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterFolder>()
	{
		return UHoudiniParameterFolder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniParameterFolder(Z_Construct_UClass_UHoudiniParameterFolder, &UHoudiniParameterFolder::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniParameterFolder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterFolder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
