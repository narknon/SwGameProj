#include "RsAISpawner.h"

void ARsAISpawner::PrimeSpawner() {
}

FVector ARsAISpawner::GetIntroAnimationWarpTarget_Implementation(int32 SpawnerSlot) const {
    return FVector{};
}

ARsAIEncounterGroup* ARsAISpawner::GetAssociatedEncounterGroup() const {
    return NULL;
}

void ARsAISpawner::EnableSpawner(bool bEnable) {
}

void ARsAISpawner::DespawnAllAI(TEnumAsByte<ERsAIDespawnReason::Type> DespawnReason) {
}

ARsAISpawner::ARsAISpawner() {
    // Null default object.
}

