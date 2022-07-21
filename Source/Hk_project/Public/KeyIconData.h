#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputCoreTypes.h"
#include "EGameControllerType.h"
#include "KeyIconData.generated.h"

class UIconData;

UCLASS()
class HK_PROJECT_API UKeyIconData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FKey Key;
    
    UPROPERTY(EditAnywhere)
    UIconData* DefaultIcon;
    
    UPROPERTY(EditAnywhere)
    TMap<EGameControllerType, UIconData*> ControllerIcons;
    
    UKeyIconData();
};

