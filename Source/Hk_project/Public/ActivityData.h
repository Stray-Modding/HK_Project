#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Activity.h"
#include "ActivityData.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UActivityData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActivity> Activities;
    
    UActivityData();
};

