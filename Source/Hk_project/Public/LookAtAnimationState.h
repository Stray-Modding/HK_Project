#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LookAtAnimationState.generated.h"

USTRUCT(BlueprintType)
struct FLookAtAnimationState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FRotator CurrentRotation;
    
    UPROPERTY(BlueprintReadWrite)
    bool Enable;
    
    HK_PROJECT_API FLookAtAnimationState();
};

