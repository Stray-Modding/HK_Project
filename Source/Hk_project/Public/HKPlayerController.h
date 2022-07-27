#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "WalkableDebuggedPrimitive.h"
#include "PS5TriggerEffectData.h"
#include "EPS5TriggersState.h"
#include "EPS5TriggersSide.h"
#include "HKPlayerController.generated.h"

class ABackpack;
class ACatPawn;
class AHKPlayerCameraManager;
class AHKSpectatorPawn;
class ADrone;
class UTexture;
class UHierarchicalStateMachine;
class UDebugInputComponent;
class AGameStateManager;
class UMaterialInterface;
class AActor;
class USoundSubmix;

UCLASS(Blueprintable)
class HK_PROJECT_API AHKPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnControllerShakedEvent);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_targetTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeDilationLerpRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHKSpectatorPawn> m_spectatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minimumWaitForStreamingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHierarchicalStateMachine* m_stateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHKPlayerCameraManager* m_cameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACatPawn* m_catPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABackpack* M_BackPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADrone* M_Drone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHKSpectatorPawn* m_spectator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_debugJumpProbeWheelSubdivisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDebugInputComponent* m_debugInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameStateManager* m_gameStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWalkableDebuggedPrimitive> m_walkableDebuggedPrimitives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_walkableDebugMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_movementObstacleDebugMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxDebugTransformStackSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* m_defaultIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_savedHasBackpack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_savedHasUnlockedLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> m_savedInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmix* m_PS5VibrationSubmix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPS5TriggerEffectData m_scratchablePS5TriggerEffect;
    
public:
    AHKPlayerController();
    UFUNCTION(BlueprintCallable)
    void SetWalkableDebugModeEnabled(bool _enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPS5TriggersState(EPS5TriggersState _triggersState, EPS5TriggersSide _triggerSide);
    
    UFUNCTION(BlueprintCallable)
    void SetBackpackEnabled(bool _enabled, bool _unlockStrongLight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RespawnAfterDeathPressed();
    
    UFUNCTION(BlueprintCallable)
    void Respawn();
    
    UFUNCTION(BlueprintCallable)
    void PushIngameCinematicModeEnabled(float _fadeTime);
    
    UFUNCTION(BlueprintCallable)
    void PopIngameCinematicModeEnabled(float _fadeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitCinematicMode(float _fadeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterCinematicMode(float _fadeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitingForStreamingAndLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkipCinematicDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIngameCinematicModeEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADrone* GetDrone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetContextualAxisRightValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetContextualAxisLeftValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACatPawn* GetCat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABackpack* GetBackpack() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceWaitForStreamingAndLoading(float _fadeOutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CatDied();
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnR3Pressed();
    
    UFUNCTION(BlueprintCallable)
    void _OnL3Pressed();
    
    UFUNCTION(BlueprintCallable)
    void _OnCatDied(ACatPawn* _cat);
    
};

