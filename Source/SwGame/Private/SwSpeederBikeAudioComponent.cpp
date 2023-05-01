#include "SwSpeederBikeAudioComponent.h"

void USwSpeederBikeAudioComponent::Update(const float TurnInput, const float DeltaTime, USkeletalMeshComponent* MeshComp) {
}

void USwSpeederBikeAudioComponent::StopEngine() {
}

void USwSpeederBikeAudioComponent::StartEngineRidden(APawn* Rider) {
}

void USwSpeederBikeAudioComponent::StartEngineIdle() {
}






void USwSpeederBikeAudioComponent::InitFromBeginPlay() {
}

void USwSpeederBikeAudioComponent::HandleCollision(const float NewHealth, const UPrimitiveComponent* Collider, const FVector& CollisionLocation, const FVector& CollisionNormal) {
}

bool USwSpeederBikeAudioComponent::GetIsScraping() {
    return false;
}

USwSpeederBikeAudioComponent::USwSpeederBikeAudioComponent() {
    this->TraceLength = 1500.00f;
    this->MaxRelativeVelocity = 10000.00f;
    this->EngineIdleAudioEvent = NULL;
    this->EngineRiddenAudioEvent = NULL;
    this->LightDamageAudioEvent = NULL;
    this->LightDamagedAudioThreshold = 50.00f;
    this->MediumDamageAudioEvent = NULL;
    this->MediumDamagedAudioThreshold = 40.00f;
    this->CriticalDamageAudioEvent = NULL;
    this->CriticalDamagedAudioThreshold = 10.00f;
    this->SmallLandingAudioEvent = NULL;
    this->MediumLandingAudioEvent = NULL;
    this->LargeLandingAudioEvent = NULL;
    this->ScrapeAudioEvent = NULL;
    this->ShiftingWeightAudioEvent = NULL;
    this->SettlingWeightAudioEvent = NULL;
    this->LeftWhooshAudioEvent = NULL;
    this->RightWhooshAudioEvent = NULL;
    this->StopWhooshesAudioEvent = NULL;
    this->WhooshComponentResetSpeed = 50.00f;
    this->LeftWhooshIntensityRTPC = NULL;
    this->RightWhooshIntensityRTPC = NULL;
    this->WhooshVelocityRTPC = NULL;
    this->PitchRTPC = NULL;
    this->PitchRTPCMultiplier = 1.40f;
    this->DeltaRollRTPC = NULL;
    this->RollRTPC = NULL;
    this->SpeederAirRTPC = NULL;
    this->SpeederAirVelocityRTPC = NULL;
    this->DegreesFromDownToAllowWallCollisionTriggers = 70.00f;
    this->DegreesOfDirectionalChangeThreshold = 30.00f;
    this->MediumImpactVelocityChangeThreshold = 500.00f;
    this->LargeImpactVelocityChangeThreshold = 800.00f;
    this->TimeGateBetweenImpacts = 0.20f;
    this->TurnTriggerInputValue = 0.60f;
    this->SettleTriggerInputValue = 0.30f;
    this->MaxBikeVelocity = 6000.00f;
    this->VelocityWhooshCutoffDecimal = 0.40f;
}

