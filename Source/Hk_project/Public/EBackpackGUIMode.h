#pragma once
#include "CoreMinimal.h"
#include "EBackpackGUIMode.generated.h"

UENUM(BlueprintType)
enum EBackpackGUIMode {
    BackpackGUIMode_Dialogue,
    BackpackGUIMode_Photo,
    BackpackGUIMode_Inventory,
    BackpackGUIMode_MAX UMETA(Hidden),
};

