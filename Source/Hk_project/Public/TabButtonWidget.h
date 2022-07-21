#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "TabButtonWidget.generated.h"

class UImage;
class UHKButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HK_PROJECT_API UTabButtonWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHKButton* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* ButtonTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* ButtonImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonText;
    
public:
    UTabButtonWidget();
};

