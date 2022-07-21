#pragma once
#include "CoreMinimal.h"
#include "InterpolatorTickOutputPinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInterpolatorTickOutputPin, float, Ratio);

