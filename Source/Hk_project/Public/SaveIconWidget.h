#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "SaveIconWidget.generated.h"

UCLASS(EditInlineNew)
class HK_PROJECT_API USaveIconWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_minimumFlashingDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_minimumFlashingOpacity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_maximumFlashingOpacity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_flashingSpeed;
    
public:
    USaveIconWidget();
};

