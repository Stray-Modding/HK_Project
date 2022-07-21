#pragma once
#include "CoreMinimal.h"
#include "VectorPIDController.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FVectorPIDController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float I;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float D;
    
    FVectorPIDController();
};

