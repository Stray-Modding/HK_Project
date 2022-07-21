#pragma once
#include "CoreMinimal.h"
#include "AnimationStartUseStruct.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FAnimationStartUseStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AnimationAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float playSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float blendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float blendOutTime;
    
    HK_PROJECT_API FAnimationStartUseStruct();
};

