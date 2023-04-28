#include "RsCameraPOI.h"

FRsCameraPOI::FRsCameraPOI() {
    this->POICameraMode = NULL;
    this->CameraModePriority = 0;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->FocusActor = NULL;
    this->FocusDuration = 0.00f;
    this->FocusLockDuration = 0.00f;
    this->FocusBreakResistance = 0.00f;
    this->DynamicOffsetBlendInTime = 0.00f;
    this->bShouldResetOnEnd = false;
    this->bShouldSetAutoDepthOfFieldTarget = false;
    this->bAllowWorldMapOpen = false;
    this->bValid = false;
}

