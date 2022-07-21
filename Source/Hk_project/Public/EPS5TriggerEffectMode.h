#pragma once
#include "CoreMinimal.h"
#include "EPS5TriggerEffectMode.generated.h"

UENUM(BlueprintType)
enum class EPS5TriggerEffectMode : uint8 {
    PS5TriggerEffectMode_None,
    PS5TriggerEffectMode_Weapon,
    PS5TriggerEffectMode_Vibration,
    PS5TriggerEffectMode_Feedback,
    PS5TriggerEffectMode_MAX UMETA(Hidden),
};

