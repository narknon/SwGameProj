#include "SwForcePushUpgradeData.h"

FSwForcePushUpgradeData::FSwForcePushUpgradeData() {
    this->PreTriggerGroundStaticAnimation = NULL;
    this->PreTriggerGroundNavAnimation = NULL;
    this->PreTriggerAirAnimation = NULL;
    this->PreTriggerSpecialAnimation = NULL;
    this->PreTriggerLandingAnimation = NULL;
    this->ParryGroundAnimation = NULL;
    this->ParryAirAnimation = NULL;
    this->bShouldCharactersBeGlancingHits = false;
    this->EffectType = NULL;
    this->PushMaxAngle = 0.00f;
    this->PushInnerDistance = 0.00f;
    this->PushMaxDistance = 0.00f;
    this->PushSuperHitDistance = 0.00f;
    this->PushInnerWidth = 0.00f;
    this->PushOuterWidth = 0.00f;
    this->PushHeight = 0.00f;
    this->AudioPreTrigger = NULL;
    this->AudioTrigger = NULL;
    this->AudioParry = NULL;
    this->bShouldEffectOnlySingleTarget = false;
}

