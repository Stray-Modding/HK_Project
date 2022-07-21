#pragma once
#include "CoreMinimal.h"
#include "JumpAnimationData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FJumpAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* JumpAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* JumpFailAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* StopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* StopRailAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* SlowAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseManualBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinLengthBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxLengthBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinHeightBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxHeightBound;
    
    HK_PROJECT_API FJumpAnimationData();
};

