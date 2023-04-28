#include "SwWorldMapOpenSettings.h"

FSwWorldMapOpenSettings::FSwWorldMapOpenSettings() {
    this->WorldCameraInterpolationTime = 0.00f;
    this->InitialZoomRadius = 0.00f;
    this->InitialHolomapZoomInterpolationTime = 0.00f;
    this->bShouldOverrideFocusLocation = false;
    this->bShouldNegateWorldRotation = false;
}

