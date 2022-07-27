#include "PrefabFunctionLibrary.h"

class UObject;
class UPrefabAsset;
class AActor;
class APrefabActor;

APrefabActor* UPrefabFunctionLibrary::SpawnPrefab(const UObject* WorldContextObject, UPrefabAsset* PrefabAsset, const FTransform& SpawnTransform, TArray<AActor*>& OutSpawnPrefabInstances, bool bSpawnInstancesOnly, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner) {
    return NULL;
}

UPrefabFunctionLibrary::UPrefabFunctionLibrary() {
}

