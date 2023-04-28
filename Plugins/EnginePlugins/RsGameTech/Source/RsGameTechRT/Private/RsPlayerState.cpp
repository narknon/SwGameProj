#include "RsPlayerState.h"

bool ARsPlayerState::IsCharmEquippedBP_Implementation(FName CharmName) const {
    return false;
}

bool ARsPlayerState::HasReloaded() const {
    return false;
}

FRsBitfield_HeroLoadoutFlags ARsPlayerState::GetCurrentLoadoutFlags() const {
    return FRsBitfield_HeroLoadoutFlags{};
}

FGameplayTagContainer ARsPlayerState::GetCurrentHeroUpgradeTags() const {
    return FGameplayTagContainer{};
}




ARsPlayerState::ARsPlayerState() {
    // Null default object.
}

