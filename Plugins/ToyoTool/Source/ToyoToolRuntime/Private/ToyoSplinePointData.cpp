#include "ToyoSplinePointData.h"

FToyoSplinePointData::FToyoSplinePointData() {
    this->MeshType = EToyoPointMeshType::Joint;
    this->ToyoMeshIndex = 0;
    this->JointMeshIndex = 0;
    this->ToyoMaterialIndex = 0;
    this->JointMaterialIndex = 0;
    this->bToyoCollisionEnabled = false;
    this->bJointCollisionEnabled = false;
    this->bShowToyoMesh = false;
    this->bShowJointMesh = false;
    this->bEnableSnapping = false;
}

