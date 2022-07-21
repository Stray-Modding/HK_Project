#pragma once
#include "CoreMinimal.h"
#include "VectorPIDController.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FVectorPIDController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float I;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float D;
    
    FVectorPIDController();
};

