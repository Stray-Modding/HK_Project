#pragma once
#include "CoreMinimal.h"
#include "AnimationUsingStruct.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FAnimationUsingStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* AnimationAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float playSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float blendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float blendOutTime;
    
    HK_PROJECT_API FAnimationUsingStruct();
};

