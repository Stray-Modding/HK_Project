#pragma once
#include "CoreMinimal.h"
#include "LightToSlaveTrace.generated.h"

class AZurgPawnSlave;
class UAntiZurgSpotlightComponent;

USTRUCT(BlueprintType)
struct FLightToSlaveTrace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAntiZurgSpotlightComponent* Light;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AZurgPawnSlave* slave;
    
    HK_PROJECT_API FLightToSlaveTrace();
};

