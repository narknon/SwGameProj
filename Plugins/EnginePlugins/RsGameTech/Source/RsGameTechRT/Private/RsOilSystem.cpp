#include "RsOilSystem.h"

void URsOilSystem::HandleOilParticleIgnited(FRsChemistryObjectHandle FlammableObject, FVector IgnitionPoint) {
}

void URsOilSystem::HandleOilParticleExtinguished(FRsChemistryObjectHandle FlammableObject) {
}

bool URsOilSystem::GetOilParticleTransform(FTransform& ParticleTransform, int32 ParticleID) const {
    return false;
}

void URsOilSystem::GetNearbyActiveOilParticles(TArray<int32>& ParticleIds, FVector SearchLocation, float SearchRadius, bool bDrawDebug) {
}

bool URsOilSystem::DeactivateOilParticleById(int32 ParticleID) {
    return false;
}

void URsOilSystem::CreateOilPatch(FVector Location, FVector Direction) {
}

void URsOilSystem::CreateOilFailureEffects(FVector Location, FVector HitNormal) {
}

void URsOilSystem::ClearOil() {
}

URsOilSystem::URsOilSystem() {
    // Null default object.
}

