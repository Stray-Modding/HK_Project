#pragma once
#include "CoreMinimal.h"
#include "HoudiniGenericAttributeChangedProperty.generated.h"

class UObject;

USTRUCT()
struct HOUDINIENGINERUNTIME_API FHoudiniGenericAttributeChangedProperty {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* Object;
    
    FHoudiniGenericAttributeChangedProperty();
};

