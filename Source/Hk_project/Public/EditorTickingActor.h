#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EditorTickingActor.generated.h"

UCLASS()
class HK_PROJECT_API AEditorTickingActor : public AActor {
    GENERATED_BODY()
public:
    AEditorTickingActor();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEditorTick(float DeltaSeconds);
    
private:
    UFUNCTION()
    void _OnEditorTick(float _deltaTime);
    
};

