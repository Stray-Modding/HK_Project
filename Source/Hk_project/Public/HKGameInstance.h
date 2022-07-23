#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "JoyGameInstance.h"
#include "EWorldInitializationMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ShouldEndState -FallbackName=ShouldEndState
#include "HKGameInstance.generated.h"

class ADrone;
class ABackpack;
class ACatPawn;
class UHKSaveInstance;
class UWorld;
class AManager;
class AInteractionFeedback;
class UHKChapters;
class AActor;
class UActivityData;
class UB12Memories;
class UDebugMenuEntry;
class UHKGameSubsystem;
class UHKSubsystemSettings;
class UAudioComponent;
class ULevelStreaming;

UCLASS(NonTransient)
class HK_PROJECT_API UHKGameInstance : public UJoyGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLoadComplete, float, _loadTime, const FString&, _mapName, UWorld*, _world);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShouldEndState, bool, _shouldEndState);
    
    UPROPERTY(BlueprintAssignable)
    FOnLoadComplete LoadCompleted;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AManager>> ManagerBlueprintClasses;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ACatPawn> CatClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ABackpack> BackpackClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ADrone> DroneClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AInteractionFeedback> InteractionFeedbackClass;
    
private:
    UPROPERTY()
    UHKSaveInstance* m_saveInstance;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UHKSaveInstance> m_saveInstanceClass;
    
    UPROPERTY(EditAnywhere)
    UHKChapters* m_chapters;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AActor>> m_debugLootablesList;
    
    UPROPERTY(EditAnywhere)
    UActivityData* m_activityData;
    
    UPROPERTY(EditAnywhere)
    UB12Memories* m_b12MemoriesData;
    
    UPROPERTY()
    UDebugMenuEntry* m_rootDebugMenuEntry;
    
    UPROPERTY()
    UDebugMenuEntry* m_chaptersDebugMenuEntry;
    
    UPROPERTY()
    UDebugMenuEntry* m_loadSaveDebugMenuEntry;
    
    UPROPERTY()
    UDebugMenuEntry* m_loadSaveSlotsDebugMenuEntry;
    
    UPROPERTY()
    UDebugMenuEntry* m_loadSaveFoldersDebugMenuEntry;
    
    UPROPERTY()
    UDebugMenuEntry* m_quickSaveDebugMenuEntry;
    
    UPROPERTY()
    UDebugMenuEntry* m_quickLoadDebugMenuEntry;
    
    UPROPERTY()
    UDebugMenuEntry* m_cheatDebugMenuEntry;
    
    UPROPERTY()
    UDebugMenuEntry* m_languageDebugMenuEntry;
    
    UPROPERTY()
    UDebugMenuEntry* m_debugDebugMenuEntry;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<TSubclassOf<UHKGameSubsystem>, TSubclassOf<UHKSubsystemSettings>> m_subsystemToSettingsClassMap;
    
    UPROPERTY()
    TSoftObjectPtr<UWorld> m_zoneToLoad;
    
    UPROPERTY(Export, Transient)
    TMap<FName, UAudioComponent*> m_persistentAudioComponents;
    
public:
    UHKGameInstance();
    UFUNCTION(BlueprintImplementableEvent)
    void SetAdventureState(int32 _chapterId, int32 _stateId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartPlayInEditorGameInstance(bool _simulateInEditor);
    
    UFUNCTION(BlueprintPure)
    UHKSaveInstance* GetSaveInstance() const;
    
    UFUNCTION(BlueprintPure)
    UDebugMenuEntry* GetRootDebugMenuEntry() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EWorldInitializationMode> GetInitializationMode() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetCurrentAdventureChapterState(int32 _chapter) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetCurrentAdventureChapter() const;
    
    UFUNCTION(BlueprintPure)
    UB12Memories* GetB12MemoriesData() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<FString> GetAdventureChapterStates(int32 _chapter) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<FString> GetAdventureChapters() const;
    
    UFUNCTION(BlueprintPure)
    UActivityData* GetActivityData() const;
    
private:
    UFUNCTION()
    void _SaveLoadSlotsEntry_OnYPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _SaveLoadSlotsEntry_OnXPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _SaveLoadSlotsEntry_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _SaveLoadSlotEntry_OnUpdate(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _SaveLoadFoldersEntry_OnYPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _SaveLoadFoldersEntry_OnXPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _SaveLoadFoldersEntry_OnUpdate(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _SaveLoadFoldersEntry_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _QuickSaveDebugMenuEntry_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _QuickLoadDebugMenuEntry_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _OnFullSaveSlotsDone(UHKSaveInstance* _saveInstance);
    
    UFUNCTION()
    void _OnFullSaveFoldersDone(UHKSaveInstance* _saveInstance);
    
    UFUNCTION()
    void _NewSaveEntry_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _LanguageDebugMenuEntry_OnUpdate(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _LanguageDebugMenu_Language_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _DebugDebugMenuEntry_OnUpdate(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _DebugDebugMenuEntry_ForceStreaming_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _DebugDebugMenuEntry_ClearQuickStartLocation_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _CheatSetAdventureStateEntry_OnUpdate(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _CheatSetAdventureStateEntry_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _CheatSetAdventureStateChildEntry_OnUpdate(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _CheatDebugMenuEntry_TorchLight_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _CheatDebugMenuEntry_OnUpdate(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _CheatDebugMenuEntry_GodMode_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _CheatDebugMenuEntry_Backpack_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _CheatDebugMenuEntry_B12Memories_OnXPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _CheatDebugMenuEntry_B12Memories_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _CheatAddItemToIventoryListEntry_OnUpdate(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _CheatAddItemToIventoryEntry_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _ChaptersEntry_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _ChaptersDebugMenuEntry_OnUpdate(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _BeforeStreamOut(ULevelStreaming* _levelStreaming, const FShouldEndState& _shouldEndState);
    
    UFUNCTION()
    void _BeforeStreamIn(ULevelStreaming* _levelStreaming, const FShouldEndState& _shouldEndState);
    
};

