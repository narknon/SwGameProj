#include "SwHammerHunterTrailCollider.h"

USwHammerHunterTrailCollider::USwHammerHunterTrailCollider() {
    this->bPauseTrail = false;
    this->HammerHeadLocation = NULL;
    this->HammerHeadRadius = 15.00f;
    this->HammerHeadTrailDuration = 1.00f;
    this->HammerHeadSampleRate = 0.20f;
}

