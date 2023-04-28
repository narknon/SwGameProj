#include "AnimState_Swim.h"

FAnimState_Swim::FAnimState_Swim() {
    this->CurrentState = ERsSwimState::None;
    this->DesiredPitchAngle = 0.00f;
    this->DiveUpAnimationTime = 0.00f;
    this->DiveDownAnimationTime = 0.00f;
    this->BoostUnderwaterAnimationTime = 0.00f;
    this->AnticipateSwimAfterCinematic = false;
}

