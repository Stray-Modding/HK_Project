#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "MainMenuWidget.generated.h"

class UHKButton;
class UWorld;
class UTexture2D;
class UTextBlock;

UCLASS(EditInlineNew)
class HK_PROJECT_API UMainMenuWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UHKButton* StartButton;
    
    UPROPERTY(Instanced)
    UHKButton* OptionsButton;
    
    UPROPERTY(Instanced)
    UHKButton* CreditsButton;
    
    UPROPERTY(Instanced)
    UHKButton* QuitButton;
    
    UPROPERTY(Instanced)
    UHKButton* SelectButton;
    
    UPROPERTY(Instanced)
    UHKButton* BackButton;
    
    UPROPERTY(Instanced)
    UTextBlock* VersionText;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FString, UTexture2D*> ChapterImages;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UWorld> m_creditsLevel;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_quitDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_fadeBeginColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_fadeEndColor;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fadeDuration;
    
    UPROPERTY(EditAnywhere)
    float m_creditsFadeDuration;
    
public:
    UMainMenuWidget();
};

