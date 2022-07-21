// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniHandleComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniHandleComponent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleParameter_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleParameter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
// End Cross Module References
	static UEnum* EHoudiniHandleType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniHandleType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniHandleType>()
	{
		return EHoudiniHandleType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniHandleType(EHoudiniHandleType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniHandleType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Hash() { return 2082969460U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniHandleType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniHandleType::Xform", (int64)EHoudiniHandleType::Xform },
				{ "EHoudiniHandleType::Bounder", (int64)EHoudiniHandleType::Bounder },
				{ "EHoudiniHandleType::Unsupported", (int64)EHoudiniHandleType::Unsupported },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bounder.Name", "EHoudiniHandleType::Bounder" },
				{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
				{ "Unsupported.Name", "EHoudiniHandleType::Unsupported" },
				{ "Xform.Name", "EHoudiniHandleType::Xform" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniHandleType",
				"EHoudiniHandleType",
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
	static UEnum* EXformParameter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EXformParameter"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EXformParameter>()
	{
		return EXformParameter_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EXformParameter(EXformParameter_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EXformParameter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Hash() { return 3227536914U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EXformParameter"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EXformParameter::TX", (int64)EXformParameter::TX },
				{ "EXformParameter::TY", (int64)EXformParameter::TY },
				{ "EXformParameter::TZ", (int64)EXformParameter::TZ },
				{ "EXformParameter::RX", (int64)EXformParameter::RX },
				{ "EXformParameter::RY", (int64)EXformParameter::RY },
				{ "EXformParameter::RZ", (int64)EXformParameter::RZ },
				{ "EXformParameter::SX", (int64)EXformParameter::SX },
				{ "EXformParameter::SY", (int64)EXformParameter::SY },
				{ "EXformParameter::SZ", (int64)EXformParameter::SZ },
				{ "EXformParameter::COUNT", (int64)EXformParameter::COUNT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "COUNT.Name", "EXformParameter::COUNT" },
				{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
				{ "RX.Name", "EXformParameter::RX" },
				{ "RY.Name", "EXformParameter::RY" },
				{ "RZ.Name", "EXformParameter::RZ" },
				{ "SX.Name", "EXformParameter::SX" },
				{ "SY.Name", "EXformParameter::SY" },
				{ "SZ.Name", "EXformParameter::SZ" },
				{ "TX.Name", "EXformParameter::TX" },
				{ "TY.Name", "EXformParameter::TY" },
				{ "TZ.Name", "EXformParameter::TZ" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EXformParameter",
				"EXformParameter",
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
	void UHoudiniHandleParameter::StaticRegisterNativesUHoudiniHandleParameter()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniHandleParameter_NoRegister()
	{
		return UHoudiniHandleParameter::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniHandleParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TupleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TupleIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniHandleParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleParameter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniHandleComponent.h" },
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_AssetParameter_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_AssetParameter = { "AssetParameter", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleParameter, AssetParameter), Z_Construct_UClass_UHoudiniParameter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_AssetParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_AssetParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_TupleIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_TupleIndex = { "TupleIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleParameter, TupleIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_TupleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_TupleIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniHandleParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_AssetParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_TupleIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniHandleParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniHandleParameter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniHandleParameter_Statics::ClassParams = {
		&UHoudiniHandleParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniHandleParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleParameter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniHandleParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniHandleParameter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniHandleParameter, 1271266520);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniHandleParameter>()
	{
		return UHoudiniHandleParameter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniHandleParameter(Z_Construct_UClass_UHoudiniHandleParameter, &UHoudiniHandleParameter::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniHandleParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniHandleParameter);
	void UHoudiniHandleComponent::StaticRegisterNativesUHoudiniHandleComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniHandleComponent_NoRegister()
	{
		return UHoudiniHandleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniHandleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_XformParms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XformParms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_XformParms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RSTParm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RSTParm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotOrderParm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RotOrderParm;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandleType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HandleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniHandleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HoudiniHandleComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms_Inner = { "XformParms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniHandleParameter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms = { "XformParms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleComponent, XformParms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RSTParm_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RSTParm = { "RSTParm", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleComponent, RSTParm), Z_Construct_UClass_UHoudiniHandleParameter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RSTParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RSTParm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RotOrderParm_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RotOrderParm = { "RotOrderParm", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleComponent, RotOrderParm), Z_Construct_UClass_UHoudiniHandleParameter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RotOrderParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RotOrderParm_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType = { "HandleType", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleComponent, HandleType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleName = { "HandleName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleComponent, HandleName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniHandleComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RSTParm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RotOrderParm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniHandleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniHandleComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::ClassParams = {
		&UHoudiniHandleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniHandleComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniHandleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniHandleComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniHandleComponent, 2424966173);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniHandleComponent>()
	{
		return UHoudiniHandleComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniHandleComponent(Z_Construct_UClass_UHoudiniHandleComponent, &UHoudiniHandleComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniHandleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniHandleComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniHandleComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
