#pragma once
#include "CoreMinimal.h"
#include "JumpAnimationData.h"
#include "SpeedAnimationData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FSpeedAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* MoveAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJumpAnimationData> JumpAnimations;
    
    HK_PROJECT_API FSpeedAnimationData();
};

