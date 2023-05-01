#include "SwAIFightSystem.h"

void USwAIFightSystem::OnVictimDied(AActor* DeadActor) {
}

void USwAIFightSystem::OnVictimDestroyed(AActor* DestroyedActor) {
}

USwAIFightSystem::USwAIFightSystem() {
    this->PredatorPreyDirector = NULL;
}

