#include "MovingActorComponent.h"

class USaveComponent;

void UMovingActorComponent::Reset() {
}

FTransform UMovingActorComponent::PredictTransform(const FTransform& _transform, float _dt) const {
    return FTransform{};
}

void UMovingActorComponent::_OnAfterLoaded(USaveComponent* _saveComponent) {
}

UMovingActorComponent::UMovingActorComponent() {
}

