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
    // Null default object.
}

