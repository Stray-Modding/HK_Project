// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniParameterType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniParameterType() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EHoudiniParameterType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniParameterType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniParameterType>()
	{
		return EHoudiniParameterType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniParameterType(EHoudiniParameterType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniParameterType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType_Hash() { return 1504537772U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniParameterType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniParameterType::Invalid", (int64)EHoudiniParameterType::Invalid },
				{ "EHoudiniParameterType::Button", (int64)EHoudiniParameterType::Button },
				{ "EHoudiniParameterType::ButtonStrip", (int64)EHoudiniParameterType::ButtonStrip },
				{ "EHoudiniParameterType::Color", (int64)EHoudiniParameterType::Color },
				{ "EHoudiniParameterType::ColorRamp", (int64)EHoudiniParameterType::ColorRamp },
				{ "EHoudiniParameterType::File", (int64)EHoudiniParameterType::File },
				{ "EHoudiniParameterType::FileDir", (int64)EHoudiniParameterType::FileDir },
				{ "EHoudiniParameterType::FileGeo", (int64)EHoudiniParameterType::FileGeo },
				{ "EHoudiniParameterType::FileImage", (int64)EHoudiniParameterType::FileImage },
				{ "EHoudiniParameterType::Float", (int64)EHoudiniParameterType::Float },
				{ "EHoudiniParameterType::FloatRamp", (int64)EHoudiniParameterType::FloatRamp },
				{ "EHoudiniParameterType::Folder", (int64)EHoudiniParameterType::Folder },
				{ "EHoudiniParameterType::FolderList", (int64)EHoudiniParameterType::FolderList },
				{ "EHoudiniParameterType::Input", (int64)EHoudiniParameterType::Input },
				{ "EHoudiniParameterType::Int", (int64)EHoudiniParameterType::Int },
				{ "EHoudiniParameterType::IntChoice", (int64)EHoudiniParameterType::IntChoice },
				{ "EHoudiniParameterType::Label", (int64)EHoudiniParameterType::Label },
				{ "EHoudiniParameterType::MultiParm", (int64)EHoudiniParameterType::MultiParm },
				{ "EHoudiniParameterType::Separator", (int64)EHoudiniParameterType::Separator },
				{ "EHoudiniParameterType::String", (int64)EHoudiniParameterType::String },
				{ "EHoudiniParameterType::StringChoice", (int64)EHoudiniParameterType::StringChoice },
				{ "EHoudiniParameterType::StringAssetRef", (int64)EHoudiniParameterType::StringAssetRef },
				{ "EHoudiniParameterType::Toggle", (int64)EHoudiniParameterType::Toggle },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Button.Name", "EHoudiniParameterType::Button" },
				{ "ButtonStrip.Name", "EHoudiniParameterType::ButtonStrip" },
				{ "Color.Name", "EHoudiniParameterType::Color" },
				{ "ColorRamp.Name", "EHoudiniParameterType::ColorRamp" },
				{ "File.Name", "EHoudiniParameterType::File" },
				{ "FileDir.Name", "EHoudiniParameterType::FileDir" },
				{ "FileGeo.Name", "EHoudiniParameterType::FileGeo" },
				{ "FileImage.Name", "EHoudiniParameterType::FileImage" },
				{ "Float.Name", "EHoudiniParameterType::Float" },
				{ "FloatRamp.Name", "EHoudiniParameterType::FloatRamp" },
				{ "Folder.Name", "EHoudiniParameterType::Folder" },
				{ "FolderList.Name", "EHoudiniParameterType::FolderList" },
				{ "Input.Name", "EHoudiniParameterType::Input" },
				{ "Int.Name", "EHoudiniParameterType::Int" },
				{ "IntChoice.Name", "EHoudiniParameterType::IntChoice" },
				{ "Invalid.Name", "EHoudiniParameterType::Invalid" },
				{ "Label.Name", "EHoudiniParameterType::Label" },
				{ "ModuleRelativePath", "Public/EHoudiniParameterType.h" },
				{ "MultiParm.Name", "EHoudiniParameterType::MultiParm" },
				{ "Separator.Name", "EHoudiniParameterType::Separator" },
				{ "String.Name", "EHoudiniParameterType::String" },
				{ "StringAssetRef.Name", "EHoudiniParameterType::StringAssetRef" },
				{ "StringChoice.Name", "EHoudiniParameterType::StringChoice" },
				{ "Toggle.Name", "EHoudiniParameterType::Toggle" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniParameterType",
				"EHoudiniParameterType",
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
