#include "SwAIResource_Fight.h"

USwAIResource_Fight::USwAIResource_Fight() {
    this->GlobalLockoutTimeAfterBlockByAttacker = 1.20f;
    this->GlobalLockoutTimeAfterVictimSync = 0.35f;
    this->MaxTimeSinceLastAttacked = 9.00f;
    this->DelayAfterBeingSlowedToReleaseResource = 1.00f;
    this->MaxQueueTime = 12.00f;
    this->StealRampUpTime = 0.10f;
    this->StealRampDownTime = 0.20f;
    this->StealRampDownThreshold = 35.00f;
    this->StealLockoutTimeAfterRelease = 5.00f;
}

