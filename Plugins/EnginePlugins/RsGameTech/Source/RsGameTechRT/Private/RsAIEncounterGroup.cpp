#include "RsAIEncounterGroup.h"

bool ARsAIEncounterGroup::SpawnEncounterGroup() {
    return false;
}

bool ARsAIEncounterGroup::ShouldSemiAsleepAI_Implementation(ARsAICharacter* InAICharacter) {
    return false;
}

bool ARsAIEncounterGroup::ShouldAwakenAI_Implementation(ARsAICharacter* InAICharacter) {
    return false;
}

bool ARsAIEncounterGroup::ShouldAsleepAI_Implementation(ARsAICharacter* InAICharacter) {
    return false;
}

void ARsAIEncounterGroup::ResetEncounterGroup() {
}

void ARsAIEncounterGroup::RequestResetAndAutoSpawn() {
}

void ARsAIEncounterGroup::OnSpawnTriggerOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ARsAIEncounterGroup::OnRsSpawnTriggerOverlap(URsBaseTriggerComponent* TriggerComponent, AActor* OtherActor) {
}

void ARsAIEncounterGroup::OnPreFactionChange(URsTargetableComponent* TargetableComponent, FGameplayTag PreviousFactionTag, FGameplayTag NewFactionTag) {
}

void ARsAIEncounterGroup::OnCorpseRemoved(ARsAICharacter* AICharacter) {
}

void ARsAIEncounterGroup::OnAISpawned(ARsAICharacter* SpawnedAI, TEnumAsByte<ERsAISpawnResult::Type> SpawnResult) {
}

void ARsAIEncounterGroup::OnAIDespawned(ARsAICharacter* DespawnedAI, TEnumAsByte<ERsAIDespawnReason::Type> DespawnReason) {
}

void ARsAIEncounterGroup::OnAIChangedArea(ARsAICharacter* InAI, bool bIsSpawningArea) {
}

ARsAIEncounterGroup::ARsAIEncounterGroup() {
    // Null default object.
}

