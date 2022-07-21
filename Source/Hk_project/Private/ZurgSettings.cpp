#include "ZurgSettings.h"

UZurgSettings::UZurgSettings() {
    this->NormalSpeed = 200.00f;
    this->MinAttackSpeed = 400.00f;
    this->MaxAttackSpeed = 600.00f;
    this->MinAttackSpeedDistance = 300.00f;
    this->MaxAttackSpeedDistance = 600.00f;
    this->JumpRange = 100.00f;
    this->JumpAnticipationRatio = 1.00f;
    this->DelayBeforeJump = 0.05f;
    this->DelayBeforeJumpRandomRange = 0.10f;
    this->DelayBetweenJumps = 0.50f;
    this->JumpArcRatio = 0.70f;
    this->JumpArrivalRandomZoneRadius = 50.00f;
    this->EjectDistance = 150.00f;
    this->EjectDistanceRandomRange = 5.00f;
    this->EjectStunTime = 5.00f;
    this->SightRadius = 800.00f;
    this->VisionConeAngleInDegrees = 45.00f;
    this->SureVisionConeAngleInDegrees = 30.00f;
    this->MinRatioToLoseSight = 2.00f;
    this->JumpPerceptionHeightLimit = 100.00f;
    this->CloseEncounterRadius = 60.00f;
    this->StruggleGaugeSize = 2.00f;
    this->LifeDecayPerSecond = 2.00f;
    this->SpeedModifier = 0.20f;
    this->AlertsSize = 400.00f;
    this->AlertsGrowingTime = 0.50f;
    this->AlertsSustainTime = 0.50f;
    this->MinDistanceBetweenAlerts = 50.00f;
    this->TimeToBeSure = 0.50f;
    this->TimeToBeSureRandomRange = 0.10f;
    this->SureIntroductionStateDuration = 1.00f;
    this->SureIntroductionStateDurationRandomRange = 0.10f;
    this->SearchDuration = 10.00f;
    this->SearchDurationRandomRange = 0.50f;
    this->TimeBetweenDirectionChange = 0.60f;
    this->TimeBetweenDirectionChangeRandomRange = 0.20f;
    this->PlayIntroductionOnRedetect = false;
}

