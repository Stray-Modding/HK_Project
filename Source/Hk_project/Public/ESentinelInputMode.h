#pragma once
#include "CoreMinimal.h"
#include "ESentinelInputMode.generated.h"

UENUM(BlueprintType)
enum class ESentinelInputMode : uint8 {
    SentinelInputMode_NavMesh,
    SentinelInputMode_Manual,
    SentinelInputMode_None,
    SentinelInputMode_MAX UMETA(Hidden),
};

