#include "RsCameraConditional_RotationDiffersFromFocusDirection.h"

URsCameraConditional_RotationDiffersFromFocusDirection::URsCameraConditional_RotationDiffersFromFocusDirection() {
    this->AllowableYawDifference = 15.00f;
    this->AllowablePitchDifference = 15.00f;
    this->bAllowableYawDifferenceEnabled = true;
    this->bAllowablePitchDifferenceEnabled = false;
}

