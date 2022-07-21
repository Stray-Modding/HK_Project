#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ToyoToolRuntimeSettings.generated.h"

class UPhysicalMaterial;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class TOYOTOOLRUNTIME_API UToyoToolRuntimeSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPhysicalMaterial> DefaultToyoPhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultCollisionProfileName;
    
    UToyoToolRuntimeSettings();
};

