#pragma once
#include "CoreMinimal.h"
#include "StreamingGroupSavedState.generated.h"

USTRUCT(BlueprintType)
struct FStreamingGroupSavedState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    HK_PROJECT_API FStreamingGroupSavedState();
};

