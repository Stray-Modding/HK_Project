#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Brush.h"
#include "HoudiniBrushInfo.generated.h"

class ABrush;

USTRUCT(BlueprintType)
struct FHoudiniBrushInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<ABrush> BrushActor;
    
    UPROPERTY()
    FTransform CachedTransform;
    
    UPROPERTY()
    FVector CachedOrigin;
    
    UPROPERTY()
    FVector CachedExtent;
    
    UPROPERTY()
    TEnumAsByte<EBrushType> CachedBrushType;
    
    UPROPERTY()
    uint64 CachedSurfaceHash;
    
    HOUDINIENGINERUNTIME_API FHoudiniBrushInfo();
};

