#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EScreenFadeType.h"
#include "UObject/NoExportTypes.h"
#include "ActionDisplay.h"
#include "HUDDebugWidget.h"
#include "SaveIconWidget.h"
#include "JoyLibraryRuntime/JoyHUD.h"
#include "HKHUD.generated.h"

class UUserWidget;
class ADialog;
class UReticuleWidget;
class ABackpack;

UCLASS(Blueprintable, NonTransient)
class HK_PROJECT_API AHKHUD : public AJoyHUD {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHKHUDDelegate, AHKHUD*, _hud);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHKHUDDelegate ActionDisplayAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHKHUDDelegate ActionDisplayRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHKHUDDelegate ActionDisplayEnabledChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> m_HUDWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHUDDebugWidget> m_HUDDebugWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UUserWidget>, TSubclassOf<UUserWidget>> m_widgetToBlueprintMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> m_widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* m_HUDWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHUDDebugWidget* m_HUDDebugWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USaveIconWidget* m_saveIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UReticuleWidget* m_reticule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDialogLineBegan(ADialog* _dialog);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDialogEnded(ADialog* _dialog);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDialogBegan(ADialog* _dialog);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActionDisplayShown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActionDisplayHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsVideoCinematicSkippable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPlayingVideoCinematic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionDisplayHidden() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UUserWidget*> GetWidgets() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FLinearColor GetScreenFadeColorInternal(EScreenFadeType _type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetHUDWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHUDDebugWidget* GetHUDDebugWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FActionDisplay> GetActionDisplays() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindActionDisplay(FName _actionID, FActionDisplay& _outActionDisplay) const;
    
    UFUNCTION(BlueprintCallable)
    void AddActionDisplayMultipleInputs(FName _actionID, FText _displayText, const TArray<FName>& _actionBindingNames, int32 _priority, bool _showAllKeys);
    
    UFUNCTION(BlueprintCallable)
    void AddActionDisplay(FName _actionID, FText _displayText, FName _actionBindingName, int32 _priority, bool _showAllKeys);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void _SetScreenFadeColorInternal(EScreenFadeType _type, FLinearColor _color);
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnBackpackDialogLineBegan(ABackpack* _backpack, ADialog* _dialog);
    
    UFUNCTION(BlueprintCallable)
    void _OnBackpackDialogEnded(ABackpack* _backpack, ADialog* _dialog);
    
    UFUNCTION(BlueprintCallable)
    void _OnBackpackDialogBegan(ABackpack* _backpack, ADialog* _dialog);
    
};

