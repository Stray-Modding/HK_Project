#pragma once
#include "CoreMinimal.h"
#include "ESpeedUnit.generated.h"

UENUM(BlueprintType)
enum ESpeedUnit {
    CentimeterPerSecond,
    FootPerSecond,
    MeterPerSecond,
    MeterPerMinute,
    KilometerPerSecond,
    KilometerPerMinute,
    KilometerPerHour,
    MilePerHour,
    Knot,
    Mach,
    SpeedOfLight,
    YardPerSecond,
};

