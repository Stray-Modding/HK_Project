#pragma once
#include "CoreMinimal.h"
#include "DialogLineSynchronizedActor.generated.h"

class AActor;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FDialogLineSynchronizedActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAnimSequence*> ActorAnimations;
    
    HK_PROJECT_API FDialogLineSynchronizedActor();
};

