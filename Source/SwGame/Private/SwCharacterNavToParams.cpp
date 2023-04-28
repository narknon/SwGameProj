#include "SwCharacterNavToParams.h"

FSwCharacterNavToParams::FSwCharacterNavToParams() {
    this->OverrideNavToHeroStateModifier = NULL;
    this->MovementSpace = ESwCharacterNavToMovementSpace::Automatic;
    this->bForceNavTo = false;
    this->NavToTimeOut = 0.00f;
    this->bTeleportToTargetOnTimeOut = false;
    this->bDisableInput = false;
    this->bInterruptOnCombatStateChange = false;
    this->CompletionDistanceThreshold = 0.00f;
    this->TimeToReachTargetMovingInput = 0.00f;
    this->DistanceToStartHaltingInput = 0.00f;
    this->TimeToReachTargetHaltingInput = 0.00f;
    this->bAlignToTarget = false;
    this->CompletionAlignmentThreshold = 0.00f;
    this->DistanceToStartAligningToTarget = 0.00f;
    this->TimeToReachTargetAlignmentInput = 0.00f;
}

