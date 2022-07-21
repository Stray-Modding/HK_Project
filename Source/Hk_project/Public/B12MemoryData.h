#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "B12MemoryData.generated.h"

class ADialog;
class UTexture2D;
class AActor;

USTRUCT(BlueprintType)
struct FB12MemoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* LockedIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* UnlockedIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> UnlockedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* LockedBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ADialog> Dialog;
    
    HK_PROJECT_API FB12MemoryData();
};

