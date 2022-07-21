#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SaveGameDataAsset.generated.h"

class UHKSaveGame;

UCLASS()
class HK_PROJECT_API USaveGameDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString saveName;
    
    UPROPERTY()
    UHKSaveGame* SaveGame;
    
    USaveGameDataAsset();
    UFUNCTION()
    void ImportSave();
    
};

