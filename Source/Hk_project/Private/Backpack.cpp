#include "Backpack.h"
#include "Templates/SubclassOf.h"
#include "TalkableComponent.h"
#include "Components/SkeletalMeshComponent.h"

class UBackpackUsableComponent;
class UBackpackScreenUserWidget;
class ULootableComponent;
class ADialog;
class UUserWidget;
class AActor;
class UPhoto;
class ABackpackGUI;
class ADrone;
class USceneComponent;
class USoundBase;
class ACatPawn;
class AHKPlayerController;

void ABackpack::Use(UBackpackUsableComponent* _usable) {
}

void ABackpack::UpdateScreenWidget(FName _id, TSubclassOf<UBackpackScreenUserWidget> _class) {
}

void ABackpack::UnchargeIEM() {
}

void ABackpack::StopUse() {
}

void ABackpack::SetShowItemToB12Enabled(bool _enabled) {
}

void ABackpack::SetExitDialogEnabled(bool _enabled) {
}

void ABackpack::SetBackpackMeshVisible(bool _visible) {
}

void ABackpack::SetB12HelpEnabled(bool _enabled) {
}

void ABackpack::SendExternalDialogClass(TSubclassOf<ADialog> _dialogClass, FText _speakerName, TEnumAsByte<EDialogMovementMode> _movementMode) {
}

void ABackpack::SendExternalDialog(ADialog* _dialog, FText _speakerName, TEnumAsByte<EDialogMovementMode> _movementMode) {
}

void ABackpack::RemoveObjectFromInventory(ULootableComponent* _lootable, FVector _position, FRotator _rotation) {
}

void ABackpack::PushScreenWidget(FName _id, TSubclassOf<UBackpackScreenUserWidget> _class, int32 _priority) {
}

void ABackpack::PushInteractionDisabled() {
}

void ABackpack::PushB12Notification() {
}

void ABackpack::PopScreenWidget(FName _id) {
}

void ABackpack::PopInteractionDisabled() {
}

void ABackpack::OpenGUI(TSubclassOf<UUserWidget> _widgetClass) {
}









bool ABackpack::IsWithinHelpDialog() const {
    return false;
}

bool ABackpack::IsWithinDialog() const {
    return false;
}

bool ABackpack::IsShowItemToB12Enabled() const {
    return false;
}

bool ABackpack::IsInventoryMenuEnabled() const {
    return false;
}

bool ABackpack::IsInteractionEnabled() const {
    return false;
}

bool ABackpack::IsInteracting() const {
    return false;
}

bool ABackpack::IsGUIOpen() const {
    return false;
}

bool ABackpack::IsExitDialogEnabled() const {
    return false;
}

bool ABackpack::IsBackpackMeshVisible() const {
    return false;
}

bool ABackpack::IsB12HelpEnabled() const {
    return false;
}

void ABackpack::InstantiateAndAddActorToInventory(TSubclassOf<AActor> _itemClass) {
}

void ABackpack::IEM() {
}

bool ABackpack::HasIEM() const {
    return false;
}

UTalkableComponent* ABackpack::GetTalkableComponent() const {
    return NULL;
}

float ABackpack::GetRemainingIEMTime() const {
    return 0.0f;
}

TArray<UPhoto*> ABackpack::GetPhotoCatalog() const {
    return TArray<UPhoto*>();
}

USkeletalMeshComponent* ABackpack::GetMesh() const {
    return NULL;
}

TArray<ULootableComponent*> ABackpack::GetInventory() const {
    return TArray<ULootableComponent*>();
}

float ABackpack::GetIEMDuration() const {
    return 0.0f;
}

ABackpackGUI* ABackpack::GetGUI() const {
    return NULL;
}

ADrone* ABackpack::GetDrone() const {
    return NULL;
}

USceneComponent* ABackpack::GetDialogDroneSocket_Implementation(FName& _socketName) const {
    return NULL;
}

USoundBase* ABackpack::GetDefaultStartInteractionSound() const {
    return NULL;
}

UBackpackUsableComponent* ABackpack::GetCurrentInteraction() const {
    return NULL;
}

ADialog* ABackpack::GetCurrentDialog() const {
    return NULL;
}

UBackpackUsableComponent* ABackpack::GetCurrentClosestInteraction() const {
    return NULL;
}

ACatPawn* ABackpack::GetCatPawn() const {
    return NULL;
}

ULootableComponent* ABackpack::FindItemInInventory(FName ID) const {
    return NULL;
}

void ABackpack::EnableInventoryMenu() {
}

void ABackpack::DisableInventoryMenu() {
}

void ABackpack::CloseGUI() {
}

void ABackpack::ClearInventory() {
}

void ABackpack::ClearB12Notification() {
}

void ABackpack::ChargeIEM(float _duration) {
}

void ABackpack::BeforeSaved_Implementation() {
}

void ABackpack::AfterLoaded_Implementation() {
}

void ABackpack::AddObjectToInventory(ULootableComponent* _lootable) {
}

void ABackpack::_OnInventoryActorEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason) {
}

void ABackpack::_OnIEMPressed() {
}

void ABackpack::_OnHUDEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason) {
}

void ABackpack::_OnHelpPressed() {
}

void ABackpack::_OnDroneGUIOpened(ADrone* _drone) {
}

void ABackpack::_OnDroneGUIClosed(ADrone* _drone) {
}

void ABackpack::_OnDialogLineBegan(UTalkableComponent* _talkable, const FDialogLine& _line) {
}

void ABackpack::_OnDialogEnded(UTalkableComponent* _talkable) {
}

void ABackpack::_OnDialogBegan(UTalkableComponent* _talkable) {
}

void ABackpack::_OnCatUnpossessed(ACatPawn* _cat, AHKPlayerController* _playerController) {
}

void ABackpack::_OnCatPossessed(ACatPawn* _cat, AHKPlayerController* _playerController) {
}

ABackpack::ABackpack() {
    this->m_mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->m_screenWidgetComponent = NULL;
    this->m_talkable = CreateDefaultSubobject<UTalkableComponent>(TEXT("externalTalkable"));
    this->m_catPawn = NULL;
    this->M_Drone = NULL;
    this->m_GUI = NULL;
    this->m_interactionCollider = NULL;
    this->m_isBackpackMeshVisible = true;
    this->m_stateMachine = NULL;
    this->m_interactCollisionChannel = ECC_WorldStatic;
    this->m_IEMClass = NULL;
    this->m_currentDialog = NULL;
    this->m_pendingDialogRingTime = 1.50f;
    this->m_interactionDetectionLossTime = 0.30f;
    this->m_B12HelpDisabledCount = 0;
    this->m_showItemToB12DisabledCount = 0;
    this->m_exitDialogDisabledCount = 0;
    this->m_disableInventoryMenu = 0;
    this->m_HUD = NULL;
    this->m_defaultBackpackScreenWidgetClass = NULL;
    this->m_IEMBackpackScreenWidgetClass = NULL;
    this->m_notificationScreenWidgetClass = NULL;
    this->m_usableBackpackScreenWidgetClass = NULL;
    this->m_talkableBackpackScreenWidgetClass = NULL;
    this->m_defaultStartInteractionSound = NULL;
}

