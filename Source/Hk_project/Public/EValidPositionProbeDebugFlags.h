#pragma once
#include "CoreMinimal.h"
#include "EValidPositionProbeDebugFlags.generated.h"

UENUM(BlueprintType)
enum EValidPositionProbeDebugFlags {
    ValidPositionProbeDebug_DisplayLegsCasts = 0x1,
    ValidPositionProbeDebug_MAX UMETA(Hidden),
};

