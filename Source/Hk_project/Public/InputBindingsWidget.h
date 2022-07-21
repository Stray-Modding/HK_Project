#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "InputBindingsWidget.generated.h"

class UHorizontalBox;
class UScrollBox;
class UVerticalBox;
class UInputKeyRowWidget;
class UHKButton;
class USoundBase;

UCLASS(EditInlineNew)
class HK_PROJECT_API UInputBindingsWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UScrollBox* ScrollBox;
    
    UPROPERTY(Instanced)
    UVerticalBox* InputKeyRowVBox;
    
    UPROPERTY(Instanced)
    UInputKeyRowWidget* InputRowForward;
    
    UPROPERTY(Instanced)
    UInputKeyRowWidget* InputRowBack;
    
    UPROPERTY(Instanced)
    UInputKeyRowWidget* InputRowLeft;
    
    UPROPERTY(Instanced)
    UInputKeyRowWidget* InputRowRight;
    
    UPROPERTY(Instanced)
    UInputKeyRowWidget* InputRowRun;
    
    UPROPERTY(Instanced)
    UInputKeyRowWidget* InputRowJump;
    
    UPROPERTY(Instanced)
    UInputKeyRowWidget* InputRowInteract;
    
    UPROPERTY(Instanced)
    UInputKeyRowWidget* InputRowMeow;
    
    UPROPERTY(Instanced)
    UInputKeyRowWidget* InputRowCall;
    
    UPROPERTY(Instanced)
    UInputKeyRowWidget* InputRowMenu;
    
    UPROPERTY(Instanced)
    UInputKeyRowWidget* InputRowLight;
    
    UPROPERTY(Instanced)
    UInputKeyRowWidget* InputRowDefluxor;
    
    UPROPERTY(Instanced)
    UInputKeyRowWidget* InputRowHelp;
    
    UPROPERTY(Instanced)
    UInputKeyRowWidget* InputRowFirstPerson;
    
    UPROPERTY(Instanced)
    UInputKeyRowWidget* InputRowRecenter;
    
    UPROPERTY(Instanced)
    UInputKeyRowWidget* InputRowValidate;
    
    UPROPERTY(Instanced)
    UInputKeyRowWidget* InputRowExit;
    
    UPROPERTY(Instanced)
    UInputKeyRowWidget* InputRowNextDialog;
    
    UPROPERTY(Instanced)
    UInputKeyRowWidget* InputRowPrevCategory;
    
    UPROPERTY(Instanced)
    UInputKeyRowWidget* InputRowNextCategory;
    
    UPROPERTY(Instanced)
    UHorizontalBox* KeyBox;
    
    UPROPERTY(Instanced)
    UHorizontalBox* CancelKeyBox;
    
    UPROPERTY(Instanced)
    UHKButton* BackButton;
    
    UPROPERTY(Instanced)
    UHKButton* DefaultsButton;
    
    UPROPERTY(Instanced)
    UHKButton* CancelButton;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_onKeyRowSelectedSound;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_onKeyRowListeningStartSound;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_onKeyRowListeningConfirmSound;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_applyBindingsDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_resetToDefaultsDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_invalidKeyDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_clearInputDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    float m_onListeningOtherKeyOpacity;
    
public:
    UInputBindingsWidget();
};

