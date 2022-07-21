#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LifeComponent.generated.h"

class ULifeComponent;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API ULifeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLifeComponentRevivedDelegate, ULifeComponent*, _lifeComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLifeComponentRegenerationDelegate, ULifeComponent*, _lifeComponent, float, _life);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLifeComponentKilledDelegate, ULifeComponent*, _lifeComponent, AActor*, _killer);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLifeComponenTakeDamagetDelegate, ULifeComponent*, _lifeComponent, AActor*, _damageApplier, float, _damageAmount);
    
    UPROPERTY(BlueprintAssignable)
    FLifeComponenTakeDamagetDelegate OnTakeDamage;
    
    UPROPERTY(BlueprintAssignable)
    FLifeComponentKilledDelegate OnKilled;
    
    UPROPERTY(BlueprintAssignable)
    FLifeComponentRevivedDelegate OnRevived;
    
    UPROPERTY(BlueprintAssignable)
    FLifeComponentRegenerationDelegate OnRegeneration;
    
private:
    UPROPERTY(EditAnywhere)
    bool m_canTakeDamage;
    
    UPROPERTY(EditAnywhere)
    float m_maxLife;
    
    UPROPERTY(EditAnywhere)
    float m_regenerationCoolDownAfterDamage;
    
    UPROPERTY(EditAnywhere)
    float m_regenerationTime;
    
    UPROPERTY(EditAnywhere)
    float m_regenerationPerTime;
    
public:
    ULifeComponent();
    UFUNCTION(BlueprintCallable)
    void SetTakeDamage(bool _canTakeDamage);
    
    UFUNCTION(BlueprintCallable)
    void SetRegenerationTime(float _lifeRegenerationTime);
    
    UFUNCTION(BlueprintCallable)
    void SetRegenerationPerTime(float _lifeRegenerationPerTime);
    
    UFUNCTION(BlueprintCallable)
    void SetRegenerationCoolDown(float _lifeRegenerationCoolDown);
    
    UFUNCTION(BlueprintCallable)
    void Reset(float _life);
    
    UFUNCTION(BlueprintCallable)
    bool IsDamageAmountFatal(float _damageAmount);
    
    UFUNCTION(BlueprintPure)
    bool IsAlive();
    
    UFUNCTION(BlueprintPure)
    float GetRegenerationTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetRegenerationPerTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetRegenerationCoolDown() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxLife() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentLife() const;
    
    UFUNCTION(BlueprintPure)
    bool CanTakeDamage() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyDamage(AActor* _damageApplier, float _damageAmount);
    
};

