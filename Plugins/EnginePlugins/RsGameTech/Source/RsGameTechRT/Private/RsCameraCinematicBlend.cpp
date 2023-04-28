#include "RsCameraCinematicBlend.h"

FRsCameraCinematicBlend::FRsCameraCinematicBlend() {
    this->MinLocationBlendDistance = 0.00f;
    this->MaxLocationBlendDistance = 0.00f;
    this->MinRotationBlendDistance = 0.00f;
    this->MaxRotationBlendDistance = 0.00f;
    this->bDisableLocationBlend = false;
    this->bIgnoreZDifference = false;
    this->bValid = false;
}

