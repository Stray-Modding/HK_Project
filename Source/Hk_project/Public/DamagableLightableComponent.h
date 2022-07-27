#pragma once
#include "CoreMinimal.h"
#include "LightableComponent.h"
#include "DamagableLightableComponent.generated.h"

class UDamagableLightableComponent;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UDamagableLightableComponent : public ULightableComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDamagableLightableDelegate, UDamagableLightableComponent*, _damagableLightableComponent, AActor*, _damageApplier, float, _damage);
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamagableLightableDelegate OnTakeDamage;
    
public:
    UDamagableLightableComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTakingDamage() const;
    
};

