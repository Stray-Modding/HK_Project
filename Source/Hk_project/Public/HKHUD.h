#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "EScreenFadeType.h"
#include "ActionDisplay.h"
#include "HUDDebugWidget.h"
#include "JoyLibraryRuntime/JoyHUD.h"
#include "HKHUD.generated.h"

class AHKHUD;
class ABackpack;
class ADialog;
class UHUDDebugWidget;
class UUserWidget;
class USaveIconWidget;
class UReticuleWidget;

UCLASS(NonTransient)
class HK_PROJECT_API AHKHUD : public AJoyHUD {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHKHUDDelegate, AHKHUD*, _hud);
    
    UPROPERTY(BlueprintAssignable)
    FHKHUDDelegate ActionDisplayAdded;
    
    UPROPERTY(BlueprintAssignable)
    FHKHUDDelegate ActionDisplayRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FHKHUDDelegate ActionDisplayEnabledChanged;
    
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> m_HUDWidgetClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UHUDDebugWidget> m_HUDDebugWidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<TSubclassOf<UUserWidget>, TSubclassOf<UUserWidget>> m_widgetToBlueprintMap;
    
    UPROPERTY(Instanced)
    TArray<UUserWidget*> m_widgets;
    
    UPROPERTY(Instanced)
    UUserWidget* m_HUDWidget;
    
    UPROPERTY(Instanced)
    UHUDDebugWidget* m_HUDDebugWidget;
    
    UPROPERTY(Instanced)
    USaveIconWidget* m_saveIcon;
    
    UPROPERTY(Instanced)
    UReticuleWidget* m_reticule;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_enableSaveIcon;
    
public:
    AHKHUD();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopVideoCinematic();
    
    UFUNCTION(BlueprintCallable)
    void StopScreenFade(TEnumAsByte<EScreenFadeType> _type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartVideoCinematic(const FString& _URL, FName _musicActorId);
    
    UFUNCTION(BlueprintCallable)
    void StartScreenFade(TEnumAsByte<EScreenFadeType> _type, FLinearColor _beginColor, FLinearColor _endColor, float _duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVideoCinematicSkippable(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetScreenFadeColor(TEnumAsByte<EScreenFadeType> _type, FLinearColor _color);
    
    UFUNCTION(BlueprintCallable)
    void SetActionDisplayEnabled(FName _actionID, bool _enabled);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActionDisplay(FName _actionID);
    
    UFUNCTION(BlueprintCallable)
    void PushActionDisplayHidden();
    
    UFUNCTION(BlueprintCallable)
    void PopActionDisplayHidden();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDialogLineBegan(ADialog* _dialog);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDialogEnded(ADialog* _dialog);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDialogBegan(ADialog* _dialog);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActionDisplayShown();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActionDisplayHidden();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsVideoCinematicSkippable() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsPlayingVideoCinematic() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActionDisplayHidden() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UUserWidget*> GetWidgets() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FLinearColor GetScreenFadeColorInternal(EScreenFadeType _type);
    
    UFUNCTION(BlueprintPure)
    UUserWidget* GetHUDWidget() const;
    
    UFUNCTION(BlueprintPure)
    UHUDDebugWidget* GetHUDDebugWidget() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FActionDisplay> GetActionDisplays() const;
    
    UFUNCTION(BlueprintPure)
    bool FindActionDisplay(FName _actionID, FActionDisplay& _outActionDisplay) const;
    
    UFUNCTION(BlueprintCallable)
    void AddActionDisplayMultipleInputs(FName _actionID, FText _displayText, const TArray<FName>& _actionBindingNames, int32 _priority, bool _showAllKeys);
    
    UFUNCTION(BlueprintCallable)
    void AddActionDisplay(FName _actionID, FText _displayText, FName _actionBindingName, int32 _priority, bool _showAllKeys);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void _SetScreenFadeColorInternal(EScreenFadeType _type, FLinearColor _color);
    
private:
    UFUNCTION()
    void _OnBackpackDialogLineBegan(ABackpack* _backpack, ADialog* _dialog);
    
    UFUNCTION()
    void _OnBackpackDialogEnded(ABackpack* _backpack, ADialog* _dialog);
    
    UFUNCTION()
    void _OnBackpackDialogBegan(ABackpack* _backpack, ADialog* _dialog);
    
};

