#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FuzzyBool.h"
#include "LogicTools.generated.h"

class UObject;

UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API ULogicTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULogicTools();
    UFUNCTION(BlueprintCallable)
    static void FuzzyBoolSetTarget(UObject* WorldContextObject, UPARAM(Ref) FFuzzyBool& _fuzzyBool, bool _targetResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FuzzyBoolGetTarget(UPARAM(Ref) FFuzzyBool& _fuzzyBool);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FuzzyBoolGetFuzzy(UObject* WorldContextObject, UPARAM(Ref) FFuzzyBool& _fuzzyBool);
    
};

