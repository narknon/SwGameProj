#include "SwAutoPlayerWorld.h"

void ASwAutoPlayerWorld::SetProjectileCollision(UPrimitiveComponent* InCollisionComponent) {
}

void ASwAutoPlayerWorld::SetForceStandInPlace(bool IsEnabled) {
}

void ASwAutoPlayerWorld::SetForcedLookAt(const FVector& LookAt) {
}

void ASwAutoPlayerWorld::SetCustomSpamInput(FName InputAction, bool IsExclusive, float SpamDuration) {
}

void ASwAutoPlayerWorld::SetCustomInput(FName InputAction, bool IsExclusive, float Duration) {
}

void ASwAutoPlayerWorld::ReloadNavData(const FString& WorldName) {
}

void ASwAutoPlayerWorld::OnProjectileOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASwAutoPlayerWorld::OnProjectileEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}


void ASwAutoPlayerWorld::InvalidateCurrentNavPoint() {
}




void ASwAutoPlayerWorld::ClearForcedLookAt() {
}

void ASwAutoPlayerWorld::AddCustomInput(FName InputAction, float Duration) {
}

ASwAutoPlayerWorld::ASwAutoPlayerWorld() {
    // Null default object.
}

