#pragma once
#include "CoreMinimal.h"
#include "SlaveTick.generated.h"

class AZurgPawnSlave;

USTRUCT(BlueprintType)
struct FSlaveTick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AZurgPawnSlave* slave;
    
    HK_PROJECT_API FSlaveTick();
};

