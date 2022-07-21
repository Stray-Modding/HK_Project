#pragma once
#include "CoreMinimal.h"
#include "LevelPointer.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FLevelPointer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UWorld> Level;
    
    FLevelPointer();
};

