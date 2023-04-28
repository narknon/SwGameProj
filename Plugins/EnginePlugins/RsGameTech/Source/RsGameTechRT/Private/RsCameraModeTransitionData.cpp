#include "RsCameraModeTransitionData.h"

FRsCameraModeTransitionData::FRsCameraModeTransitionData() {
    this->TransitionSpace = ERsCameraTransitionSpace::CameraSpace;
    this->TransitionType = ERsCameraTransitionType::Linear;
    this->bUseOverrideCurves = false;
    this->XLocationCurveOverride = NULL;
    this->YLocationCurveOverride = NULL;
    this->ZLocationCurveOverride = NULL;
    this->RotationCurveOverride = NULL;
    this->FOVCurveOverride = NULL;
    this->ArcIntensity = 0.00f;
    this->BeginMovementDistance = 0.00f;
    this->EndMovementDistance = 0.00f;
    this->bMaintainBlendTimeUntilFinished = false;
    this->bScaleBlendTime = false;
    this->bDisableInput = false;
    this->bUseCameraCutOnLargeYawChange = false;
    this->bScaleInput = false;
}

