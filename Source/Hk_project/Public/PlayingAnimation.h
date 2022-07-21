#pragma once
#include "CoreMinimal.h"
#include "PlayingAnimationSynchronizedActors.h"
#include "PlayingAnimation.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FPlayingAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsSynchronized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAnimSequence*> DroidAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPlayingAnimationSynchronizedActors> SynchronizedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool KeepLastAnimationAsIdle;
    
    HK_PROJECT_API FPlayingAnimation();
};

