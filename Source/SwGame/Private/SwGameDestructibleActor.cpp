#include "SwGameDestructibleActor.h"





bool ASwGameDestructibleActor::IsFullyDestroyed(const AActor* DestructibleActor) {
    return false;
}

void ASwGameDestructibleActor::HandleOnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASwGameDestructibleActor::HandleOnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASwGameDestructibleActor::HandleOnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

int32 ASwGameDestructibleActor::GetFoliageInstanceIndex() const {
    return 0;
}

ESwDestructibleActorParallelStateType ASwGameDestructibleActor::GetCurrentActiveParallelState() {
    return ESwDestructibleActorParallelStateType::None;
}

void ASwGameDestructibleActor::FullyDestroyDestructibleActor(AActor* destructibleActorToFullyDestroy, FVector DestructionCenterPosition, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser, const FRsDamageParams& RsDamageParams) {
}

void ASwGameDestructibleActor::FullyDestroyDestructible(AActor* destructibleActorToFullyDestroy, FVector DestructionCenterPosition, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}


ASwGameDestructibleActor::ASwGameDestructibleActor() {
    this->IntendedUsage = ESwDestructibleActorIntendedUsage::Standard;
    this->DestructionDisabled = false;
    this->TakeDamageAcceptedOnlyFromHero = false;
    this->TakeDamageMethodNeverAccepted = false;
    this->SetToForceIgnoredWhenDestroyed = true;
    this->SaveGameType = ESwGameDestructionSaveType::SaveAtCheckpoint;
    this->DamageCountMethod = ESwDestructibleActorDamageCountMethod::DamagePoints;
    this->DebugLogDestruction = false;
    this->DebugLogSleepingStateForAllRigidBodies = false;
    this->NeverDisableTick = false;
}

