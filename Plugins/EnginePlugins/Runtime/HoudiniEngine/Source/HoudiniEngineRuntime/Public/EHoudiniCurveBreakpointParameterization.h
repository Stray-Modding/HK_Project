#pragma once
#include "CoreMinimal.h"
#include "EHoudiniCurveBreakpointParameterization.generated.h"

UENUM(BlueprintType)
enum class EHoudiniCurveBreakpointParameterization : uint8 {
    Invalid = -0x1,
    Uniform,
    Chord,
    Centripetal,
};

