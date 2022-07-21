#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SmootherRotation.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FSmootherRotation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeTo90Percent;
    
    UPROPERTY(BlueprintReadWrite)
    FQuat Value;
    
    UPROPERTY(BlueprintReadWrite)
    FQuat Velocity;
    
    FSmootherRotation();
};

