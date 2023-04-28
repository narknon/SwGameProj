#include "SwHighlightManager.h"

void USwHighlightManager::UpdateCustomColors() {
}

void USwHighlightManager::SetHighlightBlendCurve(const AActor* InBlendActor, ESwHighlightType InHighlightType, UCurveFloat* InBlendCurve, float Duration) {
}

void USwHighlightManager::SetForceTargetHighlightType(ESwForceTargetHighlightType InHighlightType) {
}

void USwHighlightManager::SetForceTargetHighlightData(FMatrix InToWorld, FVector InExtents) {
}

bool USwHighlightManager::IsHighlightEnabled(const AActor* InActor, ESwHighlightType InHighlightType) const {
    return false;
}

void USwHighlightManager::EnableModifiedForceTargetHighlightIntensity(float InIntensity) {
}

FSwHighlightHandle USwHighlightManager::EnableHighlight(const AActor* InActor, ESwHighlightType InHighlightType) {
    return FSwHighlightHandle{};
}

FSwHighlightHandle USwHighlightManager::EnableForceTargetHighlight(const AActor* InActor, ESwHighlightType InHighlightType, ESwForceTargetHighlightType InForceTargetHighlightType) {
    return FSwHighlightHandle{};
}

void USwHighlightManager::DisableModifiedForceTargetHighlightIntensity() {
}

void USwHighlightManager::DisableHighlightByHandle(FSwHighlightHandle InHandle) {
}

void USwHighlightManager::DisableHighlight(const AActor* InActor, ESwHighlightType InHighlightType) {
}

USwHighlightManager::USwHighlightManager() {
    // Null default object.
}

