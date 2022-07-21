#pragma once
#include "CoreMinimal.h"
#include "Components/ProgressBar.h"
#include "HKProgressBar.generated.h"

UCLASS()
class HK_PROJECT_API UHKProgressBar : public UProgressBar {
    GENERATED_BODY()
public:
    UHKProgressBar();
private:
    UFUNCTION()
    void _OnValueChanged(float _value);
    
};

