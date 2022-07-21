#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "StreamingGroupData.h"
#include "EChapter.h"
#include "StartData.h"
#include "HKWorldSettings.generated.h"

class USoundSubmix;
class AHKPlayerStart;

UCLASS()
class HK_PROJECT_API AHKWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AHKPlayerStart* PlayerStart;
    
    UPROPERTY(EditAnywhere)
    bool StreamingDebugModeEnabled;
    
    UPROPERTY(EditAnywhere)
    TArray<FStreamingGroupData> StreamingGroups;
    
private:
    UPROPERTY(EditAnywhere)
    FStartData StartData;
    
    UPROPERTY(EditInstanceOnly)
    TMap<EChapter, AHKPlayerStart*> m_chapterPlayerStarts;
    
    UPROPERTY(EditDefaultsOnly)
    USoundSubmix* m_masterSoundSubmix;
    
    UPROPERTY(EditDefaultsOnly)
    USoundSubmix* m_controllerSoundSubmix;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundSubmix*> m_musicSoundSubmixes;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundSubmix*> m_effectsSoundSubmixes;
    
public:
    AHKWorldSettings();
    UFUNCTION(BlueprintImplementableEvent)
    void AfterNotifyBeginPlay();
    
};

