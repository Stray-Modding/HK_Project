#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "Engine/EngineTypes.h"
#include "ZurgAttackPointComponent.generated.h"

class AActor;
class UZurgAttackPointComponent;
class AZurgPawnSlave;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UZurgAttackPointComponent : public USphereComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FZurgAttackPointComponentDelegate, UZurgAttackPointComponent*, _zurgAttackPointComponent, AZurgPawnSlave*, _zurg);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZurgAttackPointComponentDelegate OnZurgAttached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZurgAttackPointComponentDelegate OnZurgDetached;
    
    UZurgAttackPointComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AZurgPawnSlave* GetAttachedZurg() const;
    
    UFUNCTION(BlueprintCallable)
    void DetachZurg();
    
    UFUNCTION(BlueprintCallable)
    void AttachZurg(AZurgPawnSlave* _zurg);
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

