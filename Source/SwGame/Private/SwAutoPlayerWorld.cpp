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
    this->StartPoint = NULL;
    this->ShouldLootChests = true;
    this->ShouldLootEchos = true;
    this->ShouldLootTreasure = true;
    this->ShouldLootScans = true;
    this->GodMode = false;
    this->AllowCombat = false;
    this->EnemiesIgnorePlayer = true;
    this->ForceDismount = false;
    this->CancelLedgePullUp = false;
    this->InvalidateTargetAfterDuration = false;
    this->InvalidateTargetDuration = 340282346638528859811704183484516925440.00f;
    this->DebugDraw = true;
    this->DebugDrawAim = false;
    this->DebugDrawNavMesh = false;
    this->ChestActorType = NULL;
    this->QuickSqueezeActorType = NULL;
    this->ElevatorActorType = NULL;
    this->CallButtonActorType = NULL;
    this->EchoActorType = NULL;
    this->TreasureActorType = NULL;
    this->ScanActorType = NULL;
    this->ShockFieldType = NULL;
    this->ZoneInteractType = NULL;
    this->NavigationData = NULL;
}

