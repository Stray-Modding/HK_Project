#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EChapter.h"
#include "LevelScript.generated.h"

class USaveComponent;
class UStreamingGroup;

UCLASS(Blueprintable)
class HK_PROJECT_API ALevelScript : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USaveComponent* m_saveComponent;
    
public:
    ALevelScript();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialise(EChapter _chapter);
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnStreamingGroupSaveLoaded(UStreamingGroup* _streamingGroup);
    
};

