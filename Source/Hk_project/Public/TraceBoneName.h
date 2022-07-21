#pragma once
#include "CoreMinimal.h"
#include "TraceBoneName.generated.h"

USTRUCT(BlueprintType)
struct FTraceBoneName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> BoneNames;
    
    HK_PROJECT_API FTraceBoneName();
};

