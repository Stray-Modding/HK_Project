#pragma once
#include "CoreMinimal.h"
#include "SpawningRequest.generated.h"

USTRUCT(BlueprintType)
struct FSpawningRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SpawnCount;
    
    UPROPERTY()
    float TimeInterval;
    
    UPROPERTY()
    float Duration;
    
    UPROPERTY()
    float BeginTime;
    
    UPROPERTY()
    int32 ID;
    
    HK_PROJECT_API FSpawningRequest();
};

