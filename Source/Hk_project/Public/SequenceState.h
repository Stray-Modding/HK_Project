#pragma once
#include "CoreMinimal.h"
#include "SequenceState.generated.h"

class ASequence;

USTRUCT()
struct FSequenceState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ASequence* Sequence;
    
    UPROPERTY(EditAnywhere)
    FName CheckpointName;
    
    HK_PROJECT_API FSequenceState();
};

