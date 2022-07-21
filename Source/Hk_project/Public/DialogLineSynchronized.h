#pragma once
#include "CoreMinimal.h"
#include "DialogLineSynchronizedActor.h"
#include "DialogLineSynchronized.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FDialogLineSynchronized {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAnimSequence*> Animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDialogLineSynchronizedActor> ActorsSynchronizedAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool KeepLastAnimAsIdle;
    
    HK_PROJECT_API FDialogLineSynchronized();
};

