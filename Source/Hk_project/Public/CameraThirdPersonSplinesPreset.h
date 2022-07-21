#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraThirdPersonSplinesPreset.generated.h"

class USplineComponent;

UCLASS()
class HK_PROJECT_API ACameraThirdPersonSplinesPreset : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USplineComponent* m_cameraSpline;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USplineComponent* m_targetSpline;
    
public:
    ACameraThirdPersonSplinesPreset();
};

