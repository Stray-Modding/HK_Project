#include "HKUtilities.h"

class UObject;
class ACharacterDroid;
class AGameStateManager;
class UB12Memories;
class UActivityData;

void UHKUtilities::SetVolumetricFogGridPixelSize(int32 _size) {
}

void UHKUtilities::SetIsInZurgPursuit(const UObject* _worldContextObject, bool _isInZurgPursuit) {
}

void UHKUtilities::SetIsInSentinelPattern(const UObject* _worldContextObject, bool _isInSentinelPattern) {
}

void UHKUtilities::SetChapter(const UObject* _worldContextObject, EChapter _id) {
}

void UHKUtilities::PrintBlueprintCallstack() {
}

void UHKUtilities::OpenChapter(const UObject* _worldContextObject, EChapter _id) {
}

void UHKUtilities::OnTriggerSynchronizedAnimation(const TArray<FDialogLineSynchronizedActor>& _synchronizedActors, ACharacterDroid* _droid) {
}

void UHKUtilities::OnPlayerCatScratched(const UObject* _worldContextObject) {
}

void UHKUtilities::OnFinishedSynchronizedAnimation(const TArray<FDialogLineSynchronizedActor>& _synchronizedActors, ACharacterDroid* _droid) {
}

TArray<FString> UHKUtilities::LoadLevelAndGetSubLevelsPath(const FName _levelAssetPath, bool _excludeInvisibleLevels) {
    return TArray<FString>();
}

bool UHKUtilities::IsMemoryRevealed(const UObject* _worldContextObject, const FName& _memoryId) {
    return false;
}

bool UHKUtilities::IsDecemberDemoBuild() {
    return false;
}

bool UHKUtilities::IsAudioLogEnabled() {
    return false;
}

int32 UHKUtilities::GetVolumetricFogGridPixelSize() {
    return 0;
}

FString UHKUtilities::GetVersionText() {
    return TEXT("");
}

TEnumAsByte<EHKPlatform> UHKUtilities::GetPlatform() {
    return HKPlatform_Windows;
}

float UHKUtilities::GetMusicVolume() {
    return 0.0f;
}

int32 UHKUtilities::GetMinorVersion() {
    return 0;
}

float UHKUtilities::GetMasterVolume() {
    return 0.0f;
}

int32 UHKUtilities::GetMajorVersion() {
    return 0;
}

FVector UHKUtilities::GetLookAtTarget(const FLookAtData& _lookAtData, const FVector& _referenceLocation, const FRotator& _referenceRotation) {
    return FVector{};
}

FText UHKUtilities::GetKeyDisplayName(const FKey& _key, bool _longDisplayName) {
    return FText::GetEmpty();
}

bool UHKUtilities::GetJumpPromptEnabled() {
    return false;
}

bool UHKUtilities::GetIsInZurgPursuit(const UObject* _worldContextObject) {
    return false;
}

bool UHKUtilities::GetIsInSentinelPattern(const UObject* _worldContextObject) {
    return false;
}

bool UHKUtilities::GetHUDEnabled() {
    return false;
}

AGameStateManager* UHKUtilities::GetGameStateManager(const UObject* _worldContextObject) {
    return NULL;
}

float UHKUtilities::GetEffectsVolume() {
    return 0.0f;
}

FText UHKUtilities::GetChapterName(const UObject* _worldContextObject, EChapter _id) {
    return FText::GetEmpty();
}

TSet<FName> UHKUtilities::GetChapterMemories(const UObject* _worldContextObject, EChapter _id) {
    return TSet<FName>();
}

EChapter UHKUtilities::GetChapter(const UObject* _worldContextObject) {
    return EChapter::Chapter_Unknown;
}

FString UHKUtilities::GetBuildTimestamp() {
    return TEXT("");
}

int32 UHKUtilities::GetBuildRevision() {
    return 0;
}

int32 UHKUtilities::GetBuildNumber() {
    return 0;
}

FString UHKUtilities::GetBuildDescription() {
    return TEXT("");
}

FString UHKUtilities::GetBuildConfiguration() {
    return TEXT("");
}

FString UHKUtilities::GetBranchName() {
    return TEXT("");
}

UB12Memories* UHKUtilities::GetB12MemoriesData(const UObject* _worldContextObject) {
    return NULL;
}

bool UHKUtilities::GetAutoCameraEnabled() {
    return false;
}

UActivityData* UHKUtilities::GetActivityData(const UObject* _worldContextObject) {
    return NULL;
}

FString UHKUtilities::GenerateRandomSentence(int32 _wordCount, int32 _minWordLength, int32 _maxWordLength, const FString& _suffix) {
    return TEXT("");
}

UHKUtilities::UHKUtilities() {
}

