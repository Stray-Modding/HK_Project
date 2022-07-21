#pragma once
#include "CoreMinimal.h"
#include "HKSubsystemSettings.h"
#include "ActivitySettings.generated.h"

class UActivityData;

UCLASS(Abstract)
class UActivitySettings : public UHKSubsystemSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UActivityData* ActivityData;
    
    UActivitySettings();
};

