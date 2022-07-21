#pragma once
#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "EHoudiniFolderParameterType.h"
#include "HoudiniParameterFolder.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniParameterFolder : public UHoudiniParameter {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    EHoudiniFolderParameterType FolderType;
    
    UPROPERTY()
    bool bExpanded;
    
    UPROPERTY()
    bool bChosen;
    
    UPROPERTY()
    int32 ChildCounter;
    
    UPROPERTY()
    bool bIsContentShown;
    
public:
    UHoudiniParameterFolder();
};

