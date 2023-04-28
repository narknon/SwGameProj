#include "SwSpeederBikeEarlyReverbAudioSystem.h"

FSwSpeederBikeEarlyReverbAudioSystem::FSwSpeederBikeEarlyReverbAudioSystem() {
    this->SystemEnabled = false;
    this->LeftBus = NULL;
    this->RightBus = NULL;
    this->StartingPreDelayRTPCValue = 0.00f;
    this->RTPC_Speeder_ER_PreDelay_L = NULL;
    this->RTPC_Speeder_ER_PreDelay_R = NULL;
    this->RTPC_Speeder_ER_SendAmount_L = NULL;
    this->RTPC_Speeder_ER_SendAmount_R = NULL;
    this->RTPC_Speeder_ER_Time_L = NULL;
    this->RTPC_Speeder_ER_Time_R = NULL;
    this->TraceLengthParamInCm = 0.00f;
    this->WhooshTraceLengthForActorTracking = 0.00f;
    this->QueueLengthPerTrace = 0;
    this->WhooshIntensityFadeTimeInMS = 0;
    this->WhooshAngleModifierAtMaxVelocity = 0.00f;
    this->MaxSpeederBikeVelocity = 0.00f;
    this->WhooshCompressionResetThreshold = 0.00f;
    this->WhooshCompressionMinimalTriggerThreshold = 0.00f;
    this->FrameTraceIndex = 0;
    this->EarlyReverbTracesPerFrame = 0;
}

