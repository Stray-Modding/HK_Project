#pragma once
#include "CoreMinimal.h"
#include "CatUsableComponentBase.h"
#include "CatUsableComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UCatUsableComponent : public UCatUsableComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_hasInteractionLimitAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_deactivateBackpackInteractions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_interactionLimitAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_interactionLimitAngleHysteresis;
    
public:
    UCatUsableComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanMeow() const;
    
};

