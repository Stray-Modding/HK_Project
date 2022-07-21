#include "SentinelSettings.h"

USentinelSettings::USentinelSettings() {
    this->Aggressive = true;
    this->MinimumDistanceDetectionWhenTargetIsHiding = 100.00f;
    this->VisionLightRotationSpeed = 1.00f;
    this->ForwardLocationPrediction = 0.50f;
    this->ForwardDirectionPrediction = 0.50f;
    this->DistanceFromTargetToStartBraking = 100.00f;
    this->ReachAcceptanceDistance = 0.00f;
    this->RotationToMovementInTime = 1.00f;
    this->InactiveZOffset = 100.00f;
    this->PatrolZOffset = 160.00f;
    this->DetectZOffset = 190.00f;
    this->SearchingZOffset = 190.00f;
    this->ChasingZOffset = 130.00f;
    this->ZOffsetMovementTime = 1.00f;
    this->PatrolMovementSpeed = 300.00f;
    this->DetectMovementSpeed = 300.00f;
    this->SearchingMovementSpeed = 300.00f;
    this->ChasingMovementSpeed = 350.00f;
    this->InactiveEyeRadius = 44.00f;
    this->PatrolEyeRadius = 44.00f;
    this->DetectionEyeRadius = 20.00f;
    this->SearchingEyeRadius = 44.00f;
    this->ChasingEyeRadius = 15.00f;
    this->TazerProjectileClass = NULL;
    this->TazerInterShootDelay = 0.20f;
    this->TazerReloadTime = 2.00f;
    this->TazerMaxShootCount = 5;
    this->TazerMinimumShootingDistance = 200.00f;
    this->TazerShootingDistanceHysteresis = 50.00f;
    this->TazerLoadingTime = 2.00f;
    this->TazerUnLoadingTime = 1.00f;
    this->TazerInnerRadiusPrecision = 30.00f;
    this->TazerOutterRadiusPrecision = 45.00f;
    this->TazerPrecisionScaleUpTime = 1.00f;
    this->TazerPrecisionScaleDownTime = 1.00f;
    this->PatrolToSoundDetectionTimeInSecond = 1.00f;
    this->PatrolToVisionDetectionTimeInSecond = 1.00f;
    this->DetectSoundToSearchingTimeInSecond = 1.00f;
    this->DetectVisionToChasingTimeInSecond = 1.00f;
    this->DetectVisionToPatrolTimeInSecond = 1.00f;
    this->SearchingViewToChasingTimeInSecond = 1.00f;
    this->SearchingToPatrolWaitTimeInSecond = 1.00f;
    this->SearchingScanAngleInDegree = 45.00f;
    this->SearchingScanCount = 3.00f;
    this->ChasingVisionLostTime = 1.00f;
}

