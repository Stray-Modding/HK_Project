#pragma once
#include "CoreMinimal.h"
#include "SequenceState.generated.h"

class ASequence;

USTRUCT(BlueprintType)
struct FSequenceState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CheckpointName;
    
    HK_PROJECT_API FSequenceState();
};

