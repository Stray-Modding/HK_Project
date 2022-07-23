#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Character.h"
#include "TraceBoneName.h"
#include "JoyLibraryRuntime/Smoother.h"
#include "ESentinelTazerMode.h"
#include "UObject/NoExportTypes.h"
#include "ESentinelInputMode.h"
#include "Engine/EngineTypes.h"
#include "Sentinel.generated.h"

class AActor;
class UCanvas;
class UNavigationQueryFilter;
class ATargetPoint;
class USplineComponent;
class USentinelSettings;
class UStreamingComponent;
class UHierarchicalStateMachine;
class USkeletalMesh;
class ARecastNavMesh;

UCLASS()
class HK_PROJECT_API ASentinel : public ACharacter {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSentinelLockedTargetEventDelegate, AActor*, _targetActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSentinelEventDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSentinelBoolEventDelegate, bool, status);
    
    UPROPERTY(BlueprintAssignable)
    FSentinelEventDelegate OnSentinelSettingsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSentinelBoolEventDelegate OnSentinelAggressivityChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSentinelBoolEventDelegate OnSentinelActivityChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSentinelLockedTargetEventDelegate OnSentinelLockedTargetChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ATargetPoint*> m_waypoints;
    
    UPROPERTY(BlueprintReadOnly)
    FSmootherRotation m_rotationSmoother;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNavigationQueryFilter* m_navigationQueryFilter;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineComponent* m_splinePathFindComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USentinelSettings* m_sentinelSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_drawDebug;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStreamingComponent* m_streamingComponent;
    
private:
    UPROPERTY(Instanced)
    UHierarchicalStateMachine* m_sentinelStateMachine;
    
    UPROPERTY(EditAnywhere)
    TMap<USkeletalMesh*, FTraceBoneName> m_bonesNameForVisionDetection;
    
    UPROPERTY(EditAnywhere)
    bool m_startSentinelActive;
    
    UPROPERTY()
    AActor* m_lockedTargetActor;
    
public:
    ASentinel();
    UFUNCTION(BlueprintCallable)
    void TickRotateToLocationInSpeed(FVector _location, float _speed);
    
    UFUNCTION(BlueprintCallable)
    void TickRotateToDirectionInSpeed(FVector _direction, float _speed);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void Tazer_UnLoading_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Tazer_UnLoading_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Tazer_UnLoading_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Tazer_Shooting_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Tazer_Shooting_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Tazer_Reloading_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Tazer_Reloading_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Tazer_Reloading_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Tazer_ReadyToShoot_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Tazer_ReadyToShoot_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Tazer_Loading_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Tazer_Loading_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Tazer_Loading_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Tazer_Idle_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Tazer_Idle_Enter();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisonLightEnabled(bool _enable);
    
    UFUNCTION(BlueprintCallable)
    void SetTazerMode(ESentinelTazerMode _newTazerMode);
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(USentinelSettings* _newSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetSentinelActive(bool _isActive);
    
    UFUNCTION(BlueprintCallable)
    void SetLockOnTarget(AActor* _targetActor);
    
    UFUNCTION(BlueprintCallable)
    void SetInputMode(ESentinelInputMode _inputMode);
    
    UFUNCTION(BlueprintCallable)
    void SetAggressive(bool _isAggressive);
    
    UFUNCTION(BlueprintCallable)
    void RotateToLocationInTime(FVector _location, float _time);
    
    UFUNCTION(BlueprintCallable)
    void RotateToDirectionInTime(FVector _direction, float _time);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSentinelActivityChange(bool _newActiveState) const;
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnDisplayDebug(UCanvas* _canvas);
    
    UFUNCTION(BlueprintCallable)
    bool MoveToOnNavMesh(FVector _location, float _speed, float _zOffset, bool _rotateToVelocity, TSubclassOf<UNavigationQueryFilter> _queryFilter);
    
    UFUNCTION(BlueprintCallable)
    bool MoveTo(FVector _location, float _speed, float _zOffset, bool _rotateToVelocity, TSubclassOf<UNavigationQueryFilter> _queryFilter);
    
    UFUNCTION(BlueprintPure)
    bool IsSentinelActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAggressive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActorInVision(AActor* _actorToCheck, FVector _direction, float _angleInDegree, float _distance, TEnumAsByte<ECollisionChannel> _traceChannel, bool _drawDebug) const;
    
    UFUNCTION(BlueprintPure)
    bool GetVisionLightEnabled() const;
    
    UFUNCTION(BlueprintPure)
    ESentinelTazerMode GetTazerMode() const;
    
    UFUNCTION(BlueprintPure)
    USentinelSettings* GetSettings() const;
    
    UFUNCTION(BlueprintPure)
    ARecastNavMesh* GetSelectedNavMeshRecastActor() const;
    
    UFUNCTION(BlueprintPure)
    ATargetPoint* GetNextWaypointFromLocation(FVector _location);
    
    UFUNCTION(BlueprintPure)
    AActor* GetLockedTargetActor() const;
    
    UFUNCTION(BlueprintPure)
    ESentinelInputMode GetInputMode() const;
    
    UFUNCTION(BlueprintPure)
    ATargetPoint* GetClosestWaypointToLocation(FVector _location);
    
    UFUNCTION(BlueprintPure)
    FVector GetClosestLocationOnPatrolPath();
    
    UFUNCTION(BlueprintCallable)
    void AddForce(FVector _direction, float _speed);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void _OnVisionLightEnabled();
    
    UFUNCTION(BlueprintNativeEvent)
    void _OnVisionLightDisabled();
    
    UFUNCTION()
    void _OnStreamedOut(UStreamingComponent* _streamingComponent);
    
    UFUNCTION()
    void _OnStreamedIn(UStreamingComponent* _streamingComponent);
    
private:
    UFUNCTION()
    void _EditorTick(float _deltaTime);
    
};

