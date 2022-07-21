#pragma once
#include "CoreMinimal.h"
#include "EChapter.h"
#include "HKChapter.generated.h"

class UTexture2D;
class UWorld;

USTRUCT(BlueprintType)
struct FHKChapter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FText Name;
    
    UPROPERTY(EditDefaultsOnly)
    EChapter ID;
    
    UPROPERTY(EditDefaultsOnly)
    TSet<FName> MemoryIds;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UWorld> StartLevel;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* UIImage;
    
public:
    HK_PROJECT_API FHKChapter();
};

