#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Backpack.h"
#include "Drone.h"
#include "EWorldInitializationMode.h"
#include "JoyLibraryRuntime/JoyGameInstance.h"
#include "HKGameInstance.generated.h"

class UAudioComponent;

class UWorld;
class AManager;
class ACatPawn;
class AInteractionFeedback;
class UHKSaveInstance;
class UHKChapters;
class UB12Memories;
class AActor;
class UActivityData;
class UDebugMenuEntry;
class UHKGameSubsystem;
class UHKSubsystemSettings;
class ULevelStreaming;

UCLASS(Blueprintable, NonTransient)
class HK_PROJECT_API UHKGameInstance : public UJoyGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLoadComplete, float, _loadTime, const FString&, _mapName, UWorld*, _world);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShouldEndState, bool, _shouldEndState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadComplete LoadCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AManager>> ManagerBlueprintClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACatPawn> CatClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABackpack> BackpackClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADrone> DroneClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInteractionFeedback> InteractionFeedbackClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHKSaveInstance* m_saveInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHKSaveInstance> m_saveInstanceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHKChapters* m_chapters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> m_debugLootablesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActivityData* m_activityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UB12Memories* m_b12MemoriesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenuEntry* m_rootDebugMenuEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenuEntry* m_chaptersDebugMenuEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenuEntry* m_loadSaveDebugMenuEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenuEntry* m_loadSaveSlotsDebugMenuEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenuEntry* m_loadSaveFoldersDebugMenuEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenuEntry* m_quickSaveDebugMenuEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenuEntry* m_quickLoadDebugMenuEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenuEntry* m_cheatDebugMenuEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenuEntry* m_languageDebugMenuEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenuEntry* m_debugDebugMenuEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UHKGameSubsystem>, TSubclassOf<UHKSubsystemSettings>> m_subsystemToSettingsClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> m_zoneToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UAudioComponent*> m_persistentAudioComponents;
    
public:
    UHKGameInstance();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAdventureState(int32 _chapterId, int32 _stateId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartPlayInEditorGameInstance(bool _simulateInEditor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHKSaveInstance* GetSaveInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDebugMenuEntry* GetRootDebugMenuEntry() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EWorldInitializationMode> GetInitializationMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetCurrentAdventureChapterState(int32 _chapter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetCurrentAdventureChapter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UB12Memories* GetB12MemoriesData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FString> GetAdventureChapterStates(int32 _chapter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FString> GetAdventureChapters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActivityData* GetActivityData() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void _SaveLoadSlotsEntry_OnYPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _SaveLoadSlotsEntry_OnXPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _SaveLoadSlotsEntry_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _SaveLoadSlotEntry_OnUpdate(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _SaveLoadFoldersEntry_OnYPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _SaveLoadFoldersEntry_OnXPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _SaveLoadFoldersEntry_OnUpdate(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _SaveLoadFoldersEntry_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _QuickSaveDebugMenuEntry_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _QuickLoadDebugMenuEntry_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _OnFullSaveSlotsDone(UHKSaveInstance* _saveInstance);
    
    UFUNCTION(BlueprintCallable)
    void _OnFullSaveFoldersDone(UHKSaveInstance* _saveInstance);
    
    UFUNCTION(BlueprintCallable)
    void _NewSaveEntry_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _LanguageDebugMenuEntry_OnUpdate(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _LanguageDebugMenu_Language_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _DebugDebugMenuEntry_OnUpdate(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _DebugDebugMenuEntry_ForceStreaming_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _DebugDebugMenuEntry_ClearQuickStartLocation_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _CheatSetAdventureStateEntry_OnUpdate(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _CheatSetAdventureStateEntry_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _CheatSetAdventureStateChildEntry_OnUpdate(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _CheatDebugMenuEntry_TorchLight_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _CheatDebugMenuEntry_OnUpdate(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _CheatDebugMenuEntry_GodMode_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _CheatDebugMenuEntry_Backpack_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _CheatDebugMenuEntry_B12Memories_OnXPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _CheatDebugMenuEntry_B12Memories_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _CheatAddItemToIventoryListEntry_OnUpdate(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _CheatAddItemToIventoryEntry_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _ChaptersEntry_OnAPressed(UDebugMenuEntry* _entry);
    
    UFUNCTION(BlueprintCallable)
    void _ChaptersDebugMenuEntry_OnUpdate(UDebugMenuEntry* _entry);
    
    UFUNCTION()
    void _BeforeStreamOut(ULevelStreaming* _levelStreaming, const FShouldEndState& _shouldEndState);
    
    UFUNCTION()
    void _BeforeStreamIn(ULevelStreaming* _levelStreaming, const FShouldEndState& _shouldEndState);
    
};

