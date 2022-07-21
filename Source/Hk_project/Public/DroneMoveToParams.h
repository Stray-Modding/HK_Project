#pragma once
#include "CoreMinimal.h"
#include "DroneMoveToParams.generated.h"

USTRUCT(BlueprintType)
struct FDroneMoveToParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float Speed;
    
    UPROPERTY(BlueprintReadWrite)
    float RotationTimeTo90;
    
    HK_PROJECT_API FDroneMoveToParams();
};

