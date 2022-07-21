#include "PIDTools.h"

FVector UPIDTools::UpdateVectorPIDController(FVectorPIDController& _PID, FVector _current, FVector _target, float _dt) {
    return FVector{};
}

float UPIDTools::UpdateFloatPIDController(FFloatPIDController& _PID, float _current, float _target, float _dt) {
    return 0.0f;
}

void UPIDTools::ResetVectorPIDController(FVectorPIDController& _PID) {
}

void UPIDTools::ResetFloatPIDController(FFloatPIDController& _PID) {
}

UPIDTools::UPIDTools() {
}

