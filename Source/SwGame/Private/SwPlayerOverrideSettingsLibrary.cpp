#include "SwPlayerOverrideSettingsLibrary.h"

FGameplayTagContainer USwPlayerOverrideSettingsLibrary::GetOverrideHeroUpgradeTags() {
    return FGameplayTagContainer{};
}

FRsBitfield_HeroUpgradeFlags USwPlayerOverrideSettingsLibrary::GetOverrideHeroUpgradeFlags() {
    return FRsBitfield_HeroUpgradeFlags{};
}

FRsBitfield_HeroLoadoutFlags USwPlayerOverrideSettingsLibrary::GetOverrideHeroLoadoutFlags() {
    return FRsBitfield_HeroLoadoutFlags{};
}

USwPlayerOverrideSettingsLibrary::USwPlayerOverrideSettingsLibrary() {
    // Null default object.
}

