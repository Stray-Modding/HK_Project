#pragma once
#include "CoreMinimal.h"
#include "CatUsableComponent.h"
#include "UObject/NoExportTypes.h"
#include "CartonUsableComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UCartonUsableComponent : public UCatUsableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_beginConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_endConstraint;
    
public:
    UCartonUsableComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointWithinConstraints(FVector _point) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ConstrainPoint(FVector _point) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ConstrainDirection(FVector _direction) const;
    
};

