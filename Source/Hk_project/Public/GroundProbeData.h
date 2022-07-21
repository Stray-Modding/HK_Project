#pragma once
#include "CoreMinimal.h"
#include "ProbeDirectionData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GroundProbeSegmentData.h"
#include "GroundProbeData.generated.h"

class UPrimitiveComponent;
class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct HK_PROJECT_API FGroundProbeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProbeDirectionData> Directions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> CleanSurfaceVertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGroundProbeSegmentData> CleanSurfaceSegmentsData;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UPhysicalMaterial> PhysicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RawLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat RawRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Rotation;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UPrimitiveComponent> GroundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LimitsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FGroundProbeData();
};

