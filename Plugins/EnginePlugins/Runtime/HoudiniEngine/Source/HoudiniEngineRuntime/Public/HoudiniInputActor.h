#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "HoudiniInputActor.generated.h"

class UHoudiniInputSceneComponent;
class UObject;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputActor : public UHoudiniInputObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UHoudiniInputSceneComponent*> ActorComponents;
    
    UPROPERTY()
    TSet<TSoftObjectPtr<UObject>> ActorSceneComponents;
    
    UPROPERTY()
    int32 LastUpdateNumComponentsAdded;
    
    UPROPERTY()
    int32 LastUpdateNumComponentsRemoved;
    
public:
    UHoudiniInputActor();
};

