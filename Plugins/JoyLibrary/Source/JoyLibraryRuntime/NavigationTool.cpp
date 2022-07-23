#include "NavigationTool.h"

// Unreal includes
#include <AIController.h>
#include "Log.h"
 
#include <Runtime/NavigationSystem/Public/NavigationSystem.h>
#include <Runtime/NavigationSystem/Public/NavigationPath.h>
#include <Navmesh/RecastNavMesh.h>

#include <Kismet/GameplayStatics.h> 

#include <Engine.h>

// Plugins includes
#include <Assert.h>

#include "MacroUtils.h"

ARecastNavMesh* GetRecastNavMesh(const UObject* _worldContextObject, FString _navMeshName)
{
	ARecastNavMesh* selectedRecastNavMesh = nullptr;
	  
	TArray<AActor*> recastsNavMeshes;
	UGameplayStatics::GetAllActorsOfClass(_worldContextObject, ARecastNavMesh::StaticClass(), recastsNavMeshes);
	for (AActor* currentActor : recastsNavMeshes)
	{
		if (!currentActor->IsPendingKill())
		{
			ARecastNavMesh* navMesh = Cast<ARecastNavMesh>(currentActor);
			if (navMesh->GetName().Contains(_navMeshName))
			{
#if JOY_ASSERT_ENABLED 
				JOY_ASSERT_MSG(!selectedRecastNavMesh, TEXT("Looks like you have multiple identical RecastNavMesh actor in your level"));
				selectedRecastNavMesh = navMesh;
#else
				selectedRecastNavMesh = navMesh;
				break;
#endif
			}
		}
	}
	if (selectedRecastNavMesh == nullptr) 
	{
		if (recastsNavMeshes.Num() > 0)
		{
			selectedRecastNavMesh = Cast<ARecastNavMesh>(recastsNavMeshes[0]);
		} 
	}

	return selectedRecastNavMesh;
}

ARecastNavMesh* UNavigationTool::GetRecastNavMesh(UObject* WorldContextObject, FString _navMeshName)
{
	return ::GetRecastNavMesh(WorldContextObject->GetWorld(), _navMeshName);
}

void UNavigationTool::SetDynamicObstacle(UObject* WorldContextObject, UShapeComponent* _shapeComponent, bool _dynamicObstacle)
{
	JOY_EXITCONDITION(!_shapeComponent, TEXT("Undefined ShapeComponent."));

	_shapeComponent->bDynamicObstacle = _dynamicObstacle;
}

bool UNavigationTool::IsDynamicObstacle(UObject* WorldContextObject, UShapeComponent* _shapeComponent)
{
	JOY_EXITCONDITION_RET(!_shapeComponent, false, TEXT("Undefined ShapeComponent."));
	
	return _shapeComponent->bDynamicObstacle;
}


