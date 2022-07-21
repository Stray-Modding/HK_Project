#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IconData.generated.h"

class UTexture2D;

UCLASS()
class HK_PROJECT_API UIconData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture2D* Texture;
    
    UIconData();
};

