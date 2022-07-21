#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ESentinelProjectileState.h"
#include "UObject/NoExportTypes.h"
#include "SentinelProjectile.generated.h"

class USphereComponent;
class UHierarchicalStateMachine;
class UProjectileMovementComponent;

UCLASS(Blueprintable)
class HK_PROJECT_API ASentinelProjectile : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSentinelProjectileStateChangedDelegate, ESentinelProjectileState, _newState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSentinelProjectileOnHitDelegate, const FHitResult&, _hitResult);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSentinelProjectileStateChangedDelegate FSentinelProjectileStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSentinelProjectileOnHitDelegate FOnProjectileHit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* m_projectileSphereColliderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* m_projectileMovementComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHierarchicalStateMachine* m_projectileStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESentinelProjectileState m_currentSentinelProjectileState;
    
public:
    ASentinelProjectile();
    UFUNCTION(BlueprintCallable)
    void Shoot(FVector _direction);
    
    UFUNCTION(BlueprintCallable)
    void SetMode(ESentinelProjectileState _newMode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Projectile_WaitingDestroy_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Projectile_WaitingDestroy_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Projectile_WaitingDestroy_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Projectile_Snapped_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Projectile_Snapped_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Projectile_Snapped_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Projectile_Shooted_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Projectile_Shooted_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Projectile_None_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Projectile_None_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Projectile_None_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Projectile_InAir_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Projectile_InAir_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Projectile_InAir_Enter();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProjectileHit(FHitResult _hitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHitResult GetHitResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESentinelProjectileState GetCurrentMode();
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnProjectileHit(const FHitResult& _hitResult);
    
};

