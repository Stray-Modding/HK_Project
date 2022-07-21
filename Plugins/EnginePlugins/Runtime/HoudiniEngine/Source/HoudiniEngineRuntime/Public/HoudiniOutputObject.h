#pragma once
#include "CoreMinimal.h"
#include "HoudiniCurveOutputProperties.h"
#include "HoudiniOutputObject.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniOutputObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* OutputObject;
    
    UPROPERTY()
    UObject* OutputComponent;
    
    UPROPERTY()
    UObject* ProxyObject;
    
    UPROPERTY()
    UObject* ProxyComponent;
    
    UPROPERTY()
    bool bProxyIsCurrent;
    
    UPROPERTY()
    bool bIsImplicit;
    
    UPROPERTY()
    bool bIsGeometryCollectionPiece;
    
    UPROPERTY()
    FString GeometryCollectionPieceName;
    
    UPROPERTY()
    FString BakeName;
    
    UPROPERTY()
    FHoudiniCurveOutputProperties CurveOutputProperty;
    
    UPROPERTY()
    TMap<FString, FString> CachedAttributes;
    
    UPROPERTY()
    TMap<FString, FString> CachedTokens;
    
    FHoudiniOutputObject();
};

