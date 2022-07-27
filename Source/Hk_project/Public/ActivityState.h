#pragma once
#include "CoreMinimal.h"
#include "EObjective.h"
#include "EActivityStatus.h"
#include "EActivity.h"
#include "ObjectiveState.h"
#include "ActivityState.generated.h"

USTRUCT(BlueprintType)
struct FActivityState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivity ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivityStatus status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EObjective, FObjectiveState> Objectives;
    
    HK_PROJECT_API FActivityState();
};

