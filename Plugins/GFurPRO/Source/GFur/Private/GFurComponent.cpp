#include "GFurComponent.h"

void UGFurComponent::RegenerateFur() {
}

UGFurComponent::UGFurComponent() {
    this->SkeletalGrowMesh = NULL;
    this->StaticGrowMesh = NULL;
    this->FurSplines = NULL;
    this->LayerCount = 32;
    this->MinScreenSize = 0.00f;
    this->LODFromParent = false;
    this->ShellBias = 1.00f;
    this->FurLength = 1.00f;
    this->MinFurLength = 0.00f;
    this->RemoveFacesWithoutSplines = false;
    this->PhysicsEnabled = true;
    this->ForceDistribution = 2.00f;
    this->Stiffness = 5.00f;
    this->Damping = 5.00f;
    this->MaxForce = 10.00f;
    this->MaxForceTorqueFactor = 0.75f;
    this->ReferenceHairBias = 0.80f;
    this->HairLengthForceUniformity = 0.75f;
    this->MaxPhysicsOffsetLength = 340282346638528859811704183484516925440.00f;
    this->NoiseStrength = 0.00f;
    this->DisableMorphTargets = false;
    this->StreamingDistanceMultiplier = 1.00f;
}

