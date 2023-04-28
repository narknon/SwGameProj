#include "RsAICinematicOptions.h"

FRsAICinematicOptions::FRsAICinematicOptions() {
    this->bSpawnAggroToPlayer = false;
    this->bForceAggroToPlayer = false;
    this->bAwakeForNonCinematicSequences = false;
    this->bAwakeForCinematicSequences = false;
    this->ForbidBindingToNonCinematicSequenceCircumstances = 0;
    this->ForbidBindingToCinematicSequenceCircumstances = 0;
}

