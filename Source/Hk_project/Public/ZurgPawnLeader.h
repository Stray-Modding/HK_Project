#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Pawn.h"
#include "EZurgState.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "SpawningRequest.h"
#include "EZurgLOD.h"
#include "UObject/NoExportTypes.h"
#include "ZurgPawnLeader.generated.h"

class AZurgPawnLeader;
class UPrimitiveComponent;
class UAntiZurgSpotlightComponent;
class AZurgPawnSlave;
class AActor;
class UZurgNewSettings;
class AZurgSpawningBox;
class UNavigationQueryFilter;
class UNoisableComponent;
class UBoxComponent;
class ULightableComponent;
class UStreamingComponent;
class ACatPawn;
class UHierarchicalStateMachine;
class USaveComponent;
class UCanvas;
class AZurgManager;
class ARecastNavMesh;

UCLASS(Blueprintable)
class HK_PROJECT_API AZurgPawnLeader : public APawn {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FZurgLeaderSlaveOnKilledEventDelegate, AZurgPawnLeader*, _zurgLeader, AZurgPawnSlave*, _slave, AActor*, _killer);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FZurgLeaderSlaveEventDelegate, AZurgPawnLeader*, _zurgLeader, AZurgPawnSlave*, _slave);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZurgLeaderEventDelegate, AZurgPawnLeader*, _zurgLeader);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZurgNewSettings* SwarmSettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZurgLeaderEventDelegate OnZurgLeaderActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZurgLeaderEventDelegate OnZurgLeaderDeactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZurgLeaderSlaveEventDelegate OnZurgSlaveSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZurgLeaderSlaveEventDelegate OnZurgSlaveDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZurgLeaderSlaveOnKilledEventDelegate OnZurgSlaveKilled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AZurgPawnSlave> m_slaveClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZurgState m_initialSwarmState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_zurgSpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AZurgSpawningBox* m_spawningBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_spawningRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> m_movementQueryFilterClass;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_visionTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UNoisableComponent* m_noisableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_damagableDetector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULightableComponent* m_lightableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_isAlreadySpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_slaveLeftBeforeSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStreamingComponent* m_streamingComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACatPawn* m_cachedPlayerCatPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_canBeManaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawningRequest> m_spawningRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHierarchicalStateMachine* m_stateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZurgState m_currentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZurgState m_beforeIdleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZurgLOD m_currentLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_swarmCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AZurgPawnSlave*> m_zurgSlaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, int32> m_actorToView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_visibleActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_visionOverlappingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USaveComponent* m_saveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_drawDebug;
    
public:
    AZurgPawnLeader();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StopSwarm() const;
    
protected:
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
    void State_LockedOnTarget_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_LockedOnTarget_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_LockedOnTarget_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Idle_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Idle_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Idle_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Chasing_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Chasing_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void State_Chasing_Enter();
    
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
    void SpawnSlaves(float _duration, int32 _count);
    
    UFUNCTION(BlueprintCallable)
    AZurgPawnSlave* SpawnSlave(float _nearRadius, TSubclassOf<AZurgPawnSlave> _zurgClass, FVector _spawnLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetZurgLOD(EZurgLOD _newZurgLod);
    
    UFUNCTION(BlueprintCallable)
    void SetSwarmCanSee(bool _canSee);
    
    UFUNCTION(BlueprintCallable)
    void SetSwarmCanHearSound(bool _canHearSound);
    
    UFUNCTION(BlueprintCallable)
    void SetState(EZurgState _newState);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool _active);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSlave(AZurgPawnSlave* _slave);
    
    UFUNCTION(BlueprintCallable)
    int32 PushSpawningRequest(int32 _spawnCount, float _duration);
    
    UFUNCTION(BlueprintCallable)
    bool PopSpawningRequest(int32 _id);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnVisionColliderEnterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnVisionColliderEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwarmStopSeeSomething(AActor* _actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwarmSeeSomething(AZurgPawnSlave* _zurgDetector, AActor* _actor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStreamedOut(UStreamingComponent* _streamingComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnStreamedIn(UStreamingComponent* _streamingComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateChanged(EZurgState _newState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSlaveKilled(AZurgPawnSlave* _slave, AActor* _killer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSlaveExitLight(UAntiZurgSpotlightComponent* _light, AZurgPawnSlave* _zurgPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSlaveEnterLight(UAntiZurgSpotlightComponent* _light, AZurgPawnSlave* _zurgPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnSlaveDestroyed(AActor* _slaveDestroyed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHearedNoise(UNoisableComponent* _noiseComponent, FVector _location, AActor* _emitter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDisplayDebug(UCanvas* _canvas);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamagableDetectorEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDamagableDetectorBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    bool MoveSwarmToBox(UBoxComponent* _boxComponent);
    
    UFUNCTION(BlueprintCallable)
    bool MoveSwarmTo(FVector _newLocation, float _randomRadius);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Lod_2_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Lod_2_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Lod_2_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Lod_1_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Lod_1_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Lod_1_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Lod_0_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Lod_0_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Lod_0_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisplayingDebug() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AZurgManager* GetZurgManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetVisibleActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSwarmVisionDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSwarmRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSwarmCenter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EZurgState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpawnedSlaveCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AZurgPawnSlave*> GetSlavesAbleToAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AZurgPawnSlave*> GetSlaves() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlaveCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetReachableMoveToLocation() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetObserverLocation() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARecastNavMesh* GetNavMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UNavigationQueryFilter> GetNavigationQueryFilter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetInitialTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EZurgLOD GetCurrentZurgLOD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetConnectedSlaveCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AZurgPawnSlave* GetClosestSlaveFromLocation(const TArray<AZurgPawnSlave*> _slaves, FVector _location, float _radius) const;
    
    UFUNCTION(BlueprintCallable)
    void FindZurgsCloseFromThisLocation(UPARAM(Ref) TArray<AZurgPawnSlave*>& _closestSlave, FVector _location, float _distance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindZurgCountCloseFromThisLocation(FVector _location, float _distance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindSlavesInSpecificState(UPARAM(Ref) TArray<AZurgPawnSlave*>& _slaves, EZurgState _state) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Deactivated_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Deactivated_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Deactivated_Enter();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSwarmSee() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSwarmHearSound() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelSpawningRequests();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnStreamOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnStreamIn();
    
    UFUNCTION(BlueprintCallable)
    void AddSlave(AZurgPawnSlave* _newSlave);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Activated_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Activated_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Activated_Enter();
    
private:
    UFUNCTION(BlueprintCallable)
    void _EditorTick(float _deltaTime);
    
    UFUNCTION(BlueprintCallable)
    void _BeforeSaved(USaveComponent* _saveComponent);
    
    UFUNCTION(BlueprintCallable)
    void _AfterLoaded(USaveComponent* _saveComponent);
    
};

