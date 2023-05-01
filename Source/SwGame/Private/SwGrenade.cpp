#include "SwGrenade.h"

void ASwGrenade::TryToExplode() {
}

void ASwGrenade::SetAttackTypeNames(FName ImpactEffect, FName AttackType) {
}


void ASwGrenade::OnGrenadeTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* InDamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void ASwGrenade::OnGrenadeHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}







void ASwGrenade::NotifyOnTouchActor(AActor* OtherActor) {
}

float ASwGrenade::GetDetonationTime() const {
    return 0.0f;
}

void ASwGrenade::DropGrenade(bool bArmGrenade, float ArmDelay) {
}

void ASwGrenade::DisarmGrenade() {
}

void ASwGrenade::DeactivateCollision() {
}

void ASwGrenade::ArmGrenade(float Delay) {
}

void ASwGrenade::AddTimeToDetonation(float TimeDelay) {
}

void ASwGrenade::AddCollisionShape(UPrimitiveComponent* CollisionComponent) {
}

void ASwGrenade::ActivateCollision() {
}

ASwGrenade::ASwGrenade() {
    this->BaseDamage = 30.00f;
    this->BlastRadius = 300.00f;
    this->DamageType = NULL;
    this->bShouldSpawnActorOnExplode = false;
    this->SpawnActorOnExplode = NULL;
    this->AutoExplodeTotalTime = 6.00f;
    this->bExplodesOnCollision = false;
    this->bAlwaysExplodesOnCollisionWithHero = false;
    this->DamageFilterType = ESwGrenadeDamageFilterType::DamageAll;
    this->DelayOnDetonatedByExplosion = 0.00f;
    this->Countdown = 3;
}

