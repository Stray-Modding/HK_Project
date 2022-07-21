#pragma once
#include "CoreMinimal.h"
#include "CatUsableComponent.h"
#include "CatFrottableComponent.generated.h"

class UAnimSequence;
class USplineComponent;
class UCatFrottableComponent;
class UCapsuleComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UCatFrottableComponent : public UCatUsableComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCatFrottableDelegate, UCatFrottableComponent*, _component);
    
    UPROPERTY(BlueprintAssignable)
    FCatFrottableDelegate OnFrotted;
    
private:
    UPROPERTY(Export, Transient)
    USplineComponent* m_trajectorySpline;
    
    UPROPERTY(Export, Transient)
    UCapsuleComponent* m_cylinder;
    
    UPROPERTY(EditAnywhere)
    bool m_useConstraints;
    
    UPROPERTY(EditAnywhere)
    float m_beginConstraint;
    
    UPROPERTY(EditAnywhere)
    float m_endConstraint;
    
    UPROPERTY(EditAnywhere)
    float m_eventBroadcastOffset;
    
    UPROPERTY(EditAnywhere)
    bool m_debugEnabled;
    
    UPROPERTY(EditAnywhere)
    float m_defaultRadius;
    
    UPROPERTY(EditAnywhere)
    float m_frottingDistance;
    
    UPROPERTY(EditAnywhere)
    FName m_frotMarkerName;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_leftFrottingAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_rightFrottingAnimation;
    
    UPROPERTY(EditAnywhere)
    float m_interpolationErrorRecoveryTime;
    
public:
    UCatFrottableComponent();
    UFUNCTION(BlueprintCallable)
    void SetCylinder(UCapsuleComponent* _capsule);
    
};

