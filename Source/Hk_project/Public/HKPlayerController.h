#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "EPS5TriggersState.h"
#include "WalkableDebuggedPrimitive.h"
#include "PS5TriggerEffectData.h"
#include "EPS5TriggersSide.h"
#include "HKPlayerController.generated.h"

class UDebugInputComponent;
class AHKPlayerCameraManager;
class UMaterialInterface;
class UHierarchicalStateMachine;
class AHKSpectatorPawn;
class ADrone;
class ABackpack;
class ACatPawn;
class AGameStateManager;
class UTexture;
class AActor;
class USoundSubmix;

UCLASS()
class HK_PROJECT_API AHKPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnControllerShakedEvent);
    
private:
    UPROPERTY(EditAnywhere)
    float m_fadeOutTime;
    
    UPROPERTY(EditAnywhere)
    float m_targetTimeDilation;
    
    UPROPERTY(EditAnywhere)
    float m_timeDilationLerpRatio;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AHKSpectatorPawn> m_spectatorClass;
    
    UPROPERTY(EditAnywhere)
    float m_minimumWaitForStreamingTime;
    
    UPROPERTY(Instanced)
    UHierarchicalStateMachine* m_stateMachine;
    
    UPROPERTY()
    AHKPlayerCameraManager* m_cameraManager;
    
    UPROPERTY()
    ACatPawn* m_catPawn;
    
    UPROPERTY()
    ABackpack* M_BackPack;
    
    UPROPERTY()
    ADrone* M_Drone;
    
    UPROPERTY()
    AHKSpectatorPawn* m_spectator;
    
    UPROPERTY(EditAnywhere)
    int32 m_debugJumpProbeWheelSubdivisions;
    
    UPROPERTY(Instanced)
    UDebugInputComponent* m_debugInputComponent;
    
    UPROPERTY()
    AGameStateManager* m_gameStateManager;
    
    UPROPERTY()
    TArray<FWalkableDebuggedPrimitive> m_walkableDebuggedPrimitives;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* m_walkableDebugMaterial;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* m_movementObstacleDebugMaterial;
    
    UPROPERTY(EditAnywhere)
    int32 m_maxDebugTransformStackSize;
    
    UPROPERTY(EditAnywhere)
    UTexture* m_defaultIcon;
    
    UPROPERTY(SaveGame)
    bool m_savedHasBackpack;
    
    UPROPERTY(SaveGame)
    bool m_savedHasUnlockedLight;
    
    UPROPERTY(SaveGame)
    TArray<TSubclassOf<AActor>> m_savedInventory;
    
    UPROPERTY(EditAnywhere)
    USoundSubmix* m_PS5VibrationSubmix;
    
    UPROPERTY(EditAnywhere)
    FPS5TriggerEffectData m_scratchablePS5TriggerEffect;
    
public:
    AHKPlayerController();
    UFUNCTION(BlueprintCallable)
    void SetWalkableDebugModeEnabled(bool _enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPS5TriggersState(EPS5TriggersState _triggersState, EPS5TriggersSide _triggerSide);
    
    UFUNCTION(BlueprintCallable)
    void SetBackpackEnabled(bool _enabled, bool _unlockStrongLight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RespawnAfterDeathPressed();
    
    UFUNCTION(BlueprintCallable)
    void Respawn();
    
    UFUNCTION(BlueprintCallable)
    void PushIngameCinematicModeEnabled(float _fadeTime);
    
    UFUNCTION(BlueprintCallable)
    void PopIngameCinematicModeEnabled(float _fadeTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExitCinematicMode(float _fadeTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnterCinematicMode(float _fadeTime);
    
    UFUNCTION(BlueprintPure)
    bool IsWaitingForStreamingAndLoading() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSkipCinematicDown() const;
    
    UFUNCTION(BlueprintPure)
    bool IsIngameCinematicModeEnabled() const;
    
    UFUNCTION(BlueprintPure)
    ADrone* GetDrone() const;
    
    UFUNCTION(BlueprintPure)
    float GetContextualAxisRightValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetContextualAxisLeftValue() const;
    
    UFUNCTION(BlueprintPure)
    ACatPawn* GetCat() const;
    
    UFUNCTION(BlueprintPure)
    ABackpack* GetBackpack() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceWaitForStreamingAndLoading(float _fadeOutTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CatDied();
    
private:
    UFUNCTION()
    void _OnR3Pressed();
    
    UFUNCTION()
    void _OnL3Pressed();
    
    UFUNCTION()
    void _OnCatDied(ACatPawn* _cat);
    
};

