#pragma once
#include "CoreMinimal.h"
#include "SlaveTick.generated.h"

class AZurgPawnSlave;

USTRUCT(BlueprintType)
struct FSlaveTick {
    GENERATED_BODY()
public:
    UPROPERTY()
    AZurgPawnSlave* slave;
    
    HK_PROJECT_API FSlaveTick();
};

