#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Engine/EngineTypes.h"
#include "IEMableComponent.generated.h"

class UIEMableComponent;
class AActor;
class AIEM;
class UPrimitiveComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UIEMableComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIEMedDelegate, UIEMableComponent*, _IEMableComponent, AIEM*, _IEM);
    
    UPROPERTY(BlueprintAssignable)
    FIEMedDelegate OnIEMed;
    
    UIEMableComponent();
private:
    UFUNCTION()
    void _OnBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
};

