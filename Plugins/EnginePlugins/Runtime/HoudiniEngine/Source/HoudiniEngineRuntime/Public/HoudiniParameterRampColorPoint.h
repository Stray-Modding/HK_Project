#pragma once
#include "CoreMinimal.h"
#include "EHoudiniRampInterpolationType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "HoudiniParameterRampColorPoint.generated.h"

class UHoudiniParameterColor;
class UHoudiniParameterFloat;
class UHoudiniParameterChoice;

UCLASS(DefaultToInstanced)
class HOUDINIENGINERUNTIME_API UHoudiniParameterRampColorPoint : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Position;
    
    UPROPERTY()
    FLinearColor Value;
    
    UPROPERTY()
    EHoudiniRampInterpolationType Interpolation;
    
    UPROPERTY()
    int32 InstanceIndex;
    
    UPROPERTY(Instanced)
    UHoudiniParameterFloat* PositionParentParm;
    
    UPROPERTY(Instanced)
    UHoudiniParameterColor* ValueParentParm;
    
    UPROPERTY(Instanced)
    UHoudiniParameterChoice* InterpolationParentParm;
    
    UHoudiniParameterRampColorPoint();
};

