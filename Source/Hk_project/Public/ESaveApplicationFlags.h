#pragma once
#include "CoreMinimal.h"
#include "ESaveApplicationFlags.generated.h"

UENUM(BlueprintType)
enum ESaveApplicationFlags {
    SaveApplicationFlag_PersistentData = 0x1,
    SaveApplicationFlag_SessionData,
    SaveApplicationFlag_All = -0x1,
    SaveApplicationFlag_MAX = 0x3,
};

