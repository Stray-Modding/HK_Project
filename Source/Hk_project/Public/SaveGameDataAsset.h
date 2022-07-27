#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SaveGameDataAsset.generated.h"

class UHKSaveGame;

UCLASS(Blueprintable)
class HK_PROJECT_API USaveGameDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString saveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHKSaveGame* SaveGame;
    
    USaveGameDataAsset();
    UFUNCTION(BlueprintCallable)
    void ImportSave();
    
};

