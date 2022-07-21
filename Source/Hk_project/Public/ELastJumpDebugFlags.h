#pragma once
#include "CoreMinimal.h"
#include "ELastJumpDebugFlags.generated.h"

UENUM(BlueprintType)
enum ELastJumpDebugFlags {
    LastJumpDebug_DisplayMotion = 0x1,
    LastJumpDebug_DisplayMotionRatios,
    LastJumpDebug_MAX UMETA(Hidden),
};

