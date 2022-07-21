#include "ZurgAttackPointManagerComponent.h"

class AActor;
class UZurgAttackPointComponent;
class AZurgPawnSlave;
class ULifeComponent;

void UZurgAttackPointManagerComponent::SetAttackPointsActive(bool _active) {
}

void UZurgAttackPointManagerComponent::OnZurgDetached(UZurgAttackPointComponent* _zurgAttackPoint, AZurgPawnSlave* _zurg) {
}

void UZurgAttackPointManagerComponent::OnZurgAttached(UZurgAttackPointComponent* _zurgAttackPoint, AZurgPawnSlave* _zurg) {
}

bool UZurgAttackPointManagerComponent::IsAttackPointsActive() {
    return false;
}

void UZurgAttackPointManagerComponent::_OnLifeComponentKilled(ULifeComponent* _lifeComponent, AActor* _killer) {
}

UZurgAttackPointManagerComponent::UZurgAttackPointManagerComponent() {
}

