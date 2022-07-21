#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomAnimation.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FCustomAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsSynchronized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool KeepCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform StartTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SynchronizationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayRate;
    
    HK_PROJECT_API FCustomAnimation();
};

