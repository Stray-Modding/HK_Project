#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "StartData.h"
#include "HKPlayerStart.generated.h"

class ACatPawn;

UCLASS(Blueprintable)
class HK_PROJECT_API AHKPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartData StartData;
    
    AHKPlayerStart();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeforeCatSpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AfterCatSpawned(ACatPawn* _cat);
    
};

