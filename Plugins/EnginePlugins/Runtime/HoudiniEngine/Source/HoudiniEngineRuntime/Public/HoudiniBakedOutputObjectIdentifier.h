#pragma once
#include "CoreMinimal.h"
#include "HoudiniBakedOutputObjectIdentifier.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniBakedOutputObjectIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 PartId;
    
    UPROPERTY()
    FString SplitIdentifier;
    
    FHoudiniBakedOutputObjectIdentifier();
};

