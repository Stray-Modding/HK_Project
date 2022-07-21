#pragma once
#include "CoreMinimal.h"
#include "AnimationStartUseStruct.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FAnimationStartUseStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* AnimationAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float playSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float blendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float blendOutTime;
    
    HK_PROJECT_API FAnimationStartUseStruct();
};

