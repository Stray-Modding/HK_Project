#include "RailHangingTestResult.h"

FRailHangingTestResult::FRailHangingTestResult() {
    this->Result = RailHangingTestResult_Rail;
    this->CurrentQuadrantId = 0;
    this->IdealQuadrantId = 0;
    this->TargetQuadrantId = 0;
    this->WallRatio = 0.00f;
    this->isWall = false;
    this->IsPointHanging = false;
}

