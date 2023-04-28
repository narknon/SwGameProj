#include "FlockConfigData.h"

FFlockConfigData::FFlockConfigData() {
    this->MaxFlightSpeed = 0.00f;
    this->MinFlightSpeed = 0.00f;
    this->SquareNeighborRadius = 0.00f;
    this->HeightOffsetFromTarget = 0.00f;
    this->AlignmentForceModifier = 0.00f;
    this->CohesionForceModifier = 0.00f;
    this->SeparationForceModifier = 0.00f;
    this->FlyToPointForceModifier = 0.00f;
    this->FlyToPointMatchHeightForceModifier = 0.00f;
    this->RetainForwardSpeedForceModifier = 0.00f;
}

