#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "UObject/NoExportTypes.h"
#include "HKTextBlock.generated.h"

UCLASS()
class HK_PROJECT_API UHKTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_selectedColor;
    
public:
    UHKTextBlock();
};

