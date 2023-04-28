#include "SwLightsaberMarkActorInfo.h"

FSwLightsaberMarkActorInfo::FSwLightsaberMarkActorInfo() {
    this->bPerformAllRaytracesOnHit = false;
    this->MinSubframeRaycasts = 0;
    this->MaxSubframeRaycasts = 0;
    this->UVChannel = 0;
    this->LineWidth = 0.00f;
    this->Intensity = 0.00f;
    this->EdgeIntensity = 0.00f;
    this->ParticleOffsetAlongNormal = 0.00f;
    this->bPlayAudio = false;
}

