#pragma once
#include "CoreMinimal.h"
#include "DroneUsableComponent.h"
#include "LootableComponent.generated.h"

class ULootableComponent;
class UTexture;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API ULootableComponent : public UDroneUsableComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLootableLootedSignature, ULootableComponent*, _lootable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLootableInteractionStartSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLootableInteractionEndSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLootableDropedSignature, ULootableComponent*, _lootable);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLootableLootedSignature OnLooted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLootableDropedSignature OnDroped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    ULootableComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasID(FName _id) const;
    
};

