#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HoudiniHandleParameter.generated.h"

class UHoudiniParameter;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniHandleParameter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UHoudiniParameter* AssetParameter;
    
    UPROPERTY()
    int32 TupleIndex;
    
    UHoudiniHandleParameter();
};

