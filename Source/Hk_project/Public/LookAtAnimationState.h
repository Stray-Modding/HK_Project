#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LookAtAnimationState.generated.h"

USTRUCT(BlueprintType)
struct FLookAtAnimationState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CurrentRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    HK_PROJECT_API FLookAtAnimationState();
};

