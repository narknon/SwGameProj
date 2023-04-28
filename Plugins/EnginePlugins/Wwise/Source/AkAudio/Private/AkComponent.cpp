#include "AkComponent.h"

void UAkComponent::UseReverbVolumes(bool inUseReverbVolumes) {
}

void UAkComponent::UseEarlyReflections(UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const FString& AuxBusName) {
}

void UAkComponent::SetSwitch(UAkSwitchValue* SwitchValue, const FString& SwitchGroup, const FString& SwitchState) {
}

void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed) {
}

void UAkComponent::SetOutputBusVolume(float BusVolume) {
}

void UAkComponent::SetListeners(const TArray<UAkComponent*>& Listeners) {
}

void UAkComponent::SetGameObjectRadius(float in_outerRadius, float in_innerRadius) {
}

void UAkComponent::SetEarlyReflectionsVolume(float SendVolume) {
}

void UAkComponent::SetEarlyReflectionsAuxBus(const FString& AuxBusName) {
}

void UAkComponent::SetAttenuationScalingFactor(float Value) {
}

void UAkComponent::RemoveTrackingData(UAkAudioEvent* StartEvent, UAkAudioEvent* EndEvent) {
}

void UAkComponent::PostTrigger(UAkTrigger* TriggerValue, const FString& Trigger) {
}

void UAkComponent::PostAssociatedAkEventAndWaitForEndAsync(int32& PlayingID, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
}

int32 UAkComponent::PostAssociatedAkEventAndWaitForEnd(const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
    return 0;
}

int32 UAkComponent::PostAkEventByName(const FString& in_EventName) {
    return 0;
}

void UAkComponent::PostAkEventAndWaitForEndAsync(UAkAudioEvent* AkEvent, int32& PlayingID, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
}

int32 UAkComponent::PostAkEventAndWaitForEnd(UAkAudioEvent* AkEvent, const FString& in_EventName, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
    return 0;
}

float UAkComponent::GetRelativeVelocityRTPC() {
    return 0.0f;
}

float UAkComponent::GetAttenuationRadius() const {
    return 0.0f;
}

float UAkComponent::GetAngularVelocityRTPC() {
    return 0.0f;
}

void UAkComponent::EnableRelativeVelocityRTPC(float MaxRelativeVelocity, float MinRelativeVelocity, bool DebugDraw, int32 InterpolationTimeMs) {
}

void UAkComponent::EnableAngularVelocityRTPC(float MaxAngularVelocity, float MinAngularVelocity, bool DebugDraw, int32 InterpolationTimeMs) {
}

void UAkComponent::DisableRelativeVelocityRTPC() {
}

void UAkComponent::DisableAngularVelocityRTPC() {
}

bool UAkComponent::ContainsMatchingAnimNotifyTrackingData(UAkAudioEvent* StartEvent, UAkAudioEvent* EndEvent) {
    return false;
}

void UAkComponent::AddTrackingData(UAkAudioEvent* StartEvent, UAkAudioEvent* EndEvent) {
}

UAkComponent::UAkComponent() {
    // Null default object.
}

