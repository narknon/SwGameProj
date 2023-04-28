#include "RsAIGameStateManager.h"

void URsAIGameStateManager::OnTakeAnyOrNoDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void URsAIGameStateManager::OnPreFactionChange(URsTargetableComponent* TargetableComponent, FGameplayTag PreviousFactionTag, FGameplayTag NewFactionTag) {
}

void URsAIGameStateManager::OnAwarenessStateChanged(ARsAIController* AIController, TEnumAsByte<ERsAIAwarenessState::Type> PreviousAwarenessState, TEnumAsByte<ERsAIAwarenessState::Type> NewAwarenessState) {
}

void URsAIGameStateManager::OnAttackTargetChanged(ARsAIController* AIController) {
}

void URsAIGameStateManager::OnAIUninitialized(URsAISystem* AISystem, ARsAIController* AIController) {
}

void URsAIGameStateManager::OnAIInitialized(URsAISystem* AISystem, ARsAIController* AIController) {
}

void URsAIGameStateManager::OnAIDied(AActor* DeadActor) {
}

void URsAIGameStateManager::OnAIDestroyed(AActor* DestroyedActor) {
}

bool URsAIGameStateManager::IsTranquil() const {
    return false;
}

int32 URsAIGameStateManager::GetNumTotalCombatants() const {
    return 0;
}

int32 URsAIGameStateManager::GetNumCombatantsKilledByPlayer() const {
    return 0;
}

int32 URsAIGameStateManager::GetNumCombatantsKilled() const {
    return 0;
}

int32 URsAIGameStateManager::GetNumAliveCombatants() const {
    return 0;
}

int32 URsAIGameStateManager::GetNumAIAttackingPlayer() const {
    return 0;
}

TEnumAsByte<ERsAIGameState::Type> URsAIGameStateManager::GetGameState() const {
    return ERsAIGameState::OutOfCombat;
}

URsAIGameStateManager::URsAIGameStateManager() {
    // Null default object.
}

