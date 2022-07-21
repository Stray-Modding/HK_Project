#include "CatBend2.h"

void ACatBend2::ProcessSpine() {
}


FRotator ACatBend2::GetSpineBoneRotation(int32 _boneIndex) const {
    return FRotator{};
}



ACatBend2::ACatBend2() {
    this->m_boneRotationSmoothTime = 0.10f;
    this->m_isRelaxEnabled = false;
    this->m_relaxIterationCount = 1;
    this->m_relaxCenterWeight = 1.00f;
    this->m_relaxSideWeight = 0.50f;
}

