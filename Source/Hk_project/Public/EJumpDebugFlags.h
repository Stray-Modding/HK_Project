#pragma once
#include "CoreMinimal.h"
#include "EJumpDebugFlags.generated.h"

UENUM(BlueprintType)
enum EJumpDebugFlags {
    JumpDebug_DisplayTargets = 0x1,
    JumpDebug_DisplayTrajectories,
    JumpDebug_DisplayEnclosingPlanes = 0x4,
    JumpDebug_DisplayClampCapsule = 0x8,
    JumpDebug_DisplayProbes = 0x10,
    JumpDebug_MAX UMETA(Hidden),
};

