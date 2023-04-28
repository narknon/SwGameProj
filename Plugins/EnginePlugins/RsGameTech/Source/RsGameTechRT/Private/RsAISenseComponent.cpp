#include "RsAISenseComponent.h"
#include "Templates/SubclassOf.h"

bool URsAISenseComponent::RemoveSensorDefinition(TSubclassOf<URsAISensor> SensorClass) {
    return false;
}

void URsAISenseComponent::OwnerDiedHandler(AActor* DeadActor) {
}

bool URsAISenseComponent::OverrideSensorDefinition(const URsAISensorDefinition* NewOverrideSensorDefinition) {
    return false;
}

void URsAISenseComponent::OnFactionChanged(URsTargetableComponent* TargetableComponent) {
}

void URsAISenseComponent::OnActorAwareOfTookAnyOrNoDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void URsAISenseComponent::OnActorAwareOfDestroyed(AActor* DestroyedActor) {
}

void URsAISenseComponent::EnableStimuliFromScript(bool Enabled) {
}

void URsAISenseComponent::EnableSensorsFromScript(bool Enabled) {
}

void URsAISenseComponent::AddSensorDefinition(const URsAISensorDefinition* NewOverrideSensorDefinition) {
}

URsAISenseComponent::URsAISenseComponent() {
    // Null default object.
}

