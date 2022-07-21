#include "HKGameInstance.h"

class UHKSaveInstance;
class UActivityData;
class UDebugMenuEntry;
class UB12Memories;
class ULevelStreaming;



UHKSaveInstance* UHKGameInstance::GetSaveInstance() const {
    return NULL;
}

UDebugMenuEntry* UHKGameInstance::GetRootDebugMenuEntry() const {
    return NULL;
}

TEnumAsByte<EWorldInitializationMode> UHKGameInstance::GetInitializationMode() const {
    return WorldInitializationMode_None;
}



UB12Memories* UHKGameInstance::GetB12MemoriesData() const {
    return NULL;
}



UActivityData* UHKGameInstance::GetActivityData() const {
    return NULL;
}

void UHKGameInstance::_SaveLoadSlotsEntry_OnYPressed(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_SaveLoadSlotsEntry_OnXPressed(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_SaveLoadSlotsEntry_OnAPressed(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_SaveLoadSlotEntry_OnUpdate(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_SaveLoadFoldersEntry_OnYPressed(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_SaveLoadFoldersEntry_OnXPressed(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_SaveLoadFoldersEntry_OnUpdate(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_SaveLoadFoldersEntry_OnAPressed(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_QuickSaveDebugMenuEntry_OnAPressed(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_QuickLoadDebugMenuEntry_OnAPressed(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_OnFullSaveSlotsDone(UHKSaveInstance* _saveInstance) {
}

void UHKGameInstance::_OnFullSaveFoldersDone(UHKSaveInstance* _saveInstance) {
}

void UHKGameInstance::_NewSaveEntry_OnAPressed(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_LanguageDebugMenuEntry_OnUpdate(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_LanguageDebugMenu_Language_OnAPressed(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_DebugDebugMenuEntry_OnUpdate(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_DebugDebugMenuEntry_ForceStreaming_OnAPressed(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_DebugDebugMenuEntry_ClearQuickStartLocation_OnAPressed(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_CheatSetAdventureStateEntry_OnUpdate(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_CheatSetAdventureStateEntry_OnAPressed(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_CheatSetAdventureStateChildEntry_OnUpdate(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_CheatDebugMenuEntry_TorchLight_OnAPressed(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_CheatDebugMenuEntry_OnUpdate(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_CheatDebugMenuEntry_GodMode_OnAPressed(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_CheatDebugMenuEntry_Backpack_OnAPressed(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_CheatDebugMenuEntry_B12Memories_OnXPressed(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_CheatDebugMenuEntry_B12Memories_OnAPressed(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_CheatAddItemToIventoryListEntry_OnUpdate(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_CheatAddItemToIventoryEntry_OnAPressed(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_ChaptersEntry_OnAPressed(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_ChaptersDebugMenuEntry_OnUpdate(UDebugMenuEntry* _entry) {
}

void UHKGameInstance::_BeforeStreamOut(ULevelStreaming* _levelStreaming, FShouldEndState& _shouldEndState) {
}

void UHKGameInstance::_BeforeStreamIn(ULevelStreaming* _levelStreaming, FShouldEndState& _shouldEndState) {
}

UHKGameInstance::UHKGameInstance() {
    this->CatClass = NULL;
    this->BackpackClass = NULL;
    this->DroneClass = NULL;
    this->InteractionFeedbackClass = NULL;
    this->m_saveInstance = NULL;
    this->m_saveInstanceClass = NULL;
    this->m_chapters = NULL;
    this->m_activityData = NULL;
    this->m_b12MemoriesData = NULL;
    this->m_rootDebugMenuEntry = NULL;
    this->m_chaptersDebugMenuEntry = NULL;
    this->m_loadSaveDebugMenuEntry = NULL;
    this->m_loadSaveSlotsDebugMenuEntry = NULL;
    this->m_loadSaveFoldersDebugMenuEntry = NULL;
    this->m_quickSaveDebugMenuEntry = NULL;
    this->m_quickLoadDebugMenuEntry = NULL;
    this->m_cheatDebugMenuEntry = NULL;
    this->m_languageDebugMenuEntry = NULL;
    this->m_debugDebugMenuEntry = NULL;
}

