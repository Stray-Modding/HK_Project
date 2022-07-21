#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HKSubsystemSettings.generated.h"

UCLASS(Abstract, Blueprintable, Const)
class UHKSubsystemSettings : public UObject {
    GENERATED_BODY()
public:
    UHKSubsystemSettings();
};

