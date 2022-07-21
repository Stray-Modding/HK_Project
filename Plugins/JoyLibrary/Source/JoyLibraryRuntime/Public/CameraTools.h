#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "CameraTools.generated.h"

class UObject;
class AActor;
class APlayerController;
class UPrimitiveComponent;

UCLASS(BlueprintType)
class JOYLIBRARYRUNTIME_API UCameraTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCameraTools();
    UFUNCTION(BlueprintCallable)
    static void RemovePlayerControllerHiddenPrimitiveComponent(APlayerController* _playerController, UPrimitiveComponent* _component);
    
    UFUNCTION(BlueprintCallable)
    static void RemovePlayerControllerHiddenActor(APlayerController* _playerController, AActor* _actor);
    
    UFUNCTION(BlueprintPure)
    static FVector GetCurrentViewLocation(UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerControllerHiddenPrimitiveComponent(APlayerController* _playerController, UPrimitiveComponent* _component);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerControllerHiddenActor(APlayerController* _playerController, AActor* _actor);
    
};

