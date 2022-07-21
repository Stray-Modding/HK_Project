#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EDrawMovementType.h"
#include "UObject/NoExportTypes.h"
#include "DrawMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class JOYLIBRARYRUNTIME_API UDrawMovementComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DrawColor;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EDrawMovementType> DrawType;
    
    UDrawMovementComponent();
    UFUNCTION(BlueprintCallable)
    void SetDrawEnabled(bool _enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrawEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

