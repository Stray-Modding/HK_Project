#include "SentinelProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"

void ASentinelProjectile::Shoot(FVector _direction) {
}

void ASentinelProjectile::SetMode(ESentinelProjectileState _newMode) {
}

void ASentinelProjectile::Projectile_WaitingDestroy_Tick_Implementation(float _dt) {
}

void ASentinelProjectile::Projectile_WaitingDestroy_Exit_Implementation() {
}

void ASentinelProjectile::Projectile_WaitingDestroy_Enter_Implementation() {
}

void ASentinelProjectile::Projectile_Snapped_Tick_Implementation(float _dt) {
}

void ASentinelProjectile::Projectile_Snapped_Exit_Implementation() {
}

void ASentinelProjectile::Projectile_Snapped_Enter_Implementation() {
}

void ASentinelProjectile::Projectile_Shooted_Exit_Implementation() {
}

void ASentinelProjectile::Projectile_Shooted_Enter_Implementation() {
}

void ASentinelProjectile::Projectile_None_Tick_Implementation(float _dt) {
}

void ASentinelProjectile::Projectile_None_Exit_Implementation() {
}

void ASentinelProjectile::Projectile_None_Enter_Implementation() {
}

void ASentinelProjectile::Projectile_InAir_Tick_Implementation(float _dt) {
}

void ASentinelProjectile::Projectile_InAir_Exit_Implementation() {
}

void ASentinelProjectile::Projectile_InAir_Enter_Implementation() {
}


FHitResult ASentinelProjectile::GetHitResult() {
    return FHitResult{};
}

ESentinelProjectileState ASentinelProjectile::GetCurrentMode() {
    return ESentinelProjectileState::Projectile_None;
}

void ASentinelProjectile::_OnProjectileHit(const FHitResult& _hitResult) {
}

ASentinelProjectile::ASentinelProjectile() {
    this->m_projectileSphereColliderComponent = CreateDefaultSubobject<USphereComponent>(TEXT("m_projctileSphereColliderComponent"));
    this->m_projectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("m_projectileMovementComponent"));
    this->m_projectileStateMachine = NULL;
    this->m_currentSentinelProjectileState = ESentinelProjectileState::Projectile_None;
}

