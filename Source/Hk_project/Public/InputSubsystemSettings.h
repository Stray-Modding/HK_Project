#pragma once
#include "CoreMinimal.h"
#include "HKSubsystemSettings.h"
#include "InputCoreTypes.h"
#include "InputSubsystemSettings.generated.h"

UCLASS(Abstract, Blueprintable)
class UInputSubsystemSettings : public UHKSubsystemSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, FKey> QwertyToAzerty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, FKey> QwertyToQwertz;
    
    UInputSubsystemSettings();
};

