#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HoudiniOutputObjectIdentifier.h"
#include "EHoudiniOutputType.h"
#include "HoudiniGeoPartObject.h"
#include "HoudiniOutputObject.h"
#include "HoudiniInstancedOutput.h"
#include "HoudiniOutput.generated.h"

class AActor;
class UMaterialInterface;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniOutput : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    EHoudiniOutputType Type;
    
    UPROPERTY()
    TArray<FHoudiniGeoPartObject> HoudiniGeoPartObjects;
    
    /*UPROPERTY(DuplicateTransient)
    TMap<FHoudiniOutputObjectIdentifier, FHoudiniOutputObject> OutputObjects;*/
    
    /*UPROPERTY()
    TMap<FHoudiniOutputObjectIdentifier, FHoudiniInstancedOutput> InstancedOutputs;*/
    
    UPROPERTY()
    TMap<FString, UMaterialInterface*> AssignementMaterials;
    
    UPROPERTY()
    TMap<FString, UMaterialInterface*> ReplacementMaterials;
    
    UPROPERTY()
    bool bLandscapeWorldComposition;
    
    UPROPERTY()
    TArray<AActor*> HoudiniCreatedSocketActors;
    
    UPROPERTY()
    TArray<AActor*> HoudiniAttachedSocketActors;
    
private:
    UPROPERTY()
    bool bIsEditableNode;
    
    UPROPERTY(DuplicateTransient, Transient)
    bool bHasEditableNodeBuilt;
    
    UPROPERTY()
    bool bIsUpdating;
    
    UPROPERTY()
    bool bCanDeleteHoudiniNodes;
    
public:
    UHoudiniOutput();
};

