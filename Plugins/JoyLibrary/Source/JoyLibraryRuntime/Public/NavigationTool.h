#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NavigationTool.generated.h"

class UObject;
class UShapeComponent;
class ARecastNavMesh;

UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API UNavigationTool : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNavigationTool();
    UFUNCTION(BlueprintCallable)
    static void SetDynamicObstacle(UObject* WorldContextObject, UShapeComponent* _shapeComponent, bool _dynamicObstacle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDynamicObstacle(UObject* WorldContextObject, UShapeComponent* _shapeComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ARecastNavMesh* GetRecastNavMesh(UObject* WorldContextObject, const FString& _navMeshName);
    
};

