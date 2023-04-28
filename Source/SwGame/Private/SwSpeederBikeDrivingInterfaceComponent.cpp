#include "SwSpeederBikeDrivingInterfaceComponent.h"

void USwSpeederBikeDrivingInterfaceComponent::HandleOnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

bool USwSpeederBikeDrivingInterfaceComponent::BlueprintIsInAir() {
    return false;
}

float USwSpeederBikeDrivingInterfaceComponent::BlueprintInAirHeight() {
    return 0.0f;
}

FVector USwSpeederBikeDrivingInterfaceComponent::BlueprintGetCurrentSpeederBikeVelocity() {
    return FVector{};
}

float USwSpeederBikeDrivingInterfaceComponent::BlueprintGetCurrentSpeederBikeSpeed() {
    return 0.0f;
}

USwSpeederBikeDrivingInterfaceComponent::USwSpeederBikeDrivingInterfaceComponent() {
    // Null default object.
}

