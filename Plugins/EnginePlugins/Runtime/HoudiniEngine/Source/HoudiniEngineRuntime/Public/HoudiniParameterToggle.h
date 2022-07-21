#pragma once
#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterToggle.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniParameterToggle : public UHoudiniParameter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<int32> Values;
    
    UPROPERTY()
    TArray<int32> DefaultValues;
    
public:
    UHoudiniParameterToggle();
};

