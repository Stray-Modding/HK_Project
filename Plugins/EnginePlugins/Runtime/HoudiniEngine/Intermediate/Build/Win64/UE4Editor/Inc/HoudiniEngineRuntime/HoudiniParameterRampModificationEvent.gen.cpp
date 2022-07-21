// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniParameterRampModificationEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterRampModificationEvent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType();
// End Cross Module References
	void UHoudiniParameterRampModificationEvent::StaticRegisterNativesUHoudiniParameterRampModificationEvent()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent_NoRegister()
	{
		return UHoudiniParameterRampModificationEvent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInsertEvent_MetaData[];
#endif
		static void NewProp_bIsInsertEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInsertEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFloatRamp_MetaData[];
#endif
		static void NewProp_bIsFloatRamp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFloatRamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeleteInstanceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeleteInstanceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsertPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InsertPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsertFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InsertFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsertColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InsertColor;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_InsertInterpolation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsertInterpolation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InsertInterpolation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterRampModificationEvent.h" },
		{ "ModuleRelativePath", "Public/HoudiniParameterRampModificationEvent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniParameterRampModificationEvent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent_SetBit(void* Obj)
	{
		((UHoudiniParameterRampModificationEvent*)Obj)->bIsInsertEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent = { "bIsInsertEvent", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterRampModificationEvent), &Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniParameterRampModificationEvent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp_SetBit(void* Obj)
	{
		((UHoudiniParameterRampModificationEvent*)Obj)->bIsFloatRamp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp = { "bIsFloatRamp", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterRampModificationEvent), &Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_DeleteInstanceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniParameterRampModificationEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_DeleteInstanceIndex = { "DeleteInstanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, DeleteInstanceIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_DeleteInstanceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_DeleteInstanceIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniParameterRampModificationEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertPosition = { "InsertPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, InsertPosition), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertFloat_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniParameterRampModificationEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertFloat = { "InsertFloat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, InsertFloat), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniParameterRampModificationEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertColor = { "InsertColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, InsertColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertColor_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniParameterRampModificationEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation = { "InsertInterpolation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, InsertInterpolation), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_DeleteInstanceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterRampModificationEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::ClassParams = {
		&UHoudiniParameterRampModificationEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniParameterRampModificationEvent, 1250121819);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterRampModificationEvent>()
	{
		return UHoudiniParameterRampModificationEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniParameterRampModificationEvent(Z_Construct_UClass_UHoudiniParameterRampModificationEvent, &UHoudiniParameterRampModificationEvent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniParameterRampModificationEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterRampModificationEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
