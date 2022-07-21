#include "Drone.h"
#include "Templates/SubclassOf.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/WidgetComponent.h"

class AActor;
class UUserWidget;
class UScannableComponent;
class USceneComponent;
class UAnimSequence;
class ABackpack;
class UDroneUsableComponent;
class ACatPawn;
class AHKPlayerController;

void ADrone::UnfoldDone() {
}

void ADrone::unfold() {
}



void ADrone::TeleportDrone(const FTransform& _target) {
}

void ADrone::StopCustomAnimation() {
}

void ADrone::SetWeakLightOn(bool _on) {
}

void ADrone::SetStrongLightUnlocked(bool _value) {
}

void ADrone::SetStrongLightOn(bool _on) {
}

void ADrone::SetMovementRatio(float _value) {
}

void ADrone::SetLightUnlocked(bool _value) {
}

void ADrone::SetAutoFoldWhenIdleEnabled(bool _value) {
}

void ADrone::RequestOpenGUI(TSubclassOf<UUserWidget> _widgetClass, TEnumAsByte<EDroneGUIAllowInputMode> _allowInputMode) {
}

void ADrone::PushWeakLightDisabled() {
}

void ADrone::PushStrongLightDisabled() {
}

void ADrone::PushSpringToSocket(USceneComponent* _targetComponent, FName _targetSocket, FDroneSpringParams _params, int32 _priority, bool _unfold) {
}

void ADrone::PushSpringToActor(AActor* _targetActor, FDroneSpringParams _params, int32 _priority, bool _unfold) {
}

void ADrone::PushMoveToSocket(USceneComponent* _targetComponent, FName _targetSocket, FDroneMoveToParams _params, int32 _priority, bool _unfold) {
}

void ADrone::PushMoveToActor(AActor* _targetActor, FDroneMoveToParams _params, int32 _priority, bool _unfold) {
}

void ADrone::PopWeakLightDisabled() {
}

void ADrone::PopStrongLightDisabled() {
}

void ADrone::PopSpringToSocket(USceneComponent* _targetComponent, FName _targetSocket) {
}

void ADrone::PopSpringToActor(AActor* _targetActor) {
}

void ADrone::PopMoveToSocket(USceneComponent* _targetComponent, FName _targetSocket) {
}

void ADrone::PopMoveToActor(AActor* _targetActor) {
}

void ADrone::PlayCustomAnimation(UAnimSequence* _animation, bool _isLooping) {
}

UUserWidget* ADrone::OpenGUI(TSubclassOf<UUserWidget> _widgetClass, TEnumAsByte<EDroneGUIAllowInputMode> _allowInputMode) {
    return NULL;
}















void ADrone::OnStartUnfold_Implementation() {
}

void ADrone::OnStartFold_Implementation() {
}








void ADrone::OnCustomAnimationOver() {
}

bool ADrone::IsWeakLightRequested() const {
    return false;
}

bool ADrone::IsWeakLightOn() const {
    return false;
}

bool ADrone::IsUnfolding() const {
    return false;
}

bool ADrone::IsUnfolded() const {
    return false;
}

bool ADrone::IsStrongLightUnlocked() const {
    return false;
}

bool ADrone::IsStrongLightRequested() const {
    return false;
}

bool ADrone::IsStrongLightOn() const {
    return false;
}

bool ADrone::IsPlayingCustomAnimation() const {
    return false;
}

bool ADrone::IsOut() const {
    return false;
}

bool ADrone::IsLightUnlocked() const {
    return false;
}

bool ADrone::IsIdle() const {
    return false;
}

bool ADrone::IsGUIOpen() const {
    return false;
}

bool ADrone::IsFollowingTarget() const {
    return false;
}

bool ADrone::IsFollowingCat() const {
    return false;
}

bool ADrone::IsFolding() const {
    return false;
}

bool ADrone::IsFolded() const {
    return false;
}

bool ADrone::IsCustomAnimationLooping() const {
    return false;
}

bool ADrone::IsBaseGUIDisabled() const {
    return false;
}

bool ADrone::IsAutoFoldWhenIdleEnabled() const {
    return false;
}

bool ADrone::HasReachedTarget(float _distancteThreshold, float _angleThreshold) const {
    return false;
}

TArray<UScannableComponent*> ADrone::GetScanTargets() const {
    return TArray<UScannableComponent*>();
}

float ADrone::GetMovementRatio() const {
    return 0.0f;
}

FRotator ADrone::GetLookRotation() const {
    return FRotator{};
}

TEnumAsByte<EDroneGUIAllowInputMode> ADrone::GetGUIAllowInputMode() const {
    return DroneGUIAllowInputMode_NoInput;
}

USceneComponent* ADrone::GetFoldedSocket(FName& _socketName) const {
    return NULL;
}

FTransform ADrone::GetCurrentTarget() const {
    return FTransform{};
}

UAnimSequence* ADrone::GetCurrentCustomAnimation() const {
    return NULL;
}

ABackpack* ADrone::GetBackpack() const {
    return NULL;
}

void ADrone::FoldDone() {
}

void ADrone::fold() {
}

void ADrone::EnableExamineRotation() {
}

void ADrone::EnableBaseGUI() {
}

void ADrone::DisableExamineRotation() {
}

void ADrone::DisableBaseGUI() {
}

void ADrone::CloseGUI() {
}

void ADrone::BeforeSaved_Implementation() {
}

void ADrone::AfterLoaded_Implementation() {
}

void ADrone::_OnUsableUseSuccess(UDroneUsableComponent* _usable) {
}

void ADrone::_OnToggleCameraPressed() {
}

void ADrone::_OnGUIOpenPressed() {
}

void ADrone::_OnCatUnpossessed(ACatPawn* _cat, AHKPlayerController* _playerController) {
}

void ADrone::_OnCatPossessed(ACatPawn* _cat, AHKPlayerController* _playerController) {
}

ADrone::ADrone() {
    this->m_capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("capsule"));
    this->m_mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->m_GUIWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("GUI"));
    this->m_timeIdleBeforeFoldBack = 5.00f;
    this->m_foldedComponent = NULL;
    this->M_BackPack = NULL;
    this->m_customLookComponent = NULL;
    this->m_minAPNFov = 24.00f;
    this->m_maxAPNFov = 84.00f;
    this->m_APNRotateSpeed = 150.00f;
    this->m_APNZoomSpeed = 50.00f;
    this->m_scanRadius = 2.50f;
    this->m_strongLightPressedTime = 0.20f;
    this->m_baseWidgetClass = NULL;
    this->m_dialogWidgetClass = NULL;
    this->m_isLightUnlocked = true;
    this->m_isStrongLightUnlocked = true;
    this->m_strongLightDisabled = 0;
    this->m_weakLightDisabled = 0;
    this->m_stateMachine = NULL;
}

