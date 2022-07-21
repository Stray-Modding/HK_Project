#pragma once
#include "CoreMinimal.h"
#include "HoudiniBakedOutputObjectIdentifier.h"
#include "HoudiniBakedOutputObject.h"
#include "HoudiniBakedOutput.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniBakedOutput {
    GENERATED_BODY()
public:
    /*UPROPERTY()
    TMap<FHoudiniBakedOutputObjectIdentifier, FHoudiniBakedOutputObject> BakedOutputObjects;*/
    
    FHoudiniBakedOutput();
};

