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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EndDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ItemToGive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MemoryToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogLineAdvanced Advanced;
    
    HK_PROJECT_API FDialogLine();
};

