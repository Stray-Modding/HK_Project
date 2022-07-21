#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ZurgPawn.generated.h"

class UZurgSettings;
class USceneComponent;
class ACatPawn;

UCLASS(Blueprintable)
class HK_PROJECT_API AZurgPawn : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZurgSettings* ZurgSettings;
    
    AZurgPawn();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDetachedFromCat(ACatPawn* _catPawn, USceneComponent* _attachedComponent, FName _socketName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttachedToCat(ACatPawn* _catPawn, USceneComponent* _attachedComponent, FName _socketName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanGrabCat() const;
    
};

