#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StartData.h"
#include "DebugProfile.generated.h"

class AHKPlayerStart;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FDebugProfile {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString StartupSaveName;
    
    UPROPERTY(EditAnywhere)
    AHKPlayerStart* PlayerStart;
    
    UPROPERTY(EditAnywhere)
    bool UseQuickStartTransform;
    
    UPROPERTY(EditAnywhere)
    FTransform QuickStartTransform;
    
    UPROPERTY(EditAnywhere)
    FStartData StartData;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* JumpAnimationOverride;
    
    UPROPERTY(EditAnywhere)
    bool StreamingDebugModeEnabled;
    
    HK_PROJECT_API FDebugProfile();
};

