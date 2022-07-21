#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StartData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FStartData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AActor>> Inventory;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> UnlockedMemories;
    
    UPROPERTY(EditAnywhere)
    bool GodMode;
    
    UPROPERTY(EditAnywhere)
    bool NoBackpack;
    
    UPROPERTY(EditAnywhere)
    bool NoTorchlight;
    
    HK_PROJECT_API FStartData();
};

