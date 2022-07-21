#include "NoisableComponent.h"

class AActor;

void UNoisableComponent::SetEnabled(bool _enable) {
}

bool UNoisableComponent::OnNoise_Implementation(FVector _location, AActor* _emitter) {
    return false;
}

bool UNoisableComponent::IsEnabled() const {
    return false;
}

UNoisableComponent::UNoisableComponent() {
}

