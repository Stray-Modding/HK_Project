#pragma once
#include "CoreMinimal.h"
#include "VictorySubtitleCue.generated.h"

USTRUCT(BlueprintType)
struct FVictorySubtitleCue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SubtitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    VICTORYBPLIBRARY_API FVictorySubtitleCue();
};

