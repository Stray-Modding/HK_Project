#include "CameraTools.h"

#include <Camera/CameraTypes.h>
#include <Camera/CameraComponent.h>
#include <Engine/World.h>
#include <Engine/Engine.h>
#include <Engine/GameViewportClient.h>
#include <GameFramework/PlayerController.h>
#include <SceneView.h>

#include "Log.h"
#include "MacroUtils.h"


bool WorldToCameraNormalizedSpace(const FVector& _worldLocation, UCameraComponent* _camera, FVector2D* _outCameraNormalizedSpace, bool _constrained /*= true*/)
{
	const FIntPoint viewportSizeXY = GEngine->GameViewport->Viewport->GetSizeXY();
	FIntRect ViewRect = FIntRect(0, 0, viewportSizeXY.X, viewportSizeXY.Y);

	FMinimalViewInfo minimalViewInfo;
	_camera->GetCameraView(0.f, minimalViewInfo);

	FSceneViewProjectionData projectionData;
	projectionData.SetViewRectangle(ViewRect);
	projectionData.ViewOrigin = _camera->GetComponentLocation();
	
	projectionData.ViewRotationMatrix = FInverseRotationMatrix(_camera->GetComponentRotation()) * FMatrix(
		FPlane(0, 0, 1, 0),
		FPlane(1, 0, 0, 0),
		FPlane(0, 1, 0, 0),
		FPlane(0, 0, 0, 1));

	FMinimalViewInfo::CalculateProjectionMatrixGivenView(minimalViewInfo, AspectRatio_MajorAxisFOV, GEngine->GameViewport->Viewport, projectionData);

	FVector2D screenLocation;
	FMatrix const ViewProjectionMatrix = projectionData.ComputeViewProjectionMatrix();
	
	if (!FSceneView::ProjectWorldToScreen(_worldLocation, projectionData.GetConstrainedViewRect(), ViewProjectionMatrix, screenLocation))
	{
		return false;
	}
	
	FIntRect screenRect = _constrained ? projectionData.GetConstrainedViewRect() : projectionData.GetViewRect();
	FIntPoint viewportCenter, viewportExtents;
	projectionData.GetConstrainedViewRect().GetCenterAndExtents(viewportCenter, viewportExtents);
	screenLocation.X = (screenLocation.X - (viewportCenter.X - viewportExtents.X)) / (viewportExtents.X * 2.f);
	screenLocation.Y = (screenLocation.Y - (viewportCenter.Y - viewportExtents.Y)) / (viewportExtents.Y * 2.f);

	if (_outCameraNormalizedSpace) *_outCameraNormalizedSpace = screenLocation;
	return true;
}

void CameraNormalizedSpaceToWorld(const FVector2D& _cameraNormalizedLocation, UCameraComponent* _camera, FVector* _outWorldLocation, FVector* _outWorldDirection, bool _constrained /*= true*/)
{
	FMinimalViewInfo minimalViewInfo;
	_camera->GetCameraView(0.f, minimalViewInfo);
	FSceneViewProjectionData projectionData;
	const FIntPoint viewportSizeXY = GEngine->GameViewport->Viewport->GetSizeXY();
	FIntRect ViewRect = FIntRect(0, 0, viewportSizeXY.X, viewportSizeXY.Y);
	projectionData.SetViewRectangle(ViewRect);
	projectionData.ViewOrigin = _camera->GetComponentLocation();

	projectionData.ViewRotationMatrix = FInverseRotationMatrix(_camera->GetComponentRotation()) * FMatrix(
		FPlane(0, 0, 1, 0),
		FPlane(1, 0, 0, 0),
		FPlane(0, 1, 0, 0),
		FPlane(0, 0, 0, 1));

	FMinimalViewInfo::CalculateProjectionMatrixGivenView(minimalViewInfo, AspectRatio_MajorAxisFOV, GEngine->GameViewport->Viewport, projectionData);

	FIntRect screenRect = _constrained ? projectionData.GetConstrainedViewRect() : projectionData.GetViewRect();
	FVector2D screenLocation = FVector2D(_cameraNormalizedLocation.X * screenRect.Width(), _cameraNormalizedLocation.Y * screenRect.Height());
	FVector worldLocation;
	FVector worldDirection;
	FMatrix inverseViewProjectionMatrix = projectionData.ComputeViewProjectionMatrix().Inverse();
	FSceneView::DeprojectScreenToWorld(screenLocation, screenRect, inverseViewProjectionMatrix, worldLocation, worldDirection);

	if (_outWorldLocation) *_outWorldLocation = worldLocation;
	if (_outWorldDirection) *_outWorldDirection = worldDirection;
}

FVector UCameraTools::GetCurrentViewLocation(UObject* _worldContextObject)
{
	UWorld* world = _worldContextObject->GetWorld();
	if (world == nullptr)
		return FVector::ZeroVector;

	if (world->ViewLocationsRenderedLastFrame.Num() == 0)
		return FVector::ZeroVector;

	return world->ViewLocationsRenderedLastFrame[0];
}

void UCameraTools::AddPlayerControllerHiddenActor(APlayerController* _playerController, AActor* _actor)
{
	JOY_EXITCONDITION(!_playerController, TEXT("PlayerController is null."));
	JOY_EXITCONDITION(!_actor, TEXT("Actor is null."));

	_playerController->HiddenActors.Add(_actor);
}

void UCameraTools::RemovePlayerControllerHiddenActor(APlayerController* _playerController, AActor* _actor)
{
	JOY_EXITCONDITION(!_playerController, TEXT("PlayerController is null."));
	JOY_EXITCONDITION(!_actor, TEXT("Actor is null."));

	_playerController->HiddenActors.Remove(_actor);
}

void UCameraTools::AddPlayerControllerHiddenPrimitiveComponent(APlayerController* _playerController, UPrimitiveComponent* _component)
{
	JOY_EXITCONDITION(!_playerController, TEXT("PlayerController is null."));
	JOY_EXITCONDITION(!_component, TEXT("Component is null."));

	_playerController->HiddenPrimitiveComponents.Add(_component);

}

void UCameraTools::RemovePlayerControllerHiddenPrimitiveComponent(APlayerController* _playerController, UPrimitiveComponent* _component)
{
	JOY_EXITCONDITION(!_playerController, TEXT("PlayerController is null."));
	JOY_EXITCONDITION(!_component, TEXT("Component is null."));

	_playerController->HiddenPrimitiveComponents.Remove(_component);
}
