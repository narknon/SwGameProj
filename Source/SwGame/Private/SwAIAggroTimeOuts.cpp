#include "SwAIAggroTimeOuts.h"

FSwAIAggroTimeOuts::FSwAIAggroTimeOuts() {
    this->MaxCharacterType = 0;
    this->MinCharacterTypeLockoutTime = 0.00f;
    this->MaxCharacterTypeLockoutTime = 0.00f;
    this->MinIndividualLockoutTime = 0.00f;
    this->MaxIndividualLockoutTime = 0.00f;
    this->MinSingleAttackerLockoutTime = 0.00f;
    this->MaxSingleAttackerLockoutTime = 0.00f;
    this->bUseSingleAttackerLockoutTimes = false;
    this->MinFightResourceExecutionDelay = 0.00f;
    this->MaxFightResourceExecutionDelay = 0.00f;
}

