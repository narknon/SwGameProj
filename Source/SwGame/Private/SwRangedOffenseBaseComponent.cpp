#include "SwRangedOffenseBaseComponent.h"
#include "Templates/SubclassOf.h"

ASwProjectile* USwRangedOffenseBaseComponent::SpawnProjectileWithTransform(TSubclassOf<ASwProjectile> ProjectileClass, ARsCharacter* Shooter, const FTransform& MuzzleTransform, USceneComponent* MuzzleComponent, ERsAIShotAccuracyOverrideMode AccuracyOverrideMode, bool bNoTrackingShot) {
    return NULL;
}

ASwProjectile* USwRangedOffenseBaseComponent::SpawnProjectileAtTargetWithFallbackTransform(TSubclassOf<ASwProjectile> ProjectileClass, FVector from, AActor* ShootTarget, ESwProjectileTargetRule TargetingBone, bool bLineTraceTest, FTransform FallbackSpawnTransform, USceneComponent* MuzzleComponent, ERsAIShotAccuracyOverrideMode AccuracyOverrideMode) {
    return NULL;
}

ASwProjectile* USwRangedOffenseBaseComponent::SpawnProjectileAtTarget(TSubclassOf<ASwProjectile> ProjectileClass, FVector from, AActor* ShootTarget, ESwProjectileTargetRule TargetingBone, bool bLineTraceTest, USceneComponent* MuzzleComponent, ERsAIShotAccuracyOverrideMode AccuracyOverrideMode) {
    return NULL;
}

void USwRangedOffenseBaseComponent::SpawnProjectileAsync(TSubclassOf<ASwProjectile> ProjectileClass, ARsCharacter* Shooter, USceneComponent* MuzzleComponent, ERsAIShotAccuracyOverrideMode AccuracyOverrideMode) {
}

ASwProjectile* USwRangedOffenseBaseComponent::SpawnProjectile(TSubclassOf<ASwProjectile> ProjectileClass, ARsCharacter* Shooter, USceneComponent* MuzzleComponent, ERsAIShotAccuracyOverrideMode AccuracyOverrideMode, bool bNoTrackingShot) {
    return NULL;
}

void USwRangedOffenseBaseComponent::RestartShotAccuracyCycle() {
}


bool USwRangedOffenseBaseComponent::IsFriendlyBlockingLOS(USceneComponent* MuzzleComponent) {
    return false;
}

void USwRangedOffenseBaseComponent::HandleAudioReflections(const FVector& AudioSourceLocation, const FVector& AudioSourceForwardVector, const float TraceDistance, const float InMinimumReflectionDistance, float InDelayMultiplier) {
}

FString USwRangedOffenseBaseComponent::GetAccuracyCycleStateDebugString() const {
    return TEXT("");
}

bool USwRangedOffenseBaseComponent::CheckAttackTargetWithinShootingCone(float AngleInDegree, bool bIgnoreTargetElevation, USceneComponent* OverrideAimTransform) const {
    return false;
}

USwRangedOffenseBaseComponent::USwRangedOffenseBaseComponent() {
    this->CumulativeShotTimeInterval = 1.50f;
    this->OffScreenShotsNum = 0;
    this->MissingShotsNum = 0;
    this->AccurateShotsNum = 0;
    this->AccurateSpreadingData = NULL;
    this->MissedSpreadingData = NULL;
    this->ExtendedMissedSpreadingData = NULL;
    this->AccuracyConfig = NULL;
    this->bCanUseAsyncSpawning = false;
}

