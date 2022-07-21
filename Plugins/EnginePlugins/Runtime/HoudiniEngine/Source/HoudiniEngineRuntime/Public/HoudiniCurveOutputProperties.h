#pragma once
#include "CoreMinimal.h"
#include "EHoudiniCurveOutputType.h"
#include "EHoudiniCurveMethod.h"
#include "EHoudiniCurveType.h"
#include "HoudiniCurveOutputProperties.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniCurveOutputProperties {
    GENERATED_BODY()
public:
    UPROPERTY()
    EHoudiniCurveOutputType CurveOutputType;
    
    UPROPERTY()
    int32 NumPoints;
    
    UPROPERTY()
    bool bClosed;
    
    UPROPERTY()
    EHoudiniCurveType CurveType;
    
    UPROPERTY()
    EHoudiniCurveMethod CurveMethod;
    
    FHoudiniCurveOutputProperties();
};

