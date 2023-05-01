#include "SwAmbOverlapComponent.h"

void USwAmbOverlapComponent::SetVolume(AVolume* Volume) {
}

void USwAmbOverlapComponent::SetRadius(float NewRadius) {
}

void USwAmbOverlapComponent::SetPrimitiveComponent(UPrimitiveComponent* PrimitiveComp) {
}

void USwAmbOverlapComponent::SetIsUsingCamera(bool IsUsingCamera) {
}

void USwAmbOverlapComponent::SetIsStareted(bool IsStarted) {
}

void USwAmbOverlapComponent::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void USwAmbOverlapComponent::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void USwAmbOverlapComponent::OnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void USwAmbOverlapComponent::OnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

USwAmbOverlapComponent::USwAmbOverlapComponent() {
    this->bIsUsingCamera = false;
    this->Radius = 0.00f;
    this->DistToHero = 0.00f;
    this->TimeElapsed = 0.00f;
    this->bIsStarted = false;
}

