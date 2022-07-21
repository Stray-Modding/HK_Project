#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HKChapter.h"
#include "HKChapters.generated.h"

UCLASS(BlueprintType)
class HK_PROJECT_API UHKChapters : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FHKChapter> Chapters;
    
    UHKChapters();
};

