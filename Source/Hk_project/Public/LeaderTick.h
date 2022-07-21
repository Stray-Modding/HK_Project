#pragma once
#include "CoreMinimal.h"
#include "LeaderTick.generated.h"

class AZurgPawnLeader;

USTRUCT(BlueprintType)
struct FLeaderTick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AZurgPawnLeader* leader;
    
    HK_PROJECT_API FLeaderTick();
};

