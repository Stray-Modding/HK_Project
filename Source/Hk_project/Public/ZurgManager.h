#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Manager.h"
#include "LightToSlaveTrace.h"
#include "LightToLightableTrace.h"
#include "SlaveTick.h"
#include "SlaveSpawnRequest.h"
#include "LeaderTick.h"
#include "SlaveKillRequest.h"
#include "ZurgManager.generated.h"

class UHKGameInstance;
class AZurgPawnLeader;
class ACatPawn;
class AZurgPawnSlave;
class ARecastNavMesh;
class UAnimationSharingManager;
class UAnimationSharingSetup;
class UAntiZurgSpotlightComponent;
class UAntiZurgLightableComponent;

UCLASS(Abstract, Blueprintable)
class HK_PROJECT_API AZurgManager : public AManager {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZurgManagerSlaveDelegate, AZurgPawnSlave*, _newZurg);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZurgManagerLeaderDelegate, AZurgPawnLeader*, _zurgLeader);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_leaderDeactivationDistance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZurgManagerLeaderDelegate OnZurgLeaderSpawnedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZurgManagerLeaderDelegate OnZurgLeaderDestroyedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZurgManagerLeaderDelegate OnZurgLeaderActivatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZurgManagerLeaderDelegate OnZurgLeaderDeactivatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZurgManagerSlaveDelegate OnZurgSlaveSpawnedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZurgManagerSlaveDelegate OnZurgSlaveDestroyedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AZurgPawnSlave> m_slaveBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxSlaveTicksPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_slaveLODDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_slavePoolInitialSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxActivatedZurgCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxSlaveSpawnPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxLeaderTicksPerFrame;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_deactivationDistanceHysteresis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARecastNavMesh* m_navMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHKGameInstance* m_hkGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACatPawn* m_catPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSharingManager* m_animationSharingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSharingSetup* m_animationSharingSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAntiZurgSpotlightComponent*> m_antiZurgLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAntiZurgLightableComponent*> m_antiZurgLightables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLightToSlaveTrace> m_lightToSlaveTraces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLightToLightableTrace> m_lightToLightableTraces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSlaveTick> m_slaveTickList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLeaderTick> m_leaderTickList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AZurgPawnSlave*> m_slavePool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSlaveSpawnRequest> m_slaveSpawnRequestQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSlaveKillRequest> m_slaveKillQueue;
    
public:
    AZurgManager();
    UFUNCTION(BlueprintCallable)
    void SetMaxActivatedZurgCount(int32 _newMaxCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZurgSpawnedEvent(AZurgPawnSlave* _zurgSlave);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZurgSlaveDeactivatedEvent(AZurgPawnSlave* _zurgSlave);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZurgSlaveActivatedEvent(AZurgPawnSlave* _zurgSlave);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZurgLeaderSpawnedEvent(AZurgPawnLeader* _zurgLeader);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZurgLeaderDestroyedEvent(AZurgPawnLeader* _zurgLeader);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZurgLeaderDeactivatedEvent(AZurgPawnLeader* _zurgLeader);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZurgLeaderActivatedEvent(AZurgPawnLeader* _zurgLeader);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZurgDestroyedEvent(AZurgPawnSlave* _zurgSlave);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARecastNavMesh* GetZurgsNavMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetZurgSlaveCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxActivatedZurgCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AZurgPawnLeader*> GetLeaders() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActivatedZurgSlaveCount() const;
    
};

