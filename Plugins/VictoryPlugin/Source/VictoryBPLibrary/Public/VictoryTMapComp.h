#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "VictoryTMapComp.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVictoryTMapComp : public UActorComponent {
    GENERATED_BODY()
public:
    UVictoryTMapComp();
    UFUNCTION(BlueprintCallable)
    void String_Vector__Remove(const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector String_Vector__Get(const FString& Key, bool& IsValid);
    
    UFUNCTION(BlueprintCallable)
    void String_Vector__Clear();
    
    UFUNCTION(BlueprintCallable)
    void String_Vector__AddPair(const FString& Key, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void String_String__Remove(const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString String_String__Get(const FString& Key, bool& IsValid);
    
    UFUNCTION(BlueprintCallable)
    void String_String__Clear();
    
    UFUNCTION(BlueprintCallable)
    void String_String__AddPair(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void String_Rotator__Remove(const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator String_Rotator__Get(const FString& Key, bool& IsValid);
    
    UFUNCTION(BlueprintCallable)
    void String_Rotator__Clear();
    
    UFUNCTION(BlueprintCallable)
    void String_Rotator__AddPair(const FString& Key, FRotator Value);
    
    UFUNCTION(BlueprintCallable)
    void String_Int__Remove(const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 String_Int__Get(const FString& Key, bool& IsValid);
    
    UFUNCTION(BlueprintCallable)
    void String_Int__Clear();
    
    UFUNCTION(BlueprintCallable)
    void String_Int__AddPair(const FString& Key, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void String_Actor__Remove(const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* String_Actor__Get(const FString& Key, bool& IsValid);
    
    UFUNCTION(BlueprintCallable)
    void String_Actor__Clear();
    
    UFUNCTION(BlueprintCallable)
    void String_Actor__AddPair(const FString& Key, AActor* Value);
    
    UFUNCTION(BlueprintCallable)
    void Int_Vector__Remove(int32 Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector Int_Vector__Get(int32 Key, bool& IsValid);
    
    UFUNCTION(BlueprintCallable)
    void Int_Vector__Clear();
    
    UFUNCTION(BlueprintCallable)
    void Int_Vector__AddPair(int32 Key, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void Int_Float__Remove(int32 Key, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float Int_Float__Get(int32 Key, bool& IsValid);
    
    UFUNCTION(BlueprintCallable)
    void Int_Float__Clear();
    
    UFUNCTION(BlueprintCallable)
    void Int_Float__AddPair(int32 Key, float Value);
    
};

