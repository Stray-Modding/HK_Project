#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Activity.h"
#include "ActivityData.generated.h"

UCLASS(BlueprintType)
class HK_PROJECT_API UActivityData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FActivity> Activities;
    
    UActivityData();
};

