#include "RsElectricNetworkComponent.h"

void URsElectricNetworkComponent::UngroupFromNetworkObject(FRsChemistryObjectHandle OtherNetworkObject) {
}

void URsElectricNetworkComponent::UngroupFromNetwork(URsElectricNetworkComponent* ElectricNetwork) {
}

void URsElectricNetworkComponent::RemoveConductorObject(FRsChemistryObjectHandle ConductorObject) {
}

void URsElectricNetworkComponent::RemoveConductor(URsElectricConductorComponent* ElectricConductor) {
}

void URsElectricNetworkComponent::GroupWithNetworkObject(FRsChemistryObjectHandle OtherNetworkObject) {
}

void URsElectricNetworkComponent::GroupWithNetwork(URsElectricNetworkComponent* ElectricNetwork) {
}

FRsChemistryObjectHandle URsElectricNetworkComponent::GetChemistryObject() const {
    return FRsChemistryObjectHandle{};
}

void URsElectricNetworkComponent::AddConductorObject(FRsChemistryObjectHandle ConductorObject) {
}

void URsElectricNetworkComponent::AddConductor(URsElectricConductorComponent* ElectricConductor) {
}

URsElectricNetworkComponent::URsElectricNetworkComponent() {
    // Null default object.
}

