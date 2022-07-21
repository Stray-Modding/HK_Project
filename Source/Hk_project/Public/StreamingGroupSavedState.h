#pragma once
#include "CoreMinimal.h"
#include "StreamingGroupSavedState.generated.h"

USTRUCT(BlueprintType)
struct FStreamingGroupSavedState {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FName Name;
    
    UPROPERTY(SaveGame)
    bool IsActive;
    
    HK_PROJECT_API FStreamingGroupSavedState();
};

