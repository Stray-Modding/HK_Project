#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "ChapterMenuWidget.generated.h"

class UScrollBox;
class UHKButton;
class UChapterEntryWidget;
class UTexture2D;
class UImage;

UCLASS(EditInlineNew)
class HK_PROJECT_API UChapterMenuWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UScrollBox* ChapterScrollBox;
    
    UPROPERTY(Instanced)
    UChapterEntryWidget* ChapterEntry1;
    
    UPROPERTY(Instanced)
    UChapterEntryWidget* ChapterEntry2;
    
    UPROPERTY(Instanced)
    UChapterEntryWidget* ChapterEntry3;
    
    UPROPERTY(Instanced)
    UChapterEntryWidget* ChapterEntry4;
    
    UPROPERTY(Instanced)
    UChapterEntryWidget* ChapterEntry5;
    
    UPROPERTY(Instanced)
    UChapterEntryWidget* ChapterEntry6;
    
    UPROPERTY(Instanced)
    UChapterEntryWidget* ChapterEntry7;
    
    UPROPERTY(Instanced)
    UChapterEntryWidget* ChapterEntry8;
    
    UPROPERTY(Instanced)
    UChapterEntryWidget* ChapterEntry9;
    
    UPROPERTY(Instanced)
    UChapterEntryWidget* ChapterEntry10;
    
    UPROPERTY(Instanced)
    UChapterEntryWidget* ChapterEntry11;
    
    UPROPERTY(Instanced)
    UChapterEntryWidget* ChapterEntry12;
    
    UPROPERTY(Instanced)
    UHKButton* ChapterSelectionButton1;
    
    UPROPERTY(Instanced)
    UHKButton* ChapterSelectionButton2;
    
    UPROPERTY(Instanced)
    UHKButton* ChapterSelectionButton3;
    
    UPROPERTY(Instanced)
    UHKButton* ChapterSelectionButton4;
    
    UPROPERTY(Instanced)
    UHKButton* ChapterSelectionButton5;
    
    UPROPERTY(Instanced)
    UHKButton* ChapterSelectionButton6;
    
    UPROPERTY(Instanced)
    UHKButton* ChapterSelectionButton7;
    
    UPROPERTY(Instanced)
    UHKButton* ChapterSelectionButton8;
    
    UPROPERTY(Instanced)
    UHKButton* ChapterSelectionButton9;
    
    UPROPERTY(Instanced)
    UHKButton* ChapterSelectionButton10;
    
    UPROPERTY(Instanced)
    UHKButton* ChapterSelectionButton11;
    
    UPROPERTY(Instanced)
    UHKButton* ChapterSelectionButton12;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* ChapterSelectionLocked;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* ChapterSelectionUnLocked;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* ChapterSelectionSelected;
    
    UPROPERTY(Instanced)
    UImage* ChapterSelectionImage1;
    
    UPROPERTY(Instanced)
    UImage* ChapterSelectionImage2;
    
    UPROPERTY(Instanced)
    UImage* ChapterSelectionImage3;
    
    UPROPERTY(Instanced)
    UImage* ChapterSelectionImage4;
    
    UPROPERTY(Instanced)
    UImage* ChapterSelectionImage5;
    
    UPROPERTY(Instanced)
    UImage* ChapterSelectionImage6;
    
    UPROPERTY(Instanced)
    UImage* ChapterSelectionImage7;
    
    UPROPERTY(Instanced)
    UImage* ChapterSelectionImage8;
    
    UPROPERTY(Instanced)
    UImage* ChapterSelectionImage9;
    
    UPROPERTY(Instanced)
    UImage* ChapterSelectionImage10;
    
    UPROPERTY(Instanced)
    UImage* ChapterSelectionImage11;
    
    UPROPERTY(Instanced)
    UImage* ChapterSelectionImage12;
    
    UPROPERTY(Instanced)
    UHKButton* SelectButton;
    
    UPROPERTY(Instanced)
    UHKButton* BackButton;
    
public:
    UChapterMenuWidget();
};

