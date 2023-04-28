#include "SwSpeederBikeSyncHeroAutopilotParameters.h"

FSwSpeederBikeSyncHeroAutopilotParameters::FSwSpeederBikeSyncHeroAutopilotParameters() {
    this->EnableHeroAutopilot = false;
    this->SpeederBikeSpeedWhileOnAutopilot = 0.00f;
    this->AutopilotSpeedBlendInTime = 0.00f;
    this->AutopilotSpeedBlendCurve = NULL;
    this->AutopilotLocationBlendInTime = 0.00f;
    this->AutopilotRotationBlendInTime = 0.00f;
    this->MaintainInitialDistanceToSpline = false;
    this->MaintainSpecificDistanceToSpline = 0.00f;
}

