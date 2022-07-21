#include "NavigationTool.h"

class UObject;
class UShapeComponent;
class ARecastNavMesh;

void UNavigationTool::SetDynamicObstacle(UObject* WorldContextObject, UShapeComponent* _shapeComponent, bool _dynamicObstacle) {
}

bool UNavigationTool::IsDynamicObstacle(UObject* WorldContextObject, UShapeComponent* _shapeComponent) {
    return false;
}

ARecastNavMesh* UNavigationTool::GetRecastNavMesh(UObject* WorldContextObject, const FString& _navMeshName) {
    return NULL;
}

UNavigationTool::UNavigationTool() {
}

