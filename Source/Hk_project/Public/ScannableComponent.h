#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/BoxComponent.h"
#include "ScannableComponent.generated.h"

class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UScannableComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnabledOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> ClueActorClass;
    
    UScannableComponent();
    UFUNCTION(BlueprintCallable)
    void SetScannableEnabled(bool _value);
    
    UFUNCTION(BlueprintPure)
    bool IsScannableEnabled() const;
    
};

