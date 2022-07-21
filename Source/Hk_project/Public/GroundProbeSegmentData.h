#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GroundProbeSegmentData.generated.h"

USTRUCT(BlueprintType)
struct HK_PROJECT_API FGroundProbeSegmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector Normal;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Type;
    
    FGroundProbeSegmentData();
};

