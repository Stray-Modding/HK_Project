#pragma once
#include "CoreMinimal.h"
#include "VictorySubtitleCue.generated.h"

USTRUCT(BlueprintType)
struct FVictorySubtitleCue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText SubtitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Time;
    
    VICTORYBPLIBRARY_API FVictorySubtitleCue();
};

