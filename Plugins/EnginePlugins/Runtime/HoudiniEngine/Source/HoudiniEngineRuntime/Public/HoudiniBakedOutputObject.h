#pragma once
#include "CoreMinimal.h"
#include "HoudiniBakedOutputObject.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniBakedOutputObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Actor;
    
    UPROPERTY()
    FString Blueprint;
    
    UPROPERTY()
    FName ActorBakeName;
    
    UPROPERTY()
    FString BakedObject;
    
    UPROPERTY()
    FString BakedComponent;
    
    UPROPERTY()
    TArray<FString> InstancedActors;
    
    UPROPERTY()
    TArray<FString> InstancedComponents;
    
    UPROPERTY()
    TMap<FName, FString> LandscapeLayers;
    
    FHoudiniBakedOutputObject();
};

