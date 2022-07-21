#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ProbeDirectionData.generated.h"

USTRUCT(BlueprintType)
struct HK_PROJECT_API FProbeDirectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> SurfaceVertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPlane LimitPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceToPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsObstacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsGap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsValid;
    
    FProbeDirectionData();
};

