#include "ZurgNewSettings.h"

UZurgNewSettings::UZurgNewSettings() {
    this->Life = 100;
    this->LifeRandomDelta = 10;
    this->LifeRegenerationTime = 0.00f;
    this->LifeRegenerationCoolDownAfterDamage = 1.00f;
    this->LifeRegenerationPerTime = 0.00f;
    this->CustomMovementBlendSpace = NULL;
    this->Precision = 1.00f;
    this->MinimumZurgCountCloseToTargetToAttack = 4;
    this->MinimalSwarmAttackDistance = 200.00f;
    this->MaximumJumpAttackDistance = 500.00f;
    this->MaximumHeightAttackDistance = 500.00f;
    this->AttackFuzzyDelay = 2.00f;
    this->KamikazePercentage = 100.00f;
    this->DamageToApplyPerSecond = 1.00f;
    this->TimeToKillCatInSecond = 2.00f;
    this->StruggleGaugeSize = 2.00f;
    this->SpeedModifier = 0.20f;
    this->AttachOnCatWhenHit = true;
    this->DistanceToAttachOnCat = 10.00f;
    this->VisionOffset = 100.00f;
    this->VisionUpperHeight = 50.00f;
    this->VisionLowerHeight = 50.00f;
    this->StatePropagationTime = 1.00f;
    this->AngryToRoutineWaitTime = 1.00f;
    this->AlertedToChasingWaitTime = 1.00f;
    this->AlertedWhileSleepingToChasingWaitTime = 1.00f;
    this->ProximityDetectionRadius = 50.00f;
    this->UnderLightWakeUpTime = 2.00f;
}

