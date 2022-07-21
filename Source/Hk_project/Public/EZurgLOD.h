#pragma once
#include "CoreMinimal.h"
#include "EZurgLOD.generated.h"

UENUM(BlueprintType)
enum class EZurgLOD : uint8 {
    Zurg_LOD0,
    Zurg_LOD1,
    Zurg_LOD2,
    Zurg_LOD_None,
    Zurg_MAX UMETA(Hidden),
};

