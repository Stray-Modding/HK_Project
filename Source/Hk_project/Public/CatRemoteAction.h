#pragma once
#include "CoreMinimal.h"
#include "CatRemoteAction.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCatRemoteAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreciseMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool JumpTransition;
    
    HK_PROJECT_API FCatRemoteAction();
};

