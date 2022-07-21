// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniRuntimeSettings() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniRuntimeSettings_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWalkableSlopeOverride();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType();
// End Cross Module References
	void UHoudiniRuntimeSettings::StaticRegisterNativesUHoudiniRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniRuntimeSettings_NoRegister()
	{
		return UHoudiniRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerHost_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerHost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ServerPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPipeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerPipeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartAutomaticServer_MetaData[];
#endif
		static void NewProp_bStartAutomaticServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartAutomaticServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutomaticServerTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutomaticServerTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSyncWithHoudiniCook_MetaData[];
#endif
		static void NewProp_bSyncWithHoudiniCook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSyncWithHoudiniCook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookUsingHoudiniTime_MetaData[];
#endif
		static void NewProp_bCookUsingHoudiniTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookUsingHoudiniTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSyncViewport_MetaData[];
#endif
		static void NewProp_bSyncViewport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSyncViewport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSyncHoudiniViewport_MetaData[];
#endif
		static void NewProp_bSyncHoudiniViewport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSyncHoudiniViewport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSyncUnrealViewport_MetaData[];
#endif
		static void NewProp_bSyncUnrealViewport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSyncUnrealViewport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowMultiAssetDialog_MetaData[];
#endif
		static void NewProp_bShowMultiAssetDialog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowMultiAssetDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_MetaData[];
#endif
		static void NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreferHdaMemoryCopyOverHdaSourceFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPauseCookingOnStart_MetaData[];
#endif
		static void NewProp_bPauseCookingOnStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPauseCookingOnStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplaySlateCookingNotifications_MetaData[];
#endif
		static void NewProp_bDisplaySlateCookingNotifications_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplaySlateCookingNotifications;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTemporaryCookFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultTemporaryCookFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBakeFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultBakeFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesUseDefaultUnrealScaling_MetaData[];
#endif
		static void NewProp_MarshallingLandscapesUseDefaultUnrealScaling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MarshallingLandscapesUseDefaultUnrealScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesUseFullResolution_MetaData[];
#endif
		static void NewProp_MarshallingLandscapesUseFullResolution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MarshallingLandscapesUseFullResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesForceMinMaxValues_MetaData[];
#endif
		static void NewProp_MarshallingLandscapesForceMinMaxValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MarshallingLandscapesForceMinMaxValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesForcedMinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarshallingLandscapesForcedMinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesForcedMaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarshallingLandscapesForcedMaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAddRotAndScaleAttributesOnCurves_MetaData[];
#endif
		static void NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddRotAndScaleAttributesOnCurves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyInputCurves_MetaData[];
#endif
		static void NewProp_bUseLegacyInputCurves_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyInputCurves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingSplineResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarshallingSplineResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMesh_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDefaultMesh_MetaData[];
#endif
		static void NewProp_bShowDefaultMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDefaultMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementByTimer_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementByTimer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementByTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyMeshAutoRefineTimeoutSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProxyMeshAutoRefineTimeoutSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoubleSidedGeometry_MetaData[];
#endif
		static void NewProp_bDoubleSidedGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoubleSidedGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBodyInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultBodyInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionTraceFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionTraceFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightMapResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LpvBiasMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LpvBiasMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedDistanceFieldResolutionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GeneratedDistanceFieldResolutionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkableSlopeOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WalkableSlopeOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapCoordinateIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightMapCoordinateIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaximumStreamingTexelRatio_MetaData[];
#endif
		static void NewProp_bUseMaximumStreamingTexelRatio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaximumStreamingTexelRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageDefaultSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoliageDefaultSettings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFullPrecisionUVs_MetaData[];
#endif
		static void NewProp_bUseFullPrecisionUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFullPrecisionUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcLightmapIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SrcLightmapIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DstLightmapIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DstLightmapIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLightmapResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLightmapResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveDegenerates_MetaData[];
#endif
		static void NewProp_bRemoveDegenerates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveDegenerates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerateLightmapUVsFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GenerateLightmapUVsFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecomputeNormalsFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RecomputeNormalsFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecomputeTangentsFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RecomputeTangentsFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMikkTSpace_MetaData[];
#endif
		static void NewProp_bUseMikkTSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMikkTSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildAdjacencyBuffer_MetaData[];
#endif
		static void NewProp_bBuildAdjacencyBuffer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildAdjacencyBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComputeWeightedNormals_MetaData[];
#endif
		static void NewProp_bComputeWeightedNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeWeightedNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildReversedIndexBuffer_MetaData[];
#endif
		static void NewProp_bBuildReversedIndexBuffer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildReversedIndexBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionTangentBasis_MetaData[];
#endif
		static void NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionTangentBasis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldResolutionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldResolutionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData[];
#endif
		static void NewProp_bGenerateDistanceFieldAsIfTwoSided_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateDistanceFieldAsIfTwoSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportFaceRemap_MetaData[];
#endif
		static void NewProp_bSupportFaceRemap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportFaceRemap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPDGAsyncCommandletImportEnabled_MetaData[];
#endif
		static void NewProp_bPDGAsyncCommandletImportEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPDGAsyncCommandletImportEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableBackwardCompatibility_MetaData[];
#endif
		static void NewProp_bEnableBackwardCompatibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableBackwardCompatibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomaticLegacyHDARebuild_MetaData[];
#endif
		static void NewProp_bAutomaticLegacyHDARebuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomaticLegacyHDARebuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomHoudiniLocation_MetaData[];
#endif
		static void NewProp_bUseCustomHoudiniLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomHoudiniLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomHoudiniLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomHoudiniLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniExecutable_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HoudiniExecutable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookingThreadStackSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CookingThreadStackSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniEnvironmentFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HoudiniEnvironmentFiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtlSearchPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OtlSearchPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DsoSearchPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DsoSearchPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageDsoSearchPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImageDsoSearchPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioDsoSearchPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AudioDsoSearchPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, SessionType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost = { "ServerHost", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ServerHost), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ServerPort), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName = { "ServerPipeName", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ServerPipeName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bStartAutomaticServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer = { "bStartAutomaticServer", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout = { "AutomaticServerTimeout", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, AutomaticServerTimeout), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bSyncWithHoudiniCook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook = { "bSyncWithHoudiniCook", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bCookUsingHoudiniTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime = { "bCookUsingHoudiniTime", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bSyncViewport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport = { "bSyncViewport", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bSyncHoudiniViewport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport = { "bSyncHoudiniViewport", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bSyncUnrealViewport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport = { "bSyncUnrealViewport", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bShowMultiAssetDialog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog = { "bShowMultiAssetDialog", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bPreferHdaMemoryCopyOverHdaSourceFile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile = { "bPreferHdaMemoryCopyOverHdaSourceFile", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bPauseCookingOnStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart = { "bPauseCookingOnStart", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bDisplaySlateCookingNotifications = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications = { "bDisplaySlateCookingNotifications", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder = { "DefaultTemporaryCookFolder", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DefaultTemporaryCookFolder), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder = { "DefaultBakeFolder", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DefaultBakeFolder), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->MarshallingLandscapesUseDefaultUnrealScaling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling = { "MarshallingLandscapesUseDefaultUnrealScaling", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->MarshallingLandscapesUseFullResolution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution = { "MarshallingLandscapesUseFullResolution", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->MarshallingLandscapesForceMinMaxValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues = { "MarshallingLandscapesForceMinMaxValues", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue = { "MarshallingLandscapesForcedMinValue", nullptr, (EPropertyFlags)0x0010000000064001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingLandscapesForcedMinValue), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue = { "MarshallingLandscapesForcedMaxValue", nullptr, (EPropertyFlags)0x0010000000064001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingLandscapesForcedMaxValue), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bAddRotAndScaleAttributesOnCurves = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves = { "bAddRotAndScaleAttributesOnCurves", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bUseLegacyInputCurves = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves = { "bUseLegacyInputCurves", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution = { "MarshallingSplineResolution", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingSplineResolution), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bEnableProxyStaticMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh = { "bEnableProxyStaticMesh", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bShowDefaultMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh = { "bShowDefaultMesh", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bEnableProxyStaticMeshRefinementByTimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer = { "bEnableProxyStaticMeshRefinementByTimer", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds = { "ProxyMeshAutoRefineTimeoutSeconds", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ProxyMeshAutoRefineTimeoutSeconds), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bEnableProxyStaticMeshRefinementOnPreSaveWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld = { "bEnableProxyStaticMeshRefinementOnPreSaveWorld", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bEnableProxyStaticMeshRefinementOnPreBeginPIE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE = { "bEnableProxyStaticMeshRefinementOnPreBeginPIE", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bDoubleSidedGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry = { "bDoubleSidedGeometry", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_PhysMaterial_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_PhysMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_PhysMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBodyInstance_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBodyInstance = { "DefaultBodyInstance", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DefaultBodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBodyInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBodyInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CollisionTraceFlag_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CollisionTraceFlag = { "CollisionTraceFlag", nullptr, (EPropertyFlags)0x0010000000074001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, CollisionTraceFlag), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CollisionTraceFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CollisionTraceFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapResolution_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapResolution = { "LightMapResolution", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, LightMapResolution), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LpvBiasMultiplier_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LpvBiasMultiplier = { "LpvBiasMultiplier", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, LpvBiasMultiplier), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LpvBiasMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LpvBiasMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GeneratedDistanceFieldResolutionScale_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GeneratedDistanceFieldResolutionScale = { "GeneratedDistanceFieldResolutionScale", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, GeneratedDistanceFieldResolutionScale), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GeneratedDistanceFieldResolutionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GeneratedDistanceFieldResolutionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_WalkableSlopeOverride_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_WalkableSlopeOverride = { "WalkableSlopeOverride", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, WalkableSlopeOverride), Z_Construct_UScriptStruct_FWalkableSlopeOverride, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_WalkableSlopeOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_WalkableSlopeOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapCoordinateIndex_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapCoordinateIndex = { "LightMapCoordinateIndex", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, LightMapCoordinateIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapCoordinateIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapCoordinateIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bUseMaximumStreamingTexelRatio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio = { "bUseMaximumStreamingTexelRatio", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_StreamingDistanceMultiplier_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_StreamingDistanceMultiplier = { "StreamingDistanceMultiplier", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, StreamingDistanceMultiplier), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_StreamingDistanceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_StreamingDistanceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_FoliageDefaultSettings_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_FoliageDefaultSettings = { "FoliageDefaultSettings", nullptr, (EPropertyFlags)0x0012040000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, FoliageDefaultSettings), Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_FoliageDefaultSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_FoliageDefaultSettings_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0010048000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bUseFullPrecisionUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs = { "bUseFullPrecisionUVs", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SrcLightmapIndex_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SrcLightmapIndex = { "SrcLightmapIndex", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, SrcLightmapIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SrcLightmapIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SrcLightmapIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DstLightmapIndex_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DstLightmapIndex = { "DstLightmapIndex", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DstLightmapIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DstLightmapIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DstLightmapIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MinLightmapResolution_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MinLightmapResolution = { "MinLightmapResolution", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, MinLightmapResolution), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MinLightmapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MinLightmapResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bRemoveDegenerates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates = { "bRemoveDegenerates", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GenerateLightmapUVsFlag_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GenerateLightmapUVsFlag = { "GenerateLightmapUVsFlag", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, GenerateLightmapUVsFlag), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GenerateLightmapUVsFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GenerateLightmapUVsFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeNormalsFlag_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeNormalsFlag = { "RecomputeNormalsFlag", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, RecomputeNormalsFlag), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeNormalsFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeNormalsFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeTangentsFlag_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeTangentsFlag = { "RecomputeTangentsFlag", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, RecomputeTangentsFlag), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeTangentsFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeTangentsFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bUseMikkTSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace = { "bUseMikkTSpace", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bBuildAdjacencyBuffer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer = { "bBuildAdjacencyBuffer", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bComputeWeightedNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals = { "bComputeWeightedNormals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bBuildReversedIndexBuffer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer = { "bBuildReversedIndexBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bUseHighPrecisionTangentBasis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis = { "bUseHighPrecisionTangentBasis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DistanceFieldResolutionScale_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DistanceFieldResolutionScale = { "DistanceFieldResolutionScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DistanceFieldResolutionScale), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DistanceFieldResolutionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DistanceFieldResolutionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bGenerateDistanceFieldAsIfTwoSided = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided = { "bGenerateDistanceFieldAsIfTwoSided", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bSupportFaceRemap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap = { "bSupportFaceRemap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bPDGAsyncCommandletImportEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled = { "bPDGAsyncCommandletImportEnabled", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bEnableBackwardCompatibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility = { "bEnableBackwardCompatibility", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bAutomaticLegacyHDARebuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild = { "bAutomaticLegacyHDARebuild", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bUseCustomHoudiniLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation = { "bUseCustomHoudiniLocation", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation = { "CustomHoudiniLocation", nullptr, (EPropertyFlags)0x0010000000064001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, CustomHoudiniLocation), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniExecutable_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniExecutable = { "HoudiniExecutable", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, HoudiniExecutable), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniExecutable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniExecutable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize = { "CookingThreadStackSize", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, CookingThreadStackSize), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles = { "HoudiniEnvironmentFiles", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, HoudiniEnvironmentFiles), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath = { "OtlSearchPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, OtlSearchPath), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath = { "DsoSearchPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DsoSearchPath), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath = { "ImageDsoSearchPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ImageDsoSearchPath), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath_MetaData[] = {
		{ "Category", "HoudiniRuntimeSettings" },
		{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath = { "AudioDsoSearchPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, AudioDsoSearchPath), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_PhysMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBodyInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CollisionTraceFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LpvBiasMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GeneratedDistanceFieldResolutionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_WalkableSlopeOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapCoordinateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_StreamingDistanceMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_FoliageDefaultSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SrcLightmapIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DstLightmapIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MinLightmapResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GenerateLightmapUVsFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeNormalsFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeTangentsFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DistanceFieldResolutionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniExecutable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniRuntimeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::ClassParams = {
		&UHoudiniRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::PropPointers),
		0,
		0x009000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniRuntimeSettings, 2104087618);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniRuntimeSettings>()
	{
		return UHoudiniRuntimeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniRuntimeSettings(Z_Construct_UClass_UHoudiniRuntimeSettings, &UHoudiniRuntimeSettings::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
