#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHoudiniRampInterpolationType.h"
#include "HoudiniParameterRampFloatPoint.generated.h"

class UHoudiniParameterFloat;
class UHoudiniParameterChoice;

UCLASS(Blueprintable, DefaultToInstanced)
class HOUDINIENGINERUNTIME_API UHoudiniParameterRampFloatPoint : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(EditAnywhere)
    EHoudiniRampInterpolationType Interpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHoudiniParameterFloat* PositionParentParm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHoudiniParameterFloat* ValueParentParm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHoudiniParameterChoice* InterpolationParentParm;
    
    UHoudiniParameterRampFloatPoint();
};

