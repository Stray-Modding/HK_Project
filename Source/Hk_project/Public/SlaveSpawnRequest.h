#pragma once
#include "CoreMinimal.h"
#include "SlaveSpawnRequest.generated.h"

class AZurgPawnLeader;

USTRUCT(BlueprintType)
struct FSlaveSpawnRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    AZurgPawnLeader* leader;
    
    HK_PROJECT_API FSlaveSpawnRequest();
};

