#pragma once
#include "CoreMinimal.h"
#include "ESentinelProjectileState.generated.h"

UENUM(BlueprintType)
enum class ESentinelProjectileState : uint8 {
    Projectile_None,
    Projectile_Shooted,
    Projectile_InAir,
    Projectile_Snapped,
    Projectile_WaitingDestroy,
    Projectile_MAX UMETA(Hidden),
};

