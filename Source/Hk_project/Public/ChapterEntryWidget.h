#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "ChapterEntryWidget.generated.h"

class UHKTextBlock;
class UHKButton;
class UImage;

UCLASS(EditInlineNew)
class HK_PROJECT_API UChapterEntryWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UHKButton* MainButton;
    
    UPROPERTY(Instanced)
    UHKTextBlock* ChapterText;
    
    UPROPERTY(Instanced)
    UHKTextBlock* MemoryText;
    
    UPROPERTY(Instanced)
    UImage* LockedImage;
    
    UPROPERTY(Instanced)
    UImage* ChapterImage;
    
    UPROPERTY(Instanced)
    UImage* ChapterSelectedImage;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_memoryText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_restartDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_unexploredChapterText;
    
public:
    UChapterEntryWidget();
};

