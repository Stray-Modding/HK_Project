#pragma once
#include "CoreMinimal.h"
#include "LookAtData.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EHKPlatform.h"
#include "EChapter.h"
#include "DialogLineSynchronizedActor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "HKUtilities.generated.h"

class UObject;
class ACharacterDroid;
class AGameStateManager;
class UB12Memories;
class UActivityData;

UCLASS(Blueprintable)
class HK_PROJECT_API UHKUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHKUtilities();
    UFUNCTION(BlueprintCallable)
    static void SetVolumetricFogGridPixelSize(int32 _size);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsInZurgPursuit(const UObject* _worldContextObject, bool _isInZurgPursuit);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsInSentinelPattern(const UObject* _worldContextObject, bool _isInSentinelPattern);
    
    UFUNCTION(BlueprintCallable)
    static void SetChapter(const UObject* _worldContextObject, EChapter _id);
    
    UFUNCTION(BlueprintCallable)
    static void PrintBlueprintCallstack();
    
    UFUNCTION(BlueprintCallable)
    static void OpenChapter(const UObject* _worldContextObject, EChapter _id);
    
    UFUNCTION(BlueprintCallable)
    static void OnTriggerSynchronizedAnimation(const TArray<FDialogLineSynchronizedActor>& _synchronizedActors, ACharacterDroid* _droid);
    
    UFUNCTION(BlueprintCallable)
    static void OnPlayerCatScratched(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void OnFinishedSynchronizedAnimation(const TArray<FDialogLineSynchronizedActor>& _synchronizedActors, ACharacterDroid* _droid);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> LoadLevelAndGetSubLevelsPath(const FName _levelAssetPath, bool _excludeInvisibleLevels);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMemoryRevealed(const UObject* _worldContextObject, const FName& _memoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDecemberDemoBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAudioLogEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetVolumetricFogGridPixelSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetVersionText();
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<EHKPlatform> GetPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMusicVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMinorVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMasterVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMajorVersion();
    
    UFUNCTION(BlueprintCallable)
    static FVector GetLookAtTarget(const FLookAtData& _lookAtData, const FVector& _referenceLocation, const FRotator& _referenceRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetKeyDisplayName(const FKey& _key, bool _longDisplayName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetJumpPromptEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsInZurgPursuit(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsInSentinelPattern(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetHUDEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AGameStateManager* GetGameStateManager(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetEffectsVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetChapterName(const UObject* _worldContextObject, EChapter _id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSet<FName> GetChapterMemories(const UObject* _worldContextObject, EChapter _id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EChapter GetChapter(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBuildTimestamp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBuildRevision();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBuildNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBuildDescription();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBuildConfiguration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBranchName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UB12Memories* GetB12MemoriesData(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAutoCameraEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActivityData* GetActivityData(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString GenerateRandomSentence(int32 _wordCount, int32 _minWordLength, int32 _maxWordLength, const FString& _suffix);
    
};

