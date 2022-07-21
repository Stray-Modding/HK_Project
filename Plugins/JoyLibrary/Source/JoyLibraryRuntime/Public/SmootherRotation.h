#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SmootherRotation.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FSmootherRotation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeTo90Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Velocity;
    
    FSmootherRotation();
};

