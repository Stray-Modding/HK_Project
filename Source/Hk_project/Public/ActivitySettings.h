#pragma once
#include "CoreMinimal.h"
#include "HKSubsystemSettings.h"
#include "ActivitySettings.generated.h"

class UActivityData;

UCLASS(Abstract, Blueprintable)
class UActivitySettings : public UHKSubsystemSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActivityData* ActivityData;
    
    UActivitySettings();
};

