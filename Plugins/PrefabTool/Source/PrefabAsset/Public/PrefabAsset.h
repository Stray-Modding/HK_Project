#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PrefabAsset.generated.h"

UCLASS(BlueprintType)
class PREFABASSET_API UPrefabAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FString, FSoftObjectPath> AssetReferences;
    
    UPROPERTY(VisibleAnywhere)
    FSoftObjectPath GeneratedBlueprintAssetReference;
    
private:
    UPROPERTY(VisibleAnywhere)
    FGuid PrefabId;
    
    UPROPERTY(EditAnywhere)
    FString PrefabContent;
    
    UPROPERTY(VisibleAnywhere)
    FString PrefabHash;
    
    UPROPERTY()
    int32 NumActors;
    
    UPROPERTY()
    FVector PrefabPivot;
    
public:
    UPrefabAsset();
};

