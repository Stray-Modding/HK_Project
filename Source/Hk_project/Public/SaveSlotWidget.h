#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "SaveSlotWidget.generated.h"

class UImage;
class UHKSaveGame;
class UHKTextBlock;
class UHKButton;
class UVerticalBox;
class UTexture2D;

UCLASS(EditInlineNew)
class HK_PROJECT_API USaveSlotWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UImage* ChapterImageBackground;
    
    UPROPERTY(Instanced)
    UImage* ChapterImageSelectionBackground;
    
    UPROPERTY(Instanced)
    UHKButton* MainButton;
    
    UPROPERTY(Instanced)
    UHKTextBlock* ImageText;
    
    UPROPERTY(Instanced)
    UHKTextBlock* TitleText;
    
    UPROPERTY(Instanced)
    UHKTextBlock* ChapterText;
    
    UPROPERTY(Instanced)
    UHKTextBlock* DurationText;
    
    UPROPERTY(Instanced)
    UHKTextBlock* MemoryText;
    
    UPROPERTY(Instanced)
    UHKTextBlock* StartButtonText;
    
    UPROPERTY(Instanced)
    UVerticalBox* MenuBox;
    
    UPROPERTY(Instanced)
    UHKButton* StartButton;
    
    UPROPERTY(Instanced)
    UHKButton* ChapterButton;
    
    UPROPERTY(Instanced)
    UHKButton* ClearButton;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_emptySaveSlotImage;
    
    UPROPERTY(EditDefaultsOnly)
    float m_unSelectedOpacity;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_slotTitleText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_memoryText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_clearSlotDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_startGameText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_newGameText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_continueText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_durationText;
    
    UPROPERTY()
    UHKSaveGame* m_slotInfo;
    
public:
    USaveSlotWidget();
};

