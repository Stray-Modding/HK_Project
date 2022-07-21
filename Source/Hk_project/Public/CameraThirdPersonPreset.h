#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "CameraThirdPersonPreset.generated.h"

class UCurveFloat;
class ACameraThirdPersonSplinesPreset;

USTRUCT(BlueprintType)
struct HK_PROJECT_API FCameraThirdPersonPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SmoothEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SmoothUseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmoothTimeTo90Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SmoothOutEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SmoothOutUseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmoothOutTimeTo90Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LookSpeedModifierEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HorizontalLookSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VerticalLookSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DistanceModifierEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FieldOfViewBaseEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FieldOfViewBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FieldOfViewCurveEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* FieldOfViewCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool YawConstraintEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YawConstraintAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector YawConstraintDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PitchConstraintEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchConstraintMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchConstraintMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CameraSplineEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TargetSplineEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ACameraThirdPersonSplinesPreset> Splines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AbsoluteOffsetEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AbsoluteOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AbsoluteOffsetUseMinMaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AbsoluteOffsetPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AbsoluteOffsetPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CollisionExtrapolationEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxCollisionExtrapolationDistance;
    
    FCameraThirdPersonPreset();
};

