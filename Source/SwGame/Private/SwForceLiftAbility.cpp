#include "SwForceLiftAbility.h"

USwForceLiftAbility::USwForceLiftAbility() {
    this->FailureAnimation = NULL;
    this->TurnDuration = 0.10f;
    this->AudioFail = NULL;
    this->ComboWindow = 0.10f;
    this->TriggerDuration = -1.00f;
    this->bShouldCheckToSeeIfFocusingOnTopOfTarget = true;
    this->ExtrapolationToCheckOnTopOfTarget = 0.25f;
    this->MassLiftParticleToSpawn = NULL;
}

