#include "RsHeroStateModifier_Modifications.h"

FRsHeroStateModifier_Modifications::FRsHeroStateModifier_Modifications() {
    this->CameraModeDefinition = NULL;
    this->CameraModePriority = 0;
    this->CameraBlendInTimeOverride = 0.00f;
    this->CameraBlendOutTimeOverride = 0.00f;
    this->bSetCollisionTweaks = false;
    this->CollisionTweaks = (ERsHeroCollisionTweaks)0;
}

