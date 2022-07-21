#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "JoyAsyncTraceMultiDoneDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FJoyAsyncTraceMultiDone, bool, HasHit, const TArray<FHitResult>&, Hits);

