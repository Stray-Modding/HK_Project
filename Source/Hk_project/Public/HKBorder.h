#pragma once
#include "CoreMinimal.h"
#include "Components/Border.h"
#include "UObject/NoExportTypes.h"
#include "HKBorder.generated.h"

UCLASS()
class HK_PROJECT_API UHKBorder : public UBorder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_selectedColor;
    
public:
    UHKBorder();
};

