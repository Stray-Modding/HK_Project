#pragma once
#include "CoreMinimal.h"
#include "EObjectiveStatus.generated.h"

UENUM(BlueprintType)
enum class EObjectiveStatus : uint8 {
    Hidden,
    Revealed,
    InProgress,
    Failed,
    Completed,
};

