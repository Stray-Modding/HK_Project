#pragma once
#include "CoreMinimal.h"
#include "ComponentInstanceDataCache.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniSplineComponentInstanceData.generated.h"

USTRUCT()
struct FHoudiniSplineComponentInstanceData : public FActorComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTransform> CurvePoints;
    
    UPROPERTY()
    TArray<FVector> DisplayPoints;
    
    UPROPERTY()
    TArray<int32> DisplayPointIndexDivider;
    
    HOUDINIENGINERUNTIME_API FHoudiniSplineComponentInstanceData();
};

