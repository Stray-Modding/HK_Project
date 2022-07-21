#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Character.h"
#include "UObject/NoExportTypes.h"
#include "EZurgBehavior.h"
#include "EZurgState.h"
#include "Engine/EngineTypes.h"
#include "ZurgPawnSlave.generated.h"

class AActor;
class UCanvas;
class ULifeComponent;
class UAntiZurgSpotlightComponent;
class AZurgPawnSlave;
class USphereComponent;
class UDamagableLightableComponent;
class UZurgNewSettings;
class UHierarchicalStateMachine;
class UNavigationQueryFilter;
class UZurgCharacterMovementComponent;
class AZurgPawnLeader;
class ULightableComponent;
class UPrimitiveComponent;
class ACatPawn;
class USkeletalMeshComponent;
class UZurgAttackPointComponent;
class ARecastNavMesh;

UCLASS()
class HK_PROJECT_API AZurgPawnSlave : public ACharacter {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FZurgOnKilledDelegate, AZurgPawnSlave*, _zurgPawn, AActor*, _killer);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZurgExitGrabbingDelegate, AZurgPawnSlave*, _zurgPawn);
    
    UPROPERTY(BlueprintAssignable)
    FZurgOnKilledDelegate OnKilledDelegate;
    
    UPROPERTY()
    FZurgExitGrabbingDelegate OnZurgExitGrabbing;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    ULifeComponent* m_lifeComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* m_damagableSphereDetector;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDamagableLightableComponent* m_damagableLightableComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> m_deathFxActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_minimalLightIntensityToAvoid;
    
    UPROPERTY(BlueprintReadWrite)
    float m_maxAccelerationTarget;
    
    UPROPERTY(BlueprintReadWrite)
    float m_maxWalkSpeedTarget;
    
private:
    UPROPERTY(EditAnywhere)
    UZurgNewSettings* m_currentZurgSettings;
    
    UPROPERTY(Transient)
    UHierarchicalStateMachine* m_stateMachine;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> m_movementQueryFilterClass;
    
    UPROPERTY(Instanced)
    UZurgCharacterMovementComponent* m_zurgMovementComponent;
    
    UPROPERTY()
    FVector m_currentMoveToLocation;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* m_proximitySphereDetector;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* m_attachOnActorSphereCollider;
    
public:
    AZurgPawnSlave();
    UFUNCTION(BlueprintCallable)
    void StopMovement();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void State_UnStunned_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_UnStunned_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_UnderLight_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void State_UnderLight_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_UnderLight_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Stunned_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Stunned_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Stunned_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Sleeping_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Sleeping_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Sleeping_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Routine_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Routine_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Routine_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_OnInterestPoint_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void State_OnInterestPoint_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_OnInterestPoint_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_LockedOnTarget_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void State_LockedOnTarget_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_LockedOnTarget_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Interested_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Interested_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Interested_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Idle_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Idle_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Idle_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Grabbing_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Grabbing_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Grabbing_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Falling_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Falling_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Falling_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Ejected_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Ejected_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Ejected_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Chasing_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Chasing_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Chasing_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Attacking_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Attacking_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Attacking_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Angry_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Angry_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Angry_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Alerted_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Alerted_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Alerted_Enter();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetZurgSettings(UZurgNewSettings* _newZurgSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetStunned(bool _stun);
    
    UFUNCTION(BlueprintCallable)
    void SetStateDelayed(EZurgState _newState, float _fuzzyDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetState(EZurgState _newState);
    
    UFUNCTION(BlueprintCallable)
    void SetLife(int32 _newLife);
    
    UFUNCTION(BlueprintCallable)
    bool SetLeaderZurgSettings();
    
    UFUNCTION(BlueprintCallable)
    void SetLeader(AZurgPawnLeader* _newLeader);
    
    UFUNCTION(BlueprintCallable)
    void SetKamikaze(bool _isKamikaze);
    
    UFUNCTION(BlueprintCallable)
    void SetConnectedToLeader(bool _connected);
    
    UFUNCTION(BlueprintCallable)
    void SetCanSenseProximity(bool _enableProximitySense);
    
    UFUNCTION(BlueprintCallable)
    void SetCanGrab(bool _canGrab);
    
    UFUNCTION(BlueprintCallable)
    void SetCanAttack(bool _canAttack);
    
    UFUNCTION(BlueprintCallable)
    void SetBehavior(EZurgBehavior _newBehavior);
    
    UFUNCTION(BlueprintCallable)
    void RequestLeaderConnection();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnZurgSettingsChanged(UZurgNewSettings* _newZurgSettings);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnZurgLostLeader();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnZurgFoundLeader(AZurgPawnLeader* _leader);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnStateChanged(EZurgState _newState);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnProximityExitDetection(AActor* _detectedActor);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnProximityEnterDetection(AActor* _detectedActor);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnExitSpotLight(ULightableComponent* _lightable, UAntiZurgSpotlightComponent* _spotlight);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnEnterInSpotLight(ULightableComponent* _lightable, UAntiZurgSpotlightComponent* _spotlight);
    
    UFUNCTION()
    void OnEnlightenEnd(ULightableComponent* _lightable, UAntiZurgSpotlightComponent* _spotlight);
    
    UFUNCTION()
    void OnEnlightenBegin(ULightableComponent* _lightable, UAntiZurgSpotlightComponent* _spotlight);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnDisplayDebug(UCanvas* _canvas);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnDetachedFromCat(ACatPawn* _catPawn, USkeletalMeshComponent* _catSkeletalMesh, FName _socketName);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDetachedFromAttackPoint(UZurgAttackPointComponent* _zurgAttackPoint);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnAttackPoint(FVector _pointToAttack);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnAttack(AActor* _actorToAttack);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnAttachOnAttackPoint(UZurgAttackPointComponent* _zurgAttackPoint);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAttachOnActorColliderEndOverlap(AActor* _otherActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAttachOnActorColliderBeginOverlap(AActor* _otherActor);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnAttachedOnCat(ACatPawn* _catPawn, USkeletalMeshComponent* _catSkeletalMesh, FName _socketName);
    
    UFUNCTION(BlueprintCallable)
    void MoveToAtPreciseFrame(int32 _moveAtThisFrame, FVector _newLocation, float _randomRadius, float _acceptanceRadius);
    
    UFUNCTION(BlueprintCallable)
    bool MoveTo(FVector _newLocation, float _randomRadius, float _acceptanceRadius);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void Lod_2_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Lod_2_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Lod_1_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Lod_1_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Lod_0_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Lod_0_Enter();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsWalking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUnderAntiZurgSpotlight() const;
    
    UFUNCTION(BlueprintPure)
    bool IsStunned() const;
    
    UFUNCTION(BlueprintCallable)
    static bool IsSlaveValid(const AZurgPawnSlave* _slave);
    
    UFUNCTION(BlueprintPure)
    bool IsKamikaze();
    
    UFUNCTION(BlueprintPure)
    bool IsConnectedToLeader();
    
    UFUNCTION(BlueprintPure)
    bool IsAttacking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintPure)
    EZurgState GetState() const;
    
    UFUNCTION(BlueprintPure)
    ARecastNavMesh* GetNavMesh() const;
    
    UFUNCTION(BlueprintPure)
    ULifeComponent* GetLifeComponent() const;
    
    UFUNCTION(BlueprintPure)
    AZurgPawnLeader* GetLeader();
    
    UFUNCTION(BlueprintPure)
    UZurgNewSettings* GetCurrentZurgSettings() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCurrentMoveToLocation() const;
    
    UFUNCTION(BlueprintPure)
    EZurgBehavior GetBehavior() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DestroySlave();
    
    UFUNCTION(BlueprintNativeEvent)
    void Deactivated_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Deactivated_Enter();
    
public:
    UFUNCTION(BlueprintPure)
    bool CanSenseProximity() const;
    
    UFUNCTION(BlueprintPure)
    bool CanMove() const;
    
    UFUNCTION(BlueprintPure)
    bool CanGrab() const;
    
    UFUNCTION(BlueprintPure)
    bool CanAttack() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void Behavior_None_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Behavior_None_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Behavior_Escaping_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Behavior_Escaping_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Behavior_Escaping_Enter();
    
public:
    UFUNCTION(BlueprintCallable)
    bool AttackPoint(FVector _pointToAttack);
    
    UFUNCTION(BlueprintCallable)
    FVector Attack(AActor* _actorToAttack);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyDamage(AActor* _damageApplier, float _damageAmount);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void Activated_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Activated_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void _OnTakeDamage(ULifeComponent* _lifeComponent, AActor* _damageApplier, float _damageAmount);
    
private:
    UFUNCTION()
    void _OnProximityColliderEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void _OnProximityColliderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void _OnLifeRegeneration(ULifeComponent* _lifeComponent, float _life);
    
    UFUNCTION(BlueprintNativeEvent)
    void _OnKilled(ULifeComponent* _lifeComponent, AActor* _killer);
    
private:
    UFUNCTION()
    void _OnAttachOnActorColliderEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void _OnAttachOnActorColliderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

