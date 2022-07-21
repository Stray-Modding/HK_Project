#include "CameraThirdPersonPreset.h"

FCameraThirdPersonPreset::FCameraThirdPersonPreset() {
    this->SmoothEnabled = false;
    this->SmoothUseSpeed = false;
    this->SmoothTimeTo90Percent = 0.00f;
    this->SmoothOutEnabled = false;
    this->SmoothOutUseSpeed = false;
    this->SmoothOutTimeTo90Percent = 0.00f;
    this->LookSpeedModifierEnabled = false;
    this->HorizontalLookSpeed = 0.00f;
    this->VerticalLookSpeed = 0.00f;
    this->DistanceModifierEnabled = false;
    this->DistanceRatio = 0.00f;
    this->FieldOfViewBaseEnabled = false;
    this->FieldOfViewBase = 0.00f;
    this->FieldOfViewCurveEnabled = false;
    this->FieldOfViewCurve = NULL;
    this->YawConstraintEnabled = false;
    this->YawConstraintAmplitude = 0.00f;
    this->PitchConstraintEnabled = false;
    this->PitchConstraintMin = 0.00f;
    this->PitchConstraintMax = 0.00f;
    this->CameraSplineEnabled = false;
    this->TargetSplineEnabled = false;
    this->Splines = NULL;
    this->AbsoluteOffsetEnabled = false;
    this->AbsoluteOffsetUseMinMaxPitch = false;
    this->AbsoluteOffsetPitchMin = 0.00f;
    this->AbsoluteOffsetPitchMax = 0.00f;
    this->CollisionExtrapolationEnabled = false;
    this->MaxCollisionExtrapolationDistance = 0.00f;
}

