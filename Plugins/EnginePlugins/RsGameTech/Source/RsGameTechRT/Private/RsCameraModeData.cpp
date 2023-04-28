#include "RsCameraModeData.h"

FRsCameraModeData::FRsCameraModeData() {
    this->BlendInTime = 0.00f;
    this->FocusTraceSize = 0.00f;
    this->bBaseRelative = false;
    this->bApplyCameraShakes = false;
    this->bApplyTimeDeltaWhileGamePaused = false;
    this->bResetRollOnBegin = false;
    this->bResetRollOnEnd = false;
    this->bAllowCameraObstructionCheck = false;
    this->bAllowSetRotation = false;
    this->bAllowRestart = false;
    this->ViewTargetRotationUpdateMethod = VTRUM_MoveInputDirection;
    this->CameraObstructionDitheringMode = ERsCameraDitheringMode::None;
    this->CameraDitherDepthFixupMode = ERsCameraDitherDepthFixupMode::Disabled;
    this->CameraObstructionDitheringCheckSize = 0.00f;
    this->CameraObstructionDitheringAlpha = 0.00f;
    this->CameraObstructionFadeDistance = 0.00f;
    this->CameraObstructionDitheringNearFalloffDistance = 0.00f;
    this->CameraObstructionDitheringFarFalloffDistance = 0.00f;
}

