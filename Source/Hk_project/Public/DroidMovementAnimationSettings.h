#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DroidMovementAnimationSettings.generated.h"

class UBlendSpace1D;
class UBlendSpace;
class UAnimSequence;

UCLASS(BlueprintType)
class HK_PROJECT_API UDroidMovementAnimationSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpace1D* Start_LeftFoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpace1D* Start_RightFoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpace* WalkBlendSpace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* StopWalkAnimation_LeftFoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* StopWalkAnimation_RightFoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpace1D* TurnInPlaceBlendSpace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpace1D* FinalStepBlendSpace_LeftFoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpace1D* FinalStepBlendSpace_RightFoot;
    
    UDroidMovementAnimationSettings();
};

