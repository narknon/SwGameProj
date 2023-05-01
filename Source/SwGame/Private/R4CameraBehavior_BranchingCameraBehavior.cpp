#include "R4CameraBehavior_BranchingCameraBehavior.h"

void UR4CameraBehavior_BranchingCameraBehavior::GetBlendParameters(float& OutBlendTime, const bool bBoolean) const {
}

TArray<URsCameraBehavior*> UR4CameraBehavior_BranchingCameraBehavior::GetBehaviors(const bool bBoolean) const {
    return TArray<URsCameraBehavior*>();
}

UR4CameraBehavior_BranchingCameraBehavior::UR4CameraBehavior_BranchingCameraBehavior() {
    this->Conditional = NULL;
    this->TrueBlendInTime = 0.50f;
    this->FalseBlendInTime = 0.50f;
}

