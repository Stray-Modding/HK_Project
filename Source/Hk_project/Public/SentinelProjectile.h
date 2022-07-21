#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Actor.h"
#include "ESentinelProjectileState.h"
#include "UObject/NoExportTypes.h"
#include "SentinelProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class UHierarchicalStateMachine;

UCLASS()
class HK_PROJECT_API ASentinelProjectile : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSentinelProjectileStateChangedDelegate, ESentinelProjectileState, _newState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSentinelProjectileOnHitDelegate, const FHitResult&, _hitResult);
    
    UPROPERTY(BlueprintAssignable)
    FSentinelProjectileStateChangedDelegate FSentinelProjectileStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSentinelProjectileOnHitDelegate FOnProjectileHit;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    USphereComponent* m_projectileSphereColliderComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    UProjectileMovementComponent* m_projectileMovementComponent;
    
private:
    UPROPERTY()
    UHierarchicalStateMachine* m_projectileStateMachine;
    
    UPROPERTY()
    ESentinelProjectileState m_currentSentinelProjectileState;
    
public:
    ASentinelProjectile();
    UFUNCTION(BlueprintCallable)
    void Shoot(FVector _direction);
    
    UFUNCTION(BlueprintCallable)
    void SetMode(ESentinelProjectileState _newMode);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void Projectile_WaitingDestroy_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Projectile_WaitingDestroy_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Projectile_WaitingDestroy_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Projectile_Snapped_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Projectile_Snapped_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Projectile_Snapped_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Projectile_Shooted_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Projectile_Shooted_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Projectile_None_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Projectile_None_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Projectile_None_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Projectile_InAir_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Projectile_InAir_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Projectile_InAir_Enter();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnProjectileHit(FHitResult _hitResult);
    
    UFUNCTION(BlueprintPure)
    FHitResult GetHitResult();
    
    UFUNCTION(BlueprintPure)
    ESentinelProjectileState GetCurrentMode();
    
private:
    UFUNCTION()
    void _OnProjectileHit(const FHitResult& _hitResult);
    
};

