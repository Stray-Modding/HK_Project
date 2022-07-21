#pragma once
#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterFile.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniParameterFile : public UHoudiniParameter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FString> Values;
    
    UPROPERTY()
    TArray<FString> DefaultValues;
    
    UPROPERTY()
    FString Filters;
    
    UPROPERTY()
    bool bIsReadOnly;
    
public:
    UHoudiniParameterFile();
};

