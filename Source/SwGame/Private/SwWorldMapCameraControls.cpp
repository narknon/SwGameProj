#include "SwWorldMapCameraControls.h"

FSwWorldMapCameraControls::FSwWorldMapCameraControls() {
    this->ZoomSpeed = 0.00f;
    this->MinZoomRadius = 0.00f;
    this->MaxZoomRadius = 0.00f;
    this->bShouldInvertZoom = false;
    this->YawRotationSpeed = 0.00f;
    this->PitchRotationSpeed = 0.00f;
    this->PitchMin = 0.00f;
    this->PitchMax = 0.00f;
    this->bShouldClampYaw = false;
    this->YawClampInputSpeed = 0.00f;
    this->YawClampCurve = NULL;
    this->YawClampMin = 0.00f;
    this->YawClampMax = 0.00f;
    this->LeftStickProcessingData = NULL;
    this->bShouldInvertTranslation = false;
    this->CameraInterpolationCurve = NULL;
    this->CameraInterpolationBreakValue = 0.00f;
}

