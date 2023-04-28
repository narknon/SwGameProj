#include "RsHeroBlueprintLibrary.h"

void URsHeroBlueprintLibrary::SetGamepadCameraYAxisInverted(const UObject* WorldContextObject, bool bInvert) {
}

FRsBitfield_NavState URsHeroBlueprintLibrary::MakeFRsBitfield_NavState(TArray<ERsNavState> Flags) {
    return FRsBitfield_NavState{};
}

FRsBitfield_HeroUpgradeFlags URsHeroBlueprintLibrary::MakeFRsBitfield_HeroUpgradeFlags(TArray<ERsHeroUpgradeFlags> Flags) {
    return FRsBitfield_HeroUpgradeFlags{};
}

FRsBitfield_HeroLoadoutFlags URsHeroBlueprintLibrary::MakeFRsBitfield_HeroLoadoutFlags(TArray<ERsHeroLoadoutFlags> Flags) {
    return FRsBitfield_HeroLoadoutFlags{};
}

FRsBitfield_HeroInputFlags URsHeroBlueprintLibrary::MakeFRsBitfield_HeroInputFlags(TArray<ERsHeroInputFlags> Flags) {
    return FRsBitfield_HeroInputFlags{};
}

FRsBitfield_HeroBufferFlags URsHeroBlueprintLibrary::MakeFRsBitfield_HeroBufferFlags(TArray<ERsHeroBufferFlags> Flags) {
    return FRsBitfield_HeroBufferFlags{};
}

bool URsHeroBlueprintLibrary::IsNavStateBitSet(const FRsBitfield_NavState& Bitfield, ERsNavState BitToCheck) {
    return false;
}

bool URsHeroBlueprintLibrary::IsHeroStateModifierValid(URsHeroStateModifierDefinition* Modifier, ERsNavState navState) {
    return false;
}

bool URsHeroBlueprintLibrary::IsGripInputHeld(const ARsHero* RsHero) {
    return false;
}

bool URsHeroBlueprintLibrary::IsGamepadCameraYAxisInverted(const UObject* WorldContextObject) {
    return false;
}

bool URsHeroBlueprintLibrary::IgnoreGripInputRequirement() {
    return false;
}

void URsHeroBlueprintLibrary::BreakFRsBitfield_HeroUpgradeFlags(const FRsBitfield_HeroUpgradeFlags& UpgradeFlags, TArray<ERsHeroUpgradeFlags>& Flags) {
}

void URsHeroBlueprintLibrary::BreakFRsBitfield_HeroLoadoutFlags(const FRsBitfield_HeroLoadoutFlags& LoadoutFlags, TArray<ERsHeroLoadoutFlags>& Flags) {
}

URsHeroBlueprintLibrary::URsHeroBlueprintLibrary() {
    // Null default object.
}

