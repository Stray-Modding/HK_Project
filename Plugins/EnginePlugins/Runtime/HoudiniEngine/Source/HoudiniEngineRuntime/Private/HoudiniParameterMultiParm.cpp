#include "HoudiniParameterMultiParm.h"

UHoudiniParameterMultiParm::UHoudiniParameterMultiParm() {
    this->bIsShown = false;
    this->Value = 0;
    this->MultiparmValue = 0;
    this->MultiParmInstanceNum = 0;
    this->MultiParmInstanceLength = 0;
    this->MultiParmInstanceCount = 0;
    this->InstanceStartOffset = 0;
    this->DefaultInstanceCount = 0;
}

