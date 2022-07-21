#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "UObject/NoExportTypes.h"
#include "HKTextBlock.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UHKTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_selectedColor;
    
public:
    UHKTextBlock();
};

