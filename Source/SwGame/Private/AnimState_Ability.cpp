#include "AnimState_Ability.h"

FAnimState_Ability::FAnimState_Ability() {
    this->PullAmbientRotationType = ESwPullAmbientRotationType::None;
    this->bIsPullAmbientRotationActive = false;
    this->bIsInAnalogLift = false;
    this->bIsInAnalogSlam = false;
    this->AnalogLiftSlamTargetPitch = 0.00f;
}

