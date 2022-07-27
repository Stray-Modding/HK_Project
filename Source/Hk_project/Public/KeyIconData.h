#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EGameControllerType.h"
#include "InputCoreTypes.h"
#include "KeyIconData.generated.h"

class UIconData;

UCLASS(Blueprintable)
class HK_PROJECT_API UKeyIconData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIconData* DefaultIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGameControllerType, UIconData*> ControllerIcons;
    
    UKeyIconData();
};

