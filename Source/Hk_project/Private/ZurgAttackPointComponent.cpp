#include "ZurgAttackPointComponent.h"

class AZurgPawnSlave;
class UPrimitiveComponent;
class AActor;

AZurgPawnSlave* UZurgAttackPointComponent::GetAttachedZurg() const {
    return NULL;
}

void UZurgAttackPointComponent::DetachZurg() {
}

void UZurgAttackPointComponent::AttachZurg(AZurgPawnSlave* _zurg) {
}

void UZurgAttackPointComponent::_OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UZurgAttackPointComponent::UZurgAttackPointComponent() {
}

