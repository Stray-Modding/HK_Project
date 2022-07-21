#include "DroneUsableComponent.h"

class USceneComponent;
class ADrone;

void UDroneUsableComponent::SetUsePosition(USceneComponent* _usePosition, FName _socket) {
}

bool UDroneUsableComponent::IsDroneUsing() const {
    return false;
}

ADrone* UDroneUsableComponent::GetUserDrone() const {
    return NULL;
}

USceneComponent* UDroneUsableComponent::GetUsePosition(FName& _outSocket) const {
    return NULL;
}

USceneComponent* UDroneUsableComponent::GetFinalUseSocket_Implementation(FName& _outSocket) const {
    return NULL;
}

void UDroneUsableComponent::EndDroneUse() {
}

void UDroneUsableComponent::_OnDroneUseStarted_Implementation(ADrone* _drone) {
}

void UDroneUsableComponent::_OnDroneUseEnded_Implementation(ADrone* _drone) {
}

bool UDroneUsableComponent::_IsDroneReadyToUnfold_Implementation() const {
    return false;
}

bool UDroneUsableComponent::_CanStartUse_Implementation() const {
    return false;
}

UDroneUsableComponent::UDroneUsableComponent() {
}

