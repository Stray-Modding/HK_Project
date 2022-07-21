#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "JoyAsyncTraceAction.generated.h"

UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API UJoyAsyncTraceAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UJoyAsyncTraceAction();
};

