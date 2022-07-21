#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SmootherVector.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FSmootherVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeTo90Percent;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Value;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Velocity;
    
    FSmootherVector();
};

