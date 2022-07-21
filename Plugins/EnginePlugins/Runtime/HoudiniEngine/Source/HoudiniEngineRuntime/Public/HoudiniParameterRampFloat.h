#pragma once
#include "CoreMinimal.h"
#include "HoudiniParameterMultiParm.h"
#include "HoudiniParameterRampFloat.generated.h"

class UHoudiniParameterRampFloatPoint;
class UHoudiniParameterRampModificationEvent;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniParameterRampFloat : public UHoudiniParameterMultiParm {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    TArray<UHoudiniParameterRampFloatPoint*> Points;
    
    UPROPERTY(Instanced)
    TArray<UHoudiniParameterRampFloatPoint*> CachedPoints;
    
    UPROPERTY()
    TArray<float> DefaultPositions;
    
    UPROPERTY()
    TArray<float> DefaultValues;
    
    UPROPERTY()
    TArray<int32> DefaultChoices;
    
    UPROPERTY()
    int32 NumDefaultPoints;
    
    UPROPERTY()
    bool bCaching;
    
    UPROPERTY(Instanced)
    TArray<UHoudiniParameterRampModificationEvent*> ModificationEvents;
    
    UHoudiniParameterRampFloat();
};

