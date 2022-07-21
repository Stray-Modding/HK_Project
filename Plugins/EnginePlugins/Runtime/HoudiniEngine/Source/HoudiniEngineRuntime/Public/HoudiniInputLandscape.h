#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputActor.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniInputLandscape.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputLandscape : public UHoudiniInputActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CachedInputLandscapeTraqnsform;
    
    UHoudiniInputLandscape();
};

