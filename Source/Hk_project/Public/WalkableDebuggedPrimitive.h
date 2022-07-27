#pragma once
#include "CoreMinimal.h"
#include "WalkableDebuggedPrimitive.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FWalkableDebuggedPrimitive {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    HK_PROJECT_API FWalkableDebuggedPrimitive();
};

