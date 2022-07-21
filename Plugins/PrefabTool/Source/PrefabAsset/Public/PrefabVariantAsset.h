#pragma once
#include "CoreMinimal.h"
#include "PrefabAsset.h"
#include "PrefabVariantAsset.generated.h"

UCLASS()
class PREFABASSET_API UPrefabVariantAsset : public UPrefabAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, VisibleAnywhere)
    UPrefabAsset* Parent;
    
    UPrefabVariantAsset();
};

