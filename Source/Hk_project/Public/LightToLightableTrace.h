#pragma once
#include "CoreMinimal.h"
#include "LightToLightableTrace.generated.h"

class UAntiZurgSpotlightComponent;
class UAntiZurgLightableComponent;

USTRUCT(BlueprintType)
struct FLightToLightableTrace {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UAntiZurgSpotlightComponent* Light;
    
    UPROPERTY(Instanced)
    UAntiZurgLightableComponent* lightable;
    
    HK_PROJECT_API FLightToLightableTrace();
};

