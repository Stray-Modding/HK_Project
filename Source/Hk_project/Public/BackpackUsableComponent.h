#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CatUsableComponentBase.h"
#include "UObject/NoExportTypes.h"
#include "BackpackUsableComponent.generated.h"

class UBackpackScreenUserWidget;
class UBoxComponent;
class ABackpack;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UBackpackUsableComponent : public UCatUsableComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_usageCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_deactivateCatInteractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBackpackScreenUserWidget> m_backpackScreenWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_blockCatDuringUse;
    
public:
    UBackpackUsableComponent();
    UFUNCTION(BlueprintCallable)
    void SetVisualBox(UBoxComponent* _visualBox);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBoxComponent* GetVisualBox() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABackpack* GetUsingBackpack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetSelectionBoxTransform() const;
    
};

