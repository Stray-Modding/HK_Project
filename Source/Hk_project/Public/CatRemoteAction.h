#pragma once
#include "CoreMinimal.h"
#include "CatRemoteAction.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCatRemoteAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PreciseMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool JumpTransition;
    
    HK_PROJECT_API FCatRemoteAction();
};

