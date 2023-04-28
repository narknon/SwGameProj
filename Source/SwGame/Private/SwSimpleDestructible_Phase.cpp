#include "SwSimpleDestructible_Phase.h"

FSwSimpleDestructible_Phase::FSwSimpleDestructible_Phase() {
    this->IgnoreThisPhase = false;
    this->DamagePointsNeededToDestroy = 0.00f;
    this->NumberOfHitsNeededToDestroy = 0;
    this->DestructionSound = NULL;
    this->SelfInflictedDamagePointsPerSecond = 0.00f;
}

