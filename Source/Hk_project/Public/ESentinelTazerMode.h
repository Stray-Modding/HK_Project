#pragma once
#include "CoreMinimal.h"
#include "ESentinelTazerMode.generated.h"

UENUM(BlueprintType)
enum class ESentinelTazerMode : uint8 {
    SentinelTazerMode_Idle,
    SentinelTazerMode_Loading,
    SentinelTazerMode_UnLoading,
    SentinelTazerMode_ReadyToShoot,
    SentinelTazerMode_Shooting,
    SentinelTazerMode_Reloading,
    SentinelTazerMode_None,
    SentinelTazerMode_MAX UMETA(Hidden),
};

