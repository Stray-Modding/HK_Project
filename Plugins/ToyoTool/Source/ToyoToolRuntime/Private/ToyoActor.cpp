#include "ToyoActor.h"
#include "Components/SceneComponent.h"
#include "ToyoSplineComponent.h"

void AToyoActor::CreateToyoMesh() {
}

void AToyoActor::ClearOldData() {
}

AToyoActor::AToyoActor() {
    this->Scale = 1.00f;
    this->MaxRadius = 8.00f;
    this->SnapDistance = 4.00f;
    this->SegmentLengthCalcMode = EToyoSegmentLengthCalculationMode::PointsDistance;
    this->SplineMeshUpDefinition = EToyoSplineMeshUpDefinitionType::SplineUpAverage;
    this->bUseSplineRoll = false;
    this->RollScale = 1.00f;
    this->bSmoothInterpRollScale = true;
    this->bEnableCollision = false;
    this->CollisionProfileName = TEXT("GraphNoCollision");
    this->bGeneratesOverlapEvents = false;
    this->bGeneratesHitEvents = false;
    this->DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent0"));
    this->SplineComponent = CreateDefaultSubobject<UToyoSplineComponent>(TEXT("SplineComponent0"));
}

