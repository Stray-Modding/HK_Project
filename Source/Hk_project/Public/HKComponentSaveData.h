#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HKComponentSaveData.generated.h"

USTRUCT(BlueprintType)
struct FHKComponentSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NoAttachment;
    
    HK_PROJECT_API FHKComponentSaveData();
};

