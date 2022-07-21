#pragma once
#include "CoreMinimal.h"
#include "PendingInteraction.generated.h"

class UBackpackUsableComponent;

USTRUCT()
struct FPendingInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UBackpackUsableComponent* Usable;
    
    HK_PROJECT_API FPendingInteraction();
};

