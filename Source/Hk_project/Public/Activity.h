#pragma once
#include "CoreMinimal.h"
#include "EObjective.h"
#include "EChapter.h"
#include "EActivity.h"
#include "Activity.generated.h"

USTRUCT(BlueprintType)
struct FActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivity ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChapter Chapter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EObjective> Objectives;
    
    HK_PROJECT_API FActivity();
};

