#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "Engine/EngineTypes.h"
#include "ZurgAttackPointComponent.generated.h"

class AActor;
class UZurgAttackPointComponent;
class AZurgPawnSlave;
class UPrimitiveComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UZurgAttackPointComponent : public USphereComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FZurgAttackPointComponentDelegate, UZurgAttackPointComponent*, _zurgAttackPointComponent, AZurgPawnSlave*, _zurg);
    
    UPROPERTY(BlueprintAssignable)
    FZurgAttackPointComponentDelegate OnZurgAttached;
    
    UPROPERTY(BlueprintAssignable)
    FZurgAttackPointComponentDelegate OnZurgDetached;
    
    UZurgAttackPointComponent();
    UFUNCTION(BlueprintPure)
    AZurgPawnSlave* GetAttachedZurg() const;
    
    UFUNCTION(BlueprintCallable)
    void DetachZurg();
    
    UFUNCTION(BlueprintCallable)
    void AttachZurg(AZurgPawnSlave* _zurg);
    
private:
    UFUNCTION()
    void _OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

