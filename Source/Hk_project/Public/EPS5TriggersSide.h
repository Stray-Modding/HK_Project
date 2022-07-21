#pragma once
#include "CoreMinimal.h"
#include "EPS5TriggersSide.generated.h"

UENUM(BlueprintType)
enum class EPS5TriggersSide : uint8 {
    PS5TriggersSide_Left,
    PS5TriggersSide_Right,
    PS5TriggersSide_MAX UMETA(Hidden),
};

