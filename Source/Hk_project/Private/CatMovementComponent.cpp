#include "CatMovementComponent.h"

class UPrimitiveComponent;
class AActor;

void UCatMovementComponent::_CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UCatMovementComponent::UCatMovementComponent() {
    this->m_touchForceFactor = 1.00f;
    this->m_minTouchForce = -1.00f;
    this->m_maxTouchForce = 250.00f;
    this->m_initialPushForceFactor = 500.00f;
    this->m_pushForceFactor = 750000.00f;
    this->m_additionalDistanceFromGaps = 5.00f;
    this->m_stateMachine = NULL;
}

