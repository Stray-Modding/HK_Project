#pragma once
#include "CoreMinimal.h"
#include "NoiseEvent.generated.h"

class AActor;
class UNoisableComponent;

USTRUCT(BlueprintType)
struct FNoiseEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Emitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UNoisableComponent* noisable;
    
    HK_PROJECT_API FNoiseEvent();
};

