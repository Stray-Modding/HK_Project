#include "LightableComponent.h"

class UAntiZurgSpotlightComponent;
class USceneComponent;

void ULightableComponent::IsEnlighten(bool& _enlighten, float& _lightingRatio) {
}

USceneComponent* ULightableComponent::GetOwnerSceneComponent() {
    return NULL;
}

TArray<UAntiZurgSpotlightComponent*> ULightableComponent::GetLights() const {
    return TArray<UAntiZurgSpotlightComponent*>();
}

void ULightableComponent::EnlightenEnd_Implementation(UAntiZurgSpotlightComponent* _spotlight) {
}

void ULightableComponent::EnlightenBegin_Implementation(UAntiZurgSpotlightComponent* _spotlight) {
}

ULightableComponent::ULightableComponent() {
}

