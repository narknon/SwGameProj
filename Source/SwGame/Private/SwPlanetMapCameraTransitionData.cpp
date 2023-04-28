#include "SwPlanetMapCameraTransitionData.h"

FSwPlanetMapCameraTransitionData::FSwPlanetMapCameraTransitionData() {
    this->ZoomDistanceToTriggerSectorMap = 0.00f;
    this->ZoomDistanceToTriggerLocalMap = 0.00f;
    this->ZoomDistanceToTriggerLeavingInteriorMap = 0.00f;
    this->TransitionDuration = 0.00f;
    this->TransitionCurve = NULL;
}

