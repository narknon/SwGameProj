#include "AnimState_SpeederBike.h"

FAnimState_SpeederBike::FAnimState_SpeederBike() {
    this->InputBasedSteeringValue = 0.00f;
    this->SmoothedSteeringValue = 0.00f;
    this->bIsSpeedBoostActive = false;
}

