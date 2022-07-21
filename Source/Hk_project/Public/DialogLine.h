#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DialogLineAdvanced.h"
#include "DialogLine.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDialogLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EndDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> ItemToGive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MemoryToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDialogLineAdvanced Advanced;
    
    HK_PROJECT_API FDialogLine();
};

