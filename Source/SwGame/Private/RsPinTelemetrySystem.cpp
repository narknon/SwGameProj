#include "RsPinTelemetrySystem.h"
#include "Templates/SubclassOf.h"

void URsPinTelemetrySystem::OnPlayerUsedAbility(TSubclassOf<URsAbility> AbilityType, AActor* Target, bool bHasSucceeded) {
}

void URsPinTelemetrySystem::OnPlayerPawnChanged(APawn* NewPawn) {
}

void URsPinTelemetrySystem::OnHeroUpgradesChanged(FGameplayTagContainer OldTags, FGameplayTagContainer NewTags) {
}

void URsPinTelemetrySystem::OnDifficultyChanged(ERsDifficulty PreviousDifficulty, ERsDifficulty NewDifficulty) {
}

FString URsPinTelemetrySystem::GetHeroWeaponTypeString(const TEnumAsByte<ERsPinTelemetryPlayerWeaponType> HeroWeaponType) const {
    return TEXT("");
}

URsPinTelemetrySystem::URsPinTelemetrySystem() {
}

