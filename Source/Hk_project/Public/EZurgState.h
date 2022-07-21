#pragma once
#include "CoreMinimal.h"
#include "EZurgState.generated.h"

UENUM(BlueprintType)
enum class EZurgState : uint8 {
    ZurgState_Idle,
    ZurgState_Sleeping,
    ZurgState_UnderLight,
    ZurgState_Alerted,
    ZurgState_Routine,
    ZurgState_Chasing,
    ZurgState_Angry,
    ZurgState_Interested,
    ZurgState_OnInterestPoint,
    ZurgState_Attacking,
    ZurgState_Grabbing,
    ZurgState_LockedOnTarget,
    ZurgState_Ejected,
    ZurgState_Falling,
    ZurgState_None,
    ZurgState_MAX UMETA(Hidden),
};

