#pragma once
#include "CoreMinimal.h"
#include "HKActorSaveData.h"
#include "HKLevelSaveData.generated.h"

USTRUCT(BlueprintType)
struct FHKLevelSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHKActorSaveData> Actors;
    
    HK_PROJECT_API FHKLevelSaveData();
};

