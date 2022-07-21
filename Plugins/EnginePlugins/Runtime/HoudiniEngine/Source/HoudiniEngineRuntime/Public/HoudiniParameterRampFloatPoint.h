#pragma once
#include "CoreMinimal.h"
#include "EHoudiniRampInterpolationType.h"
#include "UObject/Object.h"
#include "HoudiniParameterRampFloatPoint.generated.h"

class UHoudiniParameterFloat;
class UHoudiniParameterChoice;

UCLASS(DefaultToInstanced)
class HOUDINIENGINERUNTIME_API UHoudiniParameterRampFloatPoint : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Position;
    
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    EHoudiniRampInterpolationType Interpolation;
    
    UPROPERTY()
    int32 InstanceIndex;
    
    UPROPERTY(Instanced)
    UHoudiniParameterFloat* PositionParentParm;
    
    UPROPERTY(Instanced)
    UHoudiniParameterFloat* ValueParentParm;
    
    UPROPERTY(Instanced)
    UHoudiniParameterChoice* InterpolationParentParm;
    
    UHoudiniParameterRampFloatPoint();
};

