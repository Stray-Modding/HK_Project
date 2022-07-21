#include "ProximityProbeComponent.h"

bool UProximityProbeComponent::IsObstacleDetected(TEnumAsByte<EProximityProbeDirection> _probeIndex) const {
    return false;
}

FVector UProximityProbeComponent::GetObstacleLocation(TEnumAsByte<EProximityProbeDirection> _probeIndex) const {
    return FVector{};
}

float UProximityProbeComponent::GetObstacleDistance(TEnumAsByte<EProximityProbeDirection> _probeIndex) const {
    return 0.0f;
}

UProximityProbeComponent::UProximityProbeComponent() {
    this->IgnoreRight = false;
    this->IgnoreLeft = false;
    this->IgnoreUp = false;
    this->IgnoreDown = false;
    this->IgnoreFront = false;
    this->IgnoreBack = false;
    this->ProbeEndDistance = 40.00f;
    this->ProbeStartDistance = 10.00f;
    this->ProbeRadius = 20.00f;
    this->TraceChannel = ECC_WorldStatic;
    this->m_probes[0] = NULL;
    this->m_probes[1] = NULL;
    this->m_probes[2] = NULL;
    this->m_probes[3] = NULL;
    this->m_probes[4] = NULL;
    this->m_probes[5] = NULL;
}

