#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputCoreTypes.h"
#include "EGameControllerType.h"
#include "KeyIconSetData.generated.h"

class UKeyIconData;
class UTexture2D;

UCLASS(Blueprintable)
class HK_PROJECT_API UKeyIconSetData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UKeyIconData*> Keys;
    
    UKeyIconSetData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* FindIconForKey(const FKey& _key, EGameControllerType _controller) const;
    
};

