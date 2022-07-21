#include "AntiZurgZoneComponent.h"

class AActor;
class UAntiZurgSpotlightComponent;
class UPrimitiveComponent;

void UAntiZurgZoneComponent::SetSpotlightOwner(UAntiZurgSpotlightComponent* _newSpotlight) {
}

UAntiZurgSpotlightComponent* UAntiZurgZoneComponent::GetSpotLightOwner() const {
    return NULL;
}

void UAntiZurgZoneComponent::_OnSphereEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UAntiZurgZoneComponent::_OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UAntiZurgZoneComponent::UAntiZurgZoneComponent() {
    this->m_navArea = NULL;
}

