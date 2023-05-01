#include "SwStaminaMeterComponent.h"

bool USwStaminaMeterComponent::UnpauseTargetsRegen(const AActor* Target) {
    return false;
}

void USwStaminaMeterComponent::UnpauseStaminaOverTime() {
}

void USwStaminaMeterComponent::UnpauseRegen() {
}

void USwStaminaMeterComponent::Unpause() {
}

bool USwStaminaMeterComponent::StartConsumeStaminaOverTime(const AActor* Target, const UDataTable* DataTable, const FName RowName) {
    return false;
}

void USwStaminaMeterComponent::SetOverrideRegenSpeed(float OverrideRegenSpeed) {
}

void USwStaminaMeterComponent::SetMaxStaminaMeter(float NewMaxStamina, bool bShouldSetCurrentStaminaToMax) {
}

void USwStaminaMeterComponent::RestoreStamina(const AActor* Target, float AmountToRestore) {
}

void USwStaminaMeterComponent::ResetOverrideRegenSpeed() {
}

bool USwStaminaMeterComponent::PauseTargetsRegen(const AActor* Target) {
    return false;
}

void USwStaminaMeterComponent::PauseStaminaOverTime() {
}

void USwStaminaMeterComponent::PauseRegen() {
}

void USwStaminaMeterComponent::Pause() {
}




bool USwStaminaMeterComponent::IsTargetsStaminaMeterEmpty(const AActor* Target) {
    return false;
}

bool USwStaminaMeterComponent::IsTargetsRegenPaused(const AActor* Target) {
    return false;
}

bool USwStaminaMeterComponent::IsStaminaMeterEmpty() const {
    return false;
}

bool USwStaminaMeterComponent::IsRegenPaused() const {
    return false;
}

float USwStaminaMeterComponent::GetTotalStaminaAmount() const {
    return 0.0f;
}

float USwStaminaMeterComponent::GetStaminaAmount() const {
    return 0.0f;
}

float USwStaminaMeterComponent::GetLastShadowTime() const {
    return 0.0f;
}

bool USwStaminaMeterComponent::ConsumeStaminaImmediately(const AActor* Target, const UDataTable* DataTable, const FName RowName) {
    return false;
}

bool USwStaminaMeterComponent::ConsumeStaminaForBlock(const AActor* Target, const FRsHitEvent& HitEvent) {
    return false;
}

bool USwStaminaMeterComponent::CancelConsumeStaminaOverTime(const AActor* Target, const UDataTable* DataTable, const FName RowName) {
    return false;
}

USwStaminaMeterComponent::USwStaminaMeterComponent() {
    this->StaminaRegenDelay = 0.30f;
    this->StaminaEmptiedRegenDelay = 0.30f;
    this->StaminaRegenSpeed = 35.00f;
    this->OverrideStaminaRegenSpeed = -1.00f;
}

