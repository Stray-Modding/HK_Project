#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ToyoToolRuntimeSettings.generated.h"

class UPhysicalMaterial;

UCLASS(DefaultConfig, Config=Game)
class TOYOTOOLRUNTIME_API UToyoToolRuntimeSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UPhysicalMaterial> DefaultToyoPhysicalMaterial;
    
    UPROPERTY(Config, EditAnywhere)
    FName DefaultCollisionProfileName;
    
    UToyoToolRuntimeSettings();
};

