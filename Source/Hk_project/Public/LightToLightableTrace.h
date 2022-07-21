#pragma once
#include "CoreMinimal.h"
#include "LightToLightableTrace.generated.h"

class UAntiZurgSpotlightComponent;
class UAntiZurgLightableComponent;

USTRUCT(BlueprintType)
struct FLightToLightableTrace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAntiZurgSpotlightComponent* Light;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAntiZurgLightableComponent* lightable;
    
    HK_PROJECT_API FLightToLightableTrace();
};

