#pragma once
#include "CoreMinimal.h"
#include "DroneMoveToParams.generated.h"

USTRUCT(BlueprintType)
struct FDroneMoveToParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationTimeTo90;
    
    HK_PROJECT_API FDroneMoveToParams();
};

