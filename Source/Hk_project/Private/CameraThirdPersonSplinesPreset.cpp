#include "CameraThirdPersonSplinesPreset.h"
#include "Components/SplineComponent.h"

ACameraThirdPersonSplinesPreset::ACameraThirdPersonSplinesPreset() {
    this->m_cameraSpline = CreateDefaultSubobject<USplineComponent>(TEXT("cameraSpline"));
    this->m_targetSpline = CreateDefaultSubobject<USplineComponent>(TEXT("targetSpline"));
}

