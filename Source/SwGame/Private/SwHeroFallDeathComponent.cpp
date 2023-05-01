#include "SwHeroFallDeathComponent.h"


void USwHeroFallDeathComponent::IgnoreFallDeath() {
}



USwHeroFallDeathComponent::USwHeroFallDeathComponent() {
    this->FallWarningDistance = 500.00f;
    this->bKeepFallWarningDuringPreDeath = true;
    this->bKeepFallWarningDuringNullNavState = true;
    this->bForceClearContactZForCinematicState = true;
}

