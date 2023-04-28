#include "SwSimpleDestructible_CommonReactionOnCharacterOverlap.h"

FSwSimpleDestructible_CommonReactionOnCharacterOverlap::FSwSimpleDestructible_CommonReactionOnCharacterOverlap() {
    this->ReactOnCharacterOverlap = false;
    this->MinimumCharacterSpeed = 0.00f;
    this->DamageAppliedToThisDestructibleActor = 0.00f;
    this->NumberOfHitsAppliedToThisDestructibleActor = 0;
}

