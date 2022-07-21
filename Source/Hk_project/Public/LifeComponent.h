#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LifeComponent.generated.h"

class ULifeComponent;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API ULifeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLifeComponentRevivedDelegate, ULifeComponent*, _lifeComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLifeComponentRegenerationDelegate, ULifeComponent*, _lifeComponent, float, _life);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLifeComponentKilledDelegate, ULifeComponent*, _lifeComponent, AActor*, _killer);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLifeComponenTakeDamagetDelegate, ULifeComponent*, _lifeComponent, AActor*, _damageApplier, float, _damageAmount);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLifeComponenTakeDamagetDelegate OnTakeDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLifeComponentKilledDelegate OnKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLifeComponentRevivedDelegate OnRevived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLifeComponentRegenerationDelegate OnRegeneration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_canTakeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxLife;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_regenerationCoolDownAfterDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_regenerationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRegenerationTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRegenerationPerTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRegenerationCoolDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxLife() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentLife() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTakeDamage() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyDamage(AActor* _damageApplier, float _damageAmount);
    
};

