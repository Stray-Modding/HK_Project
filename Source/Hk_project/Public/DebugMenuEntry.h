#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DebugMenuEntry.generated.h"

class UDebugMenuEntry;

UCLASS(BlueprintType)
class UDebugMenuEntry : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEntryAction, UDebugMenuEntry*, _entry);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString XText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString YText;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FEntryAction OnUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FEntryAction OnAPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FEntryAction OnXPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FEntryAction OnYPressed;
    
private:
    UPROPERTY()
    TArray<UDebugMenuEntry*> m_children;
    
    UPROPERTY()
    UDebugMenuEntry* m_parent;
    
public:
    UDebugMenuEntry();
    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintPure)
    UDebugMenuEntry* GetParent() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UDebugMenuEntry*> GetChildren() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearAllChildren();
    
    UFUNCTION(BlueprintCallable)
    void AddChild(UDebugMenuEntry* _child);
    
};

