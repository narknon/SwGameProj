#include "SwForceMeterComponent.h"

bool USwForceMeterComponent::UnpauseTargetsRegen(const AActor* Target) {
    return false;
}

void USwForceMeterComponent::UnpauseRegen() {
}

void USwForceMeterComponent::UnpauseForceOverTime() {
}

void USwForceMeterComponent::Unpause() {
}

bool USwForceMeterComponent::StartConsumeForceOverTimeDynamic(const AActor* Target, const FName Identifier, float ForcePerSecond) {
    return false;
}

bool USwForceMeterComponent::StartConsumeForceOverTime(const AActor* Target, const UDataTable* DataTable, const FName RowName) {
    return false;
}

void USwForceMeterComponent::SetMaxForceMeter(float NewMaxForce, bool bShouldSetCurrentForceToMax) {
}

bool USwForceMeterComponent::RestoreForce(const AActor* Target, float AmountToRestore) {
    return false;
}

bool USwForceMeterComponent::PauseTargetsRegen(const AActor* Target) {
    return false;
}

void USwForceMeterComponent::PauseRegen() {
}

void USwForceMeterComponent::PauseForceOverTime() {
}

void USwForceMeterComponent::Pause() {
}




bool USwForceMeterComponent::IsTargetsRegenPaused(const AActor* Target) {
    return false;
}

bool USwForceMeterComponent::IsTargetsForceMeterEmpty(const AActor* Target) {
    return false;
}

bool USwForceMeterComponent::IsRegenPaused() const {
    return false;
}

bool USwForceMeterComponent::IsForceMeterEmpty() const {
    return false;
}

float USwForceMeterComponent::GetLastShadowTime() const {
    return 0.0f;
}

float USwForceMeterComponent::GetConsumeForceImmediateMultiplier_Implementation(const UDataTable* DataTable, FName ForceMeterRow) const {
    return 0.0f;
}

bool USwForceMeterComponent::ConsumeForceImmediately(const AActor* Target, const UDataTable* DataTable, const FName RowName) {
    return false;
}

bool USwForceMeterComponent::CanConsumeForceImmediately(const AActor* Target, const UDataTable* DataTable, const FName RowName, bool bShouldBroadcastFail) {
    return false;
}

bool USwForceMeterComponent::CancelConsumeForceOverTimeDynamic(const AActor* Target, const FName Identifier) {
    return false;
}

bool USwForceMeterComponent::CancelConsumeForceOverTime(const AActor* Target, const UDataTable* DataTable, const FName RowName) {
    return false;
}

USwForceMeterComponent::USwForceMeterComponent() {
    // Null default object.
}

