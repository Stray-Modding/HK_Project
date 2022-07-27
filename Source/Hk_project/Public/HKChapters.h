#pragma once
#include "CoreMinimal.h"
#include "HKChapter.h"
#include "Engine/DataAsset.h"
#include "HKChapters.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UHKChapters : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHKChapter> Chapters;
    
    UHKChapters();
};

