#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProbeDirectionData.h"
#include "GroundProbeSegmentData.h"
#include "UObject/NoExportTypes.h"
#include "GroundProbeData.generated.h"

class UPhysicalMaterial;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct HK_PROJECT_API FGroundProbeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FProbeDirectionData> Directions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> CleanSurfaceVertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGroundProbeSegmentData> CleanSurfaceSegmentsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<UPhysicalMaterial> PhysicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RawLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat RawRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TWeakObjectPtr<UPrimitiveComponent> GroundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LimitsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    FGroundProbeData();
};

