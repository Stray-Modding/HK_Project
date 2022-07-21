#pragma once
#include "CoreMinimal.h"
#include "Components/CheckBox.h"
#include "HKCheckBox.generated.h"

UCLASS()
class HK_PROJECT_API UHKCheckBox : public UCheckBox {
    GENERATED_BODY()
public:
    UHKCheckBox();
private:
    UFUNCTION()
    void _OnCheckStateChanged(bool _isChecked);
    
};

