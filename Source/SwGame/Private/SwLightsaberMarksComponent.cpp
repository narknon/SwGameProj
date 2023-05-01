#include "SwLightsaberMarksComponent.h"

#include "DecalTrailComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DecalTrailComponent -FallbackName=DecalTrailComponent

bool USwLightsaberMarksComponent::TracingActive() const {
    return false;
}

void USwLightsaberMarksComponent::StopTracingSyncKill() {
}

void USwLightsaberMarksComponent::StopTracing() {
}

void USwLightsaberMarksComponent::StartTracingSyncKill() {
}

void USwLightsaberMarksComponent::StartTracing() {
}

void USwLightsaberMarksComponent::OwnerInstigatedAnyDamage(float Damage, const FRsDamageParams& DamageInfo, AActor* DamagedActor, AActor* DamageCauser) {
}

void USwLightsaberMarksComponent::OnParticleSystemFinished(UParticleSystemComponent* FinishedComponent) {
}

void USwLightsaberMarksComponent::ForceStopMarksAudio() {
}

USwLightsaberMarksComponent::USwLightsaberMarksComponent() {
    this->TrailTemplate = CreateDefaultSubobject<UDecalTrailComponent>(TEXT("TrailTemplate"));
    this->SurfaceTypeTable = NULL;
    this->ActorInfoTable = NULL;
    this->AudioStartEvent = NULL;
    this->AudioStopEvent = NULL;
    this->AudioComponent = NULL;
}

