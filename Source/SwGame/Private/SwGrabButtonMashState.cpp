#include "SwGrabButtonMashState.h"

void USwGrabButtonMashState::StartButtonMash() {
}




void USwGrabButtonMashState::FailButtonMash() {
}

void USwGrabButtonMashState::ButtonMashSuccess() {
}

void USwGrabButtonMashState::ButtonMashCleanup() {
}

USwGrabButtonMashState::USwGrabButtonMashState() {
    this->bButtonMashActive = false;
    this->SuccessSync = NULL;
    this->SuccessBlendSpaceInputType = ERsAIBlendspaceInputSource::Custom;
    this->bSwapMasterAndSlaveForSyncForSuccess = false;
    this->FailSync = NULL;
    this->FailBlendSpaceInputType = ERsAIBlendspaceInputSource::Custom;
    this->bSwapMasterAndSlaveForSyncForFail = false;
    this->bDealDamageOnFail = false;
    this->DamageType = NULL;
}

