#pragma once
#include "CoreMinimal.h"
#include "CatUsableComponentBase.h"
#include "CatUsableComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UCatUsableComponent : public UCatUsableComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_hasInteractionLimitAngle;
    
    UPROPERTY(EditAnywhere)
    bool m_deactivateBackpackInteractions;
    
private:
    UPROPERTY(EditAnywhere)
    float m_interactionLimitAngle;
    
    UPROPERTY(EditAnywhere)
    float m_interactionLimitAngleHysteresis;
    
public:
    UCatUsableComponent();
    UFUNCTION(BlueprintNativeEvent)
    bool CanMeow() const;
    
};

