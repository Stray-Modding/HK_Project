#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "BreakableDelay.generated.h"

UCLASS(BlueprintType)
class JOYLIBRARYRUNTIME_API UBreakableDelay : public UObject {
    GENERATED_BODY()
public:
    UBreakableDelay();
    UFUNCTION(BlueprintCallable)
    static bool InternalBreakBreakableDelay(UObject* _worldContextObject, int32 _uuid);
    
    UFUNCTION(BlueprintCallable)
    static int32 InternalBreakableDelay(UObject* _worldContextObject, float _duration, FLatentActionInfo _latentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void Delay(UObject* _worldContextObject, float _duration, FLatentActionInfo _latentInfo);
    
};

