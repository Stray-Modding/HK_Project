#pragma once
#include "CoreMinimal.h"
#include "PrefabAsset.h"
#include "PrefabVariantAsset.generated.h"

UCLASS(Blueprintable)
class PREFABASSET_API UPrefabVariantAsset : public UPrefabAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPrefabAsset* Parent;
    
    UPrefabVariantAsset();
};

