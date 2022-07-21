#include "DroneSettings.h"

UDroneSettings::UDroneSettings() {
    this->BatteryRechargeSpeed = 2.00f;
    this->BatteryDechargeSpeed = 0.10f;
    this->BatteryStartToRumble = 0.50f;
    this->StrongLightReactivationPercentage = 1.00f;
    this->StrongLightInnerConeAngle = 25.00f;
    this->StrongLightOutterConeAngle = 25.00f;
    this->StrongLightAttenuation = 1000.00f;
    this->DamageToApplyPerTime = 2.00f;
    this->DamageApplicationTimeInSecond = 2.00f;
    this->RadialDamageCurve = NULL;
    this->DistanceDamageCurve = NULL;
}

