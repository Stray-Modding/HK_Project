#pragma once
#include "CoreMinimal.h"
#include "EObjective.h"
#include "HKGameSubsystem.h"
#include "EChapter.h"
#include "ActivitySubsystem.generated.h"

class UChapterSubsystem;

UCLASS(BlueprintType)
class HK_PROJECT_API UActivitySubsystem : public UHKGameSubsystem {
    GENERATED_BODY()
public:
    UActivitySubsystem();
    UFUNCTION(BlueprintCallable)
    void SetObjectiveRevealed(EObjective _id);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectiveComplete(EObjective _id);
    
private:
    UFUNCTION()
    void _OnChapterChanged(UChapterSubsystem* _chapterSubsystem, EChapter _previousChapter, EChapter _currentChapter, bool _isOpeningChapter);
    
};

