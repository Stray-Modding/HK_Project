#pragma once
#include "CoreMinimal.h"
#include "SlaveGroup.generated.h"

class AZurgPawnSlave;

USTRUCT(BlueprintType)
struct FSlaveGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<AZurgPawnSlave*> Slaves;
    
    UPROPERTY(BlueprintReadOnly)
    int32 groupId;
    
    HK_PROJECT_API FSlaveGroup();
};

