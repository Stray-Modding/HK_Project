#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "PrefabVariantRule.h"
#include "PrefabComponent.generated.h"

class UPrefabAsset;
class AActor;
class UBlueprint;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PREFABASSET_API UPrefabComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bConnected: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockSelection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    UPrefabAsset* Prefab;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditInstanceOnly)
    UBlueprint* GeneratedBlueprint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    TMap<FName, AActor*> PrefabInstancesMap;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TArray<FPrefabVariantRule> VariantRulesOverwrite;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditInstanceOnly)
    uint8 bTransient: 1;
    
    UPrefabComponent();
};

