#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniParameterMultiParm.h"
#include "HoudiniParameterRampColor.generated.h"

class UHoudiniParameterRampColorPoint;
class UHoudiniParameterRampModificationEvent;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniParameterRampColor : public UHoudiniParameterMultiParm {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    TArray<UHoudiniParameterRampColorPoint*> Points;
    
    UPROPERTY()
    bool bCaching;
    
    UPROPERTY(Instanced)
    TArray<UHoudiniParameterRampColorPoint*> CachedPoints;
    
    UPROPERTY()
    TArray<float> DefaultPositions;
    
    UPROPERTY()
    TArray<FLinearColor> DefaultValues;
    
    UPROPERTY()
    TArray<int32> DefaultChoices;
    
    UPROPERTY()
    int32 NumDefaultPoints;
    
    UPROPERTY(Instanced)
    TArray<UHoudiniParameterRampModificationEvent*> ModificationEvents;
    
    UHoudiniParameterRampColor();
};

