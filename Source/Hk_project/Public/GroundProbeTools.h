#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GroundProbeData.h"
#include "ProbeDirectionData.h"
#include "UObject/NoExportTypes.h"
#include "GroundProbeTools.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UGroundProbeTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGroundProbeTools();
    UFUNCTION(BlueprintCallable)
    static bool GetClosestDirectionData(UPARAM(Ref) FGroundProbeData& _probeData, FVector _origin, FVector _direction, FProbeDirectionData& _outProbeDirectionData, bool _debug);
    
};

