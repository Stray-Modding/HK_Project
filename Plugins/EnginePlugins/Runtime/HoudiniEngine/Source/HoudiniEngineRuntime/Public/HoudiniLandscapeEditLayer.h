#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HoudiniLandscapeEditLayer.generated.h"

class ALandscapeProxy;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniLandscapeEditLayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr;
    
    UPROPERTY()
    FString LayerName;
    
    UHoudiniLandscapeEditLayer();
};

