#pragma once
#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "EHoudiniMultiParmModificationType.h"
#include "HoudiniParameterMultiParm.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniParameterMultiParm : public UHoudiniParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TemplateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MultiparmValue;
    
    UPROPERTY(EditAnywhere)
    uint32 MultiParmInstanceNum;
    
    UPROPERTY(EditAnywhere)
    uint32 MultiParmInstanceLength;
    
    UPROPERTY(EditAnywhere)
    uint32 MultiParmInstanceCount;
    
    UPROPERTY(EditAnywhere)
    uint32 InstanceStartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EHoudiniMultiParmModificationType> MultiParmInstanceLastModifyArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultInstanceCount;
    
    UHoudiniParameterMultiParm();
};

