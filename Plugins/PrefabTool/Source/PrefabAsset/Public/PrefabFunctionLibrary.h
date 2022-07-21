#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "PrefabFunctionLibrary.generated.h"

class APrefabActor;
class UObject;
class AActor;
class UPrefabAsset;

UCLASS(Blueprintable)
class PREFABASSET_API UPrefabFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPrefabFunctionLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static APrefabActor* SpawnPrefab(const UObject* WorldContextObject, UPrefabAsset* PrefabAsset, const FTransform& SpawnTransform, TArray<AActor*>& OutSpawnPrefabInstances, bool bSpawnInstancesOnly, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner);
    
};

