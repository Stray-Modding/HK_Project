#pragma once
#include "CoreMinimal.h"
#include "PlayingAnimationSynchronizedActors.generated.h"

class AActor;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FPlayingAnimationSynchronizedActors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorSynchronized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> Animations;
    
    HK_PROJECT_API FPlayingAnimationSynchronizedActors();
};

