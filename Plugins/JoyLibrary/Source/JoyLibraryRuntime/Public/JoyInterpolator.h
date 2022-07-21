#pragma once
#include "CoreMinimal.h"
#include "InterpolatorCompleteOutputPinDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "InterpolatorTickOutputPinDelegate.h"
#include "JoyInterpolator.generated.h"

UCLASS()
class JOYLIBRARYRUNTIME_API UJoyInterpolator : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable)
    FInterpolatorTickOutputPin Tick;
    
    UPROPERTY(BlueprintAssignable)
    FInterpolatorCompleteOutputPin Complete;
    
public:
    UJoyInterpolator();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
};

