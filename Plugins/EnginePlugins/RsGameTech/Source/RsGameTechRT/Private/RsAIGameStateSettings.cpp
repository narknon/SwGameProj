#include "RsAIGameStateSettings.h"

FRsAIGameStateSettings::FRsAIGameStateSettings() {
    this->PreCombatCooldown = 0.00f;
    this->PostCombatCooldown = 0.00f;
    this->MinTimeUntilTranquilityAchievedEvent = 0.00f;
    this->MaxTimeUntilTranquilityAchievedEvent = 0.00f;
    this->DistanceToAggroEnemiesToRemainInCombat = 0.00f;
}

