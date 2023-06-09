#include "SwShippingLaneActor.h"
#include "Templates/SubclassOf.h"

void ASwShippingLaneActor::StopShipLaneInstant() {
}

void ASwShippingLaneActor::StartShipLaneFull() {
}

void ASwShippingLaneActor::StartShipLane() {
}


void ASwShippingLaneActor::SpawnShip(const float DistanceAlongSpline) {
}

void ASwShippingLaneActor::SetupShipLaneShipOptions(float maxDistFromSpline, FRotator relativeRot, float shipScaleMultiplier) {
}

void ASwShippingLaneActor::SetupShipLaneOptions(FFloatRange timeBetweenShips, float laneSpeed) {
}

void ASwShippingLaneActor::SetupShipLaneClasses(TArray<TSubclassOf<AActor>> shipClasses, bool useClasses) {
}

void ASwShippingLaneActor::SetupShipLaneBase(bool autoStartLane, bool smallShips, bool mediumShips, bool largeShips) {
}


void ASwShippingLaneActor::RequestStopShipLane() {
}

void ASwShippingLaneActor::RequestFlyByOnComponent(USceneComponent* TargetComponent, UAkAudioEvent* EventToPost, const FString& SwitchValue) {
}

void ASwShippingLaneActor::OnManagerSetActiveFlybySpline(AActor* ActiveActor) {
}

void ASwShippingLaneActor::OnManagerSetActiveBackgroundSpreadSpline(AActor* NewActiveActor) {
}


void ASwShippingLaneActor::MarkAkComponentForDestroy(UAkComponent* TargetComponent) {
}


ASwShippingLaneActor::ASwShippingLaneActor() {
    this->SplineComponent = NULL;
    this->ConsiderForFlybys = false;
    this->ShipDataTable = NULL;
    this->RequestLaneStop = false;
    this->OscillationEnabled = false;
    this->OscillationSpeedIsSetOnSpawn = true;
    this->OscillationRangeIsSetOnSpawn = true;
    this->IsActiveForFlybys = false;
    this->IsActiveForSpread = false;
    this->BackgroundSplineSpreadAudioEvent = NULL;
    this->MinNumShipsBetweenLargeShips = 4;
}

