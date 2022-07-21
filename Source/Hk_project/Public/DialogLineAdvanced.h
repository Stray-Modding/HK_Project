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
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDialogLineSynchronized Synchronized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsSynchronized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LoopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* ScreenMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EDialogOrientationMode> LookAtMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* LookAtActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EDialogOrientationMode> TurnTowardsMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* TurnTowardsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* ShowDirectionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* DroneTargetTransform;
    
    HK_PROJECT_API FDialogLineAdvanced();
};

