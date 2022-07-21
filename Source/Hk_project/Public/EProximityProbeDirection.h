#pragma once
#include "CoreMinimal.h"
#include "EProximityProbeDirection.generated.h"

UENUM(BlueprintType)
enum EProximityProbeDirection {
    ProximityProbeDirection_Right,
    ProximityProbeDirection_Left,
    ProximityProbeDirection_Up,
    ProximityProbeDirection_Down,
    ProximityProbeDirection_Front,
    ProximityProbeDirection_Back,
    ProximityProbeDirection_COUNT,
    ProximityProbeDirection_NONE,
    ProximityProbeDirection_MAX UMETA(Hidden),
};

