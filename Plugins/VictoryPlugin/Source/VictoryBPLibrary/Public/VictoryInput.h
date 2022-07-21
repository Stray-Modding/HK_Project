#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "VictoryInput.generated.h"

USTRUCT(BlueprintType)
struct FVictoryInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString KeyAsString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bShift: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCtrl: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAlt: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCmd: 1;
    
    VICTORYBPLIBRARY_API FVictoryInput();
};

