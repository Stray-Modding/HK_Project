#pragma once
#include "CoreMinimal.h"
#include "JoyLibraryRuntime/Manager.h"
#include "ActorIdManager.generated.h"

class AActor;

UCLASS(Blueprintable)
class HK_PROJECT_API AActorIdManager : public AManager {
    GENERATED_BODY()
public:
    AActorIdManager();
    UFUNCTION(BlueprintCallable)
    AActor* FindActorById(FName _actorId, AActor* _callingActor);
    
};

