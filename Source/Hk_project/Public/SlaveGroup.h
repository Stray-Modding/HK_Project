#pragma once
#include "CoreMinimal.h"
#include "SlaveGroup.generated.h"

class AZurgPawnSlave;

USTRUCT(BlueprintType)
struct FSlaveGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AZurgPawnSlave*> Slaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 groupId;
    
    HK_PROJECT_API FSlaveGroup();
};

