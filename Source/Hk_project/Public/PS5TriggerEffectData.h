#pragma once
#include "CoreMinimal.h"
#include "EPS5TriggerEffectMode.h"
#include "PS5TriggerEffectData.generated.h"

USTRUCT(BlueprintType)
struct FPS5TriggerEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPS5TriggerEffectMode Mode;
    
    UPROPERTY(EditAnywhere)
    uint8 Value1;
    
    UPROPERTY(EditAnywhere)
    uint8 Value2;
    
    UPROPERTY(EditAnywhere)
    uint8 Value3;
    
    HK_PROJECT_API FPS5TriggerEffectData();
};

