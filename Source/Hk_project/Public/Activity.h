#pragma once
#include "CoreMinimal.h"
#include "EObjective.h"
#include "EActivity.h"
#include "EChapter.h"
#include "Activity.generated.h"

USTRUCT(BlueprintType)
struct FActivity {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EActivity ID;
    
    UPROPERTY(EditDefaultsOnly)
    EChapter Chapter;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<EObjective> Objectives;
    
    HK_PROJECT_API FActivity();
};

