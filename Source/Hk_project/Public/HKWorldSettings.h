#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "StreamingGroupData.h"
#include "EChapter.h"
#include "StartData.h"
#include "HKWorldSettings.generated.h"

class AHKPlayerStart;
class USoundSubmix;

UCLASS(Blueprintable)
class HK_PROJECT_API AHKWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHKPlayerStart* PlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StreamingDebugModeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStreamingGroupData> StreamingGroups;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartData StartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EChapter, AHKPlayerStart*> m_chapterPlayerStarts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmix* m_masterSoundSubmix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmix* m_controllerSoundSubmix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundSubmix*> m_musicSoundSubmixes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundSubmix*> m_effectsSoundSubmixes;
    
public:
    AHKWorldSettings();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AfterNotifyBeginPlay();
    
};

