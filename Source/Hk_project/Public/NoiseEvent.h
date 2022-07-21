#pragma once
#include "CoreMinimal.h"
#include "NoiseEvent.generated.h"

class AActor;
class UNoisableComponent;

USTRUCT(BlueprintType)
struct FNoiseEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* Emitter;
    
    UPROPERTY(Instanced)
    UNoisableComponent* noisable;
    
    HK_PROJECT_API FNoiseEvent();
};

