#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "JoyLibraryRuntime/Manager.h"
#include "SlaveKillRequest.h"
#include "LightToSlaveTrace.h"
#include "LightToLightableTrace.h"
#include "SlaveTick.h"
#include "SlaveSpawnRequest.h"
#include "LeaderTick.h"
#include "ZurgManager.generated.h"

class UHKGameInstance;
class ARecastNavMesh;
class UAntiZurgSpotlightComponent;
class AZurgPawnSlave;
class AZurgPawnLeader;
class ACatPawn;
class UAnimationSharingManager;
class UAnimationSharingSetup;
class UAntiZurgLightableComponent;

UCLASS(Abstract)
class HK_PROJECT_API AZurgManager : public AManager {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZurgManagerSlaveDelegate, AZurgPawnSlave*, _newZurg);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZurgManagerLeaderDelegate, AZurgPawnLeader*, _zurgLeader);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_leaderDeactivationDistance;
    
    UPROPERTY(BlueprintAssignable)
    FZurgManagerLeaderDelegate OnZurgLeaderSpawnedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FZurgManagerLeaderDelegate OnZurgLeaderDestroyedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FZurgManagerLeaderDelegate OnZurgLeaderActivatedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FZurgManagerLeaderDelegate OnZurgLeaderDeactivatedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FZurgManagerSlaveDelegate OnZurgSlaveSpawnedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FZurgManagerSlaveDelegate OnZurgSlaveDestroyedDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AZurgPawnSlave> m_slaveBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_maxSlaveTicksPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_slaveLODDistanceScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_slavePoolInitialSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_maxActivatedZurgCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_maxSlaveSpawnPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_maxLeaderTicksPerFrame;
    
private:
    UPROPERTY(EditAnywhere)
    float m_deactivationDistanceHysteresis;
    
    UPROPERTY()
    ARecastNavMesh* m_navMesh;
    
    UPROPERTY()
    UHKGameInstance* m_hkGameInstance;
    
    UPROPERTY()
    ACatPawn* m_catPawn;
    
    UPROPERTY()
    UAnimationSharingManager* m_animationSharingManager;
    
    UPROPERTY(EditAnywhere)
    UAnimationSharingSetup* m_animationSharingSetup;
    
    UPROPERTY(Export, Transient)
    TArray<UAntiZurgSpotlightComponent*> m_antiZurgLights;
    
    UPROPERTY(Export, Transient)
    TArray<UAntiZurgLightableComponent*> m_antiZurgLightables;
    
    UPROPERTY(Transient)
    TArray<FLightToSlaveTrace> m_lightToSlaveTraces;
    
    UPROPERTY(Transient)
    TArray<FLightToLightableTrace> m_lightToLightableTraces;
    
    UPROPERTY(Transient)
    TArray<FSlaveTick> m_slaveTickList;
    
    UPROPERTY(Transient)
    TArray<FLeaderTick> m_leaderTickList;
    
    UPROPERTY(Transient)
    TArray<AZurgPawnSlave*> m_slavePool;
    
    UPROPERTY(Transient)
    TArray<FSlaveSpawnRequest> m_slaveSpawnRequestQueue;
    
    UPROPERTY(Transient)
    TArray<FSlaveKillRequest> m_slaveKillQueue;
    
public:
    AZurgManager();
    UFUNCTION(BlueprintCallable)
    void SetMaxActivatedZurgCount(int32 _newMaxCount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnZurgSpawnedEvent(AZurgPawnSlave* _zurgSlave);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnZurgSlaveDeactivatedEvent(AZurgPawnSlave* _zurgSlave);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnZurgSlaveActivatedEvent(AZurgPawnSlave* _zurgSlave);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnZurgLeaderSpawnedEvent(AZurgPawnLeader* _zurgLeader);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnZurgLeaderDestroyedEvent(AZurgPawnLeader* _zurgLeader);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnZurgLeaderDeactivatedEvent(AZurgPawnLeader* _zurgLeader);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnZurgLeaderActivatedEvent(AZurgPawnLeader* _zurgLeader);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnZurgDestroyedEvent(AZurgPawnSlave* _zurgSlave);
    
    UFUNCTION(BlueprintPure)
    ARecastNavMesh* GetZurgsNavMesh() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetZurgSlaveCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxActivatedZurgCount() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AZurgPawnLeader*> GetLeaders() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetActivatedZurgSlaveCount() const;
    
};

