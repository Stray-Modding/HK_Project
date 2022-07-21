#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "VictoryInputAxis.generated.h"

USTRUCT(BlueprintType)
struct FVictoryInputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString KeyAsString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Scale;
    
    VICTORYBPLIBRARY_API FVictoryInputAxis();
};

