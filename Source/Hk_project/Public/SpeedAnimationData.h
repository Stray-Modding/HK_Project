#pragma once
#include "CoreMinimal.h"
#include "JumpAnimationData.h"
#include "SpeedAnimationData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FSpeedAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequence* MoveAnimation;
    
    UPROPERTY(EditAnywhere)
    TArray<FJumpAnimationData> JumpAnimations;
    
    HK_PROJECT_API FSpeedAnimationData();
};

