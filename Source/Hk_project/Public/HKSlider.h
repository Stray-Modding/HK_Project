#pragma once
#include "CoreMinimal.h"
#include "Components/Slider.h"
#include "HKSlider.generated.h"

UCLASS()
class HK_PROJECT_API UHKSlider : public USlider {
    GENERATED_BODY()
public:
    UHKSlider();
private:
    UFUNCTION()
    void _OnValueChanged(float _value);
    
};

