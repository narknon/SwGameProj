#include "RsChemistrySystem.h"

void URsChemistrySystem::UpdateFlammableSettings(const FRsChemistryObjectHandle& FlammableObjectHandle, const URsChemistryFlammableSettings* FlammableSettings) {
}

void URsChemistrySystem::UnlinkElectricitySourceFromConductor(const FRsChemistryObjectHandle& ElectricitySourceObjectHandle, const FRsChemistryObjectHandle& ConductorObjectHandle) {
}

void URsChemistrySystem::UngroupElectricityNetworks(const FRsChemistryObjectHandle& NetworkObjectHandleA, const FRsChemistryObjectHandle& NetworkObjectHandleB) {
}

void URsChemistrySystem::UnelectrifyConductor(const FRsChemistryObjectHandle& ObjectHandle) {
}

void URsChemistrySystem::UnbindOnUnelectrify(const FRsChemistryObjectHandle& ObjectHandle, const FRsOnUnelectrifyDelegate& OnUnelectrifyDelegate) {
}

void URsChemistrySystem::UnbindOnFireIgnited(const FRsChemistryObjectHandle& ObjectHandle, const FRsOnFireIgnitedDelegate& OnFireIgnitedDelegate) {
}

void URsChemistrySystem::UnbindOnFireExtinguished(const FRsChemistryObjectHandle& ObjectHandle, const FRsOnFireExtinguishedDelegate& OnFireExtinguishedDelegate) {
}

void URsChemistrySystem::UnbindOnElectrify(const FRsChemistryObjectHandle& ObjectHandle, const FRsOnElectrifyDelegate& OnElectrifyDelegate) {
}

void URsChemistrySystem::SetFlammableWorldTransform(const FRsChemistryObjectHandle& FlammableObjectHandle, FTransform InWorldTransform) {
}

void URsChemistrySystem::SetFlammableSceneParent(const FRsChemistryObjectHandle& FlammableObjectHandle, USceneComponent* InSceneParent, bool bInheritScale) {
}

void URsChemistrySystem::ResetFlammableIgnitionState(const FRsChemistryObjectHandle& FlammableObjectHandle) {
}

void URsChemistrySystem::RemoveConductorFromNetwork(const FRsChemistryObjectHandle& ConductorObjectHandle, const FRsChemistryObjectHandle& NetworkObjectHandle) {
}

void URsChemistrySystem::RemoveChemistryProperty(const FRsChemistryObjectHandle& ObjectHandle, const TEnumAsByte<ERsChemistryProperty::Type> PropertyType) {
}

void URsChemistrySystem::LinkElectricitySourceToConductor(const FRsChemistryObjectHandle& ElectricitySourceObjectHandle, const FRsChemistryObjectHandle& ConductorObjectHandle) {
}

void URsChemistrySystem::IgniteNearbyFlammables(FVector Location, float IgnitionRadius, bool bDrawDebug) {
}

void URsChemistrySystem::IgniteFlammable(const FRsChemistryObjectHandle& FlammableObjectHandle) {
}

void URsChemistrySystem::GroupElectricityNetworks(const FRsChemistryObjectHandle& NetworkObjectHandleA, const FRsChemistryObjectHandle& NetworkObjectHandleB) {
}

FRsChemistryElectricityConductibleState URsChemistrySystem::GetConductibleState(const FRsChemistryObjectHandle& ObjectHandle) {
    return FRsChemistryElectricityConductibleState{};
}

void URsChemistrySystem::ExtinguishFlammable(const FRsChemistryObjectHandle& FlammableObjectHandle) {
}

void URsChemistrySystem::ElectrifyConductor(const FRsChemistryObjectHandle& ObjectHandle) {
}

void URsChemistrySystem::DestroyChemistryObject(const FRsChemistryObjectHandle& ObjectHandle) {
}

void URsChemistrySystem::DeactivateElectricitySource(const FRsChemistryObjectHandle& ObjectHandle) {
}

FRsChemistryObjectHandle URsChemistrySystem::CreateChemistryObject(UObject* Owner, const int32 InitialPropertyMask) {
    return FRsChemistryObjectHandle{};
}

bool URsChemistrySystem::CheckValid(const FRsChemistryObjectHandle& ObjectHandle) const {
    return false;
}

void URsChemistrySystem::BindOnUnelectrify(const FRsChemistryObjectHandle& ObjectHandle, const FRsOnUnelectrifyDelegate& OnUnelectrifyDelegate) {
}

void URsChemistrySystem::BindOnFireIgnited(const FRsChemistryObjectHandle& ObjectHandle, const FRsOnFireIgnitedDelegate& OnFireIgnitedDelegate) {
}

void URsChemistrySystem::BindOnFireExtinguished(const FRsChemistryObjectHandle& ObjectHandle, const FRsOnFireExtinguishedDelegate& OnFireExtinguishedDelegate) {
}

void URsChemistrySystem::BindOnElectrify(const FRsChemistryObjectHandle& ObjectHandle, const FRsOnElectrifyDelegate& OnElectrifyDelegate) {
}

void URsChemistrySystem::AddConductorToNetwork(const FRsChemistryObjectHandle& ConductorObjectHandle, const FRsChemistryObjectHandle& NetworkObjectHandle) {
}

void URsChemistrySystem::AddChemistryProperty(const FRsChemistryObjectHandle& ObjectHandle, const TEnumAsByte<ERsChemistryProperty::Type> PropertyType) {
}

void URsChemistrySystem::ActivateElectricitySource(const FRsChemistryObjectHandle& ObjectHandle) {
}

URsChemistrySystem::URsChemistrySystem() {
    // Null default object.
}

