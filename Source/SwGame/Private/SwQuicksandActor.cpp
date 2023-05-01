#include "SwQuicksandActor.h"

void ASwQuicksandActor::SetSurfaceDesiredOffset(float TargetOffset, float MovementSpeed) {
}

void ASwQuicksandActor::SetDirectionalFlowOverride(const bool EnableFlowOverride, const float FlowStrength, const float FlowCharacterMotionInfluenceStrength, const FVector& FlowDirection) {
}




void ASwQuicksandActor::OnPrimitiveOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASwQuicksandActor::OnPrimitiveOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASwQuicksandActor::OnActorOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void ASwQuicksandActor::OnActorOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}


float ASwQuicksandActor::GetCurrentSurfaceWorldZ() {
    return 0.0f;
}

bool ASwQuicksandActor::GetBestMountExitLocation(FVector FromLocation, FVector& OutBestLocation) {
    return false;
}

ASwQuicksandActor::ASwQuicksandActor() {
    this->DisableQuicksand = false;
    this->DebugLogAffectedActor = false;
    this->DebugVisualizeEntryPoints = false;
    this->bEnableQuicksandEntryAnticipation = false;
    this->CollisionVolumeActor = NULL;
    this->QuicksandHeroStateModifier = NULL;
    this->QuicksandSettingsDataAsset = NULL;
    this->AnticipateQuicksandEntry = NULL;
}

