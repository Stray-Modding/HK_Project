#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "SaveIconWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HK_PROJECT_API USaveIconWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minimumFlashingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minimumFlashingOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maximumFlashingOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_flashingSpeed;
    
public:
    USaveIconWidget();
};

