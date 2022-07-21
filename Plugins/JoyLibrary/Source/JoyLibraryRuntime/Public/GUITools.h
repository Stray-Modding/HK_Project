#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GUITools.generated.h"

class UWidget;

UCLASS(BlueprintType)
class JOYLIBRARYRUNTIME_API UGUITools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGUITools();
    UFUNCTION(BlueprintCallable)
    static void ForceSizeRefresh(UWidget* _widget);
    
};

