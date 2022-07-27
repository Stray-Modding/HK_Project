#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Border.h"
#include "HKBorder.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UHKBorder : public UBorder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_selectedColor;
    
public:
    UHKBorder();
};

