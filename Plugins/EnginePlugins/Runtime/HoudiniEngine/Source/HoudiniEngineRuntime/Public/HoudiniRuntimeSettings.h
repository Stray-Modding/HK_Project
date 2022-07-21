#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHoudiniExecutableType.h"
#include "EHoudiniRuntimeSettingsSessionType.h"
#include "Engine/EngineTypes.h"
#include "PhysicsEngine/BodyInstance.h"
#include "BodySetupEnums.h"
#include "EHoudiniRuntimeSettingsRecomputeFlag.h"
#include "Engine/EngineTypes.h"
#include "HoudiniRuntimeSettings.generated.h"

class UPhysicalMaterial;
class UAssetUserData;
class UFoliageType_InstancedStaticMesh;

UCLASS(BlueprintType, DefaultConfig, Config=Engine)
class HOUDINIENGINERUNTIME_API UHoudiniRuntimeSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    TEnumAsByte<EHoudiniRuntimeSettingsSessionType> SessionType;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString ServerHost;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 ServerPort;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString ServerPipeName;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bStartAutomaticServer;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float AutomaticServerTimeout;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    bool bSyncWithHoudiniCook;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    bool bCookUsingHoudiniTime;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    bool bSyncViewport;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    bool bSyncHoudiniViewport;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    bool bSyncUnrealViewport;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bShowMultiAssetDialog;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bPreferHdaMemoryCopyOverHdaSourceFile;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bPauseCookingOnStart;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bDisplaySlateCookingNotifications;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString DefaultTemporaryCookFolder;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString DefaultBakeFolder;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool MarshallingLandscapesUseDefaultUnrealScaling;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool MarshallingLandscapesUseFullResolution;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool MarshallingLandscapesForceMinMaxValues;
    
    UPROPERTY(GlobalConfig, VisibleAnywhere)
    float MarshallingLandscapesForcedMinValue;
    
    UPROPERTY(GlobalConfig, VisibleAnywhere)
    float MarshallingLandscapesForcedMaxValue;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bAddRotAndScaleAttributesOnCurves;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bUseLegacyInputCurves;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float MarshallingSplineResolution;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bEnableProxyStaticMesh;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bShowDefaultMesh;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    bool bEnableProxyStaticMeshRefinementByTimer;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    float ProxyMeshAutoRefineTimeoutSeconds;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    bool bEnableProxyStaticMeshRefinementOnPreSaveWorld;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    bool bEnableProxyStaticMeshRefinementOnPreBeginPIE;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    uint8 bDoubleSidedGeometry: 1;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* PhysMaterial;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FBodyInstance DefaultBodyInstance;
    
    UPROPERTY(GlobalConfig, VisibleDefaultsOnly)
    TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 LightMapResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, GlobalConfig)
    float LpvBiasMultiplier;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float GeneratedDistanceFieldResolutionScale;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    FWalkableSlopeOverride WalkableSlopeOverride;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    int32 LightMapCoordinateIndex;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    uint8 bUseMaximumStreamingTexelRatio: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    float StreamingDistanceMultiplier;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Instanced)
    UFoliageType_InstancedStaticMesh* FoliageDefaultSettings;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Export)
    TArray<UAssetUserData*> AssetUserData;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bUseFullPrecisionUVs;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 SrcLightmapIndex;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 DstLightmapIndex;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 MinLightmapResolution;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bRemoveDegenerates;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> GenerateLightmapUVsFlag;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> RecomputeNormalsFlag;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> RecomputeTangentsFlag;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bUseMikkTSpace;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bBuildAdjacencyBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bComputeWeightedNormals: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bBuildReversedIndexBuffer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseHighPrecisionTangentBasis: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceFieldResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bGenerateDistanceFieldAsIfTwoSided: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSupportFaceRemap: 1;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bPDGAsyncCommandletImportEnabled;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bEnableBackwardCompatibility;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bAutomaticLegacyHDARebuild;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bUseCustomHoudiniLocation;
    
    UPROPERTY(GlobalConfig, VisibleAnywhere)
    FDirectoryPath CustomHoudiniLocation;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TEnumAsByte<EHoudiniExecutableType> HoudiniExecutable;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 CookingThreadStackSize;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString HoudiniEnvironmentFiles;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString OtlSearchPath;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString DsoSearchPath;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString ImageDsoSearchPath;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString AudioDsoSearchPath;
    
    UHoudiniRuntimeSettings();
};

