#pragma once
#include "CoreMinimal.h"
#include "HKSubsystemSettings.h"
#include "InputCoreTypes.h"
#include "InputSubsystemSettings.generated.h"

UCLASS(Abstract)
class UInputSubsystemSettings : public UHKSubsystemSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<FKey, FKey> QwertyToAzerty;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FKey, FKey> QwertyToQwertz;
    
    UInputSubsystemSettings();
};

