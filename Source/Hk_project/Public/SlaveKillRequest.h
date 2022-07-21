#pragma once
#include "CoreMinimal.h"
#include "SlaveKillRequest.generated.h"

class AActor;
class AZurgPawnSlave;

USTRUCT(BlueprintType)
struct FSlaveKillRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* damageApplier;
    
    UPROPERTY()
    AZurgPawnSlave* slave;
    
    HK_PROJECT_API FSlaveKillRequest();
};

