#pragma once
#include "CoreMinimal.h"
#include "SlaveKillRequest.generated.h"

class AActor;
class AZurgPawnSlave;

USTRUCT(BlueprintType)
struct FSlaveKillRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* damageApplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AZurgPawnSlave* slave;
    
    HK_PROJECT_API FSlaveKillRequest();
};

