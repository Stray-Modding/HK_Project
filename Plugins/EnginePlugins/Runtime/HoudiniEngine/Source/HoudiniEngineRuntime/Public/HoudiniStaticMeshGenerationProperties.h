#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PhysicsEngine/BodyInstance.h"
#include "BodySetupEnums.h"
#include "HoudiniStaticMeshGenerationProperties.generated.h"

class UPhysicalMaterial;
class UAssetUserData;
class UFoliageType_InstancedStaticMesh;

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniStaticMeshGenerationProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bGeneratedDoubleSidedGeometry: 1;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* GeneratedPhysMaterial;
    
    UPROPERTY(EditAnywhere)
    FBodyInstance DefaultBodyInstance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionTraceFlag> GeneratedCollisionTraceFlag;
    
    UPROPERTY(EditAnywhere)
    int32 GeneratedLightMapResolution;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FWalkableSlopeOverride GeneratedWalkableSlopeOverride;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 GeneratedLightMapCoordinateIndex;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bGeneratedUseMaximumStreamingTexelRatio: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float GeneratedStreamingDistanceMultiplier;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Instanced)
    UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Export)
    TArray<UAssetUserData*> GeneratedAssetUserData;
    
    FHoudiniStaticMeshGenerationProperties();
};

