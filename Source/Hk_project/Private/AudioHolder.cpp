#include "AudioHolder.h"

class UAudioComponent;

void UAudioHolder::SetHolderCollisionRadius(float _radius) {
}

void UAudioHolder::SetHolderCollisionEnabled(bool _enabled) {
}



bool UAudioHolder::IsHolderCollisionEnabled() const {
    return false;
}

UAudioComponent* UAudioHolder::GetHolderAudio(uint8 _index) const {
    return NULL;
}

UAudioHolder::UAudioHolder() {
    this->AudioComponentCount = 1;
    this->MovementSnappingDistance = 50.00f;
    this->m_cameraManager = NULL;
}

