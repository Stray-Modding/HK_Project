#pragma once
#include "CoreMinimal.h"
#include "FurLod.generated.h"

USTRUCT(BlueprintType)
struct FFurLod {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ScreenSize;
    
    UPROPERTY(EditAnywhere)
    int32 LayerCount;
    
    UPROPERTY(EditAnywhere)
    int32 Lod;
    
    UPROPERTY(EditAnywhere)
    bool PhysicsEnabled;
    
    UPROPERTY(EditAnywhere)
    bool DisableMorphTargets;
    
    GFUR_API FFurLod();
};

