#pragma once
#include "CoreMinimal.h"
#include "InteractionDebugData.generated.h"

class UPrimitiveComponent;

USTRUCT()
struct FInteractionDebugData {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UPrimitiveComponent* RaycastFailReason;
    
    HK_PROJECT_API FInteractionDebugData();
};

