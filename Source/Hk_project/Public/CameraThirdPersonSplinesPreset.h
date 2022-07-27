#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraThirdPersonSplinesPreset.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class HK_PROJECT_API ACameraThirdPersonSplinesPreset : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* m_cameraSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* m_targetSpline;
    
public:
    ACameraThirdPersonSplinesPreset();
};

