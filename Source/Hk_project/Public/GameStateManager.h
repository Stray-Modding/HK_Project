#pragma once
#include "CoreMinimal.h"
#include "JoyLibraryRuntime/Manager.h"
#include "EGameSuspendedReason.h"
#include "HierarchicalStateMachine.h"
#include "GameStateManager.generated.h"

class UHierarchicalStateMachine;
class UHUDDebugWidget;

UCLASS()
class HK_PROJECT_API AGameStateManager : public AManager {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameStateManagerTypedDelegate, TEnumAsByte<EGameSuspendedReason>, _gameSuspendedReason);
    
    UPROPERTY(BlueprintAssignable)
    FGameStateManagerTypedDelegate OnGameSuspended;
    
    UPROPERTY(BlueprintAssignable)
    FGameStateManagerTypedDelegate OnGameUnsuspended;
    
private:
    UPROPERTY(Transient)
    UHierarchicalStateMachine* m_stateMachine;
    
public:
    AGameStateManager();
    UFUNCTION(BlueprintCallable)
    void UnsuspendGame();
    
    UFUNCTION(BlueprintCallable)
    void SuspendGame(TEnumAsByte<EGameSuspendedReason> _gameSuspendedReason);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugMenuOpen(bool _open);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFadeOutStart(float _fadeTime);
    
    UFUNCTION(BlueprintPure)
    bool IsSuspended() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGameMapType() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDebugMenuOpen() const;
    
private:
    UFUNCTION()
    void _OnToggleDebugMenuPressed();
    
    UFUNCTION()
    void _OnMenuStartPressed();
    
    UFUNCTION()
    void _OnHUDDebugWidgetOpened(UHUDDebugWidget* _widget);
    
    UFUNCTION()
    void _OnHUDDebugWidgetClosed(UHUDDebugWidget* _widget);
    
};

