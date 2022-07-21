#pragma once
#include "CoreMinimal.h"
#include "CatMoveToUsableComponent.h"
#include "CatPlayAnimationComponent.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UCatPlayAnimationComponent : public UCatMoveToUsableComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_syncTime;
    
public:
    UCatPlayAnimationComponent();
};

