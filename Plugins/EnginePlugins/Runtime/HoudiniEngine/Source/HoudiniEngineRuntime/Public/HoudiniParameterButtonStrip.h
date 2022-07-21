#pragma once
#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterButtonStrip.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniParameterButtonStrip : public UHoudiniParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Count;
    
    UPROPERTY()
    TArray<FString> Labels;
    
    UPROPERTY()
    TArray<int32> Values;
    
    UHoudiniParameterButtonStrip();
};

