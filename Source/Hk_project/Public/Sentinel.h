#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Character.h"
#include "TraceBoneName.h"
#include "UObject/NoExportTypes.h"
#include "ESentinelTazerMode.h"
#include "ESentinelInputMode.h"
#include "Engine/EngineTypes.h"
#include "JoyLibraryRuntime/Smoother.h"
#include "Sentinel.generated.h"

class UStreamingComponent;
class AActor;
class ATargetPoint;
class UNavigationQueryFilter;
class USplineComponent;
class USentinelSettings;
class UHierarchicalStateMachine;
class USkeletalMesh;
class UCanvas;
class ARecastNavMesh;

UCLASS(Blueprintable)
class HK_PROJECT_API ASentinel : public ACharacter {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSentinelLockedTargetEventDelegate, AActor*, _targetActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSentinelEventDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSentinelBoolEventDelegate, bool, status);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSentinelEventDelegate OnSentinelSettingsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSentinelBoolEventDelegate OnSentinelAggressivityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSentinelBoolEventDelegate OnSentinelActivityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSentinelLockedTargetEventDelegate OnSentinelLockedTargetChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATargetPoint*> m_waypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmootherRotation m_rotationSmoother;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNavigationQueryFilter* m_navigationQueryFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* m_splinePathFindComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USentinelSettings* m_sentinelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_drawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStreamingComponent* m_streamingComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHierarchicalStateMachine* m_sentinelStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USkeletalMesh*, FTraceBoneName> m_bonesNameForVisionDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_startSentinelActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_lockedTargetActor;
    
public:
    ASentinel();
    UFUNCTION(BlueprintCallable)
    void TickRotateToLocationInSpeed(FVector _location, float _speed);
    
    UFUNCTION(BlueprintCallable)
    void TickRotateToDirectionInSpeed(FVector _direction, float _speed);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tazer_UnLoading_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tazer_UnLoading_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tazer_UnLoading_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tazer_Shooting_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tazer_Shooting_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tazer_Reloading_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tazer_Reloading_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tazer_Reloading_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tazer_ReadyToShoot_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tazer_ReadyToShoot_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tazer_Loading_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tazer_Loading_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tazer_Loading_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tazer_Idle_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
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
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSentinelActivityChange(bool _newActiveState) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDisplayDebug(UCanvas* _canvas);
    
    UFUNCTION(BlueprintCallable)
    bool MoveToOnNavMesh(FVector _location, float _speed, float _zOffset, bool _rotateToVelocity, TSubclassOf<UNavigationQueryFilter> _queryFilter);
    
    UFUNCTION(BlueprintCallable)
    bool MoveTo(FVector _location, float _speed, float _zOffset, bool _rotateToVelocity, TSubclassOf<UNavigationQueryFilter> _queryFilter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSentinelActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAggressive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActorInVision(AActor* _actorToCheck, FVector _direction, float _angleInDegree, float _distance, TEnumAsByte<ECollisionChannel> _traceChannel, bool _drawDebug) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVisionLightEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESentinelTazerMode GetTazerMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USentinelSettings* GetSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARecastNavMesh* GetSelectedNavMeshRecastActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATargetPoint* GetNextWaypointFromLocation(FVector _location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLockedTargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESentinelInputMode GetInputMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATargetPoint* GetClosestWaypointToLocation(FVector _location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetClosestLocationOnPatrolPath();
    
    UFUNCTION(BlueprintCallable)
    void AddForce(FVector _direction, float _speed);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void _OnVisionLightEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void _OnVisionLightDisabled();
    
    UFUNCTION(BlueprintCallable)
    void _OnStreamedOut(UStreamingComponent* _streamingComponent);
    
    UFUNCTION(BlueprintCallable)
    void _OnStreamedIn(UStreamingComponent* _streamingComponent);
    
private:
    UFUNCTION(BlueprintCallable)
    void _EditorTick(float _deltaTime);
    
};

