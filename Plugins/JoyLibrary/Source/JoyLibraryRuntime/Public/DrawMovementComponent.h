#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EDrawMovementType.h"
#include "UObject/NoExportTypes.h"
#include "DrawMovementComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class JOYLIBRARYRUNTIME_API UDrawMovementComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DrawLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DrawHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DrawThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StartEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor DrawColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EDrawMovementType> DrawType;
    
    UDrawMovementComponent();
    UFUNCTION(BlueprintCallable)
    void SetDrawEnabled(bool _enabled);
    
    UFUNCTION(BlueprintPure)
    bool IsDrawEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

