#pragma once
#include "CoreMinimal.h"
#include "EGroundProbeDebugFlags.generated.h"

UENUM(BlueprintType)
enum EGroundProbeDebugFlags {
    GroundProbeDebug_DisplayEnclosingPlanes = 0x1,
    GroundProbeDebug_DisplayRail,
    GroundProbeDebug_DisplayNormals = 0x4,
    GroundProbeDebug_DisplayCasts = 0x8,
    GroundProbeDebug_MAX UMETA(Hidden),
};

