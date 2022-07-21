#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "JoyAsyncTraceSingleDoneDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FJoyAsyncTraceSingleDone, bool, HasHit, FHitResult, Hit);

