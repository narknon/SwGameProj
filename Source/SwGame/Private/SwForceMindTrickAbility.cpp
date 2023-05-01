#include "SwForceMindTrickAbility.h"

void USwForceMindTrickAbility::StopMindTrick() {
}



void USwForceMindTrickAbility::OnHoldRelease() {
}



bool USwForceMindTrickAbility::IsTargetValidBP_Implementation(const AActor* InTarget) const {
    return false;
}

bool USwForceMindTrickAbility::IsMindTrickTriggerDelayed() const {
    return false;
}

bool USwForceMindTrickAbility::IsMindTrickInProgress() const {
    return false;
}

bool USwForceMindTrickAbility::CanDoMindTrick() const {
    return false;
}

USwForceMindTrickAbility::USwForceMindTrickAbility() {
    this->MindTrickLoadoutFlag = ERsHeroLoadoutFlags::WallRunUnlocked;
    this->TrickCheckRadius = 2000.00f;
    this->StateModifierWhileTricking = NULL;
    this->EnterAnimation = NULL;
    this->FailureAnimation = NULL;
    this->HoldSuccessAnimation = NULL;
    this->RotateTotargetRate = 500.00f;
    this->StartAnimationDelay = 0.20f;
    this->MaxGracefulEffectsTriggerDelay = 5.00f;
    this->AudioFail = NULL;
    this->AudioSuccess = NULL;
    this->AudioStart = NULL;
    this->AudioStop = NULL;
    this->MaxTrickedTargets = 1;
    this->TurnDuration = 0.20f;
    this->bDelayTriggerForEffects = true;
    this->MindTrickActivationTime = 340282346638528859811704183484516925440.00f;
    this->MindTrickTriggerDelayTime = -1.00f;
    this->TriggerDelayInstanceData = NULL;
    this->bTriggerDelayIsHeld = false;
    this->bTutorialStartPlayed = false;
    this->bTutorialSuccessPlayed = false;
    this->bTutorialFailPlayed = false;
    this->bFinishedTricking = false;
    this->bFinishingAbility = false;
    this->MontagePlaying = NULL;
}

