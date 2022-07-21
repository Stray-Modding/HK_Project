#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Photo.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UPhoto : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ScannedNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPhoto();
};

