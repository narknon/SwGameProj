#include "SwTelekinesisGameplayVictimData.h"

FSwTelekinesisGameplayVictimData::FSwTelekinesisGameplayVictimData() {
    this->bShouldUse180DegreeOrientationSnapping = false;
    this->bIsAxisConstrained = false;
    this->MaxAxisConstraintDistanceFromVictim = 0.00f;
    this->MaxAxisConstraintDistanceFromUser = 0.00f;
    this->bShouldOverrideMovementControl = false;
}

