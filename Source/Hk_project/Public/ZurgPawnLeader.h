#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "EZurgLOD.h"
#include "EZurgState.h"
#include "Engine/EngineTypes.h"
#include "SpawningRequest.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "ZurgPawnLeader.generated.h"

class UAntiZurgSpotlightComponent;
class AZurgPawnSlave;
class UBoxComponent;
class AActor;
class AZurgPawnLeader;
class UZurgNewSettings;
class UStreamingComponent;
class AZurgSpawningBox;
class UNavigationQueryFilter;
class UNoisableComponent;
class ULightableComponent;
class UPrimitiveComponent;
class ACatPawn;
class UHierarchicalStateMachine;
class USaveComponent;
class UCanvas;
class AZurgManager;
class ARecastNavMesh;

UCLASS()
class HK_PROJECT_API AZurgPawnLeader : public APawn {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FZurgLeaderSlaveOnKilledEventDelegate, AZurgPawnLeader*, _zurgLeader, AZurgPawnSlave*, _slave, AActor*, _killer);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FZurgLeaderSlaveEventDelegate, AZurgPawnLeader*, _zurgLeader, AZurgPawnSlave*, _slave);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZurgLeaderEventDelegate, AZurgPawnLeader*, _zurgLeader);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UZurgNewSettings* SwarmSettings;
    
    UPROPERTY(BlueprintAssignable)
    FZurgLeaderEventDelegate OnZurgLeaderActivated;
    
    UPROPERTY(BlueprintAssignable)
    FZurgLeaderEventDelegate OnZurgLeaderDeactivated;
    
    UPROPERTY(BlueprintAssignable)
    FZurgLeaderSlaveEventDelegate OnZurgSlaveSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FZurgLeaderSlaveEventDelegate OnZurgSlaveDestroyed;
    
    UPROPERTY(BlueprintAssignable)
    FZurgLeaderSlaveOnKilledEventDelegate OnZurgSlaveKilled;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AZurgPawnSlave> m_slaveClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EZurgState m_initialSwarmState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_zurgSpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AZurgSpawningBox* m_spawningBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_spawningRadius;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> m_movementQueryFilterClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_visionTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleDefaultsOnly)
    UNoisableComponent* m_noisableComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* m_damagableDetector;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    ULightableComponent* m_lightableComponent;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool m_isAlreadySpawned;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    int32 m_slaveLeftBeforeSave;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UStreamingComponent* m_streamingComponent;
    
private:
    UPROPERTY()
    ACatPawn* m_cachedPlayerCatPawn;
    
    UPROPERTY(EditAnywhere)
    bool m_canBeManaged;
    
    UPROPERTY()
    TArray<FSpawningRequest> m_spawningRequests;
    
    UPROPERTY(Transient)
    UHierarchicalStateMachine* m_stateMachine;
    
    UPROPERTY()
    EZurgState m_currentState;
    
    UPROPERTY()
    EZurgState m_beforeIdleState;
    
    UPROPERTY()
    EZurgLOD m_currentLOD;
    
    UPROPERTY()
    FVector m_swarmCenter;
    
    UPROPERTY()
    TArray<AZurgPawnSlave*> m_zurgSlaves;
    
    UPROPERTY()
    TMap<AActor*, int32> m_actorToView;
    
    UPROPERTY()
    TArray<AActor*> m_visibleActors;
    
    UPROPERTY()
    TArray<AActor*> m_visionOverlappingActors;
    
    UPROPERTY(EditAnywhere, Export)
    USaveComponent* m_saveComponent;
    
    UPROPERTY(EditAnywhere)
    bool m_drawDebug;
    
public:
    AZurgPawnLeader();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StopSwarm() const;
    
protected:
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
    void State_LockedOnTarget_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void State_LockedOnTarget_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_LockedOnTarget_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Idle_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Idle_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Idle_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Chasing_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Chasing_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void State_Chasing_Enter();
    
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
    UFUNCTION()
    void OnVisionColliderEnterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void OnVisionColliderEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSwarmStopSeeSomething(AActor* _actor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSwarmSeeSomething(AZurgPawnSlave* _zurgDetector, AActor* _actor);
    
private:
    UFUNCTION()
    void OnStreamedOut(UStreamingComponent* _streamingComponent);
    
    UFUNCTION()
    void OnStreamedIn(UStreamingComponent* _streamingComponent);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnStateChanged(EZurgState _newState);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnSlaveKilled(AZurgPawnSlave* _slave, AActor* _killer);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnSlaveExitLight(UAntiZurgSpotlightComponent* _light, AZurgPawnSlave* _zurgPawn);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnSlaveEnterLight(UAntiZurgSpotlightComponent* _light, AZurgPawnSlave* _zurgPawn);
    
    UFUNCTION()
    void OnSlaveDestroyed(AActor* _slaveDestroyed);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnHearedNoise(UNoisableComponent* _noiseComponent, FVector _location, AActor* _emitter);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDisplayDebug(UCanvas* _canvas);
    
protected:
    UFUNCTION()
    void OnDamagableDetectorEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnDamagableDetectorBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    bool MoveSwarmToBox(UBoxComponent* _boxComponent);
    
    UFUNCTION(BlueprintCallable)
    bool MoveSwarmTo(FVector _newLocation, float _randomRadius);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void Lod_2_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Lod_2_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Lod_2_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Lod_1_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Lod_1_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Lod_1_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Lod_0_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Lod_0_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Lod_0_Enter();
    
    UFUNCTION(BlueprintPure)
    bool IsDisplayingDebug() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintPure)
    AZurgManager* GetZurgManager() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetVisibleActors();
    
    UFUNCTION(BlueprintPure)
    float GetSwarmVisionDistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetSwarmRadius() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetSwarmCenter() const;
    
    UFUNCTION(BlueprintPure)
    EZurgState GetState() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSpawnedSlaveCount() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AZurgPawnSlave*> GetSlavesAbleToAttack() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AZurgPawnSlave*> GetSlaves() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSlaveCount();
    
    UFUNCTION(BlueprintPure)
    FVector GetReachableMoveToLocation() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    FVector GetObserverLocation() const;
    
public:
    UFUNCTION(BlueprintPure)
    ARecastNavMesh* GetNavMesh() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UNavigationQueryFilter> GetNavigationQueryFilter() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetInitialTransform() const;
    
    UFUNCTION(BlueprintPure)
    EZurgLOD GetCurrentZurgLOD() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetConnectedSlaveCount() const;
    
    UFUNCTION(BlueprintPure)
    AZurgPawnSlave* GetClosestSlaveFromLocation(const TArray<AZurgPawnSlave*> _slaves, FVector _location, float _radius) const;
    
    UFUNCTION(BlueprintCallable)
    void FindZurgsCloseFromThisLocation(UPARAM(Ref) TArray<AZurgPawnSlave*>& _closestSlave, FVector _location, float _distance);
    
    UFUNCTION(BlueprintPure)
    int32 FindZurgCountCloseFromThisLocation(FVector _location, float _distance);
    
    UFUNCTION(BlueprintPure)
    void FindSlavesInSpecificState(UPARAM(Ref) TArray<AZurgPawnSlave*>& _slaves, EZurgState _state) const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void Deactivated_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Deactivated_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Deactivated_Enter();
    
public:
    UFUNCTION(BlueprintPure)
    bool CanSwarmSee() const;
    
    UFUNCTION(BlueprintPure)
    bool CanSwarmHearSound() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelSpawningRequests();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintOnStreamOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintOnStreamIn();
    
    UFUNCTION(BlueprintCallable)
    void AddSlave(AZurgPawnSlave* _newSlave);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void Activated_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Activated_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Activated_Enter();
    
private:
    UFUNCTION()
    void _EditorTick(float _deltaTime);
    
    UFUNCTION()
    void _BeforeSaved(USaveComponent* _saveComponent);
    
    UFUNCTION()
    void _AfterLoaded(USaveComponent* _saveComponent);
    
};

