#include "SwWorldMapLocalPlanetSettings.h"

FSwWorldMapLocalPlanetSettings::FSwWorldMapLocalPlanetSettings() {
    this->MinZoomRadius = 0.00f;
    this->MaxZoomRadius = 0.00f;
    this->FastTravelMinZoomRadius = 0.00f;
    this->FastTravelMaxZoomRadius = 0.00f;
    this->InitialMapScale = 0.00f;
    this->InitialZoomRadius = 0.00f;
    this->InitialZoomInterpolationTime = 0.00f;
    this->BackgroundDarkness = 0.00f;
    this->ScalingCurve = NULL;
    this->FadeZMin = 0.00f;
    this->FadeZMax = 0.00f;
    this->FadeZLowerBounds = 0.00f;
}

