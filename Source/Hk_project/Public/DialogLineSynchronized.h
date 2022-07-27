#pragma once
#include "CoreMinimal.h"
#include "DialogLineSynchronizedActor.h"
#include "DialogLineSynchronized.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FDialogLineSynchronized {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> Animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialogLineSynchronizedActor> ActorsSynchronizedAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KeepLastAnimAsIdle;
    
    HK_PROJECT_API FDialogLineSynchronized();
};

