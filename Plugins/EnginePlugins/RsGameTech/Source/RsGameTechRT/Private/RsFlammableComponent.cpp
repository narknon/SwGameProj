#include "RsFlammableComponent.h"

void URsFlammableComponent::SetFlammableSettings(const URsChemistryFlammableSettings* InFlammableSettings) {
}

void URsFlammableComponent::ResetIgnitionState() {
}

bool URsFlammableComponent::IsIgnited() const {
    return false;
}

void URsFlammableComponent::Ignite() {
}

void URsFlammableComponent::HandleOnFireIgnited(FRsChemistryObjectHandle Flammable, FVector IgnitionPoint) {
}

void URsFlammableComponent::HandleOnFireExtinguished(FRsChemistryObjectHandle Flammable) {
}

FRsChemistryObjectHandle URsFlammableComponent::GetChemistryObject() const {
    return FRsChemistryObjectHandle{};
}

void URsFlammableComponent::Extinguish() {
}

URsFlammableComponent::URsFlammableComponent() {
    // Null default object.
}

