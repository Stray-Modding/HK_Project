#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ZurgSpawningBox.generated.h"

class UBoxComponent;
class USceneComponent;
class UArrowComponent;
class UEditorTickComponent;

UCLASS(Blueprintable)
class HK_PROJECT_API AZurgSpawningBox : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_spawnVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_drawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* m_rootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_spawningBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UArrowComponent* m_spawningVelocityDirectionArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEditorTickComponent* m_editorTickComponent;
    
public:
    AZurgSpawningBox();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSuggestedSpawnVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRandomPointInBox() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void _EditorTick(float _deltaTime);
    
};

