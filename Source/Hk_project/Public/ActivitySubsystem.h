#pragma once
#include "CoreMinimal.h"
#include "HKGameSubsystem.h"
#include "EChapter.h"
#include "EObjective.h"
#include "ActivitySubsystem.generated.h"

class UChapterSubsystem;

UCLASS(Blueprintable)
class HK_PROJECT_API UActivitySubsystem : public UHKGameSubsystem {
    GENERATED_BODY()
public:
    UActivitySubsystem();
    UFUNCTION(BlueprintCallable)
    void SetObjectiveRevealed(EObjective _id);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectiveComplete(EObjective _id);
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnChapterChanged(UChapterSubsystem* _chapterSubsystem, EChapter _previousChapter, EChapter _currentChapter, bool _isOpeningChapter);
    
};

