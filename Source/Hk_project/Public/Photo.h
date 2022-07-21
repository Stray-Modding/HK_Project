#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Photo.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class UPhoto : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<FText> ScannedNames;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* Texture;
    
    UPhoto();
};

