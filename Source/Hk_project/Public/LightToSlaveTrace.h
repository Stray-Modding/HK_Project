#pragma once
#include "CoreMinimal.h"
#include "LightToSlaveTrace.generated.h"

class AZurgPawnSlave;
class UAntiZurgSpotlightComponent;

USTRUCT(BlueprintType)
struct FLightToSlaveTrace {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UAntiZurgSpotlightComponent* Light;
    
    UPROPERTY()
    AZurgPawnSlave* slave;
    
    HK_PROJECT_API FLightToSlaveTrace();
};

