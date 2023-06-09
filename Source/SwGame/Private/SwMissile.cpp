#include "SwMissile.h"
#include "SwMissileMovementComponent.h"

void ASwMissile::TryToExplode(bool bCollidedWithActor, TEnumAsByte<EPhysicalSurface> SurfaceType, const FHitResult& Hit) {
}

void ASwMissile::SetMissileAlive(bool bIsAlive) {
}

void ASwMissile::SetAttackTypeNames(FName ImpactEffect, FName AttackType) {
}




void ASwMissile::OnMissileHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASwMissile::OnMissileDeflected_Implementation(const FVector& NewDirection, const TArray<ARsCharacter*>& CharactersInTrajectory) {
}





void ASwMissile::LaunchMissileInDirection(float InMissileArmDistance, bool bIsHoming, FVector InDirection) {
}

void ASwMissile::LaunchMissile(float InMissileArmDistance, bool bIsHoming) {
}

bool ASwMissile::IsMissileAlive() const {
    return false;
}

void ASwMissile::DisarmMissile() {
}

void ASwMissile::DeactivateCollision() {
}

void ASwMissile::ArmMissile() {
}

void ASwMissile::ActivateCollision() {
}

ASwMissile::ASwMissile() {
    this->bSpawnUnarmed = false;
    this->BaseDamage = 35.00f;
    this->BlastRadius = 300.00f;
    this->DamageType = NULL;
    this->AutoExplodeTotalTime = 6.00f;
    this->bIsHomingMissile = false;
    this->HomingDuration = 0.40f;
    this->MissileArmDistance = 600.00f;
    this->MissileNotificationRadius = 200.00f;
    this->MissileMovement = CreateDefaultSubobject<USwMissileMovementComponent>(TEXT("SwMissileMovement"));
}

