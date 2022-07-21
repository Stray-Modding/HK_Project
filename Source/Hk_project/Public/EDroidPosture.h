#pragma once
#include "CoreMinimal.h"
#include "EDroidPosture.generated.h"

UENUM(BlueprintType)
enum class EDroidPosture : uint8 {
    Posture_None,
    Posture_StandingUp,
    Posture_Stumbling,
    Posture_Falling,
    Posture_Ragdoll,
    Posture_RisingUp,
    Posture_MAX UMETA(Hidden),
};

