#pragma once
#include "CoreMinimal.h"
#include "EAttribOwner.h"
#include "EAttribStorageType.h"
#include "HoudiniGenericAttribute.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniGenericAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AttributeName;
    
    UPROPERTY(EditAnywhere)
    EAttribStorageType AttributeType;
    
    UPROPERTY(EditAnywhere)
    EAttribOwner AttributeOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttributeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttributeTupleSize;
    
    UPROPERTY(EditAnywhere)
    TArray<double> DoubleValues;
    
    UPROPERTY(EditAnywhere)
    TArray<int64> IntValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> StringValues;
    
    FHoudiniGenericAttribute();
};

