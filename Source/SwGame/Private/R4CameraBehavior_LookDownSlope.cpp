#include "R4CameraBehavior_LookDownSlope.h"

UR4CameraBehavior_LookDownSlope::UR4CameraBehavior_LookDownSlope() {
    this->LookAheadDist = 200.00f;
    this->TraceRadius = 5.00f;
    this->PitchOffset = 5.00f;
    this->MovementDirWeight = 0.30f;
    this->PrevSlopeWeight = 0.70f;
}

