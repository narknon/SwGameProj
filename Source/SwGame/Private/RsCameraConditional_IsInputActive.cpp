#include "RsCameraConditional_IsInputActive.h"

URsCameraConditional_IsInputActive::URsCameraConditional_IsInputActive() {
    this->DeactivateAfter = 2.00f;
    this->ActivationInputType = ERsCameraIsInputActiveInputType::LookInput;
    this->DeactivationInputType = ERsCameraIsInputActiveInputType::LookOrMoveInput;
}

