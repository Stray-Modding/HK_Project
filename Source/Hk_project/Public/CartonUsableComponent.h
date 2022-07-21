#pragma once
#include "CoreMinimal.h"
#include "CatUsableComponent.h"
#include "UObject/NoExportTypes.h"
#include "CartonUsableComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UCartonUsableComponent : public UCatUsableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_useConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_beginConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_endConstraint;
    
public:
    UCartonUsableComponent();
    UFUNCTION(BlueprintPure)
    bool IsPointWithinConstraints(FVector _point) const;
    
    UFUNCTION(BlueprintPure)
    FVector ConstrainPoint(FVector _point) const;
    
    UFUNCTION(BlueprintPure)
    FVector ConstrainDirection(FVector _direction) const;
    
};

