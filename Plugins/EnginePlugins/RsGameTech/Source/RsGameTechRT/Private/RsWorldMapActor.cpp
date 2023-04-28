#include "RsWorldMapActor.h"

void ARsWorldMapActor::SetWorldMapVisibility_Blueprint(bool bInIsVisible, ERsWorldMapLevelType InWorldMapLevelType) {
}

void ARsWorldMapActor::SetVisible_Implementation() {
}

void ARsWorldMapActor::SetOverridePropertyInspectorSecondaryPriority(ERsWorldMapPISecondaryPriority InSecondaryPriority) {
}

void ARsWorldMapActor::SetOverridePropertyInspectorPrimaryPriority(ERsWorldMapPIPrimaryPriorityBucket InPrimaryPriority) {
}

void ARsWorldMapActor::SetOverridePropertyInspectorDescriptionRow(FName InDescriptionRow) {
}





ERsWorldMapPIPrimaryPriorityBucket ARsWorldMapActor::GetPropertyInspectorPrimaryPriority() const {
    return ERsWorldMapPIPrimaryPriorityBucket::Invalid;
}

FName ARsWorldMapActor::GetPropertyInspectorDescriptionRow() const {
    return NAME_None;
}

ERsWorldMapPISecondaryPriority ARsWorldMapActor::GetPrimaryInspectorSecondaryPriority() const {
    return ERsWorldMapPISecondaryPriority::Invalid;
}

void ARsWorldMapActor::ClearOverridePropertyInspectorSecondaryPriority() {
}

void ARsWorldMapActor::ClearOverridePropertyInspectorPrimaryPriority() {
}

void ARsWorldMapActor::ClearOverridePropertyInspectorDescriptionRow() {
}

void ARsWorldMapActor::ApplyRuntimeSettings_Implementation() {
}

ARsWorldMapActor::ARsWorldMapActor() {
    // Null default object.
}

