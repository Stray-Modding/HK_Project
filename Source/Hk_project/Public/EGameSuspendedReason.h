#pragma once
#include "CoreMinimal.h"
#include "EGameSuspendedReason.generated.h"

UENUM(BlueprintType)
enum EGameSuspendedReason {
    GameSuspendedReason_Invalid,
    GameSuspendedReason_Internal,
    GameSuspendedReason_PlayerRequested,
    GameSuspendedReason_Cinematic,
    GameSuspendedReason_MAX UMETA(Hidden),
};

