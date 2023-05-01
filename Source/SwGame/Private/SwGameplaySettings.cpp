#include "SwGameplaySettings.h"

bool USwGameplaySettings::IsBeyondUnblockableCutOffDistance(const UObject* InWorldContextObject, FVector InLocation) {
    return false;
}

USwGameplaySettings::USwGameplaySettings() {
    this->ForceSlowParticlesPerCubicMeter = 10.00f;
    this->ProjectileReflectionModeForHero = ESwProjectileReflectionMode::ReflectTowardsShooter;
    this->ExplosiveRadialDamageCollisionChannel = ECC_Visibility;
    this->LowerWeaponSectionName = TEXT("LowerRifle");
    this->FallDistanceToKill = 10000.00f;
    this->UnblockableFXCutOfDistance = 2000.00f;
}

