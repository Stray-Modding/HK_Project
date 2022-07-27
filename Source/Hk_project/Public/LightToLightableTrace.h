#pragma once
#include "CoreMinimal.h"
#include "LightToLightableTrace.generated.h"

class UAntiZurgSpotlightComponent;
class UAntiZurgLightableComponent;

USTRUCT(BlueprintType)
struct FLightToLightableTrace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAntiZurgSpotlightComponent* Light;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAntiZurgLightableComponent* lightable;
    
    HK_PROJECT_API FLightToLightableTrace();
};

