// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniGenericAttribute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniGenericAttribute() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttribute();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* EAttribOwner_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EAttribOwner"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EAttribOwner>()
	{
		return EAttribOwner_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttribOwner(EAttribOwner_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EAttribOwner"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Hash() { return 3910557696U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttribOwner"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttribOwner::Invalid", (int64)EAttribOwner::Invalid },
				{ "EAttribOwner::Vertex", (int64)EAttribOwner::Vertex },
				{ "EAttribOwner::Point", (int64)EAttribOwner::Point },
				{ "EAttribOwner::Prim", (int64)EAttribOwner::Prim },
				{ "EAttribOwner::Detail", (int64)EAttribOwner::Detail },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Detail.Name", "EAttribOwner::Detail" },
				{ "Invalid.Name", "EAttribOwner::Invalid" },
				{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
				{ "Point.Name", "EAttribOwner::Point" },
				{ "Prim.Name", "EAttribOwner::Prim" },
				{ "Vertex.Name", "EAttribOwner::Vertex" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EAttribOwner",
				"EAttribOwner",
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
	static UEnum* EAttribStorageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EAttribStorageType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EAttribStorageType>()
	{
		return EAttribStorageType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttribStorageType(EAttribStorageType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EAttribStorageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Hash() { return 3130188327U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttribStorageType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttribStorageType::Invalid", (int64)EAttribStorageType::Invalid },
				{ "EAttribStorageType::INT", (int64)EAttribStorageType::INT },
				{ "EAttribStorageType::INT64", (int64)EAttribStorageType::INT64 },
				{ "EAttribStorageType::FLOAT", (int64)EAttribStorageType::FLOAT },
				{ "EAttribStorageType::FLOAT64", (int64)EAttribStorageType::FLOAT64 },
				{ "EAttribStorageType::STRING", (int64)EAttribStorageType::STRING },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FLOAT.Name", "EAttribStorageType::FLOAT" },
				{ "FLOAT64.Name", "EAttribStorageType::FLOAT64" },
				{ "INT.Name", "EAttribStorageType::INT" },
				{ "INT64.Name", "EAttribStorageType::INT64" },
				{ "Invalid.Name", "EAttribStorageType::Invalid" },
				{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
				{ "STRING.Name", "EAttribStorageType::STRING" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EAttribStorageType",
				"EAttribStorageType",
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
class UScriptStruct* FHoudiniGenericAttribute::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniGenericAttribute, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniGenericAttribute"), sizeof(FHoudiniGenericAttribute), Get_Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniGenericAttribute>()
{
	return FHoudiniGenericAttribute::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniGenericAttribute(FHoudiniGenericAttribute::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniGenericAttribute"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniGenericAttribute
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniGenericAttribute()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniGenericAttribute>(FName(TEXT("HoudiniGenericAttribute")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniGenericAttribute;
	struct Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttributeName;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_AttributeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttributeType;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_AttributeOwner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttributeOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttributeCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeTupleSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttributeTupleSize;
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_DoubleValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoubleValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DoubleValues;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_IntValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IntValues;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StringValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniGenericAttribute>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, AttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeName_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType = { "AttributeType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, AttributeType), Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner = { "AttributeOwner", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, AttributeOwner), Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeCount_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeCount = { "AttributeCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, AttributeCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeTupleSize_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeTupleSize = { "AttributeTupleSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, AttributeTupleSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeTupleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeTupleSize_MetaData)) };
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues_Inner = { "DoubleValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues = { "DoubleValues", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, DoubleValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues_MetaData)) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues_Inner = { "IntValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues = { "IntValues", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, IntValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues_Inner = { "StringValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues = { "StringValues", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, StringValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeTupleSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniGenericAttribute",
		sizeof(FHoudiniGenericAttribute),
		alignof(FHoudiniGenericAttribute),
		Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttribute()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniGenericAttribute"), sizeof(FHoudiniGenericAttribute), Get_Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Hash() { return 897485175U; }
class UScriptStruct* FHoudiniGenericAttributeChangedProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniGenericAttributeChangedProperty"), sizeof(FHoudiniGenericAttributeChangedProperty), Get_Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniGenericAttributeChangedProperty>()
{
	return FHoudiniGenericAttributeChangedProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniGenericAttributeChangedProperty(FHoudiniGenericAttributeChangedProperty::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniGenericAttributeChangedProperty"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniGenericAttributeChangedProperty
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniGenericAttributeChangedProperty()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniGenericAttributeChangedProperty>(FName(TEXT("HoudiniGenericAttributeChangedProperty")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniGenericAttributeChangedProperty;
	struct Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniGenericAttributeChangedProperty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewProp_Object_MetaData[] = {
		{ "Comment", "/** The object from where to follow the PropertyChain to the changed property. */" },
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
		{ "ToolTip", "The object from where to follow the PropertyChain to the changed property." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGenericAttributeChangedProperty, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewProp_Object,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniGenericAttributeChangedProperty",
		sizeof(FHoudiniGenericAttributeChangedProperty),
		alignof(FHoudiniGenericAttributeChangedProperty),
		Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniGenericAttributeChangedProperty"), sizeof(FHoudiniGenericAttributeChangedProperty), Get_Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Hash() { return 1194663200U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
