#include "ZurgAttackPointManagerComponent.h"

class UZurgAttackPointComponent;
class AZurgPawnSlave;
class ULifeComponent;
class AActor;

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

