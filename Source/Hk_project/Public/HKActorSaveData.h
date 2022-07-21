#pragma once
#include "CoreMinimal.h"
#include "HKComponentSaveData.h"
#include "HKActorSaveData.generated.h"

USTRUCT(BlueprintType)
struct FHKActorSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHKComponentSaveData> ComponentsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Destroyed;
    
    HK_PROJECT_API FHKActorSaveData();
};

