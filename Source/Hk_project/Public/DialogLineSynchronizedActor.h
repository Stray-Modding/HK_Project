#pragma once
#include "CoreMinimal.h"
#include "DialogLineSynchronizedActor.generated.h"

class AActor;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FDialogLineSynchronizedActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> ActorAnimations;
    
    HK_PROJECT_API FDialogLineSynchronizedActor();
};

