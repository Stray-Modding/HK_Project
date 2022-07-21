#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Character.h"
#include "EZurgBehavior.h"
#include "UObject/NoExportTypes.h"
#include "EZurgState.h"
#include "Engine/EngineTypes.h"
#include "ZurgPawnSlave.generated.h"

class AZurgPawnSlave;
class AActor;
class ULifeComponent;
class UDamagableLightableComponent;
class USphereComponent;
class UZurgNewSettings;
class UHierarchicalStateMachine;
class UNavigationQueryFilter;
class ARecastNavMesh;
class UZurgCharacterMovementComponent;
class AZurgPawnLeader;
class ULightableComponent;
class UAntiZurgSpotlightComponent;
class UCanvas;
class ACatPawn;
class USkeletalMeshComponent;
class UZurgAttackPointComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class HK_PROJECT_API AZurgPawnSlave : public ACharacter {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FZurgOnKilledDelegate, AZurgPawnSlave*, _zurgPawn, AActor*, _killer);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZurgExitGrabbingDelegate, AZurgPawnSlave*, _zurgPawn);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZurgOnKilledDelegate OnKilledDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZurgExitGrabbingDelegate OnZurgExitGrabbing;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULifeComponent* m_lifeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* m_damagableSphereDetector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamagableLightableComponent* m_damagableLightableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> m_deathFxActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minimalLightIntensityToAvoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxAccelerationTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxWalkSpeedTarget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZurgNewSettings* m_currentZurgSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHierarchicalStateMachine* m_stateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> m_movementQueryFilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UZurgCharacterMovementComponent* m_zurgMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_currentMoveToLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* m_proximitySphereDetector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* m_attachOnActorSphereCollider;
    
public:
    AZurgPawnSlave();
    UFUNCTION(BlueprintCallable)
    void StopMovement();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_UnStunned_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_UnStunned_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_UnderLight_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_UnderLight_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_UnderLight_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Stunned_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Stunned_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Stunned_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Sleeping_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Sleeping_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Sleeping_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Routine_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Routine_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Routine_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_OnInterestPoint_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_OnInterestPoint_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_OnInterestPoint_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_LockedOnTarget_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_LockedOnTarget_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_LockedOnTarget_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Interested_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Interested_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Interested_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Idle_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Idle_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Idle_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Grabbing_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Grabbing_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Grabbing_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Falling_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Falling_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Falling_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Ejected_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Ejected_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Ejected_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Chasing_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Chasing_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Chasing_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Attacking_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Attacking_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Attacking_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Angry_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Angry_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Angry_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Alerted_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Alerted_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZurgSettingsChanged(UZurgNewSettings* _newZurgSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnZurgLostLeader();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnZurgFoundLeader(AZurgPawnLeader* _leader);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateChanged(EZurgState _newState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnProximityExitDetection(AActor* _detectedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnProximityEnterDetection(AActor* _detectedActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitSpotLight(ULightableComponent* _lightable, UAntiZurgSpotlightComponent* _spotlight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnterInSpotLight(ULightableComponent* _lightable, UAntiZurgSpotlightComponent* _spotlight);
    
    UFUNCTION(BlueprintCallable)
    void OnEnlightenEnd(ULightableComponent* _lightable, UAntiZurgSpotlightComponent* _spotlight);
    
    UFUNCTION(BlueprintCallable)
    void OnEnlightenBegin(ULightableComponent* _lightable, UAntiZurgSpotlightComponent* _spotlight);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDisplayDebug(UCanvas* _canvas);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDetachedFromCat(ACatPawn* _catPawn, USkeletalMeshComponent* _catSkeletalMesh, FName _socketName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDetachedFromAttackPoint(UZurgAttackPointComponent* _zurgAttackPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttackPoint(FVector _pointToAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttack(AActor* _actorToAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttachOnAttackPoint(UZurgAttackPointComponent* _zurgAttackPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttachOnActorColliderEndOverlap(AActor* _otherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttachOnActorColliderBeginOverlap(AActor* _otherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttachedOnCat(ACatPawn* _catPawn, USkeletalMeshComponent* _catSkeletalMesh, FName _socketName);
    
    UFUNCTION(BlueprintCallable)
    void MoveToAtPreciseFrame(int32 _moveAtThisFrame, FVector _newLocation, float _randomRadius, float _acceptanceRadius);
    
    UFUNCTION(BlueprintCallable)
    bool MoveTo(FVector _newLocation, float _randomRadius, float _acceptanceRadius);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Lod_2_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Lod_2_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Lod_1_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Lod_1_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Lod_0_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Lod_0_Enter();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWalking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnderAntiZurgSpotlight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStunned() const;
    
    UFUNCTION(BlueprintCallable)
    static bool IsSlaveValid(const AZurgPawnSlave* _slave);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKamikaze();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnectedToLeader();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttacking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EZurgState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARecastNavMesh* GetNavMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULifeComponent* GetLifeComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AZurgPawnLeader* GetLeader();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UZurgNewSettings* GetCurrentZurgSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentMoveToLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EZurgBehavior GetBehavior() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DestroySlave();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Deactivated_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Deactivated_Enter();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSenseProximity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGrab() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAttack() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Behavior_None_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Behavior_None_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Behavior_Escaping_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Behavior_Escaping_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Behavior_Escaping_Enter();
    
public:
    UFUNCTION(BlueprintCallable)
    bool AttackPoint(FVector _pointToAttack);
    
    UFUNCTION(BlueprintCallable)
    FVector Attack(AActor* _actorToAttack);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyDamage(AActor* _damageApplier, float _damageAmount);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Activated_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Activated_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void _OnTakeDamage(ULifeComponent* _lifeComponent, AActor* _damageApplier, float _damageAmount);
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnProximityColliderEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void _OnProximityColliderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void _OnLifeRegeneration(ULifeComponent* _lifeComponent, float _life);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void _OnKilled(ULifeComponent* _lifeComponent, AActor* _killer);
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnAttachOnActorColliderEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void _OnAttachOnActorColliderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

