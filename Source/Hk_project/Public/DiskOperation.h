#pragma once
#include "CoreMinimal.h"
#include "DiskOperation.generated.h"

class USaveGame;

USTRUCT(BlueprintType)
struct FDiskOperation {
    GENERATED_BODY()
public:
    UPROPERTY()
    USaveGame* SaveGame;
    
    HK_PROJECT_API FDiskOperation();
};

