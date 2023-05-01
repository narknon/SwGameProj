#include "SwForceBeastTameAbility.h"





bool USwForceBeastTameAbility::IsTargetValidBP_Implementation(const AActor* InTarget) const {
    return false;
}

bool USwForceBeastTameAbility::IsBeastTameInProgress() const {
    return false;
}

float USwForceBeastTameAbility::GetTameDurationScaleBP_Implementation() const {
    return 0.0f;
}

bool USwForceBeastTameAbility::CanDoBeastTame() const {
    return false;
}

USwForceBeastTameAbility::USwForceBeastTameAbility() {
    this->BeastTameLoadoutFlag = ERsHeroLoadoutFlags::WallRunUnlocked;
    this->TameCheckRadius = 2000.00f;
    this->StateModifierWhileTaming = NULL;
    this->FarMotionTweakRange = 600.00f;
    this->MotionTweakName = TEXT("BeastTame");
    this->MotionTweakFarName = TEXT("BeastTameFar");
    this->EnterAnimation = NULL;
    this->FailureAnimation = NULL;
    this->SuccessAnimation = NULL;
    this->RotateTotargetRate = 500.00f;
    this->CloseToFinishAudioStartTime = 1.50f;
    this->AudioCloseToFinishStart = NULL;
    this->AudioCloseToFinishClean = NULL;
    this->AudioFail = NULL;
    this->AudioSuccess = NULL;
    this->AudioStart = NULL;
    this->AudioStop = NULL;
    this->StartAnimationDelay = 0.20f;
    this->bHoldSuccessOnTap = false;
    this->bHasHoldUpgradeTags = false;
    this->bIsZTargetingTargetOnTrigger = false;
    this->BeastActivationTime = 340282346638528859811704183484516925440.00f;
    this->PrevMaxTameProgress = 0.00f;
    this->CurTameProgress = 0.00f;
    this->bTutorialStartPlayed = false;
    this->bTutorialSuccessPlayed = false;
    this->bTutorialFailPlayed = false;
    this->bFinishingAbility = false;
    this->MontagePlaying = NULL;
}

