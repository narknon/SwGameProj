#include "SwReflectableProjectileComponent.h"

bool USwReflectableProjectileComponent::UpdatePreReflectionBP_Implementation(float InPreReflectionStartTime, float InCurrentTime) {
    return false;
}

bool USwReflectableProjectileComponent::ShouldNativeReflect_Implementation(ARsCharacter* ProjectileInstigator, ARsCharacter* ReflectionInstigator) const {
    return false;
}

bool USwReflectableProjectileComponent::ShouldNativeDeflect_Implementation(ARsCharacter* ProjectileInstigator, ARsCharacter* ReflectionInstigator) const {
    return false;
}

void USwReflectableProjectileComponent::ReflectTowardsOwner(ARsCharacter* ReflectionInstigator, AActor* OverrideTarget, float InNewSpeed, FName InSocketName, FVector DefaultTrackingOffset) {
}

void USwReflectableProjectileComponent::ReflectTowardsCamera(ARsCharacter* ReflectionInstigator, float InNewSpeed) {
}

void USwReflectableProjectileComponent::ReflectTowardsActor(AActor* TargetToReflectTowards, float InNewSpeed, FName InSocketName, FVector DefaultTrackingOffset) {
}



USwReflectableProjectileComponent::USwReflectableProjectileComponent() {
    this->bReflected = false;
    this->bIsReflectable = true;
    this->bIsDeflectable = true;
    this->bPreReflectionEnabled = false;
}

