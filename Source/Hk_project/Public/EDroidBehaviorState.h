#pragma once
#include "CoreMinimal.h"
#include "EDroidBehaviorState.generated.h"

UENUM(BlueprintType)
enum class EDroidBehaviorState : uint8 {
    DroidBehavior_None,
    DroidBehavior_Disturbed,
    DroidBehavior_PlayingAnimation,
    DroidBehavior_ThrowObject,
    DroidBehavior_Dazzled,
    DroidBehavior_MAX UMETA(Hidden),
};

