#pragma once
#include "CoreMinimal.h"
#include "EDialogOrientationMode.h"
#include "DialogLineSynchronized.h"
#include "DialogLineAdvanced.generated.h"

class UAnimSequence;
class UMaterialInstance;
class AActor;

USTRUCT(BlueprintType)
struct FDialogLineAdvanced {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogLineSynchronized Synchronized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSynchronized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* ScreenMaterial;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EDialogOrientationMode> LookAtMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LookAtActor;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EDialogOrientationMode> TurnTowardsMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TurnTowardsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ShowDirectionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DroneTargetTransform;
    
    HK_PROJECT_API FDialogLineAdvanced();
};

