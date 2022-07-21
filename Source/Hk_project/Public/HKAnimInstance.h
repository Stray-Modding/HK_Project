#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "LookAtAnimationState.h"
#include "UObject/NoExportTypes.h"
#include "HKAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class HK_PROJECT_API UHKAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UHKAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSoundEvent(FName Name, float Velocity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator FindLookAtRotator(UPARAM(Ref) FLookAtAnimationState& _lookAtState, bool& _enable, bool _lookAtEnable, FVector _lookAtLocation, float _angleLimit, float _hysteresis, int32 _virtualBoneBaseEffector, int32 _virtualBoneEndEffector, bool& _isInSight, float _speed);
    
};

