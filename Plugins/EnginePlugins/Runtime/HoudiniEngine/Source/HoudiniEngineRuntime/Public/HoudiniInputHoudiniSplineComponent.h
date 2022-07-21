#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "EHoudiniCurveMethod.h"
#include "EHoudiniCurveType.h"
#include "HoudiniInputHoudiniSplineComponent.generated.h"

class UHoudiniSplineComponent;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputHoudiniSplineComponent : public UHoudiniInputObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    EHoudiniCurveType CurveType;
    
    UPROPERTY()
    EHoudiniCurveMethod CurveMethod;
    
    UPROPERTY()
    bool Reversed;
    
protected:
    UPROPERTY(Instanced)
    UHoudiniSplineComponent* CachedComponent;
    
public:
    UHoudiniInputHoudiniSplineComponent();
};

