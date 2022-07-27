#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EInteractionFeedbackState.h"
#include "InteractionFeedback.generated.h"

class UCatUsableComponentBase;

UCLASS(Blueprintable)
class HK_PROJECT_API AInteractionFeedback : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCatUsableComponentBase* m_usable;
    
public:
    AInteractionFeedback();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUsableChanged(UCatUsableComponentBase* _previousUsable, UCatUsableComponentBase* _currentUsable);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCatUsableComponentBase* GetUsable() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EInteractionFeedbackState> GetState() const;
    
};

