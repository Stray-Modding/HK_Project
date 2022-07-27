#pragma once
#include "CoreMinimal.h"
#include "JoyLibraryRuntime/Manager.h"
#include "EGameSuspendedReason.h"
#include "GameStateManager.generated.h"

class UHUDDebugWidget;
class UHierarchicalStateMachine;

UCLASS(Blueprintable)
class HK_PROJECT_API AGameStateManager : public AManager {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameStateManagerTypedDelegate, TEnumAsByte<EGameSuspendedReason>, _gameSuspendedReason);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameStateManagerTypedDelegate OnGameSuspended;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameStateManagerTypedDelegate OnGameUnsuspended;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHierarchicalStateMachine* m_stateMachine;
    
public:
    AGameStateManager();
    UFUNCTION(BlueprintCallable)
    void UnsuspendGame();
    
    UFUNCTION(BlueprintCallable)
    void SuspendGame(TEnumAsByte<EGameSuspendedReason> _gameSuspendedReason);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugMenuOpen(bool _open);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFadeOutStart(float _fadeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSuspended() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameMapType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugMenuOpen() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnToggleDebugMenuPressed();
    
    UFUNCTION(BlueprintCallable)
    void _OnMenuStartPressed();
    
    UFUNCTION(BlueprintCallable)
    void _OnHUDDebugWidgetOpened(UHUDDebugWidget* _widget);
    
    UFUNCTION(BlueprintCallable)
    void _OnHUDDebugWidgetClosed(UHUDDebugWidget* _widget);
    
};

