#include "RsFallingKillRelocator.h"
#include "Templates/SubclassOf.h"

void URsFallingKillRelocator::UnblockLocationRecording(AActor* BlockerActor) {
}

void URsFallingKillRelocator::TeleportPlayerToLastAvailableLocation(ERsFallOutOfWorldResult& Result, float DamageAmount, TSubclassOf<UDamageType> DamageTypeClass, float Delay) {
}

void URsFallingKillRelocator::StopRecordingUntilTeleported() {
}

void URsFallingKillRelocator::SetMountedHeightOffset(float HeightOffset) {
}

void URsFallingKillRelocator::OnTopologyChanged(ERsTopologyMode previousMode, ERsTopologyMode newMode, float Proximity) {
}

bool URsFallingKillRelocator::HasStoppedRecording() {
    return false;
}

FVector URsFallingKillRelocator::GetBestRelocationPoint() const {
    return FVector{};
}

void URsFallingKillRelocator::ClearMountedHeightOffset() {
}

void URsFallingKillRelocator::ClearHistoryAndSetRelocationPoint(const FVector& InLocation, const FRotator& InRotation, bool bClampToGround) {
}

void URsFallingKillRelocator::ClearHistoryAndSetRelocationComponent(USceneComponent* InComponent, bool bUseOverrideRotation, FRotator OverrideRotation, bool bClampToGround) {
}

void URsFallingKillRelocator::BlockLocationRecording(AActor* BlockerActor, const FString& Reason) {
}

URsFallingKillRelocator::URsFallingKillRelocator() {
    this->QueryHalfGridSize = 1000.00f;
    this->QueryGridSpan = 100.00f;
    this->EdgeAvoidanceRadius = 150.00f;
    this->EdgeAvoidanceTestsNum = 12;
    this->ThreatAvoidanceRadius = 1000.00f;
    this->ThreatAvoidanceCoefficient = 1.00f;
    this->MaxTrackBackTime = 1.00f;
    this->TrackBackInterval = 0;
    this->TrackBackMinDistance = 100.00f;
    this->FallingKillDamageType = NULL;
}

