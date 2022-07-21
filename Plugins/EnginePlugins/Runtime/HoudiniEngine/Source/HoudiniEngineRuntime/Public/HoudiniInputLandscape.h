#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputActor.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniInputLandscape.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputLandscape : public UHoudiniInputActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform CachedInputLandscapeTraqnsform;
    
    UHoudiniInputLandscape();
};

