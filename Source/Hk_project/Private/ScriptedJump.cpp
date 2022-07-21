#include "ScriptedJump.h"
#include "Components/SceneComponent.h"

class UPrimitiveComponent;
class AActor;

void AScriptedJump::ViewportTick_Implementation(float _dt) {
}

USceneComponent* AScriptedJump::GetUpEntry() const {
    return NULL;
}

USceneComponent* AScriptedJump::GetDownEntry() const {
    return NULL;
}

void AScriptedJump::_OnEntryEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex) {
}

void AScriptedJump::_OnEntryBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

AScriptedJump::AScriptedJump() {
    this->m_root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->m_begin = CreateDefaultSubobject<USceneComponent>(TEXT("begin"));
    this->m_animationBegin = CreateDefaultSubobject<USceneComponent>(TEXT("animationBegin"));
    this->m_end = CreateDefaultSubobject<USceneComponent>(TEXT("End"));
    this->m_animationEnd = CreateDefaultSubobject<USceneComponent>(TEXT("animationEnd"));
    this->m_entryRadius = 100.00f;
    this->m_entryAngle = 180.00f;
    this->m_forwardAnimation = NULL;
    this->m_backAnimation = NULL;
}

