#pragma once
#include "CoreMinimal.h"
#include "InterpolatorTickOutputPinDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInterpolatorTickOutputPin, float, Ratio);

