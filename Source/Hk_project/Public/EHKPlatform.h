#pragma once
#include "CoreMinimal.h"
#include "EHKPlatform.generated.h"

UENUM(BlueprintType)
enum EHKPlatform {
    HKPlatform_Windows,
    HKPlatform_PS4,
    HKPlatform_PS5,
    HKPlatform_Unknown,
    HKPlatform_MAX UMETA(Hidden),
};

