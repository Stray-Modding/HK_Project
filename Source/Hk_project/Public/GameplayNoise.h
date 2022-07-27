#pragma once
#include "CoreMinimal.h"
#include "GameplayNoise.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FGameplayNoise {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Emitter;
    
    HK_PROJECT_API FGameplayNoise();
};

