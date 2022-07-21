#pragma once
#include "CoreMinimal.h"
#include "EditorTickingActor.h"
#include "Sequence.generated.h"

class USaveComponent;
class UStreamingComponent;
class UBillboardComponent;

UCLASS()
class HK_PROJECT_API ASequence : public AEditorTickingActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, VisibleAnywhere)
    USaveComponent* m_saveComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UStreamingComponent* m_streamingComponent;
    
private:
    UPROPERTY(EditAnywhere, Export)
    UBillboardComponent* m_billboard;
    
    UPROPERTY(EditAnywhere)
    bool m_autoStartSequence;
    
    UPROPERTY(SaveGame)
    FString m_checkpointName;
    
public:
    ASequence();
    UFUNCTION(BlueprintCallable)
    void StartSequence();
    
    UFUNCTION(BlueprintCallable)
    void SetCheckpoint(FName _name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartSequence();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartFromCheckpoint();
    
    UFUNCTION(BlueprintPure)
    FName GetCheckpoint() const;
    
private:
    UFUNCTION()
    void _OnStreamedIn(UStreamingComponent* _streamingComponent);
    
};

