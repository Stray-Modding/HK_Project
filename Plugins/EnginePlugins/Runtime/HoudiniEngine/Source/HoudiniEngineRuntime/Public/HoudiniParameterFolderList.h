#pragma once
#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterFolderList.generated.h"

class UHoudiniParameterFolder;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniParameterFolderList : public UHoudiniParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsTabMenu;
    
    UPROPERTY()
    bool bIsTabsShown;
    
    UPROPERTY(Instanced)
    TArray<UHoudiniParameterFolder*> TabFolders;
    
    UHoudiniParameterFolderList();
};

