#include "SwProjectile.h"
#include "Templates/SubclassOf.h"

FVector ASwProjectile::TrackingShotVector(AActor* HitTarget, FVector Offset, float NewSpeed) const {
    return FVector{};
}

void ASwProjectile::SetReflectionCollision(UPrimitiveComponent* InCollisionComponent) {
}

void ASwProjectile::SetProjectileCollision(UPrimitiveComponent* InCollisionComponent) {
}

void ASwProjectile::SetAttackTypeName(FName InTypeName) {
}

void ASwProjectile::QueueProjectileHitActor(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void ASwProjectile::OnReflectionCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASwProjectile::OnReflectionCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASwProjectile::K2_GetDamagedActors(TArray<AActor*>& DamagedActorsOut, TSubclassOf<AActor> ClassFilter) const {
}

void ASwProjectile::IgnoreCollisionWithMultipleActors(const TArray<AActor*>& IgnoredActors, const bool bShouldIgnore) {
}

void ASwProjectile::IgnoreCollisionWithActor(const AActor* IgnoredActor, const bool bShouldIgnore) {
}

bool ASwProjectile::HasBeenReflected() const {
    return false;
}

bool ASwProjectile::HasBeenDeflected() const {
    return false;
}

float ASwProjectile::GetProjectileCollisionRadius() const {
    return 0.0f;
}

float ASwProjectile::GetInitialSpeed() const {
    return 0.0f;
}

FRsHitEvent ASwProjectile::GetHitEvent() const {
    return FRsHitEvent{};
}

TSubclassOf<URsDamageType> ASwProjectile::GetDamageTypeClass() const {
    return NULL;
}

void ASwProjectile::ExecuteReflectBehavior(ARsCharacter* ReflectionInstigator, AActor* OverrideTarget, float OverrideSpeed) {
}

void ASwProjectile::ExecuteDeflectBehavior(ARsCharacter* DeflectionInstigator, float OverrideSpeed) {
}

bool ASwProjectile::CheckHitActorReflection(ARsCharacter* OtherActor, UPrimitiveComponent* OtherComp) {
    return false;
}

FVector ASwProjectile::CalculateHitAlignmentVector_Implementation(AActor* HitActor, UPrimitiveComponent* HitComponent, FVector ImpactLocation, float ProjectileDamage, AController* EventInstigator) {
    return FVector{};
}

ASwProjectile::ASwProjectile() {
    // Null default object.
}

