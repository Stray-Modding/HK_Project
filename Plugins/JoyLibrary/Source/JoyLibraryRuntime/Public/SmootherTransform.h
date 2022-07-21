#pragma once
#include "CoreMinimal.h"
#include "SmootherTransform.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FSmootherTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeTo90Percent;
    
    FSmootherTransform();
};

