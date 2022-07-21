#pragma once
#include "CoreMinimal.h"
#include "PendingInteraction.generated.h"

class UBackpackUsableComponent;

USTRUCT(BlueprintType)
struct FPendingInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBackpackUsableComponent* Usable;
    
    HK_PROJECT_API FPendingInteraction();
};

