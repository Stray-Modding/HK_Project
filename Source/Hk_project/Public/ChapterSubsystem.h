#pragma once
#include "CoreMinimal.h"
#include "HKGameSubsystem.h"
#include "EChapter.h"
#include "ChapterSubsystem.generated.h"

class UChapterSubsystem;
class UHKSaveInstance;

UCLASS(Blueprintable)
class HK_PROJECT_API UChapterSubsystem : public UHKGameSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FChapterChanged, UChapterSubsystem*, _chapterSubsystem, EChapter, _previousChapter, EChapter, _currentChapter, bool, _isOpeningChapter);
    
    UChapterSubsystem();
private:
    UFUNCTION(BlueprintCallable)
    void _OnBeforePersistentSaveDataSaved(UHKSaveInstance* _saveInstance);
    
    UFUNCTION(BlueprintCallable)
    void _OnAfterPersistentSaveDataLoaded(UHKSaveInstance* _saveInstance);
    
};

