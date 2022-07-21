#pragma once
#include "CoreMinimal.h"
#include "HoudiniBakedOutput.h"
#include "HoudiniPDGWorkResultObjectBakedOutput.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniPDGWorkResultObjectBakedOutput {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FHoudiniBakedOutput> BakedOutputs;
    
    FHoudiniPDGWorkResultObjectBakedOutput();
};

