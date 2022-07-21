#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NavigationTool.generated.h"

class UObject;
class UShapeComponent;
class ARecastNavMesh;

UCLASS(BlueprintType)
class JOYLIBRARYRUNTIME_API UNavigationTool : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNavigationTool();
    UFUNCTION(BlueprintCallable)
    static void SetDynamicObstacle(UObject* WorldContextObject, UShapeComponent* _shapeComponent, bool _dynamicObstacle);
    
    UFUNCTION(BlueprintPure)
    static bool IsDynamicObstacle(UObject* WorldContextObject, UShapeComponent* _shapeComponent);
    
    UFUNCTION(BlueprintPure)
    static ARecastNavMesh* GetRecastNavMesh(UObject* WorldContextObject, const FString& _navMeshName);
    
};

