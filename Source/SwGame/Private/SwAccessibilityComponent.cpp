#include "SwAccessibilityComponent.h"


TArray<FSwForcePingResults> USwAccessibilityComponent::GetForcePingDataWithinRange(float InDistance) {
    return TArray<FSwForcePingResults>();
}

USwAccessibilityComponent::USwAccessibilityComponent() {
    this->HintPingDistance = 2000.00f;
    this->bShouldUseRaytracedOcclusion = false;
    this->HintPingOcclusionCheckInterval = 0.30f;
    this->MaxHintPingOcclusionChecksPerFrame = 3;
    this->HintPingAudio[0] = NULL;
    this->HintPingAudio[1] = NULL;
    this->HintPingAudio[2] = NULL;
    this->HintPingAudio[3] = NULL;
    this->HintPingAudio[4] = NULL;
    this->HintPingAudio[5] = NULL;
    this->HintPingAudio[6] = NULL;
    this->HintPingAudio[7] = NULL;
    this->HintPingAudio[8] = NULL;
    this->InteractedPingAudio[0] = NULL;
    this->InteractedPingAudio[1] = NULL;
    this->InteractedPingAudio[2] = NULL;
    this->InteractedPingAudio[3] = NULL;
    this->InteractedPingAudio[4] = NULL;
    this->InteractedPingAudio[5] = NULL;
    this->InteractedPingAudio[6] = NULL;
    this->InteractedPingAudio[7] = NULL;
    this->InteractedPingAudio[8] = NULL;
    this->InteractedFailureAudio = NULL;
    this->AvailablePingAudio[0] = NULL;
    this->AvailablePingAudio[1] = NULL;
    this->AvailablePingAudio[2] = NULL;
    this->AvailablePingAudio[3] = NULL;
    this->AvailablePingAudio[4] = NULL;
    this->AvailablePingAudio[5] = NULL;
    this->AvailablePingAudio[6] = NULL;
    this->AvailablePingAudio[7] = NULL;
    this->AvailablePingAudio[8] = NULL;
}

