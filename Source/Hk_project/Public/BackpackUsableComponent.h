#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CatUsableComponentBase.h"
#include "UObject/NoExportTypes.h"
#include "BackpackUsableComponent.generated.h"

class UBackpackScreenUserWidget;
class UBoxComponent;
class ABackpack;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UBackpackUsableComponent : public UCatUsableComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_usageCooldownTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_deactivateCatInteractions;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBackpackScreenUserWidget> m_backpackScreenWidgetClass;
    
private:
    UPROPERTY(EditAnywhere)
    bool m_blockCatDuringUse;
    
public:
    UBackpackUsableComponent();
    UFUNCTION(BlueprintCallable)
    void SetVisualBox(UBoxComponent* _visualBox);
    
    UFUNCTION(BlueprintPure)
    UBoxComponent* GetVisualBox() const;
    
    UFUNCTION(BlueprintPure)
    ABackpack* GetUsingBackpack() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FTransform GetSelectionBoxTransform() const;
    
};

