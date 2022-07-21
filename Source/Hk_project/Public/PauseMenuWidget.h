#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "PauseMenuWidget.generated.h"

class UHKButton;
class UTextBlock;

UCLASS(EditInlineNew)
class HK_PROJECT_API UPauseMenuWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UHKButton* ResumeButton;
    
    UPROPERTY(Instanced)
    UHKButton* OptionsButton;
    
    UPROPERTY(Instanced)
    UHKButton* ReloadCheckpointButton;
    
    UPROPERTY(Instanced)
    UHKButton* QuitButton;
    
    UPROPERTY(Instanced)
    UHKButton* SelectButton;
    
    UPROPERTY(Instanced)
    UHKButton* BackButton;
    
    UPROPERTY(Instanced)
    UTextBlock* VersionText;
    
    UPROPERTY(Instanced)
    UTextBlock* LastCheckPointTime;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_lastCheckPointTimeText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_reloadCheckpointDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_reloadCheckpointDurationText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_reloadCheckpointTimeText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_noCheckpointDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_backButtonDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_quitDialogText;
    
public:
    UPauseMenuWidget();
};

