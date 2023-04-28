#include "SwSimpleDestructible_PlayAnimationParameters.h"

FSwSimpleDestructible_PlayAnimationParameters::FSwSimpleDestructible_PlayAnimationParameters() {
    this->Activate = false;
    this->PlayOnlyForSpecificDamageSourceType = ESwDestructibleActorDamageSourceType::None;
    this->AnimationToPlay = NULL;
    this->StartPhysicsOnThisComponentAtTheEndOfAnimation = false;
    this->AllowFastRateReplayDuringLoadingSavedGame = false;
}

