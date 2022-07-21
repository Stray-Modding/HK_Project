#pragma once
#include "CoreMinimal.h"
#include "EHoudiniLandscapeOutputBakeType.h"
#include "UObject/Object.h"
#include "HoudiniLandscapePtr.generated.h"

class ALandscapeProxy;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniLandscapePtr : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr;
    
    UPROPERTY()
    EHoudiniLandscapeOutputBakeType BakeType;
    
    UPROPERTY()
    FName EditLayerName;
    
    UHoudiniLandscapePtr();
};

