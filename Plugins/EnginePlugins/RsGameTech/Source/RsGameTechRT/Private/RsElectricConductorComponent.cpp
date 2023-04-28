#include "RsElectricConductorComponent.h"

void URsElectricConductorComponent::UnelectrifyConductor() {
}

void URsElectricConductorComponent::RemoveElectricitySourceObject(FRsChemistryObjectHandle ElectricitySourceObject) {
}

void URsElectricConductorComponent::RemoveElectricitySource(URsElectricitySourceComponent* ElectricitySource) {
}

bool URsElectricConductorComponent::IsElectrified() const {
    return false;
}

void URsElectricConductorComponent::HandleOnUnelectrify() {
}

void URsElectricConductorComponent::HandleOnElectrify() {
}

FRsChemistryObjectHandle URsElectricConductorComponent::GetChemistryObject() const {
    return FRsChemistryObjectHandle{};
}

void URsElectricConductorComponent::ElectrifyConductor() {
}

void URsElectricConductorComponent::AddElectricitySourceObject(FRsChemistryObjectHandle ElectricitySourceObject) {
}

void URsElectricConductorComponent::AddElectricitySource(URsElectricitySourceComponent* ElectricitySource) {
}

URsElectricConductorComponent::URsElectricConductorComponent() {
    // Null default object.
}

