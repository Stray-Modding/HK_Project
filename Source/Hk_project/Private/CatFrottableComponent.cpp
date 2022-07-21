#include "CatFrottableComponent.h"

class UCapsuleComponent;

void UCatFrottableComponent::SetCylinder(UCapsuleComponent* _capsule) {
}

UCatFrottableComponent::UCatFrottableComponent() {
    this->m_trajectorySpline = NULL;
    this->m_cylinder = NULL;
    this->m_useConstraints = false;
    this->m_beginConstraint = 0.00f;
    this->m_endConstraint = 0.00f;
    this->m_eventBroadcastOffset = 0.00f;
    this->m_debugEnabled = false;
    this->m_defaultRadius = 10.00f;
    this->m_frottingDistance = 10.00f;
    this->m_frotMarkerName = TEXT("FrotFrot");
    this->m_leftFrottingAnimation = NULL;
    this->m_rightFrottingAnimation = NULL;
    this->m_interpolationErrorRecoveryTime = 0.20f;
}

