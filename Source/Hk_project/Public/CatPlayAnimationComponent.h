#pragma once
#include "CoreMinimal.h"
#include "CatMoveToUsableComponent.h"
#include "CatPlayAnimationComponent.generated.h"

class UAnimSequence;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UCatPlayAnimationComponent : public UCatMoveToUsableComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_animation;
    
    UPROPERTY(EditAnywhere)
    float m_syncTime;
    
public:
    UCatPlayAnimationComponent();
};

