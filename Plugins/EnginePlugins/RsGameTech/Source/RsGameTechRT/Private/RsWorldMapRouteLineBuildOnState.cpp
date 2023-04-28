#include "RsWorldMapRouteLineBuildOnState.h"

FRsWorldMapRouteLineBuildOnState::FRsWorldMapRouteLineBuildOnState() {
    this->PreviousInterpolationValue = 0.00f;
    this->PreviousAdjustedInterpolationValue = 0.00f;
    this->NextConnectorIdx = 0;
    this->NextEdgePointIdx = 0;
}

