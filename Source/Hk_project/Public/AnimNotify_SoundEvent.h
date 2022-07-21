#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_SoundEvent.generated.h"

UCLASS(CollapseCategories)
class HK_PROJECT_API UAnimNotify_SoundEvent : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName EventName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Velocity;
    
    UAnimNotify_SoundEvent();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetVelocity(float _velocity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetEventName(FName _eventName) const;
    
};

