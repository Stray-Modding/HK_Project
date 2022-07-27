#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IconData.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class HK_PROJECT_API UIconData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UIconData();
};

