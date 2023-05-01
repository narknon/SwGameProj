#include "RsPinTelemetryBlueprintLibrary.h"

void URsPinTelemetryBlueprintLibrary::PinTelemetry_ZTargetSwitched(AActor* PrevTarget, AActor* NewTarget) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_ZTargetActivated(bool bIsZTargetActive, AActor* Target) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_XPGained(float Amount) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_VoidTearEntered(const FString& VoidTearID) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_StimUsed(int32 NumTotalStims, int32 NumRemainingStims, AActor* CurrentTarget) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_SlowBombActivated(int32 NumSecondsThatMeterWasFull) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_ShopUsed(const FString& ShopID) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_SetEnabled(bool bEnabled) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_SavePointMissed(const FString& SavePointID) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_SavePointMenuSelected(const FString& SavePointID, const FString& SubMenuSelected) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_SavePointEntered(const FString& SavePointID) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_RewardsAcquired(TArray<FString> Rewards, AActor* RewardingActor) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_ResumeGame() {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_PlayerKilledEnemy() {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_PlayerJumped(FVector JumpStartLocation, FVector JumpEndLocation) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_PlayerDied(AActor* KilledBy, TEnumAsByte<ERsPinTelemetryPlayerWeaponType> PlayerWeaponType, int32 NumRemainingHeals) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_OverlookUsed(const FString& OverlookName) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_ObjectiveCompleted(const FString& ObjectiveType, const FString& ObjectiveID) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_NPCDeath(AActor* Killer, const FString& KillingCause, AActor* Victim, const bool bHeroIsKiller, TEnumAsByte<ERsPinTelemetryPlayerWeaponType> HeroWeaponType) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_NPCConversationStarted(AActor* NPCActor) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_MountUsed(const FString& MountType) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_LeaveGame() {
}

bool URsPinTelemetryBlueprintLibrary::PinTelemetry_IsEnabled() {
    return false;
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_HolomapOpen(TArray<FString> RumorIDs) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_HeroStanceEquipped(const FString& PrevStance, const FString& NewStance) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_GenericPlayerInteract(const FString& ActionType, const FString& Context) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_GardenSeedPlanted(const FString& SeedType) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_ForceMeterEmptied(int32 TotalForceMeterAmount) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_FinishedGame() {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_CustomizationsEquipped(const FString& CustomizationJSON) {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_BeginNewGame() {
}

void URsPinTelemetryBlueprintLibrary::PinTelemetry_BeastTamed(const FString& BeastType) {
}

URsPinTelemetryBlueprintLibrary::URsPinTelemetryBlueprintLibrary() {
}

