#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EChapter.h"
#include "LevelScript.generated.h"

class USaveComponent;
class UStreamingGroup;

UCLASS()
class HK_PROJECT_API ALevelScript : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USaveComponent* m_saveComponent;
    
public:
    ALevelScript();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitialise(EChapter _chapter);
    
private:
    UFUNCTION()
    void _OnStreamingGroupSaveLoaded(UStreamingGroup* _streamingGroup);
    
};

