#pragma once
#include "CoreMinimal.h"
#include "EDroidLocomotionBehavior.generated.h"

UENUM(BlueprintType)
enum class EDroidLocomotionBehavior : uint8 {
    Locomotion_Behavior_None,
    Locomotion_Behavior_PlayAnimation,
    Locomotion_Behavior_MAX UMETA(Hidden),
};

