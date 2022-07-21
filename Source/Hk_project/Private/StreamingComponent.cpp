#include "StreamingComponent.h"

class UPrimitiveComponent;

void UStreamingComponent::SetComponentSimulatePhysics(UPrimitiveComponent* _component, bool _simulatePhysics) {
}

void UStreamingComponent::SetComponentCollisionEnabled(UPrimitiveComponent* _component, TEnumAsByte<ECollisionEnabled::Type> _collisionEnabled) {
}

bool UStreamingComponent::IsStreamedIn() const {
    return false;
}



UStreamingComponent::UStreamingComponent() {
    this->bDoNotTickUntilStreamedIn = true;
    this->bDisablePhysicsUntilStreamedIn = true;
}

